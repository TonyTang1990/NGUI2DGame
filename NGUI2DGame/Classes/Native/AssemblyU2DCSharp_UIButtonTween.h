#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// UITweener/OnFinished
struct OnFinished_t96;
// UITweener[]
struct UITweenerU5BU5D_t97;
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
// UIButtonTween
struct  UIButtonTween_t98  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject UIButtonTween::tweenTarget
	GameObject_t17 * ___tweenTarget_2;
	// System.Int32 UIButtonTween::tweenGroup
	int32_t ___tweenGroup_3;
	// AnimationOrTween.Trigger UIButtonTween::trigger
	int32_t ___trigger_4;
	// AnimationOrTween.Direction UIButtonTween::playDirection
	int32_t ___playDirection_5;
	// System.Boolean UIButtonTween::resetOnPlay
	bool ___resetOnPlay_6;
	// AnimationOrTween.EnableCondition UIButtonTween::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_7;
	// AnimationOrTween.DisableCondition UIButtonTween::disableWhenFinished
	int32_t ___disableWhenFinished_8;
	// System.Boolean UIButtonTween::includeChildren
	bool ___includeChildren_9;
	// UnityEngine.GameObject UIButtonTween::eventReceiver
	GameObject_t17 * ___eventReceiver_10;
	// System.String UIButtonTween::callWhenFinished
	String_t* ___callWhenFinished_11;
	// UITweener/OnFinished UIButtonTween::onFinished
	OnFinished_t96 * ___onFinished_12;
	// UITweener[] UIButtonTween::mTweens
	UITweenerU5BU5D_t97* ___mTweens_13;
	// System.Boolean UIButtonTween::mStarted
	bool ___mStarted_14;
	// System.Boolean UIButtonTween::mHighlighted
	bool ___mHighlighted_15;
};
