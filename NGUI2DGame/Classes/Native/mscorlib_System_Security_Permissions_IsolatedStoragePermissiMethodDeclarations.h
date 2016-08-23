#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.IsolatedStoragePermission
struct IsolatedStoragePermission_t2869;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Permissions.IsolatedStorageContainment
#include "mscorlib_System_Security_Permissions_IsolatedStorageContainm.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.IsolatedStoragePermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void IsolatedStoragePermission__ctor_m18124 (IsolatedStoragePermission_t2869 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::set_UserQuota(System.Int64)
extern "C" void IsolatedStoragePermission_set_UserQuota_m18125 (IsolatedStoragePermission_t2869 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::set_UsageAllowed(System.Security.Permissions.IsolatedStorageContainment)
extern "C" void IsolatedStoragePermission_set_UsageAllowed_m18126 (IsolatedStoragePermission_t2869 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStoragePermission::IsUnrestricted()
extern "C" bool IsolatedStoragePermission_IsUnrestricted_m18127 (IsolatedStoragePermission_t2869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.IsolatedStoragePermission::ToXml()
extern "C" SecurityElement_t2401 * IsolatedStoragePermission_ToXml_m18128 (IsolatedStoragePermission_t2869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.IsolatedStoragePermission::FromXml(System.Security.SecurityElement)
extern "C" void IsolatedStoragePermission_FromXml_m18129 (IsolatedStoragePermission_t2869 * __this, SecurityElement_t2401 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStoragePermission::IsEmpty()
extern "C" bool IsolatedStoragePermission_IsEmpty_m18130 (IsolatedStoragePermission_t2869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
