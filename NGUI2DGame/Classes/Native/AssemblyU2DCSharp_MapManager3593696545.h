#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MapManager
struct MapManager_t3593696545;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<MapManager/GridInfo>
struct List_1_t106196250;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapManager
struct  MapManager_t3593696545  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MapManager::mEdgeBlock
	GameObject_t1756533147 * ___mEdgeBlock_5;
	// System.Int32 MapManager::mRow
	int32_t ___mRow_6;
	// System.Int32 MapManager::mColumn
	int32_t ___mColumn_7;
	// System.Collections.Generic.List`1<MapManager/GridInfo> MapManager::mGridList
	List_1_t106196250 * ___mGridList_8;
	// System.Collections.Generic.List`1<MapManager/GridInfo> MapManager::mAvaliableGridList
	List_1_t106196250 * ___mAvaliableGridList_9;

public:
	inline static int32_t get_offset_of_mEdgeBlock_5() { return static_cast<int32_t>(offsetof(MapManager_t3593696545, ___mEdgeBlock_5)); }
	inline GameObject_t1756533147 * get_mEdgeBlock_5() const { return ___mEdgeBlock_5; }
	inline GameObject_t1756533147 ** get_address_of_mEdgeBlock_5() { return &___mEdgeBlock_5; }
	inline void set_mEdgeBlock_5(GameObject_t1756533147 * value)
	{
		___mEdgeBlock_5 = value;
		Il2CppCodeGenWriteBarrier(&___mEdgeBlock_5, value);
	}

	inline static int32_t get_offset_of_mRow_6() { return static_cast<int32_t>(offsetof(MapManager_t3593696545, ___mRow_6)); }
	inline int32_t get_mRow_6() const { return ___mRow_6; }
	inline int32_t* get_address_of_mRow_6() { return &___mRow_6; }
	inline void set_mRow_6(int32_t value)
	{
		___mRow_6 = value;
	}

	inline static int32_t get_offset_of_mColumn_7() { return static_cast<int32_t>(offsetof(MapManager_t3593696545, ___mColumn_7)); }
	inline int32_t get_mColumn_7() const { return ___mColumn_7; }
	inline int32_t* get_address_of_mColumn_7() { return &___mColumn_7; }
	inline void set_mColumn_7(int32_t value)
	{
		___mColumn_7 = value;
	}

	inline static int32_t get_offset_of_mGridList_8() { return static_cast<int32_t>(offsetof(MapManager_t3593696545, ___mGridList_8)); }
	inline List_1_t106196250 * get_mGridList_8() const { return ___mGridList_8; }
	inline List_1_t106196250 ** get_address_of_mGridList_8() { return &___mGridList_8; }
	inline void set_mGridList_8(List_1_t106196250 * value)
	{
		___mGridList_8 = value;
		Il2CppCodeGenWriteBarrier(&___mGridList_8, value);
	}

	inline static int32_t get_offset_of_mAvaliableGridList_9() { return static_cast<int32_t>(offsetof(MapManager_t3593696545, ___mAvaliableGridList_9)); }
	inline List_1_t106196250 * get_mAvaliableGridList_9() const { return ___mAvaliableGridList_9; }
	inline List_1_t106196250 ** get_address_of_mAvaliableGridList_9() { return &___mAvaliableGridList_9; }
	inline void set_mAvaliableGridList_9(List_1_t106196250 * value)
	{
		___mAvaliableGridList_9 = value;
		Il2CppCodeGenWriteBarrier(&___mAvaliableGridList_9, value);
	}
};

struct MapManager_t3593696545_StaticFields
{
public:
	// MapManager MapManager::mMapManagerInstance
	MapManager_t3593696545 * ___mMapManagerInstance_4;

public:
	inline static int32_t get_offset_of_mMapManagerInstance_4() { return static_cast<int32_t>(offsetof(MapManager_t3593696545_StaticFields, ___mMapManagerInstance_4)); }
	inline MapManager_t3593696545 * get_mMapManagerInstance_4() const { return ___mMapManagerInstance_4; }
	inline MapManager_t3593696545 ** get_address_of_mMapManagerInstance_4() { return &___mMapManagerInstance_4; }
	inline void set_mMapManagerInstance_4(MapManager_t3593696545 * value)
	{
		___mMapManagerInstance_4 = value;
		Il2CppCodeGenWriteBarrier(&___mMapManagerInstance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
