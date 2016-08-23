#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenPosition
struct TweenPosition_t202;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TweenPosition::.ctor()
extern "C" void TweenPosition__ctor_m753 (TweenPosition_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenPosition::get_cachedTransform()
extern "C" Transform_t8 * TweenPosition_get_cachedTransform_m754 (TweenPosition_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenPosition::get_position()
extern "C" Vector3_t48  TweenPosition_get_position_m755 (TweenPosition_t202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::set_position(UnityEngine.Vector3)
extern "C" void TweenPosition_set_position_m756 (TweenPosition_t202 * __this, Vector3_t48  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenPosition_OnUpdate_m757 (TweenPosition_t202 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenPosition TweenPosition::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
extern "C" TweenPosition_t202 * TweenPosition_Begin_m758 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, float ___duration, Vector3_t48  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
