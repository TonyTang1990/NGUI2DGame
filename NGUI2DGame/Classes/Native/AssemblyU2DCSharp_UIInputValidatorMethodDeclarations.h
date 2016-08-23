#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIInputValidator
struct UIInputValidator_t125;
// System.String
struct String_t;

// System.Void UIInputValidator::.ctor()
extern "C" void UIInputValidator__ctor_m337 (UIInputValidator_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInputValidator::Start()
extern "C" void UIInputValidator_Start_m338 (UIInputValidator_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInputValidator::Validate(System.String,System.Char)
extern "C" uint16_t UIInputValidator_Validate_m339 (UIInputValidator_t125 * __this, String_t* ___text, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
