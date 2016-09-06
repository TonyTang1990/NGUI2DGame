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

// ProtoBuf.Meta.AttributeMap
struct AttributeMap_t748219064;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.Meta.AttributeMap[]
struct AttributeMapU5BU5D_t1124678505;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"

// System.Boolean ProtoBuf.Meta.AttributeMap::TryGet(System.String,System.Object&)
extern "C"  bool AttributeMap_TryGet_m1081460675 (AttributeMap_t748219064 * __this, String_t* ___key0, Il2CppObject ** ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.AttributeMap[] ProtoBuf.Meta.AttributeMap::Create(ProtoBuf.Meta.TypeModel,System.Type,System.Boolean)
extern "C"  AttributeMapU5BU5D_t1124678505* AttributeMap_Create_m2357399256 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___type1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.AttributeMap[] ProtoBuf.Meta.AttributeMap::Create(ProtoBuf.Meta.TypeModel,System.Reflection.MemberInfo,System.Boolean)
extern "C"  AttributeMapU5BU5D_t1124678505* AttributeMap_Create_m3197844701 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, MemberInfo_t * ___member1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.AttributeMap::.ctor()
extern "C"  void AttributeMap__ctor_m3116233160 (AttributeMap_t748219064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
