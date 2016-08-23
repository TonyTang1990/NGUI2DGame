#pragma once
#include <stdint.h>
// UITweener/OnFinished
struct OnFinished_t96;
// UnityEngine.AnimationCurve
struct AnimationCurve_t210;
struct AnimationCurve_t210_marshaled;
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// IgnoreTimeScale
#include "AssemblyU2DCSharp_IgnoreTimeScale.h"
// UITweener/Method
#include "AssemblyU2DCSharp_UITweener_Method.h"
// UITweener/Style
#include "AssemblyU2DCSharp_UITweener_Style.h"
// UITweener
struct  UITweener_t197  : public IgnoreTimeScale_t54
{
	// UITweener/OnFinished UITweener::onFinished
	OnFinished_t96 * ___onFinished_7;
	// UITweener/Method UITweener::method
	int32_t ___method_8;
	// UITweener/Style UITweener::style
	int32_t ___style_9;
	// UnityEngine.AnimationCurve UITweener::animationCurve
	AnimationCurve_t210 * ___animationCurve_10;
	// System.Boolean UITweener::ignoreTimeScale
	bool ___ignoreTimeScale_11;
	// System.Single UITweener::delay
	float ___delay_12;
	// System.Single UITweener::duration
	float ___duration_13;
	// System.Boolean UITweener::steeperCurves
	bool ___steeperCurves_14;
	// System.Int32 UITweener::tweenGroup
	int32_t ___tweenGroup_15;
	// UnityEngine.GameObject UITweener::eventReceiver
	GameObject_t17 * ___eventReceiver_16;
	// System.String UITweener::callWhenFinished
	String_t* ___callWhenFinished_17;
	// System.Boolean UITweener::mStarted
	bool ___mStarted_18;
	// System.Single UITweener::mStartTime
	float ___mStartTime_19;
	// System.Single UITweener::mDuration
	float ___mDuration_20;
	// System.Single UITweener::mAmountPerDelta
	float ___mAmountPerDelta_21;
	// System.Single UITweener::mFactor
	float ___mFactor_22;
};
