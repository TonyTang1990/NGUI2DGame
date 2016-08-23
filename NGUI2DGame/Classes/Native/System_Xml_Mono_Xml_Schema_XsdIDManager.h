#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdIDManager
struct  XsdIDManager_t1522  : public Object_t
{
	// System.Collections.Hashtable Mono.Xml.Schema.XsdIDManager::idList
	Hashtable_t915 * ___idList_0;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdIDManager::missingIDReferences
	ArrayList_t913 * ___missingIDReferences_1;
	// System.String Mono.Xml.Schema.XsdIDManager::thisElementId
	String_t* ___thisElementId_2;
};
