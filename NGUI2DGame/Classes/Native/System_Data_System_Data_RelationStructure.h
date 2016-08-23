#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.RelationStructure
struct  RelationStructure_t1048  : public Object_t
{
	// System.String System.Data.RelationStructure::ExplicitName
	String_t* ___ExplicitName_0;
	// System.String System.Data.RelationStructure::ParentTableName
	String_t* ___ParentTableName_1;
	// System.String System.Data.RelationStructure::ChildTableName
	String_t* ___ChildTableName_2;
	// System.String System.Data.RelationStructure::ParentColumnName
	String_t* ___ParentColumnName_3;
	// System.String System.Data.RelationStructure::ChildColumnName
	String_t* ___ChildColumnName_4;
	// System.Boolean System.Data.RelationStructure::IsNested
	bool ___IsNested_5;
	// System.Boolean System.Data.RelationStructure::CreateConstraint
	bool ___CreateConstraint_6;
};
