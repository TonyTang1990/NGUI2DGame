#pragma once
#include <stdint.h>
// ActiveAnimation/OnFinished
struct OnFinished_t90;
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t56;
// IgnoreTimeScale
#include "AssemblyU2DCSharp_IgnoreTimeScale.h"
// AnimationOrTween.Direction
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
// ActiveAnimation
struct  ActiveAnimation_t146  : public IgnoreTimeScale_t54
{
	// ActiveAnimation/OnFinished ActiveAnimation::onFinished
	OnFinished_t90 * ___onFinished_7;
	// UnityEngine.GameObject ActiveAnimation::eventReceiver
	GameObject_t17 * ___eventReceiver_8;
	// System.String ActiveAnimation::callWhenFinished
	String_t* ___callWhenFinished_9;
	// UnityEngine.Animation ActiveAnimation::mAnim
	Animation_t56 * ___mAnim_10;
	// AnimationOrTween.Direction ActiveAnimation::mLastDirection
	int32_t ___mLastDirection_11;
	// AnimationOrTween.Direction ActiveAnimation::mDisableDirection
	int32_t ___mDisableDirection_12;
	// System.Boolean ActiveAnimation::mNotify
	bool ___mNotify_13;
};
