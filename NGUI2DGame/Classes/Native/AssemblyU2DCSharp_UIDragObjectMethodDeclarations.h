#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDragObject
struct UIDragObject_t111;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIDragObject::.ctor()
extern "C" void UIDragObject__ctor_m262 (UIDragObject_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::FindPanel()
extern "C" void UIDragObject_FindPanel_m263 (UIDragObject_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnPress(System.Boolean)
extern "C" void UIDragObject_OnPress_m264 (UIDragObject_t111 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnDrag(UnityEngine.Vector2)
extern "C" void UIDragObject_OnDrag_m265 (UIDragObject_t111 * __this, Vector2_t55  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::LateUpdate()
extern "C" void UIDragObject_LateUpdate_m266 (UIDragObject_t111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDragObject::OnScroll(System.Single)
extern "C" void UIDragObject_OnScroll_m267 (UIDragObject_t111 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
