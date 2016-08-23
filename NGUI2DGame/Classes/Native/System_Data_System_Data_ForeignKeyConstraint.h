#pragma once
#include <stdint.h>
// System.Data.UniqueConstraint
struct UniqueConstraint_t918;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Data.Constraint
#include "System_Data_System_Data_Constraint.h"
// System.Data.Rule
#include "System_Data_System_Data_Rule.h"
// System.Data.AcceptRejectRule
#include "System_Data_System_Data_AcceptRejectRule.h"
// System.Data.ForeignKeyConstraint
struct  ForeignKeyConstraint_t919  : public Constraint_t900
{
	// System.Data.UniqueConstraint System.Data.ForeignKeyConstraint::_parentUniqueConstraint
	UniqueConstraint_t918 * ____parentUniqueConstraint_8;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_parentColumns
	DataColumnU5BU5D_t920* ____parentColumns_9;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_childColumns
	DataColumnU5BU5D_t920* ____childColumns_10;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_deleteRule
	int32_t ____deleteRule_11;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_updateRule
	int32_t ____updateRule_12;
	// System.Data.AcceptRejectRule System.Data.ForeignKeyConstraint::_acceptRejectRule
	int32_t ____acceptRejectRule_13;
};
