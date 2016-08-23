#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIWidget
struct UIWidget_t13;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.Material
struct Material_t170;
// UnityEngine.Texture
struct Texture_t263;
// UIPanel
struct UIPanel_t110;
// BetterList`1<UIWidget>
struct BetterList_1_t189;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t184;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t185;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t186;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t246;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UIWidget::.ctor()
extern "C" void UIWidget__ctor_m669 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::.cctor()
extern "C" void UIWidget__cctor_m670 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_isVisible()
extern "C" bool UIWidget_get_isVisible_m671 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIWidget::get_color()
extern "C" Color_t25  UIWidget_get_color_m672 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_color(UnityEngine.Color)
extern "C" void UIWidget_set_color_m673 (UIWidget_t13 * __this, Color_t25  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_alpha()
extern "C" float UIWidget_get_alpha_m674 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_alpha(System.Single)
extern "C" void UIWidget_set_alpha_m675 (UIWidget_t13 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_finalAlpha()
extern "C" float UIWidget_get_finalAlpha_m676 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot UIWidget::get_pivot()
extern "C" int32_t UIWidget_get_pivot_m677 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_pivot(UIWidget/Pivot)
extern "C" void UIWidget_set_pivot_m678 (UIWidget_t13 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_depth()
extern "C" int32_t UIWidget_get_depth_m679 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_depth(System.Int32)
extern "C" void UIWidget_set_depth_m680 (UIWidget_t13 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_pivotOffset()
extern "C" Vector2_t55  UIWidget_get_pivotOffset_m681 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UIWidget::get_cachedGameObject()
extern "C" GameObject_t17 * UIWidget_get_cachedGameObject_m682 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIWidget::get_cachedTransform()
extern "C" Transform_t8 * UIWidget_get_cachedTransform_m683 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIWidget::get_material()
extern "C" Material_t170 * UIWidget_get_material_m684 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_material(UnityEngine.Material)
extern "C" void UIWidget_set_material_m685 (UIWidget_t13 * __this, Material_t170 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIWidget::get_mainTexture()
extern "C" Texture_t263 * UIWidget_get_mainTexture_m686 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_mainTexture(UnityEngine.Texture)
extern "C" void UIWidget_set_mainTexture_m687 (UIWidget_t13 * __this, Texture_t263 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIWidget::get_panel()
extern "C" UIPanel_t110 * UIWidget_get_panel_m688 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_panel(UIPanel)
extern "C" void UIWidget_set_panel_m689 (UIWidget_t13 * __this, UIPanel_t110 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<UIWidget> UIWidget::Raycast(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" BetterList_1_t189 * UIWidget_Raycast_m690 (Object_t * __this /* static, unused */, GameObject_t17 * ___root, Vector2_t55  ___mousePos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::CompareFunc(UIWidget,UIWidget)
extern "C" int32_t UIWidget_CompareFunc_m691 (Object_t * __this /* static, unused */, UIWidget_t13 * ___left, UIWidget_t13 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::RemoveFromPanel()
extern "C" void UIWidget_RemoveFromPanel_m692 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MarkAsChangedLite()
extern "C" void UIWidget_MarkAsChangedLite_m693 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MarkAsChanged()
extern "C" void UIWidget_MarkAsChanged_m694 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CreatePanel()
extern "C" void UIWidget_CreatePanel_m695 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CheckLayer()
extern "C" void UIWidget_CheckLayer_m696 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CheckParent()
extern "C" void UIWidget_CheckParent_m697 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::ParentHasChanged()
extern "C" void UIWidget_ParentHasChanged_m698 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Awake()
extern "C" void UIWidget_Awake_m699 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnEnable()
extern "C" void UIWidget_OnEnable_m700 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Start()
extern "C" void UIWidget_Start_m701 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Update()
extern "C" void UIWidget_Update_m702 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDisable()
extern "C" void UIWidget_OnDisable_m703 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDestroy()
extern "C" void UIWidget_OnDestroy_m704 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateGeometry(UIPanel,System.Boolean)
extern "C" bool UIWidget_UpdateGeometry_m705 (UIWidget_t13 * __this, UIPanel_t110 * ___p, bool ___forceVisible, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C" void UIWidget_WriteToBuffers_m706 (UIWidget_t13 * __this, BetterList_1_t184 * ___v, BetterList_1_t185 * ___u, BetterList_1_t186 * ___c, BetterList_1_t184 * ___n, BetterList_1_t246 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MakePixelPerfect()
extern "C" void UIWidget_MakePixelPerfect_m707 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_relativeSize()
extern "C" Vector2_t55  UIWidget_get_relativeSize_m708 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_relativePadding()
extern "C" Vector4_t175  UIWidget_get_relativePadding_m709 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_border()
extern "C" Vector4_t175  UIWidget_get_border_m710 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_pixelPerfectAfterResize()
extern "C" bool UIWidget_get_pixelPerfectAfterResize_m711 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnStart()
extern "C" void UIWidget_OnStart_m712 (UIWidget_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UIWidget_OnFill_m713 (UIWidget_t13 * __this, BetterList_1_t184 * ___verts, BetterList_1_t185 * ___uvs, BetterList_1_t186 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::<Raycast>m__0(UIWidget,UIWidget)
extern "C" int32_t UIWidget_U3CRaycastU3Em__0_m714 (Object_t * __this /* static, unused */, UIWidget_t13 * ___w1, UIWidget_t13 * ___w2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
