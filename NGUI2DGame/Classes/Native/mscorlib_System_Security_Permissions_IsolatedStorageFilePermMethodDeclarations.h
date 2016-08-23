#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.IsolatedStorageFilePermission
struct IsolatedStorageFilePermission_t2868;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.IsolatedStorageFilePermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void IsolatedStorageFilePermission__ctor_m18117 (IsolatedStorageFilePermission_t2868 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Copy()
extern "C" Object_t * IsolatedStorageFilePermission_Copy_m18118 (IsolatedStorageFilePermission_t2868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Intersect(System.Security.IPermission)
extern "C" Object_t * IsolatedStorageFilePermission_Intersect_m18119 (IsolatedStorageFilePermission_t2868 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStorageFilePermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool IsolatedStorageFilePermission_IsSubsetOf_m18120 (IsolatedStorageFilePermission_t2868 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Union(System.Security.IPermission)
extern "C" Object_t * IsolatedStorageFilePermission_Union_m18121 (IsolatedStorageFilePermission_t2868 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.IsolatedStorageFilePermission::ToXml()
extern "C" SecurityElement_t2401 * IsolatedStorageFilePermission_ToXml_m18122 (IsolatedStorageFilePermission_t2868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.IsolatedStorageFilePermission System.Security.Permissions.IsolatedStorageFilePermission::Cast(System.Security.IPermission)
extern "C" IsolatedStorageFilePermission_t2868 * IsolatedStorageFilePermission_Cast_m18123 (IsolatedStorageFilePermission_t2868 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
