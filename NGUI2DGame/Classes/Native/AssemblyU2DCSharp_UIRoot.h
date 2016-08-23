#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UIRoot>
struct List_1_t250;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIRoot/Scaling
#include "AssemblyU2DCSharp_UIRoot_Scaling.h"
// UIRoot
struct  UIRoot_t115  : public MonoBehaviour_t3
{
	// UIRoot/Scaling UIRoot::scalingStyle
	int32_t ___scalingStyle_3;
	// System.Boolean UIRoot::automatic
	bool ___automatic_4;
	// System.Int32 UIRoot::manualHeight
	int32_t ___manualHeight_5;
	// System.Int32 UIRoot::minimumHeight
	int32_t ___minimumHeight_6;
	// System.Int32 UIRoot::maximumHeight
	int32_t ___maximumHeight_7;
	// UnityEngine.Transform UIRoot::mTrans
	Transform_t8 * ___mTrans_8;
};
struct UIRoot_t115_StaticFields{
	// System.Collections.Generic.List`1<UIRoot> UIRoot::mRoots
	List_1_t250 * ___mRoots_2;
};
