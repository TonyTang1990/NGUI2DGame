#pragma once
#include <stdint.h>
// UIAtlas
struct UIAtlas_t10;
// System.String
struct String_t;
// UIAtlas/Sprite
struct Sprite_t156;
// UIWidget
#include "AssemblyU2DCSharp_UIWidget.h"
// UISprite/Type
#include "AssemblyU2DCSharp_UISprite_Type.h"
// UISprite/FillDirection
#include "AssemblyU2DCSharp_UISprite_FillDirection.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UISprite
struct  UISprite_t9  : public UIWidget_t13
{
	// UIAtlas UISprite::mAtlas
	UIAtlas_t10 * ___mAtlas_23;
	// System.String UISprite::mSpriteName
	String_t* ___mSpriteName_24;
	// System.Boolean UISprite::mFillCenter
	bool ___mFillCenter_25;
	// UISprite/Type UISprite::mType
	int32_t ___mType_26;
	// UISprite/FillDirection UISprite::mFillDirection
	int32_t ___mFillDirection_27;
	// System.Single UISprite::mFillAmount
	float ___mFillAmount_28;
	// System.Boolean UISprite::mInvert
	bool ___mInvert_29;
	// UIAtlas/Sprite UISprite::mSprite
	Sprite_t156 * ___mSprite_30;
	// UnityEngine.Rect UISprite::mInner
	Rect_t158  ___mInner_31;
	// UnityEngine.Rect UISprite::mInnerUV
	Rect_t158  ___mInnerUV_32;
	// UnityEngine.Rect UISprite::mOuter
	Rect_t158  ___mOuter_33;
	// UnityEngine.Rect UISprite::mOuterUV
	Rect_t158  ___mOuterUV_34;
	// UnityEngine.Vector3 UISprite::mScale
	Vector3_t48  ___mScale_35;
	// System.Boolean UISprite::mSpriteSet
	bool ___mSpriteSet_36;
};
