#pragma once
#include <stdint.h>
// System.Data.DataSet
struct DataSet_t346;
// System.Data.DataColumnCollection
struct DataColumnCollection_t350;
// System.Data.ConstraintCollection
struct ConstraintCollection_t899;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Globalization.CultureInfo
struct CultureInfo_t693;
// System.Data.DataRelationCollection
struct DataRelationCollection_t923;
// System.Data.UniqueConstraint
struct UniqueConstraint_t918;
// System.Data.DataRowCollection
struct DataRowCollection_t349;
// System.ComponentModel.ISite
struct ISite_t934;
// System.Data.DataRowBuilder
struct DataRowBuilder_t926;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.Common.RecordCache
struct RecordCache_t935;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t936;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Text.RegularExpressions.Regex
struct Regex_t355;
// System.Data.DataRow[]
struct DataRowU5BU5D_t883;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t937;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t938;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t939;
// System.ComponentModel.MarshalByValueComponent
#include "System_System_ComponentModel_MarshalByValueComponent.h"
// System.Data.SerializationFormat
#include "System_Data_System_Data_SerializationFormat.h"
// System.Data.DataTable
struct  DataTable_t296  : public MarshalByValueComponent_t910
{
	// System.Data.DataSet System.Data.DataTable::dataSet
	DataSet_t346 * ___dataSet_3;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_4;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t350 * ____columnCollection_5;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t899 * ____constraintCollection_6;
	// System.String System.Data.DataTable::_displayExpression
	String_t* ____displayExpression_7;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t897 * ____extendedProperties_8;
	// System.Globalization.CultureInfo System.Data.DataTable::_locale
	CultureInfo_t693 * ____locale_9;
	// System.Int32 System.Data.DataTable::_minimumCapacity
	int32_t ____minimumCapacity_10;
	// System.String System.Data.DataTable::_nameSpace
	String_t* ____nameSpace_11;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelations
	DataRelationCollection_t923 * ____childRelations_12;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelations
	DataRelationCollection_t923 * ____parentRelations_13;
	// System.String System.Data.DataTable::_prefix
	String_t* ____prefix_14;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKeyConstraint
	UniqueConstraint_t918 * ____primaryKeyConstraint_15;
	// System.Data.DataRowCollection System.Data.DataTable::_rows
	DataRowCollection_t349 * ____rows_16;
	// System.ComponentModel.ISite System.Data.DataTable::_site
	Object_t * ____site_17;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_18;
	// System.Boolean System.Data.DataTable::_duringDataLoad
	bool ____duringDataLoad_19;
	// System.Boolean System.Data.DataTable::_nullConstraintViolationDuringDataLoad
	bool ____nullConstraintViolationDuringDataLoad_20;
	// System.Boolean System.Data.DataTable::dataSetPrevEnforceConstraints
	bool ___dataSetPrevEnforceConstraints_21;
	// System.Boolean System.Data.DataTable::enforceConstraints
	bool ___enforceConstraints_22;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t926 * ____rowBuilder_23;
	// System.Collections.ArrayList System.Data.DataTable::_indexes
	ArrayList_t913 * ____indexes_24;
	// System.Data.Common.RecordCache System.Data.DataTable::_recordCache
	RecordCache_t935 * ____recordCache_25;
	// System.Int32 System.Data.DataTable::_defaultValuesRowIndex
	int32_t ____defaultValuesRowIndex_26;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_27;
	// System.Boolean System.Data.DataTable::_virginCaseSensitive
	bool ____virginCaseSensitive_28;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorsCache
	PropertyDescriptorCollection_t936 * ____propertyDescriptorsCache_29;
	// System.Data.DataColumn[] System.Data.DataTable::_latestPrimaryKeyCols
	DataColumnU5BU5D_t920* ____latestPrimaryKeyCols_32;
	// System.Data.DataRow[] System.Data.DataTable::empty_rows
	DataRowU5BU5D_t883* ___empty_rows_33;
	// System.Boolean System.Data.DataTable::tableInitialized
	bool ___tableInitialized_34;
	// System.Data.SerializationFormat System.Data.DataTable::remotingFormat
	int32_t ___remotingFormat_35;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanged
	DataColumnChangeEventHandler_t937 * ___ColumnChanged_36;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanging
	DataColumnChangeEventHandler_t937 * ___ColumnChanging_37;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanged
	DataRowChangeEventHandler_t938 * ___RowChanged_38;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanging
	DataRowChangeEventHandler_t938 * ___RowChanging_39;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleted
	DataRowChangeEventHandler_t938 * ___RowDeleted_40;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleting
	DataRowChangeEventHandler_t938 * ___RowDeleting_41;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::TableNewRow
	DataTableNewRowEventHandler_t939 * ___TableNewRow_42;
};
struct DataTable_t296_StaticFields{
	// System.Data.DataColumn[] System.Data.DataTable::_emptyColumnArray
	DataColumnU5BU5D_t920* ____emptyColumnArray_30;
	// System.Text.RegularExpressions.Regex System.Data.DataTable::SortRegex
	Regex_t355 * ___SortRegex_31;
};
