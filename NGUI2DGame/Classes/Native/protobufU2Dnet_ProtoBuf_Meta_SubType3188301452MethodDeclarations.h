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

// ProtoBuf.Meta.SubType
struct SubType_t3188301452;
// ProtoBuf.Meta.MetaType
struct MetaType_t4127688095;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Meta_MetaType4127688095.h"
#include "protobufU2Dnet_ProtoBuf_DataFormat1866125683.h"

// System.Int32 ProtoBuf.Meta.SubType::get_FieldNumber()
extern "C"  int32_t SubType_get_FieldNumber_m2735277164 (SubType_t3188301452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Meta.MetaType ProtoBuf.Meta.SubType::get_DerivedType()
extern "C"  MetaType_t4127688095 * SubType_get_DerivedType_m1258051174 (SubType_t3188301452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Meta.SubType::.ctor(System.Int32,ProtoBuf.Meta.MetaType,ProtoBuf.DataFormat)
extern "C"  void SubType__ctor_m3846892260 (SubType_t3188301452 * __this, int32_t ___fieldNumber0, MetaType_t4127688095 * ___derivedType1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.SubType::get_Serializer()
extern "C"  Il2CppObject * SubType_get_Serializer_m3630811601 (SubType_t3188301452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Meta.SubType::BuildSerializer()
extern "C"  Il2CppObject * SubType_BuildSerializer_m3686163124 (SubType_t3188301452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
