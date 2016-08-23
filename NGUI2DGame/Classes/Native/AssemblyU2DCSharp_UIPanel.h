#pragma once
#include <stdint.h>
// UIPanel/OnChangeDelegate
struct OnChangeDelegate_t243;
// BetterList`1<UIWidget>
struct BetterList_1_t189;
// BetterList`1<UnityEngine.Material>
struct BetterList_1_t244;
// BetterList`1<UIDrawCall>
struct BetterList_1_t245;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t184;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t246;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t185;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t186;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.Camera
struct Camera_t7;
// System.Single[]
struct SingleU5BU5D_t247;
// UIPanel[]
struct UIPanelU5BU5D_t248;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UIPanel/DebugInfo
#include "AssemblyU2DCSharp_UIPanel_DebugInfo.h"
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIPanel
struct  UIPanel_t110  : public MonoBehaviour_t3
{
	// UIPanel/OnChangeDelegate UIPanel::onChange
	OnChangeDelegate_t243 * ___onChange_2;
	// System.Boolean UIPanel::sortByDepth
	bool ___sortByDepth_3;
	// System.Boolean UIPanel::showInPanelTool
	bool ___showInPanelTool_4;
	// System.Boolean UIPanel::generateNormals
	bool ___generateNormals_5;
	// System.Boolean UIPanel::depthPass
	bool ___depthPass_6;
	// System.Boolean UIPanel::widgetsAreStatic
	bool ___widgetsAreStatic_7;
	// System.Boolean UIPanel::cullWhileDragging
	bool ___cullWhileDragging_8;
	// UnityEngine.Matrix4x4 UIPanel::worldToLocal
	Matrix4x4_t191  ___worldToLocal_9;
	// System.Single UIPanel::mAlpha
	float ___mAlpha_10;
	// UIPanel/DebugInfo UIPanel::mDebugInfo
	int32_t ___mDebugInfo_11;
	// UIDrawCall/Clipping UIPanel::mClipping
	int32_t ___mClipping_12;
	// UnityEngine.Vector4 UIPanel::mClipRange
	Vector4_t175  ___mClipRange_13;
	// UnityEngine.Vector2 UIPanel::mClipSoftness
	Vector2_t55  ___mClipSoftness_14;
	// BetterList`1<UIWidget> UIPanel::mWidgets
	BetterList_1_t189 * ___mWidgets_15;
	// BetterList`1<UnityEngine.Material> UIPanel::mChanged
	BetterList_1_t244 * ___mChanged_16;
	// BetterList`1<UIDrawCall> UIPanel::mDrawCalls
	BetterList_1_t245 * ___mDrawCalls_17;
	// BetterList`1<UnityEngine.Vector3> UIPanel::mVerts
	BetterList_1_t184 * ___mVerts_18;
	// BetterList`1<UnityEngine.Vector3> UIPanel::mNorms
	BetterList_1_t184 * ___mNorms_19;
	// BetterList`1<UnityEngine.Vector4> UIPanel::mTans
	BetterList_1_t246 * ___mTans_20;
	// BetterList`1<UnityEngine.Vector2> UIPanel::mUvs
	BetterList_1_t185 * ___mUvs_21;
	// BetterList`1<UnityEngine.Color32> UIPanel::mCols
	BetterList_1_t186 * ___mCols_22;
	// UnityEngine.GameObject UIPanel::mGo
	GameObject_t17 * ___mGo_23;
	// UnityEngine.Transform UIPanel::mTrans
	Transform_t8 * ___mTrans_24;
	// UnityEngine.Camera UIPanel::mCam
	Camera_t7 * ___mCam_25;
	// System.Int32 UIPanel::mLayer
	int32_t ___mLayer_26;
	// System.Boolean UIPanel::mDepthChanged
	bool ___mDepthChanged_27;
	// System.Single UIPanel::mCullTime
	float ___mCullTime_28;
	// System.Single UIPanel::mUpdateTime
	float ___mUpdateTime_29;
	// System.Single UIPanel::mMatrixTime
	float ___mMatrixTime_30;
	// UnityEngine.Vector2 UIPanel::mMin
	Vector2_t55  ___mMin_32;
	// UnityEngine.Vector2 UIPanel::mMax
	Vector2_t55  ___mMax_33;
	// UIPanel[] UIPanel::mChildPanels
	UIPanelU5BU5D_t248* ___mChildPanels_34;
};
struct UIPanel_t110_StaticFields{
	// System.Single[] UIPanel::mTemp
	SingleU5BU5D_t247* ___mTemp_31;
};
