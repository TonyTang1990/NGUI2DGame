#pragma once
#include <stdint.h>
// System.Char[]
struct CharU5BU5D_t260;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t1398;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ConfigurationLocation
struct  ConfigurationLocation_t1422  : public Object_t
{
	// System.String System.Configuration.ConfigurationLocation::path
	String_t* ___path_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationLocation::configuration
	Configuration_t1398 * ___configuration_2;
	// System.Configuration.Configuration System.Configuration.ConfigurationLocation::parent
	Configuration_t1398 * ___parent_3;
	// System.String System.Configuration.ConfigurationLocation::xmlContent
	String_t* ___xmlContent_4;
	// System.Boolean System.Configuration.ConfigurationLocation::parentResolved
	bool ___parentResolved_5;
	// System.Boolean System.Configuration.ConfigurationLocation::allowOverride
	bool ___allowOverride_6;
};
struct ConfigurationLocation_t1422_StaticFields{
	// System.Char[] System.Configuration.ConfigurationLocation::pathTrimChars
	CharU5BU5D_t260* ___pathTrimChars_0;
};
