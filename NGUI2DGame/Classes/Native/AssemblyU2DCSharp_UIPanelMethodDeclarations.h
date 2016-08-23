#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIPanel
struct UIPanel_t110;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Transform
struct Transform_t8;
// BetterList`1<UIWidget>
struct BetterList_1_t189;
// BetterList`1<UIDrawCall>
struct BetterList_1_t245;
// UIWidget
struct UIWidget_t13;
// UnityEngine.Material
struct Material_t170;
// UIDrawCall
struct UIDrawCall_t174;
// UIPanel/DebugInfo
#include "AssemblyU2DCSharp_UIPanel_DebugInfo.h"
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UIPanel::.ctor()
extern "C" void UIPanel__ctor_m1003 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::.cctor()
extern "C" void UIPanel__cctor_m1004 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIPanel::get_cachedGameObject()
extern "C" GameObject_t17 * UIPanel_get_cachedGameObject_m1005 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIPanel::get_cachedTransform()
extern "C" Transform_t8 * UIPanel_get_cachedTransform_m1006 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIPanel::get_alpha()
extern "C" float UIPanel_get_alpha_m1007 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_alpha(System.Single)
extern "C" void UIPanel_set_alpha_m1008 (UIPanel_t110 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetAlphaRecursive(System.Single,System.Boolean)
extern "C" void UIPanel_SetAlphaRecursive_m1009 (UIPanel_t110 * __this, float ___val, bool ___rebuildList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel/DebugInfo UIPanel::get_debugInfo()
extern "C" int32_t UIPanel_get_debugInfo_m1010 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_debugInfo(UIPanel/DebugInfo)
extern "C" void UIPanel_set_debugInfo_m1011 (UIPanel_t110 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIPanel::get_clipping()
extern "C" int32_t UIPanel_get_clipping_m1012 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipping(UIDrawCall/Clipping)
extern "C" void UIPanel_set_clipping_m1013 (UIPanel_t110 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIPanel::get_clipRange()
extern "C" Vector4_t175  UIPanel_get_clipRange_m1014 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipRange(UnityEngine.Vector4)
extern "C" void UIPanel_set_clipRange_m1015 (UIPanel_t110 * __this, Vector4_t175  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIPanel::get_clipSoftness()
extern "C" Vector2_t55  UIPanel_get_clipSoftness_m1016 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::set_clipSoftness(UnityEngine.Vector2)
extern "C" void UIPanel_set_clipSoftness_m1017 (UIPanel_t110 * __this, Vector2_t55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIWidget> UIPanel::get_widgets()
extern "C" BetterList_1_t189 * UIPanel_get_widgets_m1018 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIDrawCall> UIPanel::get_drawCalls()
extern "C" BetterList_1_t245 * UIPanel_get_drawCalls_m1019 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool UIPanel_IsVisible_m1020 (UIPanel_t110 * __this, Vector3_t48  ___a, Vector3_t48  ___b, Vector3_t48  ___c, Vector3_t48  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UnityEngine.Vector3)
extern "C" bool UIPanel_IsVisible_m1021 (UIPanel_t110 * __this, Vector3_t48  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::IsVisible(UIWidget)
extern "C" bool UIPanel_IsVisible_m1022 (UIPanel_t110 * __this, UIWidget_t13 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::MarkMaterialAsChanged(UnityEngine.Material,System.Boolean)
extern "C" void UIPanel_MarkMaterialAsChanged_m1023 (UIPanel_t110 * __this, Material_t170 * ___mat, bool ___sort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::AddWidget(UIWidget)
extern "C" void UIPanel_AddWidget_m1024 (UIPanel_t110 * __this, UIWidget_t13 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::RemoveWidget(UIWidget)
extern "C" void UIPanel_RemoveWidget_m1025 (UIPanel_t110 * __this, UIWidget_t13 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall UIPanel::GetDrawCall(UnityEngine.Material,System.Boolean)
extern "C" UIDrawCall_t174 * UIPanel_GetDrawCall_m1026 (UIPanel_t110 * __this, Material_t170 * ___mat, bool ___createIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Awake()
extern "C" void UIPanel_Awake_m1027 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Start()
extern "C" void UIPanel_Start_m1028 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnEnable()
extern "C" void UIPanel_OnEnable_m1029 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::OnDisable()
extern "C" void UIPanel_OnDisable_m1030 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateTransformMatrix()
extern "C" void UIPanel_UpdateTransformMatrix_m1031 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::UpdateDrawcalls()
extern "C" void UIPanel_UpdateDrawcalls_m1032 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Fill(UnityEngine.Material)
extern "C" void UIPanel_Fill_m1033 (UIPanel_t110 * __this, Material_t170 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::LateUpdate()
extern "C" void UIPanel_LateUpdate_m1034 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::Refresh()
extern "C" void UIPanel_Refresh_m1035 (UIPanel_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIPanel::CalculateConstrainOffset(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector3_t48  UIPanel_CalculateConstrainOffset_m1036 (UIPanel_t110 * __this, Vector2_t55  ___min, Vector2_t55  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,UnityEngine.Bounds&,System.Boolean)
extern "C" bool UIPanel_ConstrainTargetToBounds_m1037 (UIPanel_t110 * __this, Transform_t8 * ___target, Bounds_t113 * ___targetBounds, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIPanel::ConstrainTargetToBounds(UnityEngine.Transform,System.Boolean)
extern "C" bool UIPanel_ConstrainTargetToBounds_m1038 (UIPanel_t110 * __this, Transform_t8 * ___target, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel::SetChildLayer(UnityEngine.Transform,System.Int32)
extern "C" void UIPanel_SetChildLayer_m1039 (Object_t * __this /* static, unused */, Transform_t8 * ___t, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform,System.Boolean)
extern "C" UIPanel_t110 * UIPanel_Find_m1040 (Object_t * __this /* static, unused */, Transform_t8 * ___trans, bool ___createIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIPanel::Find(UnityEngine.Transform)
extern "C" UIPanel_t110 * UIPanel_Find_m1041 (Object_t * __this /* static, unused */, Transform_t8 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
