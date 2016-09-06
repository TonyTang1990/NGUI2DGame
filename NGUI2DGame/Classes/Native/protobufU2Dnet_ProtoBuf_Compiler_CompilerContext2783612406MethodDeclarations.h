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

// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.Compiler.ProtoSerializer
struct ProtoSerializer_t2701864692;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// ProtoBuf.Compiler.ProtoDeserializer
struct ProtoDeserializer_t3450156387;
// System.Type
struct Type_t;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t644187984;
// ProtoBuf.Compiler.Local
struct Local_t1810252861;
// System.String
struct String_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t2116499186;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// ProtoBuf.Compiler.CodeLabel[]
struct CodeLabelU5BU5D_t2201820058;
// System.IDisposable
struct IDisposable_t2427283555;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CodeLabel2154222491.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_Emit_OpCode2247480392.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder2116499186.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_FieldInfo255040150.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "protobufU2Dnet_ProtoBuf_ProtoTypeCode3296822465.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_Guid2533601593.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext_I1134916868.h"

// ProtoBuf.Meta.TypeModel ProtoBuf.Compiler.CompilerContext::get_Model()
extern "C"  TypeModel_t653695305 * CompilerContext_get_Model_m674584800 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Compiler.CodeLabel ProtoBuf.Compiler.CompilerContext::DefineLabel()
extern "C"  CodeLabel_t2154222491  CompilerContext_DefineLabel_m2617988377 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::MarkLabel(ProtoBuf.Compiler.CodeLabel)
extern "C"  void CompilerContext_MarkLabel_m1908480306 (CompilerContext_t2783612406 * __this, CodeLabel_t2154222491  ___label0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Compiler.ProtoSerializer ProtoBuf.Compiler.CompilerContext::BuildSerializer(ProtoBuf.Serializers.IProtoSerializer,ProtoBuf.Meta.TypeModel)
extern "C"  ProtoSerializer_t2701864692 * CompilerContext_BuildSerializer_m3600594263 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___head0, TypeModel_t653695305 * ___model1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Compiler.ProtoDeserializer ProtoBuf.Compiler.CompilerContext::BuildDeserializer(ProtoBuf.Serializers.IProtoSerializer,ProtoBuf.Meta.TypeModel)
extern "C"  ProtoDeserializer_t3450156387 * CompilerContext_BuildDeserializer_m4238841243 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___head0, TypeModel_t653695305 * ___model1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Compiler.CompilerContext::IsObject(System.Type)
extern "C"  bool CompilerContext_IsObject_m1637789834 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::CastToObject(System.Type)
extern "C"  void CompilerContext_CastToObject_m1016690772 (CompilerContext_t2783612406 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::CastFromObject(System.Type)
extern "C"  void CompilerContext_CastFromObject_m240796303 (CompilerContext_t2783612406 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder ProtoBuf.Compiler.CompilerContext::GetDedicatedMethod(System.Int32,System.Boolean)
extern "C"  MethodBuilder_t644187984 * CompilerContext_GetDedicatedMethod_m1270496294 (CompilerContext_t2783612406 * __this, int32_t ___metaKey0, bool ___read1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.Compiler.CompilerContext::MapMetaKeyToCompiledKey(System.Int32)
extern "C"  int32_t CompilerContext_MapMetaKeyToCompiledKey_m1274308638 (CompilerContext_t2783612406 * __this, int32_t ___metaKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Compiler.CompilerContext::get_NonPublic()
extern "C"  bool CompilerContext_get_NonPublic_m3199499213 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Compiler.Local ProtoBuf.Compiler.CompilerContext::get_InputValue()
extern "C"  Local_t1810252861 * CompilerContext_get_InputValue_m3577649114 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::.ctor(System.Type,System.Boolean,System.Boolean,ProtoBuf.Meta.TypeModel,System.Type)
extern "C"  void CompilerContext__ctor_m1423805959 (CompilerContext_t2783612406 * __this, Type_t * ___associatedType0, bool ___isWriter1, bool ___isStatic2, TypeModel_t653695305 * ___model3, Type_t * ___inputType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::Emit(System.Reflection.Emit.OpCode)
extern "C"  void CompilerContext_Emit_m1918025872 (CompilerContext_t2783612406 * __this, OpCode_t2247480392  ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadValue(System.String)
extern "C"  void CompilerContext_LoadValue_m1924938481 (CompilerContext_t2783612406 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadValue(System.Single)
extern "C"  void CompilerContext_LoadValue_m2901584274 (CompilerContext_t2783612406 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadValue(System.Double)
extern "C"  void CompilerContext_LoadValue_m2098169125 (CompilerContext_t2783612406 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadValue(System.Int64)
extern "C"  void CompilerContext_LoadValue_m2662842701 (CompilerContext_t2783612406 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadValue(System.Int32)
extern "C"  void CompilerContext_LoadValue_m3825642016 (CompilerContext_t2783612406 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder ProtoBuf.Compiler.CompilerContext::GetFromPool(System.Type)
extern "C"  LocalBuilder_t2116499186 * CompilerContext_GetFromPool_m3141390459 (CompilerContext_t2783612406 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::ReleaseToPool(System.Reflection.Emit.LocalBuilder)
extern "C"  void CompilerContext_ReleaseToPool_m424550525 (CompilerContext_t2783612406 * __this, LocalBuilder_t2116499186 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadReaderWriter()
extern "C"  void CompilerContext_LoadReaderWriter_m1797863946 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::StoreValue(ProtoBuf.Compiler.Local)
extern "C"  void CompilerContext_StoreValue_m243816391 (CompilerContext_t2783612406 * __this, Local_t1810252861 * ___local0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadValue(ProtoBuf.Compiler.Local)
extern "C"  void CompilerContext_LoadValue_m3368228320 (CompilerContext_t2783612406 * __this, Local_t1810252861 * ___local0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Compiler.Local ProtoBuf.Compiler.CompilerContext::GetLocalWithValue(System.Type,ProtoBuf.Compiler.Local)
extern "C"  Local_t1810252861 * CompilerContext_GetLocalWithValue_m963840900 (CompilerContext_t2783612406 * __this, Type_t * ___type0, Local_t1810252861 * ___fromValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::EmitBasicRead(System.String,System.Type)
extern "C"  void CompilerContext_EmitBasicRead_m1543742080 (CompilerContext_t2783612406 * __this, String_t* ___methodName0, Type_t * ___expectedType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::EmitBasicRead(System.Type,System.String,System.Type)
extern "C"  void CompilerContext_EmitBasicRead_m233440101 (CompilerContext_t2783612406 * __this, Type_t * ___helperType0, String_t* ___methodName1, Type_t * ___expectedType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::EmitBasicWrite(System.String,ProtoBuf.Compiler.Local)
extern "C"  void CompilerContext_EmitBasicWrite_m2968104563 (CompilerContext_t2783612406 * __this, String_t* ___methodName0, Local_t1810252861 * ___fromValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Compiler.CompilerContext::GetWriterMethod(System.String)
extern "C"  MethodInfo_t * CompilerContext_GetWriterMethod_m1508456864 (CompilerContext_t2783612406 * __this, String_t* ___methodName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::EmitWrite(System.Type,System.String,ProtoBuf.Compiler.Local)
extern "C"  void CompilerContext_EmitWrite_m470562730 (CompilerContext_t2783612406 * __this, Type_t * ___helperType0, String_t* ___methodName1, Local_t1810252861 * ___valueFrom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::EmitCall(System.Reflection.MethodInfo)
extern "C"  void CompilerContext_EmitCall_m4291305368 (CompilerContext_t2783612406 * __this, MethodInfo_t * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadNullRef()
extern "C"  void CompilerContext_LoadNullRef_m4043429186 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::WriteNullCheckedTail(System.Type,ProtoBuf.Serializers.IProtoSerializer,ProtoBuf.Compiler.Local)
extern "C"  void CompilerContext_WriteNullCheckedTail_m2714805094 (CompilerContext_t2783612406 * __this, Type_t * ___type0, Il2CppObject * ___tail1, Local_t1810252861 * ___valueFrom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::ReadNullCheckedTail(System.Type,ProtoBuf.Serializers.IProtoSerializer,ProtoBuf.Compiler.Local)
extern "C"  void CompilerContext_ReadNullCheckedTail_m1364467481 (CompilerContext_t2783612406 * __this, Type_t * ___type0, Il2CppObject * ___tail1, Local_t1810252861 * ___valueFrom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::EmitCtor(System.Type)
extern "C"  void CompilerContext_EmitCtor_m467621464 (CompilerContext_t2783612406 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::EmitCtor(System.Reflection.ConstructorInfo)
extern "C"  void CompilerContext_EmitCtor_m2059562273 (CompilerContext_t2783612406 * __this, ConstructorInfo_t2851816542 * ___ctor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::EmitCtor(System.Type,System.Type[])
extern "C"  void CompilerContext_EmitCtor_m696682407 (CompilerContext_t2783612406 * __this, Type_t * ___type0, TypeU5BU5D_t1664964607* ___parameterTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Compiler.CompilerContext::InternalsVisible(System.Reflection.Assembly)
extern "C"  bool CompilerContext_InternalsVisible_m3284594828 (CompilerContext_t2783612406 * __this, Assembly_t4268412390 * ___assembly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::CheckAccessibility(System.Reflection.MemberInfo)
extern "C"  void CompilerContext_CheckAccessibility_m4091223594 (CompilerContext_t2783612406 * __this, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadValue(System.Reflection.FieldInfo)
extern "C"  void CompilerContext_LoadValue_m134527109 (CompilerContext_t2783612406 * __this, FieldInfo_t * ___field0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::StoreValue(System.Reflection.FieldInfo)
extern "C"  void CompilerContext_StoreValue_m3444885320 (CompilerContext_t2783612406 * __this, FieldInfo_t * ___field0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadValue(System.Reflection.PropertyInfo)
extern "C"  void CompilerContext_LoadValue_m912259136 (CompilerContext_t2783612406 * __this, PropertyInfo_t * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::StoreValue(System.Reflection.PropertyInfo)
extern "C"  void CompilerContext_StoreValue_m2083553201 (CompilerContext_t2783612406 * __this, PropertyInfo_t * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Compiler.CompilerContext::UseShortForm(ProtoBuf.Compiler.Local)
extern "C"  bool CompilerContext_UseShortForm_m320981302 (CompilerContext_t2783612406 * __this, Local_t1810252861 * ___local0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadAddress(ProtoBuf.Compiler.Local,System.Type)
extern "C"  void CompilerContext_LoadAddress_m3204406664 (CompilerContext_t2783612406 * __this, Local_t1810252861 * ___local0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::Branch(ProtoBuf.Compiler.CodeLabel,System.Boolean)
extern "C"  void CompilerContext_Branch_m4265466750 (CompilerContext_t2783612406 * __this, CodeLabel_t2154222491  ___label0, bool ___short1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::BranchIfFalse(ProtoBuf.Compiler.CodeLabel,System.Boolean)
extern "C"  void CompilerContext_BranchIfFalse_m532516114 (CompilerContext_t2783612406 * __this, CodeLabel_t2154222491  ___label0, bool ___short1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::BranchIfTrue(ProtoBuf.Compiler.CodeLabel,System.Boolean)
extern "C"  void CompilerContext_BranchIfTrue_m3337545995 (CompilerContext_t2783612406 * __this, CodeLabel_t2154222491  ___label0, bool ___short1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::BranchIfEqual(ProtoBuf.Compiler.CodeLabel,System.Boolean)
extern "C"  void CompilerContext_BranchIfEqual_m3563710957 (CompilerContext_t2783612406 * __this, CodeLabel_t2154222491  ___label0, bool ___short1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::CopyValue()
extern "C"  void CompilerContext_CopyValue_m180727406 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::BranchIfGreater(ProtoBuf.Compiler.CodeLabel,System.Boolean)
extern "C"  void CompilerContext_BranchIfGreater_m2165118607 (CompilerContext_t2783612406 * __this, CodeLabel_t2154222491  ___label0, bool ___short1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::BranchIfLess(ProtoBuf.Compiler.CodeLabel,System.Boolean)
extern "C"  void CompilerContext_BranchIfLess_m4264018616 (CompilerContext_t2783612406 * __this, CodeLabel_t2154222491  ___label0, bool ___short1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::DiscardValue()
extern "C"  void CompilerContext_DiscardValue_m1994846299 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::Subtract()
extern "C"  void CompilerContext_Subtract_m1795206194 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::Switch(ProtoBuf.Compiler.CodeLabel[])
extern "C"  void CompilerContext_Switch_m2940220617 (CompilerContext_t2783612406 * __this, CodeLabelU5BU5D_t2201820058* ___jumpTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::EndFinally()
extern "C"  void CompilerContext_EndFinally_m2682409334 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::BeginFinally()
extern "C"  void CompilerContext_BeginFinally_m144406858 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::EndTry(ProtoBuf.Compiler.CodeLabel,System.Boolean)
extern "C"  void CompilerContext_EndTry_m2466324800 (CompilerContext_t2783612406 * __this, CodeLabel_t2154222491  ___label0, bool ___short1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Compiler.CodeLabel ProtoBuf.Compiler.CompilerContext::BeginTry()
extern "C"  CodeLabel_t2154222491  CompilerContext_BeginTry_m3271335198 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::Constrain(System.Type)
extern "C"  void CompilerContext_Constrain_m2948169178 (CompilerContext_t2783612406 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::TryCast(System.Type)
extern "C"  void CompilerContext_TryCast_m1941159135 (CompilerContext_t2783612406 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::Cast(System.Type)
extern "C"  void CompilerContext_Cast_m461196902 (CompilerContext_t2783612406 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IDisposable ProtoBuf.Compiler.CompilerContext::Using(ProtoBuf.Compiler.Local)
extern "C"  Il2CppObject * CompilerContext_Using_m2628865646 (CompilerContext_t2783612406 * __this, Local_t1810252861 * ___local0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::Add()
extern "C"  void CompilerContext_Add_m4270182851 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadLength(ProtoBuf.Compiler.Local,System.Boolean)
extern "C"  void CompilerContext_LoadLength_m3375580100 (CompilerContext_t2783612406 * __this, Local_t1810252861 * ___arr0, bool ___zeroIfNull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::CreateArray(System.Type,ProtoBuf.Compiler.Local)
extern "C"  void CompilerContext_CreateArray_m3751511469 (CompilerContext_t2783612406 * __this, Type_t * ___elementType0, Local_t1810252861 * ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadArrayValue(ProtoBuf.Compiler.Local,ProtoBuf.Compiler.Local)
extern "C"  void CompilerContext_LoadArrayValue_m1188458894 (CompilerContext_t2783612406 * __this, Local_t1810252861 * ___arr0, Local_t1810252861 * ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadValue(System.Type)
extern "C"  void CompilerContext_LoadValue_m1558615646 (CompilerContext_t2783612406 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::ConvertToInt32(ProtoBuf.ProtoTypeCode,System.Boolean)
extern "C"  void CompilerContext_ConvertToInt32_m539214185 (CompilerContext_t2783612406 * __this, int32_t ___typeCode0, bool ___uint32Overflow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::ConvertFromInt32(ProtoBuf.ProtoTypeCode,System.Boolean)
extern "C"  void CompilerContext_ConvertFromInt32_m681290056 (CompilerContext_t2783612406 * __this, int32_t ___typeCode0, bool ___uint32Overflow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadValue(System.Decimal)
extern "C"  void CompilerContext_LoadValue_m229041779 (CompilerContext_t2783612406 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadValue(System.Guid)
extern "C"  void CompilerContext_LoadValue_m3294711147 (CompilerContext_t2783612406 * __this, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.CompilerContext::LoadSerializationContext()
extern "C"  void CompilerContext_LoadSerializationContext_m3445665097 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Compiler.CompilerContext::MapType(System.Type)
extern "C"  Type_t * CompilerContext_MapType_m4203515437 (CompilerContext_t2783612406 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Compiler.CompilerContext/ILVersion ProtoBuf.Compiler.CompilerContext::get_MetadataVersion()
extern "C"  int32_t CompilerContext_get_MetadataVersion_m1473630039 (CompilerContext_t2783612406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Compiler.CompilerContext::AllowInternal(System.Reflection.PropertyInfo)
extern "C"  bool CompilerContext_AllowInternal_m4104687623 (CompilerContext_t2783612406 * __this, PropertyInfo_t * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
