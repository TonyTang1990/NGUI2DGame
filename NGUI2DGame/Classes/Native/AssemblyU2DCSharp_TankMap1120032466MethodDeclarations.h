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

// TankMap
struct TankMap_t1120032466;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Tile
struct Tile_t2729441780;
// MapInfo
struct MapInfo_t1898709050;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_TileType701644524.h"
#include "AssemblyU2DCSharp_MapInfo1898709050.h"

// System.Void TankMap::.ctor()
extern "C"  void TankMap__ctor_m213562167 (TankMap_t1120032466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMap::.ctor(System.String)
extern "C"  void TankMap__ctor_m3857169269 (TankMap_t1120032466 * __this, String_t* ___mapname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMap::ResetMap()
extern "C"  void TankMap_ResetMap_m2481124046 (TankMap_t1120032466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMap::SetTileGO(System.Int32,System.Int32,UnityEngine.GameObject)
extern "C"  void TankMap_SetTileGO_m4008890553 (TankMap_t1120032466 * __this, int32_t ___row0, int32_t ___column1, GameObject_t1756533147 * ___tilego2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TankMap::GetTileGOAtRC(System.Int32,System.Int32)
extern "C"  GameObject_t1756533147 * TankMap_GetTileGOAtRC_m653895236 (TankMap_t1120032466 * __this, int32_t ___row0, int32_t ___column1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Tile TankMap::GetTileComponentAtRC(System.Int32,System.Int32)
extern "C"  Tile_t2729441780 * TankMap_GetTileComponentAtRC_m2508923597 (TankMap_t1120032466 * __this, int32_t ___row0, int32_t ___column1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMap::ChangeTile(System.Int32,System.Int32,TileType)
extern "C"  void TankMap_ChangeTile_m2029563357 (TankMap_t1120032466 * __this, int32_t ___row0, int32_t ___column1, int32_t ___tiletype2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMap::LoadAllMapRelativedData()
extern "C"  void TankMap_LoadAllMapRelativedData_m2421996480 (TankMap_t1120032466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMap::LoadPlayerAndEnemySpawnPointInfo()
extern "C"  void TankMap_LoadPlayerAndEnemySpawnPointInfo_m1433320536 (TankMap_t1120032466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMap::LoadBaseInfo()
extern "C"  void TankMap_LoadBaseInfo_m2225644744 (TankMap_t1120032466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TankMap::get_MapName()
extern "C"  String_t* TankMap_get_MapName_m62734434 (TankMap_t1120032466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMap::set_MapName(System.String)
extern "C"  void TankMap_set_MapName_m2382976507 (TankMap_t1120032466 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MapInfo TankMap::get_CurrentMapInfo()
extern "C"  MapInfo_t1898709050 * TankMap_get_CurrentMapInfo_m19403220 (TankMap_t1120032466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMap::set_CurrentMapInfo(MapInfo)
extern "C"  void TankMap_set_CurrentMapInfo_m4279421267 (TankMap_t1120032466 * __this, MapInfo_t1898709050 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> TankMap::get_PlayerSpawnPoint()
extern "C"  List_1_t1612828711 * TankMap_get_PlayerSpawnPoint_m1980858739 (TankMap_t1120032466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> TankMap::get_EnemySpawnPoint()
extern "C"  List_1_t1612828711 * TankMap_get_EnemySpawnPoint_m944176628 (TankMap_t1120032466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TankMap::get_MapSize()
extern "C"  int32_t TankMap_get_MapSize_m4147373457 (TankMap_t1120032466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
