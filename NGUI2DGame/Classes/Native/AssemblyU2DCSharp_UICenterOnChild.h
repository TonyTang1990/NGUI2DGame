#pragma once
#include <stdint.h>
// SpringPanel/OnFinished
struct OnFinished_t99;
// UIDraggablePanel
struct UIDraggablePanel_t100;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UICenterOnChild
struct  UICenterOnChild_t101  : public MonoBehaviour_t3
{
	// System.Single UICenterOnChild::springStrength
	float ___springStrength_2;
	// SpringPanel/OnFinished UICenterOnChild::onFinished
	OnFinished_t99 * ___onFinished_3;
	// UIDraggablePanel UICenterOnChild::mDrag
	UIDraggablePanel_t100 * ___mDrag_4;
	// UnityEngine.GameObject UICenterOnChild::mCenteredObject
	GameObject_t17 * ___mCenteredObject_5;
};
