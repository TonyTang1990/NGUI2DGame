#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.DefaultValidator
struct DefaultValidator_t1445;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

// System.Void System.Configuration.DefaultValidator::.ctor()
extern "C" void DefaultValidator__ctor_m6741 (DefaultValidator_t1445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DefaultValidator::CanValidate(System.Type)
extern "C" bool DefaultValidator_CanValidate_m6742 (DefaultValidator_t1445 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultValidator::Validate(System.Object)
extern "C" void DefaultValidator_Validate_m6743 (DefaultValidator_t1445 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
