#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenFOV
struct TweenFOV_t200;
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.GameObject
struct GameObject_t17;

// System.Void TweenFOV::.ctor()
extern "C" void TweenFOV__ctor_m741 (TweenFOV_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TweenFOV::get_cachedCamera()
extern "C" Camera_t7 * TweenFOV_get_cachedCamera_m742 (TweenFOV_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenFOV::get_fov()
extern "C" float TweenFOV_get_fov_m743 (TweenFOV_t200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::set_fov(System.Single)
extern "C" void TweenFOV_set_fov_m744 (TweenFOV_t200 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenFOV_OnUpdate_m745 (TweenFOV_t200 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenFOV TweenFOV::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenFOV_t200 * TweenFOV_Begin_m746 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, float ___duration, float ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
