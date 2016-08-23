#pragma once
#include <stdint.h>
// System.Configuration.ConfigNameValueCollection
struct ConfigNameValueCollection_t1400;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t1429;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0.h"
// System.Configuration.ProviderSettings
struct  ProviderSettings_t1461  : public ConfigurationElement_t1416
{
	// System.Configuration.ConfigNameValueCollection System.Configuration.ProviderSettings::parameters
	ConfigNameValueCollection_t1400 * ___parameters_13;
};
struct ProviderSettings_t1461_StaticFields{
	// System.Configuration.ConfigurationProperty System.Configuration.ProviderSettings::nameProp
	ConfigurationProperty_t1429 * ___nameProp_14;
	// System.Configuration.ConfigurationProperty System.Configuration.ProviderSettings::typeProp
	ConfigurationProperty_t1429 * ___typeProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::properties
	ConfigurationPropertyCollection_t1412 * ___properties_16;
};
