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

// MapManager
struct MapManager_t3593696545;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void MapManager::.ctor()
extern "C"  void MapManager__ctor_m4263344916 (MapManager_t3593696545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapManager::Awake()
extern "C"  void MapManager_Awake_m1853530417 (MapManager_t3593696545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapManager::Start()
extern "C"  void MapManager_Start_m2598983564 (MapManager_t3593696545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapManager::Update()
extern "C"  void MapManager_Update_m1340025197 (MapManager_t3593696545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapManager::SetupScene()
extern "C"  void MapManager_SetupScene_m3584184101 (MapManager_t3593696545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapManager::InitializeList()
extern "C"  void MapManager_InitializeList_m2384168044 (MapManager_t3593696545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapManager::MapSetup()
extern "C"  void MapManager_MapSetup_m1067361627 (MapManager_t3593696545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapManager::MarkOccupied(System.Int32,System.Boolean)
extern "C"  void MapManager_MarkOccupied_m3804236625 (MapManager_t3593696545 * __this, int32_t ___index0, bool ___occupied1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MapManager::ConvertGridPositionToIndex(UnityEngine.Vector2)
extern "C"  int32_t MapManager_ConvertGridPositionToIndex_m1724583357 (MapManager_t3593696545 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MapManager::ObtainOneAvalibleGrid()
extern "C"  Vector2_t2243707579  MapManager_ObtainOneAvalibleGrid_m3567097640 (MapManager_t3593696545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MapManager::HasAvaibleGrid()
extern "C"  bool MapManager_HasAvaibleGrid_m2079782154 (MapManager_t3593696545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
