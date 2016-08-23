#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t2088;
// System.Collections.Queue
struct Queue_t2076;
// System.Net.ServicePoint
struct ServicePoint_t1376;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t2046;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1296;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m11779 (WebConnectionGroup_t2088 * __this, ServicePoint_t1376 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t2046 * WebConnectionGroup_GetConnection_m11780 (WebConnectionGroup_t2088 * __this, HttpWebRequest_t1296 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m11781 (Object_t * __this /* static, unused */, WebConnection_t2046 * ___cnc, HttpWebRequest_t1296 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t2046 * WebConnectionGroup_CreateOrReuseConnection_m11782 (WebConnectionGroup_t2088 * __this, HttpWebRequest_t1296 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t2076 * WebConnectionGroup_get_Queue_m11783 (WebConnectionGroup_t2088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
