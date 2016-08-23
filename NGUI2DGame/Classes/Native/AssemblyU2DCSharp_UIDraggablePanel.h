#pragma once
#include <stdint.h>
// UIScrollBar
struct UIScrollBar_t119;
// UIDraggablePanel/OnDragFinished
struct OnDragFinished_t118;
// UnityEngine.Transform
struct Transform_t8;
// UIPanel
struct UIPanel_t110;
// IgnoreTimeScale
#include "AssemblyU2DCSharp_IgnoreTimeScale.h"
// UIDraggablePanel/DragEffect
#include "AssemblyU2DCSharp_UIDraggablePanel_DragEffect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIDraggablePanel/ShowCondition
#include "AssemblyU2DCSharp_UIDraggablePanel_ShowCondition.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UIDraggablePanel
struct  UIDraggablePanel_t100  : public IgnoreTimeScale_t54
{
	// System.Boolean UIDraggablePanel::restrictWithinPanel
	bool ___restrictWithinPanel_7;
	// System.Boolean UIDraggablePanel::disableDragIfFits
	bool ___disableDragIfFits_8;
	// UIDraggablePanel/DragEffect UIDraggablePanel::dragEffect
	int32_t ___dragEffect_9;
	// System.Boolean UIDraggablePanel::smoothDragStart
	bool ___smoothDragStart_10;
	// UnityEngine.Vector3 UIDraggablePanel::scale
	Vector3_t48  ___scale_11;
	// System.Single UIDraggablePanel::scrollWheelFactor
	float ___scrollWheelFactor_12;
	// System.Single UIDraggablePanel::momentumAmount
	float ___momentumAmount_13;
	// UnityEngine.Vector2 UIDraggablePanel::relativePositionOnReset
	Vector2_t55  ___relativePositionOnReset_14;
	// System.Boolean UIDraggablePanel::repositionClipping
	bool ___repositionClipping_15;
	// System.Boolean UIDraggablePanel::iOSDragEmulation
	bool ___iOSDragEmulation_16;
	// UIScrollBar UIDraggablePanel::horizontalScrollBar
	UIScrollBar_t119 * ___horizontalScrollBar_17;
	// UIScrollBar UIDraggablePanel::verticalScrollBar
	UIScrollBar_t119 * ___verticalScrollBar_18;
	// UIDraggablePanel/ShowCondition UIDraggablePanel::showScrollBars
	int32_t ___showScrollBars_19;
	// UIDraggablePanel/OnDragFinished UIDraggablePanel::onDragFinished
	OnDragFinished_t118 * ___onDragFinished_20;
	// UnityEngine.Transform UIDraggablePanel::mTrans
	Transform_t8 * ___mTrans_21;
	// UIPanel UIDraggablePanel::mPanel
	UIPanel_t110 * ___mPanel_22;
	// UnityEngine.Plane UIDraggablePanel::mPlane
	Plane_t112  ___mPlane_23;
	// UnityEngine.Vector3 UIDraggablePanel::mLastPos
	Vector3_t48  ___mLastPos_24;
	// System.Boolean UIDraggablePanel::mPressed
	bool ___mPressed_25;
	// UnityEngine.Vector3 UIDraggablePanel::mMomentum
	Vector3_t48  ___mMomentum_26;
	// System.Single UIDraggablePanel::mScroll
	float ___mScroll_27;
	// UnityEngine.Bounds UIDraggablePanel::mBounds
	Bounds_t113  ___mBounds_28;
	// System.Boolean UIDraggablePanel::mCalculatedBounds
	bool ___mCalculatedBounds_29;
	// System.Boolean UIDraggablePanel::mShouldMove
	bool ___mShouldMove_30;
	// System.Boolean UIDraggablePanel::mIgnoreCallbacks
	bool ___mIgnoreCallbacks_31;
	// System.Int32 UIDraggablePanel::mDragID
	int32_t ___mDragID_32;
	// UnityEngine.Vector2 UIDraggablePanel::mDragStartOffset
	Vector2_t55  ___mDragStartOffset_33;
	// System.Boolean UIDraggablePanel::mDragStarted
	bool ___mDragStarted_34;
};
