#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbProviderFactories
struct  DbProviderFactories_t4050893305  : public Il2CppObject
{
public:

public:
};

struct DbProviderFactories_t4050893305_StaticFields
{
public:
	// System.Object System.Data.Common.DbProviderFactories::configEntries
	Il2CppObject * ___configEntries_0;

public:
	inline static int32_t get_offset_of_configEntries_0() { return static_cast<int32_t>(offsetof(DbProviderFactories_t4050893305_StaticFields, ___configEntries_0)); }
	inline Il2CppObject * get_configEntries_0() const { return ___configEntries_0; }
	inline Il2CppObject ** get_address_of_configEntries_0() { return &___configEntries_0; }
	inline void set_configEntries_0(Il2CppObject * value)
	{
		___configEntries_0 = value;
		Il2CppCodeGenWriteBarrier(&___configEntries_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
