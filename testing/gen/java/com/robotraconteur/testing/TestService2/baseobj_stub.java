//This file is automatically generated. DO NOT EDIT!
package com.robotraconteur.testing.TestService2;
import java.util.*;
import com.robotraconteur.*;
public class baseobj_stub extends ServiceStub implements baseobj, async_baseobj {
    private CallbackClient<Action2<Double, Double>> rr_cb2;
    private Pipe<double[]> rr_p1;
    private Wire<double[]> rr_w1;
    private ArrayMemory<double[]> rr_m1;
    public baseobj_stub(WrappedServiceStub innerstub) {
        super(innerstub); 
    rr_cb2=new CallbackClient<Action2<Double, Double>>("cb2");
    rr_p1=new Pipe<double[]>(innerstub.getPipe("p1"));
    rr_w1=new Wire<double[]>(innerstub.getWire("w1"));
    rr_m1=new ArrayMemoryClient<double[]>(innerstub.getArrayMemory("m1"));
    }
    public double get_d1() {
    return (MessageElementUtil.<double[]>castDataAndDispose(rr_innerstub.propertyGet("d1")))[0];
    }
    public void set_d1(double value) {
    MessageElement m=null;
    try {
    m=MessageElementUtil.<double[]>packArray("value",new double[] {value});
    rr_innerstub.propertySet("d1", m);
    }
    finally {
    if (m!=null) m.delete();
    }
    }
    public double[] get_d2() {
    return MessageElementUtil.<double[]>unpackArray(rr_innerstub.propertyGet("d2"));
    }
    public void set_d2(double[] value) {
    MessageElement m=null;
    try {
    m=MessageElementUtil.<double[]>packArray("value",value);
    rr_innerstub.propertySet("d2", m);
    }
    finally {
    if (m!=null) m.delete();
    }
    }
    public double func3(double d1, double d2) {
    vectorptr_messageelement rr_param=new vectorptr_messageelement();
    MessageElement rr_me=null;
    try {
    MessageElementUtil.addMessageElementDispose(rr_param, MessageElementUtil.<double[]>packArray("d1",new double[] {d1}));
    MessageElementUtil.addMessageElementDispose(rr_param, MessageElementUtil.<double[]>packArray("d2",new double[] {d2}));
    rr_me=rr_innerstub.functionCall("func3",rr_param);
    return (MessageElementUtil.<double[]>castDataAndDispose(rr_me))[0];
    }
    finally {
    rr_param.delete();
    if (rr_me!=null) rr_me.delete();
    }
    }
    private  Vector<Action> rr_ev1=new Vector<Action>();
    public void  addev1Listener(Action listener) {
    synchronized(rr_ev1) {
    rr_ev1.add(listener);
    }
    }
    public void  removeev1Listener(Action listener) {
    synchronized(rr_ev1) {
    rr_ev1.remove(listener);
    }
    }
    public void dispatchEvent(String rr_membername, vectorptr_messageelement rr_m) {
    if(rr_membername.equals( "ev1"))
    {
    for (Action rr_e : this.rr_ev1) {
    rr_e.action();
    }
    return;
    }
    }
    public subobj get_o5() {
    return (subobj)findObjRefTyped("o5","com.robotraconteur.testing.TestService2.subobj");
    }
    public Pipe<double[]> get_p1()
    { return rr_p1;  }
    public void set_p1(Pipe<double[]> value)
    { throw new RuntimeException();}
    public Callback<Action2<Double, Double>> get_cb2()
    { return rr_cb2;  }
    public void set_cb2(Callback<Action2<Double, Double>> value)
    { throw new RuntimeException();}
    public Wire<double[]> get_w1()
    { return rr_w1;  }
    public void set_w1(Wire<double[]> value)
    { throw new RuntimeException();}
    public MessageElement callbackCall(String rr_membername, vectorptr_messageelement rr_m) {
    if(rr_membername.equals( "cb2"))
    {
    double d1=(MessageElementUtil.<double[]>castDataAndDispose(vectorptr_messageelement_util.findElement(rr_m,"d1")))[0];
    double d2=(MessageElementUtil.<double[]>castDataAndDispose(vectorptr_messageelement_util.findElement(rr_m,"d2")))[0];
    get_cb2().getFunction().action(Double.valueOf(d1), Double.valueOf(d2));
    return new MessageElement("return",new int[] {0});
    }
    throw new MemberNotFoundException("Member not found");
    }
    public ArrayMemory<double[]> get_m1()
    { return rr_m1; }
    public void async_get_d1(Action2<Double,RuntimeException> rr_handler, int rr_timeout)
    {
    rr_async_PropertyGet("d1",new rrend_async_get_d1(),rr_handler,rr_timeout);
    }
    protected class rrend_async_get_d1 implements Action3<MessageElement,RuntimeException,Object> {
    public void action(MessageElement value ,RuntimeException err,Object param)
    {
    Action2<Double,RuntimeException> rr_handler=(Action2<Double,RuntimeException>)param;
    if (err!=null)
    {
    rr_handler.action(0.0,err);
    return;
    }
    Double rr_ret;
    try {
    rr_ret=(MessageElementUtil.<double[]>castDataAndDispose(value))[0];
    } catch (RuntimeException err2) {
    rr_handler.action(0.0,err2);
    return;
    }
    rr_handler.action(rr_ret,null);
    }
    }
    public void async_set_d1(double value, Action1<RuntimeException> rr_handler, int rr_timeout)
    {
    MessageElement m=null;
    try {
    m=MessageElementUtil.<double[]>packArray("value",new double[] {value});
    rr_async_PropertySet("d1",m,new rrend_async_set_d1(),rr_handler,rr_timeout);
    }
    finally {
    if (m!=null) m.delete();
    }
    }
    protected class rrend_async_set_d1 implements Action3<MessageElement,RuntimeException,Object> {
    public void action(MessageElement m ,RuntimeException err,Object param)
    {
    Action1<RuntimeException> rr_handler=(Action1<RuntimeException>)param;
    if (err!=null)
    {
    rr_handler.action(err);
    return;
    }
    rr_handler.action(null);
    }
    }
    public void async_get_d2(Action2<double[],RuntimeException> rr_handler, int rr_timeout)
    {
    rr_async_PropertyGet("d2",new rrend_async_get_d2(),rr_handler,rr_timeout);
    }
    protected class rrend_async_get_d2 implements Action3<MessageElement,RuntimeException,Object> {
    public void action(MessageElement value ,RuntimeException err,Object param)
    {
    Action2<double[],RuntimeException> rr_handler=(Action2<double[],RuntimeException>)param;
    if (err!=null)
    {
    rr_handler.action(null,err);
    return;
    }
    double[] rr_ret;
    try {
    rr_ret=MessageElementUtil.<double[]>unpackArray(value);
    } catch (RuntimeException err2) {
    rr_handler.action(null,err2);
    return;
    }
    rr_handler.action(rr_ret,null);
    }
    }
    public void async_set_d2(double[] value, Action1<RuntimeException> rr_handler, int rr_timeout)
    {
    MessageElement m=null;
    try {
    m=MessageElementUtil.<double[]>packArray("value",value);
    rr_async_PropertySet("d2",m,new rrend_async_set_d2(),rr_handler,rr_timeout);
    }
    finally {
    if (m!=null) m.delete();
    }
    }
    protected class rrend_async_set_d2 implements Action3<MessageElement,RuntimeException,Object> {
    public void action(MessageElement m ,RuntimeException err,Object param)
    {
    Action1<RuntimeException> rr_handler=(Action1<RuntimeException>)param;
    if (err!=null)
    {
    rr_handler.action(err);
    return;
    }
    rr_handler.action(null);
    }
    }
    public void async_func3(double d1, double d2,Action2<Double,RuntimeException> rr_handler,int rr_timeout)
    {
    vectorptr_messageelement rr_param=new vectorptr_messageelement();
    try {
    MessageElementUtil.addMessageElementDispose(rr_param,MessageElementUtil.<double[]>packArray("d1",new double[] {d1}));
    MessageElementUtil.addMessageElementDispose(rr_param,MessageElementUtil.<double[]>packArray("d2",new double[] {d2}));
    rr_async_FunctionCall("func3",rr_param,new rrend_async_func3(),rr_handler,rr_timeout);
    }
    finally {
    rr_param.delete();
    }
    }
    protected class rrend_async_func3 implements Action3<MessageElement,RuntimeException,Object> {
    public void action(MessageElement ret ,RuntimeException err,Object param)
    {
    Action2<Double,RuntimeException> rr_handler=(Action2<Double,RuntimeException>)param;
    if (err!=null)
    {
    rr_handler.action(0.0,err);
    return;
    }
    Double rr_ret;
    try {
    rr_ret=(MessageElementUtil.<double[]>castDataAndDispose(ret))[0];
    } catch (RuntimeException err2) {
    rr_handler.action(0.0,err2);
    return;
    }
    rr_handler.action(rr_ret, null);
    }
    }
    public void async_get_o5(Action2<subobj,RuntimeException> handler, int timeout) {
    asyncFindObjRefTyped("o5","com.robotraconteur.testing.TestService2.subobj",handler,timeout);
    }
}
