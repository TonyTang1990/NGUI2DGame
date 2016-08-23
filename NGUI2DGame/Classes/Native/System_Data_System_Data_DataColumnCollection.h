#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.DataTable
struct DataTable_t296;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t258;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t901;
// System.Data.InternalDataCollectionBase
#include "System_Data_System_Data_InternalDataCollectionBase.h"
// System.Data.DataColumnCollection
struct  DataColumnCollection_t350  : public InternalDataCollectionBase_t902
{
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnNameCount
	Hashtable_t915 * ___columnNameCount_1;
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnFromName
	Hashtable_t915 * ___columnFromName_2;
	// System.Collections.ArrayList System.Data.DataColumnCollection::autoIncrement
	ArrayList_t913 * ___autoIncrement_3;
	// System.Int32 System.Data.DataColumnCollection::defaultColumnIndex
	int32_t ___defaultColumnIndex_4;
	// System.Data.DataTable System.Data.DataColumnCollection::parentTable
	DataTable_t296 * ___parentTable_5;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t901 * ___CollectionChanged_8;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionMetaDataChanged
	CollectionChangeEventHandler_t901 * ___CollectionMetaDataChanged_9;
};
struct DataColumnCollection_t350_StaticFields{
	// System.String System.Data.DataColumnCollection::ColumnPrefix
	String_t* ___ColumnPrefix_6;
	// System.String[] System.Data.DataColumnCollection::TenColumns
	StringU5BU5D_t258* ___TenColumns_7;
};
