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

// ProtoBuf.Meta.MetaType
struct MetaType_t4127688095;
// System.String
struct String_t;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// ProtoBuf.Meta.CallbackSet
struct CallbackSet_t2109955613;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Exception
struct Exception_t1927440687;
// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t623319549;
// ProtoBuf.Serializers.IProtoTypeSerializer
struct IProtoTypeSerializer_t3285812945;
// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t152480188;
// ProtoBuf.Meta.AttributeMap[]
struct AttributeMapU5BU5D_t1124678505;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// ProtoBuf.ProtoMemberAttribute
struct ProtoMemberAttribute_t3383080044;
// ProtoBuf.Meta.ValueMember
struct ValueMember_t2864814053;
// ProtoBuf.Meta.AttributeMap
struct AttributeMap_t748219064;
// ProtoBuf.Serializers.EnumSerializer/EnumPair[]
struct EnumPairU5BU5D_t121134586;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "protobufU2Dnet_ProtoBuf_DataFormat1866125683.h"
#include "protobufU2Dnet_ProtoBuf_Meta_MetaType4127688095.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_String2029220233.h"
#include "protobufU2Dnet_ProtoBuf_Meta_RuntimeTypeModel623319549.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "protobufU2Dnet_ProtoBuf_Meta_MetaType_AttributeFami456994498.h"
#include "protobufU2Dnet_ProtoBuf_Meta_BasicList2284403912.h"
#include "protobufU2Dnet_ProtoBuf_ImplicitFields2119185212.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "protobufU2Dnet_ProtoBuf_ProtoMemberAttribute3383080044.h"
#include "protobufU2Dnet_ProtoBuf_Meta_AttributeMap748219064.h"
#include "protobufU2Dnet_ProtoBuf_Meta_ValueMember2864814053.h"

// System.String ProtoBuf.Meta.MetaType::ToString()
extern "C"  String_t* MetaType_ToString_m4033760012 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.MetaType::ProtoBuf.Serializers.ISerializerProxy.get_Serializer()
extern "C"  Il2CppObject * MetaType_ProtoBuf_Serializers_ISerializerProxy_get_Serializer_m930022231 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::get_BaseType()
extern "C"  MetaType_t4127688095 * MetaType_get_BaseType_m3711080901 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.TypeModel ProtoBuf.Meta.MetaType::get_Model()
extern "C"  TypeModel_t653695305 * MetaType_get_Model_m2056380693 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_AsReferenceDefault()
extern "C"  bool MetaType_get_AsReferenceDefault_m3208570378 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_AsReferenceDefault(System.Boolean)
extern "C"  void MetaType_set_AsReferenceDefault_m365657153 (MetaType_t4127688095 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::IsValidSubType(System.Type)
extern "C"  bool MetaType_IsValidSubType_m1638245546 (MetaType_t4127688095 * __this, Type_t * ___subType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::AddSubType(System.Int32,System.Type,ProtoBuf.DataFormat)
extern "C"  MetaType_t4127688095 * MetaType_AddSubType_m2091655682 (MetaType_t4127688095 * __this, int32_t ___fieldNumber0, Type_t * ___derivedType1, int32_t ___dataFormat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::SetBaseType(ProtoBuf.Meta.MetaType)
extern "C"  void MetaType_SetBaseType_m223367429 (MetaType_t4127688095 * __this, MetaType_t4127688095 * ___baseType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_HasCallbacks()
extern "C"  bool MetaType_get_HasCallbacks_m888746960 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.CallbackSet ProtoBuf.Meta.MetaType::get_Callbacks()
extern "C"  CallbackSet_t2109955613 * MetaType_get_Callbacks_m1725136140 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::SetCallbacks(System.Reflection.MethodInfo,System.Reflection.MethodInfo,System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  MetaType_t4127688095 * MetaType_SetCallbacks_m349641125 (MetaType_t4127688095 * __this, MethodInfo_t * ___beforeSerialize0, MethodInfo_t * ___afterSerialize1, MethodInfo_t * ___beforeDeserialize2, MethodInfo_t * ___afterDeserialize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_Name(System.String)
extern "C"  void MetaType_set_Name_m4194228517 (MetaType_t4127688095 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.Meta.MetaType::InbuiltType(System.Type)
extern "C"  Exception_t1927440687 * MetaType_InbuiltType_m1981555022 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::.ctor(ProtoBuf.Meta.RuntimeTypeModel,System.Type,System.Reflection.MethodInfo)
extern "C"  void MetaType__ctor_m179461924 (MetaType_t4127688095 * __this, RuntimeTypeModel_t623319549 * ___model0, Type_t * ___type1, MethodInfo_t * ___factory2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::ThrowIfFrozen()
extern "C"  void MetaType_ThrowIfFrozen_m4166599248 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.MetaType::get_Type()
extern "C"  Type_t * MetaType_get_Type_m7829298 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoTypeSerializer ProtoBuf.Meta.MetaType::get_Serializer()
extern "C"  Il2CppObject * MetaType_get_Serializer_m139699506 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoTypeSerializer ProtoBuf.Meta.MetaType::BuildSerializer()
extern "C"  Il2CppObject * MetaType_BuildSerializer_m403031399 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.MetaType::GetBaseType(ProtoBuf.Meta.MetaType)
extern "C"  Type_t * MetaType_GetBaseType_m1181042933 (Il2CppObject * __this /* static, unused */, MetaType_t4127688095 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::GetAsReferenceDefault(ProtoBuf.Meta.RuntimeTypeModel,System.Type)
extern "C"  bool MetaType_GetAsReferenceDefault_m3037883223 (Il2CppObject * __this /* static, unused */, RuntimeTypeModel_t623319549 * ___model0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::ApplyDefaultBehaviour()
extern "C"  void MetaType_ApplyDefaultBehaviour_m631721499 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::ApplyDefaultBehaviour_AddMembers(ProtoBuf.Meta.TypeModel,ProtoBuf.Meta.MetaType/AttributeFamily,System.Boolean,ProtoBuf.Meta.BasicList,System.Int32,System.Boolean,ProtoBuf.ImplicitFields,ProtoBuf.Meta.BasicList,System.Reflection.MemberInfo,System.Boolean&,System.Boolean,System.Boolean,System.Type&)
extern "C"  void MetaType_ApplyDefaultBehaviour_AddMembers_m2816055043 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, int32_t ___family1, bool ___isEnum2, BasicList_t2284403912 * ___partialMembers3, int32_t ___dataMemberOffset4, bool ___inferTagByName5, int32_t ___implicitMode6, BasicList_t2284403912 * ___members7, MemberInfo_t * ___member8, bool* ___forced9, bool ___isPublic10, bool ___isField11, Type_t ** ___effectiveType12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Meta.MetaType::Coalesce(System.Reflection.MethodInfo[],System.Int32,System.Int32)
extern "C"  MethodInfo_t * MetaType_Coalesce_m4185608553 (Il2CppObject * __this /* static, unused */, MethodInfoU5BU5D_t152480188* ___arr0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType/AttributeFamily ProtoBuf.Meta.MetaType::GetContractFamily(ProtoBuf.Meta.RuntimeTypeModel,System.Type,ProtoBuf.Meta.AttributeMap[])
extern "C"  int32_t MetaType_GetContractFamily_m150489422 (Il2CppObject * __this /* static, unused */, RuntimeTypeModel_t623319549 * ___model0, Type_t * ___type1, AttributeMapU5BU5D_t1124678505* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo ProtoBuf.Meta.MetaType::ResolveTupleConstructor(System.Type,System.Reflection.MemberInfo[]&)
extern "C"  ConstructorInfo_t2851816542 * MetaType_ResolveTupleConstructor_m3921908721 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, MemberInfoU5BU5D_t4238939941** ___mappedMembers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::CheckForCallback(System.Reflection.MethodInfo,ProtoBuf.Meta.AttributeMap[],System.String,System.Reflection.MethodInfo[]&,System.Int32)
extern "C"  void MetaType_CheckForCallback_m3140869300 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, AttributeMapU5BU5D_t1124678505* ___attributes1, String_t* ___callbackTypeName2, MethodInfoU5BU5D_t152480188** ___callbacks3, int32_t ___index4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::HasFamily(ProtoBuf.Meta.MetaType/AttributeFamily,ProtoBuf.Meta.MetaType/AttributeFamily)
extern "C"  bool MetaType_HasFamily_m936152341 (Il2CppObject * __this /* static, unused */, int32_t ___value0, int32_t ___required1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.ProtoMemberAttribute ProtoBuf.Meta.MetaType::NormalizeProtoMember(ProtoBuf.Meta.TypeModel,System.Reflection.MemberInfo,ProtoBuf.Meta.MetaType/AttributeFamily,System.Boolean,System.Boolean,ProtoBuf.Meta.BasicList,System.Int32,System.Boolean)
extern "C"  ProtoMemberAttribute_t3383080044 * MetaType_NormalizeProtoMember_m2594105757 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, MemberInfo_t * ___member1, int32_t ___family2, bool ___forced3, bool ___isEnum4, BasicList_t2284403912 * ___partialMembers5, int32_t ___dataMemberOffset6, bool ___inferByTagName7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.ValueMember ProtoBuf.Meta.MetaType::ApplyDefaultBehaviour(System.Boolean,ProtoBuf.ProtoMemberAttribute)
extern "C"  ValueMember_t2864814053 * MetaType_ApplyDefaultBehaviour_m1798644277 (MetaType_t4127688095 * __this, bool ___isEnum0, ProtoMemberAttribute_t3383080044 * ___normalizedAttribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::GetDataFormat(ProtoBuf.DataFormat&,ProtoBuf.Meta.AttributeMap,System.String)
extern "C"  void MetaType_GetDataFormat_m2968709148 (Il2CppObject * __this /* static, unused */, int32_t* ___value0, AttributeMap_t748219064 * ___attrib1, String_t* ___memberName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::GetIgnore(System.Boolean&,ProtoBuf.Meta.AttributeMap,ProtoBuf.Meta.AttributeMap[],System.String)
extern "C"  void MetaType_GetIgnore_m4071395378 (Il2CppObject * __this /* static, unused */, bool* ___ignore0, AttributeMap_t748219064 * ___attrib1, AttributeMapU5BU5D_t1124678505* ___attribs2, String_t* ___fullName3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::GetFieldBoolean(System.Boolean&,ProtoBuf.Meta.AttributeMap,System.String)
extern "C"  void MetaType_GetFieldBoolean_m4225780776 (Il2CppObject * __this /* static, unused */, bool* ___value0, AttributeMap_t748219064 * ___attrib1, String_t* ___memberName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::GetFieldBoolean(System.Boolean&,ProtoBuf.Meta.AttributeMap,System.String,System.Boolean)
extern "C"  bool MetaType_GetFieldBoolean_m1242284719 (Il2CppObject * __this /* static, unused */, bool* ___value0, AttributeMap_t748219064 * ___attrib1, String_t* ___memberName2, bool ___publicOnly3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::GetFieldNumber(System.Int32&,ProtoBuf.Meta.AttributeMap,System.String)
extern "C"  void MetaType_GetFieldNumber_m1915858797 (Il2CppObject * __this /* static, unused */, int32_t* ___value0, AttributeMap_t748219064 * ___attrib1, String_t* ___memberName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::GetFieldName(System.String&,ProtoBuf.Meta.AttributeMap,System.String)
extern "C"  void MetaType_GetFieldName_m2737334100 (Il2CppObject * __this /* static, unused */, String_t** ___name0, AttributeMap_t748219064 * ___attrib1, String_t* ___memberName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.AttributeMap ProtoBuf.Meta.MetaType::GetAttribute(ProtoBuf.Meta.AttributeMap[],System.String)
extern "C"  AttributeMap_t748219064 * MetaType_GetAttribute_m1164773436 (Il2CppObject * __this /* static, unused */, AttributeMapU5BU5D_t1124678505* ___attribs0, String_t* ___fullName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_UseConstructor()
extern "C"  bool MetaType_get_UseConstructor_m390065175 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_UseConstructor(System.Boolean)
extern "C"  void MetaType_set_UseConstructor_m535070620 (MetaType_t4127688095 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::ResolveListTypes(ProtoBuf.Meta.TypeModel,System.Type,System.Type&,System.Type&)
extern "C"  void MetaType_ResolveListTypes_m758272908 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___type1, Type_t ** ___itemType2, Type_t ** ___defaultType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::Add(ProtoBuf.Meta.ValueMember)
extern "C"  void MetaType_Add_m3591429421 (MetaType_t4127688095 * __this, ValueMember_t2864814053 * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::CompileInPlace()
extern "C"  void MetaType_CompileInPlace_m3370311048 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.MetaType::GetKey(System.Boolean,System.Boolean)
extern "C"  int32_t MetaType_GetKey_m2886961482 (MetaType_t4127688095 * __this, bool ___demand0, bool ___getBaseKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.EnumSerializer/EnumPair[] ProtoBuf.Meta.MetaType::GetEnumMap()
extern "C"  EnumPairU5BU5D_t121134586* MetaType_GetEnumMap_m4099386202 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_EnumPassthru()
extern "C"  bool MetaType_get_EnumPassthru_m3780886841 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_EnumPassthru(System.Boolean)
extern "C"  void MetaType_set_EnumPassthru_m4273280368 (MetaType_t4127688095 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_IgnoreListHandling()
extern "C"  bool MetaType_get_IgnoreListHandling_m1760688125 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_IgnoreListHandling(System.Boolean)
extern "C"  void MetaType_set_IgnoreListHandling_m3589117726 (MetaType_t4127688095 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_Pending()
extern "C"  bool MetaType_get_Pending_m57937535 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::set_Pending(System.Boolean)
extern "C"  void MetaType_set_Pending_m93033016 (MetaType_t4127688095 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::HasFlag(System.Byte)
extern "C"  bool MetaType_HasFlag_m355827422 (MetaType_t4127688095 * __this, uint8_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::SetFlag(System.Byte,System.Boolean,System.Boolean)
extern "C"  void MetaType_SetFlag_m161904068 (MetaType_t4127688095 * __this, uint8_t ___flag0, bool ___value1, bool ___throwIfFrozen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.MetaType::GetRootType(ProtoBuf.Meta.MetaType)
extern "C"  MetaType_t4127688095 * MetaType_GetRootType_m4108188620 (Il2CppObject * __this /* static, unused */, MetaType_t4127688095 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.MetaType::get_IsAutoTuple()
extern "C"  bool MetaType_get_IsAutoTuple_m2715743529 (MetaType_t4127688095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.MetaType::.cctor()
extern "C"  void MetaType__cctor_m3162558564 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
