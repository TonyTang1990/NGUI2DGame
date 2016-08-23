#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.NetCodeGroup
struct NetCodeGroup_t2906;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t2896;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2802;
// System.Security.Policy.CodeGroup
struct CodeGroup_t2897;
// System.Security.Policy.CodeConnectAccess[]
struct CodeConnectAccessU5BU5D_t3005;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2893;
// System.Security.Policy.Evidence
struct Evidence_t2406;

// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.Policy.IMembershipCondition)
extern "C" void NetCodeGroup__ctor_m18390 (NetCodeGroup_t2906 * __this, Object_t * ___membershipCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup__ctor_m18391 (NetCodeGroup_t2906 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.cctor()
extern "C" void NetCodeGroup__cctor_m18392 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.NetCodeGroup::Copy()
extern "C" CodeGroup_t2897 * NetCodeGroup_Copy_m18393 (NetCodeGroup_t2906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Security.Policy.CodeConnectAccess[],System.Security.Policy.CodeConnectAccess[])
extern "C" bool NetCodeGroup_Equals_m18394 (NetCodeGroup_t2906 * __this, CodeConnectAccessU5BU5D_t3005* ___rules1, CodeConnectAccessU5BU5D_t3005* ___rules2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Object)
extern "C" bool NetCodeGroup_Equals_m18395 (NetCodeGroup_t2906 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.NetCodeGroup::GetHashCode()
extern "C" int32_t NetCodeGroup_GetHashCode_m18396 (NetCodeGroup_t2906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.NetCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t2893 * NetCodeGroup_Resolve_m18397 (NetCodeGroup_t2906 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup_CreateXml_m18398 (NetCodeGroup_t2906 * __this, SecurityElement_t2401 * ___element, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void NetCodeGroup_ParseXml_m18399 (NetCodeGroup_t2906 * __this, SecurityElement_t2401 * ___e, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
