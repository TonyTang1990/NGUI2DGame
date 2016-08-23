#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UITable
struct UITable_t145;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// TweenScale
struct  TweenScale_t204  : public UITweener_t197
{
	// UnityEngine.Vector3 TweenScale::from
	Vector3_t48  ___from_23;
	// UnityEngine.Vector3 TweenScale::to
	Vector3_t48  ___to_24;
	// System.Boolean TweenScale::updateTable
	bool ___updateTable_25;
	// UnityEngine.Transform TweenScale::mTrans
	Transform_t8 * ___mTrans_26;
	// UITable TweenScale::mTable
	UITable_t145 * ___mTable_27;
};
