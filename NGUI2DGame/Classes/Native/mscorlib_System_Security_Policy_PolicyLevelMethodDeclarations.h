#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2802;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t2800;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2893;
// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.Reflection.Assembly
struct Assembly_t1120;
// System.Security.PolicyLevelType
#include "mscorlib_System_Security_PolicyLevelType.h"

// System.Void System.Security.Policy.PolicyLevel::.ctor(System.String,System.Security.PolicyLevelType)
extern "C" void PolicyLevel__ctor_m18405 (PolicyLevel_t2802 * __this, String_t* ___label, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::LoadFromFile(System.String)
extern "C" void PolicyLevel_LoadFromFile_m18406 (PolicyLevel_t2802 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::FromString(System.String)
extern "C" SecurityElement_t2401 * PolicyLevel_FromString_m18407 (PolicyLevel_t2802 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::FromXml(System.Security.SecurityElement)
extern "C" void PolicyLevel_FromXml_m18408 (PolicyLevel_t2802 * __this, SecurityElement_t2401 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.PolicyLevel::GetNamedPermissionSet(System.String)
extern "C" NamedPermissionSet_t2800 * PolicyLevel_GetNamedPermissionSet_m18409 (PolicyLevel_t2802 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyLevel::Resolve(System.Security.Policy.Evidence)
extern "C" PolicyStatement_t2893 * PolicyLevel_Resolve_m18410 (PolicyLevel_t2802 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyLevel::ToXml()
extern "C" SecurityElement_t2401 * PolicyLevel_ToXml_m18411 (PolicyLevel_t2802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::Save()
extern "C" void PolicyLevel_Save_m18412 (PolicyLevel_t2802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultLevel(System.Security.PolicyLevelType)
extern "C" void PolicyLevel_CreateDefaultLevel_m18413 (PolicyLevel_t2802 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultFullTrustAssemblies()
extern "C" void PolicyLevel_CreateDefaultFullTrustAssemblies_m18414 (PolicyLevel_t2802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyLevel::CreateDefaultNamedPermissionSets()
extern "C" void PolicyLevel_CreateDefaultNamedPermissionSets_m18415 (PolicyLevel_t2802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.PolicyLevel::ResolveClassName(System.String)
extern "C" String_t* PolicyLevel_ResolveClassName_m18416 (PolicyLevel_t2802 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyLevel::IsFullTrustAssembly(System.Reflection.Assembly)
extern "C" bool PolicyLevel_IsFullTrustAssembly_m18417 (PolicyLevel_t2802 * __this, Assembly_t1120 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
