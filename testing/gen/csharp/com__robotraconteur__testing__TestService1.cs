//This file is automatically generated. DO NOT EDIT!
using System;
using RobotRaconteur;
using System.Collections.Generic;

#pragma warning disable 0108

namespace com.robotraconteur.testing.TestService1
{
public class teststruct1
{
    public double[] dat1;
    public string str2;
    public Dictionary<int,string> vec3;
    public Dictionary<string,string> dict4;
    public List<string> list5;
    public teststruct2 struct1;
    public Dictionary<string,teststruct2> dstruct2;
    public List<teststruct2> lstruct3;
    public MultiDimArray multidimarray;
    public object var3;
}

public class teststruct2
{
    public double[] mydat;
}

[RobotRaconteurServiceObjectInterface()]
public interface testroot : com.robotraconteur.testing.TestService2.baseobj
{
    double d1 { get;  set; 	}
    double[] d2 { get;  set; 	}
    double[] d3 { get;  set; 	}
    double[] d4 { get;  set; 	}
    MultiDimArray d5 { get;  set; 	}
    MultiDimArray d6 { get;  set; 	}
    float s1 { get;  set; 	}
    float[] s2 { get;  set; 	}
    sbyte i8_1 { get;  set; 	}
    sbyte[] i8_2 { get;  set; 	}
    byte u8_1 { get;  set; 	}
    byte[] u8_2 { get;  set; 	}
    MultiDimArray u8_3 { get;  set; 	}
    short i16_1 { get;  set; 	}
    short[] i16_2 { get;  set; 	}
    ushort u16_1 { get;  set; 	}
    ushort[] u16_2 { get;  set; 	}
    int i32_1 { get;  set; 	}
    int[] i32_2 { get;  set; 	}
    int[] i32_huge { get;  set; 	}
    uint u32_1 { get;  set; 	}
    uint[] u32_2 { get;  set; 	}
    long i64_1 { get;  set; 	}
    long[] i64_2 { get;  set; 	}
    ulong u64_1 { get;  set; 	}
    ulong[] u64_2 { get;  set; 	}
    string str1 { get;  set; 	}
    teststruct1 struct1 { get;  set; 	}
    teststruct2 struct2 { get;  set; 	}
    Dictionary<int,double> is_d1 { get;  set; 	}
    Dictionary<string,double> is_d2 { get;  set; 	}
    Dictionary<int,double[]> is_d3 { get;  set; 	}
    Dictionary<string,double[]> is_d4 { get;  set; 	}
    Dictionary<int,MultiDimArray> is_d5 { get;  set; 	}
    Dictionary<string,MultiDimArray> is_d6 { get;  set; 	}
    Dictionary<int,string> is_str1 { get;  set; 	}
    Dictionary<string,string> is_str2 { get;  set; 	}
    Dictionary<int,teststruct2> is_struct1 { get;  set; 	}
    Dictionary<string,teststruct2> is_struct2 { get;  set; 	}
    com.robotraconteur.testing.TestService2.ostruct2 struct3 { get;  set; 	}
    List<double> list_d1 { get;  set; 	}
    List<double[]> list_d3 { get;  set; 	}
    List<MultiDimArray> list_d5 { get;  set; 	}
    List<string> list_str1 { get;  set; 	}
    List<teststruct2> list_struct1 { get;  set; 	}
    object var1 { get;  set; 	}
    Dictionary<int,object> var2 { get;  set; 	}
    object var_num { get;  set; 	}
    object var_str { get;  set; 	}
    object var_struct { get;  set; 	}
    object var_vector { get;  set; 	}
    object var_dictionary { get;  set; 	}
    object var_list { get;  set; 	}
    object var_multidimarray { get;  set; 	}
    double errtest { get;  set; 	}
    teststruct1 nulltest { get;  set; 	}
    void func1();
    void func2(double d1, double d2);
    double func3(double d1, double d2);
    int meaning_of_life();
    void func_errtest();
    void func_errtest1();
    void func_errtest2();
    void func_errtest3();
    void o6_op(int op);
    void pipe_check_error();
    void test_callbacks();
    event Action ev1;
    event Action<double, teststruct2> ev2;
    sub1 get_o1();
    sub1 get_o2(int ind);
    sub1 get_o3(int ind);
    sub1 get_o4(string ind);
    com.robotraconteur.testing.TestService2.subobj get_o5();
    object get_o6();
    Pipe<double[]> p1{ get; set; }
    Pipe<teststruct2> p2{ get; set; }
    Pipe<double> broadcastpipe{ get; set; }
    Callback<Action> cb1 {get; set;}
    Callback<Action<double, double>> cb2 {get; set;}
    Callback<Func<double,double,double>> cb3 {get; set;}
    Callback<Func<int>> cb_meaning_of_life {get; set;}
    Callback<Action> cb_errtest {get; set;}
    Wire<double[]> w1{ get; set; }
    Wire<teststruct2> w2{ get; set; }
    Wire<MultiDimArray> w3{ get; set; }
    Wire<double> broadcastwire{ get; set; }
    ArrayMemory<double> m1 { get; }
    MultiDimArrayMemory<double> m2 { get; }
    MultiDimArrayMemory<byte> m3 { get; }
}

[RobotRaconteurServiceObjectInterface()]
public interface sub1
{
    double[] d1 { get;  set; 	}
    MultiDimArray d2 { get;  set; 	}
    string s_ind { get;  set; 	}
    int i_ind { get;  set; 	}
    sub2 get_o2_1();
    sub2 get_o2_2(int ind);
    sub2 get_o2_3(string ind);
}

[RobotRaconteurServiceObjectInterface()]
public interface sub2
{
    string s_ind { get;  set; 	}
    int i_ind { get;  set; 	}
    string data { get;  set; 	}
    sub3 get_o3_1(string ind);
}

[RobotRaconteurServiceObjectInterface()]
public interface sub3
{
    string ind { get;  set; 	}
    string data2 { get;  set; 	}
    double data3 { get;  set; 	}
    double add(double d);
}

public static class com__robotraconteur__testing__TestService1Constants 
{
    public static class testroot
    {
    public static readonly double[] doubleconst={3.4, 4.8, 14372.8};
    public const string strconst="This is a constant";
    }
}
public class testexception1 : RobotRaconteurRemoteException
{
    public testexception1(string message,string errorsubname=null,object param=null) : base("com.robotraconteur.testing.TestService1.testexception1",message,errorsubname,param) {}
};
public class testexception2 : RobotRaconteurRemoteException
{
    public testexception2(string message,string errorsubname=null,object param=null) : base("com.robotraconteur.testing.TestService1.testexception2",message,errorsubname,param) {}
};
}
