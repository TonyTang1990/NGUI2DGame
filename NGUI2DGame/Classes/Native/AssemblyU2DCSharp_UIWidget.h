#pragma once
#include <stdint.h>
// BetterList`1<UIWidget>
struct BetterList_1_t189;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Transform
struct Transform_t8;
// UIPanel
struct UIPanel_t110;
// UIGeometry
struct UIGeometry_t187;
// System.Comparison`1<UIWidget>
struct Comparison_1_t190;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UIWidget
struct  UIWidget_t13  : public MonoBehaviour_t3
{
	// UnityEngine.Color UIWidget::mColor
	Color_t25  ___mColor_3;
	// UIWidget/Pivot UIWidget::mPivot
	int32_t ___mPivot_4;
	// System.Int32 UIWidget::mDepth
	int32_t ___mDepth_5;
	// UnityEngine.GameObject UIWidget::mGo
	GameObject_t17 * ___mGo_6;
	// UnityEngine.Transform UIWidget::mTrans
	Transform_t8 * ___mTrans_7;
	// UIPanel UIWidget::mPanel
	UIPanel_t110 * ___mPanel_8;
	// System.Boolean UIWidget::mChanged
	bool ___mChanged_9;
	// System.Boolean UIWidget::mPlayMode
	bool ___mPlayMode_10;
	// System.Boolean UIWidget::mStarted
	bool ___mStarted_11;
	// UnityEngine.Vector3 UIWidget::mDiffPos
	Vector3_t48  ___mDiffPos_12;
	// UnityEngine.Quaternion UIWidget::mDiffRot
	Quaternion_t50  ___mDiffRot_13;
	// UnityEngine.Vector3 UIWidget::mDiffScale
	Vector3_t48  ___mDiffScale_14;
	// UnityEngine.Matrix4x4 UIWidget::mLocalToPanel
	Matrix4x4_t191  ___mLocalToPanel_15;
	// System.Boolean UIWidget::mVisibleByPanel
	bool ___mVisibleByPanel_16;
	// System.Single UIWidget::mLastAlpha
	float ___mLastAlpha_17;
	// UIGeometry UIWidget::mGeom
	UIGeometry_t187 * ___mGeom_18;
	// System.Boolean UIWidget::mForceVisible
	bool ___mForceVisible_19;
	// UnityEngine.Vector3 UIWidget::mOldV0
	Vector3_t48  ___mOldV0_20;
	// UnityEngine.Vector3 UIWidget::mOldV1
	Vector3_t48  ___mOldV1_21;
};
struct UIWidget_t13_StaticFields{
	// BetterList`1<UIWidget> UIWidget::list
	BetterList_1_t189 * ___list_2;
	// System.Comparison`1<UIWidget> UIWidget::<>f__am$cache14
	Comparison_1_t190 * ___U3CU3Ef__amU24cache14_22;
};
