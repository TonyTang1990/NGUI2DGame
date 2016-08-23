#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.UrlIdentityPermission
struct UrlIdentityPermission_t2890;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void UrlIdentityPermission__ctor_m18268 (UrlIdentityPermission_t2890 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::.ctor(System.String)
extern "C" void UrlIdentityPermission__ctor_m18269 (UrlIdentityPermission_t2890 * __this, String_t* ___site, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::set_Url(System.String)
extern "C" void UrlIdentityPermission_set_Url_m18270 (UrlIdentityPermission_t2890 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Copy()
extern "C" Object_t * UrlIdentityPermission_Copy_m18271 (UrlIdentityPermission_t2890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UrlIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void UrlIdentityPermission_FromXml_m18272 (UrlIdentityPermission_t2890 * __this, SecurityElement_t2401 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * UrlIdentityPermission_Intersect_m18273 (UrlIdentityPermission_t2890 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool UrlIdentityPermission_IsSubsetOf_m18274 (UrlIdentityPermission_t2890 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.UrlIdentityPermission::ToXml()
extern "C" SecurityElement_t2401 * UrlIdentityPermission_ToXml_m18275 (UrlIdentityPermission_t2890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UrlIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * UrlIdentityPermission_Union_m18276 (UrlIdentityPermission_t2890 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::IsEmpty()
extern "C" bool UrlIdentityPermission_IsEmpty_m18277 (UrlIdentityPermission_t2890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.UrlIdentityPermission System.Security.Permissions.UrlIdentityPermission::Cast(System.Security.IPermission)
extern "C" UrlIdentityPermission_t2890 * UrlIdentityPermission_Cast_m18278 (UrlIdentityPermission_t2890 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UrlIdentityPermission::Match(System.String)
extern "C" bool UrlIdentityPermission_Match_m18279 (UrlIdentityPermission_t2890 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
