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

// ProtoBuf.Meta.AttributeMap/ReflectionAttributeMap
struct ReflectionAttributeMap_t2650244276;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Attribute
struct Attribute_t542643598;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Attribute542643598.h"

// System.Object ProtoBuf.Meta.AttributeMap/ReflectionAttributeMap::get_Target()
extern "C"  Il2CppObject * ReflectionAttributeMap_get_Target_m1949155861 (ReflectionAttributeMap_t2650244276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.AttributeMap/ReflectionAttributeMap::get_AttributeType()
extern "C"  Type_t * ReflectionAttributeMap_get_AttributeType_m1033669757 (ReflectionAttributeMap_t2650244276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.AttributeMap/ReflectionAttributeMap::TryGet(System.String,System.Boolean,System.Object&)
extern "C"  bool ReflectionAttributeMap_TryGet_m3301800530 (ReflectionAttributeMap_t2650244276 * __this, String_t* ___key0, bool ___publicOnly1, Il2CppObject ** ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.AttributeMap/ReflectionAttributeMap::.ctor(System.Attribute)
extern "C"  void ReflectionAttributeMap__ctor_m613672455 (ReflectionAttributeMap_t2650244276 * __this, Attribute_t542643598 * ___attribute0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
