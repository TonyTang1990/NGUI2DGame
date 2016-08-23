#pragma once
#include <stdint.h>
// UITooltip
struct UITooltip_t265;
// UnityEngine.Camera
struct Camera_t7;
// UILabel
struct UILabel_t14;
// UISprite
struct UISprite_t9;
// UnityEngine.Transform
struct Transform_t8;
// UIWidget[]
struct UIWidgetU5BU5D_t266;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UITooltip
struct  UITooltip_t265  : public MonoBehaviour_t3
{
	// UnityEngine.Camera UITooltip::uiCamera
	Camera_t7 * ___uiCamera_3;
	// UILabel UITooltip::text
	UILabel_t14 * ___text_4;
	// UISprite UITooltip::background
	UISprite_t9 * ___background_5;
	// System.Single UITooltip::appearSpeed
	float ___appearSpeed_6;
	// System.Boolean UITooltip::scalingTransitions
	bool ___scalingTransitions_7;
	// UnityEngine.Transform UITooltip::mTrans
	Transform_t8 * ___mTrans_8;
	// System.Single UITooltip::mTarget
	float ___mTarget_9;
	// System.Single UITooltip::mCurrent
	float ___mCurrent_10;
	// UnityEngine.Vector3 UITooltip::mPos
	Vector3_t48  ___mPos_11;
	// UnityEngine.Vector3 UITooltip::mSize
	Vector3_t48  ___mSize_12;
	// UIWidget[] UITooltip::mWidgets
	UIWidgetU5BU5D_t266* ___mWidgets_13;
};
struct UITooltip_t265_StaticFields{
	// UITooltip UITooltip::mInstance
	UITooltip_t265 * ___mInstance_2;
};
