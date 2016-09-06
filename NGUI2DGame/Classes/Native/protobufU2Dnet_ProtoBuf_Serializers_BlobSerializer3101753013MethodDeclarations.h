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

// ProtoBuf.Serializers.BlobSerializer
struct BlobSerializer_t3101753013;
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

// System.Type ProtoBuf.Serializers.BlobSerializer::get_ExpectedType()
extern "C"  Type_t * BlobSerializer_get_ExpectedType_m3113366672 (BlobSerializer_t3101753013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BlobSerializer::.ctor(ProtoBuf.Meta.TypeModel,System.Boolean)
extern "C"  void BlobSerializer__ctor_m2870255479 (BlobSerializer_t3101753013 * __this, TypeModel_t653695305 * ___model0, bool ___overwriteList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.BlobSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * BlobSerializer_Read_m644710456 (BlobSerializer_t3101753013 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BlobSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void BlobSerializer_Write_m288970318 (BlobSerializer_t3101753013 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.BlobSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool BlobSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m3818503447 (BlobSerializer_t3101753013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.BlobSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool BlobSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m2002774371 (BlobSerializer_t3101753013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BlobSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void BlobSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m1493837765 (BlobSerializer_t3101753013 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BlobSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void BlobSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m4110835260 (BlobSerializer_t3101753013 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.BlobSerializer::.cctor()
extern "C"  void BlobSerializer__cctor_m824288782 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
