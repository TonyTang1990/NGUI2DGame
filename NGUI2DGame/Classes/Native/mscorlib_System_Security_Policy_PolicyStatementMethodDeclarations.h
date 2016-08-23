#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2893;
// System.Security.PermissionSet
struct PermissionSet_t2407;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2802;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyStatementAttribute
#include "mscorlib_System_Security_Policy_PolicyStatementAttribute.h"

// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet)
extern "C" void PolicyStatement__ctor_m18418 (PolicyStatement_t2893 * __this, PermissionSet_t2407 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::.ctor(System.Security.PermissionSet,System.Security.Policy.PolicyStatementAttribute)
extern "C" void PolicyStatement__ctor_m18419 (PolicyStatement_t2893 * __this, PermissionSet_t2407 * ___permSet, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.PolicyStatement::get_PermissionSet()
extern "C" PermissionSet_t2407 * PolicyStatement_get_PermissionSet_m18420 (PolicyStatement_t2893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::set_PermissionSet(System.Security.PermissionSet)
extern "C" void PolicyStatement_set_PermissionSet_m18421 (PolicyStatement_t2893 * __this, PermissionSet_t2407 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::get_Attributes()
extern "C" int32_t PolicyStatement_get_Attributes_m18422 (PolicyStatement_t2893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Copy()
extern "C" PolicyStatement_t2893 * PolicyStatement_Copy_m18423 (PolicyStatement_t2893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement)
extern "C" void PolicyStatement_FromXml_m18424 (PolicyStatement_t2893 * __this, SecurityElement_t2401 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.PolicyStatement::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C" void PolicyStatement_FromXml_m18425 (PolicyStatement_t2893 * __this, SecurityElement_t2401 * ___et, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml()
extern "C" SecurityElement_t2401 * PolicyStatement_ToXml_m18426 (PolicyStatement_t2893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.PolicyStatement::ToXml(System.Security.Policy.PolicyLevel)
extern "C" SecurityElement_t2401 * PolicyStatement_ToXml_m18427 (PolicyStatement_t2893 * __this, PolicyLevel_t2802 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.PolicyStatement::Equals(System.Object)
extern "C" bool PolicyStatement_Equals_m18428 (PolicyStatement_t2893 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.PolicyStatement::GetHashCode()
extern "C" int32_t PolicyStatement_GetHashCode_m18429 (PolicyStatement_t2893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.PolicyStatement::Empty()
extern "C" PolicyStatement_t2893 * PolicyStatement_Empty_m18430 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
