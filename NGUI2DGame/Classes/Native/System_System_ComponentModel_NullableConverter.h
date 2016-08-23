#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t1427;
// System.ComponentModel.TypeConverter
#include "System_System_ComponentModel_TypeConverter.h"
// System.ComponentModel.NullableConverter
struct  NullableConverter_t1916  : public TypeConverter_t1427
{
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t1427 * ___underlyingTypeConverter_2;
};
