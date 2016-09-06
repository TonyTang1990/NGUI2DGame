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

// ProtoBuf.Serializers.ByteSerializer
struct ByteSerializer_t798786928;
// System.Type
struct Type_t;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
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

// System.Type ProtoBuf.Serializers.ByteSerializer::get_ExpectedType()
extern "C"  Type_t * ByteSerializer_get_ExpectedType_m4041621487 (ByteSerializer_t798786928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ByteSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void ByteSerializer__ctor_m1675309065 (ByteSerializer_t798786928 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ByteSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool ByteSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m2888818988 (ByteSerializer_t798786928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ByteSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool ByteSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m952757342 (ByteSerializer_t798786928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ByteSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void ByteSerializer_Write_m669831375 (ByteSerializer_t798786928 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.ByteSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * ByteSerializer_Read_m1812256919 (ByteSerializer_t798786928 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ByteSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void ByteSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m3446432320 (ByteSerializer_t798786928 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ByteSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void ByteSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m90373899 (ByteSerializer_t798786928 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ByteSerializer::.cctor()
extern "C"  void ByteSerializer__cctor_m829606367 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
