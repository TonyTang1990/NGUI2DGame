#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataSet
struct DataSet_t3097402844;
// System.Data.DataTable[]
struct DataTableU5BU5D_t2488609753;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t790626706;

#include "System_Data_System_Data_InternalDataCollectionBase623571698.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableCollection
struct  DataTableCollection_t787171642  : public InternalDataCollectionBase_t623571698
{
public:
	// System.Data.DataSet System.Data.DataTableCollection::dataSet
	DataSet_t3097402844 * ___dataSet_2;
	// System.Data.DataTable[] System.Data.DataTableCollection::mostRecentTables
	DataTableU5BU5D_t2488609753* ___mostRecentTables_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanged
	CollectionChangeEventHandler_t790626706 * ___CollectionChanged_4;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanging
	CollectionChangeEventHandler_t790626706 * ___CollectionChanging_5;

public:
	inline static int32_t get_offset_of_dataSet_2() { return static_cast<int32_t>(offsetof(DataTableCollection_t787171642, ___dataSet_2)); }
	inline DataSet_t3097402844 * get_dataSet_2() const { return ___dataSet_2; }
	inline DataSet_t3097402844 ** get_address_of_dataSet_2() { return &___dataSet_2; }
	inline void set_dataSet_2(DataSet_t3097402844 * value)
	{
		___dataSet_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataSet_2, value);
	}

	inline static int32_t get_offset_of_mostRecentTables_3() { return static_cast<int32_t>(offsetof(DataTableCollection_t787171642, ___mostRecentTables_3)); }
	inline DataTableU5BU5D_t2488609753* get_mostRecentTables_3() const { return ___mostRecentTables_3; }
	inline DataTableU5BU5D_t2488609753** get_address_of_mostRecentTables_3() { return &___mostRecentTables_3; }
	inline void set_mostRecentTables_3(DataTableU5BU5D_t2488609753* value)
	{
		___mostRecentTables_3 = value;
		Il2CppCodeGenWriteBarrier(&___mostRecentTables_3, value);
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(DataTableCollection_t787171642, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t790626706 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t790626706 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t790626706 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanged_4, value);
	}

	inline static int32_t get_offset_of_CollectionChanging_5() { return static_cast<int32_t>(offsetof(DataTableCollection_t787171642, ___CollectionChanging_5)); }
	inline CollectionChangeEventHandler_t790626706 * get_CollectionChanging_5() const { return ___CollectionChanging_5; }
	inline CollectionChangeEventHandler_t790626706 ** get_address_of_CollectionChanging_5() { return &___CollectionChanging_5; }
	inline void set_CollectionChanging_5(CollectionChangeEventHandler_t790626706 * value)
	{
		___CollectionChanging_5 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanging_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
