﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t3646;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m21332_gshared (DefaultComparer_t3646 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21332(__this, method) (( void (*) (DefaultComparer_t3646 *, const MethodInfo*))DefaultComparer__ctor_m21332_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21333_gshared (DefaultComparer_t3646 * __this, Vector2_t55  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21333(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3646 *, Vector2_t55 , const MethodInfo*))DefaultComparer_GetHashCode_m21333_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21334_gshared (DefaultComparer_t3646 * __this, Vector2_t55  ___x, Vector2_t55  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21334(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3646 *, Vector2_t55 , Vector2_t55 , const MethodInfo*))DefaultComparer_Equals_m21334_gshared)(__this, ___x, ___y, method)
