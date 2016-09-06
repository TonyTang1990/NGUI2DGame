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

// ProtoBuf.Serializers.UInt16Serializer
struct UInt16Serializer_t4060534859;
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

// System.Void ProtoBuf.Serializers.UInt16Serializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void UInt16Serializer__ctor_m2651923960 (UInt16Serializer_t4060534859 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.UInt16Serializer::get_ExpectedType()
extern "C"  Type_t * UInt16Serializer_get_ExpectedType_m2498084800 (UInt16Serializer_t4060534859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.UInt16Serializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool UInt16Serializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m2658665077 (UInt16Serializer_t4060534859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.UInt16Serializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool UInt16Serializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m858002789 (UInt16Serializer_t4060534859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.UInt16Serializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * UInt16Serializer_Read_m868906268 (UInt16Serializer_t4060534859 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.UInt16Serializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void UInt16Serializer_Write_m1517685126 (UInt16Serializer_t4060534859 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.UInt16Serializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void UInt16Serializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m3652422079 (UInt16Serializer_t4060534859 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.UInt16Serializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void UInt16Serializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m2511516548 (UInt16Serializer_t4060534859 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.UInt16Serializer::.cctor()
extern "C"  void UInt16Serializer__cctor_m361818626 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
