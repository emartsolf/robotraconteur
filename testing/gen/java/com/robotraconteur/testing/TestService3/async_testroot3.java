//This file is automatically generated. DO NOT EDIT!
package com.robotraconteur.testing.TestService3;
import java.util.*;
import com.robotraconteur.*;
public interface async_testroot3
{
    void async_get_readme(Action2<Integer,RuntimeException> rr_handler, int rr_timeout);
    void async_set_readme(int value, Action1<RuntimeException> rr_handler, int rr_timeout);
    void async_get_writeme(Action2<Integer,RuntimeException> rr_handler, int rr_timeout);
    void async_set_writeme(int value, Action1<RuntimeException> rr_handler, int rr_timeout);
    void async_get_unknown_modifier(Action2<Integer,RuntimeException> rr_handler, int rr_timeout);
    void async_set_unknown_modifier(int value, Action1<RuntimeException> rr_handler, int rr_timeout);
    void async_get_testenum1_prop(Action2<testenum1,RuntimeException> rr_handler, int rr_timeout);
    void async_set_testenum1_prop(testenum1 value, Action1<RuntimeException> rr_handler, int rr_timeout);
    void async_get_testcstruct1_prop(Action2<testcstruct1,RuntimeException> rr_handler, int rr_timeout);
    void async_set_testcstruct1_prop(testcstruct1 value, Action1<RuntimeException> rr_handler, int rr_timeout);
    void async_get_teststruct3_prop(Action2<teststruct3,RuntimeException> rr_handler, int rr_timeout);
    void async_set_teststruct3_prop(teststruct3 value, Action1<RuntimeException> rr_handler, int rr_timeout);
    void async_testcstruct1_func1(testcstruct1 s,Action1<RuntimeException> rr_handler,int rr_timeout);
    void async_testcstruct1_func2(Action2<testcstruct1,RuntimeException> rr_handler,int rr_timeout);
    void async_gen_func1(Action2<Generator2<double[]>, RuntimeException> rr_handler,int rr_timeout);
    void async_gen_func2(String name,Action2<Generator2<UnsignedBytes>, RuntimeException> rr_handler,int rr_timeout);
    void async_gen_func3(String name,Action2<Generator3<UnsignedBytes>, RuntimeException> rr_handler,int rr_timeout);
    void async_gen_func4(Action2<Generator1<UnsignedBytes,UnsignedBytes>, RuntimeException> rr_handler,int rr_timeout);
    void async_gen_func5(Action2<Generator1<com.robotraconteur.testing.TestService1.teststruct2,com.robotraconteur.testing.TestService1.teststruct2>, RuntimeException> rr_handler,int rr_timeout);
    void async_get_o4(Action2<obj4,RuntimeException> handler, int timeout);
}

