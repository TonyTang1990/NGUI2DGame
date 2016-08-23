#pragma once
#include <stdint.h>
// UITextList
struct UITextList_t35;
// UIInput
struct UIInput_t36;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ChatInput
struct  ChatInput_t37  : public MonoBehaviour_t3
{
	// UITextList ChatInput::textList
	UITextList_t35 * ___textList_2;
	// System.Boolean ChatInput::fillWithDummyData
	bool ___fillWithDummyData_3;
	// UIInput ChatInput::mInput
	UIInput_t36 * ___mInput_4;
	// System.Boolean ChatInput::mIgnoreNextEnter
	bool ___mIgnoreNextEnter_5;
};
