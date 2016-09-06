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

// ProtoBuf.Serializers.MemberSpecifiedDecorator
struct MemberSpecifiedDecorator_t2168709567;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
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
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"

// System.Type ProtoBuf.Serializers.MemberSpecifiedDecorator::get_ExpectedType()
extern "C"  Type_t * MemberSpecifiedDecorator_get_ExpectedType_m440890638 (MemberSpecifiedDecorator_t2168709567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.MemberSpecifiedDecorator::get_RequiresOldValue()
extern "C"  bool MemberSpecifiedDecorator_get_RequiresOldValue_m3324920498 (MemberSpecifiedDecorator_t2168709567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.MemberSpecifiedDecorator::get_ReturnsValue()
extern "C"  bool MemberSpecifiedDecorator_get_ReturnsValue_m3672195872 (MemberSpecifiedDecorator_t2168709567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.MemberSpecifiedDecorator::.ctor(System.Reflection.MethodInfo,System.Reflection.MethodInfo,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void MemberSpecifiedDecorator__ctor_m2617672180 (MemberSpecifiedDecorator_t2168709567 * __this, MethodInfo_t * ___getSpecified0, MethodInfo_t * ___setSpecified1, Il2CppObject * ___tail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.MemberSpecifiedDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void MemberSpecifiedDecorator_Write_m2796720304 (MemberSpecifiedDecorator_t2168709567 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.MemberSpecifiedDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * MemberSpecifiedDecorator_Read_m1224627578 (MemberSpecifiedDecorator_t2168709567 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.MemberSpecifiedDecorator::EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void MemberSpecifiedDecorator_EmitWrite_m381594022 (MemberSpecifiedDecorator_t2168709567 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.MemberSpecifiedDecorator::EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void MemberSpecifiedDecorator_EmitRead_m3788684757 (MemberSpecifiedDecorator_t2168709567 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
