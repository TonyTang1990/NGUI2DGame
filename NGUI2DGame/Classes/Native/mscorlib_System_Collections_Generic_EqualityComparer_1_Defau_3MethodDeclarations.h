#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
struct DefaultComparer_t3642;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::.ctor()
extern "C" void DefaultComparer__ctor_m21302_gshared (DefaultComparer_t3642 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21302(__this, method) (( void (*) (DefaultComparer_t3642 *, const MethodInfo*))DefaultComparer__ctor_m21302_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21303_gshared (DefaultComparer_t3642 * __this, Vector4_t175  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21303(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3642 *, Vector4_t175 , const MethodInfo*))DefaultComparer_GetHashCode_m21303_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21304_gshared (DefaultComparer_t3642 * __this, Vector4_t175  ___x, Vector4_t175  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21304(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3642 *, Vector4_t175 , Vector4_t175 , const MethodInfo*))DefaultComparer_Equals_m21304_gshared)(__this, ___x, ___y, method)
