#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Security.Policy.CodeGroup
struct CodeGroup_t2897;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.PolicyLevelType
#include "mscorlib_System_Security_PolicyLevelType.h"
// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t2802  : public Object_t
{
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t2897 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t913 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t913 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t915 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t2401 * ___xml_7;
};
