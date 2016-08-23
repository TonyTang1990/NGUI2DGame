#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIItemSlot
struct UIItemSlot_t12;
// InvGameItem
struct InvGameItem_t16;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIItemSlot::.ctor()
extern "C" void UIItemSlot__ctor_m14 (UIItemSlot_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem UIItemSlot::get_observedItem()
// InvGameItem UIItemSlot::Replace(InvGameItem)
// System.Void UIItemSlot::OnTooltip(System.Boolean)
extern "C" void UIItemSlot_OnTooltip_m15 (UIItemSlot_t12 * __this, bool ___show, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemSlot::OnClick()
extern "C" void UIItemSlot_OnClick_m16 (UIItemSlot_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemSlot::OnDrag(UnityEngine.Vector2)
extern "C" void UIItemSlot_OnDrag_m17 (UIItemSlot_t12 * __this, Vector2_t55  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemSlot::OnDrop(UnityEngine.GameObject)
extern "C" void UIItemSlot_OnDrop_m18 (UIItemSlot_t12 * __this, GameObject_t17 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemSlot::UpdateCursor()
extern "C" void UIItemSlot_UpdateCursor_m19 (UIItemSlot_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemSlot::Update()
extern "C" void UIItemSlot_Update_m20 (UIItemSlot_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
