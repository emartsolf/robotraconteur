//This file is automatically generated. DO NOT EDIT!
package com.robotraconteur.testing.TestService1;
import java.util.*;
import com.robotraconteur.*;
public class teststruct2_stub implements IStructureStub {
    public teststruct2_stub(com__robotraconteur__testing__TestService1Factory d) {def=d;}
    private com__robotraconteur__testing__TestService1Factory def;
    public MessageElementStructure packStructure(Object s1) {
    vectorptr_messageelement m=new vectorptr_messageelement();
    try {
    if (s1 ==null) return null;
    teststruct2 s = (teststruct2)s1;
    MessageElementUtil.addMessageElementDispose(m,MessageElementUtil.newMessageElementDispose("mydat",s.mydat));
    return new MessageElementStructure("com.robotraconteur.testing.TestService1.teststruct2",m);
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
    teststruct2 s=new teststruct2();
    s.mydat =MessageElementUtil.<double[]>castDataAndDispose(MessageElement.findElement(mm,"mydat"));
    T st; try {st=(T)s;} catch (Exception e) {throw new RuntimeException(new DataTypeMismatchException("Wrong structuretype"));}
    return st;
    }
    finally {
    if (mm!=null) mm.delete();
    }
    }
}
