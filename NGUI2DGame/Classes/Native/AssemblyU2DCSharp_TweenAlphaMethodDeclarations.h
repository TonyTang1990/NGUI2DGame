#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenAlpha
struct TweenAlpha_t196;
// UnityEngine.GameObject
struct GameObject_t17;

// System.Void TweenAlpha::.ctor()
extern "C" void TweenAlpha__ctor_m729 (TweenAlpha_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenAlpha::get_alpha()
extern "C" float TweenAlpha_get_alpha_m730 (TweenAlpha_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::set_alpha(System.Single)
extern "C" void TweenAlpha_set_alpha_m731 (TweenAlpha_t196 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::Awake()
extern "C" void TweenAlpha_Awake_m732 (TweenAlpha_t196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenAlpha_OnUpdate_m733 (TweenAlpha_t196 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenAlpha TweenAlpha::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenAlpha_t196 * TweenAlpha_Begin_m734 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, float ___duration, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
