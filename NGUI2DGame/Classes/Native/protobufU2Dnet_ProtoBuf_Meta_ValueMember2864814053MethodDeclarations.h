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

// ProtoBuf.Meta.ValueMember
struct ValueMember_t2864814053;
// System.Type
struct Type_t;
// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t623319549;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Meta_RuntimeTypeModel623319549.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "protobufU2Dnet_ProtoBuf_DataFormat1866125683.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "protobufU2Dnet_ProtoBuf_WireType4172783757.h"
#include "mscorlib_System_String2029220233.h"

// System.Int32 ProtoBuf.Meta.ValueMember::get_FieldNumber()
extern "C"  int32_t ValueMember_get_FieldNumber_m394083309 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.ValueMember::get_MemberType()
extern "C"  Type_t * ValueMember_get_MemberType_m3787571768 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::.ctor(ProtoBuf.Meta.RuntimeTypeModel,System.Type,System.Int32,System.Reflection.MemberInfo,System.Type,System.Type,System.Type,ProtoBuf.DataFormat,System.Object)
extern "C"  void ValueMember__ctor_m243454127 (ValueMember_t2864814053 * __this, RuntimeTypeModel_t623319549 * ___model0, Type_t * ___parentType1, int32_t ___fieldNumber2, MemberInfo_t * ___member3, Type_t * ___memberType4, Type_t * ___itemType5, Type_t * ___defaultType6, int32_t ___dataFormat7, Il2CppObject * ___defaultValue8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::.ctor(ProtoBuf.Meta.RuntimeTypeModel,System.Int32,System.Type,System.Type,System.Type,ProtoBuf.DataFormat)
extern "C"  void ValueMember__ctor_m1832987886 (ValueMember_t2864814053 * __this, RuntimeTypeModel_t623319549 * ___model0, int32_t ___fieldNumber1, Type_t * ___memberType2, Type_t * ___itemType3, Type_t * ___defaultType4, int32_t ___dataFormat5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.ValueMember::GetRawEnumValue()
extern "C"  Il2CppObject * ValueMember_GetRawEnumValue_m3187530586 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.ValueMember::ParseDefaultValue(System.Type,System.Object)
extern "C"  Il2CppObject * ValueMember_ParseDefaultValue_m444014218 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.ValueMember::get_Serializer()
extern "C"  Il2CppObject * ValueMember_get_Serializer_m2525102134 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_IsStrict()
extern "C"  bool ValueMember_get_IsStrict_m2271513215 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_IsPacked()
extern "C"  bool ValueMember_get_IsPacked_m397493888 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_IsPacked(System.Boolean)
extern "C"  void ValueMember_set_IsPacked_m3270156387 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_OverwriteList()
extern "C"  bool ValueMember_get_OverwriteList_m3495039431 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_OverwriteList(System.Boolean)
extern "C"  void ValueMember_set_OverwriteList_m2129003246 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_IsRequired()
extern "C"  bool ValueMember_get_IsRequired_m2687869989 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_IsRequired(System.Boolean)
extern "C"  void ValueMember_set_IsRequired_m3062908148 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_AsReference(System.Boolean)
extern "C"  void ValueMember_set_AsReference_m86521014 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::set_DynamicType(System.Boolean)
extern "C"  void ValueMember_set_DynamicType_m2596189090 (ValueMember_t2864814053 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::SetSpecified(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  void ValueMember_SetSpecified_m3349713499 (ValueMember_t2864814053 * __this, MethodInfo_t * ___getSpecified0, MethodInfo_t * ___setSpecified1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::ThrowIfFrozen()
extern "C"  void ValueMember_ThrowIfFrozen_m2598035180 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.ValueMember::BuildSerializer()
extern "C"  Il2CppObject * ValueMember_BuildSerializer_m1183493957 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.WireType ProtoBuf.Meta.ValueMember::GetIntWireType(ProtoBuf.DataFormat,System.Int32)
extern "C"  int32_t ValueMember_GetIntWireType_m1036439327 (Il2CppObject * __this /* static, unused */, int32_t ___format0, int32_t ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.WireType ProtoBuf.Meta.ValueMember::GetDateTimeWireType(ProtoBuf.DataFormat)
extern "C"  int32_t ValueMember_GetDateTimeWireType_m1889728416 (Il2CppObject * __this /* static, unused */, int32_t ___format0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.ValueMember::TryGetCoreSerializer(ProtoBuf.Meta.RuntimeTypeModel,ProtoBuf.DataFormat,System.Type,ProtoBuf.WireType&,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  Il2CppObject * ValueMember_TryGetCoreSerializer_m3039579427 (Il2CppObject * __this /* static, unused */, RuntimeTypeModel_t623319549 * ___model0, int32_t ___dataFormat1, Type_t * ___type2, int32_t* ___defaultWireType3, bool ___asReference4, bool ___dynamicType5, bool ___overwriteList6, bool ___allowComplexTypes7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::SetName(System.String)
extern "C"  void ValueMember_SetName_m2216406992 (ValueMember_t2864814053 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::HasFlag(System.Byte)
extern "C"  bool ValueMember_HasFlag_m3527010326 (ValueMember_t2864814053 * __this, uint8_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.ValueMember::SetFlag(System.Byte,System.Boolean,System.Boolean)
extern "C"  void ValueMember_SetFlag_m2324129304 (ValueMember_t2864814053 * __this, uint8_t ___flag0, bool ___value1, bool ___throwIfFrozen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.ValueMember::get_SupportNull()
extern "C"  bool ValueMember_get_SupportNull_m2523532168 (ValueMember_t2864814053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
