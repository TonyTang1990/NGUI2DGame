#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// WindowAutoYaw
struct  WindowAutoYaw_t78  : public MonoBehaviour_t3
{
	// System.Int32 WindowAutoYaw::updateOrder
	int32_t ___updateOrder_2;
	// UnityEngine.Camera WindowAutoYaw::uiCamera
	Camera_t7 * ___uiCamera_3;
	// System.Single WindowAutoYaw::yawAmount
	float ___yawAmount_4;
	// UnityEngine.Transform WindowAutoYaw::mTrans
	Transform_t8 * ___mTrans_5;
};
