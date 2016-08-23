#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// IgnoreTimeScale
#include "AssemblyU2DCSharp_IgnoreTimeScale.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PanWithMouse
struct  PanWithMouse_t53  : public IgnoreTimeScale_t54
{
	// UnityEngine.Vector2 PanWithMouse::degrees
	Vector2_t55  ___degrees_7;
	// System.Single PanWithMouse::range
	float ___range_8;
	// UnityEngine.Transform PanWithMouse::mTrans
	Transform_t8 * ___mTrans_9;
	// UnityEngine.Quaternion PanWithMouse::mStart
	Quaternion_t50  ___mStart_10;
	// UnityEngine.Vector2 PanWithMouse::mRot
	Vector2_t55  ___mRot_11;
};
