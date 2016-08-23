#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t301;
// UnityEngine.Material
struct Material_t170;
// UnityEngine.Material[]
struct MaterialU5BU5D_t329;

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t170 * Renderer_get_material_m1299 (Renderer_t301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C" Material_t170 * Renderer_get_sharedMaterial_m1612 (Renderer_t301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
extern "C" MaterialU5BU5D_t329* Renderer_get_sharedMaterials_m1610 (Renderer_t301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C" void Renderer_set_sharedMaterials_m1611 (Renderer_t301 * __this, MaterialU5BU5D_t329* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
