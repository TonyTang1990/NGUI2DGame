#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Data.DataRelation
struct DataRelation_t921;
// Mono.Data.SqlExpressions.BaseExpression
#include "System_Data_Mono_Data_SqlExpressions_BaseExpression.h"
// Mono.Data.SqlExpressions.ReferencedTable
#include "System_Data_Mono_Data_SqlExpressions_ReferencedTable.h"
// Mono.Data.SqlExpressions.ColumnReference
struct  ColumnReference_t1070  : public BaseExpression_t1063
{
	// Mono.Data.SqlExpressions.ReferencedTable Mono.Data.SqlExpressions.ColumnReference::refTable
	int32_t ___refTable_0;
	// System.String Mono.Data.SqlExpressions.ColumnReference::relationName
	String_t* ___relationName_1;
	// System.String Mono.Data.SqlExpressions.ColumnReference::columnName
	String_t* ___columnName_2;
	// System.Data.DataColumn Mono.Data.SqlExpressions.ColumnReference::_cachedColumn
	DataColumn_t858 * ____cachedColumn_3;
	// System.Data.DataRelation Mono.Data.SqlExpressions.ColumnReference::_cachedRelation
	DataRelation_t921 * ____cachedRelation_4;
};
