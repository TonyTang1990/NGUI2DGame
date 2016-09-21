#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TileType[,]
struct TileTypeU5BU2CU5D_t354757606;
// System.Collections.Generic.Dictionary`2<System.Int32,MyRC>
struct Dictionary_2_t1932390178;
// MyRC
struct MyRC_t2924564543;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_TileType701644524.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapInfo
struct  MapInfo_t1898709050  : public Il2CppObject
{
public:
	// TileType[,] MapInfo::mMapTiles
	TileTypeU5BU2CU5D_t354757606* ___mMapTiles_1;
	// System.Int32 MapInfo::mMapSize
	int32_t ___mMapSize_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,MyRC> MapInfo::mPlayerSpawnPoint
	Dictionary_2_t1932390178 * ___mPlayerSpawnPoint_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,MyRC> MapInfo::mEnemySpawnPoint
	Dictionary_2_t1932390178 * ___mEnemySpawnPoint_4;
	// MyRC MapInfo::mBaseRC
	MyRC_t2924564543 * ___mBaseRC_5;
	// System.Boolean MapInfo::mHasBase
	bool ___mHasBase_6;

public:
	inline static int32_t get_offset_of_mMapTiles_1() { return static_cast<int32_t>(offsetof(MapInfo_t1898709050, ___mMapTiles_1)); }
	inline TileTypeU5BU2CU5D_t354757606* get_mMapTiles_1() const { return ___mMapTiles_1; }
	inline TileTypeU5BU2CU5D_t354757606** get_address_of_mMapTiles_1() { return &___mMapTiles_1; }
	inline void set_mMapTiles_1(TileTypeU5BU2CU5D_t354757606* value)
	{
		___mMapTiles_1 = value;
		Il2CppCodeGenWriteBarrier(&___mMapTiles_1, value);
	}

	inline static int32_t get_offset_of_mMapSize_2() { return static_cast<int32_t>(offsetof(MapInfo_t1898709050, ___mMapSize_2)); }
	inline int32_t get_mMapSize_2() const { return ___mMapSize_2; }
	inline int32_t* get_address_of_mMapSize_2() { return &___mMapSize_2; }
	inline void set_mMapSize_2(int32_t value)
	{
		___mMapSize_2 = value;
	}

	inline static int32_t get_offset_of_mPlayerSpawnPoint_3() { return static_cast<int32_t>(offsetof(MapInfo_t1898709050, ___mPlayerSpawnPoint_3)); }
	inline Dictionary_2_t1932390178 * get_mPlayerSpawnPoint_3() const { return ___mPlayerSpawnPoint_3; }
	inline Dictionary_2_t1932390178 ** get_address_of_mPlayerSpawnPoint_3() { return &___mPlayerSpawnPoint_3; }
	inline void set_mPlayerSpawnPoint_3(Dictionary_2_t1932390178 * value)
	{
		___mPlayerSpawnPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerSpawnPoint_3, value);
	}

	inline static int32_t get_offset_of_mEnemySpawnPoint_4() { return static_cast<int32_t>(offsetof(MapInfo_t1898709050, ___mEnemySpawnPoint_4)); }
	inline Dictionary_2_t1932390178 * get_mEnemySpawnPoint_4() const { return ___mEnemySpawnPoint_4; }
	inline Dictionary_2_t1932390178 ** get_address_of_mEnemySpawnPoint_4() { return &___mEnemySpawnPoint_4; }
	inline void set_mEnemySpawnPoint_4(Dictionary_2_t1932390178 * value)
	{
		___mEnemySpawnPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___mEnemySpawnPoint_4, value);
	}

	inline static int32_t get_offset_of_mBaseRC_5() { return static_cast<int32_t>(offsetof(MapInfo_t1898709050, ___mBaseRC_5)); }
	inline MyRC_t2924564543 * get_mBaseRC_5() const { return ___mBaseRC_5; }
	inline MyRC_t2924564543 ** get_address_of_mBaseRC_5() { return &___mBaseRC_5; }
	inline void set_mBaseRC_5(MyRC_t2924564543 * value)
	{
		___mBaseRC_5 = value;
		Il2CppCodeGenWriteBarrier(&___mBaseRC_5, value);
	}

	inline static int32_t get_offset_of_mHasBase_6() { return static_cast<int32_t>(offsetof(MapInfo_t1898709050, ___mHasBase_6)); }
	inline bool get_mHasBase_6() const { return ___mHasBase_6; }
	inline bool* get_address_of_mHasBase_6() { return &___mHasBase_6; }
	inline void set_mHasBase_6(bool value)
	{
		___mHasBase_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
