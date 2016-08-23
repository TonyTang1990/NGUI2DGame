#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UIPanel
struct UIPanel_t110;
// IgnoreTimeScale
#include "AssemblyU2DCSharp_IgnoreTimeScale.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIDragObject/DragEffect
#include "AssemblyU2DCSharp_UIDragObject_DragEffect.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UIDragObject
struct  UIDragObject_t111  : public IgnoreTimeScale_t54
{
	// UnityEngine.Transform UIDragObject::target
	Transform_t8 * ___target_7;
	// UnityEngine.Vector3 UIDragObject::scale
	Vector3_t48  ___scale_8;
	// System.Single UIDragObject::scrollWheelFactor
	float ___scrollWheelFactor_9;
	// System.Boolean UIDragObject::restrictWithinPanel
	bool ___restrictWithinPanel_10;
	// UIDragObject/DragEffect UIDragObject::dragEffect
	int32_t ___dragEffect_11;
	// System.Single UIDragObject::momentumAmount
	float ___momentumAmount_12;
	// UnityEngine.Plane UIDragObject::mPlane
	Plane_t112  ___mPlane_13;
	// UnityEngine.Vector3 UIDragObject::mLastPos
	Vector3_t48  ___mLastPos_14;
	// UIPanel UIDragObject::mPanel
	UIPanel_t110 * ___mPanel_15;
	// System.Boolean UIDragObject::mPressed
	bool ___mPressed_16;
	// UnityEngine.Vector3 UIDragObject::mMomentum
	Vector3_t48  ___mMomentum_17;
	// System.Single UIDragObject::mScroll
	float ___mScroll_18;
	// UnityEngine.Bounds UIDragObject::mBounds
	Bounds_t113  ___mBounds_19;
	// System.Int32 UIDragObject::mTouchID
	int32_t ___mTouchID_20;
	// System.Boolean UIDragObject::mStarted
	bool ___mStarted_21;
};
