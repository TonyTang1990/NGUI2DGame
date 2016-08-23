#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIFont
struct UIFont_t128;
// BMFont
struct BMFont_t153;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t230;
// UIAtlas
struct UIAtlas_t10;
// UnityEngine.Material
struct Material_t170;
// UnityEngine.Texture2D
struct Texture2D_t42;
// System.String
struct String_t;
// UIAtlas/Sprite
struct Sprite_t156;
// UnityEngine.Font
struct Font_t231;
// UnityEngine.Texture
struct Texture_t263;
// System.Text.StringBuilder
struct StringBuilder_t294;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t184;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t185;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t186;
// BMSymbol
struct BMSymbol_t157;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIFont/SymbolStyle
#include "AssemblyU2DCSharp_UIFont_SymbolStyle.h"
// UIFont/Alignment
#include "AssemblyU2DCSharp_UIFont_Alignment.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void UIFont::.ctor()
extern "C" void UIFont__ctor_m865 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMFont UIFont::get_bmFont()
extern "C" BMFont_t153 * UIFont_get_bmFont_m866 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texWidth()
extern "C" int32_t UIFont_get_texWidth_m867 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texHeight()
extern "C" int32_t UIFont_get_texHeight_m868 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_hasSymbols()
extern "C" bool UIFont_get_hasSymbols_m869 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BMSymbol> UIFont::get_symbols()
extern "C" List_1_t230 * UIFont_get_symbols_m870 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIFont::get_atlas()
extern "C" UIAtlas_t10 * UIFont_get_atlas_m871 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_atlas(UIAtlas)
extern "C" void UIFont_set_atlas_m872 (UIFont_t128 * __this, UIAtlas_t10 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIFont::get_material()
extern "C" Material_t170 * UIFont_get_material_m873 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_material(UnityEngine.Material)
extern "C" void UIFont_set_material_m874 (UIFont_t128 * __this, Material_t170 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIFont::get_pixelSize()
extern "C" float UIFont_get_pixelSize_m875 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_pixelSize(System.Single)
extern "C" void UIFont_set_pixelSize_m876 (UIFont_t128 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_premultipliedAlpha()
extern "C" bool UIFont_get_premultipliedAlpha_m877 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UIFont::get_texture()
extern "C" Texture2D_t42 * UIFont_get_texture_m878 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UIFont::get_uvRect()
extern "C" Rect_t158  UIFont_get_uvRect_m879 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_uvRect(UnityEngine.Rect)
extern "C" void UIFont_set_uvRect_m880 (UIFont_t128 * __this, Rect_t158  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIFont::get_spriteName()
extern "C" String_t* UIFont_get_spriteName_m881 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_spriteName(System.String)
extern "C" void UIFont_set_spriteName_m882 (UIFont_t128 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_horizontalSpacing()
extern "C" int32_t UIFont_get_horizontalSpacing_m883 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_horizontalSpacing(System.Int32)
extern "C" void UIFont_set_horizontalSpacing_m884 (UIFont_t128 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_verticalSpacing()
extern "C" int32_t UIFont_get_verticalSpacing_m885 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_verticalSpacing(System.Int32)
extern "C" void UIFont_set_verticalSpacing_m886 (UIFont_t128 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isValid()
extern "C" bool UIFont_get_isValid_m887 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_size()
extern "C" int32_t UIFont_get_size_m888 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas/Sprite UIFont::get_sprite()
extern "C" Sprite_t156 * UIFont_get_sprite_m889 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UIFont::get_replacement()
extern "C" UIFont_t128 * UIFont_get_replacement_m890 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_replacement(UIFont)
extern "C" void UIFont_set_replacement_m891 (UIFont_t128 * __this, UIFont_t128 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isDynamic()
extern "C" bool UIFont_get_isDynamic_m892 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UIFont::get_dynamicFont()
extern "C" Font_t231 * UIFont_get_dynamicFont_m893 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFont(UnityEngine.Font)
extern "C" void UIFont_set_dynamicFont_m894 (UIFont_t128 * __this, Font_t231 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_dynamicFontSize()
extern "C" int32_t UIFont_get_dynamicFontSize_m895 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFontSize(System.Int32)
extern "C" void UIFont_set_dynamicFontSize_m896 (UIFont_t128 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UIFont::get_dynamicFontStyle()
extern "C" int32_t UIFont_get_dynamicFontStyle_m897 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFontStyle(UnityEngine.FontStyle)
extern "C" void UIFont_set_dynamicFontStyle_m898 (UIFont_t128 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Trim()
extern "C" void UIFont_Trim_m899 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::References(UIFont)
extern "C" bool UIFont_References_m900 (UIFont_t128 * __this, UIFont_t128 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::CheckIfRelated(UIFont,UIFont)
extern "C" bool UIFont_CheckIfRelated_m901 (Object_t * __this /* static, unused */, UIFont_t128 * ___a, UIFont_t128 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIFont::get_dynamicTexture()
extern "C" Texture_t263 * UIFont_get_dynamicTexture_m902 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::MarkAsDirty()
extern "C" void UIFont_MarkAsDirty_m903 (UIFont_t128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Request(System.String)
extern "C" void UIFont_Request_m904 (UIFont_t128 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIFont::CalculatePrintedSize(System.String,System.Boolean,UIFont/SymbolStyle)
extern "C" Vector2_t55  UIFont_CalculatePrintedSize_m905 (UIFont_t128 * __this, String_t* ___text, bool ___encoding, int32_t ___symbolStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::EndLine(System.Text.StringBuilder&)
extern "C" void UIFont_EndLine_m906 (Object_t * __this /* static, unused */, StringBuilder_t294 ** ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIFont::GetEndOfLineThatFits(System.String,System.Single,System.Boolean,UIFont/SymbolStyle)
extern "C" String_t* UIFont_GetEndOfLineThatFits_m907 (UIFont_t128 * __this, String_t* ___text, float ___maxWidth, bool ___encoding, int32_t ___symbolStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::WrapText(System.String,System.String&,System.Single,System.Single,System.Int32,System.Boolean,UIFont/SymbolStyle)
extern "C" bool UIFont_WrapText_m908 (UIFont_t128 * __this, String_t* ___text, String_t** ___finalText, float ___width, float ___height, int32_t ___lines, bool ___encoding, int32_t ___symbolStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::WrapText(System.String,System.String&,System.Single,System.Single,System.Int32,System.Boolean)
extern "C" bool UIFont_WrapText_m909 (UIFont_t128 * __this, String_t* ___text, String_t** ___finalText, float ___maxWidth, float ___maxHeight, int32_t ___maxLineCount, bool ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::WrapText(System.String,System.String&,System.Single,System.Single,System.Int32)
extern "C" bool UIFont_WrapText_m910 (UIFont_t128 * __this, String_t* ___text, String_t** ___finalText, float ___maxWidth, float ___maxHeight, int32_t ___maxLineCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Align(BetterList`1<UnityEngine.Vector3>,System.Int32,UIFont/Alignment,System.Int32,System.Int32)
extern "C" void UIFont_Align_m911 (UIFont_t128 * __this, BetterList_1_t184 * ___verts, int32_t ___indexOffset, int32_t ___alignment, int32_t ___x, int32_t ___lineWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Print(System.String,UnityEngine.Color32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,System.Boolean,UIFont/SymbolStyle,UIFont/Alignment,System.Int32,System.Boolean)
extern "C" void UIFont_Print_m912 (UIFont_t128 * __this, String_t* ___text, Color32_t295  ___color, BetterList_1_t184 * ___verts, BetterList_1_t185 * ___uvs, BetterList_1_t186 * ___cols, bool ___encoding, int32_t ___symbolStyle, int32_t ___alignment, int32_t ___lineWidth, bool ___premultiply, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::GetSymbol(System.String,System.Boolean)
extern "C" BMSymbol_t157 * UIFont_GetSymbol_m913 (UIFont_t128 * __this, String_t* ___sequence, bool ___createIfMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::MatchSymbol(System.String,System.Int32,System.Int32)
extern "C" BMSymbol_t157 * UIFont_MatchSymbol_m914 (UIFont_t128 * __this, String_t* ___text, int32_t ___offset, int32_t ___textLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::AddSymbol(System.String,System.String)
extern "C" void UIFont_AddSymbol_m915 (UIFont_t128 * __this, String_t* ___sequence, String_t* ___spriteName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RemoveSymbol(System.String)
extern "C" void UIFont_RemoveSymbol_m916 (UIFont_t128 * __this, String_t* ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RenameSymbol(System.String,System.String)
extern "C" void UIFont_RenameSymbol_m917 (UIFont_t128 * __this, String_t* ___before, String_t* ___after, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::UsesSprite(System.String)
extern "C" bool UIFont_UsesSprite_m918 (UIFont_t128 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
