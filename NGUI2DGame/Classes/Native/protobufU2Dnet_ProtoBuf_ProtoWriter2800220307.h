#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t3255436806;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.NetObjectCache
struct NetObjectCache_t2620415644;
// ProtoBuf.Meta.MutableList
struct MutableList_t1161363740;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Text.UTF8Encoding
struct UTF8Encoding_t111055448;

#include "mscorlib_System_Object2689449295.h"
#include "protobufU2Dnet_ProtoBuf_WireType4172783757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoWriter
struct  ProtoWriter_t2800220307  : public Il2CppObject
{
public:
	// System.IO.Stream ProtoBuf.ProtoWriter::dest
	Stream_t3255436806 * ___dest_0;
	// ProtoBuf.Meta.TypeModel ProtoBuf.ProtoWriter::model
	TypeModel_t653695305 * ___model_1;
	// ProtoBuf.NetObjectCache ProtoBuf.ProtoWriter::netCache
	NetObjectCache_t2620415644 * ___netCache_2;
	// System.Int32 ProtoBuf.ProtoWriter::fieldNumber
	int32_t ___fieldNumber_3;
	// System.Int32 ProtoBuf.ProtoWriter::flushLock
	int32_t ___flushLock_4;
	// ProtoBuf.WireType ProtoBuf.ProtoWriter::wireType
	int32_t ___wireType_5;
	// System.Int32 ProtoBuf.ProtoWriter::depth
	int32_t ___depth_6;
	// ProtoBuf.Meta.MutableList ProtoBuf.ProtoWriter::recursionStack
	MutableList_t1161363740 * ___recursionStack_7;
	// ProtoBuf.SerializationContext ProtoBuf.ProtoWriter::context
	SerializationContext_t3878296411 * ___context_8;
	// System.Byte[] ProtoBuf.ProtoWriter::ioBuffer
	ByteU5BU5D_t3397334013* ___ioBuffer_9;
	// System.Int32 ProtoBuf.ProtoWriter::ioIndex
	int32_t ___ioIndex_10;
	// System.Int32 ProtoBuf.ProtoWriter::position
	int32_t ___position_11;
	// System.Int32 ProtoBuf.ProtoWriter::packedFieldNumber
	int32_t ___packedFieldNumber_13;

public:
	inline static int32_t get_offset_of_dest_0() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___dest_0)); }
	inline Stream_t3255436806 * get_dest_0() const { return ___dest_0; }
	inline Stream_t3255436806 ** get_address_of_dest_0() { return &___dest_0; }
	inline void set_dest_0(Stream_t3255436806 * value)
	{
		___dest_0 = value;
		Il2CppCodeGenWriteBarrier(&___dest_0, value);
	}

	inline static int32_t get_offset_of_model_1() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___model_1)); }
	inline TypeModel_t653695305 * get_model_1() const { return ___model_1; }
	inline TypeModel_t653695305 ** get_address_of_model_1() { return &___model_1; }
	inline void set_model_1(TypeModel_t653695305 * value)
	{
		___model_1 = value;
		Il2CppCodeGenWriteBarrier(&___model_1, value);
	}

	inline static int32_t get_offset_of_netCache_2() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___netCache_2)); }
	inline NetObjectCache_t2620415644 * get_netCache_2() const { return ___netCache_2; }
	inline NetObjectCache_t2620415644 ** get_address_of_netCache_2() { return &___netCache_2; }
	inline void set_netCache_2(NetObjectCache_t2620415644 * value)
	{
		___netCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___netCache_2, value);
	}

	inline static int32_t get_offset_of_fieldNumber_3() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___fieldNumber_3)); }
	inline int32_t get_fieldNumber_3() const { return ___fieldNumber_3; }
	inline int32_t* get_address_of_fieldNumber_3() { return &___fieldNumber_3; }
	inline void set_fieldNumber_3(int32_t value)
	{
		___fieldNumber_3 = value;
	}

	inline static int32_t get_offset_of_flushLock_4() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___flushLock_4)); }
	inline int32_t get_flushLock_4() const { return ___flushLock_4; }
	inline int32_t* get_address_of_flushLock_4() { return &___flushLock_4; }
	inline void set_flushLock_4(int32_t value)
	{
		___flushLock_4 = value;
	}

	inline static int32_t get_offset_of_wireType_5() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___wireType_5)); }
	inline int32_t get_wireType_5() const { return ___wireType_5; }
	inline int32_t* get_address_of_wireType_5() { return &___wireType_5; }
	inline void set_wireType_5(int32_t value)
	{
		___wireType_5 = value;
	}

	inline static int32_t get_offset_of_depth_6() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___depth_6)); }
	inline int32_t get_depth_6() const { return ___depth_6; }
	inline int32_t* get_address_of_depth_6() { return &___depth_6; }
	inline void set_depth_6(int32_t value)
	{
		___depth_6 = value;
	}

	inline static int32_t get_offset_of_recursionStack_7() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___recursionStack_7)); }
	inline MutableList_t1161363740 * get_recursionStack_7() const { return ___recursionStack_7; }
	inline MutableList_t1161363740 ** get_address_of_recursionStack_7() { return &___recursionStack_7; }
	inline void set_recursionStack_7(MutableList_t1161363740 * value)
	{
		___recursionStack_7 = value;
		Il2CppCodeGenWriteBarrier(&___recursionStack_7, value);
	}

	inline static int32_t get_offset_of_context_8() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___context_8)); }
	inline SerializationContext_t3878296411 * get_context_8() const { return ___context_8; }
	inline SerializationContext_t3878296411 ** get_address_of_context_8() { return &___context_8; }
	inline void set_context_8(SerializationContext_t3878296411 * value)
	{
		___context_8 = value;
		Il2CppCodeGenWriteBarrier(&___context_8, value);
	}

	inline static int32_t get_offset_of_ioBuffer_9() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___ioBuffer_9)); }
	inline ByteU5BU5D_t3397334013* get_ioBuffer_9() const { return ___ioBuffer_9; }
	inline ByteU5BU5D_t3397334013** get_address_of_ioBuffer_9() { return &___ioBuffer_9; }
	inline void set_ioBuffer_9(ByteU5BU5D_t3397334013* value)
	{
		___ioBuffer_9 = value;
		Il2CppCodeGenWriteBarrier(&___ioBuffer_9, value);
	}

	inline static int32_t get_offset_of_ioIndex_10() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___ioIndex_10)); }
	inline int32_t get_ioIndex_10() const { return ___ioIndex_10; }
	inline int32_t* get_address_of_ioIndex_10() { return &___ioIndex_10; }
	inline void set_ioIndex_10(int32_t value)
	{
		___ioIndex_10 = value;
	}

	inline static int32_t get_offset_of_position_11() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___position_11)); }
	inline int32_t get_position_11() const { return ___position_11; }
	inline int32_t* get_address_of_position_11() { return &___position_11; }
	inline void set_position_11(int32_t value)
	{
		___position_11 = value;
	}

	inline static int32_t get_offset_of_packedFieldNumber_13() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307, ___packedFieldNumber_13)); }
	inline int32_t get_packedFieldNumber_13() const { return ___packedFieldNumber_13; }
	inline int32_t* get_address_of_packedFieldNumber_13() { return &___packedFieldNumber_13; }
	inline void set_packedFieldNumber_13(int32_t value)
	{
		___packedFieldNumber_13 = value;
	}
};

struct ProtoWriter_t2800220307_StaticFields
{
public:
	// System.Text.UTF8Encoding ProtoBuf.ProtoWriter::encoding
	UTF8Encoding_t111055448 * ___encoding_12;

public:
	inline static int32_t get_offset_of_encoding_12() { return static_cast<int32_t>(offsetof(ProtoWriter_t2800220307_StaticFields, ___encoding_12)); }
	inline UTF8Encoding_t111055448 * get_encoding_12() const { return ___encoding_12; }
	inline UTF8Encoding_t111055448 ** get_address_of_encoding_12() { return &___encoding_12; }
	inline void set_encoding_12(UTF8Encoding_t111055448 * value)
	{
		___encoding_12 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
