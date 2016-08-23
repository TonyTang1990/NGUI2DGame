#pragma once
#include <stdint.h>
// System.Data.DataSet
struct DataSet_t346;
// System.Data.DataTable[]
struct DataTableU5BU5D_t859;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t901;
// System.Data.InternalDataCollectionBase
#include "System_Data_System_Data_InternalDataCollectionBase.h"
// System.Data.DataTableCollection
struct  DataTableCollection_t348  : public InternalDataCollectionBase_t902
{
	// System.Data.DataSet System.Data.DataTableCollection::dataSet
	DataSet_t346 * ___dataSet_1;
	// System.Data.DataTable[] System.Data.DataTableCollection::mostRecentTables
	DataTableU5BU5D_t859* ___mostRecentTables_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanged
	CollectionChangeEventHandler_t901 * ___CollectionChanged_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanging
	CollectionChangeEventHandler_t901 * ___CollectionChanging_4;
};
