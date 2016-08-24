#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>
struct Dictionary_2_t4125087527;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Excel.Log.LogManager
struct  LogManager_t1846890795  : public Il2CppObject
{
public:

public:
};

struct LogManager_t1846890795_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog> Excel.Log.LogManager::_dictionary
	Dictionary_2_t4125087527 * ____dictionary_0;
	// System.Object Excel.Log.LogManager::_sync
	Il2CppObject * ____sync_1;

public:
	inline static int32_t get_offset_of__dictionary_0() { return static_cast<int32_t>(offsetof(LogManager_t1846890795_StaticFields, ____dictionary_0)); }
	inline Dictionary_2_t4125087527 * get__dictionary_0() const { return ____dictionary_0; }
	inline Dictionary_2_t4125087527 ** get_address_of__dictionary_0() { return &____dictionary_0; }
	inline void set__dictionary_0(Dictionary_2_t4125087527 * value)
	{
		____dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&____dictionary_0, value);
	}

	inline static int32_t get_offset_of__sync_1() { return static_cast<int32_t>(offsetof(LogManager_t1846890795_StaticFields, ____sync_1)); }
	inline Il2CppObject * get__sync_1() const { return ____sync_1; }
	inline Il2CppObject ** get_address_of__sync_1() { return &____sync_1; }
	inline void set__sync_1(Il2CppObject * value)
	{
		____sync_1 = value;
		Il2CppCodeGenWriteBarrier(&____sync_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
