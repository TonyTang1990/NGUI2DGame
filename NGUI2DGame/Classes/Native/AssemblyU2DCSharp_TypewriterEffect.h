#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t14;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TypewriterEffect
struct  TypewriterEffect_t66  : public MonoBehaviour_t3
{
	// System.Int32 TypewriterEffect::charsPerSecond
	int32_t ___charsPerSecond_2;
	// UILabel TypewriterEffect::mLabel
	UILabel_t14 * ___mLabel_3;
	// System.String TypewriterEffect::mText
	String_t* ___mText_4;
	// System.Int32 TypewriterEffect::mOffset
	int32_t ___mOffset_5;
	// System.Single TypewriterEffect::mNextChar
	float ___mNextChar_6;
};
