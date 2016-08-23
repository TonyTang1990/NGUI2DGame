#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1412;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t1410;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ElementMap
struct  ElementMap_t1411  : public Object_t
{
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::properties
	ConfigurationPropertyCollection_t1412 * ___properties_1;
	// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ElementMap::collectionAttribute
	ConfigurationCollectionAttribute_t1410 * ___collectionAttribute_2;
};
struct ElementMap_t1411_StaticFields{
	// System.Collections.Hashtable System.Configuration.ElementMap::elementMaps
	Hashtable_t915 * ___elementMaps_0;
};
