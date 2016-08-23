#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.ReflectionPermission
struct ReflectionPermission_t2877;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Permissions.ReflectionPermissionFlag
#include "mscorlib_System_Security_Permissions_ReflectionPermissionFla.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.ReflectionPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void ReflectionPermission__ctor_m18168 (ReflectionPermission_t2877 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::.ctor(System.Security.Permissions.ReflectionPermissionFlag)
extern "C" void ReflectionPermission__ctor_m18169 (ReflectionPermission_t2877 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::get_Flags()
extern "C" int32_t ReflectionPermission_get_Flags_m18170 (ReflectionPermission_t2877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::set_Flags(System.Security.Permissions.ReflectionPermissionFlag)
extern "C" void ReflectionPermission_set_Flags_m18171 (ReflectionPermission_t2877 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Copy()
extern "C" Object_t * ReflectionPermission_Copy_m18172 (ReflectionPermission_t2877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ReflectionPermission::FromXml(System.Security.SecurityElement)
extern "C" void ReflectionPermission_FromXml_m18173 (ReflectionPermission_t2877 * __this, SecurityElement_t2401 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * ReflectionPermission_Intersect_m18174 (ReflectionPermission_t2877 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ReflectionPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool ReflectionPermission_IsSubsetOf_m18175 (ReflectionPermission_t2877 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ReflectionPermission::IsUnrestricted()
extern "C" bool ReflectionPermission_IsUnrestricted_m18176 (ReflectionPermission_t2877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ReflectionPermission::ToXml()
extern "C" SecurityElement_t2401 * ReflectionPermission_ToXml_m18177 (ReflectionPermission_t2877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ReflectionPermission::Union(System.Security.IPermission)
extern "C" Object_t * ReflectionPermission_Union_m18178 (ReflectionPermission_t2877 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ReflectionPermission System.Security.Permissions.ReflectionPermission::Cast(System.Security.IPermission)
extern "C" ReflectionPermission_t2877 * ReflectionPermission_Cast_m18179 (ReflectionPermission_t2877 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
