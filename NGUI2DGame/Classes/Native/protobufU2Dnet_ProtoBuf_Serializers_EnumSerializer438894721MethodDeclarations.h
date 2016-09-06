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

// ProtoBuf.Serializers.EnumSerializer
struct EnumSerializer_t438894721;
// System.Type
struct Type_t;
// ProtoBuf.Serializers.EnumSerializer/EnumPair[]
struct EnumPairU5BU5D_t121134586;
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
#include "mscorlib_System_Type1303803226.h"
#include "protobufU2Dnet_ProtoBuf_ProtoTypeCode3296822465.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CodeLabel2154222491.h"

// System.Void ProtoBuf.Serializers.EnumSerializer::.ctor(System.Type,ProtoBuf.Serializers.EnumSerializer/EnumPair[])
extern "C"  void EnumSerializer__ctor_m2984791377 (EnumSerializer_t438894721 * __this, Type_t * ___enumType0, EnumPairU5BU5D_t121134586* ___map1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.ProtoTypeCode ProtoBuf.Serializers.EnumSerializer::GetTypeCode()
extern "C"  int32_t EnumSerializer_GetTypeCode_m1143242815 (EnumSerializer_t438894721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.EnumSerializer::get_ExpectedType()
extern "C"  Type_t * EnumSerializer_get_ExpectedType_m87605298 (EnumSerializer_t438894721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.EnumSerializer::ProtoBuf.Serializers.IProtoSerializer.get_RequiresOldValue()
extern "C"  bool EnumSerializer_ProtoBuf_Serializers_IProtoSerializer_get_RequiresOldValue_m2364133259 (EnumSerializer_t438894721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.EnumSerializer::ProtoBuf.Serializers.IProtoSerializer.get_ReturnsValue()
extern "C"  bool EnumSerializer_ProtoBuf_Serializers_IProtoSerializer_get_ReturnsValue_m4038410575 (EnumSerializer_t438894721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Serializers.EnumSerializer::EnumToWire(System.Object)
extern "C"  int32_t EnumSerializer_EnumToWire_m1956271572 (EnumSerializer_t438894721 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.EnumSerializer::WireToEnum(System.Int32)
extern "C"  Il2CppObject * EnumSerializer_WireToEnum_m3637525716 (EnumSerializer_t438894721 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.EnumSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * EnumSerializer_Read_m312186522 (EnumSerializer_t438894721 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.EnumSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void EnumSerializer_Write_m3175390660 (EnumSerializer_t438894721 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.EnumSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void EnumSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitWrite_m4279758577 (EnumSerializer_t438894721 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.EnumSerializer::ProtoBuf.Serializers.IProtoSerializer.EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void EnumSerializer_ProtoBuf_Serializers_IProtoSerializer_EmitRead_m3486917734 (EnumSerializer_t438894721 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.EnumSerializer::WriteEnumValue(ProtoBuf.Compiler.CompilerContext,ProtoBuf.ProtoTypeCode,System.Object)
extern "C"  void EnumSerializer_WriteEnumValue_m3475367366 (Il2CppObject * __this /* static, unused */, CompilerContext_t2783612406 * ___ctx0, int32_t ___typeCode1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.EnumSerializer::WriteEnumValue(ProtoBuf.Compiler.CompilerContext,ProtoBuf.ProtoTypeCode,ProtoBuf.Compiler.CodeLabel,ProtoBuf.Compiler.CodeLabel,System.Object,ProtoBuf.Compiler.Local)
extern "C"  void EnumSerializer_WriteEnumValue_m2802997833 (Il2CppObject * __this /* static, unused */, CompilerContext_t2783612406 * ___ctx0, int32_t ___typeCode1, CodeLabel_t2154222491  ___handler2, CodeLabel_t2154222491  ___continue3, Il2CppObject * ___value4, Local_t1810252861 * ___local5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
