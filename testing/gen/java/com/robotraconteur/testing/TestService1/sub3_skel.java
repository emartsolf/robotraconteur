//This file is automatically generated. DO NOT EDIT!
package com.robotraconteur.testing.TestService1;
import java.util.*;
import com.robotraconteur.*;
public class sub3_skel extends ServiceSkel {
    protected sub3 obj;
    public sub3_skel(Object o) { 
    super(o);
    obj=(sub3)o;
    }
    public void releaseCastObject() { 
    obj=null;
    super.releaseCastObject();
    }
    public MessageElement callGetProperty(String membername) {
    if(membername.equals( "ind"))
    {
    String ret=obj.get_ind();
    return MessageElementUtil.newMessageElementDispose("return",ret);
    }
    if(membername.equals( "data2"))
    {
    String ret=obj.get_data2();
    return MessageElementUtil.newMessageElementDispose("return",ret);
    }
    if(membername.equals( "data3"))
    {
    double ret=obj.get_data3();
    return MessageElementUtil.newMessageElementDispose("return",new double[] {ret});
    }
    throw new MemberNotFoundException("Member not found");
    }
    public void callSetProperty(String membername, MessageElement m) {
    if(membername.equals( "ind"))
    {
    obj.set_ind(MessageElementUtil.<String>castDataAndDispose(m));
    return;
    }
    if(membername.equals( "data2"))
    {
    obj.set_data2(MessageElementUtil.<String>castDataAndDispose(m));
    return;
    }
    if(membername.equals( "data3"))
    {
    obj.set_data3((MessageElementUtil.<double[]>castDataAndDispose(m))[0]);
    return;
    }
    throw new MemberNotFoundException("Member not found");
    }
    public MessageElement callFunction(String rr_membername, vectorptr_messageelement rr_m) {
    if(rr_membername.equals( "add"))
    {
    double d=(MessageElementUtil.<double[]>castDataAndDispose(vectorptr_messageelement_util.findElement(rr_m,"d")))[0];
    double rr_ret=obj.add(d);
    return MessageElementUtil.newMessageElementDispose("return",new double[] {rr_ret});
    }
    throw new MemberNotFoundException("Member not found");
    }
    public Object getSubObj(String name, String ind) {
    throw new MemberNotFoundException("");
    }
    public void registerEvents(Object obj1) {
    obj=(sub3)obj1;
    }
    public void unregisterEvents(Object obj1) {
    obj=(sub3)obj1;
    }
    public Object getCallbackFunction(long endpoint, String membername) {
    throw new MemberNotFoundException("Member not found");
    }
    public  void initPipeServers(Object obj1) {
    obj=(sub3)obj1;
    }
    public void initCallbackServers(Object obj1) {
    obj=(sub3)obj1;
    }
    public void initWireServers(Object obj1) {
    obj=(sub3)obj1;
    }
    public WrappedArrayMemoryDirector getArrayMemory(String name) {
    throw new MemberNotFoundException("Member Not Found");
    }
    public WrappedMultiDimArrayMemoryDirector getMultiDimArrayMemory(String name) {
    throw new MemberNotFoundException("Member Not Found");
    }
    public WrappedCStructureArrayMemoryDirector getCStructureArrayMemory(String name) {
    throw new MemberNotFoundException("Member Not Found");
    }
    public WrappedCStructureMultiDimArrayMemoryDirector getCStructureMultiDimArrayMemory(String name) {
    throw new MemberNotFoundException("Member Not Found");
    }
    public String getRRType() { return "com.robotraconteur.testing.TestService1.sub3"; }
}
