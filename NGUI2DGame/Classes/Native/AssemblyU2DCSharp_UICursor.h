#pragma once
#include <stdint.h>
// UICursor
struct UICursor_t6;
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.Transform
struct Transform_t8;
// UISprite
struct UISprite_t9;
// UIAtlas
struct UIAtlas_t10;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UICursor
struct  UICursor_t6  : public MonoBehaviour_t3
{
	// UnityEngine.Camera UICursor::uiCamera
	Camera_t7 * ___uiCamera_3;
	// UnityEngine.Transform UICursor::mTrans
	Transform_t8 * ___mTrans_4;
	// UISprite UICursor::mSprite
	UISprite_t9 * ___mSprite_5;
	// UIAtlas UICursor::mAtlas
	UIAtlas_t10 * ___mAtlas_6;
	// System.String UICursor::mSpriteName
	String_t* ___mSpriteName_7;
};
struct UICursor_t6_StaticFields{
	// UICursor UICursor::mInstance
	UICursor_t6 * ___mInstance_2;
};
