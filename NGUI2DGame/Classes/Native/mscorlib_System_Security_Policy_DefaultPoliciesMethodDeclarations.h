#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.DefaultPolicies
struct DefaultPolicies_t2899;
// System.Security.PermissionSet
struct PermissionSet_t2407;
// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t2913;
// System.String
struct String_t;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t2800;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Policy.DefaultPolicies/Key
#include "mscorlib_System_Security_Policy_DefaultPolicies_Key.h"

// System.Void System.Security.Policy.DefaultPolicies::.cctor()
extern "C" void DefaultPolicies__cctor_m18327 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_FullTrust()
extern "C" PermissionSet_t2407 * DefaultPolicies_get_FullTrust_m18328 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_LocalIntranet()
extern "C" PermissionSet_t2407 * DefaultPolicies_get_LocalIntranet_m18329 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Internet()
extern "C" PermissionSet_t2407 * DefaultPolicies_get_Internet_m18330 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_SkipVerification()
extern "C" PermissionSet_t2407 * DefaultPolicies_get_SkipVerification_m18331 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Execution()
extern "C" PermissionSet_t2407 * DefaultPolicies_get_Execution_m18332 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Nothing()
extern "C" PermissionSet_t2407 * DefaultPolicies_get_Nothing_m18333 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Everything()
extern "C" PermissionSet_t2407 * DefaultPolicies_get_Everything_m18334 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.StrongNameMembershipCondition System.Security.Policy.DefaultPolicies::FullTrustMembership(System.String,System.Security.Policy.DefaultPolicies/Key)
extern "C" StrongNameMembershipCondition_t2913 * DefaultPolicies_FullTrustMembership_m18335 (Object_t * __this /* static, unused */, String_t* ___name, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildFullTrust()
extern "C" NamedPermissionSet_t2800 * DefaultPolicies_BuildFullTrust_m18336 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildLocalIntranet()
extern "C" NamedPermissionSet_t2800 * DefaultPolicies_BuildLocalIntranet_m18337 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildInternet()
extern "C" NamedPermissionSet_t2800 * DefaultPolicies_BuildInternet_m18338 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildSkipVerification()
extern "C" NamedPermissionSet_t2800 * DefaultPolicies_BuildSkipVerification_m18339 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildExecution()
extern "C" NamedPermissionSet_t2800 * DefaultPolicies_BuildExecution_m18340 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildNothing()
extern "C" NamedPermissionSet_t2800 * DefaultPolicies_BuildNothing_m18341 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildEverything()
extern "C" NamedPermissionSet_t2800 * DefaultPolicies_BuildEverything_m18342 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.DefaultPolicies::PrintingPermission(System.String)
extern "C" SecurityElement_t2401 * DefaultPolicies_PrintingPermission_m18343 (Object_t * __this /* static, unused */, String_t* ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
