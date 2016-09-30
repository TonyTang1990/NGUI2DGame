#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_t1107255596;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TankGameLoad
struct  TankGameLoad_t1987520770  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TankGameLoad::mTileMapContainer
	GameObject_t1756533147 * ___mTileMapContainer_2;
	// System.Single TankGameLoad::mEnemySpawnIntervalTime
	float ___mEnemySpawnIntervalTime_3;
	// System.Int32 TankGameLoad::mNumberOfAliveEnemyAllowed
	int32_t ___mNumberOfAliveEnemyAllowed_4;
	// System.Int32 TankGameLoad::mTotoalNumberOfEnemysRemain
	int32_t ___mTotoalNumberOfEnemysRemain_5;
	// System.Int32 TankGameLoad::mCurrentAliveEnemyNumber
	int32_t ___mCurrentAliveEnemyNumber_6;
	// UnityEngine.GameObject TankGameLoad::mCurrentPlayerTankGO
	GameObject_t1756533147 * ___mCurrentPlayerTankGO_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32> TankGameLoad::mCurrentEnemyTankGODictionary
	Dictionary_2_t1107255596 * ___mCurrentEnemyTankGODictionary_8;

public:
	inline static int32_t get_offset_of_mTileMapContainer_2() { return static_cast<int32_t>(offsetof(TankGameLoad_t1987520770, ___mTileMapContainer_2)); }
	inline GameObject_t1756533147 * get_mTileMapContainer_2() const { return ___mTileMapContainer_2; }
	inline GameObject_t1756533147 ** get_address_of_mTileMapContainer_2() { return &___mTileMapContainer_2; }
	inline void set_mTileMapContainer_2(GameObject_t1756533147 * value)
	{
		___mTileMapContainer_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTileMapContainer_2, value);
	}

	inline static int32_t get_offset_of_mEnemySpawnIntervalTime_3() { return static_cast<int32_t>(offsetof(TankGameLoad_t1987520770, ___mEnemySpawnIntervalTime_3)); }
	inline float get_mEnemySpawnIntervalTime_3() const { return ___mEnemySpawnIntervalTime_3; }
	inline float* get_address_of_mEnemySpawnIntervalTime_3() { return &___mEnemySpawnIntervalTime_3; }
	inline void set_mEnemySpawnIntervalTime_3(float value)
	{
		___mEnemySpawnIntervalTime_3 = value;
	}

	inline static int32_t get_offset_of_mNumberOfAliveEnemyAllowed_4() { return static_cast<int32_t>(offsetof(TankGameLoad_t1987520770, ___mNumberOfAliveEnemyAllowed_4)); }
	inline int32_t get_mNumberOfAliveEnemyAllowed_4() const { return ___mNumberOfAliveEnemyAllowed_4; }
	inline int32_t* get_address_of_mNumberOfAliveEnemyAllowed_4() { return &___mNumberOfAliveEnemyAllowed_4; }
	inline void set_mNumberOfAliveEnemyAllowed_4(int32_t value)
	{
		___mNumberOfAliveEnemyAllowed_4 = value;
	}

	inline static int32_t get_offset_of_mTotoalNumberOfEnemysRemain_5() { return static_cast<int32_t>(offsetof(TankGameLoad_t1987520770, ___mTotoalNumberOfEnemysRemain_5)); }
	inline int32_t get_mTotoalNumberOfEnemysRemain_5() const { return ___mTotoalNumberOfEnemysRemain_5; }
	inline int32_t* get_address_of_mTotoalNumberOfEnemysRemain_5() { return &___mTotoalNumberOfEnemysRemain_5; }
	inline void set_mTotoalNumberOfEnemysRemain_5(int32_t value)
	{
		___mTotoalNumberOfEnemysRemain_5 = value;
	}

	inline static int32_t get_offset_of_mCurrentAliveEnemyNumber_6() { return static_cast<int32_t>(offsetof(TankGameLoad_t1987520770, ___mCurrentAliveEnemyNumber_6)); }
	inline int32_t get_mCurrentAliveEnemyNumber_6() const { return ___mCurrentAliveEnemyNumber_6; }
	inline int32_t* get_address_of_mCurrentAliveEnemyNumber_6() { return &___mCurrentAliveEnemyNumber_6; }
	inline void set_mCurrentAliveEnemyNumber_6(int32_t value)
	{
		___mCurrentAliveEnemyNumber_6 = value;
	}

	inline static int32_t get_offset_of_mCurrentPlayerTankGO_7() { return static_cast<int32_t>(offsetof(TankGameLoad_t1987520770, ___mCurrentPlayerTankGO_7)); }
	inline GameObject_t1756533147 * get_mCurrentPlayerTankGO_7() const { return ___mCurrentPlayerTankGO_7; }
	inline GameObject_t1756533147 ** get_address_of_mCurrentPlayerTankGO_7() { return &___mCurrentPlayerTankGO_7; }
	inline void set_mCurrentPlayerTankGO_7(GameObject_t1756533147 * value)
	{
		___mCurrentPlayerTankGO_7 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentPlayerTankGO_7, value);
	}

	inline static int32_t get_offset_of_mCurrentEnemyTankGODictionary_8() { return static_cast<int32_t>(offsetof(TankGameLoad_t1987520770, ___mCurrentEnemyTankGODictionary_8)); }
	inline Dictionary_2_t1107255596 * get_mCurrentEnemyTankGODictionary_8() const { return ___mCurrentEnemyTankGODictionary_8; }
	inline Dictionary_2_t1107255596 ** get_address_of_mCurrentEnemyTankGODictionary_8() { return &___mCurrentEnemyTankGODictionary_8; }
	inline void set_mCurrentEnemyTankGODictionary_8(Dictionary_2_t1107255596 * value)
	{
		___mCurrentEnemyTankGODictionary_8 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentEnemyTankGODictionary_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
