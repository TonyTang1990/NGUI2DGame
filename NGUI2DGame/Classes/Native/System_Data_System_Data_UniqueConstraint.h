#pragma once
#include <stdint.h>
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t919;
// System.Data.Constraint
#include "System_Data_System_Data_Constraint.h"
// System.Data.UniqueConstraint
struct  UniqueConstraint_t918  : public Constraint_t900
{
	// System.Boolean System.Data.UniqueConstraint::_isPrimaryKey
	bool ____isPrimaryKey_8;
	// System.Boolean System.Data.UniqueConstraint::_belongsToCollection
	bool ____belongsToCollection_9;
	// System.Data.DataTable System.Data.UniqueConstraint::_dataTable
	DataTable_t296 * ____dataTable_10;
	// System.Data.DataColumn[] System.Data.UniqueConstraint::_dataColumns
	DataColumnU5BU5D_t920* ____dataColumns_11;
	// System.Data.ForeignKeyConstraint System.Data.UniqueConstraint::_childConstraint
	ForeignKeyConstraint_t919 * ____childConstraint_12;
};
