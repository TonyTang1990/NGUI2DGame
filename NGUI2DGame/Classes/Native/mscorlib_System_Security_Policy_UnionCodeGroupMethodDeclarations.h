#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.UnionCodeGroup
struct UnionCodeGroup_t2914;
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

// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C" void UnionCodeGroup__ctor_m18469 (UnionCodeGroup_t2914 * __this, Object_t * ___membershipCondition, PolicyStatement_t2893 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void UnionCodeGroup__ctor_m18470 (UnionCodeGroup_t2914 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy()
extern "C" CodeGroup_t2897 * UnionCodeGroup_Copy_m18471 (UnionCodeGroup_t2914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy(System.Boolean)
extern "C" CodeGroup_t2897 * UnionCodeGroup_Copy_m18472 (UnionCodeGroup_t2914 * __this, bool ___childs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.UnionCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t2893 * UnionCodeGroup_Resolve_m18473 (UnionCodeGroup_t2914 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
