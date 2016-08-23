#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t2913;
// System.String
struct String_t;
// System.Version
struct Version_t1131;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2884;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t2896;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2802;

// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C" void StrongNameMembershipCondition__ctor_m18454 (StrongNameMembershipCondition_t2913 * __this, StrongNamePublicKeyBlob_t2884 * ___blob, String_t* ___name, Version_t1131 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.SecurityElement)
extern "C" void StrongNameMembershipCondition__ctor_m18455 (StrongNameMembershipCondition_t2913 * __this, SecurityElement_t2401 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor()
extern "C" void StrongNameMembershipCondition__ctor_m18456 (StrongNameMembershipCondition_t2913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::get_Name()
extern "C" String_t* StrongNameMembershipCondition_get_Name_m18457 (StrongNameMembershipCondition_t2913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongNameMembershipCondition::get_Version()
extern "C" Version_t1131 * StrongNameMembershipCondition_get_Version_m18458 (StrongNameMembershipCondition_t2913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::get_PublicKey()
extern "C" StrongNamePublicKeyBlob_t2884 * StrongNameMembershipCondition_get_PublicKey_m18459 (StrongNameMembershipCondition_t2913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C" bool StrongNameMembershipCondition_Check_m18460 (StrongNameMembershipCondition_t2913 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.StrongNameMembershipCondition::Copy()
extern "C" Object_t * StrongNameMembershipCondition_Copy_m18461 (StrongNameMembershipCondition_t2913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Equals(System.Object)
extern "C" bool StrongNameMembershipCondition_Equals_m18462 (StrongNameMembershipCondition_t2913 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongNameMembershipCondition::GetHashCode()
extern "C" int32_t StrongNameMembershipCondition_GetHashCode_m18463 (StrongNameMembershipCondition_t2913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C" void StrongNameMembershipCondition_FromXml_m18464 (StrongNameMembershipCondition_t2913 * __this, SecurityElement_t2401 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void StrongNameMembershipCondition_FromXml_m18465 (StrongNameMembershipCondition_t2913 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::ToString()
extern "C" String_t* StrongNameMembershipCondition_ToString_m18466 (StrongNameMembershipCondition_t2913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml()
extern "C" SecurityElement_t2401 * StrongNameMembershipCondition_ToXml_m18467 (StrongNameMembershipCondition_t2913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t2401 * StrongNameMembershipCondition_ToXml_m18468 (StrongNameMembershipCondition_t2913 * __this, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
