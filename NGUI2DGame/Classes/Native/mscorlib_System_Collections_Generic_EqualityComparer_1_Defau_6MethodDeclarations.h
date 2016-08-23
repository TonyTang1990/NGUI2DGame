#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t3717;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m22394_gshared (DefaultComparer_t3717 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22394(__this, method) (( void (*) (DefaultComparer_t3717 *, const MethodInfo*))DefaultComparer__ctor_m22394_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22395_gshared (DefaultComparer_t3717 * __this, UIVertex_t532  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m22395(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3717 *, UIVertex_t532 , const MethodInfo*))DefaultComparer_GetHashCode_m22395_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22396_gshared (DefaultComparer_t3717 * __this, UIVertex_t532  ___x, UIVertex_t532  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m22396(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3717 *, UIVertex_t532 , UIVertex_t532 , const MethodInfo*))DefaultComparer_Equals_m22396_gshared)(__this, ___x, ___y, method)
