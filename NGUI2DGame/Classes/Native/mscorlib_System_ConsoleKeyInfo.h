#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.ConsoleKeyInfo
#include "mscorlib_System_ConsoleKeyInfo.h"
// System.ConsoleKey
#include "mscorlib_System_ConsoleKey.h"
// System.ConsoleModifiers
#include "mscorlib_System_ConsoleModifiers.h"
// System.ConsoleKeyInfo
struct  ConsoleKeyInfo_t2433 
{
	// System.ConsoleKey System.ConsoleKeyInfo::key
	int32_t ___key_1;
	// System.Char System.ConsoleKeyInfo::keychar
	uint16_t ___keychar_2;
	// System.ConsoleModifiers System.ConsoleKeyInfo::modifiers
	int32_t ___modifiers_3;
};
struct ConsoleKeyInfo_t2433_StaticFields{
	// System.ConsoleKeyInfo System.ConsoleKeyInfo::Empty
	ConsoleKeyInfo_t2433  ___Empty_0;
};
// Native definition for marshalling of: System.ConsoleKeyInfo
struct ConsoleKeyInfo_t2433_marshaled
{
	int32_t ___key_1;
	char ___keychar_2;
	int32_t ___modifiers_3;
};
