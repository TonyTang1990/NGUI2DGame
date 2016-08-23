#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UIWidget
struct UIWidget_t13;
// UnityEngine.Material
struct Material_t170;
// UnityEngine.Light
struct Light_t198;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// TweenColor
struct  TweenColor_t199  : public UITweener_t197
{
	// UnityEngine.Color TweenColor::from
	Color_t25  ___from_23;
	// UnityEngine.Color TweenColor::to
	Color_t25  ___to_24;
	// UnityEngine.Transform TweenColor::mTrans
	Transform_t8 * ___mTrans_25;
	// UIWidget TweenColor::mWidget
	UIWidget_t13 * ___mWidget_26;
	// UnityEngine.Material TweenColor::mMat
	Material_t170 * ___mMat_27;
	// UnityEngine.Light TweenColor::mLight
	Light_t198 * ___mLight_28;
};
