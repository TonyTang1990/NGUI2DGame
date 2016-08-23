#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UITable
struct UITable_t145;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t144;
// UnityEngine.Transform
struct Transform_t8;

// System.Void UITable::.ctor()
extern "C" void UITable__ctor_m435 (UITable_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UITable::SortByName(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t UITable_SortByName_m436 (Object_t * __this /* static, unused */, Transform_t8 * ___a, Transform_t8 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> UITable::get_children()
extern "C" List_1_t144 * UITable_get_children_m437 (UITable_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::RepositionVariableSize(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern "C" void UITable_RepositionVariableSize_m438 (UITable_t145 * __this, List_1_t144 * ___children, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::Reposition()
extern "C" void UITable_Reposition_m439 (UITable_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::Start()
extern "C" void UITable_Start_m440 (UITable_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITable::LateUpdate()
extern "C" void UITable_LateUpdate_m441 (UITable_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
