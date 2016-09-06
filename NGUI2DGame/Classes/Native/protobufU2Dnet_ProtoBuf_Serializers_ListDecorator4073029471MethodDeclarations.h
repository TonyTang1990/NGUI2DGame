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

// ProtoBuf.Serializers.ListDecorator
struct ListDecorator_t4073029471;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
// ProtoBuf.Serializers.IProtoSerializer
struct IProtoSerializer_t4095188737;
// ProtoBuf.Compiler.CompilerContext
struct CompilerContext_t2783612406;
// ProtoBuf.Compiler.Local
struct Local_t1810252861;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_WireType4172783757.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Type1303803226.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"

// System.Boolean ProtoBuf.Serializers.ListDecorator::CanPack(ProtoBuf.WireType)
extern "C"  bool ListDecorator_CanPack_m2608445764 (Il2CppObject * __this /* static, unused */, int32_t ___wireType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ListDecorator::get_IsList()
extern "C"  bool ListDecorator_get_IsList_m127849826 (ListDecorator_t4073029471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ListDecorator::get_SuppressIList()
extern "C"  bool ListDecorator_get_SuppressIList_m2306341438 (ListDecorator_t4073029471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ListDecorator::get_WritePacked()
extern "C"  bool ListDecorator_get_WritePacked_m2495153691 (ListDecorator_t4073029471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ListDecorator::get_SupportNull()
extern "C"  bool ListDecorator_get_SupportNull_m2267527702 (ListDecorator_t4073029471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ListDecorator::get_ReturnList()
extern "C"  bool ListDecorator_get_ReturnList_m4139151056 (ListDecorator_t4073029471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.Serializers.ListDecorator ProtoBuf.Serializers.ListDecorator::Create(ProtoBuf.Meta.TypeModel,System.Type,System.Type,ProtoBuf.Serializers.IProtoSerializer,System.Int32,System.Boolean,ProtoBuf.WireType,System.Boolean,System.Boolean,System.Boolean)
extern "C"  ListDecorator_t4073029471 * ListDecorator_Create_m4259801372 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___declaredType1, Type_t * ___concreteType2, Il2CppObject * ___tail3, int32_t ___fieldNumber4, bool ___writePacked5, int32_t ___packedWireType6, bool ___returnList7, bool ___overwriteList8, bool ___supportNull9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ListDecorator::.ctor(ProtoBuf.Meta.TypeModel,System.Type,System.Type,ProtoBuf.Serializers.IProtoSerializer,System.Int32,System.Boolean,ProtoBuf.WireType,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ListDecorator__ctor_m3738036436 (ListDecorator_t4073029471 * __this, TypeModel_t653695305 * ___model0, Type_t * ___declaredType1, Type_t * ___concreteType2, Il2CppObject * ___tail3, int32_t ___fieldNumber4, bool ___writePacked5, int32_t ___packedWireType6, bool ___returnList7, bool ___overwriteList8, bool ___supportNull9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ListDecorator::get_RequireAdd()
extern "C"  bool ListDecorator_get_RequireAdd_m1895973372 (ListDecorator_t4073029471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.ListDecorator::get_ExpectedType()
extern "C"  Type_t * ListDecorator_get_ExpectedType_m2188276376 (ListDecorator_t4073029471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ListDecorator::get_RequiresOldValue()
extern "C"  bool ListDecorator_get_RequiresOldValue_m305297844 (ListDecorator_t4073029471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ListDecorator::get_ReturnsValue()
extern "C"  bool ListDecorator_get_ReturnsValue_m1040011566 (ListDecorator_t4073029471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.ListDecorator::get_AppendToCollection()
extern "C"  bool ListDecorator_get_AppendToCollection_m2743665261 (ListDecorator_t4073029471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ListDecorator::EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void ListDecorator_EmitRead_m3679190525 (ListDecorator_t4073029471 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ListDecorator::EmitReadList(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local,ProtoBuf.Serializers.IProtoSerializer,System.Reflection.MethodInfo,ProtoBuf.WireType,System.Boolean)
extern "C"  void ListDecorator_EmitReadList_m635850520 (Il2CppObject * __this /* static, unused */, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___list1, Il2CppObject * ___tail2, MethodInfo_t * ___add3, int32_t ___packedWireType4, bool ___castListForAdd5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ListDecorator::EmitReadAndAddItem(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local,ProtoBuf.Serializers.IProtoSerializer,System.Reflection.MethodInfo,System.Boolean)
extern "C"  void ListDecorator_EmitReadAndAddItem_m3265291189 (Il2CppObject * __this /* static, unused */, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___list1, Il2CppObject * ___tail2, MethodInfo_t * ___add3, bool ___castListForAdd4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo ProtoBuf.Serializers.ListDecorator::GetEnumeratorInfo(ProtoBuf.Meta.TypeModel,System.Reflection.MethodInfo&,System.Reflection.MethodInfo&)
extern "C"  MethodInfo_t * ListDecorator_GetEnumeratorInfo_m2813232310 (ListDecorator_t4073029471 * __this, TypeModel_t653695305 * ___model0, MethodInfo_t ** ___moveNext1, MethodInfo_t ** ___current2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ListDecorator::EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void ListDecorator_EmitWrite_m634816948 (ListDecorator_t4073029471 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ListDecorator::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void ListDecorator_Write_m2006328870 (ListDecorator_t4073029471 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.ListDecorator::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * ListDecorator_Read_m536343186 (ListDecorator_t4073029471 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.ListDecorator::.cctor()
extern "C"  void ListDecorator__cctor_m1172650882 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
