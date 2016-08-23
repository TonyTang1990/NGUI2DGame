#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.Camera
struct Camera_t7;
// UIRoot
struct UIRoot_t115;
// IgnoreTimeScale
#include "AssemblyU2DCSharp_IgnoreTimeScale.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIDragObject/DragEffect
#include "AssemblyU2DCSharp_UIDragObject_DragEffect.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UIDraggableCamera
struct  UIDraggableCamera_t106  : public IgnoreTimeScale_t54
{
	// UnityEngine.Transform UIDraggableCamera::rootForBounds
	Transform_t8 * ___rootForBounds_7;
	// UnityEngine.Vector2 UIDraggableCamera::scale
	Vector2_t55  ___scale_8;
	// System.Single UIDraggableCamera::scrollWheelFactor
	float ___scrollWheelFactor_9;
	// UIDragObject/DragEffect UIDraggableCamera::dragEffect
	int32_t ___dragEffect_10;
	// System.Boolean UIDraggableCamera::smoothDragStart
	bool ___smoothDragStart_11;
	// System.Single UIDraggableCamera::momentumAmount
	float ___momentumAmount_12;
	// UnityEngine.Camera UIDraggableCamera::mCam
	Camera_t7 * ___mCam_13;
	// UnityEngine.Transform UIDraggableCamera::mTrans
	Transform_t8 * ___mTrans_14;
	// System.Boolean UIDraggableCamera::mPressed
	bool ___mPressed_15;
	// UnityEngine.Vector2 UIDraggableCamera::mMomentum
	Vector2_t55  ___mMomentum_16;
	// UnityEngine.Bounds UIDraggableCamera::mBounds
	Bounds_t113  ___mBounds_17;
	// System.Single UIDraggableCamera::mScroll
	float ___mScroll_18;
	// UIRoot UIDraggableCamera::mRoot
	UIRoot_t115 * ___mRoot_19;
	// System.Boolean UIDraggableCamera::mDragStarted
	bool ___mDragStarted_20;
};
