package com.robotraconteur;

import java.util.Enumeration;
import java.util.Vector;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Map;

public class ServiceSubscription
{
	class WrappedServiceSubscriptionDirectorJava extends WrappedServiceSubscriptionDirector
	{
		WeakReference<ServiceSubscription> subscription1;

		WrappedServiceSubscriptionDirectorJava(ServiceSubscription subscription)
		{
			subscription1 = new WeakReference<ServiceSubscription>(subscription);
		}

		@Override
		public void clientConnected(WrappedServiceSubscription subscription, WrappedServiceSubscriptionClientID id, WrappedServiceStub client)
		{
			ServiceSubscription s=subscription1.get();
			if (s==null) return;
						
			Object client2=s.getClientStub(client);

			synchronized (s.connect_listeners)
			{
				for(Enumeration<Action3<ServiceSubscription, ServiceSubscriptionClientID, Object>> e= s.connect_listeners.elements(); e.hasMoreElements(); )
				{
					Action3<ServiceSubscription, ServiceSubscriptionClientID, Object> ee=e.nextElement();
					ee.action(s, new ServiceSubscriptionClientID(id), client2);
						
				}
			}

		}

		@Override
		public void clientDisconnected(WrappedServiceSubscription subscription, WrappedServiceSubscriptionClientID id, WrappedServiceStub client)
		{
			ServiceSubscription s=subscription1.get();
			if (s==null) return;
						
			Object client2=s.deleteClientStub(client);

			synchronized (s.disconnect_listeners)
			{
				for(Enumeration<Action3<ServiceSubscription, ServiceSubscriptionClientID, Object>> e= s.disconnect_listeners.elements(); e.hasMoreElements(); )
				{
					Action3<ServiceSubscription, ServiceSubscriptionClientID, Object> ee=e.nextElement();
					ee.action(s, new ServiceSubscriptionClientID(id), client2);
						
				}
			}

		}
				
	}

	Vector<Action3<ServiceSubscription, ServiceSubscriptionClientID, Object>> connect_listeners = new Vector<Action3<ServiceSubscription, ServiceSubscriptionClientID, Object>>();
	Vector<Action3<ServiceSubscription, ServiceSubscriptionClientID, Object>> disconnect_listeners = new Vector<Action3<ServiceSubscription, ServiceSubscriptionClientID, Object>>();
	HashMap<Integer,Object> client_stubs = new HashMap<Integer,Object>();

	Object getClientStub(WrappedServiceStub innerstub)
    {
        if (innerstub == null) return null;

        synchronized(this)
        {
            int id = innerstub.getObjectHeapID();
            
            if (id != 0 && client_stubs.containsKey(id))
            {
                return client_stubs.get(id);
            }
            else
            {
                ServiceFactory f;
                   
                f = RobotRaconteurNode.s().getServiceType(innerstub.getRR_objecttype().getServiceDefinition().getName());
                  
                Object stub = f.createStub(innerstub);
                int id2 = innerstub.getObjectHeapID();
                if (id2 == 0) return null;
                client_stubs.put(id2, stub);
                return stub;                    
            }
        }
    }

    Object deleteClientStub(WrappedServiceStub innerstub)
    {
        if (innerstub == null) return null;

        synchronized (this)
        {
            int id = innerstub.getObjectHeapID();
                
            if (id != 0)
            {                
                if (client_stubs.containsKey(id))
                {
					Object stub=client_stubs.get(id);
                    client_stubs.remove(id);
                    return stub;
                }
            }
            return null;
        }
    }

	WrappedServiceSubscription _subscription;

	ServiceSubscription(WrappedServiceSubscription subscription)
	{
		_subscription = subscription;
		WrappedServiceSubscriptionDirectorJava director = new WrappedServiceSubscriptionDirectorJava(this);
		int id=RRObjectHeap.addObject(director);
		subscription.setRRDirector(director,id);
	}

	public Map<ServiceSubscriptionClientID, Object> getConnectedClients()
	{
		HashMap<ServiceSubscriptionClientID, Object> o = new HashMap<ServiceSubscriptionClientID, Object>();
		map_subscriptionclients c1 = _subscription.getConnectedClients();

		vectorptr_subscriptionclientid c2=RobotRaconteurJava.wrappedServiceSubscriptionClientsToVector(c1);

		for (int i=0; i< c2.size(); i++)
		{
			WrappedServiceSubscriptionClientID id2=c2.get(i);
			Object client=c1.get(id2);
			o.put(new ServiceSubscriptionClientID(id2), client);
		}

		return o;
	}

	public void close()
	{
		_subscription.close();
	}

	public void claimClient(Object client)
	{
		if (!(client instanceof ServiceStub))
		{
			throw new UnsupportedOperationException("Only service stubs can be monitored by RobotRaconteurNode");
		}
		ServiceStub s = (ServiceStub)client;

		_subscription.claimClient(s.rr_innerstub);
	}

	public void releaseClient(Object client)
	{
		if (!(client instanceof ServiceStub))
		{
			throw new UnsupportedOperationException("Only service stubs can be monitored by RobotRaconteurNode");
		}
		ServiceStub s = (ServiceStub)client;

		_subscription.releaseClient(s.rr_innerstub);
	}

	public int getConnectRetryDelay()
	{
		return (int)_subscription.getConnectRetryDelay();
	}

	public void setConnectRetryDelay(int millis)
	{
		_subscription.setConnectRetryDelay(millis);
	}


	public void addConnectListener(Action3<ServiceSubscription, ServiceSubscriptionClientID, Object> listener)
	{
		synchronized (connect_listeners)
		{
			connect_listeners.add(listener);
		}
	}

	public void removeConnectListener(Action3<ServiceSubscription, ServiceSubscriptionClientID, Object> listener)
	{
		synchronized (connect_listeners)
		{
			connect_listeners.remove(listener);
		}
	}

	public void addDisconnectListener(Action3<ServiceSubscription, ServiceSubscriptionClientID, Object> listener)
	{
		synchronized (disconnect_listeners)
		{
			disconnect_listeners.add(listener);
		}
	}

	public void removeDisconnectListener(Action3<ServiceSubscription, ServiceSubscriptionClientID, Object> listener)
	{
		synchronized (disconnect_listeners)
		{
			disconnect_listeners.remove(listener);
		}
	}

	public <T> WireSubscription<T> subscribeWire(String wire_name)
	{
		return subscribeWire(wire_name, null);
	}

	public <T> WireSubscription<T> subscribeWire(String wire_name, String service_path)	
	{
		if (service_path == null)
		{
			service_path = "";
		}
		WrappedWireSubscription s1=_subscription.subscribeWire(wire_name, service_path);
		return new WireSubscription<T>(s1);
	}

	public <T> PipeSubscription<T> subscribePipe(String pipe_name)
	{
		return subscribePipe(pipe_name, null, -1);
	}

	public <T> PipeSubscription<T> subscribePipe(String pipe_name, String service_path)
	{
		return subscribePipe(pipe_name, service_path, -1);
	}

	public <T> PipeSubscription<T> subscribePipe(String pipe_name, String service_path, int max_backlog)	
	{
		if (service_path == null)
		{
			service_path = "";
		}
		WrappedPipeSubscription s1=_subscription.subscribePipe(pipe_name, service_path, max_backlog);
		return new PipeSubscription<T>(s1);
	}

	public <T> T getDefaultClient()
	{
		WrappedServiceStub s = _subscription.getDefaultClient();
        return (T)getClientStub(s);	
	}

	public <T> T getDefaultClientWait()
	{
		return getDefaultClientWait(-1);
	}

	public <T> T getDefaultClientWait(int timeout)
	{
		WrappedServiceStub s = _subscription.getDefaultClientWait(timeout);
        return (T)getClientStub(s);	
	}

	public void asyncGetDefaultClient(Action2<Object,RuntimeException> handler, int timeout)
	{
		AsyncStubReturnDirectorImpl<Object> h=new AsyncStubReturnDirectorImpl<Object>(handler);
		int id1=RRObjectHeap.addObject(h);
		_subscription.asyncGetDefaultClient(timeout, h, id1);
	}

	public void asyncGetDefaultClient(Action2<Object,RuntimeException> handler)
	{
		asyncGetDefaultClient(handler, -1);
	}

}