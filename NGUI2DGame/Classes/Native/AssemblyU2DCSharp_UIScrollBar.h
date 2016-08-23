#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t9;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.Camera
struct Camera_t7;
// UIScrollBar/OnScrollBarChange
struct OnScrollBarChange_t133;
// UIScrollBar/OnDragFinished
struct OnDragFinished_t134;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIScrollBar/Direction
#include "AssemblyU2DCSharp_UIScrollBar_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIScrollBar
struct  UIScrollBar_t119  : public MonoBehaviour_t3
{
	// UISprite UIScrollBar::mBG
	UISprite_t9 * ___mBG_2;
	// UISprite UIScrollBar::mFG
	UISprite_t9 * ___mFG_3;
	// UIScrollBar/Direction UIScrollBar::mDir
	int32_t ___mDir_4;
	// System.Boolean UIScrollBar::mInverted
	bool ___mInverted_5;
	// System.Single UIScrollBar::mScroll
	float ___mScroll_6;
	// System.Single UIScrollBar::mSize
	float ___mSize_7;
	// UnityEngine.Transform UIScrollBar::mTrans
	Transform_t8 * ___mTrans_8;
	// System.Boolean UIScrollBar::mIsDirty
	bool ___mIsDirty_9;
	// UnityEngine.Camera UIScrollBar::mCam
	Camera_t7 * ___mCam_10;
	// UnityEngine.Vector2 UIScrollBar::mScreenPos
	Vector2_t55  ___mScreenPos_11;
	// UIScrollBar/OnScrollBarChange UIScrollBar::onChange
	OnScrollBarChange_t133 * ___onChange_12;
	// UIScrollBar/OnDragFinished UIScrollBar::onDragFinished
	OnDragFinished_t134 * ___onDragFinished_13;
};
