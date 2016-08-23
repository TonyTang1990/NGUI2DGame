#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// TweenTransform
struct  TweenTransform_t205  : public UITweener_t197
{
	// UnityEngine.Transform TweenTransform::from
	Transform_t8 * ___from_23;
	// UnityEngine.Transform TweenTransform::to
	Transform_t8 * ___to_24;
	// System.Boolean TweenTransform::parentWhenFinished
	bool ___parentWhenFinished_25;
	// UnityEngine.Transform TweenTransform::mTrans
	Transform_t8 * ___mTrans_26;
	// UnityEngine.Vector3 TweenTransform::mPos
	Vector3_t48  ___mPos_27;
	// UnityEngine.Quaternion TweenTransform::mRot
	Quaternion_t50  ___mRot_28;
	// UnityEngine.Vector3 TweenTransform::mScale
	Vector3_t48  ___mScale_29;
};
