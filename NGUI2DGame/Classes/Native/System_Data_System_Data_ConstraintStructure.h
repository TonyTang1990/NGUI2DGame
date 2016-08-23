#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t258;
// System.Boolean[]
struct BooleanU5BU5D_t1049;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.ConstraintStructure
struct  ConstraintStructure_t1050  : public Object_t
{
	// System.String System.Data.ConstraintStructure::TableName
	String_t* ___TableName_0;
	// System.String[] System.Data.ConstraintStructure::Columns
	StringU5BU5D_t258* ___Columns_1;
	// System.Boolean[] System.Data.ConstraintStructure::IsAttribute
	BooleanU5BU5D_t1049* ___IsAttribute_2;
	// System.String System.Data.ConstraintStructure::ConstraintName
	String_t* ___ConstraintName_3;
	// System.Boolean System.Data.ConstraintStructure::IsPrimaryKey
	bool ___IsPrimaryKey_4;
	// System.String System.Data.ConstraintStructure::ReferName
	String_t* ___ReferName_5;
	// System.Boolean System.Data.ConstraintStructure::IsNested
	bool ___IsNested_6;
	// System.Boolean System.Data.ConstraintStructure::IsConstraintOnly
	bool ___IsConstraintOnly_7;
};
