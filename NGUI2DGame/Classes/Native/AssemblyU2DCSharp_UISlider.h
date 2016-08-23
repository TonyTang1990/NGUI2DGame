#pragma once
#include <stdint.h>
// UISlider
struct UISlider_t137;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// UISlider/OnValueChange
struct OnValueChange_t136;
// UnityEngine.BoxCollider
struct BoxCollider_t138;
// UIWidget
struct UIWidget_t13;
// UISprite
struct UISprite_t9;
// IgnoreTimeScale
#include "AssemblyU2DCSharp_IgnoreTimeScale.h"
// UISlider/Direction
#include "AssemblyU2DCSharp_UISlider_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UISlider
struct  UISlider_t137  : public IgnoreTimeScale_t54
{
	// UnityEngine.Transform UISlider::foreground
	Transform_t8 * ___foreground_8;
	// UnityEngine.Transform UISlider::thumb
	Transform_t8 * ___thumb_9;
	// UISlider/Direction UISlider::direction
	int32_t ___direction_10;
	// UnityEngine.GameObject UISlider::eventReceiver
	GameObject_t17 * ___eventReceiver_11;
	// System.String UISlider::functionName
	String_t* ___functionName_12;
	// UISlider/OnValueChange UISlider::onValueChange
	OnValueChange_t136 * ___onValueChange_13;
	// System.Int32 UISlider::numberOfSteps
	int32_t ___numberOfSteps_14;
	// System.Single UISlider::rawValue
	float ___rawValue_15;
	// UnityEngine.BoxCollider UISlider::mCol
	BoxCollider_t138 * ___mCol_16;
	// UnityEngine.Transform UISlider::mTrans
	Transform_t8 * ___mTrans_17;
	// UnityEngine.Transform UISlider::mFGTrans
	Transform_t8 * ___mFGTrans_18;
	// UIWidget UISlider::mFGWidget
	UIWidget_t13 * ___mFGWidget_19;
	// UISprite UISlider::mFGFilled
	UISprite_t9 * ___mFGFilled_20;
	// System.Boolean UISlider::mInitDone
	bool ___mInitDone_21;
	// UnityEngine.Vector2 UISlider::mSize
	Vector2_t55  ___mSize_22;
	// UnityEngine.Vector2 UISlider::mCenter
	Vector2_t55  ___mCenter_23;
};
struct UISlider_t137_StaticFields{
	// UISlider UISlider::current
	UISlider_t137 * ___current_7;
};
