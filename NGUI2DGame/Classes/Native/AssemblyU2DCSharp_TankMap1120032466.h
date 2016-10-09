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
// System.Collections.Generic.Dictionary`2<System.Int32,Tile>
struct Dictionary_2_t1737267415;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t2399515896;
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
	// System.Collections.Generic.Dictionary`2<System.Int32,Tile> TankMap::mDestroyableTiles
	Dictionary_2_t1737267415 * ___mDestroyableTiles_4;
	// System.Boolean TankMap::mHasBaseTile
	bool ___mHasBaseTile_5;
	// UnityEngine.Vector2 TankMap::mBaseTileRC
	Vector2_t2243707579  ___mBaseTileRC_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> TankMap::mPlayerSpawnPoint
	List_1_t1612828711 * ___mPlayerSpawnPoint_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> TankMap::mEnemySpawnPoint
	List_1_t1612828711 * ___mEnemySpawnPoint_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector2,System.Collections.Generic.List`1<System.Int32>> TankMap::mEnemySpawnPointsOccupiedList
	Dictionary_2_t2399515896 * ___mEnemySpawnPointsOccupiedList_9;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> TankMap::mCurrentAvalibleEnemySpawnPointList
	List_1_t1612828711 * ___mCurrentAvalibleEnemySpawnPointList_10;
	// UnityEngine.Vector2 TankMap::mMapSize
	Vector2_t2243707579  ___mMapSize_11;
	// System.Collections.BitArray TankMap::mMapOccupiedInfo
	BitArray_t4180138994 * ___mMapOccupiedInfo_12;
	// System.Collections.BitArray TankMap::mMapPlayerOcupiedInfo
	BitArray_t4180138994 * ___mMapPlayerOcupiedInfo_13;
	// System.Collections.Generic.Dictionary`2<System.Int32,TileType> TankMap::mMapOccupiedTileTypeInfo
	Dictionary_2_t4004437455 * ___mMapOccupiedTileTypeInfo_14;
	// UnityEngine.Transform TankMap::mMapParent
	Transform_t3275118058 * ___mMapParent_15;
	// System.Int32 TankMap::mMaxPartitionLevel
	int32_t ___mMaxPartitionLevel_16;
	// System.Int32 TankMap::mMaxmumIndexNumber
	int32_t ___mMaxmumIndexNumber_17;
	// System.Int32 TankMap::mTotalRowsAfterPartition
	int32_t ___mTotalRowsAfterPartition_18;
	// System.Int32 TankMap::mTotalColumnsAfterPartition
	int32_t ___mTotalColumnsAfterPartition_19;

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

	inline static int32_t get_offset_of_mDestroyableTiles_4() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mDestroyableTiles_4)); }
	inline Dictionary_2_t1737267415 * get_mDestroyableTiles_4() const { return ___mDestroyableTiles_4; }
	inline Dictionary_2_t1737267415 ** get_address_of_mDestroyableTiles_4() { return &___mDestroyableTiles_4; }
	inline void set_mDestroyableTiles_4(Dictionary_2_t1737267415 * value)
	{
		___mDestroyableTiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___mDestroyableTiles_4, value);
	}

	inline static int32_t get_offset_of_mHasBaseTile_5() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mHasBaseTile_5)); }
	inline bool get_mHasBaseTile_5() const { return ___mHasBaseTile_5; }
	inline bool* get_address_of_mHasBaseTile_5() { return &___mHasBaseTile_5; }
	inline void set_mHasBaseTile_5(bool value)
	{
		___mHasBaseTile_5 = value;
	}

	inline static int32_t get_offset_of_mBaseTileRC_6() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mBaseTileRC_6)); }
	inline Vector2_t2243707579  get_mBaseTileRC_6() const { return ___mBaseTileRC_6; }
	inline Vector2_t2243707579 * get_address_of_mBaseTileRC_6() { return &___mBaseTileRC_6; }
	inline void set_mBaseTileRC_6(Vector2_t2243707579  value)
	{
		___mBaseTileRC_6 = value;
	}

	inline static int32_t get_offset_of_mPlayerSpawnPoint_7() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mPlayerSpawnPoint_7)); }
	inline List_1_t1612828711 * get_mPlayerSpawnPoint_7() const { return ___mPlayerSpawnPoint_7; }
	inline List_1_t1612828711 ** get_address_of_mPlayerSpawnPoint_7() { return &___mPlayerSpawnPoint_7; }
	inline void set_mPlayerSpawnPoint_7(List_1_t1612828711 * value)
	{
		___mPlayerSpawnPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerSpawnPoint_7, value);
	}

	inline static int32_t get_offset_of_mEnemySpawnPoint_8() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mEnemySpawnPoint_8)); }
	inline List_1_t1612828711 * get_mEnemySpawnPoint_8() const { return ___mEnemySpawnPoint_8; }
	inline List_1_t1612828711 ** get_address_of_mEnemySpawnPoint_8() { return &___mEnemySpawnPoint_8; }
	inline void set_mEnemySpawnPoint_8(List_1_t1612828711 * value)
	{
		___mEnemySpawnPoint_8 = value;
		Il2CppCodeGenWriteBarrier(&___mEnemySpawnPoint_8, value);
	}

	inline static int32_t get_offset_of_mEnemySpawnPointsOccupiedList_9() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mEnemySpawnPointsOccupiedList_9)); }
	inline Dictionary_2_t2399515896 * get_mEnemySpawnPointsOccupiedList_9() const { return ___mEnemySpawnPointsOccupiedList_9; }
	inline Dictionary_2_t2399515896 ** get_address_of_mEnemySpawnPointsOccupiedList_9() { return &___mEnemySpawnPointsOccupiedList_9; }
	inline void set_mEnemySpawnPointsOccupiedList_9(Dictionary_2_t2399515896 * value)
	{
		___mEnemySpawnPointsOccupiedList_9 = value;
		Il2CppCodeGenWriteBarrier(&___mEnemySpawnPointsOccupiedList_9, value);
	}

	inline static int32_t get_offset_of_mCurrentAvalibleEnemySpawnPointList_10() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mCurrentAvalibleEnemySpawnPointList_10)); }
	inline List_1_t1612828711 * get_mCurrentAvalibleEnemySpawnPointList_10() const { return ___mCurrentAvalibleEnemySpawnPointList_10; }
	inline List_1_t1612828711 ** get_address_of_mCurrentAvalibleEnemySpawnPointList_10() { return &___mCurrentAvalibleEnemySpawnPointList_10; }
	inline void set_mCurrentAvalibleEnemySpawnPointList_10(List_1_t1612828711 * value)
	{
		___mCurrentAvalibleEnemySpawnPointList_10 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentAvalibleEnemySpawnPointList_10, value);
	}

	inline static int32_t get_offset_of_mMapSize_11() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMapSize_11)); }
	inline Vector2_t2243707579  get_mMapSize_11() const { return ___mMapSize_11; }
	inline Vector2_t2243707579 * get_address_of_mMapSize_11() { return &___mMapSize_11; }
	inline void set_mMapSize_11(Vector2_t2243707579  value)
	{
		___mMapSize_11 = value;
	}

	inline static int32_t get_offset_of_mMapOccupiedInfo_12() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMapOccupiedInfo_12)); }
	inline BitArray_t4180138994 * get_mMapOccupiedInfo_12() const { return ___mMapOccupiedInfo_12; }
	inline BitArray_t4180138994 ** get_address_of_mMapOccupiedInfo_12() { return &___mMapOccupiedInfo_12; }
	inline void set_mMapOccupiedInfo_12(BitArray_t4180138994 * value)
	{
		___mMapOccupiedInfo_12 = value;
		Il2CppCodeGenWriteBarrier(&___mMapOccupiedInfo_12, value);
	}

	inline static int32_t get_offset_of_mMapPlayerOcupiedInfo_13() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMapPlayerOcupiedInfo_13)); }
	inline BitArray_t4180138994 * get_mMapPlayerOcupiedInfo_13() const { return ___mMapPlayerOcupiedInfo_13; }
	inline BitArray_t4180138994 ** get_address_of_mMapPlayerOcupiedInfo_13() { return &___mMapPlayerOcupiedInfo_13; }
	inline void set_mMapPlayerOcupiedInfo_13(BitArray_t4180138994 * value)
	{
		___mMapPlayerOcupiedInfo_13 = value;
		Il2CppCodeGenWriteBarrier(&___mMapPlayerOcupiedInfo_13, value);
	}

	inline static int32_t get_offset_of_mMapOccupiedTileTypeInfo_14() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMapOccupiedTileTypeInfo_14)); }
	inline Dictionary_2_t4004437455 * get_mMapOccupiedTileTypeInfo_14() const { return ___mMapOccupiedTileTypeInfo_14; }
	inline Dictionary_2_t4004437455 ** get_address_of_mMapOccupiedTileTypeInfo_14() { return &___mMapOccupiedTileTypeInfo_14; }
	inline void set_mMapOccupiedTileTypeInfo_14(Dictionary_2_t4004437455 * value)
	{
		___mMapOccupiedTileTypeInfo_14 = value;
		Il2CppCodeGenWriteBarrier(&___mMapOccupiedTileTypeInfo_14, value);
	}

	inline static int32_t get_offset_of_mMapParent_15() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMapParent_15)); }
	inline Transform_t3275118058 * get_mMapParent_15() const { return ___mMapParent_15; }
	inline Transform_t3275118058 ** get_address_of_mMapParent_15() { return &___mMapParent_15; }
	inline void set_mMapParent_15(Transform_t3275118058 * value)
	{
		___mMapParent_15 = value;
		Il2CppCodeGenWriteBarrier(&___mMapParent_15, value);
	}

	inline static int32_t get_offset_of_mMaxPartitionLevel_16() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMaxPartitionLevel_16)); }
	inline int32_t get_mMaxPartitionLevel_16() const { return ___mMaxPartitionLevel_16; }
	inline int32_t* get_address_of_mMaxPartitionLevel_16() { return &___mMaxPartitionLevel_16; }
	inline void set_mMaxPartitionLevel_16(int32_t value)
	{
		___mMaxPartitionLevel_16 = value;
	}

	inline static int32_t get_offset_of_mMaxmumIndexNumber_17() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mMaxmumIndexNumber_17)); }
	inline int32_t get_mMaxmumIndexNumber_17() const { return ___mMaxmumIndexNumber_17; }
	inline int32_t* get_address_of_mMaxmumIndexNumber_17() { return &___mMaxmumIndexNumber_17; }
	inline void set_mMaxmumIndexNumber_17(int32_t value)
	{
		___mMaxmumIndexNumber_17 = value;
	}

	inline static int32_t get_offset_of_mTotalRowsAfterPartition_18() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mTotalRowsAfterPartition_18)); }
	inline int32_t get_mTotalRowsAfterPartition_18() const { return ___mTotalRowsAfterPartition_18; }
	inline int32_t* get_address_of_mTotalRowsAfterPartition_18() { return &___mTotalRowsAfterPartition_18; }
	inline void set_mTotalRowsAfterPartition_18(int32_t value)
	{
		___mTotalRowsAfterPartition_18 = value;
	}

	inline static int32_t get_offset_of_mTotalColumnsAfterPartition_19() { return static_cast<int32_t>(offsetof(TankMap_t1120032466, ___mTotalColumnsAfterPartition_19)); }
	inline int32_t get_mTotalColumnsAfterPartition_19() const { return ___mTotalColumnsAfterPartition_19; }
	inline int32_t* get_address_of_mTotalColumnsAfterPartition_19() { return &___mTotalColumnsAfterPartition_19; }
	inline void set_mTotalColumnsAfterPartition_19(int32_t value)
	{
		___mTotalColumnsAfterPartition_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
