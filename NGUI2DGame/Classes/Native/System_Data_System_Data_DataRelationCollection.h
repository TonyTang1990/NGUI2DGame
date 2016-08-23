#pragma once
#include <stdint.h>
// System.Data.DataRelation
struct DataRelation_t921;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t901;
// System.Data.InternalDataCollectionBase
#include "System_Data_System_Data_InternalDataCollectionBase.h"
// System.Data.DataRelationCollection
struct  DataRelationCollection_t923  : public InternalDataCollectionBase_t902
{
	// System.Data.DataRelation System.Data.DataRelationCollection::inTransition
	DataRelation_t921 * ___inTransition_1;
	// System.Int32 System.Data.DataRelationCollection::index
	int32_t ___index_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::CollectionChanged
	CollectionChangeEventHandler_t901 * ___CollectionChanged_3;
};
