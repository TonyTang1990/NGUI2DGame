#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenRotation
struct TweenRotation_t203;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void TweenRotation::.ctor()
extern "C" void TweenRotation__ctor_m759 (TweenRotation_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenRotation::get_cachedTransform()
extern "C" Transform_t8 * TweenRotation_get_cachedTransform_m760 (TweenRotation_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_rotation()
extern "C" Quaternion_t50  TweenRotation_get_rotation_m761 (TweenRotation_t203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_rotation(UnityEngine.Quaternion)
extern "C" void TweenRotation_set_rotation_m762 (TweenRotation_t203 * __this, Quaternion_t50  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenRotation_OnUpdate_m763 (TweenRotation_t203 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenRotation TweenRotation::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Quaternion)
extern "C" TweenRotation_t203 * TweenRotation_Begin_m764 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, float ___duration, Quaternion_t50  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
