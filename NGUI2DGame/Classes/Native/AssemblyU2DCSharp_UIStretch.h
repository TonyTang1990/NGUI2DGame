#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t7;
// UIWidget
struct UIWidget_t13;
// UIPanel
struct UIPanel_t110;
// UnityEngine.Transform
struct Transform_t8;
// UIRoot
struct UIRoot_t115;
// UnityEngine.Animation
struct Animation_t56;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIStretch/Style
#include "AssemblyU2DCSharp_UIStretch_Style.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UIStretch
struct  UIStretch_t256  : public MonoBehaviour_t3
{
	// UnityEngine.Camera UIStretch::uiCamera
	Camera_t7 * ___uiCamera_2;
	// UIWidget UIStretch::widgetContainer
	UIWidget_t13 * ___widgetContainer_3;
	// UIPanel UIStretch::panelContainer
	UIPanel_t110 * ___panelContainer_4;
	// UIStretch/Style UIStretch::style
	int32_t ___style_5;
	// System.Boolean UIStretch::runOnlyOnce
	bool ___runOnlyOnce_6;
	// UnityEngine.Vector2 UIStretch::relativeSize
	Vector2_t55  ___relativeSize_7;
	// UnityEngine.Vector2 UIStretch::initialSize
	Vector2_t55  ___initialSize_8;
	// UnityEngine.Transform UIStretch::mTrans
	Transform_t8 * ___mTrans_9;
	// UIRoot UIStretch::mRoot
	UIRoot_t115 * ___mRoot_10;
	// UnityEngine.Animation UIStretch::mAnim
	Animation_t56 * ___mAnim_11;
	// UnityEngine.Rect UIStretch::mRect
	Rect_t158  ___mRect_12;
};
