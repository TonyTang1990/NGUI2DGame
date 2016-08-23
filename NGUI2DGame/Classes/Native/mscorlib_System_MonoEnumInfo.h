﻿#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String[]
struct StringU5BU5D_t258;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Object
struct Object_t;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t2446;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t2447;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t2448;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t2449;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.MonoEnumInfo
struct  MonoEnumInfo_t2450 
{
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	Array_t * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t258* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t915 * ___name_hash_3;
};
struct MonoEnumInfo_t2450_StaticFields{
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t915 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	Object_t * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t2446 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t2447 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t2448 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t2449 * ___long_comparer_10;
};
struct MonoEnumInfo_t2450_ThreadStaticFields{
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t915 * ___cache_4;
};
