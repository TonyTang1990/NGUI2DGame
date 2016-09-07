#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.SerializationContext
struct  SerializationContext_t3878296411  : public Il2CppObject
{
public:
	// System.Boolean ProtoBuf.SerializationContext::frozen
	bool ___frozen_0;

public:
	inline static int32_t get_offset_of_frozen_0() { return static_cast<int32_t>(offsetof(SerializationContext_t3878296411, ___frozen_0)); }
	inline bool get_frozen_0() const { return ___frozen_0; }
	inline bool* get_address_of_frozen_0() { return &___frozen_0; }
	inline void set_frozen_0(bool value)
	{
		___frozen_0 = value;
	}
};

struct SerializationContext_t3878296411_StaticFields
{
public:
	// ProtoBuf.SerializationContext ProtoBuf.SerializationContext::default
	SerializationContext_t3878296411 * ___default_1;

public:
	inline static int32_t get_offset_of_default_1() { return static_cast<int32_t>(offsetof(SerializationContext_t3878296411_StaticFields, ___default_1)); }
	inline SerializationContext_t3878296411 * get_default_1() const { return ___default_1; }
	inline SerializationContext_t3878296411 ** get_address_of_default_1() { return &___default_1; }
	inline void set_default_1(SerializationContext_t3878296411 * value)
	{
		___default_1 = value;
		Il2CppCodeGenWriteBarrier(&___default_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
