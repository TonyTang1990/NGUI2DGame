#pragma once
#include <stdint.h>
// System.Data.DataRow
struct DataRow_t352;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Data.DataRowAction
#include "System_Data_System_Data_DataRowAction.h"
// System.Data.DataRowChangeEventArgs
struct  DataRowChangeEventArgs_t927  : public EventArgs_t912
{
	// System.Data.DataRow System.Data.DataRowChangeEventArgs::row
	DataRow_t352 * ___row_1;
	// System.Data.DataRowAction System.Data.DataRowChangeEventArgs::action
	int32_t ___action_2;
};
