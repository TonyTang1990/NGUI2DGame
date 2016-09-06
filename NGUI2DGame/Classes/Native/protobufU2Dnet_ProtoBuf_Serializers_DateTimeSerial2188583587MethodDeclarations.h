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

// ProtoBuf.Serializers.DateTimeSerializer
struct DateTimeSerializer_t2188583587;
// System.Type
struct Type_t;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
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

// System.Type ProtoBuf.Serializers.DateTimeSerializer::get_ExpectedType()
extern "C"  Type_t * DateTimeSerializer_get_ExpectedType_m2250198930 (DateTimeSerializer_t2188583587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DateTimeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool DateTimeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m3074095973 (DateTimeSerializer_t2188583587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DateTimeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool DateTimeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m406656501 (DateTimeSerializer_t2188583587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DateTimeSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void DateTimeSerializer__ctor_m2216114730 (DateTimeSerializer_t2188583587 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.DateTimeSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * DateTimeSerializer_Read_m4196475638 (DateTimeSerializer_t2188583587 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DateTimeSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void DateTimeSerializer_Write_m3242189396 (DateTimeSerializer_t2188583587 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DateTimeSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void DateTimeSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m268690419 (DateTimeSerializer_t2188583587 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DateTimeSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void DateTimeSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m3919002998 (DateTimeSerializer_t2188583587 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DateTimeSerializer::.cctor()
extern "C"  void DateTimeSerializer__cctor_m3750506376 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
