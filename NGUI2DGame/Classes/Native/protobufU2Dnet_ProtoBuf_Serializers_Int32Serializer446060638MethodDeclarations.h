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

// ProtoBuf.Serializers.Int32Serializer
struct Int32Serializer_t446060638;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;
// ProtoBuf.Compiler.Local
struct Local_t1810252861;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"

// System.Void ProtoBuf.Serializers.Int32Serializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void Int32Serializer__ctor_m1475663789 (Int32Serializer_t446060638 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.Int32Serializer::get_ExpectedType()
extern "C"  Type_t * Int32Serializer_get_ExpectedType_m3213833339 (Int32Serializer_t446060638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.Int32Serializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool Int32Serializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m1142365628 (Int32Serializer_t446060638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.Int32Serializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool Int32Serializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m356656574 (Int32Serializer_t446060638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.Int32Serializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * Int32Serializer_Read_m2380021695 (Int32Serializer_t446060638 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int32Serializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void Int32Serializer_Write_m1583817395 (Int32Serializer_t446060638 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int32Serializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void Int32Serializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m4164516960 (Int32Serializer_t446060638 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int32Serializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void Int32Serializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m2376286903 (Int32Serializer_t446060638 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int32Serializer::.cctor()
extern "C"  void Int32Serializer__cctor_m282518787 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
