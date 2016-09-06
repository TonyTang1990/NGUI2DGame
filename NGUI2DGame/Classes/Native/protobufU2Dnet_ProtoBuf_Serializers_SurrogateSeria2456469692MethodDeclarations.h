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

// ProtoBuf.Serializers.SurrogateSerializer
struct SurrogateSerializer_t2456469692;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;
// ProtoBuf.Compiler.Local
struct Local_t1810252861;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// System.Type
struct Type_t;
// ProtoBuf.Serializers.IProtoTypeSerializer
struct IProtoTypeSerializer_t3285812945;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel_CallbackTyp2841270245.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_SerializationContext3878296411.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"

// System.Boolean ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.HasCallbacks(ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  bool SurrogateSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_HasCallbacks_m2799058722 (SurrogateSerializer_t2456469692 * __this, int32_t ___callbackType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.EmitCallback(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local,ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  void SurrogateSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_EmitCallback_m1923922783 (SurrogateSerializer_t2456469692 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, int32_t ___callbackType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.EmitCreateInstance(ProtoBuf.Compiler.CompilerContext)
extern "C"  void SurrogateSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_EmitCreateInstance_m1538381417 (SurrogateSerializer_t2456469692 * __this, CompilerContext_t2783612406 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CanCreateInstance()
extern "C"  bool SurrogateSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CanCreateInstance_m4085306044 (SurrogateSerializer_t2456469692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CreateInstance(ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SurrogateSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CreateInstance_m1436064639 (SurrogateSerializer_t2456469692 * __this, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.Callback(System.Object,ProtoBuf.Meta.TypeModel/CallbackType,ProtoBuf.SerializationContext)
extern "C"  void SurrogateSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_Callback_m3353194369 (SurrogateSerializer_t2456469692 * __this, Il2CppObject * ___value0, int32_t ___callbackType1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SurrogateSerializer::get_ReturnsValue()
extern "C"  bool SurrogateSerializer_get_ReturnsValue_m2310542379 (SurrogateSerializer_t2456469692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SurrogateSerializer::get_RequiresOldValue()
extern "C"  bool SurrogateSerializer_get_RequiresOldValue_m1225260383 (SurrogateSerializer_t2456469692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.SurrogateSerializer::get_ExpectedType()
extern "C"  Type_t * SurrogateSerializer_get_ExpectedType_m1873676443 (SurrogateSerializer_t2456469692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SurrogateSerializer::.ctor(System.Type,System.Type,ProtoBuf.Serializers.IProtoTypeSerializer)
extern "C"  void SurrogateSerializer__ctor_m67297375 (SurrogateSerializer_t2456469692 * __this, Type_t * ___forType0, Type_t * ___declaredType1, Il2CppObject * ___rootTail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.SurrogateSerializer::HasCast(System.Type,System.Type,System.Type,System.Reflection.MethodInfo&)
extern "C"  bool SurrogateSerializer_HasCast_m1758470525 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___from1, Type_t * ___to2, MethodInfo_t ** ___op3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Serializers.SurrogateSerializer::GetConversion(System.Boolean)
extern "C"  MethodInfo_t * SurrogateSerializer_GetConversion_m1120171833 (SurrogateSerializer_t2456469692 * __this, bool ___toTail0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SurrogateSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void SurrogateSerializer_Write_m1479781099 (SurrogateSerializer_t2456469692 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.SurrogateSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * SurrogateSerializer_Read_m888371735 (SurrogateSerializer_t2456469692 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void SurrogateSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m1431383279 (SurrogateSerializer_t2456469692 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.SurrogateSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void SurrogateSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m3656073978 (SurrogateSerializer_t2456469692 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
