#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIButtonScale
struct  UIButtonScale_t93  : public MonoBehaviour_t3
{
	// UnityEngine.Transform UIButtonScale::tweenTarget
	Transform_t8 * ___tweenTarget_2;
	// UnityEngine.Vector3 UIButtonScale::hover
	Vector3_t48  ___hover_3;
	// UnityEngine.Vector3 UIButtonScale::pressed
	Vector3_t48  ___pressed_4;
	// System.Single UIButtonScale::duration
	float ___duration_5;
	// UnityEngine.Vector3 UIButtonScale::mScale
	Vector3_t48  ___mScale_6;
	// System.Boolean UIButtonScale::mStarted
	bool ___mStarted_7;
	// System.Boolean UIButtonScale::mHighlighted
	bool ___mHighlighted_8;
};
