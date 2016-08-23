#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BMSymbol
struct BMSymbol_t157;
// UIAtlas
struct UIAtlas_t10;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void BMSymbol::.ctor()
extern "C" void BMSymbol__ctor_m475 (BMSymbol_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_length()
extern "C" int32_t BMSymbol_get_length_m476 (BMSymbol_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_offsetX()
extern "C" int32_t BMSymbol_get_offsetX_m477 (BMSymbol_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_offsetY()
extern "C" int32_t BMSymbol_get_offsetY_m478 (BMSymbol_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_width()
extern "C" int32_t BMSymbol_get_width_m479 (BMSymbol_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_height()
extern "C" int32_t BMSymbol_get_height_m480 (BMSymbol_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMSymbol::get_advance()
extern "C" int32_t BMSymbol_get_advance_m481 (BMSymbol_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect BMSymbol::get_uvRect()
extern "C" Rect_t158  BMSymbol_get_uvRect_m482 (BMSymbol_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMSymbol::MarkAsDirty()
extern "C" void BMSymbol_MarkAsDirty_m483 (BMSymbol_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BMSymbol::Validate(UIAtlas)
extern "C" bool BMSymbol_Validate_m484 (BMSymbol_t157 * __this, UIAtlas_t10 * ___atlas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
