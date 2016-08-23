#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.PublisherIdentityPermission
struct PublisherIdentityPermission_t2876;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1320;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void PublisherIdentityPermission__ctor_m18158 (PublisherIdentityPermission_t2876 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void PublisherIdentityPermission__ctor_m18159 (PublisherIdentityPermission_t2876 * __this, X509Certificate_t1320 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::set_Certificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void PublisherIdentityPermission_set_Certificate_m18160 (PublisherIdentityPermission_t2876 * __this, X509Certificate_t1320 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Copy()
extern "C" Object_t * PublisherIdentityPermission_Copy_m18161 (PublisherIdentityPermission_t2876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C" void PublisherIdentityPermission_FromXml_m18162 (PublisherIdentityPermission_t2876 * __this, SecurityElement_t2401 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * PublisherIdentityPermission_Intersect_m18163 (PublisherIdentityPermission_t2876 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.PublisherIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool PublisherIdentityPermission_IsSubsetOf_m18164 (PublisherIdentityPermission_t2876 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.PublisherIdentityPermission::ToXml()
extern "C" SecurityElement_t2401 * PublisherIdentityPermission_ToXml_m18165 (PublisherIdentityPermission_t2876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Union(System.Security.IPermission)
extern "C" Object_t * PublisherIdentityPermission_Union_m18166 (PublisherIdentityPermission_t2876 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.PublisherIdentityPermission System.Security.Permissions.PublisherIdentityPermission::Cast(System.Security.IPermission)
extern "C" PublisherIdentityPermission_t2876 * PublisherIdentityPermission_Cast_m18167 (PublisherIdentityPermission_t2876 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
