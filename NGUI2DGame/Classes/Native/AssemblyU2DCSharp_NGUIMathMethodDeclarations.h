#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NGUIMath
struct NGUIMath_t165;
// System.String
struct String_t;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t290;
// UIWidget
struct UIWidget_t13;
// UnityEngine.Transform
struct Transform_t8;
// UISprite
struct UISprite_t9;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t291;
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Single NGUIMath::Lerp(System.Single,System.Single,System.Single)
extern "C" float NGUIMath_Lerp_m512 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ClampIndex(System.Int32,System.Int32)
extern "C" int32_t NGUIMath_ClampIndex_m513 (Object_t * __this /* static, unused */, int32_t ___val, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::RepeatIndex(System.Int32,System.Int32)
extern "C" int32_t NGUIMath_RepeatIndex_m514 (Object_t * __this /* static, unused */, int32_t ___val, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::WrapAngle(System.Single)
extern "C" float NGUIMath_WrapAngle_m515 (Object_t * __this /* static, unused */, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::Wrap01(System.Single)
extern "C" float NGUIMath_Wrap01_m516 (Object_t * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::HexToDecimal(System.Char)
extern "C" int32_t NGUIMath_HexToDecimal_m517 (Object_t * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char NGUIMath::DecimalToHexChar(System.Int32)
extern "C" uint16_t NGUIMath_DecimalToHexChar_m518 (Object_t * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex(System.Int32)
extern "C" String_t* NGUIMath_DecimalToHex_m519 (Object_t * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ColorToInt(UnityEngine.Color)
extern "C" int32_t NGUIMath_ColorToInt_m520 (Object_t * __this /* static, unused */, Color_t25  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::IntToColor(System.Int32)
extern "C" Color_t25  NGUIMath_IntToColor_m521 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::IntToBinary(System.Int32,System.Int32)
extern "C" String_t* NGUIMath_IntToBinary_m522 (Object_t * __this /* static, unused */, int32_t ___val, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::HexToColor(System.UInt32)
extern "C" Color_t25  NGUIMath_HexToColor_m523 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToTexCoords(UnityEngine.Rect,System.Int32,System.Int32)
extern "C" Rect_t158  NGUIMath_ConvertToTexCoords_m524 (Object_t * __this /* static, unused */, Rect_t158  ___rect, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C" Rect_t158  NGUIMath_ConvertToPixels_m525 (Object_t * __this /* static, unused */, Rect_t158  ___rect, int32_t ___width, int32_t ___height, bool ___round, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect)
extern "C" Rect_t158  NGUIMath_MakePixelPerfect_m526 (Object_t * __this /* static, unused */, Rect_t158  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C" Rect_t158  NGUIMath_MakePixelPerfect_m527 (Object_t * __this /* static, unused */, Rect_t158  ___rect, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::ApplyHalfPixelOffset(UnityEngine.Vector3)
extern "C" Vector3_t48  NGUIMath_ApplyHalfPixelOffset_m528 (Object_t * __this /* static, unused */, Vector3_t48  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::ApplyHalfPixelOffset(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t48  NGUIMath_ApplyHalfPixelOffset_m529 (Object_t * __this /* static, unused */, Vector3_t48  ___pos, Vector3_t48  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ConstrainRect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t55  NGUIMath_ConstrainRect_m530 (Object_t * __this /* static, unused */, Vector2_t55  ___minRect, Vector2_t55  ___maxRect, Vector2_t55  ___minArea, Vector2_t55  ___maxArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] NGUIMath::CalculateWidgetCorners(UIWidget)
extern "C" Vector3U5BU5D_t290* NGUIMath_CalculateWidgetCorners_m531 (Object_t * __this /* static, unused */, UIWidget_t13 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateAbsoluteWidgetBounds(UnityEngine.Transform)
extern "C" Bounds_t113  NGUIMath_CalculateAbsoluteWidgetBounds_m532 (Object_t * __this /* static, unused */, Transform_t8 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform)
extern "C" Bounds_t113  NGUIMath_CalculateRelativeWidgetBounds_m533 (Object_t * __this /* static, unused */, Transform_t8 * ___root, Transform_t8 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeInnerBounds(UnityEngine.Transform,UISprite)
extern "C" Bounds_t113  NGUIMath_CalculateRelativeInnerBounds_m534 (Object_t * __this /* static, unused */, Transform_t8 * ___root, UISprite_t9 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform)
extern "C" Bounds_t113  NGUIMath_CalculateRelativeWidgetBounds_m535 (Object_t * __this /* static, unused */, Transform_t8 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringDampen(UnityEngine.Vector3&,System.Single,System.Single)
extern "C" Vector3_t48  NGUIMath_SpringDampen_m536 (Object_t * __this /* static, unused */, Vector3_t48 * ___velocity, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringDampen(UnityEngine.Vector2&,System.Single,System.Single)
extern "C" Vector2_t55  NGUIMath_SpringDampen_m537 (Object_t * __this /* static, unused */, Vector2_t55 * ___velocity, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single)
extern "C" float NGUIMath_SpringLerp_m538 (Object_t * __this /* static, unused */, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single,System.Single,System.Single)
extern "C" float NGUIMath_SpringLerp_m539 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringLerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
extern "C" Vector2_t55  NGUIMath_SpringLerp_m540 (Object_t * __this /* static, unused */, Vector2_t55  ___from, Vector2_t55  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringLerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C" Vector3_t48  NGUIMath_SpringLerp_m541 (Object_t * __this /* static, unused */, Vector3_t48  ___from, Vector3_t48  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion NGUIMath::SpringLerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C" Quaternion_t50  NGUIMath_SpringLerp_m542 (Object_t * __this /* static, unused */, Quaternion_t50  ___from, Quaternion_t50  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::RotateTowards(System.Single,System.Single,System.Single)
extern "C" float NGUIMath_RotateTowards_m543 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___maxAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistancePointToLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float NGUIMath_DistancePointToLineSegment_m544 (Object_t * __this /* static, unused */, Vector2_t55  ___point, Vector2_t55  ___a, Vector2_t55  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C" float NGUIMath_DistanceToRectangle_m545 (Object_t * __this /* static, unused */, Vector2U5BU5D_t291* ___screenPoints, Vector2_t55  ___mousePos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector3[],UnityEngine.Vector2,UnityEngine.Camera)
extern "C" float NGUIMath_DistanceToRectangle_m546 (Object_t * __this /* static, unused */, Vector3U5BU5D_t290* ___worldPoints, Vector2_t55  ___mousePos, Camera_t7 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
