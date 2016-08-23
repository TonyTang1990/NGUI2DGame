#pragma once
#include <stdint.h>
// System.Data.DataColumn
struct DataColumn_t858;
// System.Data.DataRow
struct DataRow_t352;
// System.Object
struct Object_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Data.DataColumnChangeEventArgs
struct  DataColumnChangeEventArgs_t911  : public EventArgs_t912
{
	// System.Data.DataColumn System.Data.DataColumnChangeEventArgs::_column
	DataColumn_t858 * ____column_1;
	// System.Data.DataRow System.Data.DataColumnChangeEventArgs::_row
	DataRow_t352 * ____row_2;
	// System.Object System.Data.DataColumnChangeEventArgs::_proposedValue
	Object_t * ____proposedValue_3;
};
