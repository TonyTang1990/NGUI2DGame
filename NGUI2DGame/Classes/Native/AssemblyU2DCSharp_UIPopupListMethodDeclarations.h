#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIPopupList
struct UIPopupList_t80;
// System.String
struct String_t;
// Localization
struct Localization_t161;
// UILabel
struct UILabel_t14;
// UnityEngine.GameObject
struct GameObject_t17;
// UIWidget
struct UIWidget_t13;
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIPopupList::.ctor()
extern "C" void UIPopupList__ctor_m344 (UIPopupList_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_isOpen()
extern "C" bool UIPopupList_get_isOpen_m345 (UIPopupList_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIPopupList::get_selection()
extern "C" String_t* UIPopupList_get_selection_m346 (UIPopupList_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_selection(System.String)
extern "C" void UIPopupList_set_selection_m347 (UIPopupList_t80 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPopupList::get_handleEvents()
extern "C" bool UIPopupList_get_handleEvents_m348 (UIPopupList_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::set_handleEvents(System.Boolean)
extern "C" void UIPopupList_set_handleEvents_m349 (UIPopupList_t80 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Start()
extern "C" void UIPopupList_Start_m350 (UIPopupList_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnLocalize(Localization)
extern "C" void UIPopupList_OnLocalize_m351 (UIPopupList_t80 * __this, Localization_t161 * ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Highlight(UILabel,System.Boolean)
extern "C" void UIPopupList_Highlight_m352 (UIPopupList_t80 * __this, UILabel_t14 * ___lbl, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemHover(UnityEngine.GameObject,System.Boolean)
extern "C" void UIPopupList_OnItemHover_m353 (UIPopupList_t80 * __this, GameObject_t17 * ___go, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Select(UILabel,System.Boolean)
extern "C" void UIPopupList_Select_m354 (UIPopupList_t80 * __this, UILabel_t14 * ___lbl, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnItemPress(UnityEngine.GameObject,System.Boolean)
extern "C" void UIPopupList_OnItemPress_m355 (UIPopupList_t80 * __this, GameObject_t17 * ___go, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnKey(UnityEngine.KeyCode)
extern "C" void UIPopupList_OnKey_m356 (UIPopupList_t80 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnSelect(System.Boolean)
extern "C" void UIPopupList_OnSelect_m357 (UIPopupList_t80 * __this, bool ___isSelected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateColor(UIWidget)
extern "C" void UIPopupList_AnimateColor_m358 (UIPopupList_t80 * __this, UIWidget_t13 * ___widget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimatePosition(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_AnimatePosition_m359 (UIPopupList_t80 * __this, UIWidget_t13 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::AnimateScale(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_AnimateScale_m360 (UIPopupList_t80 * __this, UIWidget_t13 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::Animate(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_Animate_m361 (UIPopupList_t80 * __this, UIWidget_t13 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList::OnClick()
extern "C" void UIPopupList_OnClick_m362 (UIPopupList_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
