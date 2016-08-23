#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.AllMembershipCondition
struct AllMembershipCondition_t2892;
// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t2896;
// System.Object
struct Object_t;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2802;
// System.String
struct String_t;

// System.Void System.Security.Policy.AllMembershipCondition::.ctor()
extern "C" void AllMembershipCondition__ctor_m18289 (AllMembershipCondition_t2892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C" bool AllMembershipCondition_Check_m18290 (AllMembershipCondition_t2892 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.AllMembershipCondition::Copy()
extern "C" Object_t * AllMembershipCondition_Copy_m18291 (AllMembershipCondition_t2892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.AllMembershipCondition::Equals(System.Object)
extern "C" bool AllMembershipCondition_Equals_m18292 (AllMembershipCondition_t2892 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C" void AllMembershipCondition_FromXml_m18293 (AllMembershipCondition_t2892 * __this, SecurityElement_t2401 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.AllMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void AllMembershipCondition_FromXml_m18294 (AllMembershipCondition_t2892 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.AllMembershipCondition::GetHashCode()
extern "C" int32_t AllMembershipCondition_GetHashCode_m18295 (AllMembershipCondition_t2892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.AllMembershipCondition::ToString()
extern "C" String_t* AllMembershipCondition_ToString_m18296 (AllMembershipCondition_t2892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml()
extern "C" SecurityElement_t2401 * AllMembershipCondition_ToXml_m18297 (AllMembershipCondition_t2892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.AllMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t2401 * AllMembershipCondition_ToXml_m18298 (AllMembershipCondition_t2892 * __this, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
