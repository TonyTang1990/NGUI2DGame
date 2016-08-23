#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Configuration.ConfigurationElementCollectionType
#include "System_Configuration_System_Configuration_ConfigurationEleme.h"
// System.Configuration.ConfigurationCollectionAttribute
struct  ConfigurationCollectionAttribute_t1410  : public Attribute_t478
{
	// System.String System.Configuration.ConfigurationCollectionAttribute::addItemName
	String_t* ___addItemName_0;
	// System.String System.Configuration.ConfigurationCollectionAttribute::clearItemsName
	String_t* ___clearItemsName_1;
	// System.String System.Configuration.ConfigurationCollectionAttribute::removeItemName
	String_t* ___removeItemName_2;
	// System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationCollectionAttribute::collectionType
	int32_t ___collectionType_3;
	// System.Type System.Configuration.ConfigurationCollectionAttribute::itemType
	Type_t * ___itemType_4;
};
