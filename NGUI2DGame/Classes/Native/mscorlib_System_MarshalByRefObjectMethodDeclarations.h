#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MarshalByRefObject
struct MarshalByRefObject_t882;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2318;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2684;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

// System.Void System.MarshalByRefObject::.ctor()
extern "C" void MarshalByRefObject__ctor_m5095 (MarshalByRefObject_t882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::get_ObjectIdentity()
extern "C" ServerIdentity_t2318 * MarshalByRefObject_get_ObjectIdentity_m13825 (MarshalByRefObject_t882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MarshalByRefObject::set_ObjectIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C" void MarshalByRefObject_set_ObjectIdentity_m13826 (MarshalByRefObject_t882 * __this, ServerIdentity_t2318 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.MarshalByRefObject::CreateObjRef(System.Type)
extern "C" ObjRef_t2684 * MarshalByRefObject_CreateObjRef_m5365 (MarshalByRefObject_t882 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MarshalByRefObject::InitializeLifetimeService()
extern "C" Object_t * MarshalByRefObject_InitializeLifetimeService_m5366 (MarshalByRefObject_t882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
