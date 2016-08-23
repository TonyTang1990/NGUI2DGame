#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDragCamera
struct UIDragCamera_t108;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIDragCamera::.ctor()
extern "C" void UIDragCamera__ctor_m257 (UIDragCamera_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::Awake()
extern "C" void UIDragCamera_Awake_m258 (UIDragCamera_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnPress(System.Boolean)
extern "C" void UIDragCamera_OnPress_m259 (UIDragCamera_t108 * __this, bool ___isPressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnDrag(UnityEngine.Vector2)
extern "C" void UIDragCamera_OnDrag_m260 (UIDragCamera_t108 * __this, Vector2_t55  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragCamera::OnScroll(System.Single)
extern "C" void UIDragCamera_OnScroll_m261 (UIDragCamera_t108 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
