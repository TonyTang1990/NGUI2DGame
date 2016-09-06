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

// ProtoBuf.Serializers.FieldDecorator
struct FieldDecorator_t681850927;
// System.Type
struct Type_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
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
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"

// System.Type ProtoBuf.Serializers.FieldDecorator::get_ExpectedType()
extern "C"  Type_t * FieldDecorator_get_ExpectedType_m4025730526 (FieldDecorator_t681850927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.FieldDecorator::get_RequiresOldValue()
extern "C"  bool FieldDecorator_get_RequiresOldValue_m4159075970 (FieldDecorator_t681850927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.FieldDecorator::get_ReturnsValue()
extern "C"  bool FieldDecorator_get_ReturnsValue_m767652592 (FieldDecorator_t681850927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.FieldDecorator::.ctor(System.Type,System.Reflection.FieldInfo,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void FieldDecorator__ctor_m4170012965 (FieldDecorator_t681850927 * __this, Type_t * ___forType0, FieldInfo_t * ___field1, Il2CppObject * ___tail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.FieldDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void FieldDecorator_Write_m1953708352 (FieldDecorator_t681850927 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.FieldDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * FieldDecorator_Read_m3361764810 (FieldDecorator_t681850927 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.FieldDecorator::EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void FieldDecorator_EmitWrite_m2883221526 (FieldDecorator_t681850927 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.FieldDecorator::EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void FieldDecorator_EmitRead_m4239411301 (FieldDecorator_t681850927 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
