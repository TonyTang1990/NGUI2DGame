#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MapManager/GridInfo
struct GridInfo_t737075118;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void MapManager/GridInfo::.ctor()
extern "C"  void GridInfo__ctor_m1495151973 (GridInfo_t737075118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapManager/GridInfo::.ctor(System.Boolean,UnityEngine.Vector2,System.Int32)
extern "C"  void GridInfo__ctor_m2438786155 (GridInfo_t737075118 * __this, bool ___occupied0, Vector2_t2243707579  ___position1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MapManager/GridInfo::get_Occupied()
extern "C"  bool GridInfo_get_Occupied_m3021441422 (GridInfo_t737075118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapManager/GridInfo::set_Occupied(System.Boolean)
extern "C"  void GridInfo_set_Occupied_m4211506389 (GridInfo_t737075118 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MapManager/GridInfo::get_GridPosition()
extern "C"  Vector2_t2243707579  GridInfo_get_GridPosition_m3445281838 (GridInfo_t737075118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapManager/GridInfo::set_GridPosition(UnityEngine.Vector2)
extern "C"  void GridInfo_set_GridPosition_m546961997 (GridInfo_t737075118 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MapManager/GridInfo::get_GridIndex()
extern "C"  int32_t GridInfo_get_GridIndex_m873628440 (GridInfo_t737075118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapManager/GridInfo::set_GridIndex(System.Int32)
extern "C"  void GridInfo_set_GridIndex_m1199700727 (GridInfo_t737075118 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
