//This file is automatically generated. DO NOT EDIT!
package com.robotraconteur.testing.TestService1;
import java.util.*;
import com.robotraconteur.*;
public class teststruct1_stub implements IStructureStub {
    public teststruct1_stub(com__robotraconteur__testing__TestService1Factory d) {def=d;}
    private com__robotraconteur__testing__TestService1Factory def;
    public MessageElementStructure packStructure(Object s1) {
    vectorptr_messageelement m=new vectorptr_messageelement();
    try {
    if (s1 ==null) return null;
    teststruct1 s = (teststruct1)s1;
    MessageElementUtil.addMessageElementDispose(m,MessageElementUtil.newMessageElementDispose("dat1",s.dat1));
    MessageElementUtil.addMessageElementDispose(m,MessageElementUtil.newMessageElementDispose("str2",s.str2));
    MessageElementUtil.addMessageElementDispose(m,MessageElementUtil.newMessageElementDispose("vec3",RobotRaconteurNode.s().<Integer,String>packMapType(s.vec3,Integer.class,String.class)));
    MessageElementUtil.addMessageElementDispose(m,MessageElementUtil.newMessageElementDispose("dict4",RobotRaconteurNode.s().<String,String>packMapType(s.dict4,String.class,String.class)));
    MessageElementUtil.addMessageElementDispose(m,MessageElementUtil.newMessageElementDispose("list5",RobotRaconteurNode.s().<String>packListType(s.list5,String.class)));
    MessageElementUtil.addMessageElementDispose(m,MessageElementUtil.newMessageElementDispose("struct1",RobotRaconteurNode.s().packStructure(s.struct1)));
    MessageElementUtil.addMessageElementDispose(m,MessageElementUtil.newMessageElementDispose("dstruct2",RobotRaconteurNode.s().<String,teststruct2>packMapType(s.dstruct2,String.class,teststruct2.class)));
    MessageElementUtil.addMessageElementDispose(m,MessageElementUtil.newMessageElementDispose("lstruct3",RobotRaconteurNode.s().<teststruct2>packListType(s.lstruct3,teststruct2.class)));
    MessageElementUtil.addMessageElementDispose(m,MessageElementUtil.newMessageElementDispose("multidimarray",RobotRaconteurNode.s().packMultiDimArray((MultiDimArray)s.multidimarray)));
    MessageElementUtil.addMessageElementDispose(m,MessageElementUtil.newMessageElementDispose("var3",RobotRaconteurNode.s().packVarType(s.var3)));
    return new MessageElementStructure("com.robotraconteur.testing.TestService1.teststruct1",m);
    }
    finally {
    m.delete();
    }
    }
    public <T> T unpackStructure(MessageElementData m) {
    if (m == null ) return null;
    MessageElementStructure m2 = (MessageElementStructure)m;
    vectorptr_messageelement mm=m2.getElements();
    try {
    teststruct1 s=new teststruct1();
    s.dat1 =MessageElementUtil.<double[]>castDataAndDispose(MessageElement.findElement(mm,"dat1"));
    s.str2 =MessageElementUtil.<String>castDataAndDispose(MessageElement.findElement(mm,"str2"));
    s.vec3 =(Map<Integer,String>)RobotRaconteurNode.s().<Integer,String>unpackMapTypeDispose(MessageElement.findElement(mm,"vec3").getData());
    s.dict4 =(Map<String,String>)RobotRaconteurNode.s().<String,String>unpackMapTypeDispose(MessageElement.findElement(mm,"dict4").getData());
    s.list5 =(List<String>)RobotRaconteurNode.s().<String>unpackListTypeDispose(MessageElement.findElement(mm,"list5").getData());
    s.struct1 =RobotRaconteurNode.s().<teststruct2>unpackStructureDispose(MessageElement.findElement(mm,"struct1").<MessageElementStructure>castData());
    s.dstruct2 =(Map<String,teststruct2>)RobotRaconteurNode.s().<String,teststruct2>unpackMapTypeDispose(MessageElement.findElement(mm,"dstruct2").getData());
    s.lstruct3 =(List<teststruct2>)RobotRaconteurNode.s().<teststruct2>unpackListTypeDispose(MessageElement.findElement(mm,"lstruct3").getData());
    s.multidimarray =RobotRaconteurNode.s().unpackMultiDimArrayDispose(MessageElementUtil.<MessageElementMultiDimArray>castDataAndDispose(MessageElement.findElement(mm,"multidimarray")));
    s.var3 =RobotRaconteurNode.s().unpackVarTypeDispose(MessageElement.findElement(mm,"var3"));
    T st; try {st=(T)s;} catch (Exception e) {throw new RuntimeException(new DataTypeMismatchException("Wrong structuretype"));}
    return st;
    }
    finally {
    if (mm!=null) mm.delete();
    }
    }
}
