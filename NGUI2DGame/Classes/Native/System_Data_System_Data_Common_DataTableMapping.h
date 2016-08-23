#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t991;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Data.Common.DataTableMapping
struct  DataTableMapping_t1016  : public MarshalByRefObject_t882
{
	// System.String System.Data.Common.DataTableMapping::sourceTable
	String_t* ___sourceTable_1;
	// System.String System.Data.Common.DataTableMapping::dataSetTable
	String_t* ___dataSetTable_2;
	// System.Data.Common.DataColumnMappingCollection System.Data.Common.DataTableMapping::columnMappings
	DataColumnMappingCollection_t991 * ___columnMappings_3;
};
