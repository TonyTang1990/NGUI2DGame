#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.FirstMatchCodeGroup
struct FirstMatchCodeGroup_t2902;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t2896;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2893;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2802;
// System.Security.Policy.CodeGroup
struct CodeGroup_t2897;
// System.Security.Policy.Evidence
struct Evidence_t2406;

// System.Void System.Security.Policy.FirstMatchCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C" void FirstMatchCodeGroup__ctor_m18371 (FirstMatchCodeGroup_t2902 * __this, Object_t * ___membershipCondition, PolicyStatement_t2893 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FirstMatchCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void FirstMatchCodeGroup__ctor_m18372 (FirstMatchCodeGroup_t2902 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FirstMatchCodeGroup::Copy()
extern "C" CodeGroup_t2897 * FirstMatchCodeGroup_Copy_m18373 (FirstMatchCodeGroup_t2902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FirstMatchCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t2893 * FirstMatchCodeGroup_Resolve_m18374 (FirstMatchCodeGroup_t2902 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.FirstMatchCodeGroup System.Security.Policy.FirstMatchCodeGroup::CopyNoChildren()
extern "C" FirstMatchCodeGroup_t2902 * FirstMatchCodeGroup_CopyNoChildren_m18375 (FirstMatchCodeGroup_t2902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
