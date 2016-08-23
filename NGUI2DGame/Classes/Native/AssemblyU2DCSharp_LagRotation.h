#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// LagRotation
struct  LagRotation_t49  : public MonoBehaviour_t3
{
	// System.Int32 LagRotation::updateOrder
	int32_t ___updateOrder_2;
	// System.Single LagRotation::speed
	float ___speed_3;
	// System.Boolean LagRotation::ignoreTimeScale
	bool ___ignoreTimeScale_4;
	// UnityEngine.Transform LagRotation::mTrans
	Transform_t8 * ___mTrans_5;
	// UnityEngine.Quaternion LagRotation::mRelative
	Quaternion_t50  ___mRelative_6;
	// UnityEngine.Quaternion LagRotation::mAbsolute
	Quaternion_t50  ___mAbsolute_7;
};
