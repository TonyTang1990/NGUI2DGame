#pragma once
#include <stdint.h>
// System.Configuration.Configuration
struct Configuration_t1398;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.String
struct String_t;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t1404;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1405;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t1406;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t1407;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.Configuration
struct  Configuration_t1398  : public Object_t
{
	// System.Configuration.Configuration System.Configuration.Configuration::parent
	Configuration_t1398 * ___parent_0;
	// System.Collections.Hashtable System.Configuration.Configuration::elementData
	Hashtable_t915 * ___elementData_1;
	// System.String System.Configuration.Configuration::streamName
	String_t* ___streamName_2;
	// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::rootSectionGroup
	ConfigurationSectionGroup_t1404 * ___rootSectionGroup_3;
	// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::locations
	ConfigurationLocationCollection_t1405 * ___locations_4;
	// System.Configuration.SectionGroupInfo System.Configuration.Configuration::rootGroup
	SectionGroupInfo_t1406 * ___rootGroup_5;
	// System.Configuration.Internal.IConfigSystem System.Configuration.Configuration::system
	Object_t * ___system_6;
	// System.Boolean System.Configuration.Configuration::hasFile
	bool ___hasFile_7;
	// System.String System.Configuration.Configuration::rootNamespace
	String_t* ___rootNamespace_8;
	// System.String System.Configuration.Configuration::configPath
	String_t* ___configPath_9;
	// System.String System.Configuration.Configuration::locationConfigPath
	String_t* ___locationConfigPath_10;
	// System.String System.Configuration.Configuration::locationSubPath
	String_t* ___locationSubPath_11;
};
