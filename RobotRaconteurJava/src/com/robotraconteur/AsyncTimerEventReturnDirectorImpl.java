package com.robotraconteur;

public class AsyncTimerEventReturnDirectorImpl extends AsyncTimerEventReturnDirector {
	Action1<TimerEvent> handler_func=null;
	ServiceFactory factory=null;
	
	public AsyncTimerEventReturnDirectorImpl(Action1<TimerEvent> handler_func)
	{
		
		this.handler_func=handler_func;
		
	}
	
	@Override
	public void handler(TimerEvent ev, long error_code, String errorname, String errormessage)
    {
       try
       {		
        handler_func.action(ev);
       }
		catch (Exception e)
		{
			MessageEntry merr = new MessageEntry();
			RobotRaconteurExceptionUtil.exceptionToMessageEntry(e, merr);
			RRDirectorExceptionHelper.setError(merr);
			merr.delete();
		}

    }
}