#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Data.Common.DataColumnMapping
struct  DataColumnMapping_t992  : public MarshalByRefObject_t882
{
	// System.String System.Data.Common.DataColumnMapping::sourceColumn
	String_t* ___sourceColumn_1;
	// System.String System.Data.Common.DataColumnMapping::dataSetColumn
	String_t* ___dataSetColumn_2;
};
