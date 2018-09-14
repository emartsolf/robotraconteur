package com.robotraconteur;

import java.lang.reflect.Array;
import java.math.BigInteger;

public class CStructureMultiDimArrayMemoryClient<T> extends CStructureMultiDimArrayMemory<T> {

	WrappedCStructureMultiDimArrayMemoryClient innerclient;

	private static int[] vector_uint64_to_int(vector_uint64_t v)
	{
		int[] o=new int[v.size()];
		for (int i=0; i<o.length; i++)
		{
			o[i]=v.get(i).intValue();
		}
		v.finalize();
		return o;		
	}
	
	private static long[] vector_uint64_to_long(vector_uint64_t v)
	{
		long[] o=new long[v.size()];
		for (int i=0; i<o.length; i++)
		{
			o[i]=v.get(i).longValue();
		}
		v.finalize();
		return o;		
	}
	
	private vector_uint64_t long_to_vector_uint64(long[] v)
	{
		vector_uint64_t o=new vector_uint64_t();
		for (int i=0; i<v.length; i++)
		{
			o.add(BigInteger.valueOf(v[i]));
		}
		return o;
	}
	
    class bufferdirector extends WrappedCStructureMultiDimArrayMemoryClientBuffer
    {
        CStructureMultiDimArray buffer;

        public bufferdirector(CStructureMultiDimArray buffer)
        {
            this.buffer = buffer;
        }

        @Override
        public void unpackReadResult(MessageElementCStructureMultiDimArray res, vector_uint64_t bufferpos, vector_uint64_t count)
        {        	
            try
            {
                CStructureMultiDimArray res1 = (CStructureMultiDimArray)RobotRaconteurNode.s().unpackStructure(res);
                buffer.assignSubArray(vector_uint64_to_int(bufferpos), res1, new int[buffer.dims.length], vector_uint64_to_int(count));                    
            }
        	finally
        	{
        		res.finalize();        		
        	}
        }

        @Override
        public MessageElementCStructureMultiDimArray packWriteRequest(vector_uint64_t bufferpos, vector_uint64_t count)
        {            
        	int elemcount = 1;
        	for (int i=0; i<count.size(); i++)
        	{
        		elemcount *= count.get(i).intValue();
        	}
        	
        	T o_array=(T)Array.newInstance(buffer.cstruct_array.getClass().getComponentType(),elemcount);
        	
        	int[] bufferpos1=vector_uint64_to_int(bufferpos);
        	int[] count1=vector_uint64_to_int(count);
        	
            CStructureMultiDimArray o = new CStructureMultiDimArray(count1, o_array);
            buffer.retrieveSubArray(bufferpos1, o, new int[buffer.dims.length], count1);
            return (MessageElementCStructureMultiDimArray)RobotRaconteurNode.s().packStructure(o);
            
        }
    }

    public CStructureMultiDimArrayMemoryClient(WrappedCStructureMultiDimArrayMemoryClient innerclient)
    {
        this.innerclient = innerclient;
    }

    
    public MemberDefinition_Direction direction()
    {        
        return innerclient.direction();        
    }

    public void Attach(CStructureMultiDimArray memory)
    {
        throw new IllegalStateException("Invalid for memory client");
    }

    @Override
    public long dimCount()
    {        
        return innerclient.dimCount().longValue();        
    }

    @Override
    public long[] dimensions()
    {        
    	
    	return vector_uint64_to_long(innerclient.dimensions());        
    }

    @Override
    public void read(long[] memorypos, CStructureMultiDimArray buffer, long[] bufferpos, long[] count)
    {
        bufferdirector buffer1 = new bufferdirector(buffer);
        try
        {
            innerclient.read(long_to_vector_uint64(memorypos), buffer1, long_to_vector_uint64(bufferpos), long_to_vector_uint64(count));
        }
        finally
        {
        	buffer1.finalize();
        }
    }

    @Override
    public void write(long[] memorypos, CStructureMultiDimArray buffer, long[] bufferpos, long[] count)
    {
        bufferdirector buffer1 = new bufferdirector(buffer);
        try
        {
            innerclient.write(long_to_vector_uint64(memorypos), buffer1, long_to_vector_uint64(bufferpos), long_to_vector_uint64(count));
        }
        finally
        {
        	buffer1.finalize();
        }
    }
}


