package com.robotraconteur.javatest;

import com.robotraconteur.*;
import com.robotraconteur.testing.TestService1.*;
import com.robotraconteur.testing.TestService2.*;
import com.robotraconteur.testing.TestService3.*;

import java.util.*;

public class testroot3_impl implements testroot3
{
	
	Wire<int[]> _peekwire;
	Wire<int[]> _pokewire;
	WireBroadcaster<int[]> _peekwire_b;
	WireUnicastReceiver<int[]> _pokewire_r;
	
	com.robotraconteur.Timer _peekwire_t;
	
	public Wire<int[]> get_peekwire()
	{
		return _peekwire;
	}
    public void set_peekwire(Wire<int[]> value)
	{
		_peekwire=value;
		_peekwire_b=new WireBroadcaster<int[]>(_peekwire);
		int[] v=new int[] {56295674};
		_peekwire_b.setOutValue(v);
		_peekwire_t=RobotRaconteurNode.s().createTimer(100, new peektimer_handler());
		
	}
    public Wire<int[]> get_pokewire()
	{
		return _pokewire;
	}
    public void set_pokewire(Wire<int[]> value)
	{
		_pokewire=value;
		_pokewire_r=new WireUnicastReceiver<int[]>(_pokewire);
		_pokewire_r.addInValueListener(new pokewire_changed());
	}
	
	class peektimer_handler implements Action1<TimerEvent>
	{
		@Override
		public void action(TimerEvent evt)
		{
			int[] v=new int[] {56295674};
			_peekwire_b.setOutValue(v);
		}
		
	}

	class pokewire_changed implements Action3<int[], TimeSpec, Long>
	{
		public void action(int[] value, TimeSpec ts, Long ep)
		{
			System.out.println("RobotRaconteurTestService2.pokewire changed: " + Integer.toString(value[0]));
		}

	}
	
	public int get_unknown_modifier()
	{
		return 0;
	}
	
	public void set_unknown_modifier(int v)
	{
		
	}
	
	public ArrayMemory<double[]> get_readmem()
	{
		return null;
	}
	
	Pipe<int[]> unreliable1;
	
	public Pipe<int[]> get_unreliable1()
	{
		return unreliable1;
	}
	
	public void set_unreliable1(Pipe<int[]> p)
	{
		unreliable1=p;
	}
	
	public Pipe<int[]> get_unreliable2()
	{
		return unreliable1;
	}
	
	public void set_unreliable2(Pipe<int[]> p)
	{
		unreliable1=p;
	}
	
	public int get_readme()
	{
		return 0;
	}
	
	public void set_readme(int v)
	{
		
	}
	
	public int get_writeme()
	{
		return 0;
	}
	
	public void set_writeme(int v)
	{
		
	}
	
	public testenum1 get_testenum1_prop()
	{
		return testenum1.anothervalue;
	}
    public void set_testenum1_prop(testenum1 value)
	{
		if (value != testenum1.hexval1)
			throw new RuntimeException("");
	}
    public obj4 get_o4()
	{
		return new obj4_impl();
	}
	@Override
	public testcstruct1 get_testcstruct1_prop() {
		testcstruct1 o = new testcstruct1();
        ServiceTest2_cstruct.fill_testcstruct1(o, 563921043);
        return o;
	}
	@Override
	public void set_testcstruct1_prop(testcstruct1 value) {
		ServiceTest2_cstruct.verify_testcstruct1(value, 85932659);
		
	}
	@Override
	public teststruct3 get_teststruct3_prop() {
		return ServiceTest2_cstruct.fill_teststruct3(16483675);
	}
	@Override
	public void set_teststruct3_prop(teststruct3 value) {
		ServiceTest2_cstruct.verify_teststruct3(value, 858362);		
	}
	@Override
	public void testcstruct1_func1(testcstruct1 s) {
		ServiceTest2_cstruct.verify_testcstruct1(s, 29546592);
		
	}
	@Override
	public testcstruct1 testcstruct1_func2() {
		testcstruct1 o = new testcstruct1();
        ServiceTest2_cstruct.fill_testcstruct1(o, 95836295);
        return o;		
	}
	@Override
	public Generator2<double[]> gen_func1() {
		ArrayList<double[]> v=new ArrayList<double[]>();
		v.add(new double[] {5});
		v.add(new double[] {6});
		v.add(new double[] {7});
		v.add(new double[] {8});
		return new IteratorGenerator<double[]>(v.iterator());            
	}
	@Override
	public Generator2<UnsignedBytes> gen_func2(String name) {
		// TODO Auto-generated method stub
		return null;
	}
	@Override
	public Generator3<UnsignedBytes> gen_func3(String name) {
		// TODO Auto-generated method stub
		return null;
	}
	@Override
	public Generator1<UnsignedBytes, UnsignedBytes> gen_func4() {
		// TODO Auto-generated method stub
		return null;
	}
	@Override
	public Generator1<teststruct2, teststruct2> gen_func5() {
		// TODO Auto-generated method stub
		return null;
	}
	
	CStructureArrayMemory<testcstruct2[]> m_cstruct_m1= new CStructureArrayMemory<testcstruct2[]>(new testcstruct2[1024]);
	
	@Override
	public CStructureArrayMemory<testcstruct2[]> get_cstruct_m1() {
		return m_cstruct_m1;		
	}
	
	CStructureMultiDimArrayMemory<testcstruct2[]> m_cstruct_m2 = new CStructureMultiDimArrayMemory<testcstruct2[]>(new CStructureMultiDimArray(new int[] { 3, 3 }, new testcstruct2[9]));
	@Override
	public CStructureMultiDimArrayMemory<testcstruct2[]> get_cstruct_m2() {
		return m_cstruct_m2;
	}
	
	
}