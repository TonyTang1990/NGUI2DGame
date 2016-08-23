#pragma once
#include <stdint.h>
// UIFont
struct UIFont_t128;
// System.String
struct String_t;
// UIWidget
#include "AssemblyU2DCSharp_UIWidget.h"
// UILabel/Effect
#include "AssemblyU2DCSharp_UILabel_Effect.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIFont/SymbolStyle
#include "AssemblyU2DCSharp_UIFont_SymbolStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UILabel
struct  UILabel_t14  : public UIWidget_t13
{
	// UIFont UILabel::mFont
	UIFont_t128 * ___mFont_23;
	// System.String UILabel::mText
	String_t* ___mText_24;
	// System.Int32 UILabel::mMaxLineWidth
	int32_t ___mMaxLineWidth_25;
	// System.Int32 UILabel::mMaxLineHeight
	int32_t ___mMaxLineHeight_26;
	// System.Boolean UILabel::mEncoding
	bool ___mEncoding_27;
	// System.Int32 UILabel::mMaxLineCount
	int32_t ___mMaxLineCount_28;
	// System.Boolean UILabel::mPassword
	bool ___mPassword_29;
	// System.Boolean UILabel::mShowLastChar
	bool ___mShowLastChar_30;
	// UILabel/Effect UILabel::mEffectStyle
	int32_t ___mEffectStyle_31;
	// UnityEngine.Color UILabel::mEffectColor
	Color_t25  ___mEffectColor_32;
	// UIFont/SymbolStyle UILabel::mSymbols
	int32_t ___mSymbols_33;
	// UnityEngine.Vector2 UILabel::mEffectDistance
	Vector2_t55  ___mEffectDistance_34;
	// System.Boolean UILabel::mShrinkToFit
	bool ___mShrinkToFit_35;
	// System.Single UILabel::mLineWidth
	float ___mLineWidth_36;
	// System.Boolean UILabel::mMultiline
	bool ___mMultiline_37;
	// System.Boolean UILabel::mShouldBeProcessed
	bool ___mShouldBeProcessed_38;
	// System.String UILabel::mProcessedText
	String_t* ___mProcessedText_39;
	// UnityEngine.Vector3 UILabel::mLastScale
	Vector3_t48  ___mLastScale_40;
	// UnityEngine.Vector2 UILabel::mSize
	Vector2_t55  ___mSize_41;
	// System.Boolean UILabel::mPremultiply
	bool ___mPremultiply_42;
};
