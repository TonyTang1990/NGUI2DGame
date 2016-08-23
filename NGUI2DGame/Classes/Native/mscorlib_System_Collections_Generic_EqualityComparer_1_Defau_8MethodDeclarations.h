#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t3731;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m22532_gshared (DefaultComparer_t3731 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22532(__this, method) (( void (*) (DefaultComparer_t3731 *, const MethodInfo*))DefaultComparer__ctor_m22532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22533_gshared (DefaultComparer_t3731 * __this, UILineInfo_t524  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m22533(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3731 *, UILineInfo_t524 , const MethodInfo*))DefaultComparer_GetHashCode_m22533_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22534_gshared (DefaultComparer_t3731 * __this, UILineInfo_t524  ___x, UILineInfo_t524  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m22534(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3731 *, UILineInfo_t524 , UILineInfo_t524 , const MethodInfo*))DefaultComparer_Equals_m22534_gshared)(__this, ___x, ___y, method)
