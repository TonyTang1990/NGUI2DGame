#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// LagPosition
struct  LagPosition_t47  : public MonoBehaviour_t3
{
	// System.Int32 LagPosition::updateOrder
	int32_t ___updateOrder_2;
	// UnityEngine.Vector3 LagPosition::speed
	Vector3_t48  ___speed_3;
	// System.Boolean LagPosition::ignoreTimeScale
	bool ___ignoreTimeScale_4;
	// UnityEngine.Transform LagPosition::mTrans
	Transform_t8 * ___mTrans_5;
	// UnityEngine.Vector3 LagPosition::mRelative
	Vector3_t48  ___mRelative_6;
	// UnityEngine.Vector3 LagPosition::mAbsolute
	Vector3_t48  ___mAbsolute_7;
};
