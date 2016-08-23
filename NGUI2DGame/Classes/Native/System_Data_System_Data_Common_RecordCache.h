#pragma once
#include <stdint.h>
// System.Collections.Stack
struct Stack_t639;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataRow[]
struct DataRowU5BU5D_t883;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.Common.RecordCache
struct  RecordCache_t935  : public Object_t
{
	// System.Collections.Stack System.Data.Common.RecordCache::_records
	Stack_t639 * ____records_0;
	// System.Int32 System.Data.Common.RecordCache::_nextFreeIndex
	int32_t ____nextFreeIndex_1;
	// System.Int32 System.Data.Common.RecordCache::_currentCapacity
	int32_t ____currentCapacity_2;
	// System.Data.DataTable System.Data.Common.RecordCache::_table
	DataTable_t296 * ____table_3;
	// System.Data.DataRow[] System.Data.Common.RecordCache::_rowsToRecords
	DataRowU5BU5D_t883* ____rowsToRecords_4;
};
