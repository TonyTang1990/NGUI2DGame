﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t210;
struct AnimationCurve_t210_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t334;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m1684 (AnimationCurve_t210 * __this, KeyframeU5BU5D_t334* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2677 (AnimationCurve_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2678 (AnimationCurve_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2679 (AnimationCurve_t210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m1685 (AnimationCurve_t210 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2680 (AnimationCurve_t210 * __this, KeyframeU5BU5D_t334* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t210_marshal(const AnimationCurve_t210& unmarshaled, AnimationCurve_t210_marshaled& marshaled);
void AnimationCurve_t210_marshal_back(const AnimationCurve_t210_marshaled& marshaled, AnimationCurve_t210& unmarshaled);
void AnimationCurve_t210_marshal_cleanup(AnimationCurve_t210_marshaled& marshaled);
