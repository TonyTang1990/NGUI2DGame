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
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "protobufU2Dnet_ProtoBuf_ProtoTypeCode3296822465.h"

// System.Void ProtoBuf.Helpers::DebugWriteLine(System.String)
extern "C"  void Helpers_DebugWriteLine_m1869691518 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::DebugAssert(System.Boolean,System.String)
extern "C"  void Helpers_DebugAssert_m3547493310 (Il2CppObject * __this /* static, unused */, bool ___condition0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::DebugAssert(System.Boolean)
extern "C"  void Helpers_DebugAssert_m763024030 (Il2CppObject * __this /* static, unused */, bool ___condition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::BlockCopy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void Helpers_BlockCopy_m2741176895 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___from0, int32_t ___fromIndex1, ByteU5BU5D_t3397334013* ___to2, int32_t ___toIndex3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsInfinity(System.Single)
extern "C"  bool Helpers_IsInfinity_m517628195 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Helpers::GetInstanceMethod(System.Type,System.String,System.Type[])
extern "C"  MethodInfo_t * Helpers_GetInstanceMethod_m2639239390 (Il2CppObject * __this /* static, unused */, Type_t * ___declaringType0, String_t* ___name1, TypeU5BU5D_t1664964607* ___types2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsInfinity(System.Double)
extern "C"  bool Helpers_IsInfinity_m1113709690 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.ProtoTypeCode ProtoBuf.Helpers::GetTypeCode(System.Type)
extern "C"  int32_t Helpers_GetTypeCode_m1589684719 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Helpers::GetUnderlyingType(System.Type)
extern "C"  Type_t * Helpers_GetUnderlyingType_m3443069188 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Helpers::IsEnum(System.Type)
extern "C"  bool Helpers_IsEnum_m3979764206 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo ProtoBuf.Helpers::GetConstructor(System.Type,System.Type[],System.Boolean)
extern "C"  ConstructorInfo_t2851816542 * Helpers_GetConstructor_m4003574134 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t1664964607* ___parameterTypes1, bool ___nonPublic2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Helpers::.cctor()
extern "C"  void Helpers__cctor_m3355889241 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
