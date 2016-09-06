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

// ProtoBuf.Serializers.BooleanSerializer
struct BooleanSerializer_t279558814;
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

// System.Void ProtoBuf.Serializers.BooleanSerializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void BooleanSerializer__ctor_m15782815 (BooleanSerializer_t279558814 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.BooleanSerializer::get_ExpectedType()
extern "C"  Type_t * BooleanSerializer_get_ExpectedType_m530573101 (BooleanSerializer_t279558814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BooleanSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void BooleanSerializer_Write_m980538353 (BooleanSerializer_t279558814 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.BooleanSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * BooleanSerializer_Read_m3331251013 (BooleanSerializer_t279558814 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.BooleanSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool BooleanSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m3623779256 (BooleanSerializer_t279558814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.BooleanSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool BooleanSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m480633290 (BooleanSerializer_t279558814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BooleanSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void BooleanSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m1146053868 (BooleanSerializer_t279558814 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BooleanSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void BooleanSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m2439862809 (BooleanSerializer_t279558814 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BooleanSerializer::.cctor()
extern "C"  void BooleanSerializer__cctor_m1443993933 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
