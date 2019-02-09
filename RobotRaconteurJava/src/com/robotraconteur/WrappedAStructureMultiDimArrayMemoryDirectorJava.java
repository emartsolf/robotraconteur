package com.robotraconteur;

import java.lang.reflect.Array;
import java.math.BigInteger;

public class WrappedAStructureMultiDimArrayMemoryDirectorJava<T> extends WrappedAStructureMultiDimArrayMemoryDirector  {

	AStructureMultiDimArrayMemory<T> mem;

    //public int memoryid = 0;

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
	
	Class<?> mem_type;
	
    public WrappedAStructureMultiDimArrayMemoryDirectorJava(AStructureMultiDimArrayMemory<T> mem, Class<?> mem_type)
    {
        this.mem = mem;
        this.mem_type=mem_type;
        this.setObjectheapid(RRObjectHeap.addObject(this));
    }

    @Override
    public BigInteger dimCount()
    {
        try
        {
            return BigInteger.valueOf(mem.dimCount());
        }
        catch (Exception e)
        {
        	MessageEntry merr = new MessageEntry();
            try
            {
                RobotRaconteurExceptionUtil.exceptionToMessageEntry(e, merr);
                RRDirectorExceptionHelper.setError(merr);
                return BigInteger.valueOf(0);
            }
            finally
            {
            	merr.finalize();
            }

        }
    }

    @Override
    public vector_uint64_t dimensions()
    {
        try
        {
            return long_to_vector_uint64(mem.dimensions());
        }
        catch (Exception e)
        {
            MessageEntry merr = new MessageEntry();
            try
            {
                RobotRaconteurExceptionUtil.exceptionToMessageEntry(e, merr);
                RRDirectorExceptionHelper.setError(merr);
                return new vector_uint64_t();
            }
            finally
            {
            	merr.finalize();
            }

        }
    }

    @Override
    public MessageElementAStructureMultiDimArray read(vector_uint64_t memorypos, vector_uint64_t bufferpos, vector_uint64_t count)
    {
    	int elemcount = 1;
    	int[] count2=new int[count.size()];
    	for (int i=0; i<count.size(); i++)
    	{
    		elemcount *= count.get(i).intValue();
    		count2[i]=count.get(i).intValue();
    	}
    	
        try
        {
        	long[] memorypos1=vector_uint64_to_long(memorypos);
        	long[] count1=vector_uint64_to_long(count);
            AStructureMultiDimArray buffer3 = new AStructureMultiDimArray(count2, Array.newInstance(mem_type, elemcount));
            mem.read(memorypos1, buffer3, new long[count1.length], count1);
            return (MessageElementAStructureMultiDimArray)RobotRaconteurNode.s().packStructure(buffer3);            
        }
        catch (Exception e)
        {
            MessageEntry merr = new MessageEntry();
            try
            {
                RobotRaconteurExceptionUtil.exceptionToMessageEntry(e, merr);
                RRDirectorExceptionHelper.setError(merr);
            }
            finally
            {
            	merr.finalize();
            }
            return null;
        }
    }

    @Override
    public void write(vector_uint64_t memorypos, MessageElementAStructureMultiDimArray buffer, vector_uint64_t bufferpos, vector_uint64_t count)
    {
        try
        {
            AStructureMultiDimArray buffer2 = (AStructureMultiDimArray)RobotRaconteurNode.s().unpackStructure(buffer);
            mem.write(vector_uint64_to_long(memorypos), buffer2, vector_uint64_to_long(bufferpos), vector_uint64_to_long(count));            
        }
        catch (Exception e)
        {
        	MessageEntry merr = new MessageEntry();
            try
            {
                RobotRaconteurExceptionUtil.exceptionToMessageEntry(e, merr);
                RRDirectorExceptionHelper.setError(merr);
            }
            finally
            {
            	merr.finalize();
            }
        }
        finally
        {
        	if (buffer!=null) buffer.finalize();
        }
    }
	
}