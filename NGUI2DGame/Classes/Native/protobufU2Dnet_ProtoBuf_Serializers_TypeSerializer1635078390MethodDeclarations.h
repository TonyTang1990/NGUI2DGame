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

// ProtoBuf.Serializers.TypeSerializer
struct TypeSerializer_t1635078390;
// System.Type
struct Type_t;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// ProtoBuf.Serializers.IProtoSerializer[]
struct IProtoSerializerU5BU5D_t634234844;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t152480188;
// ProtoBuf.Meta.CallbackSet
struct CallbackSet_t2109955613;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;
// ProtoBuf.Compiler.Local
struct Local_t1810252861;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel_CallbackTyp2841270245.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Type1303803226.h"
#include "protobufU2Dnet_ProtoBuf_Meta_CallbackSet2109955613.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_SerializationContext3878296411.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CodeLabel2154222491.h"

// System.Boolean ProtoBuf.Serializers.TypeSerializer::HasCallbacks(ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  bool TypeSerializer_HasCallbacks_m3640510929 (TypeSerializer_t1635078390 * __this, int32_t ___callbackType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.TypeSerializer::get_ExpectedType()
extern "C"  Type_t * TypeSerializer_get_ExpectedType_m1880444161 (TypeSerializer_t1635078390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::.ctor(ProtoBuf.Meta.TypeModel,System.Type,System.Int32[],ProtoBuf.Serializers.IProtoSerializer[],System.Reflection.MethodInfo[],System.Boolean,System.Boolean,ProtoBuf.Meta.CallbackSet,System.Type,System.Reflection.MethodInfo)
extern "C"  void TypeSerializer__ctor_m2397912784 (TypeSerializer_t1635078390 * __this, TypeModel_t653695305 * ___model0, Type_t * ___forType1, Int32U5BU5D_t3030399641* ___fieldNumbers2, IProtoSerializerU5BU5D_t634234844* ___serializers3, MethodInfoU5BU5D_t152480188* ___baseCtorCallbacks4, bool ___isRootType5, bool ___useConstructor6, CallbackSet_t2109955613 * ___callbacks7, Type_t * ___constructType8, MethodInfo_t * ___factory9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TypeSerializer::get_CanHaveInheritance()
extern "C"  bool TypeSerializer_get_CanHaveInheritance_m1770588117 (TypeSerializer_t1635078390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CanCreateInstance()
extern "C"  bool TypeSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CanCreateInstance_m3954383268 (TypeSerializer_t1635078390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.CreateInstance(ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * TypeSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_CreateInstance_m1202032929 (TypeSerializer_t1635078390 * __this, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::Callback(System.Object,ProtoBuf.Meta.TypeModel/CallbackType,ProtoBuf.SerializationContext)
extern "C"  void TypeSerializer_Callback_m2505289542 (TypeSerializer_t1635078390 * __this, Il2CppObject * ___value0, int32_t ___callbackType1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.IProtoSerializer ProtoBuf.Serializers.TypeSerializer::GetMoreSpecificSerializer(System.Object)
extern "C"  Il2CppObject * TypeSerializer_GetMoreSpecificSerializer_m2533820975 (TypeSerializer_t1635078390 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void TypeSerializer_Write_m1903050333 (TypeSerializer_t1635078390 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TypeSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * TypeSerializer_Read_m1838167109 (TypeSerializer_t1635078390 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TypeSerializer::InvokeCallback(System.Reflection.MethodInfo,System.Object,ProtoBuf.SerializationContext)
extern "C"  Il2CppObject * TypeSerializer_InvokeCallback_m4223726955 (TypeSerializer_t1635078390 * __this, MethodInfo_t * ___method0, Il2CppObject * ___obj1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.TypeSerializer::CreateInstance(ProtoBuf.ProtoReader,System.Boolean)
extern "C"  Il2CppObject * TypeSerializer_CreateInstance_m2196565559 (TypeSerializer_t1635078390 * __this, ProtoReader_t3981212867 * ___source0, bool ___includeLocalCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool TypeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m1326564178 (TypeSerializer_t1635078390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool TypeSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m3565870744 (TypeSerializer_t1635078390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void TypeSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m3850385490 (TypeSerializer_t1635078390 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::EmitInvokeCallback(ProtoBuf.Compiler.CompilerContext,System.Reflection.MethodInfo,System.Boolean,System.Type,System.Type)
extern "C"  void TypeSerializer_EmitInvokeCallback_m89168056 (Il2CppObject * __this /* static, unused */, CompilerContext_t2783612406 * ___ctx0, MethodInfo_t * ___method1, bool ___copyValue2, Type_t * ___constructType3, Type_t * ___type4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::EmitCallbackIfNeeded(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local,ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  void TypeSerializer_EmitCallbackIfNeeded_m3375798554 (TypeSerializer_t1635078390 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, int32_t ___callbackType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.EmitCallback(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local,ProtoBuf.Meta.TypeModel/CallbackType)
extern "C"  void TypeSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_EmitCallback_m1264156825 (TypeSerializer_t1635078390 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, int32_t ___callbackType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void TypeSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m3663632125 (TypeSerializer_t1635078390 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::WriteFieldHandler(ProtoBuf.Compiler.CompilerContext,System.Type,ProtoBuf.Compiler.Local,ProtoBuf.Compiler.CodeLabel,ProtoBuf.Compiler.CodeLabel,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void TypeSerializer_WriteFieldHandler_m1074970680 (TypeSerializer_t1635078390 * __this, CompilerContext_t2783612406 * ___ctx0, Type_t * ___expected1, Local_t1810252861 * ___loc2, CodeLabel_t2154222491  ___handler3, CodeLabel_t2154222491  ___continue4, Il2CppObject * ___serializer5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::ProtoBuf.Serializers.IProtoTypeSerializer.EmitCreateInstance(ProtoBuf.Compiler.CompilerContext)
extern "C"  void TypeSerializer_ProtoBuf_Serializers_IProtoTypeSerializer_EmitCreateInstance_m447476143 (TypeSerializer_t1635078390 * __this, CompilerContext_t2783612406 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::EmitCreateIfNull(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void TypeSerializer_EmitCreateIfNull_m1972156440 (TypeSerializer_t1635078390 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___storage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.TypeSerializer::.cctor()
extern "C"  void TypeSerializer__cctor_m1008222353 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
