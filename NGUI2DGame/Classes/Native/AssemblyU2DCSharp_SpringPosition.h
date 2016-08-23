#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// SpringPosition/OnFinished
struct OnFinished_t195;
// UnityEngine.Transform
struct Transform_t8;
// IgnoreTimeScale
#include "AssemblyU2DCSharp_IgnoreTimeScale.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// SpringPosition
struct  SpringPosition_t194  : public IgnoreTimeScale_t54
{
	// UnityEngine.Vector3 SpringPosition::target
	Vector3_t48  ___target_7;
	// System.Single SpringPosition::strength
	float ___strength_8;
	// System.Boolean SpringPosition::worldSpace
	bool ___worldSpace_9;
	// System.Boolean SpringPosition::ignoreTimeScale
	bool ___ignoreTimeScale_10;
	// UnityEngine.GameObject SpringPosition::eventReceiver
	GameObject_t17 * ___eventReceiver_11;
	// System.String SpringPosition::callWhenFinished
	String_t* ___callWhenFinished_12;
	// SpringPosition/OnFinished SpringPosition::onFinished
	OnFinished_t195 * ___onFinished_13;
	// UnityEngine.Transform SpringPosition::mTrans
	Transform_t8 * ___mTrans_14;
	// System.Single SpringPosition::mThreshold
	float ___mThreshold_15;
};
