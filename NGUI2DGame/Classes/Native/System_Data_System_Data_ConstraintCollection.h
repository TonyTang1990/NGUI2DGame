#pragma once
#include <stdint.h>
// System.Data.DataTable
struct DataTable_t296;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t901;
// System.Data.InternalDataCollectionBase
#include "System_Data_System_Data_InternalDataCollectionBase.h"
// System.Data.ConstraintCollection
struct  ConstraintCollection_t899  : public InternalDataCollectionBase_t902
{
	// System.Data.DataTable System.Data.ConstraintCollection::table
	DataTable_t296 * ___table_1;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::CollectionChanged
	CollectionChangeEventHandler_t901 * ___CollectionChanged_2;
};
