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

// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1996683371;
// System.Object
struct Il2CppObject;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "protobufU2Dnet_ProtoBuf_ProtoTypeCode3296822465.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"

// System.Boolean ProtoBuf.Helpers::IsNullOrEmpty(System.String)
extern "C"  bool Helpers_IsNullOrEmpty_m1893467545 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::Sort(System.Int32[],System.Object[])
extern "C"  void Helpers_Sort_m1372644095 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___keys0, ObjectU5BU5D_t3614634134* ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::BlockCopy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void Helpers_BlockCopy_m2741176895 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___from0, int32_t ___fromIndex1, ByteU5BU5D_t3397334013* ___to2, int32_t ___toIndex3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsInfinity(System.Single)
extern "C"  bool Helpers_IsInfinity_m517628195 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Helpers::GetInstanceMethod(System.Type,System.String)
extern "C"  MethodInfo_t * Helpers_GetInstanceMethod_m2161450947 (Il2CppObject * __this /* static, unused */, Type_t * ___declaringType0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Helpers::GetInstanceMethod(System.Type,System.String,System.Type[])
extern "C"  MethodInfo_t * Helpers_GetInstanceMethod_m2639239390 (Il2CppObject * __this /* static, unused */, Type_t * ___declaringType0, String_t* ___name1, TypeU5BU5D_t1664964607* ___types2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsInfinity(System.Double)
extern "C"  bool Helpers_IsInfinity_m1113709690 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.ProtoTypeCode ProtoBuf.Helpers::GetTypeCode(System.Type)
extern "C"  int32_t Helpers_GetTypeCode_m1589684719 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Helpers::GetUnderlyingType(System.Type)
extern "C"  Type_t * Helpers_GetUnderlyingType_m3443069188 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsValueType(System.Type)
extern "C"  bool Helpers_IsValueType_m1739268552 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsEnum(System.Type)
extern "C"  bool Helpers_IsEnum_m3979764206 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Helpers::GetGetMethod(System.Reflection.PropertyInfo,System.Boolean,System.Boolean)
extern "C"  MethodInfo_t * Helpers_GetGetMethod_m2792053570 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property0, bool ___nonPublic1, bool ___allowInternal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Helpers::GetSetMethod(System.Reflection.PropertyInfo,System.Boolean,System.Boolean)
extern "C"  MethodInfo_t * Helpers_GetSetMethod_m2525273606 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property0, bool ___nonPublic1, bool ___allowInternal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo ProtoBuf.Helpers::GetConstructor(System.Type,System.Type[],System.Boolean)
extern "C"  ConstructorInfo_t2851816542 * Helpers_GetConstructor_m4003574134 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t1664964607* ___parameterTypes1, bool ___nonPublic2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] ProtoBuf.Helpers::GetConstructors(System.Type,System.Boolean)
extern "C"  ConstructorInfoU5BU5D_t1996683371* Helpers_GetConstructors_m2954958210 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, bool ___nonPublic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo ProtoBuf.Helpers::GetProperty(System.Type,System.String,System.Boolean)
extern "C"  PropertyInfo_t * Helpers_GetProperty_m1331279521 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___name1, bool ___nonPublic2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Helpers::ParseEnum(System.Type,System.String)
extern "C"  Il2CppObject * Helpers_ParseEnum_m1532752442 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] ProtoBuf.Helpers::GetInstanceFieldsAndProperties(System.Type,System.Boolean)
extern "C"  MemberInfoU5BU5D_t4238939941* Helpers_GetInstanceFieldsAndProperties_m1287453451 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, bool ___publicOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Helpers::GetMemberType(System.Reflection.MemberInfo)
extern "C"  Type_t * Helpers_GetMemberType_m3658201150 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsAssignableFrom(System.Type,System.Type)
extern "C"  bool Helpers_IsAssignableFrom_m2647765501 (Il2CppObject * __this /* static, unused */, Type_t * ___target0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::.cctor()
extern "C"  void Helpers__cctor_m3355889241 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
