#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t896;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Data.Common.Index
struct Index_t898;
// System.Data.ConstraintCollection
struct ConstraintCollection_t899;
// System.Data.DataSet
struct DataSet_t346;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.Constraint
struct  Constraint_t900  : public Object_t
{
	// System.ComponentModel.EventHandlerList System.Data.Constraint::events
	EventHandlerList_t896 * ___events_1;
	// System.String System.Data.Constraint::_constraintName
	String_t* ____constraintName_2;
	// System.Data.PropertyCollection System.Data.Constraint::_properties
	PropertyCollection_t897 * ____properties_3;
	// System.Data.Common.Index System.Data.Constraint::_index
	Index_t898 * ____index_4;
	// System.Data.ConstraintCollection System.Data.Constraint::_constraintCollection
	ConstraintCollection_t899 * ____constraintCollection_5;
	// System.Data.DataSet System.Data.Constraint::dataSet
	DataSet_t346 * ___dataSet_6;
	// System.Boolean System.Data.Constraint::initInProgress
	bool ___initInProgress_7;
};
struct Constraint_t900_StaticFields{
	// System.Object System.Data.Constraint::beforeConstraintNameChange
	Object_t * ___beforeConstraintNameChange_0;
};
