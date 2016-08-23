#pragma once
#include <stdint.h>
// System.Data.DataTable
struct DataTable_t296;
// System.String
struct String_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Data.MergeFailedEventArgs
struct  MergeFailedEventArgs_t950  : public EventArgs_t912
{
	// System.Data.DataTable System.Data.MergeFailedEventArgs::data_table
	DataTable_t296 * ___data_table_1;
	// System.String System.Data.MergeFailedEventArgs::conflict
	String_t* ___conflict_2;
};
