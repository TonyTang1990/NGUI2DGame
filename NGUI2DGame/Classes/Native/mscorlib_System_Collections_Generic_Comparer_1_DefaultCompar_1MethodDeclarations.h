#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Color>
struct DefaultComparer_t3630;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Color>::.ctor()
extern "C" void DefaultComparer__ctor_m21224_gshared (DefaultComparer_t3630 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21224(__this, method) (( void (*) (DefaultComparer_t3630 *, const MethodInfo*))DefaultComparer__ctor_m21224_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Color>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m21225_gshared (DefaultComparer_t3630 * __this, Color_t25  ___x, Color_t25  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m21225(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3630 *, Color_t25 , Color_t25 , const MethodInfo*))DefaultComparer_Compare_m21225_gshared)(__this, ___x, ___y, method)
