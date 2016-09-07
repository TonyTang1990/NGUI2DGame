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

// NGUI2DGame.PlayerData
struct PlayerData_t4175080041;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// com.TonyTang.ProtobufSerializer
struct ProtobufSerializer_t806432981;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "PlayerData_NGUI2DGame_PlayerData4175080041.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void com.TonyTang.ProtobufSerializer::Write(NGUI2DGame.PlayerData,ProtoBuf.ProtoWriter)
extern "C"  void ProtobufSerializer_Write_m1076883231 (Il2CppObject * __this /* static, unused */, PlayerData_t4175080041 * p0, ProtoWriter_t2800220307 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// NGUI2DGame.PlayerData com.TonyTang.ProtobufSerializer::Read(NGUI2DGame.PlayerData,ProtoBuf.ProtoReader)
extern "C"  PlayerData_t4175080041 * ProtobufSerializer_Read_m4138305145 (Il2CppObject * __this /* static, unused */, PlayerData_t4175080041 * p0, ProtoReader_t3981212867 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 com.TonyTang.ProtobufSerializer::GetKeyImpl(System.Type)
extern "C"  int32_t ProtobufSerializer_GetKeyImpl_m1998698764 (ProtobufSerializer_t806432981 * __this, Type_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.TonyTang.ProtobufSerializer::Serialize(System.Int32,System.Object,ProtoBuf.ProtoWriter)
extern "C"  void ProtobufSerializer_Serialize_m3140456311 (ProtobufSerializer_t806432981 * __this, int32_t p0, Il2CppObject * p1, ProtoWriter_t2800220307 * p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object com.TonyTang.ProtobufSerializer::Deserialize(System.Int32,System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * ProtobufSerializer_Deserialize_m1501623389 (ProtobufSerializer_t806432981 * __this, int32_t p0, Il2CppObject * p1, ProtoReader_t3981212867 * p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.TonyTang.ProtobufSerializer::.ctor()
extern "C"  void ProtobufSerializer__ctor_m1313999628 (ProtobufSerializer_t806432981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void com.TonyTang.ProtobufSerializer::.cctor()
extern "C"  void ProtobufSerializer__cctor_m3780495501 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
