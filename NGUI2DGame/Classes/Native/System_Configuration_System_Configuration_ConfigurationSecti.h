#pragma once
#include <stdint.h>
// System.Configuration.SectionInformation
struct SectionInformation_t1434;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t1435;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0.h"
// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t1436  : public ConfigurationElement_t1416
{
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t1434 * ___sectionInformation_13;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	Object_t * ___section_handler_14;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_15;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	Object_t * ____configContext_16;
};
