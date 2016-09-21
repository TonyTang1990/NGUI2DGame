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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// TankMap
struct TankMap_t1120032466;
// MapEditor
struct MapEditor_t1120091431;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TankMapManager
struct  TankMapManager_t3692802025  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] TankMapManager::mTiles
	GameObjectU5BU5D_t3057952154* ___mTiles_5;
	// UnityEngine.GameObject TankMapManager::mMapContainer
	GameObject_t1756533147 * ___mMapContainer_6;
	// TankMap TankMapManager::mCurrentMap
	TankMap_t1120032466 * ___mCurrentMap_7;
	// System.String TankMapManager::mMapSavePath
	String_t* ___mMapSavePath_8;
	// MapEditor TankMapManager::mCurrentMapEditor
	MapEditor_t1120091431 * ___mCurrentMapEditor_9;

public:
	inline static int32_t get_offset_of_mTiles_5() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mTiles_5)); }
	inline GameObjectU5BU5D_t3057952154* get_mTiles_5() const { return ___mTiles_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mTiles_5() { return &___mTiles_5; }
	inline void set_mTiles_5(GameObjectU5BU5D_t3057952154* value)
	{
		___mTiles_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTiles_5, value);
	}

	inline static int32_t get_offset_of_mMapContainer_6() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mMapContainer_6)); }
	inline GameObject_t1756533147 * get_mMapContainer_6() const { return ___mMapContainer_6; }
	inline GameObject_t1756533147 ** get_address_of_mMapContainer_6() { return &___mMapContainer_6; }
	inline void set_mMapContainer_6(GameObject_t1756533147 * value)
	{
		___mMapContainer_6 = value;
		Il2CppCodeGenWriteBarrier(&___mMapContainer_6, value);
	}

	inline static int32_t get_offset_of_mCurrentMap_7() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mCurrentMap_7)); }
	inline TankMap_t1120032466 * get_mCurrentMap_7() const { return ___mCurrentMap_7; }
	inline TankMap_t1120032466 ** get_address_of_mCurrentMap_7() { return &___mCurrentMap_7; }
	inline void set_mCurrentMap_7(TankMap_t1120032466 * value)
	{
		___mCurrentMap_7 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentMap_7, value);
	}

	inline static int32_t get_offset_of_mMapSavePath_8() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mMapSavePath_8)); }
	inline String_t* get_mMapSavePath_8() const { return ___mMapSavePath_8; }
	inline String_t** get_address_of_mMapSavePath_8() { return &___mMapSavePath_8; }
	inline void set_mMapSavePath_8(String_t* value)
	{
		___mMapSavePath_8 = value;
		Il2CppCodeGenWriteBarrier(&___mMapSavePath_8, value);
	}

	inline static int32_t get_offset_of_mCurrentMapEditor_9() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025, ___mCurrentMapEditor_9)); }
	inline MapEditor_t1120091431 * get_mCurrentMapEditor_9() const { return ___mCurrentMapEditor_9; }
	inline MapEditor_t1120091431 ** get_address_of_mCurrentMapEditor_9() { return &___mCurrentMapEditor_9; }
	inline void set_mCurrentMapEditor_9(MapEditor_t1120091431 * value)
	{
		___mCurrentMapEditor_9 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentMapEditor_9, value);
	}
};

struct TankMapManager_t3692802025_StaticFields
{
public:
	// TankMapManager TankMapManager::mTankMapManagerInstance
	TankMapManager_t3692802025 * ___mTankMapManagerInstance_4;

public:
	inline static int32_t get_offset_of_mTankMapManagerInstance_4() { return static_cast<int32_t>(offsetof(TankMapManager_t3692802025_StaticFields, ___mTankMapManagerInstance_4)); }
	inline TankMapManager_t3692802025 * get_mTankMapManagerInstance_4() const { return ___mTankMapManagerInstance_4; }
	inline TankMapManager_t3692802025 ** get_address_of_mTankMapManagerInstance_4() { return &___mTankMapManagerInstance_4; }
	inline void set_mTankMapManagerInstance_4(TankMapManager_t3692802025 * value)
	{
		___mTankMapManagerInstance_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTankMapManagerInstance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
