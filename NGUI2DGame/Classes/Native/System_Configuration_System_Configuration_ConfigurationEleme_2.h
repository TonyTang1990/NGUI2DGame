#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Collections.IComparer
struct IComparer_t1418;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0.h"
// System.Configuration.ConfigurationElementCollection
struct  ConfigurationElementCollection_t1413  : public ConfigurationElement_t1416
{
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::list
	ArrayList_t913 * ___list_13;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::removed
	ArrayList_t913 * ___removed_14;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::inherited
	ArrayList_t913 * ___inherited_15;
	// System.Boolean System.Configuration.ConfigurationElementCollection::emitClear
	bool ___emitClear_16;
	// System.Boolean System.Configuration.ConfigurationElementCollection::modified
	bool ___modified_17;
	// System.Collections.IComparer System.Configuration.ConfigurationElementCollection::comparer
	Object_t * ___comparer_18;
	// System.Int32 System.Configuration.ConfigurationElementCollection::inheritedLimitIndex
	int32_t ___inheritedLimitIndex_19;
	// System.String System.Configuration.ConfigurationElementCollection::addElementName
	String_t* ___addElementName_20;
	// System.String System.Configuration.ConfigurationElementCollection::clearElementName
	String_t* ___clearElementName_21;
	// System.String System.Configuration.ConfigurationElementCollection::removeElementName
	String_t* ___removeElementName_22;
};
