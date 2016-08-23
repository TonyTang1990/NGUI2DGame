#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIInput
struct UIInput_t36;
// System.String
struct String_t;

// System.Void UIInput::.ctor()
extern "C" void UIInput__ctor_m927 (UIInput_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_text()
extern "C" String_t* UIInput_get_text_m928 (UIInput_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_text(System.String)
extern "C" void UIInput_set_text_m929 (UIInput_t36 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInput::get_selected()
extern "C" bool UIInput_get_selected_m930 (UIInput_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_selected(System.Boolean)
extern "C" void UIInput_set_selected_m931 (UIInput_t36 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIInput::get_defaultText()
extern "C" String_t* UIInput_get_defaultText_m932 (UIInput_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::set_defaultText(System.String)
extern "C" void UIInput_set_defaultText_m933 (UIInput_t36 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Init()
extern "C" void UIInput_Init_m934 (UIInput_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnEnable()
extern "C" void UIInput_OnEnable_m935 (UIInput_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnDisable()
extern "C" void UIInput_OnDisable_m936 (UIInput_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnSelect(System.Boolean)
extern "C" void UIInput_OnSelect_m937 (UIInput_t36 * __this, bool ___isSelected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Update()
extern "C" void UIInput_Update_m938 (UIInput_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::OnInput(System.String)
extern "C" void UIInput_OnInput_m939 (UIInput_t36 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::Append(System.String)
extern "C" void UIInput_Append_m940 (UIInput_t36 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::UpdateLabel()
extern "C" void UIInput_UpdateLabel_m941 (UIInput_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInput::RestoreLabel()
extern "C" void UIInput_RestoreLabel_m942 (UIInput_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
