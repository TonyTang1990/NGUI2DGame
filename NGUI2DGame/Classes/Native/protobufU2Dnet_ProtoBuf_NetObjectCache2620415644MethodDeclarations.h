#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ProtoBuf.NetObjectCache
struct NetObjectCache_t2620415644;
// ProtoBuf.Meta.MutableList
struct MutableList_t1161363740;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// ProtoBuf.Meta.MutableList ProtoBuf.NetObjectCache::get_List()
extern "C"  MutableList_t1161363740 * NetObjectCache_get_List_m1684470523 (NetObjectCache_t2620415644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.NetObjectCache::GetKeyedObject(System.Int32)
extern "C"  Il2CppObject * NetObjectCache_GetKeyedObject_m905821746 (NetObjectCache_t2620415644 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.NetObjectCache::SetKeyedObject(System.Int32,System.Object)
extern "C"  void NetObjectCache_SetKeyedObject_m2545017919 (NetObjectCache_t2620415644 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.NetObjectCache::AddObjectKey(System.Object,System.Boolean&)
extern "C"  int32_t NetObjectCache_AddObjectKey_m151363491 (NetObjectCache_t2620415644 * __this, Il2CppObject * ___value0, bool* ___existing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.NetObjectCache::RegisterTrappedObject(System.Object)
extern "C"  void NetObjectCache_RegisterTrappedObject_m1238540065 (NetObjectCache_t2620415644 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.NetObjectCache::Clear()
extern "C"  void NetObjectCache_Clear_m2607687186 (NetObjectCache_t2620415644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.NetObjectCache::.ctor()
extern "C"  void NetObjectCache__ctor_m25650673 (NetObjectCache_t2620415644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
