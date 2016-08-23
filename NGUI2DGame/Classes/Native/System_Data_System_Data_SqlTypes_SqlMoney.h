#pragma once
#include <stdint.h>
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1037;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Data.SqlTypes.SqlMoney
#include "System_Data_System_Data_SqlTypes_SqlMoney.h"
// System.Data.SqlTypes.SqlMoney
struct  SqlMoney_t1038 
{
	// System.Decimal System.Data.SqlTypes.SqlMoney::value
	Decimal_t698  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlMoney::notNull
	bool ___notNull_1;
};
struct SqlMoney_t1038_StaticFields{
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t1038  ___MaxValue_2;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t1038  ___MinValue_3;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t1038  ___Null_4;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t1038  ___Zero_5;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlMoney::MoneyFormat
	NumberFormatInfo_t1037 * ___MoneyFormat_6;
};
// Native definition for marshalling of: System.Data.SqlTypes.SqlMoney
struct SqlMoney_t1038_marshaled
{
	Decimal_t698  ___value_0;
	int32_t ___notNull_1;
};
