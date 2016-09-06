#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.Serializers.IProtoTypeSerializer
struct IProtoTypeSerializer_t3285812945;
// ProtoBuf.Compiler.ProtoSerializer
struct ProtoSerializer_t2701864692;
// ProtoBuf.Compiler.ProtoDeserializer
struct ProtoDeserializer_t3450156387;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.Serializers.CompiledSerializer
struct  CompiledSerializer_t2584075567  : public Il2CppObject
{
public:
	// ProtoBuf.Serializers.IProtoTypeSerializer ProtoBuf.Serializers.CompiledSerializer::head
	Il2CppObject * ___head_0;
	// ProtoBuf.Compiler.ProtoSerializer ProtoBuf.Serializers.CompiledSerializer::serializer
	ProtoSerializer_t2701864692 * ___serializer_1;
	// ProtoBuf.Compiler.ProtoDeserializer ProtoBuf.Serializers.CompiledSerializer::deserializer
	ProtoDeserializer_t3450156387 * ___deserializer_2;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(CompiledSerializer_t2584075567, ___head_0)); }
	inline Il2CppObject * get_head_0() const { return ___head_0; }
	inline Il2CppObject ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Il2CppObject * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier(&___head_0, value);
	}

	inline static int32_t get_offset_of_serializer_1() { return static_cast<int32_t>(offsetof(CompiledSerializer_t2584075567, ___serializer_1)); }
	inline ProtoSerializer_t2701864692 * get_serializer_1() const { return ___serializer_1; }
	inline ProtoSerializer_t2701864692 ** get_address_of_serializer_1() { return &___serializer_1; }
	inline void set_serializer_1(ProtoSerializer_t2701864692 * value)
	{
		___serializer_1 = value;
		Il2CppCodeGenWriteBarrier(&___serializer_1, value);
	}

	inline static int32_t get_offset_of_deserializer_2() { return static_cast<int32_t>(offsetof(CompiledSerializer_t2584075567, ___deserializer_2)); }
	inline ProtoDeserializer_t3450156387 * get_deserializer_2() const { return ___deserializer_2; }
	inline ProtoDeserializer_t3450156387 ** get_address_of_deserializer_2() { return &___deserializer_2; }
	inline void set_deserializer_2(ProtoDeserializer_t3450156387 * value)
	{
		___deserializer_2 = value;
		Il2CppCodeGenWriteBarrier(&___deserializer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
