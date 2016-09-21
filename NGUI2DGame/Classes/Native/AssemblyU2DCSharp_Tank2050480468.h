#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Tank_TankMoveAction3959339170.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tank
struct  Tank_t2050480468  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Tank::mMoveSpeed
	float ___mMoveSpeed_3;
	// System.Single Tank::mMoveIntervalBaseTime
	float ___mMoveIntervalBaseTime_4;
	// UnityEngine.Transform Tank::mBulletSpawnPoint
	Transform_t3275118058 * ___mBulletSpawnPoint_5;
	// UnityEngine.GameObject Tank::mBulletPrefab
	GameObject_t1756533147 * ___mBulletPrefab_6;
	// System.Int32 Tank::mNumbersOfBulletAllowed
	int32_t ___mNumbersOfBulletAllowed_7;
	// System.Single Tank::mHealth
	float ___mHealth_8;
	// Tank/TankMoveAction Tank::mCurrentMoveAction
	int32_t ___mCurrentMoveAction_9;
	// System.Boolean Tank::mIsDead
	bool ___mIsDead_10;
	// System.Single Tank::mKeepMoveIntervalTime
	float ___mKeepMoveIntervalTime_11;
	// System.Single Tank::mMoveDeltaTime
	float ___mMoveDeltaTime_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Tank::mBulletsList
	List_1_t1125654279 * ___mBulletsList_13;

public:
	inline static int32_t get_offset_of_mMoveSpeed_3() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mMoveSpeed_3)); }
	inline float get_mMoveSpeed_3() const { return ___mMoveSpeed_3; }
	inline float* get_address_of_mMoveSpeed_3() { return &___mMoveSpeed_3; }
	inline void set_mMoveSpeed_3(float value)
	{
		___mMoveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_mMoveIntervalBaseTime_4() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mMoveIntervalBaseTime_4)); }
	inline float get_mMoveIntervalBaseTime_4() const { return ___mMoveIntervalBaseTime_4; }
	inline float* get_address_of_mMoveIntervalBaseTime_4() { return &___mMoveIntervalBaseTime_4; }
	inline void set_mMoveIntervalBaseTime_4(float value)
	{
		___mMoveIntervalBaseTime_4 = value;
	}

	inline static int32_t get_offset_of_mBulletSpawnPoint_5() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mBulletSpawnPoint_5)); }
	inline Transform_t3275118058 * get_mBulletSpawnPoint_5() const { return ___mBulletSpawnPoint_5; }
	inline Transform_t3275118058 ** get_address_of_mBulletSpawnPoint_5() { return &___mBulletSpawnPoint_5; }
	inline void set_mBulletSpawnPoint_5(Transform_t3275118058 * value)
	{
		___mBulletSpawnPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___mBulletSpawnPoint_5, value);
	}

	inline static int32_t get_offset_of_mBulletPrefab_6() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mBulletPrefab_6)); }
	inline GameObject_t1756533147 * get_mBulletPrefab_6() const { return ___mBulletPrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_mBulletPrefab_6() { return &___mBulletPrefab_6; }
	inline void set_mBulletPrefab_6(GameObject_t1756533147 * value)
	{
		___mBulletPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___mBulletPrefab_6, value);
	}

	inline static int32_t get_offset_of_mNumbersOfBulletAllowed_7() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mNumbersOfBulletAllowed_7)); }
	inline int32_t get_mNumbersOfBulletAllowed_7() const { return ___mNumbersOfBulletAllowed_7; }
	inline int32_t* get_address_of_mNumbersOfBulletAllowed_7() { return &___mNumbersOfBulletAllowed_7; }
	inline void set_mNumbersOfBulletAllowed_7(int32_t value)
	{
		___mNumbersOfBulletAllowed_7 = value;
	}

	inline static int32_t get_offset_of_mHealth_8() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mHealth_8)); }
	inline float get_mHealth_8() const { return ___mHealth_8; }
	inline float* get_address_of_mHealth_8() { return &___mHealth_8; }
	inline void set_mHealth_8(float value)
	{
		___mHealth_8 = value;
	}

	inline static int32_t get_offset_of_mCurrentMoveAction_9() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mCurrentMoveAction_9)); }
	inline int32_t get_mCurrentMoveAction_9() const { return ___mCurrentMoveAction_9; }
	inline int32_t* get_address_of_mCurrentMoveAction_9() { return &___mCurrentMoveAction_9; }
	inline void set_mCurrentMoveAction_9(int32_t value)
	{
		___mCurrentMoveAction_9 = value;
	}

	inline static int32_t get_offset_of_mIsDead_10() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mIsDead_10)); }
	inline bool get_mIsDead_10() const { return ___mIsDead_10; }
	inline bool* get_address_of_mIsDead_10() { return &___mIsDead_10; }
	inline void set_mIsDead_10(bool value)
	{
		___mIsDead_10 = value;
	}

	inline static int32_t get_offset_of_mKeepMoveIntervalTime_11() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mKeepMoveIntervalTime_11)); }
	inline float get_mKeepMoveIntervalTime_11() const { return ___mKeepMoveIntervalTime_11; }
	inline float* get_address_of_mKeepMoveIntervalTime_11() { return &___mKeepMoveIntervalTime_11; }
	inline void set_mKeepMoveIntervalTime_11(float value)
	{
		___mKeepMoveIntervalTime_11 = value;
	}

	inline static int32_t get_offset_of_mMoveDeltaTime_12() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mMoveDeltaTime_12)); }
	inline float get_mMoveDeltaTime_12() const { return ___mMoveDeltaTime_12; }
	inline float* get_address_of_mMoveDeltaTime_12() { return &___mMoveDeltaTime_12; }
	inline void set_mMoveDeltaTime_12(float value)
	{
		___mMoveDeltaTime_12 = value;
	}

	inline static int32_t get_offset_of_mBulletsList_13() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mBulletsList_13)); }
	inline List_1_t1125654279 * get_mBulletsList_13() const { return ___mBulletsList_13; }
	inline List_1_t1125654279 ** get_address_of_mBulletsList_13() { return &___mBulletsList_13; }
	inline void set_mBulletsList_13(List_1_t1125654279 * value)
	{
		___mBulletsList_13 = value;
		Il2CppCodeGenWriteBarrier(&___mBulletsList_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
