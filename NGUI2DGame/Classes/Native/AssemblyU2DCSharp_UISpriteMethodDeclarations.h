#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UISprite
struct UISprite_t9;
// UnityEngine.Material
struct Material_t170;
// UIAtlas
struct UIAtlas_t10;
// System.String
struct String_t;
// UIAtlas/Sprite
struct Sprite_t156;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t184;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t185;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t186;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t291;
// UISprite/Type
#include "AssemblyU2DCSharp_UISprite_Type.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UISprite/FillDirection
#include "AssemblyU2DCSharp_UISprite_FillDirection.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UISprite::.ctor()
extern "C" void UISprite__ctor_m1057 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite/Type UISprite::get_type()
extern "C" int32_t UISprite_get_type_m1058 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_type(UISprite/Type)
extern "C" void UISprite_set_type_m1059 (UISprite_t9 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UISprite::get_material()
extern "C" Material_t170 * UISprite_get_material_m1060 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UISprite::get_atlas()
extern "C" UIAtlas_t10 * UISprite_get_atlas_m1061 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_atlas(UIAtlas)
extern "C" void UISprite_set_atlas_m1062 (UISprite_t9 * __this, UIAtlas_t10 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UISprite::get_spriteName()
extern "C" String_t* UISprite_get_spriteName_m1063 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_spriteName(System.String)
extern "C" void UISprite_set_spriteName_m1064 (UISprite_t9 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_isValid()
extern "C" bool UISprite_get_isValid_m1065 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UISprite::get_innerUV()
extern "C" Rect_t158  UISprite_get_innerUV_m1066 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UISprite::get_outerUV()
extern "C" Rect_t158  UISprite_get_outerUV_m1067 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_fillCenter()
extern "C" bool UISprite_get_fillCenter_m1068 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillCenter(System.Boolean)
extern "C" void UISprite_set_fillCenter_m1069 (UISprite_t9 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite/FillDirection UISprite::get_fillDirection()
extern "C" int32_t UISprite_get_fillDirection_m1070 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillDirection(UISprite/FillDirection)
extern "C" void UISprite_set_fillDirection_m1071 (UISprite_t9 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UISprite::get_fillAmount()
extern "C" float UISprite_get_fillAmount_m1072 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_fillAmount(System.Single)
extern "C" void UISprite_set_fillAmount_m1073 (UISprite_t9 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_invert()
extern "C" bool UISprite_get_invert_m1074 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::set_invert(System.Boolean)
extern "C" void UISprite_set_invert_m1075 (UISprite_t9 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_relativePadding()
extern "C" Vector4_t175  UISprite_get_relativePadding_m1076 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UISprite::get_border()
extern "C" Vector4_t175  UISprite_get_border_m1077 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::get_pixelPerfectAfterResize()
extern "C" bool UISprite_get_pixelPerfectAfterResize_m1078 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas/Sprite UISprite::GetAtlasSprite()
extern "C" Sprite_t156 * UISprite_GetAtlasSprite_m1079 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SetAtlasSprite(UIAtlas/Sprite)
extern "C" void UISprite_SetAtlasSprite_m1080 (UISprite_t9 * __this, Sprite_t156 * ___sp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::UpdateUVs(System.Boolean)
extern "C" void UISprite_UpdateUVs_m1081 (UISprite_t9 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::MakePixelPerfect()
extern "C" void UISprite_MakePixelPerfect_m1082 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnStart()
extern "C" void UISprite_OnStart_m1083 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::Update()
extern "C" void UISprite_Update_m1084 (UISprite_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UISprite_OnFill_m1085 (UISprite_t9 * __this, BetterList_1_t184 * ___verts, BetterList_1_t185 * ___uvs, BetterList_1_t186 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SimpleFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UISprite_SimpleFill_m1086 (UISprite_t9 * __this, BetterList_1_t184 * ___verts, BetterList_1_t185 * ___uvs, BetterList_1_t186 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::SlicedFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UISprite_SlicedFill_m1087 (UISprite_t9 * __this, BetterList_1_t184 * ___verts, BetterList_1_t185 * ___uvs, BetterList_1_t186 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UISprite::AdjustRadial(UnityEngine.Vector2[],UnityEngine.Vector2[],System.Single,System.Boolean)
extern "C" bool UISprite_AdjustRadial_m1088 (UISprite_t9 * __this, Vector2U5BU5D_t291* ___xy, Vector2U5BU5D_t291* ___uv, float ___fill, bool ___invert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::Rotate(UnityEngine.Vector2[],System.Int32)
extern "C" void UISprite_Rotate_m1089 (UISprite_t9 * __this, Vector2U5BU5D_t291* ___v, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::FilledFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UISprite_FilledFill_m1090 (UISprite_t9 * __this, BetterList_1_t184 * ___verts, BetterList_1_t185 * ___uvs, BetterList_1_t186 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UISprite::TiledFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UISprite_TiledFill_m1091 (UISprite_t9 * __this, BetterList_1_t184 * ___verts, BetterList_1_t185 * ___uvs, BetterList_1_t186 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
