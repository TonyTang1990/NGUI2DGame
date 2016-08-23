#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2318;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t2694;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2693;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t2716;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2684;
// System.MarshalByRefObject
struct MarshalByRefObject_t882;

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void ServerIdentity__ctor_m17082 (ServerIdentity_t2318 * __this, String_t* ___objectUri, Context_t2693 * ___context, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m17083 (ServerIdentity_t2318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::StartTrackingLifetime(System.Runtime.Remoting.Lifetime.ILease)
extern "C" void ServerIdentity_StartTrackingLifetime_m17084 (ServerIdentity_t2318 * __this, Object_t * ___lease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::OnLifetimeExpired()
extern "C" void ServerIdentity_OnLifetimeExpired_m17085 (ServerIdentity_t2318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t2684 * ServerIdentity_CreateObjRef_m17086 (ServerIdentity_t2318 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::AttachServerObject(System.MarshalByRefObject,System.Runtime.Remoting.Contexts.Context)
extern "C" void ServerIdentity_AttachServerObject_m17087 (ServerIdentity_t2318 * __this, MarshalByRefObject_t882 * ___serverObject, Context_t2693 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::get_Lease()
extern "C" Lease_t2694 * ServerIdentity_get_Lease_m17088 (ServerIdentity_t2318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::DisposeServerObject()
extern "C" void ServerIdentity_DisposeServerObject_m17089 (ServerIdentity_t2318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
