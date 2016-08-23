#pragma once
#include <stdint.h>
// System.Configuration.PropertyInformation
struct PropertyInformation_t1446;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t1447;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ElementInformation
struct  ElementInformation_t1414  : public Object_t
{
	// System.Configuration.PropertyInformation System.Configuration.ElementInformation::propertyInfo
	PropertyInformation_t1446 * ___propertyInfo_0;
	// System.Configuration.ConfigurationElement System.Configuration.ElementInformation::owner
	ConfigurationElement_t1416 * ___owner_1;
	// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::properties
	PropertyInformationCollection_t1447 * ___properties_2;
};
