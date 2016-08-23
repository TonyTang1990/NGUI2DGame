#pragma once
#include <stdint.h>
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t896;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.Common.DataContainer
struct DataContainer_t909;
// System.ComponentModel.MarshalByValueComponent
#include "System_System_ComponentModel_MarshalByValueComponent.h"
// System.Data.MappingType
#include "System_Data_System_Data_MappingType.h"
// System.Data.DataSetDateTime
#include "System_Data_System_Data_DataSetDateTime.h"
// System.Data.DataColumn
struct  DataColumn_t858  : public MarshalByValueComponent_t910
{
	// System.ComponentModel.EventHandlerList System.Data.DataColumn::_eventHandlers
	EventHandlerList_t896 * ____eventHandlers_3;
	// System.Boolean System.Data.DataColumn::_allowDBNull
	bool ____allowDBNull_5;
	// System.Boolean System.Data.DataColumn::_autoIncrement
	bool ____autoIncrement_6;
	// System.Int64 System.Data.DataColumn::_autoIncrementSeed
	int64_t ____autoIncrementSeed_7;
	// System.Int64 System.Data.DataColumn::_autoIncrementStep
	int64_t ____autoIncrementStep_8;
	// System.Int64 System.Data.DataColumn::_nextAutoIncrementValue
	int64_t ____nextAutoIncrementValue_9;
	// System.String System.Data.DataColumn::_caption
	String_t* ____caption_10;
	// System.Data.MappingType System.Data.DataColumn::_columnMapping
	int32_t ____columnMapping_11;
	// System.String System.Data.DataColumn::_columnName
	String_t* ____columnName_12;
	// System.Object System.Data.DataColumn::_defaultValue
	Object_t * ____defaultValue_13;
	// System.String System.Data.DataColumn::_expression
	String_t* ____expression_14;
	// Mono.Data.SqlExpressions.IExpression System.Data.DataColumn::_compiledExpression
	Object_t * ____compiledExpression_15;
	// System.Data.PropertyCollection System.Data.DataColumn::_extendedProperties
	PropertyCollection_t897 * ____extendedProperties_16;
	// System.Int32 System.Data.DataColumn::_maxLength
	int32_t ____maxLength_17;
	// System.String System.Data.DataColumn::_nameSpace
	String_t* ____nameSpace_18;
	// System.Int32 System.Data.DataColumn::_ordinal
	int32_t ____ordinal_19;
	// System.String System.Data.DataColumn::_prefix
	String_t* ____prefix_20;
	// System.Boolean System.Data.DataColumn::_readOnly
	bool ____readOnly_21;
	// System.Data.DataTable System.Data.DataColumn::_table
	DataTable_t296 * ____table_22;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_23;
	// System.Data.Common.DataContainer System.Data.DataColumn::_dataContainer
	DataContainer_t909 * ____dataContainer_24;
	// System.Data.DataSetDateTime System.Data.DataColumn::_datetimeMode
	int32_t ____datetimeMode_25;
};
struct DataColumn_t858_StaticFields{
	// System.Object System.Data.DataColumn::_propertyChangedKey
	Object_t * ____propertyChangedKey_4;
};
