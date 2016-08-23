#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDrawCall
struct UIDrawCall_t174;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.Material
struct Material_t170;
// UnityEngine.Texture
struct Texture_t263;
// UnityEngine.Mesh
struct Mesh_t171;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t184;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t246;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t185;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t186;
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIDrawCall::.ctor()
extern "C" void UIDrawCall__ctor_m598 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_depthPass()
extern "C" bool UIDrawCall_get_depthPass_m599 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_depthPass(System.Boolean)
extern "C" void UIDrawCall_set_depthPass_m600 (UIDrawCall_t174 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_depth()
extern "C" int32_t UIDrawCall_get_depth_m601 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_depth(System.Int32)
extern "C" void UIDrawCall_set_depth_m602 (UIDrawCall_t174 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UIDrawCall::get_cachedTransform()
extern "C" Transform_t8 * UIDrawCall_get_cachedTransform_m603 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIDrawCall::get_material()
extern "C" Material_t170 * UIDrawCall_get_material_m604 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_material(UnityEngine.Material)
extern "C" void UIDrawCall_set_material_m605 (UIDrawCall_t174 * __this, Material_t170 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIDrawCall::get_mainTexture()
extern "C" Texture_t263 * UIDrawCall_get_mainTexture_m606 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_mainTexture(UnityEngine.Texture)
extern "C" void UIDrawCall_set_mainTexture_m607 (UIDrawCall_t174 * __this, Texture_t263 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIDrawCall::get_triangles()
extern "C" int32_t UIDrawCall_get_triangles_m608 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDrawCall::get_isClipped()
extern "C" bool UIDrawCall_get_isClipped_m609 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIDrawCall/Clipping UIDrawCall::get_clipping()
extern "C" int32_t UIDrawCall_get_clipping_m610 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipping(UIDrawCall/Clipping)
extern "C" void UIDrawCall_set_clipping_m611 (UIDrawCall_t174 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIDrawCall::get_clipRange()
extern "C" Vector4_t175  UIDrawCall_get_clipRange_m612 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipRange(UnityEngine.Vector4)
extern "C" void UIDrawCall_set_clipRange_m613 (UIDrawCall_t174 * __this, Vector4_t175  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIDrawCall::get_clipSoftness()
extern "C" Vector2_t55  UIDrawCall_get_clipSoftness_m614 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::set_clipSoftness(UnityEngine.Vector2)
extern "C" void UIDrawCall_set_clipSoftness_m615 (UIDrawCall_t174 * __this, Vector2_t55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UIDrawCall::GetMesh(System.Boolean&,System.Int32)
extern "C" Mesh_t171 * UIDrawCall_GetMesh_m616 (UIDrawCall_t174 * __this, bool* ___rebuildIndices, int32_t ___vertexCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::UpdateMaterials()
extern "C" void UIDrawCall_UpdateMaterials_m617 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::Set(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UIDrawCall_Set_m618 (UIDrawCall_t174 * __this, BetterList_1_t184 * ___verts, BetterList_1_t184 * ___norms, BetterList_1_t246 * ___tans, BetterList_1_t185 * ___uvs, BetterList_1_t186 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnWillRenderObject()
extern "C" void UIDrawCall_OnWillRenderObject_m619 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall::OnDestroy()
extern "C" void UIDrawCall_OnDestroy_m620 (UIDrawCall_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
