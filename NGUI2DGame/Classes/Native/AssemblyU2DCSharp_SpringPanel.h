#pragma once
#include <stdint.h>
// SpringPanel/OnFinished
struct OnFinished_t99;
// UIPanel
struct UIPanel_t110;
// UnityEngine.Transform
struct Transform_t8;
// UIDraggablePanel
struct UIDraggablePanel_t100;
// IgnoreTimeScale
#include "AssemblyU2DCSharp_IgnoreTimeScale.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// SpringPanel
struct  SpringPanel_t168  : public IgnoreTimeScale_t54
{
	// UnityEngine.Vector3 SpringPanel::target
	Vector3_t48  ___target_7;
	// System.Single SpringPanel::strength
	float ___strength_8;
	// SpringPanel/OnFinished SpringPanel::onFinished
	OnFinished_t99 * ___onFinished_9;
	// UIPanel SpringPanel::mPanel
	UIPanel_t110 * ___mPanel_10;
	// UnityEngine.Transform SpringPanel::mTrans
	Transform_t8 * ___mTrans_11;
	// System.Single SpringPanel::mThreshold
	float ___mThreshold_12;
	// UIDraggablePanel SpringPanel::mDrag
	UIDraggablePanel_t100 * ___mDrag_13;
};
