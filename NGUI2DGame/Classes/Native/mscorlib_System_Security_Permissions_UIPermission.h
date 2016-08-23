#pragma once
#include <stdint.h>
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.UIPermissionWindow
#include "mscorlib_System_Security_Permissions_UIPermissionWindow.h"
// System.Security.Permissions.UIPermissionClipboard
#include "mscorlib_System_Security_Permissions_UIPermissionClipboard.h"
// System.Security.Permissions.UIPermission
struct  UIPermission_t2887  : public CodeAccessPermission_t2797
{
	// System.Security.Permissions.UIPermissionWindow System.Security.Permissions.UIPermission::_window
	int32_t ____window_0;
	// System.Security.Permissions.UIPermissionClipboard System.Security.Permissions.UIPermission::_clipboard
	int32_t ____clipboard_1;
};
