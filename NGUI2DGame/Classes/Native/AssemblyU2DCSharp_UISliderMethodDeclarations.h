#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UISlider
struct UISlider_t137;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UISlider::.ctor()
extern "C" void UISlider__ctor_m409 (UISlider_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISlider::get_sliderValue()
extern "C" float UISlider_get_sliderValue_m410 (UISlider_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_sliderValue(System.Single)
extern "C" void UISlider_set_sliderValue_m411 (UISlider_t137 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UISlider::get_fullSize()
extern "C" Vector2_t55  UISlider_get_fullSize_m412 (UISlider_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::set_fullSize(UnityEngine.Vector2)
extern "C" void UISlider_set_fullSize_m413 (UISlider_t137 * __this, Vector2_t55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Init()
extern "C" void UISlider_Init_m414 (UISlider_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Awake()
extern "C" void UISlider_Awake_m415 (UISlider_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Start()
extern "C" void UISlider_Start_m416 (UISlider_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPress(System.Boolean)
extern "C" void UISlider_OnPress_m417 (UISlider_t137 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDrag(UnityEngine.Vector2)
extern "C" void UISlider_OnDrag_m418 (UISlider_t137 * __this, Vector2_t55  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnPressThumb(UnityEngine.GameObject,System.Boolean)
extern "C" void UISlider_OnPressThumb_m419 (UISlider_t137 * __this, GameObject_t17 * ___go, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnDragThumb(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void UISlider_OnDragThumb_m420 (UISlider_t137 * __this, GameObject_t17 * ___go, Vector2_t55  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::OnKey(UnityEngine.KeyCode)
extern "C" void UISlider_OnKey_m421 (UISlider_t137 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::UpdateDrag()
extern "C" void UISlider_UpdateDrag_m422 (UISlider_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::Set(System.Single,System.Boolean)
extern "C" void UISlider_Set_m423 (UISlider_t137 * __this, float ___input, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISlider::ForceUpdate()
extern "C" void UISlider_ForceUpdate_m424 (UISlider_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
