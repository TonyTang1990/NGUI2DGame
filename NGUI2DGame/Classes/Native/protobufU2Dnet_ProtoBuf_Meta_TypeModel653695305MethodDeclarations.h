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

// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t3255436806;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;
// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t4268412390;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "protobufU2Dnet_ProtoBuf_WireType4172783757.h"
#include "protobufU2Dnet_ProtoBuf_ProtoTypeCode3296822465.h"
#include "protobufU2Dnet_ProtoBuf_DataFormat1866125683.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "protobufU2Dnet_ProtoBuf_SerializationContext3878296411.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "protobufU2Dnet_ProtoBuf_Meta_BasicList2284403912.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"

// System.Type ProtoBuf.Meta.TypeModel::MapType(System.Type)
extern "C"  Type_t * TypeModel_MapType_m1376612940 (TypeModel_t653695305 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::MapType(System.Type,System.Boolean)
extern "C"  Type_t * TypeModel_MapType_m709353863 (TypeModel_t653695305 * __this, Type_t * ___type0, bool ___demand1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.WireType ProtoBuf.Meta.TypeModel::GetWireType(ProtoBuf.ProtoTypeCode,ProtoBuf.DataFormat,System.Type&,System.Int32&)
extern "C"  int32_t TypeModel_GetWireType_m3912993137 (TypeModel_t653695305 * __this, int32_t ___code0, int32_t ___format1, Type_t ** ___type2, int32_t* ___modelKey3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::TrySerializeAuxiliaryType(ProtoBuf.ProtoWriter,System.Type,ProtoBuf.DataFormat,System.Int32,System.Object,System.Boolean)
extern "C"  bool TypeModel_TrySerializeAuxiliaryType_m1251664969 (TypeModel_t653695305 * __this, ProtoWriter_t2800220307 * ___writer0, Type_t * ___type1, int32_t ___format2, int32_t ___tag3, Il2CppObject * ___value4, bool ___isInsideList5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::SerializeCore(ProtoBuf.ProtoWriter,System.Object)
extern "C"  void TypeModel_SerializeCore_m1935720492 (TypeModel_t653695305 * __this, ProtoWriter_t2800220307 * ___writer0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::Serialize(System.IO.Stream,System.Object)
extern "C"  void TypeModel_Serialize_m806129384 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___dest0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::Serialize(System.IO.Stream,System.Object,ProtoBuf.SerializationContext)
extern "C"  void TypeModel_Serialize_m12556952 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___dest0, Il2CppObject * ___value1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::Deserialize(System.IO.Stream,System.Object,System.Type)
extern "C"  Il2CppObject * TypeModel_Deserialize_m1350569455 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::Deserialize(System.IO.Stream,System.Object,System.Type,ProtoBuf.SerializationContext)
extern "C"  Il2CppObject * TypeModel_Deserialize_m174549739 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, SerializationContext_t3878296411 * ___context3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::PrepareDeserialize(System.Object,System.Type&)
extern "C"  bool TypeModel_PrepareDeserialize_m189880784 (TypeModel_t653695305 * __this, Il2CppObject * ___value0, Type_t ** ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::DeserializeCore(ProtoBuf.ProtoReader,System.Type,System.Object,System.Boolean)
extern "C"  Il2CppObject * TypeModel_DeserializeCore_m1231219952 (TypeModel_t653695305 * __this, ProtoReader_t3981212867 * ___reader0, Type_t * ___type1, Il2CppObject * ___value2, bool ___noAutoCreate3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Meta.TypeModel::ResolveListAdd(ProtoBuf.Meta.TypeModel,System.Type,System.Type,System.Boolean&)
extern "C"  MethodInfo_t * TypeModel_ResolveListAdd_m3738663196 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___listType1, Type_t * ___itemType2, bool* ___isList3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::GetListItemType(ProtoBuf.Meta.TypeModel,System.Type)
extern "C"  Type_t * TypeModel_GetListItemType_m2520936192 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___listType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::TestEnumerableListPatterns(ProtoBuf.Meta.TypeModel,ProtoBuf.Meta.BasicList,System.Type)
extern "C"  void TypeModel_TestEnumerableListPatterns_m3332789798 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, BasicList_t2284403912 * ___candidates1, Type_t * ___iType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::CheckDictionaryAccessors(ProtoBuf.Meta.TypeModel,System.Type,System.Type)
extern "C"  bool TypeModel_CheckDictionaryAccessors_m3731187808 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___pair1, Type_t * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::TryDeserializeList(ProtoBuf.Meta.TypeModel,ProtoBuf.ProtoReader,ProtoBuf.DataFormat,System.Int32,System.Type,System.Type,System.Object&)
extern "C"  bool TypeModel_TryDeserializeList_m1593112345 (TypeModel_t653695305 * __this, TypeModel_t653695305 * ___model0, ProtoReader_t3981212867 * ___reader1, int32_t ___format2, int32_t ___tag3, Type_t * ___listType4, Type_t * ___itemType5, Il2CppObject ** ___value6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.TypeModel::CreateListInstance(System.Type,System.Type)
extern "C"  Il2CppObject * TypeModel_CreateListInstance_m3046607841 (Il2CppObject * __this /* static, unused */, Type_t * ___listType0, Type_t * ___itemType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.TypeModel::TryDeserializeAuxiliaryType(ProtoBuf.ProtoReader,ProtoBuf.DataFormat,System.Int32,System.Type,System.Object&,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  bool TypeModel_TryDeserializeAuxiliaryType_m1775273591 (TypeModel_t653695305 * __this, ProtoReader_t3981212867 * ___reader0, int32_t ___format1, int32_t ___tag2, Type_t * ___type3, Il2CppObject ** ___value4, bool ___skipOtherFields5, bool ___asListItem6, bool ___autoCreate7, bool ___insideList8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::ResolveProxies(System.Type)
extern "C"  Type_t * TypeModel_ResolveProxies_m3138091170 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.TypeModel::GetKey(System.Type&)
extern "C"  int32_t TypeModel_GetKey_m1061342213 (TypeModel_t653695305 * __this, Type_t ** ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::ThrowUnexpectedSubtype(System.Type,System.Type)
extern "C"  void TypeModel_ThrowUnexpectedSubtype_m1437867326 (Il2CppObject * __this /* static, unused */, Type_t * ___expected0, Type_t * ___actual1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::ThrowUnexpectedType(System.Type)
extern "C"  void TypeModel_ThrowUnexpectedType_m1777965871 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.Meta.TypeModel::CreateNestedListsNotSupported()
extern "C"  Exception_t1927440687 * TypeModel_CreateNestedListsNotSupported_m3196710079 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::ThrowCannotCreateInstance(System.Type)
extern "C"  void TypeModel_ThrowCannotCreateInstance_m162028032 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.Meta.TypeModel::SerializeType(ProtoBuf.Meta.TypeModel,System.Type)
extern "C"  String_t* TypeModel_SerializeType_m2009819262 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::DeserializeType(ProtoBuf.Meta.TypeModel,System.String)
extern "C"  Type_t * TypeModel_DeserializeType_m1868259295 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::GetType(System.String,System.Reflection.Assembly)
extern "C"  Type_t * TypeModel_GetType_m1394808083 (TypeModel_t653695305 * __this, String_t* ___fullName0, Assembly_t4268412390 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Meta.TypeModel::ResolveKnownType(System.String,ProtoBuf.Meta.TypeModel,System.Reflection.Assembly)
extern "C" IL2CPP_NO_INLINE Type_t * TypeModel_ResolveKnownType_m3041470891 (Il2CppObject * __this /* static, unused */, String_t* ___name0, TypeModel_t653695305 * ___model1, Assembly_t4268412390 * ___assembly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::.ctor()
extern "C"  void TypeModel__ctor_m3606578987 (TypeModel_t653695305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.TypeModel::.cctor()
extern "C"  void TypeModel__cctor_m1485232826 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
