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

// ProtoBuf.Serializers.NetObjectSerializer
struct NetObjectSerializer_t3848211278;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// System.Type
struct Type_t;
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
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "mscorlib_System_Type1303803226.h"
#include "protobufU2Dnet_ProtoBuf_BclHelpers_NetObjectOptions459826500.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_CompilerContext2783612406.h"
#include "protobufU2Dnet_ProtoBuf_Compiler_Local1810252861.h"

// System.Void ProtoBuf.Serializers.NetObjectSerializer::.ctor(ProtoBuf.Meta.TypeModel,System.Type,System.Int32,ProtoBuf.BclHelpers/NetObjectOptions)
extern "C"  void NetObjectSerializer__ctor_m523769099 (NetObjectSerializer_t3848211278 * __this, TypeModel_t653695305 * ___model0, Type_t * ___type1, int32_t ___key2, uint8_t ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ProtoBuf.Serializers.NetObjectSerializer::get_ExpectedType()
extern "C"  Type_t * NetObjectSerializer_get_ExpectedType_m2236076579 (NetObjectSerializer_t3848211278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.NetObjectSerializer::get_ReturnsValue()
extern "C"  bool NetObjectSerializer_get_ReturnsValue_m2004460587 (NetObjectSerializer_t3848211278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.Serializers.NetObjectSerializer::get_RequiresOldValue()
extern "C"  bool NetObjectSerializer_get_RequiresOldValue_m3785478391 (NetObjectSerializer_t3848211278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Serializers.NetObjectSerializer::Read(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * NetObjectSerializer_Read_m1687557431 (NetObjectSerializer_t3848211278 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.NetObjectSerializer::Write(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void NetObjectSerializer_Write_m416311139 (NetObjectSerializer_t3848211278 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.NetObjectSerializer::EmitRead(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void NetObjectSerializer_EmitRead_m1779778152 (NetObjectSerializer_t3848211278 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Serializers.NetObjectSerializer::EmitWrite(ProtoBuf.Compiler.CompilerContext,ProtoBuf.Compiler.Local)
extern "C"  void NetObjectSerializer_EmitWrite_m587902709 (NetObjectSerializer_t3848211278 * __this, CompilerContext_t2783612406 * ___ctx0, Local_t1810252861 * ___valueFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
