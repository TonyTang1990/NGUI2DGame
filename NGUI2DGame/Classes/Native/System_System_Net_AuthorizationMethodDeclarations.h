#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Authorization
struct Authorization_t1967;
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t1966;

// System.String System.Net.Authorization::get_Message()
extern "C" String_t* Authorization_get_Message_m10910 (Authorization_t1967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Authorization::get_Complete()
extern "C" bool Authorization_get_Complete_m10911 (Authorization_t1967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Authorization::get_Module()
extern "C" Object_t * Authorization_get_Module_m10912 (Authorization_t1967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_Module(System.Net.IAuthenticationModule)
extern "C" void Authorization_set_Module_m10913 (Authorization_t1967 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
