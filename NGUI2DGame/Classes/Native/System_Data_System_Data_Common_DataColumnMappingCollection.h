#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Data.Common.DataColumnMappingCollection
struct  DataColumnMappingCollection_t991  : public MarshalByRefObject_t882
{
	// System.Collections.ArrayList System.Data.Common.DataColumnMappingCollection::list
	ArrayList_t913 * ___list_1;
	// System.Collections.Hashtable System.Data.Common.DataColumnMappingCollection::sourceColumns
	Hashtable_t915 * ___sourceColumns_2;
	// System.Collections.Hashtable System.Data.Common.DataColumnMappingCollection::dataSetColumns
	Hashtable_t915 * ___dataSetColumns_3;
};
