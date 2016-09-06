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

// ProtoBuf.Serializers.Int64Serializer
struct Int64Serializer_t1900482915;
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

// System.Void ProtoBuf.Serializers.Int64Serializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void Int64Serializer__ctor_m794594962 (Int64Serializer_t1900482915 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.Int64Serializer::get_ExpectedType()
extern "C"  Type_t * Int64Serializer_get_ExpectedType_m645450966 (Int64Serializer_t1900482915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.Int64Serializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool Int64Serializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m554014197 (Int64Serializer_t1900482915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.Int64Serializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool Int64Serializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m3217174309 (Int64Serializer_t1900482915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.Int64Serializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * Int64Serializer_Read_m817659572 (Int64Serializer_t1900482915 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int64Serializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void Int64Serializer_Write_m2714045728 (Int64Serializer_t1900482915 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int64Serializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void Int64Serializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m2034185487 (Int64Serializer_t1900482915 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int64Serializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void Int64Serializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m2807404106 (Int64Serializer_t1900482915 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int64Serializer::.cctor()
extern "C"  void Int64Serializer__cctor_m1572213484 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
