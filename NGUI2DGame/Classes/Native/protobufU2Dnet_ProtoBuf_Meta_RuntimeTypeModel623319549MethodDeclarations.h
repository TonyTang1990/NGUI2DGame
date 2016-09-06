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

// ProtoBuf.Meta.RuntimeTypeModel
struct RuntimeTypeModel_t623319549;
// ProtoBuf.Meta.MetaType
struct MetaType_t4127688095;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.Serializers.EnumSerializer/EnumPair[]
struct EnumPairU5BU5D_t121134586;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_Meta_MetaType4127688095.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"

// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::GetOption(System.Byte)
extern "C"  bool RuntimeTypeModel_GetOption_m618851083 (RuntimeTypeModel_t623319549 * __this, uint8_t ___option0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::SetOption(System.Byte,System.Boolean)
extern "C"  void RuntimeTypeModel_SetOption_m1425411762 (RuntimeTypeModel_t623319549 * __this, uint8_t ___option0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::get_InferTagFromNameDefault()
extern "C"  bool RuntimeTypeModel_get_InferTagFromNameDefault_m3307733874 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::get_AutoAddProtoContractTypesOnly()
extern "C"  bool RuntimeTypeModel_get_AutoAddProtoContractTypesOnly_m2072933135 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::get_UseImplicitZeroDefaults()
extern "C"  bool RuntimeTypeModel_get_UseImplicitZeroDefaults_m1812149134 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::set_UseImplicitZeroDefaults(System.Boolean)
extern "C"  void RuntimeTypeModel_set_UseImplicitZeroDefaults_m2831230795 (RuntimeTypeModel_t623319549 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::get_AllowParseableTypes()
extern "C"  bool RuntimeTypeModel_get_AllowParseableTypes_m671177223 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.RuntimeTypeModel ProtoBuf.Meta.RuntimeTypeModel::get_Default()
extern "C"  RuntimeTypeModel_t623319549 * RuntimeTypeModel_get_Default_m3445886971 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::.ctor(System.Boolean)
extern "C"  void RuntimeTypeModel__ctor_m89423376 (RuntimeTypeModel_t623319549 * __this, bool ___isDefault0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.RuntimeTypeModel::get_Item(System.Type)
extern "C"  MetaType_t4127688095 * RuntimeTypeModel_get_Item_m1398534246 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.RuntimeTypeModel::FindWithoutAdd(System.Type)
extern "C"  MetaType_t4127688095 * RuntimeTypeModel_FindWithoutAdd_m3683327296 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::MetaTypeFinderImpl(System.Object,System.Object)
extern "C"  bool RuntimeTypeModel_MetaTypeFinderImpl_m1693617980 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::BasicTypeFinderImpl(System.Object,System.Object)
extern "C"  bool RuntimeTypeModel_BasicTypeFinderImpl_m1615170567 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Il2CppObject * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::WaitOnLock(ProtoBuf.Meta.MetaType)
extern "C"  void RuntimeTypeModel_WaitOnLock_m1328016861 (RuntimeTypeModel_t623319549 * __this, MetaType_t4127688095 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.RuntimeTypeModel::TryGetBasicTypeSerializer(System.Type)
extern "C"  Il2CppObject * RuntimeTypeModel_TryGetBasicTypeSerializer_m2044015423 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::FindOrAddAuto(System.Type,System.Boolean,System.Boolean,System.Boolean)
extern "C"  int32_t RuntimeTypeModel_FindOrAddAuto_m1557722935 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, bool ___demand1, bool ___addWithContractOnly2, bool ___addEvenIfAutoDisabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.RuntimeTypeModel::RecogniseCommonTypes(System.Type)
extern "C"  MetaType_t4127688095 * RuntimeTypeModel_RecogniseCommonTypes_m82221411 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.RuntimeTypeModel::Create(System.Type)
extern "C"  MetaType_t4127688095 * RuntimeTypeModel_Create_m3902408880 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::get_AutoCompile()
extern "C"  bool RuntimeTypeModel_get_AutoCompile_m413342310 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::set_AutoCompile(System.Boolean)
extern "C"  void RuntimeTypeModel_set_AutoCompile_m3715266435 (RuntimeTypeModel_t623319549 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Meta.RuntimeTypeModel::get_AutoAddMissingTypes()
extern "C"  bool RuntimeTypeModel_get_AutoAddMissingTypes_m1642998399 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::set_AutoAddMissingTypes(System.Boolean)
extern "C"  void RuntimeTypeModel_set_AutoAddMissingTypes_m2657232648 (RuntimeTypeModel_t623319549 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::ThrowIfFrozen()
extern "C"  void RuntimeTypeModel_ThrowIfFrozen_m1849239320 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::GetKeyImpl(System.Type)
extern "C"  int32_t RuntimeTypeModel_GetKeyImpl_m2675278499 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::GetKey(System.Type,System.Boolean,System.Boolean)
extern "C"  int32_t RuntimeTypeModel_GetKey_m1039102179 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, bool ___demand1, bool ___getBaseKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::Serialize(System.Int32,System.Object,ProtoBuf.ProtoWriter)
extern "C"  void RuntimeTypeModel_Serialize_m2608177918 (RuntimeTypeModel_t623319549 * __this, int32_t ___key0, Il2CppObject * ___value1, ProtoWriter_t2800220307 * ___dest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Meta.RuntimeTypeModel::Deserialize(System.Int32,System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * RuntimeTypeModel_Deserialize_m1327658982 (RuntimeTypeModel_t623319549 * __this, int32_t ___key0, Il2CppObject * ___value1, ProtoReader_t3981212867 * ___source2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.EnumSerializer/EnumPair[] ProtoBuf.Meta.RuntimeTypeModel::GetEnumMap(System.Type)
extern "C"  EnumPairU5BU5D_t121134586* RuntimeTypeModel_GetEnumMap_m3170401181 (RuntimeTypeModel_t623319549 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::TakeLock(System.Int32&)
extern "C"  void RuntimeTypeModel_TakeLock_m3249862512 (RuntimeTypeModel_t623319549 * __this, int32_t* ___opaqueToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Meta.RuntimeTypeModel::GetContention()
extern "C"  int32_t RuntimeTypeModel_GetContention_m2528538492 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::AddContention()
extern "C"  void RuntimeTypeModel_AddContention_m2342569775 (RuntimeTypeModel_t623319549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::ReleaseLock(System.Int32)
extern "C"  void RuntimeTypeModel_ReleaseLock_m3846181494 (RuntimeTypeModel_t623319549 * __this, int32_t ___opaqueToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.RuntimeTypeModel::.cctor()
extern "C"  void RuntimeTypeModel__cctor_m595101152 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
