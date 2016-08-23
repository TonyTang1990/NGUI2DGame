#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NGUITools
struct NGUITools_t167;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t206;
// UnityEngine.AudioClip
struct AudioClip_t15;
// UnityEngine.WWW
struct WWW_t38;
// UnityEngine.WWWForm
struct WWWForm_t292;
// UnityEngine.GameObject
struct GameObject_t17;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t232;
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.BoxCollider
struct BoxCollider_t138;
// UISprite
struct UISprite_t9;
// UIAtlas
struct UIAtlas_t10;
// UnityEngine.Object
struct Object_t69;
struct Object_t69_marshaled;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t8;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void NGUITools::.cctor()
extern "C" void NGUITools__cctor_m547 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUITools::get_soundVolume()
extern "C" float NGUITools_get_soundVolume_m548 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_soundVolume(System.Single)
extern "C" void NGUITools_set_soundVolume_m549 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::get_fileAccess()
extern "C" bool NGUITools_get_fileAccess_m550 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip)
extern "C" AudioSource_t206 * NGUITools_PlaySound_m551 (Object_t * __this /* static, unused */, AudioClip_t15 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single)
extern "C" AudioSource_t206 * NGUITools_PlaySound_m552 (Object_t * __this /* static, unused */, AudioClip_t15 * ___clip, float ___volume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single,System.Single)
extern "C" AudioSource_t206 * NGUITools_PlaySound_m553 (Object_t * __this /* static, unused */, AudioClip_t15 * ___clip, float ___volume, float ___pitch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW NGUITools::OpenURL(System.String)
extern "C" WWW_t38 * NGUITools_OpenURL_m554 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW NGUITools::OpenURL(System.String,UnityEngine.WWWForm)
extern "C" WWW_t38 * NGUITools_OpenURL_m555 (Object_t * __this /* static, unused */, String_t* ___url, WWWForm_t292 * ___form, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::RandomRange(System.Int32,System.Int32)
extern "C" int32_t NGUITools_RandomRange_m556 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetHierarchy(UnityEngine.GameObject)
extern "C" String_t* NGUITools_GetHierarchy_m557 (Object_t * __this /* static, unused */, GameObject_t17 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ParseColor(System.String,System.Int32)
extern "C" Color_t25  NGUITools_ParseColor_m558 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::EncodeColor(UnityEngine.Color)
extern "C" String_t* NGUITools_EncodeColor_m559 (Object_t * __this /* static, unused */, Color_t25  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::ParseSymbol(System.String,System.Int32,System.Collections.Generic.List`1<UnityEngine.Color>,System.Boolean)
extern "C" int32_t NGUITools_ParseSymbol_m560 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___index, List_1_t232 * ___colors, bool ___premultiply, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::StripSymbols(System.String)
extern "C" String_t* NGUITools_StripSymbols_m561 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera NGUITools::FindCameraForLayer(System.Int32)
extern "C" Camera_t7 * NGUITools_FindCameraForLayer_m562 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider NGUITools::AddWidgetCollider(UnityEngine.GameObject)
extern "C" BoxCollider_t138 * NGUITools_AddWidgetCollider_m563 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject)
extern "C" GameObject_t17 * NGUITools_AddChild_m564 (Object_t * __this /* static, unused */, GameObject_t17 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" GameObject_t17 * NGUITools_AddChild_m565 (Object_t * __this /* static, unused */, GameObject_t17 * ___parent, GameObject_t17 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateNextDepth(UnityEngine.GameObject)
extern "C" int32_t NGUITools_CalculateNextDepth_m566 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite NGUITools::AddSprite(UnityEngine.GameObject,UIAtlas,System.String)
extern "C" UISprite_t9 * NGUITools_AddSprite_m567 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, UIAtlas_t10 * ___atlas, String_t* ___spriteName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::GetRoot(UnityEngine.GameObject)
extern "C" GameObject_t17 * NGUITools_GetRoot_m568 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Destroy(UnityEngine.Object)
extern "C" void NGUITools_Destroy_m569 (Object_t * __this /* static, unused */, Object_t69 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::DestroyImmediate(UnityEngine.Object)
extern "C" void NGUITools_DestroyImmediate_m570 (Object_t * __this /* static, unused */, Object_t69 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String)
extern "C" void NGUITools_Broadcast_m571 (Object_t * __this /* static, unused */, String_t* ___funcName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String,System.Object)
extern "C" void NGUITools_Broadcast_m572 (Object_t * __this /* static, unused */, String_t* ___funcName, Object_t * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::IsChild(UnityEngine.Transform,UnityEngine.Transform)
extern "C" bool NGUITools_IsChild_m573 (Object_t * __this /* static, unused */, Transform_t8 * ___parent, Transform_t8 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Activate(UnityEngine.Transform)
extern "C" void NGUITools_Activate_m574 (Object_t * __this /* static, unused */, Transform_t8 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Deactivate(UnityEngine.Transform)
extern "C" void NGUITools_Deactivate_m575 (Object_t * __this /* static, unused */, Transform_t8 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_SetActive_m576 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveChildren(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_SetActiveChildren_m577 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::GetActive(UnityEngine.GameObject)
extern "C" bool NGUITools_GetActive_m578 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveSelf(UnityEngine.GameObject,System.Boolean)
extern "C" void NGUITools_SetActiveSelf_m579 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetLayer(UnityEngine.GameObject,System.Int32)
extern "C" void NGUITools_SetLayer_m580 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUITools::Round(UnityEngine.Vector3)
extern "C" Vector3_t48  NGUITools_Round_m581 (Object_t * __this /* static, unused */, Vector3_t48  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MakePixelPerfect(UnityEngine.Transform)
extern "C" void NGUITools_MakePixelPerfect_m582 (Object_t * __this /* static, unused */, Transform_t8 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::Save(System.String,System.Byte[])
extern "C" bool NGUITools_Save_m583 (Object_t * __this /* static, unused */, String_t* ___fileName, ByteU5BU5D_t159* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] NGUITools::Load(System.String)
extern "C" ByteU5BU5D_t159* NGUITools_Load_m584 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ApplyPMA(UnityEngine.Color)
extern "C" Color_t25  NGUITools_ApplyPMA_m585 (Object_t * __this /* static, unused */, Color_t25  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MarkParentAsChanged(UnityEngine.GameObject)
extern "C" void NGUITools_MarkParentAsChanged_m586 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo NGUITools::GetSystemCopyBufferProperty()
extern "C" PropertyInfo_t * NGUITools_GetSystemCopyBufferProperty_m587 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::get_clipboard()
extern "C" String_t* NGUITools_get_clipboard_m588 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_clipboard(System.String)
extern "C" void NGUITools_set_clipboard_m589 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
