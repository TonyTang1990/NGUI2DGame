﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BMGlyph
struct BMGlyph_t155;

// System.Void BMGlyph::.ctor()
extern "C" void BMGlyph__ctor_m471 (BMGlyph_t155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMGlyph::GetKerning(System.Int32)
extern "C" int32_t BMGlyph_GetKerning_m472 (BMGlyph_t155 * __this, int32_t ___previousChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMGlyph::SetKerning(System.Int32,System.Int32)
extern "C" void BMGlyph_SetKerning_m473 (BMGlyph_t155 * __this, int32_t ___previousChar, int32_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMGlyph::Trim(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void BMGlyph_Trim_m474 (BMGlyph_t155 * __this, int32_t ___xMin, int32_t ___yMin, int32_t ___xMax, int32_t ___yMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
