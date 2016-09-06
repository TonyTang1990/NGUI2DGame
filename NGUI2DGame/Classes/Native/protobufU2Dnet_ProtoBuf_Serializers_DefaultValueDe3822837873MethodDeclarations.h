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

// ProtoBuf.Serializers.DefaultValueDecorator
struct DefaultValueDecorator_t3822837873;
// System.Type
struct Type_t;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Object
struct Il2CppObject;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;
// ProtoBuf.Compiler.Local
struct Local_t1810252861;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CodeLabel2154222491.h"
#include "mscorlib_System_Type1303803226.h"

// System.Type ProtoBuf.Serializers.DefaultValueDecorator::get_ExpectedType()
extern "C"  Type_t * DefaultValueDecorator_get_ExpectedType_m1108019746 (DefaultValueDecorator_t3822837873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DefaultValueDecorator::get_RequiresOldValue()
extern "C"  bool DefaultValueDecorator_get_RequiresOldValue_m782036674 (DefaultValueDecorator_t3822837873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.DefaultValueDecorator::get_ReturnsValue()
extern "C"  bool DefaultValueDecorator_get_ReturnsValue_m1935164800 (DefaultValueDecorator_t3822837873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DefaultValueDecorator::.ctor(ProtoBuf.Meta.TypeModel,System.Object,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void DefaultValueDecorator__ctor_m2730784481 (DefaultValueDecorator_t3822837873 * __this, TypeModel_t653695305 * ___model0, Il2CppObject * ___defaultValue1, Il2CppObject * ___tail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DefaultValueDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void DefaultValueDecorator_Write_m1509633132 (DefaultValueDecorator_t3822837873 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.DefaultValueDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * DefaultValueDecorator_Read_m3463163416 (DefaultValueDecorator_t3822837873 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DefaultValueDecorator::EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void DefaultValueDecorator_EmitWrite_m185106494 (DefaultValueDecorator_t3822837873 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DefaultValueDecorator::EmitBeq(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.CodeLabel,System.Type)
extern "C"  void DefaultValueDecorator_EmitBeq_m3266421286 (DefaultValueDecorator_t3822837873 * __this, CompilerContext_t2783612406 * ___ctx0, CodeLabel_t2154222491  ___label1, Type_t * ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DefaultValueDecorator::EmitBranchIfDefaultValue(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.CodeLabel)
extern "C"  void DefaultValueDecorator_EmitBranchIfDefaultValue_m1967346648 (DefaultValueDecorator_t3822837873 * __this, CompilerContext_t2783612406 * ___ctx0, CodeLabel_t2154222491  ___label1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.DefaultValueDecorator::EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void DefaultValueDecorator_EmitRead_m4291084247 (DefaultValueDecorator_t3822837873 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
