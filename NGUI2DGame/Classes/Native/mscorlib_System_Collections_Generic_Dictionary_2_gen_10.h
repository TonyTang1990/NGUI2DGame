#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3535;
// System.String[]
struct StringU5BU5D_t258;
// Excel.Log.ILog[]
struct ILogU5BU5D_t3874;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3339;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Excel.Log.ILog,System.Collections.DictionaryEntry>
struct Transform_1_t3875;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>
struct  Dictionary_2_t848  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::table
	Int32U5BU5D_t1* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::linkSlots
	LinkU5BU5D_t3535* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::keySlots
	StringU5BU5D_t258* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::valueSlots
	ILogU5BU5D_t3874* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::serialization_info
	SerializationInfo_t669 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t848_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::<>f__am$cacheB
	Transform_1_t3875 * ___U3CU3Ef__amU24cacheB_15;
};
