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

// ProtoBuf.Serializers.SystemTypeSerializer
struct SystemTypeSerializer_t2220468495;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;
// ProtoBuf.Compiler.Local
struct Local_t1810252861;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"

// System.Void ProtoBuf.Serializers.SystemTypeSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void SystemTypeSerializer__ctor_m3145776574 (SystemTypeSerializer_t2220468495 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.SystemTypeSerializer::get_ExpectedType()
extern "C"  Type_t * SystemTypeSerializer_get_ExpectedType_m2269413254 (SystemTypeSerializer_t2220468495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SystemTypeSerializer::ProtoBuf.Serializers.IProtoSerializer.Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void SystemTypeSerializer_ProtoBuf_Serializers_IProtoSerializer_Write_m902063453 (SystemTypeSerializer_t2220468495 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SystemTypeSerializer::ProtoBuf.Serializers.IProtoSerializer.Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SystemTypeSerializer_ProtoBuf_Serializers_IProtoSerializer_Read_m3840447365 (SystemTypeSerializer_t2220468495 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SystemTypeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool SystemTypeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m1235092409 (SystemTypeSerializer_t2220468495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SystemTypeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool SystemTypeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m3478075529 (SystemTypeSerializer_t2220468495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SystemTypeSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void SystemTypeSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m3794662807 (SystemTypeSerializer_t2220468495 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SystemTypeSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void SystemTypeSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m4139824826 (SystemTypeSerializer_t2220468495 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SystemTypeSerializer::.cctor()
extern "C"  void SystemTypeSerializer__cctor_m2401719596 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
