#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDraggableCamera
struct UIDraggableCamera_t106;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIDraggableCamera::.ctor()
extern "C" void UIDraggableCamera__ctor_m274 (UIDraggableCamera_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIDraggableCamera::get_currentMomentum()
extern "C" Vector2_t55  UIDraggableCamera_get_currentMomentum_m275 (UIDraggableCamera_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::set_currentMomentum(UnityEngine.Vector2)
extern "C" void UIDraggableCamera_set_currentMomentum_m276 (UIDraggableCamera_t106 * __this, Vector2_t55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Awake()
extern "C" void UIDraggableCamera_Awake_m277 (UIDraggableCamera_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Start()
extern "C" void UIDraggableCamera_Start_m278 (UIDraggableCamera_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDraggableCamera::CalculateConstrainOffset()
extern "C" Vector3_t48  UIDraggableCamera_CalculateConstrainOffset_m279 (UIDraggableCamera_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggableCamera::ConstrainToBounds(System.Boolean)
extern "C" bool UIDraggableCamera_ConstrainToBounds_m280 (UIDraggableCamera_t106 * __this, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Press(System.Boolean)
extern "C" void UIDraggableCamera_Press_m281 (UIDraggableCamera_t106 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Drag(UnityEngine.Vector2)
extern "C" void UIDraggableCamera_Drag_m282 (UIDraggableCamera_t106 * __this, Vector2_t55  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Scroll(System.Single)
extern "C" void UIDraggableCamera_Scroll_m283 (UIDraggableCamera_t106 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggableCamera::Update()
extern "C" void UIDraggableCamera_Update_m284 (UIDraggableCamera_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
