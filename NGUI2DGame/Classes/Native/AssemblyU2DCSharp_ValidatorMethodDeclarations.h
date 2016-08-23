#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Validator
struct Validator_t284;
// System.String
struct String_t;

// System.Void Validator::.ctor()
extern "C" void Validator__ctor_m1233 (Validator_t284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Validator::.cctor()
extern "C" void Validator__cctor_m1234 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Validator::IsValide(System.String,System.String)
extern "C" bool Validator_IsValide_m1235 (Validator_t284 * __this, String_t* ___value, String_t* ___minvalidepatterns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
