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

// ProtoBuf.Serializers.SByteSerializer
struct SByteSerializer_t1343946807;
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

// System.Void ProtoBuf.Serializers.SByteSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void SByteSerializer__ctor_m2461943066 (SByteSerializer_t1343946807 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.SByteSerializer::get_ExpectedType()
extern "C"  Type_t * SByteSerializer_get_ExpectedType_m601671074 (SByteSerializer_t1343946807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SByteSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool SByteSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m4050882161 (SByteSerializer_t1343946807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SByteSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool SByteSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m2600675833 (SByteSerializer_t1343946807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SByteSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SByteSerializer_Read_m102206376 (SByteSerializer_t1343946807 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SByteSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void SByteSerializer_Write_m2569750204 (SByteSerializer_t1343946807 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SByteSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void SByteSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m4169182919 (SByteSerializer_t1343946807 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SByteSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void SByteSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m2438511454 (SByteSerializer_t1343946807 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SByteSerializer::.cctor()
extern "C"  void SByteSerializer__cctor_m3562360640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
