#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t9;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIImageButton
struct  UIImageButton_t123  : public MonoBehaviour_t3
{
	// UISprite UIImageButton::target
	UISprite_t9 * ___target_2;
	// System.String UIImageButton::normalSprite
	String_t* ___normalSprite_3;
	// System.String UIImageButton::hoverSprite
	String_t* ___hoverSprite_4;
	// System.String UIImageButton::pressedSprite
	String_t* ___pressedSprite_5;
	// System.String UIImageButton::disabledSprite
	String_t* ___disabledSprite_6;
};
