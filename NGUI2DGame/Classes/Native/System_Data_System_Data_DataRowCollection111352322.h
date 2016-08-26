#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataTable
struct DataTable_t3267612424;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t2276411942;

#include "System_Data_System_Data_InternalDataCollectionBase623571698.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowCollection
struct  DataRowCollection_t111352322  : public InternalDataCollectionBase_t623571698
{
public:
	// System.Data.DataTable System.Data.DataRowCollection::table
	DataTable_t3267612424 * ___table_1;
	// System.ComponentModel.ListChangedEventHandler System.Data.DataRowCollection::ListChanged
	ListChangedEventHandler_t2276411942 * ___ListChanged_2;

public:
	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(DataRowCollection_t111352322, ___table_1)); }
	inline DataTable_t3267612424 * get_table_1() const { return ___table_1; }
	inline DataTable_t3267612424 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(DataTable_t3267612424 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier(&___table_1, value);
	}

	inline static int32_t get_offset_of_ListChanged_2() { return static_cast<int32_t>(offsetof(DataRowCollection_t111352322, ___ListChanged_2)); }
	inline ListChangedEventHandler_t2276411942 * get_ListChanged_2() const { return ___ListChanged_2; }
	inline ListChangedEventHandler_t2276411942 ** get_address_of_ListChanged_2() { return &___ListChanged_2; }
	inline void set_ListChanged_2(ListChangedEventHandler_t2276411942 * value)
	{
		___ListChanged_2 = value;
		Il2CppCodeGenWriteBarrier(&___ListChanged_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
