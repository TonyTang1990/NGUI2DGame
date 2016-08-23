#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEventListener
struct UIEventListener_t183;
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UIEventListener::.ctor()
extern "C" void UIEventListener__ctor_m649 (UIEventListener_t183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnSubmit()
extern "C" void UIEventListener_OnSubmit_m650 (UIEventListener_t183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnClick()
extern "C" void UIEventListener_OnClick_m651 (UIEventListener_t183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDoubleClick()
extern "C" void UIEventListener_OnDoubleClick_m652 (UIEventListener_t183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnHover(System.Boolean)
extern "C" void UIEventListener_OnHover_m653 (UIEventListener_t183 * __this, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnPress(System.Boolean)
extern "C" void UIEventListener_OnPress_m654 (UIEventListener_t183 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnSelect(System.Boolean)
extern "C" void UIEventListener_OnSelect_m655 (UIEventListener_t183 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnScroll(System.Single)
extern "C" void UIEventListener_OnScroll_m656 (UIEventListener_t183 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDrag(UnityEngine.Vector2)
extern "C" void UIEventListener_OnDrag_m657 (UIEventListener_t183 * __this, Vector2_t55  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnDrop(UnityEngine.GameObject)
extern "C" void UIEventListener_OnDrop_m658 (UIEventListener_t183 * __this, GameObject_t17 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnInput(System.String)
extern "C" void UIEventListener_OnInput_m659 (UIEventListener_t183 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener::OnKey(UnityEngine.KeyCode)
extern "C" void UIEventListener_OnKey_m660 (UIEventListener_t183 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIEventListener UIEventListener::Get(UnityEngine.GameObject)
extern "C" UIEventListener_t183 * UIEventListener_Get_m661 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
