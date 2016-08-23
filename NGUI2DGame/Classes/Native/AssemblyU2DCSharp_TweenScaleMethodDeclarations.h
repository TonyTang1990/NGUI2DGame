#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenScale
struct TweenScale_t204;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TweenScale::.ctor()
extern "C" void TweenScale__ctor_m765 (TweenScale_t204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenScale::get_cachedTransform()
extern "C" Transform_t8 * TweenScale_get_cachedTransform_m766 (TweenScale_t204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenScale::get_scale()
extern "C" Vector3_t48  TweenScale_get_scale_m767 (TweenScale_t204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::set_scale(UnityEngine.Vector3)
extern "C" void TweenScale_set_scale_m768 (TweenScale_t204 * __this, Vector3_t48  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenScale_OnUpdate_m769 (TweenScale_t204 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenScale TweenScale::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
extern "C" TweenScale_t204 * TweenScale_Begin_m770 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, float ___duration, Vector3_t48  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
