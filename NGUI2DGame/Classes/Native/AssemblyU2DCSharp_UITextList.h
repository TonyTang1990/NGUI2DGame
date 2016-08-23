#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t14;
// System.Char[]
struct CharU5BU5D_t260;
// System.Collections.Generic.List`1<UITextList/Paragraph>
struct List_1_t261;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UITextList/Style
#include "AssemblyU2DCSharp_UITextList_Style.h"
// UITextList
struct  UITextList_t35  : public MonoBehaviour_t3
{
	// UITextList/Style UITextList::style
	int32_t ___style_2;
	// UILabel UITextList::textLabel
	UILabel_t14 * ___textLabel_3;
	// System.Single UITextList::maxWidth
	float ___maxWidth_4;
	// System.Single UITextList::maxHeight
	float ___maxHeight_5;
	// System.Int32 UITextList::maxEntries
	int32_t ___maxEntries_6;
	// System.Boolean UITextList::supportScrollWheel
	bool ___supportScrollWheel_7;
	// System.Char[] UITextList::mSeparator
	CharU5BU5D_t260* ___mSeparator_8;
	// System.Collections.Generic.List`1<UITextList/Paragraph> UITextList::mParagraphs
	List_1_t261 * ___mParagraphs_9;
	// System.Single UITextList::mScroll
	float ___mScroll_10;
	// System.Boolean UITextList::mSelected
	bool ___mSelected_11;
	// System.Int32 UITextList::mTotalLines
	int32_t ___mTotalLines_12;
};
