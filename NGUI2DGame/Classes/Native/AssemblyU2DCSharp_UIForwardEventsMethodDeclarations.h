#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIForwardEvents
struct UIForwardEvents_t120;
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIForwardEvents::.ctor()
extern "C" void UIForwardEvents__ctor_m314 (UIForwardEvents_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnHover(System.Boolean)
extern "C" void UIForwardEvents_OnHover_m315 (UIForwardEvents_t120 * __this, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnPress(System.Boolean)
extern "C" void UIForwardEvents_OnPress_m316 (UIForwardEvents_t120 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnClick()
extern "C" void UIForwardEvents_OnClick_m317 (UIForwardEvents_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnDoubleClick()
extern "C" void UIForwardEvents_OnDoubleClick_m318 (UIForwardEvents_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnSelect(System.Boolean)
extern "C" void UIForwardEvents_OnSelect_m319 (UIForwardEvents_t120 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnDrag(UnityEngine.Vector2)
extern "C" void UIForwardEvents_OnDrag_m320 (UIForwardEvents_t120 * __this, Vector2_t55  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnDrop(UnityEngine.GameObject)
extern "C" void UIForwardEvents_OnDrop_m321 (UIForwardEvents_t120 * __this, GameObject_t17 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnInput(System.String)
extern "C" void UIForwardEvents_OnInput_m322 (UIForwardEvents_t120 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnSubmit()
extern "C" void UIForwardEvents_OnSubmit_m323 (UIForwardEvents_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIForwardEvents::OnScroll(System.Single)
extern "C" void UIForwardEvents_OnScroll_m324 (UIForwardEvents_t120 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
