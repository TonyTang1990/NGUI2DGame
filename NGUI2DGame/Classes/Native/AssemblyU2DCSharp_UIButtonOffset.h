#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIButtonOffset
struct  UIButtonOffset_t89  : public MonoBehaviour_t3
{
	// UnityEngine.Transform UIButtonOffset::tweenTarget
	Transform_t8 * ___tweenTarget_2;
	// UnityEngine.Vector3 UIButtonOffset::hover
	Vector3_t48  ___hover_3;
	// UnityEngine.Vector3 UIButtonOffset::pressed
	Vector3_t48  ___pressed_4;
	// System.Single UIButtonOffset::duration
	float ___duration_5;
	// UnityEngine.Vector3 UIButtonOffset::mPos
	Vector3_t48  ___mPos_6;
	// System.Boolean UIButtonOffset::mStarted
	bool ___mStarted_7;
	// System.Boolean UIButtonOffset::mHighlighted
	bool ___mHighlighted_8;
};
