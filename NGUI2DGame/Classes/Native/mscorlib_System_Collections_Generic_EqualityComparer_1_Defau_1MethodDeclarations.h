#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>
struct DefaultComparer_t3628;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::.ctor()
extern "C" void DefaultComparer__ctor_m21217_gshared (DefaultComparer_t3628 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21217(__this, method) (( void (*) (DefaultComparer_t3628 *, const MethodInfo*))DefaultComparer__ctor_m21217_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21218_gshared (DefaultComparer_t3628 * __this, Color_t25  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21218(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3628 *, Color_t25 , const MethodInfo*))DefaultComparer_GetHashCode_m21218_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21219_gshared (DefaultComparer_t3628 * __this, Color_t25  ___x, Color_t25  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21219(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3628 *, Color_t25 , Color_t25 , const MethodInfo*))DefaultComparer_Equals_m21219_gshared)(__this, ___x, ___y, method)
