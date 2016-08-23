#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIGeometry
struct UIGeometry_t187;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t184;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t185;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t186;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t246;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UIGeometry::.ctor()
extern "C" void UIGeometry__ctor_m662 (UIGeometry_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasVertices()
extern "C" bool UIGeometry_get_hasVertices_m663 (UIGeometry_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasTransformed()
extern "C" bool UIGeometry_get_hasTransformed_m664 (UIGeometry_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::Clear()
extern "C" void UIGeometry_Clear_m665 (UIGeometry_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::ApplyOffset(UnityEngine.Vector3)
extern "C" void UIGeometry_ApplyOffset_m666 (UIGeometry_t187 * __this, Vector3_t48  ___pivotOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::ApplyTransform(UnityEngine.Matrix4x4)
extern "C" void UIGeometry_ApplyTransform_m667 (UIGeometry_t187 * __this, Matrix4x4_t191  ___widgetToPanel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C" void UIGeometry_WriteToBuffers_m668 (UIGeometry_t187 * __this, BetterList_1_t184 * ___v, BetterList_1_t185 * ___u, BetterList_1_t186 * ___c, BetterList_1_t184 * ___n, BetterList_1_t246 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
