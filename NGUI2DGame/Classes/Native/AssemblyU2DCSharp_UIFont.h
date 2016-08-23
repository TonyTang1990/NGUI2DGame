#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t170;
// BMFont
struct BMFont_t153;
// UIAtlas
struct UIAtlas_t10;
// UIFont
struct UIFont_t128;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t230;
// UnityEngine.Font
struct Font_t231;
// UIAtlas/Sprite
struct Sprite_t156;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t232;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
// UIFont
struct  UIFont_t128  : public MonoBehaviour_t3
{
	// UnityEngine.Material UIFont::mMat
	Material_t170 * ___mMat_2;
	// UnityEngine.Rect UIFont::mUVRect
	Rect_t158  ___mUVRect_3;
	// BMFont UIFont::mFont
	BMFont_t153 * ___mFont_4;
	// System.Int32 UIFont::mSpacingX
	int32_t ___mSpacingX_5;
	// System.Int32 UIFont::mSpacingY
	int32_t ___mSpacingY_6;
	// UIAtlas UIFont::mAtlas
	UIAtlas_t10 * ___mAtlas_7;
	// UIFont UIFont::mReplacement
	UIFont_t128 * ___mReplacement_8;
	// System.Single UIFont::mPixelSize
	float ___mPixelSize_9;
	// System.Collections.Generic.List`1<BMSymbol> UIFont::mSymbols
	List_1_t230 * ___mSymbols_10;
	// UnityEngine.Font UIFont::mDynamicFont
	Font_t231 * ___mDynamicFont_11;
	// System.Int32 UIFont::mDynamicFontSize
	int32_t ___mDynamicFontSize_12;
	// UnityEngine.FontStyle UIFont::mDynamicFontStyle
	int32_t ___mDynamicFontStyle_13;
	// System.Single UIFont::mDynamicFontOffset
	float ___mDynamicFontOffset_14;
	// UIAtlas/Sprite UIFont::mSprite
	Sprite_t156 * ___mSprite_15;
	// System.Int32 UIFont::mPMA
	int32_t ___mPMA_16;
	// System.Boolean UIFont::mSpriteSet
	bool ___mSpriteSet_17;
	// System.Collections.Generic.List`1<UnityEngine.Color> UIFont::mColors
	List_1_t232 * ___mColors_18;
};
struct UIFont_t128_StaticFields{
	// UnityEngine.CharacterInfo UIFont::mTemp
	CharacterInfo_t233  ___mTemp_19;
	// UnityEngine.CharacterInfo UIFont::mChar
	CharacterInfo_t233  ___mChar_20;
};
