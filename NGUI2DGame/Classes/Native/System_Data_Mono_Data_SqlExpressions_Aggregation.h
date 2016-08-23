#pragma once
#include <stdint.h>
// System.Data.DataRow[]
struct DataRowU5BU5D_t883;
// Mono.Data.SqlExpressions.ColumnReference
struct ColumnReference_t1070;
// System.IConvertible
struct IConvertible_t373;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t938;
// System.Data.DataTable
struct DataTable_t296;
// Mono.Data.SqlExpressions.BaseExpression
#include "System_Data_Mono_Data_SqlExpressions_BaseExpression.h"
// Mono.Data.SqlExpressions.AggregationFunction
#include "System_Data_Mono_Data_SqlExpressions_AggregationFunction.h"
// Mono.Data.SqlExpressions.Aggregation
struct  Aggregation_t1087  : public BaseExpression_t1063
{
	// System.Boolean Mono.Data.SqlExpressions.Aggregation::cacheResults
	bool ___cacheResults_0;
	// System.Data.DataRow[] Mono.Data.SqlExpressions.Aggregation::rows
	DataRowU5BU5D_t883* ___rows_1;
	// Mono.Data.SqlExpressions.ColumnReference Mono.Data.SqlExpressions.Aggregation::column
	ColumnReference_t1070 * ___column_2;
	// Mono.Data.SqlExpressions.AggregationFunction Mono.Data.SqlExpressions.Aggregation::function
	int32_t ___function_3;
	// System.Int32 Mono.Data.SqlExpressions.Aggregation::count
	int32_t ___count_4;
	// System.IConvertible Mono.Data.SqlExpressions.Aggregation::result
	Object_t * ___result_5;
	// System.Data.DataRowChangeEventHandler Mono.Data.SqlExpressions.Aggregation::RowChangeHandler
	DataRowChangeEventHandler_t938 * ___RowChangeHandler_6;
	// System.Data.DataTable Mono.Data.SqlExpressions.Aggregation::table
	DataTable_t296 * ___table_7;
};
