#pragma once
#include <stdint.h>
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t1023;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Data.DataRow
struct DataRow_t352;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.DataViewRowState
#include "System_Data_System_Data_DataViewRowState.h"
// System.Data.Common.Key
struct  Key_t1022  : public Object_t
{
	// System.Data.DataTable System.Data.Common.Key::_table
	DataTable_t296 * ____table_0;
	// System.Data.DataColumn[] System.Data.Common.Key::_columns
	DataColumnU5BU5D_t920* ____columns_1;
	// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::_sortDirection
	ListSortDirectionU5BU5D_t1023* ____sortDirection_2;
	// System.Data.DataViewRowState System.Data.Common.Key::_rowStateFilter
	int32_t ____rowStateFilter_3;
	// Mono.Data.SqlExpressions.IExpression System.Data.Common.Key::_filter
	Object_t * ____filter_4;
	// System.Data.DataRow System.Data.Common.Key::_tmpRow
	DataRow_t352 * ____tmpRow_5;
};
