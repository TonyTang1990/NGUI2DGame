﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProtoBuf.BufferPool
struct  BufferPool_t710398810  : public Il2CppObject
{
public:

public:
};

struct BufferPool_t710398810_StaticFields
{
public:
	// System.Object[] ProtoBuf.BufferPool::pool
	ObjectU5BU5D_t3614634134* ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(BufferPool_t710398810_StaticFields, ___pool_0)); }
	inline ObjectU5BU5D_t3614634134* get_pool_0() const { return ___pool_0; }
	inline ObjectU5BU5D_t3614634134** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(ObjectU5BU5D_t3614634134* value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier(&___pool_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
