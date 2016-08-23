#pragma once
#include <stdint.h>
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Data.SqlTypes.SqlGuid
#include "System_Data_System_Data_SqlTypes_SqlGuid.h"
// System.Data.SqlTypes.SqlGuid
struct  SqlGuid_t1033 
{
	// System.Guid System.Data.SqlTypes.SqlGuid::value
	Guid_t713  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlGuid::notNull
	bool ___notNull_1;
};
struct SqlGuid_t1033_StaticFields{
	// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlGuid::Null
	SqlGuid_t1033  ___Null_2;
};
// Native definition for marshalling of: System.Data.SqlTypes.SqlGuid
struct SqlGuid_t1033_marshaled
{
	Guid_t713  ___value_0;
	int32_t ___notNull_1;
};
