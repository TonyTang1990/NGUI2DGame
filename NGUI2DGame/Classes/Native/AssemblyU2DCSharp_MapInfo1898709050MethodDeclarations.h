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

// MapInfo
struct MapInfo_t1898709050;
// System.Collections.Generic.Dictionary`2<System.Int32,MyRC>
struct Dictionary_2_t1932390178;
// MyRC
struct MyRC_t2924564543;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TileType701644524.h"

// System.Void MapInfo::.ctor()
extern "C"  void MapInfo__ctor_m2587620305 (MapInfo_t1898709050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapInfo::ResetMapInfo()
extern "C"  void MapInfo_ResetMapInfo_m1634975558 (MapInfo_t1898709050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapInfo::InitTileToDefault()
extern "C"  void MapInfo_InitTileToDefault_m2224773395 (MapInfo_t1898709050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapInfo::SetTileType(System.Int32,System.Int32,TileType)
extern "C"  void MapInfo_SetTileType_m2402730835 (MapInfo_t1898709050 * __this, int32_t ___row0, int32_t ___column1, int32_t ___tiletype2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TileType MapInfo::GetTileTypeAtRC(System.Int32,System.Int32)
extern "C"  int32_t MapInfo_GetTileTypeAtRC_m3803970656 (MapInfo_t1898709050 * __this, int32_t ___row0, int32_t ___column1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MapInfo::HasBaseInMap()
extern "C"  bool MapInfo_HasBaseInMap_m3611527769 (MapInfo_t1898709050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MapInfo::PrintAllTileType()
extern "C"  void MapInfo_PrintAllTileType_m1056260121 (MapInfo_t1898709050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MapInfo::get_MapSize()
extern "C"  int32_t MapInfo_get_MapSize_m1936617491 (MapInfo_t1898709050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,MyRC> MapInfo::get_PlayerSpawnPoint()
extern "C"  Dictionary_2_t1932390178 * MapInfo_get_PlayerSpawnPoint_m18084016 (MapInfo_t1898709050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,MyRC> MapInfo::get_EnemySpawnPoint()
extern "C"  Dictionary_2_t1932390178 * MapInfo_get_EnemySpawnPoint_m310562173 (MapInfo_t1898709050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MyRC MapInfo::get_BaseRC()
extern "C"  MyRC_t2924564543 * MapInfo_get_BaseRC_m659654070 (MapInfo_t1898709050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
