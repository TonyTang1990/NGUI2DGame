#pragma once
#include <stdint.h>
// UIInput
struct UIInput_t36;
// UILabel
struct UILabel_t14;
// System.String
struct String_t;
// UIInput/Validator
struct Validator_t235;
// UnityEngine.GameObject
struct GameObject_t17;
// UIInput/OnSubmit
struct OnSubmit_t236;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t237;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIInput/KeyboardType
#include "AssemblyU2DCSharp_UIInput_KeyboardType.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UIInput
struct  UIInput_t36  : public MonoBehaviour_t3
{
	// UILabel UIInput::label
	UILabel_t14 * ___label_3;
	// System.Int32 UIInput::maxChars
	int32_t ___maxChars_4;
	// System.String UIInput::caratChar
	String_t* ___caratChar_5;
	// UIInput/Validator UIInput::validator
	Validator_t235 * ___validator_6;
	// UIInput/KeyboardType UIInput::type
	int32_t ___type_7;
	// System.Boolean UIInput::isPassword
	bool ___isPassword_8;
	// System.Boolean UIInput::autoCorrect
	bool ___autoCorrect_9;
	// System.Boolean UIInput::useLabelTextAtStart
	bool ___useLabelTextAtStart_10;
	// UnityEngine.Color UIInput::activeColor
	Color_t25  ___activeColor_11;
	// UnityEngine.GameObject UIInput::selectOnTab
	GameObject_t17 * ___selectOnTab_12;
	// UnityEngine.GameObject UIInput::eventReceiver
	GameObject_t17 * ___eventReceiver_13;
	// System.String UIInput::functionName
	String_t* ___functionName_14;
	// UIInput/OnSubmit UIInput::onSubmit
	OnSubmit_t236 * ___onSubmit_15;
	// System.String UIInput::mText
	String_t* ___mText_16;
	// System.String UIInput::mDefaultText
	String_t* ___mDefaultText_17;
	// UnityEngine.Color UIInput::mDefaultColor
	Color_t25  ___mDefaultColor_18;
	// UIWidget/Pivot UIInput::mPivot
	int32_t ___mPivot_19;
	// System.Single UIInput::mPosition
	float ___mPosition_20;
	// UnityEngine.TouchScreenKeyboard UIInput::mKeyboard
	TouchScreenKeyboard_t237 * ___mKeyboard_21;
	// System.Boolean UIInput::mDoInit
	bool ___mDoInit_22;
};
struct UIInput_t36_StaticFields{
	// UIInput UIInput::current
	UIInput_t36 * ___current_2;
};
