#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIButton
struct UIButton_t82;

// System.Void UIButton::.ctor()
extern "C" void UIButton__ctor_m159 (UIButton_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::OnEnable()
extern "C" void UIButton_OnEnable_m160 (UIButton_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::OnHover(System.Boolean)
extern "C" void UIButton_OnHover_m161 (UIButton_t82 * __this, bool ___isOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::OnPress(System.Boolean)
extern "C" void UIButton_OnPress_m162 (UIButton_t82 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIButton::get_isEnabled()
extern "C" bool UIButton_get_isEnabled_m163 (UIButton_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::set_isEnabled(System.Boolean)
extern "C" void UIButton_set_isEnabled_m164 (UIButton_t82 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::UpdateColor(System.Boolean,System.Boolean)
extern "C" void UIButton_UpdateColor_m165 (UIButton_t82 * __this, bool ___shouldBeEnabled, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
