#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UITextList
struct UITextList_t35;
// System.String
struct String_t;

// System.Void UITextList::.ctor()
extern "C" void UITextList__ctor_m1110 (UITextList_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Clear()
extern "C" void UITextList_Clear_m1111 (UITextList_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Add(System.String)
extern "C" void UITextList_Add_m1112 (UITextList_t35 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Add(System.String,System.Boolean)
extern "C" void UITextList_Add_m1113 (UITextList_t35 * __this, String_t* ___text, bool ___updateVisible, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::Awake()
extern "C" void UITextList_Awake_m1114 (UITextList_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnSelect(System.Boolean)
extern "C" void UITextList_OnSelect_m1115 (UITextList_t35 * __this, bool ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::UpdateVisibleText()
extern "C" void UITextList_UpdateVisibleText_m1116 (UITextList_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITextList::OnScroll(System.Single)
extern "C" void UITextList_OnScroll_m1117 (UITextList_t35 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
