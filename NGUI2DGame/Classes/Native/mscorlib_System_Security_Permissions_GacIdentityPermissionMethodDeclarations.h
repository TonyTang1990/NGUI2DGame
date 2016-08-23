#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.GacIdentityPermission
struct GacIdentityPermission_t2866;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.SecurityElement
struct SecurityElement_t2401;

// System.Void System.Security.Permissions.GacIdentityPermission::.ctor()
extern "C" void GacIdentityPermission__ctor_m18109 (GacIdentityPermission_t2866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Copy()
extern "C" Object_t * GacIdentityPermission_Copy_m18110 (GacIdentityPermission_t2866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * GacIdentityPermission_Intersect_m18111 (GacIdentityPermission_t2866 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.GacIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool GacIdentityPermission_IsSubsetOf_m18112 (GacIdentityPermission_t2866 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * GacIdentityPermission_Union_m18113 (GacIdentityPermission_t2866 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.GacIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void GacIdentityPermission_FromXml_m18114 (GacIdentityPermission_t2866 * __this, SecurityElement_t2401 * ___securityElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.GacIdentityPermission::ToXml()
extern "C" SecurityElement_t2401 * GacIdentityPermission_ToXml_m18115 (GacIdentityPermission_t2866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.GacIdentityPermission System.Security.Permissions.GacIdentityPermission::Cast(System.Security.IPermission)
extern "C" GacIdentityPermission_t2866 * GacIdentityPermission_Cast_m18116 (GacIdentityPermission_t2866 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
