#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIScrollBar
struct UIScrollBar_t119;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.Camera
struct Camera_t7;
// UISprite
struct UISprite_t9;
// UnityEngine.GameObject
struct GameObject_t17;
// UIScrollBar/Direction
#include "AssemblyU2DCSharp_UIScrollBar_Direction.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIScrollBar::.ctor()
extern "C" void UIScrollBar__ctor_m379 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIScrollBar::get_cachedTransform()
extern "C" Transform_t8 * UIScrollBar_get_cachedTransform_m380 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UIScrollBar::get_cachedCamera()
extern "C" Camera_t7 * UIScrollBar_get_cachedCamera_m381 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite UIScrollBar::get_background()
extern "C" UISprite_t9 * UIScrollBar_get_background_m382 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_background(UISprite)
extern "C" void UIScrollBar_set_background_m383 (UIScrollBar_t119 * __this, UISprite_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite UIScrollBar::get_foreground()
extern "C" UISprite_t9 * UIScrollBar_get_foreground_m384 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_foreground(UISprite)
extern "C" void UIScrollBar_set_foreground_m385 (UIScrollBar_t119 * __this, UISprite_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIScrollBar/Direction UIScrollBar::get_direction()
extern "C" int32_t UIScrollBar_get_direction_m386 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_direction(UIScrollBar/Direction)
extern "C" void UIScrollBar_set_direction_m387 (UIScrollBar_t119 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIScrollBar::get_inverted()
extern "C" bool UIScrollBar_get_inverted_m388 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_inverted(System.Boolean)
extern "C" void UIScrollBar_set_inverted_m389 (UIScrollBar_t119 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIScrollBar::get_scrollValue()
extern "C" float UIScrollBar_get_scrollValue_m390 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_scrollValue(System.Single)
extern "C" void UIScrollBar_set_scrollValue_m391 (UIScrollBar_t119 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIScrollBar::get_barSize()
extern "C" float UIScrollBar_get_barSize_m392 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_barSize(System.Single)
extern "C" void UIScrollBar_set_barSize_m393 (UIScrollBar_t119 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIScrollBar::get_alpha()
extern "C" float UIScrollBar_get_alpha_m394 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::set_alpha(System.Single)
extern "C" void UIScrollBar_set_alpha_m395 (UIScrollBar_t119 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::CenterOnPos(UnityEngine.Vector2)
extern "C" void UIScrollBar_CenterOnPos_m396 (UIScrollBar_t119 * __this, Vector2_t55  ___localPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::Reposition(UnityEngine.Vector2)
extern "C" void UIScrollBar_Reposition_m397 (UIScrollBar_t119 * __this, Vector2_t55  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnPressBackground(UnityEngine.GameObject,System.Boolean)
extern "C" void UIScrollBar_OnPressBackground_m398 (UIScrollBar_t119 * __this, GameObject_t17 * ___go, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnDragBackground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void UIScrollBar_OnDragBackground_m399 (UIScrollBar_t119 * __this, GameObject_t17 * ___go, Vector2_t55  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnPressForeground(UnityEngine.GameObject,System.Boolean)
extern "C" void UIScrollBar_OnPressForeground_m400 (UIScrollBar_t119 * __this, GameObject_t17 * ___go, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::OnDragForeground(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void UIScrollBar_OnDragForeground_m401 (UIScrollBar_t119 * __this, GameObject_t17 * ___go, Vector2_t55  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::Start()
extern "C" void UIScrollBar_Start_m402 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::Update()
extern "C" void UIScrollBar_Update_m403 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar::ForceUpdate()
extern "C" void UIScrollBar_ForceUpdate_m404 (UIScrollBar_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
