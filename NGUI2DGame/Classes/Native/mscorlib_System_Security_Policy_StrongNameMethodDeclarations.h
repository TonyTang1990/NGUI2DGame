#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.StrongName
struct StrongName_t2912;
// System.String
struct String_t;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2884;
// System.Version
struct Version_t1131;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.Object
struct Object_t;

// System.Void System.Security.Policy.StrongName::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C" void StrongName__ctor_m18446 (StrongName_t2912 * __this, StrongNamePublicKeyBlob_t2884 * ___blob, String_t* ___name, Version_t1131 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::get_Name()
extern "C" String_t* StrongName_get_Name_m18447 (StrongName_t2912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::get_PublicKey()
extern "C" StrongNamePublicKeyBlob_t2884 * StrongName_get_PublicKey_m18448 (StrongName_t2912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongName::get_Version()
extern "C" Version_t1131 * StrongName_get_Version_m18449 (StrongName_t2912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.StrongName::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C" Object_t * StrongName_CreateIdentityPermission_m18450 (StrongName_t2912 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongName::Equals(System.Object)
extern "C" bool StrongName_Equals_m18451 (StrongName_t2912 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongName::GetHashCode()
extern "C" int32_t StrongName_GetHashCode_m18452 (StrongName_t2912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::ToString()
extern "C" String_t* StrongName_ToString_m18453 (StrongName_t2912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
