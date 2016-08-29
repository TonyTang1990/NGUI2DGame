#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CarDodgeGame
struct  CarDodgeGame_t1650312537  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] CarDodgeGame::mEnemySpawnPoint
	GameObjectU5BU5D_t3057952154* ___mEnemySpawnPoint_2;
	// UnityEngine.GameObject CarDodgeGame::mPlayerSpawnPoint
	GameObject_t1756533147 * ___mPlayerSpawnPoint_3;
	// UnityEngine.GameObject[] CarDodgeGame::mNormalEnemyCar
	GameObjectU5BU5D_t3057952154* ___mNormalEnemyCar_4;
	// UnityEngine.GameObject[] CarDodgeGame::mTruckEnemyCar
	GameObjectU5BU5D_t3057952154* ___mTruckEnemyCar_5;
	// UnityEngine.GameObject[] CarDodgeGame::mFastEnemyCar
	GameObjectU5BU5D_t3057952154* ___mFastEnemyCar_6;
	// System.Single CarDodgeGame::mNormalCarSpawnChange
	float ___mNormalCarSpawnChange_7;
	// System.Single CarDodgeGame::mTruckSpawnChance
	float ___mTruckSpawnChance_8;
	// System.Single CarDodgeGame::mFastCarSpawnChance
	float ___mFastCarSpawnChance_9;
	// System.Single CarDodgeGame::mMaxSpawnSpeed
	float ___mMaxSpawnSpeed_10;
	// System.Single CarDodgeGame::mMinSpawnSpeed
	float ___mMinSpawnSpeed_11;
	// System.Single CarDodgeGame::mCurrentSpawnSpeed
	float ___mCurrentSpawnSpeed_12;

public:
	inline static int32_t get_offset_of_mEnemySpawnPoint_2() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mEnemySpawnPoint_2)); }
	inline GameObjectU5BU5D_t3057952154* get_mEnemySpawnPoint_2() const { return ___mEnemySpawnPoint_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mEnemySpawnPoint_2() { return &___mEnemySpawnPoint_2; }
	inline void set_mEnemySpawnPoint_2(GameObjectU5BU5D_t3057952154* value)
	{
		___mEnemySpawnPoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___mEnemySpawnPoint_2, value);
	}

	inline static int32_t get_offset_of_mPlayerSpawnPoint_3() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mPlayerSpawnPoint_3)); }
	inline GameObject_t1756533147 * get_mPlayerSpawnPoint_3() const { return ___mPlayerSpawnPoint_3; }
	inline GameObject_t1756533147 ** get_address_of_mPlayerSpawnPoint_3() { return &___mPlayerSpawnPoint_3; }
	inline void set_mPlayerSpawnPoint_3(GameObject_t1756533147 * value)
	{
		___mPlayerSpawnPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerSpawnPoint_3, value);
	}

	inline static int32_t get_offset_of_mNormalEnemyCar_4() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mNormalEnemyCar_4)); }
	inline GameObjectU5BU5D_t3057952154* get_mNormalEnemyCar_4() const { return ___mNormalEnemyCar_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mNormalEnemyCar_4() { return &___mNormalEnemyCar_4; }
	inline void set_mNormalEnemyCar_4(GameObjectU5BU5D_t3057952154* value)
	{
		___mNormalEnemyCar_4 = value;
		Il2CppCodeGenWriteBarrier(&___mNormalEnemyCar_4, value);
	}

	inline static int32_t get_offset_of_mTruckEnemyCar_5() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mTruckEnemyCar_5)); }
	inline GameObjectU5BU5D_t3057952154* get_mTruckEnemyCar_5() const { return ___mTruckEnemyCar_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mTruckEnemyCar_5() { return &___mTruckEnemyCar_5; }
	inline void set_mTruckEnemyCar_5(GameObjectU5BU5D_t3057952154* value)
	{
		___mTruckEnemyCar_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTruckEnemyCar_5, value);
	}

	inline static int32_t get_offset_of_mFastEnemyCar_6() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mFastEnemyCar_6)); }
	inline GameObjectU5BU5D_t3057952154* get_mFastEnemyCar_6() const { return ___mFastEnemyCar_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mFastEnemyCar_6() { return &___mFastEnemyCar_6; }
	inline void set_mFastEnemyCar_6(GameObjectU5BU5D_t3057952154* value)
	{
		___mFastEnemyCar_6 = value;
		Il2CppCodeGenWriteBarrier(&___mFastEnemyCar_6, value);
	}

	inline static int32_t get_offset_of_mNormalCarSpawnChange_7() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mNormalCarSpawnChange_7)); }
	inline float get_mNormalCarSpawnChange_7() const { return ___mNormalCarSpawnChange_7; }
	inline float* get_address_of_mNormalCarSpawnChange_7() { return &___mNormalCarSpawnChange_7; }
	inline void set_mNormalCarSpawnChange_7(float value)
	{
		___mNormalCarSpawnChange_7 = value;
	}

	inline static int32_t get_offset_of_mTruckSpawnChance_8() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mTruckSpawnChance_8)); }
	inline float get_mTruckSpawnChance_8() const { return ___mTruckSpawnChance_8; }
	inline float* get_address_of_mTruckSpawnChance_8() { return &___mTruckSpawnChance_8; }
	inline void set_mTruckSpawnChance_8(float value)
	{
		___mTruckSpawnChance_8 = value;
	}

	inline static int32_t get_offset_of_mFastCarSpawnChance_9() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mFastCarSpawnChance_9)); }
	inline float get_mFastCarSpawnChance_9() const { return ___mFastCarSpawnChance_9; }
	inline float* get_address_of_mFastCarSpawnChance_9() { return &___mFastCarSpawnChance_9; }
	inline void set_mFastCarSpawnChance_9(float value)
	{
		___mFastCarSpawnChance_9 = value;
	}

	inline static int32_t get_offset_of_mMaxSpawnSpeed_10() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mMaxSpawnSpeed_10)); }
	inline float get_mMaxSpawnSpeed_10() const { return ___mMaxSpawnSpeed_10; }
	inline float* get_address_of_mMaxSpawnSpeed_10() { return &___mMaxSpawnSpeed_10; }
	inline void set_mMaxSpawnSpeed_10(float value)
	{
		___mMaxSpawnSpeed_10 = value;
	}

	inline static int32_t get_offset_of_mMinSpawnSpeed_11() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mMinSpawnSpeed_11)); }
	inline float get_mMinSpawnSpeed_11() const { return ___mMinSpawnSpeed_11; }
	inline float* get_address_of_mMinSpawnSpeed_11() { return &___mMinSpawnSpeed_11; }
	inline void set_mMinSpawnSpeed_11(float value)
	{
		___mMinSpawnSpeed_11 = value;
	}

	inline static int32_t get_offset_of_mCurrentSpawnSpeed_12() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mCurrentSpawnSpeed_12)); }
	inline float get_mCurrentSpawnSpeed_12() const { return ___mCurrentSpawnSpeed_12; }
	inline float* get_address_of_mCurrentSpawnSpeed_12() { return &___mCurrentSpawnSpeed_12; }
	inline void set_mCurrentSpawnSpeed_12(float value)
	{
		___mCurrentSpawnSpeed_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
