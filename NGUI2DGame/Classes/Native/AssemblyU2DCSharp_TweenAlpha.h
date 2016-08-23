#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UIWidget
struct UIWidget_t13;
// UIPanel
struct UIPanel_t110;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// TweenAlpha
struct  TweenAlpha_t196  : public UITweener_t197
{
	// System.Single TweenAlpha::from
	float ___from_23;
	// System.Single TweenAlpha::to
	float ___to_24;
	// UnityEngine.Transform TweenAlpha::mTrans
	Transform_t8 * ___mTrans_25;
	// UIWidget TweenAlpha::mWidget
	UIWidget_t13 * ___mWidget_26;
	// UIPanel TweenAlpha::mPanel
	UIPanel_t110 * ___mPanel_27;
};
