#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIAtlas
struct UIAtlas_t10;
// UnityEngine.Material
struct Material_t170;
// System.Collections.Generic.List`1<UIAtlas/Sprite>
struct List_1_t214;
// UnityEngine.Texture
struct Texture_t263;
// UIAtlas/Sprite
struct Sprite_t156;
// System.String
struct String_t;
// BetterList`1<System.String>
struct BetterList_1_t293;
// UIAtlas/Coordinates
#include "AssemblyU2DCSharp_UIAtlas_Coordinates.h"

// System.Void UIAtlas::.ctor()
extern "C" void UIAtlas__ctor_m803 (UIAtlas_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIAtlas::get_spriteMaterial()
extern "C" Material_t170 * UIAtlas_get_spriteMaterial_m804 (UIAtlas_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteMaterial(UnityEngine.Material)
extern "C" void UIAtlas_set_spriteMaterial_m805 (UIAtlas_t10 * __this, Material_t170 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::get_premultipliedAlpha()
extern "C" bool UIAtlas_get_premultipliedAlpha_m806 (UIAtlas_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UIAtlas/Sprite> UIAtlas::get_spriteList()
extern "C" List_1_t214 * UIAtlas_get_spriteList_m807 (UIAtlas_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteList(System.Collections.Generic.List`1<UIAtlas/Sprite>)
extern "C" void UIAtlas_set_spriteList_m808 (UIAtlas_t10 * __this, List_1_t214 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIAtlas::get_texture()
extern "C" Texture_t263 * UIAtlas_get_texture_m809 (UIAtlas_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas/Coordinates UIAtlas::get_coordinates()
extern "C" int32_t UIAtlas_get_coordinates_m810 (UIAtlas_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_coordinates(UIAtlas/Coordinates)
extern "C" void UIAtlas_set_coordinates_m811 (UIAtlas_t10 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIAtlas::get_pixelSize()
extern "C" float UIAtlas_get_pixelSize_m812 (UIAtlas_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_pixelSize(System.Single)
extern "C" void UIAtlas_set_pixelSize_m813 (UIAtlas_t10 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIAtlas::get_replacement()
extern "C" UIAtlas_t10 * UIAtlas_get_replacement_m814 (UIAtlas_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_replacement(UIAtlas)
extern "C" void UIAtlas_set_replacement_m815 (UIAtlas_t10 * __this, UIAtlas_t10 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas/Sprite UIAtlas::GetSprite(System.String)
extern "C" Sprite_t156 * UIAtlas_GetSprite_m816 (UIAtlas_t10 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIAtlas::CompareString(System.String,System.String)
extern "C" int32_t UIAtlas_CompareString_m817 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites()
extern "C" BetterList_1_t293 * UIAtlas_GetListOfSprites_m818 (UIAtlas_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites(System.String)
extern "C" BetterList_1_t293 * UIAtlas_GetListOfSprites_m819 (UIAtlas_t10 * __this, String_t* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::References(UIAtlas)
extern "C" bool UIAtlas_References_m820 (UIAtlas_t10 * __this, UIAtlas_t10 * ___atlas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::CheckIfRelated(UIAtlas,UIAtlas)
extern "C" bool UIAtlas_CheckIfRelated_m821 (Object_t * __this /* static, unused */, UIAtlas_t10 * ___a, UIAtlas_t10 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::MarkAsDirty()
extern "C" void UIAtlas_MarkAsDirty_m822 (UIAtlas_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
