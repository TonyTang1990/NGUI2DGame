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

// ProtoBuf.Serializers.PropertyDecorator
struct PropertyDecorator_t1762263112;
// System.Type
struct Type_t;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// System.Reflection.MethodInfo
struct MethodInfo_t;
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
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"

// System.Type ProtoBuf.Serializers.PropertyDecorator::get_ExpectedType()
extern "C"  Type_t * PropertyDecorator_get_ExpectedType_m2699908109 (PropertyDecorator_t1762263112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.PropertyDecorator::get_RequiresOldValue()
extern "C"  bool PropertyDecorator_get_RequiresOldValue_m1391247285 (PropertyDecorator_t1762263112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.PropertyDecorator::get_ReturnsValue()
extern "C"  bool PropertyDecorator_get_ReturnsValue_m1384233061 (PropertyDecorator_t1762263112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.PropertyDecorator::.ctor(ProtoBuf.Meta.TypeModel,System.Type,System.Reflection.PropertyInfo,ProtoBuf.Serializers.IProtoSerializer)
extern "C"  void PropertyDecorator__ctor_m2606119636 (PropertyDecorator_t1762263112 * __this, TypeModel_t653695305 * ___model0, Type_t * ___forType1, PropertyInfo_t * ___property2, Il2CppObject * ___tail3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.PropertyDecorator::SanityCheck(ProtoBuf.Meta.TypeModel,System.Reflection.PropertyInfo,ProtoBuf.Serializers.IProtoSerializer,System.Boolean&,System.Boolean,System.Boolean)
extern "C"  void PropertyDecorator_SanityCheck_m1811648488 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, PropertyInfo_t * ___property1, Il2CppObject * ___tail2, bool* ___writeValue3, bool ___nonPublic4, bool ___allowInternal5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Serializers.PropertyDecorator::GetShadowSetter(ProtoBuf.Meta.TypeModel,System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * PropertyDecorator_GetShadowSetter_m2509194669 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, PropertyInfo_t * ___property1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.PropertyDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void PropertyDecorator_Write_m383762097 (PropertyDecorator_t1762263112 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.PropertyDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * PropertyDecorator_Read_m2947772805 (PropertyDecorator_t1762263112 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.PropertyDecorator::EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void PropertyDecorator_EmitWrite_m3927456871 (PropertyDecorator_t1762263112 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.PropertyDecorator::EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void PropertyDecorator_EmitRead_m2075648874 (PropertyDecorator_t1762263112 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.PropertyDecorator::CanWrite(ProtoBuf.Meta.TypeModel,System.Reflection.MemberInfo)
extern "C"  bool PropertyDecorator_CanWrite_m2720349608 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, MemberInfo_t * ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
