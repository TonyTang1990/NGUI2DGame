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
// UnityEngine.Animation
struct Animation_t56;
// UIRoot
struct UIRoot_t115;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIAnchor/Side
#include "AssemblyU2DCSharp_UIAnchor_Side.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UIAnchor
struct  UIAnchor_t212  : public MonoBehaviour_t3
{
	// System.Boolean UIAnchor::mNeedsHalfPixelOffset
	bool ___mNeedsHalfPixelOffset_2;
	// UnityEngine.Camera UIAnchor::uiCamera
	Camera_t7 * ___uiCamera_3;
	// UIWidget UIAnchor::widgetContainer
	UIWidget_t13 * ___widgetContainer_4;
	// UIPanel UIAnchor::panelContainer
	UIPanel_t110 * ___panelContainer_5;
	// UIAnchor/Side UIAnchor::side
	int32_t ___side_6;
	// System.Boolean UIAnchor::halfPixelOffset
	bool ___halfPixelOffset_7;
	// System.Boolean UIAnchor::runOnlyOnce
	bool ___runOnlyOnce_8;
	// UnityEngine.Vector2 UIAnchor::relativeOffset
	Vector2_t55  ___relativeOffset_9;
	// UnityEngine.Vector2 UIAnchor::pixelOffset
	Vector2_t55  ___pixelOffset_10;
	// UnityEngine.Transform UIAnchor::mTrans
	Transform_t8 * ___mTrans_11;
	// UnityEngine.Animation UIAnchor::mAnim
	Animation_t56 * ___mAnim_12;
	// UnityEngine.Rect UIAnchor::mRect
	Rect_t158  ___mRect_13;
	// UIRoot UIAnchor::mRoot
	UIRoot_t115 * ___mRoot_14;
};
