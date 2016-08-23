#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIItemStorage
struct UIItemStorage_t19;
// System.Collections.Generic.List`1<InvGameItem>
struct List_1_t18;
// InvGameItem
struct InvGameItem_t16;

// System.Void UIItemStorage::.ctor()
extern "C" void UIItemStorage__ctor_m21 (UIItemStorage_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InvGameItem> UIItemStorage::get_items()
extern "C" List_1_t18 * UIItemStorage_get_items_m22 (UIItemStorage_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem UIItemStorage::GetItem(System.Int32)
extern "C" InvGameItem_t16 * UIItemStorage_GetItem_m23 (UIItemStorage_t19 * __this, int32_t ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem UIItemStorage::Replace(System.Int32,InvGameItem)
extern "C" InvGameItem_t16 * UIItemStorage_Replace_m24 (UIItemStorage_t19 * __this, int32_t ___slot, InvGameItem_t16 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemStorage::Start()
extern "C" void UIItemStorage_Start_m25 (UIItemStorage_t19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
