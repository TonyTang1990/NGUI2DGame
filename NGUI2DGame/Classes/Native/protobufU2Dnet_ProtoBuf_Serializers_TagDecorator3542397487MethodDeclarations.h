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

// ProtoBuf.Serializers.TagDecorator
struct TagDecorator_t3542397487;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;
// ProtoBuf.Compiler.Local
struct Local_t1810252861;
// System.Type
struct Type_t;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel_CallbackTyp2841270245.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_SerializationContext3878296411.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"
#include "protobufU2Dnet_ProtoBuf_WireType4172783757.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"

// System.Boolean ProtoBuf.Serializers.TagDecorator::HasCallbacks(ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  bool TagDecorator_HasCallbacks_m3133135986 (TagDecorator_t3542397487 * __this, int32_t ___callbackType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TagDecorator::CanCreateInstance()
extern "C"  bool TagDecorator_CanCreateInstance_m4235296000 (TagDecorator_t3542397487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TagDecorator::CreateInstance(ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * TagDecorator_CreateInstance_m1814670481 (TagDecorator_t3542397487 * __this, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TagDecorator::Callback(System.Object,ProtoBuf.Meta.TypeModel/CallbackType,ProtoBuf.SerializationContext)
extern "C"  void TagDecorator_Callback_m1267923575 (TagDecorator_t3542397487 * __this, Il2CppObject * ___value0, int32_t ___callbackType1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TagDecorator::EmitCallback(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local,ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  void TagDecorator_EmitCallback_m2409558369 (TagDecorator_t3542397487 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, int32_t ___callbackType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TagDecorator::EmitCreateInstance(ProtoBuf.Compiler.CompilerContext)
extern "C"  void TagDecorator_EmitCreateInstance_m294074771 (TagDecorator_t3542397487 * __this, CompilerContext_t2783612406 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.TagDecorator::get_ExpectedType()
extern "C"  Type_t * TagDecorator_get_ExpectedType_m1349493958 (TagDecorator_t3542397487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TagDecorator::.ctor(System.Int32,ProtoBuf.WireType,System.Boolean,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void TagDecorator__ctor_m3082244878 (TagDecorator_t3542397487 * __this, int32_t ___fieldNumber0, int32_t ___wireType1, bool ___strict2, Il2CppObject * ___tail3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TagDecorator::get_RequiresOldValue()
extern "C"  bool TagDecorator_get_RequiresOldValue_m2341260010 (TagDecorator_t3542397487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TagDecorator::get_ReturnsValue()
extern "C"  bool TagDecorator_get_ReturnsValue_m1719488408 (TagDecorator_t3542397487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TagDecorator::get_NeedsHint()
extern "C"  bool TagDecorator_get_NeedsHint_m3037691426 (TagDecorator_t3542397487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TagDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * TagDecorator_Read_m1134902082 (TagDecorator_t3542397487 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TagDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void TagDecorator_Write_m4159414656 (TagDecorator_t3542397487 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TagDecorator::EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void TagDecorator_EmitWrite_m3903453334 (TagDecorator_t3542397487 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TagDecorator::EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void TagDecorator_EmitRead_m3937427469 (TagDecorator_t3542397487 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
