#pragma once
#include <stdint.h>
// UICheckbox
struct UICheckbox_t103;
// UISprite
struct UISprite_t9;
// UnityEngine.Animation
struct Animation_t56;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// UICheckbox/OnStateChange
struct OnStateChange_t102;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UICheckbox
struct  UICheckbox_t103  : public MonoBehaviour_t3
{
	// UISprite UICheckbox::checkSprite
	UISprite_t9 * ___checkSprite_3;
	// UnityEngine.Animation UICheckbox::checkAnimation
	Animation_t56 * ___checkAnimation_4;
	// System.Boolean UICheckbox::instantTween
	bool ___instantTween_5;
	// System.Boolean UICheckbox::startsChecked
	bool ___startsChecked_6;
	// UnityEngine.Transform UICheckbox::radioButtonRoot
	Transform_t8 * ___radioButtonRoot_7;
	// System.Boolean UICheckbox::optionCanBeNone
	bool ___optionCanBeNone_8;
	// UnityEngine.GameObject UICheckbox::eventReceiver
	GameObject_t17 * ___eventReceiver_9;
	// System.String UICheckbox::functionName
	String_t* ___functionName_10;
	// UICheckbox/OnStateChange UICheckbox::onStateChange
	OnStateChange_t102 * ___onStateChange_11;
	// System.Boolean UICheckbox::option
	bool ___option_12;
	// System.Boolean UICheckbox::mChecked
	bool ___mChecked_13;
	// System.Boolean UICheckbox::mStarted
	bool ___mStarted_14;
	// UnityEngine.Transform UICheckbox::mTrans
	Transform_t8 * ___mTrans_15;
};
struct UICheckbox_t103_StaticFields{
	// UICheckbox UICheckbox::current
	UICheckbox_t103 * ___current_2;
};
