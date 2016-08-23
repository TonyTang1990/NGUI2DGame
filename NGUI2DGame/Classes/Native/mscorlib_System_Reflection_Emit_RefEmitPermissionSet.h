#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Security.Permissions.SecurityAction
#include "mscorlib_System_Security_Permissions_SecurityAction.h"
// System.Reflection.Emit.RefEmitPermissionSet
struct  RefEmitPermissionSet_t2616 
{
	// System.Security.Permissions.SecurityAction System.Reflection.Emit.RefEmitPermissionSet::action
	int32_t ___action_0;
	// System.String System.Reflection.Emit.RefEmitPermissionSet::pset
	String_t* ___pset_1;
};
// Native definition for marshalling of: System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t2616_marshaled
{
	int32_t ___action_0;
	char* ___pset_1;
};
