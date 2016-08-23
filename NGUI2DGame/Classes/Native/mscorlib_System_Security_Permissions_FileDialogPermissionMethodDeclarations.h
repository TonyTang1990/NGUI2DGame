#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.FileDialogPermission
struct FileDialogPermission_t2862;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Permissions.FileDialogPermissionAccess
#include "mscorlib_System_Security_Permissions_FileDialogPermissionAcc.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.FileDialogPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void FileDialogPermission__ctor_m18069 (FileDialogPermission_t2862 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::.ctor(System.Security.Permissions.FileDialogPermissionAccess)
extern "C" void FileDialogPermission__ctor_m18070 (FileDialogPermission_t2862 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::set_Access(System.Security.Permissions.FileDialogPermissionAccess)
extern "C" void FileDialogPermission_set_Access_m18071 (FileDialogPermission_t2862 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Copy()
extern "C" Object_t * FileDialogPermission_Copy_m18072 (FileDialogPermission_t2862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::FromXml(System.Security.SecurityElement)
extern "C" void FileDialogPermission_FromXml_m18073 (FileDialogPermission_t2862 * __this, SecurityElement_t2401 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * FileDialogPermission_Intersect_m18074 (FileDialogPermission_t2862 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileDialogPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool FileDialogPermission_IsSubsetOf_m18075 (FileDialogPermission_t2862 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileDialogPermission::IsUnrestricted()
extern "C" bool FileDialogPermission_IsUnrestricted_m18076 (FileDialogPermission_t2862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.FileDialogPermission::ToXml()
extern "C" SecurityElement_t2401 * FileDialogPermission_ToXml_m18077 (FileDialogPermission_t2862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Union(System.Security.IPermission)
extern "C" Object_t * FileDialogPermission_Union_m18078 (FileDialogPermission_t2862 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileDialogPermission System.Security.Permissions.FileDialogPermission::Cast(System.Security.IPermission)
extern "C" FileDialogPermission_t2862 * FileDialogPermission_Cast_m18079 (FileDialogPermission_t2862 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
