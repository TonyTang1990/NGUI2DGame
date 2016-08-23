#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.ZoneIdentityPermission
struct ZoneIdentityPermission_t2891;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.SecurityZone
#include "mscorlib_System_Security_SecurityZone.h"

// System.Void System.Security.Permissions.ZoneIdentityPermission::.ctor(System.Security.SecurityZone)
extern "C" void ZoneIdentityPermission__ctor_m18280 (ZoneIdentityPermission_t2891 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Copy()
extern "C" Object_t * ZoneIdentityPermission_Copy_m18281 (ZoneIdentityPermission_t2891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ZoneIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool ZoneIdentityPermission_IsSubsetOf_m18282 (ZoneIdentityPermission_t2891 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * ZoneIdentityPermission_Union_m18283 (ZoneIdentityPermission_t2891 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * ZoneIdentityPermission_Intersect_m18284 (ZoneIdentityPermission_t2891 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void ZoneIdentityPermission_FromXml_m18285 (ZoneIdentityPermission_t2891 * __this, SecurityElement_t2401 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ZoneIdentityPermission::ToXml()
extern "C" SecurityElement_t2401 * ZoneIdentityPermission_ToXml_m18286 (ZoneIdentityPermission_t2891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::set_SecurityZone(System.Security.SecurityZone)
extern "C" void ZoneIdentityPermission_set_SecurityZone_m18287 (ZoneIdentityPermission_t2891 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ZoneIdentityPermission System.Security.Permissions.ZoneIdentityPermission::Cast(System.Security.IPermission)
extern "C" ZoneIdentityPermission_t2891 * ZoneIdentityPermission_Cast_m18288 (ZoneIdentityPermission_t2891 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
