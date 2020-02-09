//This file is automatically generated. DO NOT EDIT!

#include "com__robotraconteur__testing__TestService2.h"
#pragma once

namespace com
{
namespace robotraconteur
{
namespace testing
{
namespace TestService2
{

class com__robotraconteur__testing__TestService2Factory : public virtual RobotRaconteur::ServiceFactory
{
public:
virtual std::string GetServiceName();
virtual std::string DefString();
virtual RR_SHARED_PTR<RobotRaconteur::StructureStub> FindStructureStub(boost::string_ref s);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> PackStructure(RR_INTRUSIVE_PTR<RobotRaconteur::RRStructure> structin);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::RRValue> UnpackStructure(RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> mstructin);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> PackPodArray(RR_INTRUSIVE_PTR<RobotRaconteur::RRPodBaseArray> structure);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::RRPodBaseArray> UnpackPodArray(RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> structure);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> PackPodMultiDimArray(RR_INTRUSIVE_PTR<RobotRaconteur::RRPodBaseMultiDimArray> structure);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::RRPodBaseMultiDimArray> UnpackPodMultiDimArray(RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> structure);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> PackNamedArray(RR_INTRUSIVE_PTR<RobotRaconteur::RRNamedBaseArray> structure);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::RRNamedBaseArray> UnpackNamedArray(RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> structure);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> PackNamedMultiDimArray(RR_INTRUSIVE_PTR<RobotRaconteur::RRNamedBaseMultiDimArray> structure);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::RRNamedBaseMultiDimArray> UnpackNamedMultiDimArray(RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> structure);
virtual RR_SHARED_PTR<RobotRaconteur::ServiceStub> CreateStub(boost::string_ref objecttype, boost::string_ref path, RR_SHARED_PTR<RobotRaconteur::ClientContext> context);
virtual RR_SHARED_PTR<RobotRaconteur::ServiceSkel> CreateSkel(boost::string_ref objecttype, boost::string_ref path, RR_SHARED_PTR<RobotRaconteur::RRObject> obj, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual void DownCastAndThrowException(RobotRaconteur::RobotRaconteurException& exp);
virtual RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> DownCastException(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> exp);
};

class ostruct2_stub : public virtual RobotRaconteur::StructureStub
{
public:
ostruct2_stub(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurNode> node) : RobotRaconteur::StructureStub(node) {}
virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> PackStructure(RR_INTRUSIVE_PTR<RobotRaconteur::RRValue> s);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::RRStructure> UnpackStructure(RR_INTRUSIVE_PTR<RobotRaconteur::MessageElementNestedElementList> m);
};

class async_baseobj
{
public:
virtual void async_get_d1(boost::function<void (double,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;
virtual void async_set_d1(double value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;


virtual void async_get_d2(boost::function<void (RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > >,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;
virtual void async_set_d2(RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;


virtual void async_func3(double d1, double d2,boost::function<void (double, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;


virtual void async_get_o5(boost::function<void(RR_SHARED_PTR<subobj>,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)> handler, int32_t timeout=RR_TIMEOUT_INFINITE)=0;

};
class async_subobj
{
public:
virtual void async_add_val(double v,boost::function<void (double, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;


};
class baseobj_stub : public virtual baseobj, public virtual async_baseobj, public virtual RobotRaconteur::ServiceStub
{
public:
baseobj_stub(boost::string_ref, RR_SHARED_PTR<RobotRaconteur::ClientContext> c);

virtual void RRInitStub();
virtual double get_d1();
virtual void set_d1(double value);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > get_d2();
virtual void set_d2(RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > value);

virtual double func3(double d1, double d2);

virtual boost::signals2::signal<void ()>& get_ev1();

virtual RR_SHARED_PTR<subobj > get_o5();

virtual RR_SHARED_PTR<RobotRaconteur::Pipe<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > get_p1();
virtual void set_p1(RR_SHARED_PTR<RobotRaconteur::Pipe<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > value);

virtual RR_SHARED_PTR<RobotRaconteur::Callback<boost::function<void(double, double) > > > get_cb2();
virtual void set_cb2(RR_SHARED_PTR<RobotRaconteur::Callback<boost::function<void(double, double)> > > value);

virtual RR_SHARED_PTR<RobotRaconteur::Wire<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > get_w1();
virtual void set_w1(RR_SHARED_PTR<RobotRaconteur::Wire<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > value);

virtual RR_SHARED_PTR<RobotRaconteur::ArrayMemory<double > > get_m1();


virtual void DispatchEvent(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchPipeMessage(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchWireMessage(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallbackCall(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);
virtual void RRClose();
virtual RR_SHARED_PTR<RobotRaconteur::PipeClientBase> RRGetPipeClient(boost::string_ref membername);
virtual RR_SHARED_PTR<RobotRaconteur::WireClientBase> RRGetWireClient(boost::string_ref membername);
private:
boost::signals2::signal<void ()> rrvar_ev1;

RR_SHARED_PTR<RobotRaconteur::PipeClient<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > rrvar_p1;
RR_SHARED_PTR<RobotRaconteur::CallbackClient<boost::function<void(double, double) > > > rrvar_cb2;
RR_SHARED_PTR<RobotRaconteur::WireClient<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > rrvar_w1;
RR_SHARED_PTR<RobotRaconteur::ArrayMemoryClient<double > > rrvar_m1;
virtual void async_get_d1(boost::function<void (double,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);
virtual void async_set_d1(double value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_get_d1(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (double ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
virtual void rrend_set_d1(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_get_d2(boost::function<void (RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > >,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);
virtual void async_set_d2(RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_get_d2(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
virtual void rrend_set_d2(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_func3(double d1, double d2,boost::function<void (double, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_func3(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (double ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_get_o5(boost::function<void(RR_SHARED_PTR<subobj>,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)> handler, int32_t timeout=RR_TIMEOUT_INFINITE);

std::string RRType();
};

class subobj_stub : public virtual subobj, public virtual async_subobj, public virtual RobotRaconteur::ServiceStub
{
public:
subobj_stub(boost::string_ref, RR_SHARED_PTR<RobotRaconteur::ClientContext> c);

virtual void RRInitStub();
virtual double add_val(double v);


virtual void DispatchEvent(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchPipeMessage(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchWireMessage(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallbackCall(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);
virtual void RRClose();
virtual RR_SHARED_PTR<RobotRaconteur::PipeClientBase> RRGetPipeClient(boost::string_ref membername);
virtual RR_SHARED_PTR<RobotRaconteur::WireClientBase> RRGetWireClient(boost::string_ref membername);
private:
virtual void async_add_val(double v,boost::function<void (double, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_add_val(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (double ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
std::string RRType();
};


class baseobj_skel : public virtual RobotRaconteur::ServiceSkel
{
public:
virtual void Init(boost::string_ref path, RR_SHARED_PTR<RobotRaconteur::RRObject> object, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallGetProperty(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallSetProperty(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallFunction(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);

virtual void ReleaseCastObject();

virtual void RegisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void UnregisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual RR_SHARED_PTR<RobotRaconteur::RRObject> GetSubObj(boost::string_ref, boost::string_ref);

virtual void InitPipeServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void InitWireServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void DispatchPipeMessage(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void DispatchWireMessage(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void InitCallbackServers(RR_SHARED_PTR<RobotRaconteur::RRObject> o);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallPipeFunction(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallWireFunction(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<void> GetCallbackFunction(uint32_t endpoint, boost::string_ref);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallMemoryFunction(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::Endpoint> e);

virtual bool IsRequestNoLock(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);

virtual std::string GetObjectType();
virtual RR_SHARED_PTR<com::robotraconteur::testing::TestService2::baseobj > get_obj();

virtual RR_SHARED_PTR<com::robotraconteur::testing::TestService2::async_baseobj > get_asyncobj();

protected:
static void rr_get_d1(RR_WEAK_PTR<com::robotraconteur::testing::TestService2::baseobj_skel> skel, double value, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_get_d2(RR_WEAK_PTR<com::robotraconteur::testing::TestService2::baseobj_skel> skel, RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > value, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_func3(RR_WEAK_PTR<com::robotraconteur::testing::TestService2::baseobj_skel> skel, double ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
 public:
void rr_ev1_Handler();
protected:boost::signals2::connection ev1_rrconnection;
bool rr_InitPipeServersRun;
bool rr_InitWireServersRun;
RR_SHARED_PTR<RobotRaconteur::PipeServer<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > rr_p1_pipe;
RR_SHARED_PTR<RobotRaconteur::WireServer<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > rr_w1_wire;
public: 
void rr_cb2_callback(uint32_t rrendpoint, double d1, double d2);
private:
RR_SHARED_PTR<RobotRaconteur::ArrayMemoryServiceSkel<double > > rr_m1_mem;

};

class subobj_skel : public virtual RobotRaconteur::ServiceSkel
{
public:
virtual void Init(boost::string_ref path, RR_SHARED_PTR<RobotRaconteur::RRObject> object, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallGetProperty(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallSetProperty(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallFunction(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);

virtual void ReleaseCastObject();

virtual void RegisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void UnregisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual RR_SHARED_PTR<RobotRaconteur::RRObject> GetSubObj(boost::string_ref, boost::string_ref);

virtual void InitPipeServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void InitWireServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void DispatchPipeMessage(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void DispatchWireMessage(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void InitCallbackServers(RR_SHARED_PTR<RobotRaconteur::RRObject> o);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallPipeFunction(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallWireFunction(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<void> GetCallbackFunction(uint32_t endpoint, boost::string_ref);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> CallMemoryFunction(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::Endpoint> e);

virtual bool IsRequestNoLock(RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m);

virtual std::string GetObjectType();
virtual RR_SHARED_PTR<com::robotraconteur::testing::TestService2::subobj > get_obj();

virtual RR_SHARED_PTR<com::robotraconteur::testing::TestService2::async_subobj > get_asyncobj();

protected:
static void rr_add_val(RR_WEAK_PTR<com::robotraconteur::testing::TestService2::subobj_skel> skel, double ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_INTRUSIVE_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
 public:
protected:bool rr_InitPipeServersRun;
bool rr_InitWireServersRun;
public: 
private:

};


class baseobj_default_impl : public virtual baseobj, public virtual RobotRaconteur::RRObject_default_impl
{
protected:
double rrvar_d1;
RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > rrvar_d2;
boost::signals2::signal<void ()> rrvar_ev1;
RR_SHARED_PTR<RobotRaconteur::Callback<boost::function<void(double, double) > > > rrvar_cb2;

public:
baseobj_default_impl();
virtual double get_d1();
virtual void set_d1(double value);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > get_d2();
virtual void set_d2(RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > value);

virtual double func3(double d1, double d2);

virtual boost::signals2::signal<void ()>& get_ev1();

virtual RR_SHARED_PTR<subobj > get_o5();

virtual RR_SHARED_PTR<RobotRaconteur::Pipe<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > get_p1();
virtual void set_p1(RR_SHARED_PTR<RobotRaconteur::Pipe<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > value);

virtual RR_SHARED_PTR<RobotRaconteur::Callback<boost::function<void(double, double) > > > get_cb2();
virtual void set_cb2(RR_SHARED_PTR<RobotRaconteur::Callback<boost::function<void(double, double)> > > value);

virtual RR_SHARED_PTR<RobotRaconteur::Wire<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > get_w1();
virtual void set_w1(RR_SHARED_PTR<RobotRaconteur::Wire<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > value);

virtual RR_SHARED_PTR<RobotRaconteur::ArrayMemory<double > > get_m1();

};

class subobj_default_impl : public virtual subobj, public virtual RobotRaconteur::RRObject_default_impl
{
protected:

public:
subobj_default_impl();
virtual double add_val(double v);

};


class baseobj_default_abstract_impl : public virtual baseobj, public virtual RobotRaconteur::RRObject_default_impl
{
protected:
double rrvar_d1;
RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > rrvar_d2;
boost::signals2::signal<void ()> rrvar_ev1;
RR_SHARED_PTR<RobotRaconteur::Callback<boost::function<void(double, double) > > > rrvar_cb2;

public:
baseobj_default_abstract_impl();
virtual double get_d1();
virtual void set_d1(double value);

virtual RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > get_d2();
virtual void set_d2(RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > value);

virtual double func3(double d1, double d2);

virtual boost::signals2::signal<void ()>& get_ev1();

virtual RR_SHARED_PTR<subobj > get_o5();

virtual RR_SHARED_PTR<RobotRaconteur::Pipe<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > get_p1();
virtual void set_p1(RR_SHARED_PTR<RobotRaconteur::Pipe<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > value);

virtual RR_SHARED_PTR<RobotRaconteur::Callback<boost::function<void(double, double) > > > get_cb2();
virtual void set_cb2(RR_SHARED_PTR<RobotRaconteur::Callback<boost::function<void(double, double)> > > value);

virtual RR_SHARED_PTR<RobotRaconteur::Wire<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > get_w1();
virtual void set_w1(RR_SHARED_PTR<RobotRaconteur::Wire<RR_INTRUSIVE_PTR<RobotRaconteur::RRArray<double > > > > value);

virtual RR_SHARED_PTR<RobotRaconteur::ArrayMemory<double > > get_m1();

};

class subobj_default_abstract_impl : public virtual subobj, public virtual RobotRaconteur::RRObject_default_impl
{
protected:

public:
subobj_default_abstract_impl();
virtual double add_val(double v);

};


}
}
}
}


