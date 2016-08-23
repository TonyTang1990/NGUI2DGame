#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t171;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t290;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t330;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t291;
// UnityEngine.Color32[]
struct Color32U5BU5D_t331;
// System.Int32[]
struct Int32U5BU5D_t1;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m1599 (Mesh_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m2034 (Object_t * __this /* static, unused */, Mesh_t171 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C" void Mesh_Clear_m2035 (Mesh_t171 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C" void Mesh_Clear_m1603 (Mesh_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m1614 (Mesh_t171 * __this, Vector3U5BU5D_t290* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C" void Mesh_set_normals_m1615 (Mesh_t171 * __this, Vector3U5BU5D_t290* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
extern "C" void Mesh_set_tangents_m1617 (Mesh_t171 * __this, Vector4U5BU5D_t330* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m1619 (Mesh_t171 * __this, Vector2U5BU5D_t291* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
extern "C" void Mesh_set_colors32_m1621 (Mesh_t171 * __this, Color32U5BU5D_t331* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" void Mesh_RecalculateBounds_m1623 (Mesh_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m1622 (Mesh_t171 * __this, Int32U5BU5D_t1* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
extern "C" int32_t Mesh_get_vertexCount_m1598 (Mesh_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::MarkDynamic()
extern "C" void Mesh_MarkDynamic_m1602 (Mesh_t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
