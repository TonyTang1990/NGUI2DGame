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
// System.Collections.BitArray
struct BitArray_t4180138994;
// System.Collections.Generic.Dictionary`2<System.Int32,TileType>
struct Dictionary_2_t4004437455;
// UnityEngine.Transform
struct Transform_t3275118058;

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
	// UnityEngine.Vector2 TankMap::mMapSize
	Vector2_t2243707579  ___mMapSize_8;
	// System.Collections.BitArray TankMap::mMapOccupiedInfo
	BitArray_t4180138994 * ___mMapOccupiedInfo_9;
	// System.Collections.BitArray TankMap::mMapPlayerOcupiedInfo
	BitArray_t4180138994 * ___mMapPlayerOcupiedInfo_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,TileType> TankMap::mMapOccupiedTileTypeInfo
	Dictionary_2_t4004437455 * ___mMapOccupiedTileTypeInfo_11;
	// UnityEngine.Transform TankMap::mMapParent
	Transform_t3275118058 * ___mMapParent_12;
	// System.Int32 TankMap::mMaxPartitionLevel
	int32_t ___mMaxPartitionLevel_13;
	// System.Int32 TankMap::mMaxmumIndexNumber
	int32_t ___mMaxmumIndexNumber_14;

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
	inline Vector2_t2243707579  get_mMapSize_8() const { return ___mMapSize_8; }
	inline Vector2_t2243707579 * get_address_of_mMapSize_8() { return &___mMapSize_8; }
	inline void set_mMapSize_8(Vector2_t2243707579  value)
	{
		___mMapSize_8 = value;
	}

	inline static int32_t get_offset_of_mMapOccupiedInfo_9() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMapOccupiedInfo_9)); }
	inline BitArray_t4180138994 * get_mMapOccupiedInfo_9() const { return ___mMapOccupiedInfo_9; }
	inline BitArray_t4180138994 ** get_address_of_mMapOccupiedInfo_9() { return &___mMapOccupiedInfo_9; }
	inline void set_mMapOccupiedInfo_9(BitArray_t4180138994 * value)
	{
		___mMapOccupiedInfo_9 = value;
		Il2CppCodeGenWriteBarrier(&___mMapOccupiedInfo_9, value);
	}

	inline static int32_t get_offset_of_mMapPlayerOcupiedInfo_10() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMapPlayerOcupiedInfo_10)); }
	inline BitArray_t4180138994 * get_mMapPlayerOcupiedInfo_10() const { return ___mMapPlayerOcupiedInfo_10; }
	inline BitArray_t4180138994 ** get_address_of_mMapPlayerOcupiedInfo_10() { return &___mMapPlayerOcupiedInfo_10; }
	inline void set_mMapPlayerOcupiedInfo_10(BitArray_t4180138994 * value)
	{
		___mMapPlayerOcupiedInfo_10 = value;
		Il2CppCodeGenWriteBarrier(&___mMapPlayerOcupiedInfo_10, value);
	}

	inline static int32_t get_offset_of_mMapOccupiedTileTypeInfo_11() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMapOccupiedTileTypeInfo_11)); }
	inline Dictionary_2_t4004437455 * get_mMapOccupiedTileTypeInfo_11() const { return ___mMapOccupiedTileTypeInfo_11; }
	inline Dictionary_2_t4004437455 ** get_address_of_mMapOccupiedTileTypeInfo_11() { return &___mMapOccupiedTileTypeInfo_11; }
	inline void set_mMapOccupiedTileTypeInfo_11(Dictionary_2_t4004437455 * value)
	{
		___mMapOccupiedTileTypeInfo_11 = value;
		Il2CppCodeGenWriteBarrier(&___mMapOccupiedTileTypeInfo_11, value);
	}

	inline static int32_t get_offset_of_mMapParent_12() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMapParent_12)); }
	inline Transform_t3275118058 * get_mMapParent_12() const { return ___mMapParent_12; }
	inline Transform_t3275118058 ** get_address_of_mMapParent_12() { return &___mMapParent_12; }
	inline void set_mMapParent_12(Transform_t3275118058 * value)
	{
		___mMapParent_12 = value;
		Il2CppCodeGenWriteBarrier(&___mMapParent_12, value);
	}

	inline static int32_t get_offset_of_mMaxPartitionLevel_13() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMaxPartitionLevel_13)); }
	inline int32_t get_mMaxPartitionLevel_13() const { return ___mMaxPartitionLevel_13; }
	inline int32_t* get_address_of_mMaxPartitionLevel_13() { return &___mMaxPartitionLevel_13; }
	inline void set_mMaxPartitionLevel_13(int32_t value)
	{
		___mMaxPartitionLevel_13 = value;
	}

	inline static int32_t get_offset_of_mMaxmumIndexNumber_14() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMaxmumIndexNumber_14)); }
	inline int32_t get_mMaxmumIndexNumber_14() const { return ___mMaxmumIndexNumber_14; }
	inline int32_t* get_address_of_mMaxmumIndexNumber_14() { return &___mMaxmumIndexNumber_14; }
	inline void set_mMaxmumIndexNumber_14(int32_t value)
	{
		___mMaxmumIndexNumber_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
