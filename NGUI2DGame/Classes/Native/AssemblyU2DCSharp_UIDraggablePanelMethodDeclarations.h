#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIDraggablePanel
struct UIDraggablePanel_t100;
// UIPanel
struct UIPanel_t110;
// UIScrollBar
struct UIScrollBar_t119;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UIDraggablePanel::.ctor()
extern "C" void UIDraggablePanel__ctor_m289 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIDraggablePanel::get_panel()
extern "C" UIPanel_t110 * UIDraggablePanel_get_panel_m290 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIDraggablePanel::get_bounds()
extern "C" Bounds_t113  UIDraggablePanel_get_bounds_m291 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::get_shouldMoveHorizontally()
extern "C" bool UIDraggablePanel_get_shouldMoveHorizontally_m292 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::get_shouldMoveVertically()
extern "C" bool UIDraggablePanel_get_shouldMoveVertically_m293 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::get_shouldMove()
extern "C" bool UIDraggablePanel_get_shouldMove_m294 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UIDraggablePanel::get_currentMomentum()
extern "C" Vector3_t48  UIDraggablePanel_get_currentMomentum_m295 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::set_currentMomentum(UnityEngine.Vector3)
extern "C" void UIDraggablePanel_set_currentMomentum_m296 (UIDraggablePanel_t100 * __this, Vector3_t48  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Awake()
extern "C" void UIDraggablePanel_Awake_m297 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnDestroy()
extern "C" void UIDraggablePanel_OnDestroy_m298 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnPanelChange()
extern "C" void UIDraggablePanel_OnPanelChange_m299 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Start()
extern "C" void UIDraggablePanel_Start_m300 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIDraggablePanel::RestrictWithinBounds(System.Boolean)
extern "C" bool UIDraggablePanel_RestrictWithinBounds_m301 (UIDraggablePanel_t100 * __this, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::DisableSpring()
extern "C" void UIDraggablePanel_DisableSpring_m302 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::UpdateScrollbars(System.Boolean)
extern "C" void UIDraggablePanel_UpdateScrollbars_m303 (UIDraggablePanel_t100 * __this, bool ___recalculateBounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::SetDragAmount(System.Single,System.Single,System.Boolean)
extern "C" void UIDraggablePanel_SetDragAmount_m304 (UIDraggablePanel_t100 * __this, float ___x, float ___y, bool ___updateScrollbars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::ResetPosition()
extern "C" void UIDraggablePanel_ResetPosition_m305 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnHorizontalBar(UIScrollBar)
extern "C" void UIDraggablePanel_OnHorizontalBar_m306 (UIDraggablePanel_t100 * __this, UIScrollBar_t119 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::OnVerticalBar(UIScrollBar)
extern "C" void UIDraggablePanel_OnVerticalBar_m307 (UIDraggablePanel_t100 * __this, UIScrollBar_t119 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::MoveRelative(UnityEngine.Vector3)
extern "C" void UIDraggablePanel_MoveRelative_m308 (UIDraggablePanel_t100 * __this, Vector3_t48  ___relative, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::MoveAbsolute(UnityEngine.Vector3)
extern "C" void UIDraggablePanel_MoveAbsolute_m309 (UIDraggablePanel_t100 * __this, Vector3_t48  ___absolute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Press(System.Boolean)
extern "C" void UIDraggablePanel_Press_m310 (UIDraggablePanel_t100 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Drag()
extern "C" void UIDraggablePanel_Drag_m311 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::Scroll(System.Single)
extern "C" void UIDraggablePanel_Scroll_m312 (UIDraggablePanel_t100 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDraggablePanel::LateUpdate()
extern "C" void UIDraggablePanel_LateUpdate_m313 (UIDraggablePanel_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
