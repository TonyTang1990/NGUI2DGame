#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UICamera
struct UICamera_t219;
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.GameObject
struct GameObject_t17;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UICamera/MouseOrTouch
struct MouseOrTouch_t216;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void UICamera::.ctor()
extern "C" void UICamera__ctor_m829 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::.cctor()
extern "C" void UICamera__cctor_m830 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::get_handlesEvents()
extern "C" bool UICamera_get_handlesEvents_m831 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_cachedCamera()
extern "C" Camera_t7 * UICamera_get_cachedCamera_m832 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UICamera::get_selectedObject()
extern "C" GameObject_t17 * UICamera_get_selectedObject_m833 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::set_selectedObject(UnityEngine.GameObject)
extern "C" void UICamera_set_selectedObject_m834 (Object_t * __this /* static, unused */, GameObject_t17 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_touchCount()
extern "C" int32_t UICamera_get_touchCount_m835 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::get_dragCount()
extern "C" int32_t UICamera_get_dragCount_m836 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnApplicationQuit()
extern "C" void UICamera_OnApplicationQuit_m837 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UICamera::get_mainCamera()
extern "C" Camera_t7 * UICamera_get_mainCamera_m838 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::get_eventHandler()
extern "C" UICamera_t219 * UICamera_get_eventHandler_m839 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::CompareFunc(UICamera,UICamera)
extern "C" int32_t UICamera_CompareFunc_m840 (Object_t * __this /* static, unused */, UICamera_t219 * ___a, UICamera_t219 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::Raycast(UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C" bool UICamera_Raycast_m841 (Object_t * __this /* static, unused */, Vector3_t48  ___inPos, RaycastHit_t226 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsVisible(UnityEngine.RaycastHit&)
extern "C" bool UICamera_IsVisible_m842 (Object_t * __this /* static, unused */, RaycastHit_t226 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera UICamera::FindCameraForLayer(System.Int32)
extern "C" UICamera_t219 * UICamera_FindCameraForLayer_m843 (Object_t * __this /* static, unused */, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C" int32_t UICamera_GetDirection_m844 (Object_t * __this /* static, unused */, int32_t ___up, int32_t ___down, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C" int32_t UICamera_GetDirection_m845 (Object_t * __this /* static, unused */, int32_t ___up0, int32_t ___up1, int32_t ___down0, int32_t ___down1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::GetDirection(System.String)
extern "C" int32_t UICamera_GetDirection_m846 (Object_t * __this /* static, unused */, String_t* ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera::IsHighlighted(UnityEngine.GameObject)
extern "C" bool UICamera_IsHighlighted_m847 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Highlight(UnityEngine.GameObject,System.Boolean)
extern "C" void UICamera_Highlight_m848 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, bool ___highlighted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Notify(UnityEngine.GameObject,System.String,System.Object)
extern "C" void UICamera_Notify_m849 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, String_t* ___funcName, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UICamera/MouseOrTouch UICamera::GetTouch(System.Int32)
extern "C" MouseOrTouch_t216 * UICamera_GetTouch_m850 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::RemoveTouch(System.Int32)
extern "C" void UICamera_RemoveTouch_m851 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Awake()
extern "C" void UICamera_Awake_m852 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnDestroy()
extern "C" void UICamera_OnDestroy_m853 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::OnEnable()
extern "C" void UICamera_OnEnable_m854 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::FixedUpdate()
extern "C" void UICamera_FixedUpdate_m855 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::Update()
extern "C" void UICamera_Update_m856 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessMouse()
extern "C" void UICamera_ProcessMouse_m857 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouches()
extern "C" void UICamera_ProcessTouches_m858 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessOthers()
extern "C" void UICamera_ProcessOthers_m859 (UICamera_t219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ProcessTouch(System.Boolean,System.Boolean)
extern "C" void UICamera_ProcessTouch_m860 (UICamera_t219 * __this, bool ___pressed, bool ___unpressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera::ShowTooltip(System.Boolean)
extern "C" void UICamera_ShowTooltip_m861 (UICamera_t219 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UICamera::<Raycast>m__1(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
extern "C" int32_t UICamera_U3CRaycastU3Em__1_m862 (Object_t * __this /* static, unused */, RaycastHit_t226  ___r1, RaycastHit_t226  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
