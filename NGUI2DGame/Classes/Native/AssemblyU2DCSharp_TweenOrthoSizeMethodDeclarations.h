#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenOrthoSize
struct TweenOrthoSize_t201;
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.GameObject
struct GameObject_t17;

// System.Void TweenOrthoSize::.ctor()
extern "C" void TweenOrthoSize__ctor_m747 (TweenOrthoSize_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TweenOrthoSize::get_cachedCamera()
extern "C" Camera_t7 * TweenOrthoSize_get_cachedCamera_m748 (TweenOrthoSize_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenOrthoSize::get_orthoSize()
extern "C" float TweenOrthoSize_get_orthoSize_m749 (TweenOrthoSize_t201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::set_orthoSize(System.Single)
extern "C" void TweenOrthoSize_set_orthoSize_m750 (TweenOrthoSize_t201 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenOrthoSize_OnUpdate_m751 (TweenOrthoSize_t201 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenOrthoSize TweenOrthoSize::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenOrthoSize_t201 * TweenOrthoSize_Begin_m752 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, float ___duration, float ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
