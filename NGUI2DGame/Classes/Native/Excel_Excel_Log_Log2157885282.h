#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// Excel.Log.ILog
struct ILog_t2210308265;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Excel.Log.Log
struct  Log_t2157885282  : public Il2CppObject
{
public:

public:
};

struct Log_t2157885282_StaticFields
{
public:
	// System.Type Excel.Log.Log::_logType
	Type_t * ____logType_0;
	// Excel.Log.ILog Excel.Log.Log::_logger
	Il2CppObject * ____logger_1;

public:
	inline static int32_t get_offset_of__logType_0() { return static_cast<int32_t>(offsetof(Log_t2157885282_StaticFields, ____logType_0)); }
	inline Type_t * get__logType_0() const { return ____logType_0; }
	inline Type_t ** get_address_of__logType_0() { return &____logType_0; }
	inline void set__logType_0(Type_t * value)
	{
		____logType_0 = value;
		Il2CppCodeGenWriteBarrier(&____logType_0, value);
	}

	inline static int32_t get_offset_of__logger_1() { return static_cast<int32_t>(offsetof(Log_t2157885282_StaticFields, ____logger_1)); }
	inline Il2CppObject * get__logger_1() const { return ____logger_1; }
	inline Il2CppObject ** get_address_of__logger_1() { return &____logger_1; }
	inline void set__logger_1(Il2CppObject * value)
	{
		____logger_1 = value;
		Il2CppCodeGenWriteBarrier(&____logger_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
