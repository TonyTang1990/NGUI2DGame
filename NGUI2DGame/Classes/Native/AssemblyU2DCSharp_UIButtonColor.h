#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIButtonColor
struct  UIButtonColor_t83  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject UIButtonColor::tweenTarget
	GameObject_t17 * ___tweenTarget_2;
	// UnityEngine.Color UIButtonColor::hover
	Color_t25  ___hover_3;
	// UnityEngine.Color UIButtonColor::pressed
	Color_t25  ___pressed_4;
	// System.Single UIButtonColor::duration
	float ___duration_5;
	// UnityEngine.Color UIButtonColor::mColor
	Color_t25  ___mColor_6;
	// System.Boolean UIButtonColor::mStarted
	bool ___mStarted_7;
	// System.Boolean UIButtonColor::mHighlighted
	bool ___mHighlighted_8;
};
