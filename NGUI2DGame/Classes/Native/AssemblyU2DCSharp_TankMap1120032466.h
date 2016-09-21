#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// MapInfo
struct MapInfo_t1898709050;
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t3057952155;
// Tile[,]
struct TileU5BU2CU5D_t1358904254;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TankMap
struct  TankMap_t1120032466  : public Il2CppObject
{
public:
	// System.String TankMap::mMapName
	String_t* ___mMapName_0;
	// MapInfo TankMap::mCurrentMapInfo
	MapInfo_t1898709050 * ___mCurrentMapInfo_1;
	// UnityEngine.GameObject[,] TankMap::mTilesGO
	GameObjectU5BU2CU5D_t3057952155* ___mTilesGO_2;
	// Tile[,] TankMap::mTilesComponent
	TileU5BU2CU5D_t1358904254* ___mTilesComponent_3;
	// System.Boolean TankMap::mHasBaseTile
	bool ___mHasBaseTile_4;
	// UnityEngine.Vector2 TankMap::mBaseTileRC
	Vector2_t2243707579  ___mBaseTileRC_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> TankMap::mPlayerSpawnPoint
	List_1_t1612828711 * ___mPlayerSpawnPoint_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> TankMap::mEnemySpawnPoint
	List_1_t1612828711 * ___mEnemySpawnPoint_7;
	// System.Int32 TankMap::mMapSize
	int32_t ___mMapSize_8;

public:
	inline static int32_t get_offset_of_mMapName_0() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMapName_0)); }
	inline String_t* get_mMapName_0() const { return ___mMapName_0; }
	inline String_t** get_address_of_mMapName_0() { return &___mMapName_0; }
	inline void set_mMapName_0(String_t* value)
	{
		___mMapName_0 = value;
		Il2CppCodeGenWriteBarrier(&___mMapName_0, value);
	}

	inline static int32_t get_offset_of_mCurrentMapInfo_1() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mCurrentMapInfo_1)); }
	inline MapInfo_t1898709050 * get_mCurrentMapInfo_1() const { return ___mCurrentMapInfo_1; }
	inline MapInfo_t1898709050 ** get_address_of_mCurrentMapInfo_1() { return &___mCurrentMapInfo_1; }
	inline void set_mCurrentMapInfo_1(MapInfo_t1898709050 * value)
	{
		___mCurrentMapInfo_1 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentMapInfo_1, value);
	}

	inline static int32_t get_offset_of_mTilesGO_2() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mTilesGO_2)); }
	inline GameObjectU5BU2CU5D_t3057952155* get_mTilesGO_2() const { return ___mTilesGO_2; }
	inline GameObjectU5BU2CU5D_t3057952155** get_address_of_mTilesGO_2() { return &___mTilesGO_2; }
	inline void set_mTilesGO_2(GameObjectU5BU2CU5D_t3057952155* value)
	{
		___mTilesGO_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTilesGO_2, value);
	}

	inline static int32_t get_offset_of_mTilesComponent_3() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mTilesComponent_3)); }
	inline TileU5BU2CU5D_t1358904254* get_mTilesComponent_3() const { return ___mTilesComponent_3; }
	inline TileU5BU2CU5D_t1358904254** get_address_of_mTilesComponent_3() { return &___mTilesComponent_3; }
	inline void set_mTilesComponent_3(TileU5BU2CU5D_t1358904254* value)
	{
		___mTilesComponent_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTilesComponent_3, value);
	}

	inline static int32_t get_offset_of_mHasBaseTile_4() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mHasBaseTile_4)); }
	inline bool get_mHasBaseTile_4() const { return ___mHasBaseTile_4; }
	inline bool* get_address_of_mHasBaseTile_4() { return &___mHasBaseTile_4; }
	inline void set_mHasBaseTile_4(bool value)
	{
		___mHasBaseTile_4 = value;
	}

	inline static int32_t get_offset_of_mBaseTileRC_5() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mBaseTileRC_5)); }
	inline Vector2_t2243707579  get_mBaseTileRC_5() const { return ___mBaseTileRC_5; }
	inline Vector2_t2243707579 * get_address_of_mBaseTileRC_5() { return &___mBaseTileRC_5; }
	inline void set_mBaseTileRC_5(Vector2_t2243707579  value)
	{
		___mBaseTileRC_5 = value;
	}

	inline static int32_t get_offset_of_mPlayerSpawnPoint_6() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mPlayerSpawnPoint_6)); }
	inline List_1_t1612828711 * get_mPlayerSpawnPoint_6() const { return ___mPlayerSpawnPoint_6; }
	inline List_1_t1612828711 ** get_address_of_mPlayerSpawnPoint_6() { return &___mPlayerSpawnPoint_6; }
	inline void set_mPlayerSpawnPoint_6(List_1_t1612828711 * value)
	{
		___mPlayerSpawnPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerSpawnPoint_6, value);
	}

	inline static int32_t get_offset_of_mEnemySpawnPoint_7() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mEnemySpawnPoint_7)); }
	inline List_1_t1612828711 * get_mEnemySpawnPoint_7() const { return ___mEnemySpawnPoint_7; }
	inline List_1_t1612828711 ** get_address_of_mEnemySpawnPoint_7() { return &___mEnemySpawnPoint_7; }
	inline void set_mEnemySpawnPoint_7(List_1_t1612828711 * value)
	{
		___mEnemySpawnPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___mEnemySpawnPoint_7, value);
	}

	inline static int32_t get_offset_of_mMapSize_8() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMapSize_8)); }
	inline int32_t get_mMapSize_8() const { return ___mMapSize_8; }
	inline int32_t* get_address_of_mMapSize_8() { return &___mMapSize_8; }
	inline void set_mMapSize_8(int32_t value)
	{
		___mMapSize_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
