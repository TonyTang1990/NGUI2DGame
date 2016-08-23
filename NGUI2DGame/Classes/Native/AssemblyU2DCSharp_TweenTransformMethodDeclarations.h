#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenTransform
struct TweenTransform_t205;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Transform
struct Transform_t8;

// System.Void TweenTransform::.ctor()
extern "C" void TweenTransform__ctor_m771 (TweenTransform_t205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenTransform::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenTransform_OnUpdate_m772 (TweenTransform_t205 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform)
extern "C" TweenTransform_t205 * TweenTransform_Begin_m773 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, float ___duration, Transform_t8 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform,UnityEngine.Transform)
extern "C" TweenTransform_t205 * TweenTransform_Begin_m774 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, float ___duration, Transform_t8 * ___from, Transform_t8 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
