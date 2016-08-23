#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
struct DefaultComparer_t3752;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::.ctor()
extern "C" void DefaultComparer__ctor_m22741_gshared (DefaultComparer_t3752 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22741(__this, method) (( void (*) (DefaultComparer_t3752 *, const MethodInfo*))DefaultComparer__ctor_m22741_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22742_gshared (DefaultComparer_t3752 * __this, int64_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m22742(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3752 *, int64_t, const MethodInfo*))DefaultComparer_GetHashCode_m22742_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22743_gshared (DefaultComparer_t3752 * __this, int64_t ___x, int64_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m22743(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3752 *, int64_t, int64_t, const MethodInfo*))DefaultComparer_Equals_m22743_gshared)(__this, ___x, ___y, method)
