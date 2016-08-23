#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Data.DataTableCollection
struct DataTableCollection_t348;
// System.Data.DataRelationCollection
struct DataRelationCollection_t923;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Globalization.CultureInfo
struct CultureInfo_t693;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t931;
// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t932;
// System.ComponentModel.MarshalByValueComponent
#include "System_System_ComponentModel_MarshalByValueComponent.h"
// System.Data.SerializationFormat
#include "System_Data_System_Data_SerializationFormat.h"
// System.Data.DataSet
struct  DataSet_t346  : public MarshalByValueComponent_t910
{
	// System.String System.Data.DataSet::dataSetName
	String_t* ___dataSetName_3;
	// System.String System.Data.DataSet::_namespace
	String_t* ____namespace_4;
	// System.String System.Data.DataSet::prefix
	String_t* ___prefix_5;
	// System.Boolean System.Data.DataSet::caseSensitive
	bool ___caseSensitive_6;
	// System.Boolean System.Data.DataSet::enforceConstraints
	bool ___enforceConstraints_7;
	// System.Data.DataTableCollection System.Data.DataSet::tableCollection
	DataTableCollection_t348 * ___tableCollection_8;
	// System.Data.DataRelationCollection System.Data.DataSet::relationCollection
	DataRelationCollection_t923 * ___relationCollection_9;
	// System.Data.PropertyCollection System.Data.DataSet::properties
	PropertyCollection_t897 * ___properties_10;
	// System.Globalization.CultureInfo System.Data.DataSet::locale
	CultureInfo_t693 * ___locale_11;
	// System.Data.TableAdapterSchemaInfo System.Data.DataSet::tableAdapterSchemaInfo
	TableAdapterSchemaInfo_t931 * ___tableAdapterSchemaInfo_12;
	// System.Boolean System.Data.DataSet::initInProgress
	bool ___initInProgress_13;
	// System.Boolean System.Data.DataSet::dataSetInitialized
	bool ___dataSetInitialized_14;
	// System.Data.SerializationFormat System.Data.DataSet::remotingFormat
	int32_t ___remotingFormat_15;
	// System.Data.MergeFailedEventHandler System.Data.DataSet::MergeFailed
	MergeFailedEventHandler_t932 * ___MergeFailed_16;
};
