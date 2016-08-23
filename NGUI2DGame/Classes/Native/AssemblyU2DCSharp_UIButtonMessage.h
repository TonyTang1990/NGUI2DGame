#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIButtonMessage/Trigger
#include "AssemblyU2DCSharp_UIButtonMessage_Trigger.h"
// UIButtonMessage
struct  UIButtonMessage_t88  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject UIButtonMessage::target
	GameObject_t17 * ___target_2;
	// System.String UIButtonMessage::functionName
	String_t* ___functionName_3;
	// UIButtonMessage/Trigger UIButtonMessage::trigger
	int32_t ___trigger_4;
	// System.Boolean UIButtonMessage::includeChildren
	bool ___includeChildren_5;
	// System.Boolean UIButtonMessage::mStarted
	bool ___mStarted_6;
	// System.Boolean UIButtonMessage::mHighlighted
	bool ___mHighlighted_7;
};
