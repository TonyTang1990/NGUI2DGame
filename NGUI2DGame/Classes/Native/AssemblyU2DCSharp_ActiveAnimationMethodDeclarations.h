#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ActiveAnimation
struct ActiveAnimation_t146;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t56;
// AnimationOrTween.Direction
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
// AnimationOrTween.EnableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition.h"
// AnimationOrTween.DisableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition.h"

// System.Void ActiveAnimation::.ctor()
extern "C" void ActiveAnimation__ctor_m446 (ActiveAnimation_t146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ActiveAnimation::get_isPlaying()
extern "C" bool ActiveAnimation_get_isPlaying_m447 (ActiveAnimation_t146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Reset()
extern "C" void ActiveAnimation_Reset_m448 (ActiveAnimation_t146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Update()
extern "C" void ActiveAnimation_Update_m449 (ActiveAnimation_t146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Play(System.String,AnimationOrTween.Direction)
extern "C" void ActiveAnimation_Play_m450 (ActiveAnimation_t146 * __this, String_t* ___clipName, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction,AnimationOrTween.EnableCondition,AnimationOrTween.DisableCondition)
extern "C" ActiveAnimation_t146 * ActiveAnimation_Play_m451 (Object_t * __this /* static, unused */, Animation_t56 * ___anim, String_t* ___clipName, int32_t ___playDirection, int32_t ___enableBeforePlay, int32_t ___disableCondition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction)
extern "C" ActiveAnimation_t146 * ActiveAnimation_Play_m452 (Object_t * __this /* static, unused */, Animation_t56 * ___anim, String_t* ___clipName, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,AnimationOrTween.Direction)
extern "C" ActiveAnimation_t146 * ActiveAnimation_Play_m453 (Object_t * __this /* static, unused */, Animation_t56 * ___anim, int32_t ___playDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
