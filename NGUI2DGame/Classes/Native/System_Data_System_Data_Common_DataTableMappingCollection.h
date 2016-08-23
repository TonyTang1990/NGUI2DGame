#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Data.Common.DataTableMappingCollection
struct  DataTableMappingCollection_t988  : public MarshalByRefObject_t882
{
	// System.Collections.ArrayList System.Data.Common.DataTableMappingCollection::mappings
	ArrayList_t913 * ___mappings_1;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::sourceTables
	Hashtable_t915 * ___sourceTables_2;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::dataSetTables
	Hashtable_t915 * ___dataSetTables_3;
};
