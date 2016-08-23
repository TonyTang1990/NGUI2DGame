#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// WindowDragTilt
struct  WindowDragTilt_t79  : public MonoBehaviour_t3
{
	// System.Int32 WindowDragTilt::updateOrder
	int32_t ___updateOrder_2;
	// System.Single WindowDragTilt::degrees
	float ___degrees_3;
	// UnityEngine.Vector3 WindowDragTilt::mLastPos
	Vector3_t48  ___mLastPos_4;
	// UnityEngine.Transform WindowDragTilt::mTrans
	Transform_t8 * ___mTrans_5;
	// System.Single WindowDragTilt::mAngle
	float ___mAngle_6;
	// System.Boolean WindowDragTilt::mInit
	bool ___mInit_7;
};
