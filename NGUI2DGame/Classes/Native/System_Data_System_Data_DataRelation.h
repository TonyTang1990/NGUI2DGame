#pragma once
#include <stdint.h>
// System.Data.DataSet
struct DataSet_t346;
// System.String
struct String_t;
// System.Data.UniqueConstraint
struct UniqueConstraint_t918;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t919;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.DataRelation
struct  DataRelation_t921  : public Object_t
{
	// System.Data.DataSet System.Data.DataRelation::dataSet
	DataSet_t346 * ___dataSet_0;
	// System.String System.Data.DataRelation::relationName
	String_t* ___relationName_1;
	// System.Data.UniqueConstraint System.Data.DataRelation::parentKeyConstraint
	UniqueConstraint_t918 * ___parentKeyConstraint_2;
	// System.Data.ForeignKeyConstraint System.Data.DataRelation::childKeyConstraint
	ForeignKeyConstraint_t919 * ___childKeyConstraint_3;
	// System.Data.DataColumn[] System.Data.DataRelation::parentColumns
	DataColumnU5BU5D_t920* ___parentColumns_4;
	// System.Data.DataColumn[] System.Data.DataRelation::childColumns
	DataColumnU5BU5D_t920* ___childColumns_5;
	// System.Boolean System.Data.DataRelation::nested
	bool ___nested_6;
	// System.Boolean System.Data.DataRelation::createConstraints
	bool ___createConstraints_7;
	// System.Boolean System.Data.DataRelation::initFinished
	bool ___initFinished_8;
	// System.Data.PropertyCollection System.Data.DataRelation::extendedProperties
	PropertyCollection_t897 * ___extendedProperties_9;
	// System.String System.Data.DataRelation::_parentTableNameSpace
	String_t* ____parentTableNameSpace_10;
	// System.String System.Data.DataRelation::_childTableNameSpace
	String_t* ____childTableNameSpace_11;
};
