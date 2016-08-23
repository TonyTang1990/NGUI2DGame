#pragma once
#include <stdint.h>
// UnityEngine.Animation
struct Animation_t56;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t17;
// ActiveAnimation/OnFinished
struct OnFinished_t90;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AnimationOrTween.Trigger
#include "AssemblyU2DCSharp_AnimationOrTween_Trigger.h"
// AnimationOrTween.Direction
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
// AnimationOrTween.EnableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition.h"
// AnimationOrTween.DisableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition.h"
// UIButtonPlayAnimation
struct  UIButtonPlayAnimation_t91  : public MonoBehaviour_t3
{
	// UnityEngine.Animation UIButtonPlayAnimation::target
	Animation_t56 * ___target_2;
	// System.String UIButtonPlayAnimation::clipName
	String_t* ___clipName_3;
	// AnimationOrTween.Trigger UIButtonPlayAnimation::trigger
	int32_t ___trigger_4;
	// AnimationOrTween.Direction UIButtonPlayAnimation::playDirection
	int32_t ___playDirection_5;
	// System.Boolean UIButtonPlayAnimation::resetOnPlay
	bool ___resetOnPlay_6;
	// System.Boolean UIButtonPlayAnimation::clearSelection
	bool ___clearSelection_7;
	// AnimationOrTween.EnableCondition UIButtonPlayAnimation::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_8;
	// AnimationOrTween.DisableCondition UIButtonPlayAnimation::disableWhenFinished
	int32_t ___disableWhenFinished_9;
	// UnityEngine.GameObject UIButtonPlayAnimation::eventReceiver
	GameObject_t17 * ___eventReceiver_10;
	// System.String UIButtonPlayAnimation::callWhenFinished
	String_t* ___callWhenFinished_11;
	// ActiveAnimation/OnFinished UIButtonPlayAnimation::onFinished
	OnFinished_t90 * ___onFinished_12;
	// System.Boolean UIButtonPlayAnimation::mStarted
	bool ___mStarted_13;
	// System.Boolean UIButtonPlayAnimation::mHighlighted
	bool ___mHighlighted_14;
};
