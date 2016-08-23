#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.StrongNameIdentityPermission
struct StrongNameIdentityPermission_t2886;
// System.String
struct String_t;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2884;
// System.Version
struct Version_t1131;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"
// System.Security.Permissions.StrongNameIdentityPermission/SNIP
#include "mscorlib_System_Security_Permissions_StrongNameIdentityPermi.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void StrongNameIdentityPermission__ctor_m18228 (StrongNameIdentityPermission_t2886 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C" void StrongNameIdentityPermission__ctor_m18229 (StrongNameIdentityPermission_t2886 * __this, StrongNamePublicKeyBlob_t2884 * ___blob, String_t* ___name, Version_t1131 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNameIdentityPermission)
extern "C" void StrongNameIdentityPermission__ctor_m18230 (StrongNameIdentityPermission_t2886 * __this, StrongNameIdentityPermission_t2886 * ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.cctor()
extern "C" void StrongNameIdentityPermission__cctor_m18231 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.StrongNameIdentityPermission::get_Name()
extern "C" String_t* StrongNameIdentityPermission_get_Name_m18232 (StrongNameIdentityPermission_t2886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission::get_PublicKey()
extern "C" StrongNamePublicKeyBlob_t2884 * StrongNameIdentityPermission_get_PublicKey_m18233 (StrongNameIdentityPermission_t2886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Permissions.StrongNameIdentityPermission::get_Version()
extern "C" Version_t1131 * StrongNameIdentityPermission_get_Version_m18234 (StrongNameIdentityPermission_t2886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Copy()
extern "C" Object_t * StrongNameIdentityPermission_Copy_m18235 (StrongNameIdentityPermission_t2886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void StrongNameIdentityPermission_FromXml_m18236 (StrongNameIdentityPermission_t2886 * __this, SecurityElement_t2401 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission::FromSecurityElement(System.Security.SecurityElement)
extern "C" SNIP_t2885  StrongNameIdentityPermission_FromSecurityElement_m18237 (StrongNameIdentityPermission_t2886 * __this, SecurityElement_t2401 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * StrongNameIdentityPermission_Intersect_m18238 (StrongNameIdentityPermission_t2886 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool StrongNameIdentityPermission_IsSubsetOf_m18239 (StrongNameIdentityPermission_t2886 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.StrongNameIdentityPermission::ToXml()
extern "C" SecurityElement_t2401 * StrongNameIdentityPermission_ToXml_m18240 (StrongNameIdentityPermission_t2886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::ToSecurityElement(System.Security.SecurityElement,System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C" void StrongNameIdentityPermission_ToSecurityElement_m18241 (StrongNameIdentityPermission_t2886 * __this, SecurityElement_t2401 * ___se, SNIP_t2885  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * StrongNameIdentityPermission_Union_m18242 (StrongNameIdentityPermission_t2886 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsUnrestricted()
extern "C" bool StrongNameIdentityPermission_IsUnrestricted_m18243 (StrongNameIdentityPermission_t2886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Contains(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C" bool StrongNameIdentityPermission_Contains_m18244 (StrongNameIdentityPermission_t2886 * __this, SNIP_t2885  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C" bool StrongNameIdentityPermission_IsEmpty_m18245 (StrongNameIdentityPermission_t2886 * __this, SNIP_t2885  ___snip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty()
extern "C" bool StrongNameIdentityPermission_IsEmpty_m18246 (StrongNameIdentityPermission_t2886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission System.Security.Permissions.StrongNameIdentityPermission::Cast(System.Security.IPermission)
extern "C" StrongNameIdentityPermission_t2886 * StrongNameIdentityPermission_Cast_m18247 (StrongNameIdentityPermission_t2886 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Match(System.String)
extern "C" bool StrongNameIdentityPermission_Match_m18248 (StrongNameIdentityPermission_t2886 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
