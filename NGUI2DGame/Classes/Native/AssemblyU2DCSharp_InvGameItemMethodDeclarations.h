#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InvGameItem
struct InvGameItem_t16;
// InvBaseItem
struct InvBaseItem_t24;
// System.String
struct String_t;
// System.Collections.Generic.List`1<InvStat>
struct List_1_t23;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void InvGameItem::.ctor(System.Int32)
extern "C" void InvGameItem__ctor_m51 (InvGameItem_t16 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvGameItem::.ctor(System.Int32,InvBaseItem)
extern "C" void InvGameItem__ctor_m52 (InvGameItem_t16 * __this, int32_t ___id, InvBaseItem_t24 * ___bi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvGameItem::get_baseItemID()
extern "C" int32_t InvGameItem_get_baseItemID_m53 (InvGameItem_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvGameItem::get_baseItem()
extern "C" InvBaseItem_t24 * InvGameItem_get_baseItem_m54 (InvGameItem_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InvGameItem::get_name()
extern "C" String_t* InvGameItem_get_name_m55 (InvGameItem_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InvGameItem::get_statMultiplier()
extern "C" float InvGameItem_get_statMultiplier_m56 (InvGameItem_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color InvGameItem::get_color()
extern "C" Color_t25  InvGameItem_get_color_m57 (InvGameItem_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InvStat> InvGameItem::CalculateStats()
extern "C" List_1_t23 * InvGameItem_CalculateStats_m58 (InvGameItem_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
