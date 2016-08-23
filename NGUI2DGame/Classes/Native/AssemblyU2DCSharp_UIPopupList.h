#pragma once
#include <stdint.h>
// UIPopupList
struct UIPopupList_t80;
// UIAtlas
struct UIAtlas_t10;
// UIFont
struct UIFont_t128;
// UILabel
struct UILabel_t14;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t129;
// UnityEngine.GameObject
struct GameObject_t17;
// UIPopupList/OnSelectionChange
struct OnSelectionChange_t127;
// UIPanel
struct UIPanel_t110;
// UISprite
struct UISprite_t9;
// System.Collections.Generic.List`1<UILabel>
struct List_1_t130;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIPopupList/Position
#include "AssemblyU2DCSharp_UIPopupList_Position.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIPopupList
struct  UIPopupList_t80  : public MonoBehaviour_t3
{
	// UIAtlas UIPopupList::atlas
	UIAtlas_t10 * ___atlas_4;
	// UIFont UIPopupList::font
	UIFont_t128 * ___font_5;
	// UILabel UIPopupList::textLabel
	UILabel_t14 * ___textLabel_6;
	// System.String UIPopupList::backgroundSprite
	String_t* ___backgroundSprite_7;
	// System.String UIPopupList::highlightSprite
	String_t* ___highlightSprite_8;
	// UIPopupList/Position UIPopupList::position
	int32_t ___position_9;
	// System.Collections.Generic.List`1<System.String> UIPopupList::items
	List_1_t129 * ___items_10;
	// UnityEngine.Vector2 UIPopupList::padding
	Vector2_t55  ___padding_11;
	// System.Single UIPopupList::textScale
	float ___textScale_12;
	// UnityEngine.Color UIPopupList::textColor
	Color_t25  ___textColor_13;
	// UnityEngine.Color UIPopupList::backgroundColor
	Color_t25  ___backgroundColor_14;
	// UnityEngine.Color UIPopupList::highlightColor
	Color_t25  ___highlightColor_15;
	// System.Boolean UIPopupList::isAnimated
	bool ___isAnimated_16;
	// System.Boolean UIPopupList::isLocalized
	bool ___isLocalized_17;
	// UnityEngine.GameObject UIPopupList::eventReceiver
	GameObject_t17 * ___eventReceiver_18;
	// System.String UIPopupList::functionName
	String_t* ___functionName_19;
	// UIPopupList/OnSelectionChange UIPopupList::onSelectionChange
	OnSelectionChange_t127 * ___onSelectionChange_20;
	// System.String UIPopupList::mSelectedItem
	String_t* ___mSelectedItem_21;
	// UIPanel UIPopupList::mPanel
	UIPanel_t110 * ___mPanel_22;
	// UnityEngine.GameObject UIPopupList::mChild
	GameObject_t17 * ___mChild_23;
	// UISprite UIPopupList::mBackground
	UISprite_t9 * ___mBackground_24;
	// UISprite UIPopupList::mHighlight
	UISprite_t9 * ___mHighlight_25;
	// UILabel UIPopupList::mHighlightedLabel
	UILabel_t14 * ___mHighlightedLabel_26;
	// System.Collections.Generic.List`1<UILabel> UIPopupList::mLabelList
	List_1_t130 * ___mLabelList_27;
	// System.Single UIPopupList::mBgBorder
	float ___mBgBorder_28;
};
struct UIPopupList_t80_StaticFields{
	// UIPopupList UIPopupList::current
	UIPopupList_t80 * ___current_3;
};
