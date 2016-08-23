#pragma once
#include <stdint.h>
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t1436;
// System.String
struct String_t;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t1458;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ConfigurationAllowDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow.h"
// System.Configuration.ConfigurationAllowExeDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow_0.h"
// System.Configuration.SectionInformation
struct  SectionInformation_t1434  : public Object_t
{
	// System.Configuration.ConfigurationSection System.Configuration.SectionInformation::parent
	ConfigurationSection_t1436 * ___parent_0;
	// System.Configuration.ConfigurationAllowDefinition System.Configuration.SectionInformation::allow_definition
	int32_t ___allow_definition_1;
	// System.Configuration.ConfigurationAllowExeDefinition System.Configuration.SectionInformation::allow_exe_definition
	int32_t ___allow_exe_definition_2;
	// System.Boolean System.Configuration.SectionInformation::allow_location
	bool ___allow_location_3;
	// System.Boolean System.Configuration.SectionInformation::allow_override
	bool ___allow_override_4;
	// System.Boolean System.Configuration.SectionInformation::inherit_on_child_apps
	bool ___inherit_on_child_apps_5;
	// System.Boolean System.Configuration.SectionInformation::restart_on_external_changes
	bool ___restart_on_external_changes_6;
	// System.Boolean System.Configuration.SectionInformation::require_permission
	bool ___require_permission_7;
	// System.String System.Configuration.SectionInformation::config_source
	String_t* ___config_source_8;
	// System.String System.Configuration.SectionInformation::name
	String_t* ___name_9;
	// System.String System.Configuration.SectionInformation::raw_xml
	String_t* ___raw_xml_10;
	// System.Configuration.ProtectedConfigurationProvider System.Configuration.SectionInformation::protection_provider
	ProtectedConfigurationProvider_t1458 * ___protection_provider_11;
	// System.String System.Configuration.SectionInformation::<ConfigFilePath>k__BackingField
	String_t* ___U3CConfigFilePathU3Ek__BackingField_12;
};
