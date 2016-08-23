#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIRoot
struct UIRoot_t115;
// System.Collections.Generic.List`1<UIRoot>
struct List_1_t250;
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void UIRoot::.ctor()
extern "C" void UIRoot__ctor_m1042 (UIRoot_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::.cctor()
extern "C" void UIRoot__cctor_m1043 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UIRoot> UIRoot::get_list()
extern "C" List_1_t250 * UIRoot_get_list_m1044 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIRoot::get_activeHeight()
extern "C" int32_t UIRoot_get_activeHeight_m1045 (UIRoot_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::get_pixelSizeAdjustment()
extern "C" float UIRoot_get_pixelSizeAdjustment_m1046 (UIRoot_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(UnityEngine.GameObject)
extern "C" float UIRoot_GetPixelSizeAdjustment_m1047 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIRoot::GetPixelSizeAdjustment(System.Int32)
extern "C" float UIRoot_GetPixelSizeAdjustment_m1048 (UIRoot_t115 * __this, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Awake()
extern "C" void UIRoot_Awake_m1049 (UIRoot_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::OnDestroy()
extern "C" void UIRoot_OnDestroy_m1050 (UIRoot_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Start()
extern "C" void UIRoot_Start_m1051 (UIRoot_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Update()
extern "C" void UIRoot_Update_m1052 (UIRoot_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String)
extern "C" void UIRoot_Broadcast_m1053 (Object_t * __this /* static, unused */, String_t* ___funcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIRoot::Broadcast(System.String,System.Object)
extern "C" void UIRoot_Broadcast_m1054 (Object_t * __this /* static, unused */, String_t* ___funcName, Object_t * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
