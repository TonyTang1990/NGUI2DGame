#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Url
struct Url_t2915;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.Object
struct Object_t;

// System.Void System.Security.Policy.Url::.ctor(System.String)
extern "C" void Url__ctor_m18474 (Url_t2915 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Url::.ctor(System.String,System.Boolean)
extern "C" void Url__ctor_m18475 (Url_t2915 * __this, String_t* ___name, bool ___validated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Url::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C" Object_t * Url_CreateIdentityPermission_m18476 (Url_t2915 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Url::Equals(System.Object)
extern "C" bool Url_Equals_m18477 (Url_t2915 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Url::GetHashCode()
extern "C" int32_t Url_GetHashCode_m18478 (Url_t2915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::ToString()
extern "C" String_t* Url_ToString_m18479 (Url_t2915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::get_Value()
extern "C" String_t* Url_get_Value_m18480 (Url_t2915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Url::Prepare(System.String)
extern "C" String_t* Url_Prepare_m18481 (Url_t2915 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
