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

// ProtoBuf.Serializers.Int16Serializer
struct Int16Serializer_t318011532;
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

// System.Void ProtoBuf.Serializers.Int16Serializer::.ctor(ProtoBuf.Meta.TypeModel)
extern "C"  void Int16Serializer__ctor_m2338422067 (Int16Serializer_t318011532 * __this, TypeModel_t653695305 * ___model0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.Int16Serializer::get_ExpectedType()
extern "C"  Type_t * Int16Serializer_get_ExpectedType_m4154909065 (Int16Serializer_t318011532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.Int16Serializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool Int16Serializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m200152998 (Int16Serializer_t318011532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.Int16Serializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool Int16Serializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m1697090860 (Int16Serializer_t318011532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.Int16Serializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * Int16Serializer_Read_m3529375225 (Int16Serializer_t318011532 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int16Serializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void Int16Serializer_Write_m3471752109 (Int16Serializer_t318011532 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int16Serializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void Int16Serializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m8146534 (Int16Serializer_t318011532 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int16Serializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void Int16Serializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m105665469 (Int16Serializer_t318011532 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.Int16Serializer::.cctor()
extern "C"  void Int16Serializer__cctor_m3185874121 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
