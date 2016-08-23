#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.MembershipConditionHelper
struct MembershipConditionHelper_t2905;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Security.Policy.MembershipConditionHelper::.cctor()
extern "C" void MembershipConditionHelper__cctor_m18387 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.MembershipConditionHelper::CheckSecurityElement(System.Security.SecurityElement,System.String,System.Int32,System.Int32)
extern "C" int32_t MembershipConditionHelper_CheckSecurityElement_m18388 (Object_t * __this /* static, unused */, SecurityElement_t2401 * ___se, String_t* ___parameterName, int32_t ___minimumVersion, int32_t ___maximumVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.MembershipConditionHelper::Element(System.Type,System.Int32)
extern "C" SecurityElement_t2401 * MembershipConditionHelper_Element_m18389 (Object_t * __this /* static, unused */, Type_t * ___type, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
