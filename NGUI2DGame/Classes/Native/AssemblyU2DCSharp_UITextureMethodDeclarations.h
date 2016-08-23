#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UITexture
struct UITexture_t39;
// UnityEngine.Shader
struct Shader_t262;
// UnityEngine.Material
struct Material_t170;
// UnityEngine.Texture
struct Texture_t263;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t184;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t185;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t186;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UITexture::.ctor()
extern "C" void UITexture__ctor_m1118 (UITexture_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UITexture::get_uvRect()
extern "C" Rect_t158  UITexture_get_uvRect_m1119 (UITexture_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_uvRect(UnityEngine.Rect)
extern "C" void UITexture_set_uvRect_m1120 (UITexture_t39 * __this, Rect_t158  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UITexture::get_shader()
extern "C" Shader_t262 * UITexture_get_shader_m1121 (UITexture_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_shader(UnityEngine.Shader)
extern "C" void UITexture_set_shader_m1122 (UITexture_t39 * __this, Shader_t262 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_hasDynamicMaterial()
extern "C" bool UITexture_get_hasDynamicMaterial_m1123 (UITexture_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UITexture::get_material()
extern "C" Material_t170 * UITexture_get_material_m1124 (UITexture_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_material(UnityEngine.Material)
extern "C" void UITexture_set_material_m1125 (UITexture_t39 * __this, Material_t170 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UITexture::get_premultipliedAlpha()
extern "C" bool UITexture_get_premultipliedAlpha_m1126 (UITexture_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UITexture::get_mainTexture()
extern "C" Texture_t263 * UITexture_get_mainTexture_m1127 (UITexture_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::set_mainTexture(UnityEngine.Texture)
extern "C" void UITexture_set_mainTexture_m1128 (UITexture_t39 * __this, Texture_t263 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::OnDestroy()
extern "C" void UITexture_OnDestroy_m1129 (UITexture_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::Cleanup()
extern "C" void UITexture_Cleanup_m1130 (UITexture_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::MakePixelPerfect()
extern "C" void UITexture_MakePixelPerfect_m1131 (UITexture_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITexture::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UITexture_OnFill_m1132 (UITexture_t39 * __this, BetterList_1_t184 * ___verts, BetterList_1_t185 * ___uvs, BetterList_1_t186 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
