#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.RegistryPermission
struct RegistryPermission_t2879;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Collections.IList
struct IList_t794;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"
// System.Security.Permissions.RegistryPermissionAccess
#include "mscorlib_System_Security_Permissions_RegistryPermissionAcces.h"

// System.Void System.Security.Permissions.RegistryPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void RegistryPermission__ctor_m18180 (RegistryPermission_t2879 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::AddPathList(System.Security.Permissions.RegistryPermissionAccess,System.String)
extern "C" void RegistryPermission_AddPathList_m18181 (RegistryPermission_t2879 * __this, int32_t ___access, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.RegistryPermission::GetPathList(System.Security.Permissions.RegistryPermissionAccess)
extern "C" String_t* RegistryPermission_GetPathList_m18182 (RegistryPermission_t2879 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::SetPathList(System.Security.Permissions.RegistryPermissionAccess,System.String)
extern "C" void RegistryPermission_SetPathList_m18183 (RegistryPermission_t2879 * __this, int32_t ___access, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Copy()
extern "C" Object_t * RegistryPermission_Copy_m18184 (RegistryPermission_t2879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::FromXml(System.Security.SecurityElement)
extern "C" void RegistryPermission_FromXml_m18185 (RegistryPermission_t2879 * __this, SecurityElement_t2401 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * RegistryPermission_Intersect_m18186 (RegistryPermission_t2879 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool RegistryPermission_IsSubsetOf_m18187 (RegistryPermission_t2879 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsUnrestricted()
extern "C" bool RegistryPermission_IsUnrestricted_m18188 (RegistryPermission_t2879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.RegistryPermission::ToXml()
extern "C" SecurityElement_t2401 * RegistryPermission_ToXml_m18189 (RegistryPermission_t2879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.RegistryPermission::Union(System.Security.IPermission)
extern "C" Object_t * RegistryPermission_Union_m18190 (RegistryPermission_t2879 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::IsEmpty()
extern "C" bool RegistryPermission_IsEmpty_m18191 (RegistryPermission_t2879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.RegistryPermission System.Security.Permissions.RegistryPermission::Cast(System.Security.IPermission)
extern "C" RegistryPermission_t2879 * RegistryPermission_Cast_m18192 (RegistryPermission_t2879 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::ThrowInvalidFlag(System.Security.Permissions.RegistryPermissionAccess,System.Boolean)
extern "C" void RegistryPermission_ThrowInvalidFlag_m18193 (RegistryPermission_t2879 * __this, int32_t ___flag, bool ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.RegistryPermission::GetPathList(System.Collections.ArrayList)
extern "C" String_t* RegistryPermission_GetPathList_m18194 (RegistryPermission_t2879 * __this, ArrayList_t913 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.RegistryPermission::KeyIsSubsetOf(System.Collections.IList,System.Collections.IList)
extern "C" bool RegistryPermission_KeyIsSubsetOf_m18195 (RegistryPermission_t2879 * __this, Object_t * ___local, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::AddWithUnionKey(System.Collections.IList,System.String)
extern "C" void RegistryPermission_AddWithUnionKey_m18196 (RegistryPermission_t2879 * __this, Object_t * ___list, String_t* ___pathList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.RegistryPermission::IntersectKeys(System.Collections.IList,System.Collections.IList,System.Collections.IList)
extern "C" void RegistryPermission_IntersectKeys_m18197 (RegistryPermission_t2879 * __this, Object_t * ___local, Object_t * ___target, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
