package com.robotraconteur;

import java.lang.reflect.Array;
import java.math.BigInteger;

public class WrappedAStructureArrayMemoryDirectorJava<T> extends WrappedAStructureArrayMemoryDirector {

	AStructureArrayMemory<T> mem;

	Class<?> mem_type;
    //public int memoryid = 0;

    public WrappedAStructureArrayMemoryDirectorJava(AStructureArrayMemory<T> mem, Class<?> mem_type)
    {
        this.mem = mem;

        this.setObjectheapid(RRObjectHeap.addObject(this));
        this.mem_type=mem_type;
    }

    @Override
    public BigInteger length()
    {
        try
        {
            return BigInteger.valueOf(mem.length());
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
    public MessageElementAStructureArray read(BigInteger memorypos, BigInteger bufferpos, BigInteger count)
    {
        try
        {
            T buffer3 = (T)Array.newInstance(mem_type,count.intValue());
            mem.read(memorypos.longValue(), buffer3, (long)0, count.longValue());

            return (MessageElementAStructureArray)RobotRaconteurNode.s().packStructure(buffer3);                
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
    public void write(BigInteger memorypos, MessageElementAStructureArray buffer, BigInteger bufferpos, BigInteger count)
    {
        try
        {
			T buffer2 = (T)RobotRaconteurNode.s().unpackStructure(buffer);
			mem.write(memorypos.longValue(), buffer2, bufferpos.longValue(), count.longValue());
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