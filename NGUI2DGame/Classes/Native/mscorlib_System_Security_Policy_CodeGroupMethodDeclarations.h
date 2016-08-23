#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.CodeGroup
struct CodeGroup_t2897;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2893;
// System.String
struct String_t;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t2896;
// System.Collections.IList
struct IList_t794;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2802;
// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.Object
struct Object_t;

// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C" void CodeGroup__ctor_m18307 (CodeGroup_t2897 * __this, Object_t * ___membershipCondition, PolicyStatement_t2893 * ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup__ctor_m18308 (CodeGroup_t2897 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.CodeGroup::Copy()
// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::Resolve(System.Security.Policy.Evidence)
// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::get_PolicyStatement()
extern "C" PolicyStatement_t2893 * CodeGroup_get_PolicyStatement_m18309 (CodeGroup_t2897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_PolicyStatement(System.Security.Policy.PolicyStatement)
extern "C" void CodeGroup_set_PolicyStatement_m18310 (CodeGroup_t2897 * __this, PolicyStatement_t2893 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Description()
extern "C" String_t* CodeGroup_get_Description_m18311 (CodeGroup_t2897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Description(System.String)
extern "C" void CodeGroup_set_Description_m18312 (CodeGroup_t2897 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::get_MembershipCondition()
extern "C" Object_t * CodeGroup_get_MembershipCondition_m18313 (CodeGroup_t2897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.CodeGroup::get_Name()
extern "C" String_t* CodeGroup_get_Name_m18314 (CodeGroup_t2897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::set_Name(System.String)
extern "C" void CodeGroup_set_Name_m18315 (CodeGroup_t2897 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Security.Policy.CodeGroup::get_Children()
extern "C" Object_t * CodeGroup_get_Children_m18316 (CodeGroup_t2897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::AddChild(System.Security.Policy.CodeGroup)
extern "C" void CodeGroup_AddChild_m18317 (CodeGroup_t2897 * __this, CodeGroup_t2897 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Object)
extern "C" bool CodeGroup_Equals_m18318 (CodeGroup_t2897 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.CodeGroup::Equals(System.Security.Policy.CodeGroup,System.Boolean)
extern "C" bool CodeGroup_Equals_m18319 (CodeGroup_t2897 * __this, CodeGroup_t2897 * ___cg, bool ___compareChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.CodeGroup::GetHashCode()
extern "C" int32_t CodeGroup_GetHashCode_m18320 (CodeGroup_t2897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup_FromXml_m18321 (CodeGroup_t2897 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup_ParseXml_m18322 (CodeGroup_t2897 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml()
extern "C" SecurityElement_t2401 * CodeGroup_ToXml_m18323 (CodeGroup_t2897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.CodeGroup::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t2401 * CodeGroup_ToXml_m18324 (CodeGroup_t2897 * __this, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.CodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void CodeGroup_CreateXml_m18325 (CodeGroup_t2897 * __this, SecurityElement_t2401 * ___element, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.CodeGroup::CreateFromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" CodeGroup_t2897 * CodeGroup_CreateFromXml_m18326 (Object_t * __this /* static, unused */, SecurityElement_t2401 * ___se, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
