#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t9;
// UIWidget
struct UIWidget_t13;
// UILabel
struct UILabel_t14;
// UnityEngine.AudioClip
struct AudioClip_t15;
// InvGameItem
struct InvGameItem_t16;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIItemSlot
struct  UIItemSlot_t12  : public MonoBehaviour_t3
{
	// UISprite UIItemSlot::icon
	UISprite_t9 * ___icon_2;
	// UIWidget UIItemSlot::background
	UIWidget_t13 * ___background_3;
	// UILabel UIItemSlot::label
	UILabel_t14 * ___label_4;
	// UnityEngine.AudioClip UIItemSlot::grabSound
	AudioClip_t15 * ___grabSound_5;
	// UnityEngine.AudioClip UIItemSlot::placeSound
	AudioClip_t15 * ___placeSound_6;
	// UnityEngine.AudioClip UIItemSlot::errorSound
	AudioClip_t15 * ___errorSound_7;
	// InvGameItem UIItemSlot::mItem
	InvGameItem_t16 * ___mItem_8;
	// System.String UIItemSlot::mText
	String_t* ___mText_9;
};
struct UIItemSlot_t12_StaticFields{
	// InvGameItem UIItemSlot::mDraggedItem
	InvGameItem_t16 * ___mDraggedItem_10;
};
