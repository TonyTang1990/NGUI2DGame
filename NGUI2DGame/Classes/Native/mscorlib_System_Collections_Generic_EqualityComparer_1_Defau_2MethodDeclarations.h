#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t3637;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m21267_gshared (DefaultComparer_t3637 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21267(__this, method) (( void (*) (DefaultComparer_t3637 *, const MethodInfo*))DefaultComparer__ctor_m21267_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21268_gshared (DefaultComparer_t3637 * __this, Vector3_t48  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21268(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3637 *, Vector3_t48 , const MethodInfo*))DefaultComparer_GetHashCode_m21268_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21269_gshared (DefaultComparer_t3637 * __this, Vector3_t48  ___x, Vector3_t48  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21269(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3637 *, Vector3_t48 , Vector3_t48 , const MethodInfo*))DefaultComparer_Equals_m21269_gshared)(__this, ___x, ___y, method)
