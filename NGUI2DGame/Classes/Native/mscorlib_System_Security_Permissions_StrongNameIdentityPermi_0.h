#pragma once
#include <stdint.h>
// System.Version
struct Version_t1131;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"
// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t2886  : public CodeAccessPermission_t2797
{
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t913 * ____list_2;
};
struct StrongNameIdentityPermission_t2886_StaticFields{
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t1131 * ___defaultVersion_0;
};
