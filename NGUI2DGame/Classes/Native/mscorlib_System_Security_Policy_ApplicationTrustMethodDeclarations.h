#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.ApplicationTrust
struct ApplicationTrust_t2416;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t2893;
// System.Security.SecurityElement
struct SecurityElement_t2401;

// System.Void System.Security.Policy.ApplicationTrust::.ctor()
extern "C" void ApplicationTrust__ctor_m18299 (ApplicationTrust_t2416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::get_DefaultGrantSet()
extern "C" PolicyStatement_t2893 * ApplicationTrust_get_DefaultGrantSet_m18300 (ApplicationTrust_t2416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.ApplicationTrust::FromXml(System.Security.SecurityElement)
extern "C" void ApplicationTrust_FromXml_m18301 (ApplicationTrust_t2416 * __this, SecurityElement_t2401 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.ApplicationTrust::ToXml()
extern "C" SecurityElement_t2401 * ApplicationTrust_ToXml_m18302 (ApplicationTrust_t2416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::GetDefaultGrantSet()
extern "C" PolicyStatement_t2893 * ApplicationTrust_GetDefaultGrantSet_m18303 (ApplicationTrust_t2416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
