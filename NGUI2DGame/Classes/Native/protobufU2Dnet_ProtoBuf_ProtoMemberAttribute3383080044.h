#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Attribute542643598.h"
#include "protobufU2Dnet_ProtoBuf_DataFormat1866125683.h"
#include "protobufU2Dnet_ProtoBuf_MemberSerializationOptions1047673488.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.ProtoMemberAttribute
struct  ProtoMemberAttribute_t3383080044  : public Attribute_t542643598
{
public:
	// System.String ProtoBuf.ProtoMemberAttribute::name
	String_t* ___name_0;
	// ProtoBuf.DataFormat ProtoBuf.ProtoMemberAttribute::dataFormat
	int32_t ___dataFormat_1;
	// System.Int32 ProtoBuf.ProtoMemberAttribute::tag
	int32_t ___tag_2;
	// ProtoBuf.MemberSerializationOptions ProtoBuf.ProtoMemberAttribute::options
	int32_t ___options_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ProtoMemberAttribute_t3383080044, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_dataFormat_1() { return static_cast<int32_t>(offsetof(ProtoMemberAttribute_t3383080044, ___dataFormat_1)); }
	inline int32_t get_dataFormat_1() const { return ___dataFormat_1; }
	inline int32_t* get_address_of_dataFormat_1() { return &___dataFormat_1; }
	inline void set_dataFormat_1(int32_t value)
	{
		___dataFormat_1 = value;
	}

	inline static int32_t get_offset_of_tag_2() { return static_cast<int32_t>(offsetof(ProtoMemberAttribute_t3383080044, ___tag_2)); }
	inline int32_t get_tag_2() const { return ___tag_2; }
	inline int32_t* get_address_of_tag_2() { return &___tag_2; }
	inline void set_tag_2(int32_t value)
	{
		___tag_2 = value;
	}

	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(ProtoMemberAttribute_t3383080044, ___options_3)); }
	inline int32_t get_options_3() const { return ___options_3; }
	inline int32_t* get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(int32_t value)
	{
		___options_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
