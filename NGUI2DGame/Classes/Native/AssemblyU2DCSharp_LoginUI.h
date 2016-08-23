#pragma once
#include <stdint.h>
// LoginUI
struct LoginUI_t283;
// UnityEngine.GameObject
struct GameObject_t17;
// UIInput
struct UIInput_t36;
// UILabel
struct UILabel_t14;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LoginUI
struct  LoginUI_t283  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject LoginUI::mAccountText
	GameObject_t17 * ___mAccountText_3;
	// UnityEngine.GameObject LoginUI::mPassWordText
	GameObject_t17 * ___mPassWordText_4;
	// UnityEngine.GameObject LoginUI::mTipText
	GameObject_t17 * ___mTipText_5;
	// UIInput LoginUI::mAccountInput
	UIInput_t36 * ___mAccountInput_6;
	// UIInput LoginUI::mPassWordInput
	UIInput_t36 * ___mPassWordInput_7;
	// UILabel LoginUI::mTipLabel
	UILabel_t14 * ___mTipLabel_8;
};
struct LoginUI_t283_StaticFields{
	// LoginUI LoginUI::mLgUIInstance
	LoginUI_t283 * ___mLgUIInstance_2;
};
