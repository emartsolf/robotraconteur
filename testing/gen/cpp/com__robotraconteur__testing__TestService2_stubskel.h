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
virtual RR_SHARED_PTR<RobotRaconteur::StructureStub> FindStructureStub(const std::string& s);
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> PackStructure(RR_SHARED_PTR<RobotRaconteur::RRStructure> structin);
virtual RR_SHARED_PTR<RobotRaconteur::RRValue> UnpackStructure(RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> mstructin);
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementCStructureArray> PackCStructureArray(RR_SHARED_PTR<RobotRaconteur::RRCStructureBaseArray> structure);
virtual RR_SHARED_PTR<RobotRaconteur::RRCStructureBaseArray> UnpackCStructureArray(RR_SHARED_PTR<RobotRaconteur::MessageElementCStructureArray> structure);
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementCStructureMultiDimArray> PackCStructureMultiDimArray(RR_SHARED_PTR<RobotRaconteur::RRCStructureBaseMultiDimArray> structure);
virtual RR_SHARED_PTR<RobotRaconteur::RRCStructureBaseMultiDimArray> UnpackCStructureMultiDimArray(RR_SHARED_PTR<RobotRaconteur::MessageElementCStructureMultiDimArray> structure);
virtual RR_SHARED_PTR<RobotRaconteur::ServiceStub> CreateStub(const std::string& objecttype, const std::string& path, RR_SHARED_PTR<RobotRaconteur::ClientContext> context);
virtual RR_SHARED_PTR<RobotRaconteur::ServiceSkel> CreateSkel(const std::string& objecttype, const std::string& path, RR_SHARED_PTR<RobotRaconteur::RRObject> obj, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual void DownCastAndThrowException(RobotRaconteur::RobotRaconteurException& exp);
virtual RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> DownCastException(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> exp);
};

class ostruct2_stub : public virtual RobotRaconteur::StructureStub
{
public:
ostruct2_stub(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurNode> node) : RobotRaconteur::StructureStub(node) {}
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> PackStructure(RR_SHARED_PTR<RobotRaconteur::RRValue> s);
virtual RR_SHARED_PTR<RobotRaconteur::RRStructure> UnpackStructure(RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> m);
};

class async_baseobj
{
public:
virtual void async_get_d1(boost::function<void (double,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;
virtual void async_set_d1(double value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;


virtual void async_get_d2(boost::function<void (RR_SHARED_PTR<RobotRaconteur::RRArray<double > >,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;
virtual void async_set_d2(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;


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
baseobj_stub(const std::string& path, RR_SHARED_PTR<RobotRaconteur::ClientContext> c);

virtual void RRInitStub();
virtual double get_d1();
virtual void set_d1(double value);

virtual RR_SHARED_PTR<RobotRaconteur::RRArray<double > > get_d2();
virtual void set_d2(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value);

virtual double func3(double d1, double d2);

virtual boost::signals2::signal<void ()>& get_ev1();

virtual RR_SHARED_PTR<subobj > get_o5();

virtual RR_SHARED_PTR<RobotRaconteur::Pipe<RR_SHARED_PTR<RobotRaconteur::RRArray<double > > > > get_p1();
virtual void set_p1(RR_SHARED_PTR<RobotRaconteur::Pipe<RR_SHARED_PTR<RobotRaconteur::RRArray<double > > > > value);

virtual RR_SHARED_PTR<RobotRaconteur::Callback<boost::function<void(double, double) > > > get_cb2();
virtual void set_cb2(RR_SHARED_PTR<RobotRaconteur::Callback<boost::function<void(double, double)> > > value);

virtual RR_SHARED_PTR<RobotRaconteur::Wire<RR_SHARED_PTR<RobotRaconteur::RRArray<double > > > > get_w1();
virtual void set_w1(RR_SHARED_PTR<RobotRaconteur::Wire<RR_SHARED_PTR<RobotRaconteur::RRArray<double > > > > value);

virtual RR_SHARED_PTR<RobotRaconteur::ArrayMemory<double > > get_m1();


virtual void DispatchEvent(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallbackCall(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void RRClose();
virtual RR_SHARED_PTR<RobotRaconteur::PipeClientBase> RRGetPipeClient(const std::string& membername);
virtual RR_SHARED_PTR<RobotRaconteur::WireClientBase> RRGetWireClient(const std::string& membername);
private:
boost::signals2::signal<void ()> rrvar_ev1;

RR_SHARED_PTR<RobotRaconteur::PipeClient<RR_SHARED_PTR<RobotRaconteur::RRArray<double > > > > rrvar_p1;
RR_SHARED_PTR<RobotRaconteur::CallbackClient<boost::function<void(double, double) > > > rrvar_cb2;
RR_SHARED_PTR<RobotRaconteur::WireClient<RR_SHARED_PTR<RobotRaconteur::RRArray<double > > > > rrvar_w1;
RR_SHARED_PTR<RobotRaconteur::ArrayMemoryClient<double > > rrvar_m1;
virtual void async_get_d1(boost::function<void (double,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);
virtual void async_set_d1(double value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_get_d1(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (double ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
virtual void rrend_set_d1(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_get_d2(boost::function<void (RR_SHARED_PTR<RobotRaconteur::RRArray<double > >,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);
virtual void async_set_d2(RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_get_d2(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RRArray<double > > ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
virtual void rrend_set_d2(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_func3(double d1, double d2,boost::function<void (double, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_func3(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (double ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_get_o5(boost::function<void(RR_SHARED_PTR<subobj>,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)> handler, int32_t timeout=RR_TIMEOUT_INFINITE);

virtual std::string RRType();
};

class subobj_stub : public virtual subobj, public virtual async_subobj, public virtual RobotRaconteur::ServiceStub
{
public:
subobj_stub(const std::string& path, RR_SHARED_PTR<RobotRaconteur::ClientContext> c);

virtual void RRInitStub();
virtual double add_val(double v);


virtual void DispatchEvent(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallbackCall(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void RRClose();
virtual RR_SHARED_PTR<RobotRaconteur::PipeClientBase> RRGetPipeClient(const std::string& membername);
virtual RR_SHARED_PTR<RobotRaconteur::WireClientBase> RRGetWireClient(const std::string& membername);
private:
virtual void async_add_val(double v,boost::function<void (double, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_add_val(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (double ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual std::string RRType();
};


class baseobj_skel : public virtual RobotRaconteur::ServiceSkel
{
public:
virtual void Init(const std::string& path, RR_SHARED_PTR<RobotRaconteur::RRObject> object, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallGetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallSetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual void ReleaseCastObject();

virtual void RegisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void UnregisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual RR_SHARED_PTR<RobotRaconteur::RRObject> GetSubObj(const std::string &name, const std::string &ind);

virtual void InitPipeServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void InitWireServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void InitCallbackServers(RR_SHARED_PTR<RobotRaconteur::RRObject> o);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallPipeFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallWireFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<void> GetCallbackFunction(uint32_t endpoint, const std::string& membername);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallMemoryFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::Endpoint> e);

virtual std::string GetObjectType();
virtual RR_SHARED_PTR<com::robotraconteur::testing::TestService2::baseobj > get_obj();

virtual RR_SHARED_PTR<com::robotraconteur::testing::TestService2::async_baseobj > get_asyncobj();

protected:
static void rr_get_d1(RR_WEAK_PTR<com::robotraconteur::testing::TestService2::baseobj_skel> skel, double value, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_get_d2(RR_WEAK_PTR<com::robotraconteur::testing::TestService2::baseobj_skel> skel, RR_SHARED_PTR<RobotRaconteur::RRArray<double > > value, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_func3(RR_WEAK_PTR<com::robotraconteur::testing::TestService2::baseobj_skel> skel, double ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
 public:
void rr_ev1_Handler();
protected:boost::signals2::connection ev1_rrconnection;
bool rr_InitPipeServersRun;
bool rr_InitWireServersRun;
RR_SHARED_PTR<RobotRaconteur::PipeServer<RR_SHARED_PTR<RobotRaconteur::RRArray<double > > > > rr_p1_pipe;
RR_SHARED_PTR<RobotRaconteur::WireServer<RR_SHARED_PTR<RobotRaconteur::RRArray<double > > > > rr_w1_wire;
public: 
void rr_cb2_callback(uint32_t rrendpoint, double d1, double d2);
private:
RR_SHARED_PTR<RobotRaconteur::ArrayMemoryServiceSkel<double > > rr_m1_mem;

};

class subobj_skel : public virtual RobotRaconteur::ServiceSkel
{
public:
virtual void Init(const std::string& path, RR_SHARED_PTR<RobotRaconteur::RRObject> object, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallGetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallSetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual void ReleaseCastObject();

virtual void RegisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void UnregisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual RR_SHARED_PTR<RobotRaconteur::RRObject> GetSubObj(const std::string &name, const std::string &ind);

virtual void InitPipeServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void InitWireServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void InitCallbackServers(RR_SHARED_PTR<RobotRaconteur::RRObject> o);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallPipeFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallWireFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<void> GetCallbackFunction(uint32_t endpoint, const std::string& membername);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallMemoryFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::Endpoint> e);

virtual std::string GetObjectType();
virtual RR_SHARED_PTR<com::robotraconteur::testing::TestService2::subobj > get_obj();

virtual RR_SHARED_PTR<com::robotraconteur::testing::TestService2::async_subobj > get_asyncobj();

protected:
static void rr_add_val(RR_WEAK_PTR<com::robotraconteur::testing::TestService2::subobj_skel> skel, double ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
 public:
protected:bool rr_InitPipeServersRun;
bool rr_InitWireServersRun;
public: 
private:

};

}
}
}
}


