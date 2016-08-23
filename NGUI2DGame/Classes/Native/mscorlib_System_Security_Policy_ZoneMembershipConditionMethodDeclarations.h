#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.ZoneMembershipCondition
struct ZoneMembershipCondition_t2917;
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
// System.Security.SecurityZone
#include "mscorlib_System_Security_SecurityZone.h"

// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor()
extern "C" void ZoneMembershipCondition__ctor_m18489 (ZoneMembershipCondition_t2917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::.ctor(System.Security.SecurityZone)
extern "C" void ZoneMembershipCondition__ctor_m18490 (ZoneMembershipCondition_t2917 * __this, int32_t ___zone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::get_SecurityZone()
extern "C" int32_t ZoneMembershipCondition_get_SecurityZone_m18491 (ZoneMembershipCondition_t2917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::set_SecurityZone(System.Security.SecurityZone)
extern "C" void ZoneMembershipCondition_set_SecurityZone_m18492 (ZoneMembershipCondition_t2917 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C" bool ZoneMembershipCondition_Check_m18493 (ZoneMembershipCondition_t2917 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.ZoneMembershipCondition::Copy()
extern "C" Object_t * ZoneMembershipCondition_Copy_m18494 (ZoneMembershipCondition_t2917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.ZoneMembershipCondition::Equals(System.Object)
extern "C" bool ZoneMembershipCondition_Equals_m18495 (ZoneMembershipCondition_t2917 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C" void ZoneMembershipCondition_FromXml_m18496 (ZoneMembershipCondition_t2917 * __this, SecurityElement_t2401 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ZoneMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void ZoneMembershipCondition_FromXml_m18497 (ZoneMembershipCondition_t2917 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.ZoneMembershipCondition::GetHashCode()
extern "C" int32_t ZoneMembershipCondition_GetHashCode_m18498 (ZoneMembershipCondition_t2917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.ZoneMembershipCondition::ToString()
extern "C" String_t* ZoneMembershipCondition_ToString_m18499 (ZoneMembershipCondition_t2917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml()
extern "C" SecurityElement_t2401 * ZoneMembershipCondition_ToXml_m18500 (ZoneMembershipCondition_t2917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ZoneMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t2401 * ZoneMembershipCondition_ToXml_m18501 (ZoneMembershipCondition_t2917 * __this, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
