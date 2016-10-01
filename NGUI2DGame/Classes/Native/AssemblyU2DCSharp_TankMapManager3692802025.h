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
// TankMapManager
struct TankMapManager_t3692802025;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Collections.Generic.List`1<Tile>
struct List_1_t2098562912;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// TankMap
struct TankMap_t1120032466;
// MapEditor
struct MapEditor_t1120091431;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TankMapManager
struct  TankMapManager_t3692802025  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 TankMapManager::mMapSize
	Vector2_t2243707579  ___mMapSize_4;
	// UnityEngine.GameObject[] TankMapManager::mTiles
	GameObjectU5BU5D_t3057952154* ___mTiles_5;
	// System.Collections.Generic.List`1<Tile> TankMapManager::mTilesTile
	List_1_t2098562912 * ___mTilesTile_6;
	// UnityEngine.GameObject TankMapManager::mMapContainer
	GameObject_t1756533147 * ___mMapContainer_7;
	// TankMap TankMapManager::mCurrentMap
	TankMap_t1120032466 * ___mCurrentMap_8;
	// System.String TankMapManager::mMapSavePath
	String_t* ___mMapSavePath_9;
	// MapEditor TankMapManager::mCurrentMapEditor
	MapEditor_t1120091431 * ___mCurrentMapEditor_10;
	// System.Int32 TankMapManager::mMaximumPartitionLevel
	int32_t ___mMaximumPartitionLevel_11;
	// System.Single TankMapManager::mHeightOffset
	float ___mHeightOffset_12;

public:
	inline static int32_t get_offset_of_mMapSize_4() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mMapSize_4)); }
	inline Vector2_t2243707579  get_mMapSize_4() const { return ___mMapSize_4; }
	inline Vector2_t2243707579 * get_address_of_mMapSize_4() { return &___mMapSize_4; }
	inline void set_mMapSize_4(Vector2_t2243707579  value)
	{
		___mMapSize_4 = value;
	}

	inline static int32_t get_offset_of_mTiles_5() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mTiles_5)); }
	inline GameObjectU5BU5D_t3057952154* get_mTiles_5() const { return ___mTiles_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mTiles_5() { return &___mTiles_5; }
	inline void set_mTiles_5(GameObjectU5BU5D_t3057952154* value)
	{
		___mTiles_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTiles_5, value);
	}

	inline static int32_t get_offset_of_mTilesTile_6() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mTilesTile_6)); }
	inline List_1_t2098562912 * get_mTilesTile_6() const { return ___mTilesTile_6; }
	inline List_1_t2098562912 ** get_address_of_mTilesTile_6() { return &___mTilesTile_6; }
	inline void set_mTilesTile_6(List_1_t2098562912 * value)
	{
		___mTilesTile_6 = value;
		Il2CppCodeGenWriteBarrier(&___mTilesTile_6, value);
	}

	inline static int32_t get_offset_of_mMapContainer_7() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mMapContainer_7)); }
	inline GameObject_t1756533147 * get_mMapContainer_7() const { return ___mMapContainer_7; }
	inline GameObject_t1756533147 ** get_address_of_mMapContainer_7() { return &___mMapContainer_7; }
	inline void set_mMapContainer_7(GameObject_t1756533147 * value)
	{
		___mMapContainer_7 = value;
		Il2CppCodeGenWriteBarrier(&___mMapContainer_7, value);
	}

	inline static int32_t get_offset_of_mCurrentMap_8() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mCurrentMap_8)); }
	inline TankMap_t1120032466 * get_mCurrentMap_8() const { return ___mCurrentMap_8; }
	inline TankMap_t1120032466 ** get_address_of_mCurrentMap_8() { return &___mCurrentMap_8; }
	inline void set_mCurrentMap_8(TankMap_t1120032466 * value)
	{
		___mCurrentMap_8 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentMap_8, value);
	}

	inline static int32_t get_offset_of_mMapSavePath_9() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mMapSavePath_9)); }
	inline String_t* get_mMapSavePath_9() const { return ___mMapSavePath_9; }
	inline String_t** get_address_of_mMapSavePath_9() { return &___mMapSavePath_9; }
	inline void set_mMapSavePath_9(String_t* value)
	{
		___mMapSavePath_9 = value;
		Il2CppCodeGenWriteBarrier(&___mMapSavePath_9, value);
	}

	inline static int32_t get_offset_of_mCurrentMapEditor_10() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mCurrentMapEditor_10)); }
	inline MapEditor_t1120091431 * get_mCurrentMapEditor_10() const { return ___mCurrentMapEditor_10; }
	inline MapEditor_t1120091431 ** get_address_of_mCurrentMapEditor_10() { return &___mCurrentMapEditor_10; }
	inline void set_mCurrentMapEditor_10(MapEditor_t1120091431 * value)
	{
		___mCurrentMapEditor_10 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentMapEditor_10, value);
	}

	inline static int32_t get_offset_of_mMaximumPartitionLevel_11() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mMaximumPartitionLevel_11)); }
	inline int32_t get_mMaximumPartitionLevel_11() const { return ___mMaximumPartitionLevel_11; }
	inline int32_t* get_address_of_mMaximumPartitionLevel_11() { return &___mMaximumPartitionLevel_11; }
	inline void set_mMaximumPartitionLevel_11(int32_t value)
	{
		___mMaximumPartitionLevel_11 = value;
	}

	inline static int32_t get_offset_of_mHeightOffset_12() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mHeightOffset_12)); }
	inline float get_mHeightOffset_12() const { return ___mHeightOffset_12; }
	inline float* get_address_of_mHeightOffset_12() { return &___mHeightOffset_12; }
	inline void set_mHeightOffset_12(float value)
	{
		___mHeightOffset_12 = value;
	}
};

struct TankMapManager_t3692802025_StaticFields
{
public:
	// TankMapManager TankMapManager::mTankMapManagerInstance
	TankMapManager_t3692802025 * ___mTankMapManagerInstance_3;

public:
	inline static int32_t get_offset_of_mTankMapManagerInstance_3() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025_StaticFields, ___mTankMapManagerInstance_3)); }
	inline TankMapManager_t3692802025 * get_mTankMapManagerInstance_3() const { return ___mTankMapManagerInstance_3; }
	inline TankMapManager_t3692802025 ** get_address_of_mTankMapManagerInstance_3() { return &___mTankMapManagerInstance_3; }
	inline void set_mTankMapManagerInstance_3(TankMapManager_t3692802025 * value)
	{
		___mTankMapManagerInstance_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTankMapManagerInstance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
