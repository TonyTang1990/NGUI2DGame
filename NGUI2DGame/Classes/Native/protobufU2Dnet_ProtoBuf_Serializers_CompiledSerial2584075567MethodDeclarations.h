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

// ProtoBuf.Serializers.CompiledSerializer
struct CompiledSerializer_t2584075567;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// ProtoBuf.Serializers.IProtoTypeSerializer
struct IProtoTypeSerializer_t3285812945;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;
// ProtoBuf.Compiler.Local
struct Local_t1810252861;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel_CallbackTyp2841270245.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_SerializationContext3878296411.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"

// System.Boolean ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.HasCallbacks(ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  bool CompiledSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_HasCallbacks_m3779152025 (CompiledSerializer_t2584075567 * __this, int32_t ___callbackType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CanCreateInstance()
extern "C"  bool CompiledSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CanCreateInstance_m2729565383 (CompiledSerializer_t2584075567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CreateInstance(ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * CompiledSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CreateInstance_m2071285668 (CompiledSerializer_t2584075567 * __this, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.CompiledSerializer::Callback(System.Object,ProtoBuf.Meta.TypeModel/CallbackType,ProtoBuf.SerializationContext)
extern "C"  void CompiledSerializer_Callback_m4017232751 (CompiledSerializer_t2584075567 * __this, Il2CppObject * ___value0, int32_t ___callbackType1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.CompiledSerializer ProtoBuf.Serializers.CompiledSerializer::Wrap(ProtoBuf.Serializers.IProtoTypeSerializer,ProtoBuf.Meta.TypeModel)
extern "C"  CompiledSerializer_t2584075567 * CompiledSerializer_Wrap_m1935130623 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___head0, TypeModel_t653695305 * ___model1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.CompiledSerializer::.ctor(ProtoBuf.Serializers.IProtoTypeSerializer,ProtoBuf.Meta.TypeModel)
extern "C"  void CompiledSerializer__ctor_m2198904037 (CompiledSerializer_t2584075567 * __this, Il2CppObject * ___head0, TypeModel_t653695305 * ___model1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool CompiledSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m3604342801 (CompiledSerializer_t2584075567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool CompiledSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m3211772801 (CompiledSerializer_t2584075567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ExpectedType()
extern "C"  Type_t * CompiledSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ExpectedType_m1706432953 (CompiledSerializer_t2584075567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoSerializer.Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void CompiledSerializer_ProtoBuf_Serializers_IProtoSerializer_Write_m1437308725 (CompiledSerializer_t2584075567 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoSerializer.Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * CompiledSerializer_ProtoBuf_Serializers_IProtoSerializer_Read_m3082473493 (CompiledSerializer_t2584075567 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void CompiledSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m204675003 (CompiledSerializer_t2584075567 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void CompiledSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m3214579248 (CompiledSerializer_t2584075567 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.EmitCallback(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local,ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  void CompiledSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_EmitCallback_m2554451454 (CompiledSerializer_t2584075567 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, int32_t ___callbackType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.CompiledSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.EmitCreateInstance(ProtoBuf.Compiler.CompilerContext)
extern "C"  void CompiledSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_EmitCreateInstance_m283349648 (CompiledSerializer_t2584075567 * __this, CompilerContext_t2783612406 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
