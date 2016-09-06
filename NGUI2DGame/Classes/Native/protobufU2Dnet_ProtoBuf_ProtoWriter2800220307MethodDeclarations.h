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

// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// System.Type
struct Type_t;
// ProtoBuf.NetObjectCache
struct NetObjectCache_t2620415644;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// ProtoBuf.IExtensible
struct IExtensible_t151450440;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "mscorlib_System_Type1303803226.h"
#include "protobufU2Dnet_ProtoBuf_WireType4172783757.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "protobufU2Dnet_ProtoBuf_SubItemToken3722101296.h"
#include "protobufU2Dnet_ProtoBuf_PrefixStyle2069489999.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "protobufU2Dnet_ProtoBuf_SerializationContext3878296411.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ProtoBuf.ProtoWriter::WriteObject(System.Object,System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteObject_m1560776685 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___key1, ProtoWriter_t2800220307 * ___writer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteRecursionSafeObject(System.Object,System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteRecursionSafeObject_m1369404082 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___key1, ProtoWriter_t2800220307 * ___writer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoWriter::GetTypeKey(System.Type&)
extern "C"  int32_t ProtoWriter_GetTypeKey_m3596204976 (ProtoWriter_t2800220307 * __this, Type_t ** ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.NetObjectCache ProtoBuf.ProtoWriter::get_NetCache()
extern "C"  NetObjectCache_t2620415644 * ProtoWriter_get_NetCache_m1655229476 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.WireType ProtoBuf.ProtoWriter::get_WireType()
extern "C"  int32_t ProtoWriter_get_WireType_m3798169249 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteFieldHeader(System.Int32,ProtoBuf.WireType,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteFieldHeader_m3628644031 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, int32_t ___wireType1, ProtoWriter_t2800220307 * ___writer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteHeaderCore(System.Int32,ProtoBuf.WireType,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteHeaderCore_m1677694102 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, int32_t ___wireType1, ProtoWriter_t2800220307 * ___writer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteBytes(System.Byte[],ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteBytes_m1561538581 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteBytes(System.Byte[],System.Int32,System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteBytes_m2971674761 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t ___offset1, int32_t ___length2, ProtoWriter_t2800220307 * ___writer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::CopyRawFromStream(System.IO.Stream,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_CopyRawFromStream_m314537070 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::IncrementedAndReset(System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_IncrementedAndReset_m4048663141 (Il2CppObject * __this /* static, unused */, int32_t ___length0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.SubItemToken ProtoBuf.ProtoWriter::StartSubItem(System.Object,ProtoBuf.ProtoWriter)
extern "C"  SubItemToken_t3722101296  ProtoWriter_StartSubItem_m525685061 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::CheckRecursionStackAndPush(System.Object)
extern "C"  void ProtoWriter_CheckRecursionStackAndPush_m1446911685 (ProtoWriter_t2800220307 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::PopRecursionStack()
extern "C"  void ProtoWriter_PopRecursionStack_m3912783387 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.SubItemToken ProtoBuf.ProtoWriter::StartSubItem(System.Object,ProtoBuf.ProtoWriter,System.Boolean)
extern "C"  SubItemToken_t3722101296  ProtoWriter_StartSubItem_m2579908328 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, ProtoWriter_t2800220307 * ___writer1, bool ___allowFixed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::EndSubItem(ProtoBuf.SubItemToken,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_EndSubItem_m3237697851 (Il2CppObject * __this /* static, unused */, SubItemToken_t3722101296  ___token0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::EndSubItem(ProtoBuf.SubItemToken,ProtoBuf.ProtoWriter,ProtoBuf.PrefixStyle)
extern "C"  void ProtoWriter_EndSubItem_m3267128801 (Il2CppObject * __this /* static, unused */, SubItemToken_t3722101296  ___token0, ProtoWriter_t2800220307 * ___writer1, int32_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::.ctor(System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext)
extern "C"  void ProtoWriter__ctor_m1912157606 (ProtoWriter_t2800220307 * __this, Stream_t3255436806 * ___dest0, TypeModel_t653695305 * ___model1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.SerializationContext ProtoBuf.ProtoWriter::get_Context()
extern "C"  SerializationContext_t3878296411 * ProtoWriter_get_Context_m2874165507 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::System.IDisposable.Dispose()
extern "C"  void ProtoWriter_System_IDisposable_Dispose_m702749149 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::Dispose()
extern "C"  void ProtoWriter_Dispose_m3129385301 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::DemandSpace(System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_DemandSpace_m1534116038 (Il2CppObject * __this /* static, unused */, int32_t ___required0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::Close()
extern "C"  void ProtoWriter_Close_m1410314238 (ProtoWriter_t2800220307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::Flush(ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_Flush_m3423533880 (Il2CppObject * __this /* static, unused */, ProtoWriter_t2800220307 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteUInt32Variant(System.UInt32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteUInt32Variant_m3352513463 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ProtoBuf.ProtoWriter::Zig(System.Int32)
extern "C"  uint32_t ProtoWriter_Zig_m1566203146 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ProtoBuf.ProtoWriter::Zig(System.Int64)
extern "C"  uint64_t ProtoWriter_Zig_m316332600 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteUInt64Variant(System.UInt64,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteUInt64Variant_m857837563 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteString(System.String,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteString_m1753820128 (Il2CppObject * __this /* static, unused */, String_t* ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteUInt64(System.UInt64,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteUInt64_m4018111616 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteInt64(System.Int64,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteInt64_m2297047412 (Il2CppObject * __this /* static, unused */, int64_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteUInt32(System.UInt32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteUInt32_m2195237856 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteInt16(System.Int16,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteInt16_m3038254698 (Il2CppObject * __this /* static, unused */, int16_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteUInt16(System.UInt16,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteUInt16_m3925698464 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteByte(System.Byte,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteByte_m2071571808 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteSByte(System.SByte,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteSByte_m2987643684 (Il2CppObject * __this /* static, unused */, int8_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteInt32ToBuffer(System.Int32,System.Byte[],System.Int32)
extern "C"  void ProtoWriter_WriteInt32ToBuffer_m4178419997 (Il2CppObject * __this /* static, unused */, int32_t ___value0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteInt32(System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteInt32_m17565190 (Il2CppObject * __this /* static, unused */, int32_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteDouble(System.Double,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteDouble_m2235324640 (Il2CppObject * __this /* static, unused */, double ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteSingle(System.Single,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteSingle_m1038482432 (Il2CppObject * __this /* static, unused */, float ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::ThrowEnumException(ProtoBuf.ProtoWriter,System.Object)
extern "C"  void ProtoWriter_ThrowEnumException_m1380865292 (Il2CppObject * __this /* static, unused */, ProtoWriter_t2800220307 * ___writer0, Il2CppObject * ___enumValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.ProtoWriter::CreateException(ProtoBuf.ProtoWriter)
extern "C"  Exception_t1927440687 * ProtoWriter_CreateException_m2995793590 (Il2CppObject * __this /* static, unused */, ProtoWriter_t2800220307 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteBoolean(System.Boolean,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteBoolean_m3404534090 (Il2CppObject * __this /* static, unused */, bool ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::AppendExtensionData(ProtoBuf.IExtensible,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_AppendExtensionData_m2081479740 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::SetPackedField(System.Int32,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_SetPackedField_m1701281439 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.ProtoWriter::SerializeType(System.Type)
extern "C"  String_t* ProtoWriter_SerializeType_m2920842376 (ProtoWriter_t2800220307 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::SetRootObject(System.Object)
extern "C"  void ProtoWriter_SetRootObject_m3939688437 (ProtoWriter_t2800220307 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::WriteType(System.Type,ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_WriteType_m1002235744 (Il2CppObject * __this /* static, unused */, Type_t * ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoWriter::.cctor()
extern "C"  void ProtoWriter__cctor_m3703003289 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
