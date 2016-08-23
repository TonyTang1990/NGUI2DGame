#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationState
struct AnimationState_t305;
// UnityEngine.AnimationClip
struct AnimationClip_t57;
// System.String
struct String_t;

// System.Single UnityEngine.AnimationState::get_time()
extern "C" float AnimationState_get_time_m1511 (AnimationState_t305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::set_time(System.Single)
extern "C" void AnimationState_set_time_m1513 (AnimationState_t305 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationState::get_speed()
extern "C" float AnimationState_get_speed_m1514 (AnimationState_t305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
extern "C" void AnimationState_set_speed_m1518 (AnimationState_t305 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationState::get_length()
extern "C" float AnimationState_get_length_m1512 (AnimationState_t305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationState::set_layer(System.Int32)
extern "C" void AnimationState_set_layer_m1345 (AnimationState_t305 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationClip UnityEngine.AnimationState::get_clip()
extern "C" AnimationClip_t57 * AnimationState_get_clip_m1343 (AnimationState_t305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationState::get_name()
extern "C" String_t* AnimationState_get_name_m1509 (AnimationState_t305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
