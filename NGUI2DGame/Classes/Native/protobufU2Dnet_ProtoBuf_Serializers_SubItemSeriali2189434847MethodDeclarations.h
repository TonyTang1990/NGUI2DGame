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

// ProtoBuf.Serializers.SubItemSerializer
struct SubItemSerializer_t2189434847;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;
// ProtoBuf.Compiler.Local
struct Local_t1810252861;
// System.Object
struct Il2CppObject;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// System.Type
struct Type_t;
// ProtoBuf.Serializers.ISerializerProxy
struct ISerializerProxy_t4116334411;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel_CallbackTyp2841270245.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_SerializationContext3878296411.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_Type1303803226.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"

// System.Boolean ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.HasCallbacks(ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  bool SubItemSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_HasCallbacks_m2074907025 (SubItemSerializer_t2189434847 * __this, int32_t ___callbackType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CanCreateInstance()
extern "C"  bool SubItemSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CanCreateInstance_m3887113143 (SubItemSerializer_t2189434847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.EmitCallback(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local,ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  void SubItemSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_EmitCallback_m2457329666 (SubItemSerializer_t2189434847 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, int32_t ___callbackType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.EmitCreateInstance(ProtoBuf.Compiler.CompilerContext)
extern "C"  void SubItemSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_EmitCreateInstance_m3602156188 (SubItemSerializer_t2189434847 * __this, CompilerContext_t2783612406 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.Callback(System.Object,ProtoBuf.Meta.TypeModel/CallbackType,ProtoBuf.SerializationContext)
extern "C"  void SubItemSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_Callback_m3405015368 (SubItemSerializer_t2189434847 * __this, Il2CppObject * ___value0, int32_t ___callbackType1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CreateInstance(ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SubItemSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CreateInstance_m1693261294 (SubItemSerializer_t2189434847 * __this, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SubItemSerializer::.ctor(System.Type,System.Int32,ProtoBuf.Serializers.ISerializerProxy,System.Boolean)
extern "C"  void SubItemSerializer__ctor_m2100840655 (SubItemSerializer_t2189434847 * __this, Type_t * ___type0, int32_t ___key1, Il2CppObject * ___proxy2, bool ___recursionCheck3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ExpectedType()
extern "C"  Type_t * SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ExpectedType_m2819773025 (SubItemSerializer_t2189434847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m1626357777 (SubItemSerializer_t2189434847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m2135639881 (SubItemSerializer_t2189434847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_Write_m337658069 (SubItemSerializer_t2189434847 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_Read_m3136250113 (SubItemSerializer_t2189434847 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SubItemSerializer::EmitDedicatedMethod(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local,System.Boolean)
extern "C"  bool SubItemSerializer_EmitDedicatedMethod_m3641447216 (SubItemSerializer_t2189434847 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, bool ___read2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m1775774315 (SubItemSerializer_t2189434847 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SubItemSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void SubItemSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m2265756164 (SubItemSerializer_t2189434847 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
