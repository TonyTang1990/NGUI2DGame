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

// ProtoBuf.Serializers.DoubleSerializer
struct DoubleSerializer_t2487862911;
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

// System.Void ProtoBuf.Serializers.DoubleSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void DoubleSerializer__ctor_m1191675414 (DoubleSerializer_t2487862911 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.DoubleSerializer::get_ExpectedType()
extern "C"  Type_t * DoubleSerializer_get_ExpectedType_m2126367454 (DoubleSerializer_t2487862911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DoubleSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool DoubleSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m1256430825 (DoubleSerializer_t2487862911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DoubleSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool DoubleSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m1508967417 (DoubleSerializer_t2487862911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.DoubleSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * DoubleSerializer_Read_m2215485706 (DoubleSerializer_t2487862911 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DoubleSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void DoubleSerializer_Write_m2321607840 (DoubleSerializer_t2487862911 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DoubleSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void DoubleSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m187463615 (DoubleSerializer_t2487862911 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DoubleSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void DoubleSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m2381450986 (DoubleSerializer_t2487862911 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DoubleSerializer::.cctor()
extern "C"  void DoubleSerializer__cctor_m1755208124 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
