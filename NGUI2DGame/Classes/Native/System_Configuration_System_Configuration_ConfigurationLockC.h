#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1416;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ConfigurationLockType
#include "System_Configuration_System_Configuration_ConfigurationLockT.h"
// System.Configuration.ConfigurationLockCollection
struct  ConfigurationLockCollection_t1415  : public Object_t
{
	// System.Collections.ArrayList System.Configuration.ConfigurationLockCollection::names
	ArrayList_t913 * ___names_0;
	// System.Configuration.ConfigurationElement System.Configuration.ConfigurationLockCollection::element
	ConfigurationElement_t1416 * ___element_1;
	// System.Configuration.ConfigurationLockType System.Configuration.ConfigurationLockCollection::lockType
	int32_t ___lockType_2;
	// System.Boolean System.Configuration.ConfigurationLockCollection::is_modified
	bool ___is_modified_3;
	// System.Collections.Hashtable System.Configuration.ConfigurationLockCollection::valid_name_hash
	Hashtable_t915 * ___valid_name_hash_4;
	// System.String System.Configuration.ConfigurationLockCollection::valid_names
	String_t* ___valid_names_5;
};
