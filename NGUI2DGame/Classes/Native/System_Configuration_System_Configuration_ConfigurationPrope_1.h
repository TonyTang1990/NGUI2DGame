#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Configuration.ConfigurationPropertyOptions
#include "System_Configuration_System_Configuration_ConfigurationPrope_0.h"
// System.Configuration.ConfigurationPropertyAttribute
struct  ConfigurationPropertyAttribute_t1430  : public Attribute_t478
{
	// System.String System.Configuration.ConfigurationPropertyAttribute::name
	String_t* ___name_0;
	// System.Object System.Configuration.ConfigurationPropertyAttribute::default_value
	Object_t * ___default_value_1;
	// System.Configuration.ConfigurationPropertyOptions System.Configuration.ConfigurationPropertyAttribute::flags
	int32_t ___flags_2;
};
