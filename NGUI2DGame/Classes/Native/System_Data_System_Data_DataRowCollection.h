#pragma once
#include <stdint.h>
// System.Data.DataTable
struct DataTable_t296;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t928;
// System.Data.InternalDataCollectionBase
#include "System_Data_System_Data_InternalDataCollectionBase.h"
// System.Data.DataRowCollection
struct  DataRowCollection_t349  : public InternalDataCollectionBase_t902
{
	// System.Data.DataTable System.Data.DataRowCollection::table
	DataTable_t296 * ___table_1;
	// System.ComponentModel.ListChangedEventHandler System.Data.DataRowCollection::ListChanged
	ListChangedEventHandler_t928 * ___ListChanged_2;
};
