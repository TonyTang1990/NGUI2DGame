﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t193706927 * Renderer_get_material_m2553789785 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C"  Material_t193706927 * Renderer_get_sharedMaterial_m155010392 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
extern "C"  MaterialU5BU5D_t3123989686* Renderer_get_sharedMaterials_m4026934221 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C"  void Renderer_set_sharedMaterials_m2669445156 (Renderer_t257310565 * __this, MaterialU5BU5D_t3123989686* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C"  int32_t Renderer_get_sortingLayerID_m2403577271 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C"  int32_t Renderer_get_sortingOrder_m1544525007 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
