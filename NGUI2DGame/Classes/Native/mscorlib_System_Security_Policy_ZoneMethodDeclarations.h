#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Zone
struct Zone_t2916;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Security.SecurityZone
#include "mscorlib_System_Security_SecurityZone.h"

// System.Void System.Security.Policy.Zone::.ctor(System.Security.SecurityZone)
extern "C" void Zone__ctor_m18482 (Zone_t2916 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityZone System.Security.Policy.Zone::get_SecurityZone()
extern "C" int32_t Zone_get_SecurityZone_m18483 (Zone_t2916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Zone::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C" Object_t * Zone_CreateIdentityPermission_m18484 (Zone_t2916 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Zone System.Security.Policy.Zone::CreateFromUrl(System.String)
extern "C" Zone_t2916 * Zone_CreateFromUrl_m18485 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Zone::Equals(System.Object)
extern "C" bool Zone_Equals_m18486 (Zone_t2916 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Zone::GetHashCode()
extern "C" int32_t Zone_GetHashCode_m18487 (Zone_t2916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Zone::ToString()
extern "C" String_t* Zone_ToString_m18488 (Zone_t2916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
