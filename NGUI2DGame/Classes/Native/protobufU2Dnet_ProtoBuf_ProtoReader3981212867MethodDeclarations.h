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

// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
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
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ProtoBuf.IExtensible
struct IExtensible_t151450440;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "protobufU2Dnet_ProtoBuf_WireType4172783757.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "protobufU2Dnet_ProtoBuf_SerializationContext3878296411.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_String2029220233.h"
#include "protobufU2Dnet_ProtoBuf_SubItemToken3722101296.h"
#include "mscorlib_System_Exception1927440687.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "mscorlib_System_Object2689449295.h"

// ProtoBuf.WireType ProtoBuf.ProtoReader::get_WireType()
extern "C"  int32_t ProtoReader_get_WireType_m3607414071 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::.ctor(System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext,System.Int32)
extern "C"  void ProtoReader__ctor_m2342701527 (ProtoReader_t3981212867 * __this, Stream_t3255436806 * ___source0, TypeModel_t653695305 * ___model1, SerializationContext_t3878296411 * ___context2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Init(ProtoBuf.ProtoReader,System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext,System.Int32)
extern "C"  void ProtoReader_Init_m890523795 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___reader0, Stream_t3255436806 * ___source1, TypeModel_t653695305 * ___model2, SerializationContext_t3878296411 * ___context3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Dispose()
extern "C"  void ProtoReader_Dispose_m2692653075 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::TryReadUInt32VariantWithoutMoving(System.Boolean,System.UInt32&)
extern "C"  int32_t ProtoReader_TryReadUInt32VariantWithoutMoving_m2359963158 (ProtoReader_t3981212867 * __this, bool ___trimNegative0, uint32_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ProtoBuf.ProtoReader::ReadUInt32Variant(System.Boolean)
extern "C"  uint32_t ProtoReader_ReadUInt32Variant_m4006296578 (ProtoReader_t3981212867 * __this, bool ___trimNegative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoReader::TryReadUInt32Variant(System.UInt32&)
extern "C"  bool ProtoReader_TryReadUInt32Variant_m2525409099 (ProtoReader_t3981212867 * __this, uint32_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ProtoBuf.ProtoReader::ReadUInt32()
extern "C"  uint32_t ProtoReader_ReadUInt32_m164356528 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Ensure(System.Int32,System.Boolean)
extern "C"  void ProtoReader_Ensure_m3820397798 (ProtoReader_t3981212867 * __this, int32_t ___count0, bool ___strict1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ProtoBuf.ProtoReader::ReadInt16()
extern "C"  int16_t ProtoReader_ReadInt16_m90490090 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 ProtoBuf.ProtoReader::ReadUInt16()
extern "C"  uint16_t ProtoReader_ReadUInt16_m753475648 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ProtoBuf.ProtoReader::ReadByte()
extern "C"  uint8_t ProtoReader_ReadByte_m1928697362 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte ProtoBuf.ProtoReader::ReadSByte()
extern "C"  int8_t ProtoReader_ReadSByte_m2510620266 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::ReadInt32()
extern "C"  int32_t ProtoReader_ReadInt32_m3141427562 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::Zag(System.UInt32)
extern "C"  int32_t ProtoReader_Zag_m2927009202 (Il2CppObject * __this /* static, unused */, uint32_t ___ziggedValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ProtoBuf.ProtoReader::Zag(System.UInt64)
extern "C"  int64_t ProtoReader_Zag_m1701089650 (Il2CppObject * __this /* static, unused */, uint64_t ___ziggedValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ProtoBuf.ProtoReader::ReadInt64()
extern "C"  int64_t ProtoReader_ReadInt64_m692900778 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::TryReadUInt64VariantWithoutMoving(System.UInt64&)
extern "C"  int32_t ProtoReader_TryReadUInt64VariantWithoutMoving_m518594925 (ProtoReader_t3981212867 * __this, uint64_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ProtoBuf.ProtoReader::ReadUInt64Variant()
extern "C"  uint64_t ProtoReader_ReadUInt64Variant_m1591632565 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.ProtoReader::Intern(System.String)
extern "C"  String_t* ProtoReader_Intern_m2746628073 (ProtoReader_t3981212867 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProtoBuf.ProtoReader::ReadString()
extern "C"  String_t* ProtoReader_ReadString_m1117385000 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.ProtoReader::CreateWireTypeException()
extern "C"  Exception_t1927440687 * ProtoReader_CreateWireTypeException_m126645285 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.ProtoReader::CreateException(System.String)
extern "C"  Exception_t1927440687 * ProtoReader_CreateException_m4218353480 (ProtoReader_t3981212867 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ProtoBuf.ProtoReader::ReadDouble()
extern "C"  double ProtoReader_ReadDouble_m3134621416 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::EndSubItem(ProtoBuf.SubItemToken,ProtoBuf.ProtoReader)
extern "C"  void ProtoReader_EndSubItem_m1622745011 (Il2CppObject * __this /* static, unused */, SubItemToken_t3722101296  ___token0, ProtoReader_t3981212867 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.SubItemToken ProtoBuf.ProtoReader::StartSubItem(ProtoBuf.ProtoReader)
extern "C"  SubItemToken_t3722101296  ProtoReader_StartSubItem_m1950929655 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProtoBuf.ProtoReader::ReadFieldHeader()
extern "C"  int32_t ProtoReader_ReadFieldHeader_m3404319213 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Hint(ProtoBuf.WireType)
extern "C"  void ProtoReader_Hint_m4267750087 (ProtoReader_t3981212867 * __this, int32_t ___wireType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Assert(ProtoBuf.WireType)
extern "C"  void ProtoReader_Assert_m1327183478 (ProtoReader_t3981212867 * __this, int32_t ___wireType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::SkipField()
extern "C"  void ProtoReader_SkipField_m3666995751 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 ProtoBuf.ProtoReader::ReadUInt64()
extern "C"  uint64_t ProtoReader_ReadUInt64_m3682925282 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProtoBuf.ProtoReader::ReadSingle()
extern "C"  float ProtoReader_ReadSingle_m1700471570 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProtoBuf.ProtoReader::ReadBoolean()
extern "C"  bool ProtoReader_ReadBoolean_m1199369898 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ProtoBuf.ProtoReader::AppendBytes(System.Byte[],ProtoBuf.ProtoReader)
extern "C"  ByteU5BU5D_t3397334013* ProtoReader_AppendBytes_m3236146482 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, ProtoReader_t3981212867 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Seek(System.IO.Stream,System.Int32,System.Byte[])
extern "C"  void ProtoReader_Seek_m3046802941 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, int32_t ___count1, ByteU5BU5D_t3397334013* ___buffer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.ProtoReader::AddErrorData(System.Exception,ProtoBuf.ProtoReader)
extern "C"  Exception_t1927440687 * ProtoReader_AddErrorData_m129176144 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___exception0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception ProtoBuf.ProtoReader::EoF(ProtoBuf.ProtoReader)
extern "C"  Exception_t1927440687 * ProtoReader_EoF_m737192749 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::AppendExtensionData(ProtoBuf.IExtensible)
extern "C"  void ProtoReader_AppendExtensionData_m1414497106 (ProtoReader_t3981212867 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::AppendExtensionField(ProtoBuf.ProtoWriter)
extern "C"  void ProtoReader_AppendExtensionField_m2858884753 (ProtoReader_t3981212867 * __this, ProtoWriter_t2800220307 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::SetRootObject(System.Object)
extern "C"  void ProtoReader_SetRootObject_m1427290071 (ProtoReader_t3981212867 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::NoteObject(System.Object,ProtoBuf.ProtoReader)
extern "C"  void ProtoReader_NoteObject_m694014777 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::CheckFullyConsumed()
extern "C"  void ProtoReader_CheckFullyConsumed_m2201161182 (ProtoReader_t3981212867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.ProtoReader ProtoBuf.ProtoReader::Create(System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext,System.Int32)
extern "C"  ProtoReader_t3981212867 * ProtoReader_Create_m3545400384 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, TypeModel_t653695305 * ___model1, SerializationContext_t3878296411 * ___context2, int32_t ___len3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProtoBuf.ProtoReader ProtoBuf.ProtoReader::GetRecycled()
extern "C"  ProtoReader_t3981212867 * ProtoReader_GetRecycled_m1845474918 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::Recycle(ProtoBuf.ProtoReader)
extern "C"  void ProtoReader_Recycle_m806072605 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.ProtoReader::.cctor()
extern "C"  void ProtoReader__cctor_m2255369843 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
