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
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<Bullet>
struct List_1_t1959236748;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;
// System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>
struct Dictionary_2_t841443130;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_MoveAction868615717.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

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
	// System.Single Tank::mMovingOffset
	float ___mMovingOffset_4;
	// System.Single Tank::mMoveIntervalBaseTime
	float ___mMoveIntervalBaseTime_5;
	// UnityEngine.Transform Tank::mBulletSpawnPoint
	Transform_t3275118058 * ___mBulletSpawnPoint_6;
	// UnityEngine.GameObject Tank::mBulletPrefab
	GameObject_t1756533147 * ___mBulletPrefab_7;
	// System.Int32 Tank::mNumbersOfBulletAllowed
	int32_t ___mNumbersOfBulletAllowed_8;
	// System.Single Tank::mHealth
	float ___mHealth_9;
	// UnityEngine.AudioClip Tank::mShootClip
	AudioClip_t1932558630 * ___mShootClip_10;
	// UnityEngine.AudioClip Tank::mCrashClip
	AudioClip_t1932558630 * ___mCrashClip_11;
	// System.Boolean Tank::mIsDead
	bool ___mIsDead_12;
	// System.Single Tank::mKeepMoveIntervalTime
	float ___mKeepMoveIntervalTime_13;
	// System.Boolean Tank::mIsBlocingByTank
	bool ___mIsBlocingByTank_14;
	// System.Int64 Tank::mBlockingByTankTime
	int64_t ___mBlockingByTankTime_15;
	// MoveAction Tank::mCurrentMoveAction
	int32_t ___mCurrentMoveAction_16;
	// System.Boolean Tank::mIsMoving
	bool ___mIsMoving_17;
	// System.Single Tank::mTimeStartMoving
	float ___mTimeStartMoving_18;
	// System.Single Tank::mTimeToCompleteMove
	float ___mTimeToCompleteMove_19;
	// UnityEngine.Vector3 Tank::mStartPosition
	Vector3_t2243707580  ___mStartPosition_20;
	// UnityEngine.Vector3 Tank::mDestinationPosition
	Vector3_t2243707580  ___mDestinationPosition_21;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Tank::mBulletsList
	List_1_t1125654279 * ___mBulletsList_22;
	// System.Collections.Generic.List`1<Bullet> Tank::mBulletsScriptList
	List_1_t1959236748 * ___mBulletsScriptList_23;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Tank::mCurrentOccupiedIndexs
	Dictionary_2_t1079703083 * ___mCurrentOccupiedIndexs_24;
	// System.Collections.Generic.Dictionary`2<MoveAction,System.Int32> Tank::mTankMovingIndexsOffset
	Dictionary_2_t841443130 * ___mTankMovingIndexsOffset_25;
	// UnityEngine.AudioSource Tank::mTankAudioSource
	AudioSource_t1135106623 * ___mTankAudioSource_26;

public:
	inline static int32_t get_offset_of_mMoveSpeed_3() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mMoveSpeed_3)); }
	inline float get_mMoveSpeed_3() const { return ___mMoveSpeed_3; }
	inline float* get_address_of_mMoveSpeed_3() { return &___mMoveSpeed_3; }
	inline void set_mMoveSpeed_3(float value)
	{
		___mMoveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_mMovingOffset_4() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mMovingOffset_4)); }
	inline float get_mMovingOffset_4() const { return ___mMovingOffset_4; }
	inline float* get_address_of_mMovingOffset_4() { return &___mMovingOffset_4; }
	inline void set_mMovingOffset_4(float value)
	{
		___mMovingOffset_4 = value;
	}

	inline static int32_t get_offset_of_mMoveIntervalBaseTime_5() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mMoveIntervalBaseTime_5)); }
	inline float get_mMoveIntervalBaseTime_5() const { return ___mMoveIntervalBaseTime_5; }
	inline float* get_address_of_mMoveIntervalBaseTime_5() { return &___mMoveIntervalBaseTime_5; }
	inline void set_mMoveIntervalBaseTime_5(float value)
	{
		___mMoveIntervalBaseTime_5 = value;
	}

	inline static int32_t get_offset_of_mBulletSpawnPoint_6() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mBulletSpawnPoint_6)); }
	inline Transform_t3275118058 * get_mBulletSpawnPoint_6() const { return ___mBulletSpawnPoint_6; }
	inline Transform_t3275118058 ** get_address_of_mBulletSpawnPoint_6() { return &___mBulletSpawnPoint_6; }
	inline void set_mBulletSpawnPoint_6(Transform_t3275118058 * value)
	{
		___mBulletSpawnPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___mBulletSpawnPoint_6, value);
	}

	inline static int32_t get_offset_of_mBulletPrefab_7() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mBulletPrefab_7)); }
	inline GameObject_t1756533147 * get_mBulletPrefab_7() const { return ___mBulletPrefab_7; }
	inline GameObject_t1756533147 ** get_address_of_mBulletPrefab_7() { return &___mBulletPrefab_7; }
	inline void set_mBulletPrefab_7(GameObject_t1756533147 * value)
	{
		___mBulletPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___mBulletPrefab_7, value);
	}

	inline static int32_t get_offset_of_mNumbersOfBulletAllowed_8() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mNumbersOfBulletAllowed_8)); }
	inline int32_t get_mNumbersOfBulletAllowed_8() const { return ___mNumbersOfBulletAllowed_8; }
	inline int32_t* get_address_of_mNumbersOfBulletAllowed_8() { return &___mNumbersOfBulletAllowed_8; }
	inline void set_mNumbersOfBulletAllowed_8(int32_t value)
	{
		___mNumbersOfBulletAllowed_8 = value;
	}

	inline static int32_t get_offset_of_mHealth_9() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mHealth_9)); }
	inline float get_mHealth_9() const { return ___mHealth_9; }
	inline float* get_address_of_mHealth_9() { return &___mHealth_9; }
	inline void set_mHealth_9(float value)
	{
		___mHealth_9 = value;
	}

	inline static int32_t get_offset_of_mShootClip_10() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mShootClip_10)); }
	inline AudioClip_t1932558630 * get_mShootClip_10() const { return ___mShootClip_10; }
	inline AudioClip_t1932558630 ** get_address_of_mShootClip_10() { return &___mShootClip_10; }
	inline void set_mShootClip_10(AudioClip_t1932558630 * value)
	{
		___mShootClip_10 = value;
		Il2CppCodeGenWriteBarrier(&___mShootClip_10, value);
	}

	inline static int32_t get_offset_of_mCrashClip_11() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mCrashClip_11)); }
	inline AudioClip_t1932558630 * get_mCrashClip_11() const { return ___mCrashClip_11; }
	inline AudioClip_t1932558630 ** get_address_of_mCrashClip_11() { return &___mCrashClip_11; }
	inline void set_mCrashClip_11(AudioClip_t1932558630 * value)
	{
		___mCrashClip_11 = value;
		Il2CppCodeGenWriteBarrier(&___mCrashClip_11, value);
	}

	inline static int32_t get_offset_of_mIsDead_12() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mIsDead_12)); }
	inline bool get_mIsDead_12() const { return ___mIsDead_12; }
	inline bool* get_address_of_mIsDead_12() { return &___mIsDead_12; }
	inline void set_mIsDead_12(bool value)
	{
		___mIsDead_12 = value;
	}

	inline static int32_t get_offset_of_mKeepMoveIntervalTime_13() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mKeepMoveIntervalTime_13)); }
	inline float get_mKeepMoveIntervalTime_13() const { return ___mKeepMoveIntervalTime_13; }
	inline float* get_address_of_mKeepMoveIntervalTime_13() { return &___mKeepMoveIntervalTime_13; }
	inline void set_mKeepMoveIntervalTime_13(float value)
	{
		___mKeepMoveIntervalTime_13 = value;
	}

	inline static int32_t get_offset_of_mIsBlocingByTank_14() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mIsBlocingByTank_14)); }
	inline bool get_mIsBlocingByTank_14() const { return ___mIsBlocingByTank_14; }
	inline bool* get_address_of_mIsBlocingByTank_14() { return &___mIsBlocingByTank_14; }
	inline void set_mIsBlocingByTank_14(bool value)
	{
		___mIsBlocingByTank_14 = value;
	}

	inline static int32_t get_offset_of_mBlockingByTankTime_15() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mBlockingByTankTime_15)); }
	inline int64_t get_mBlockingByTankTime_15() const { return ___mBlockingByTankTime_15; }
	inline int64_t* get_address_of_mBlockingByTankTime_15() { return &___mBlockingByTankTime_15; }
	inline void set_mBlockingByTankTime_15(int64_t value)
	{
		___mBlockingByTankTime_15 = value;
	}

	inline static int32_t get_offset_of_mCurrentMoveAction_16() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mCurrentMoveAction_16)); }
	inline int32_t get_mCurrentMoveAction_16() const { return ___mCurrentMoveAction_16; }
	inline int32_t* get_address_of_mCurrentMoveAction_16() { return &___mCurrentMoveAction_16; }
	inline void set_mCurrentMoveAction_16(int32_t value)
	{
		___mCurrentMoveAction_16 = value;
	}

	inline static int32_t get_offset_of_mIsMoving_17() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mIsMoving_17)); }
	inline bool get_mIsMoving_17() const { return ___mIsMoving_17; }
	inline bool* get_address_of_mIsMoving_17() { return &___mIsMoving_17; }
	inline void set_mIsMoving_17(bool value)
	{
		___mIsMoving_17 = value;
	}

	inline static int32_t get_offset_of_mTimeStartMoving_18() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mTimeStartMoving_18)); }
	inline float get_mTimeStartMoving_18() const { return ___mTimeStartMoving_18; }
	inline float* get_address_of_mTimeStartMoving_18() { return &___mTimeStartMoving_18; }
	inline void set_mTimeStartMoving_18(float value)
	{
		___mTimeStartMoving_18 = value;
	}

	inline static int32_t get_offset_of_mTimeToCompleteMove_19() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mTimeToCompleteMove_19)); }
	inline float get_mTimeToCompleteMove_19() const { return ___mTimeToCompleteMove_19; }
	inline float* get_address_of_mTimeToCompleteMove_19() { return &___mTimeToCompleteMove_19; }
	inline void set_mTimeToCompleteMove_19(float value)
	{
		___mTimeToCompleteMove_19 = value;
	}

	inline static int32_t get_offset_of_mStartPosition_20() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mStartPosition_20)); }
	inline Vector3_t2243707580  get_mStartPosition_20() const { return ___mStartPosition_20; }
	inline Vector3_t2243707580 * get_address_of_mStartPosition_20() { return &___mStartPosition_20; }
	inline void set_mStartPosition_20(Vector3_t2243707580  value)
	{
		___mStartPosition_20 = value;
	}

	inline static int32_t get_offset_of_mDestinationPosition_21() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mDestinationPosition_21)); }
	inline Vector3_t2243707580  get_mDestinationPosition_21() const { return ___mDestinationPosition_21; }
	inline Vector3_t2243707580 * get_address_of_mDestinationPosition_21() { return &___mDestinationPosition_21; }
	inline void set_mDestinationPosition_21(Vector3_t2243707580  value)
	{
		___mDestinationPosition_21 = value;
	}

	inline static int32_t get_offset_of_mBulletsList_22() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mBulletsList_22)); }
	inline List_1_t1125654279 * get_mBulletsList_22() const { return ___mBulletsList_22; }
	inline List_1_t1125654279 ** get_address_of_mBulletsList_22() { return &___mBulletsList_22; }
	inline void set_mBulletsList_22(List_1_t1125654279 * value)
	{
		___mBulletsList_22 = value;
		Il2CppCodeGenWriteBarrier(&___mBulletsList_22, value);
	}

	inline static int32_t get_offset_of_mBulletsScriptList_23() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mBulletsScriptList_23)); }
	inline List_1_t1959236748 * get_mBulletsScriptList_23() const { return ___mBulletsScriptList_23; }
	inline List_1_t1959236748 ** get_address_of_mBulletsScriptList_23() { return &___mBulletsScriptList_23; }
	inline void set_mBulletsScriptList_23(List_1_t1959236748 * value)
	{
		___mBulletsScriptList_23 = value;
		Il2CppCodeGenWriteBarrier(&___mBulletsScriptList_23, value);
	}

	inline static int32_t get_offset_of_mCurrentOccupiedIndexs_24() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mCurrentOccupiedIndexs_24)); }
	inline Dictionary_2_t1079703083 * get_mCurrentOccupiedIndexs_24() const { return ___mCurrentOccupiedIndexs_24; }
	inline Dictionary_2_t1079703083 ** get_address_of_mCurrentOccupiedIndexs_24() { return &___mCurrentOccupiedIndexs_24; }
	inline void set_mCurrentOccupiedIndexs_24(Dictionary_2_t1079703083 * value)
	{
		___mCurrentOccupiedIndexs_24 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentOccupiedIndexs_24, value);
	}

	inline static int32_t get_offset_of_mTankMovingIndexsOffset_25() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mTankMovingIndexsOffset_25)); }
	inline Dictionary_2_t841443130 * get_mTankMovingIndexsOffset_25() const { return ___mTankMovingIndexsOffset_25; }
	inline Dictionary_2_t841443130 ** get_address_of_mTankMovingIndexsOffset_25() { return &___mTankMovingIndexsOffset_25; }
	inline void set_mTankMovingIndexsOffset_25(Dictionary_2_t841443130 * value)
	{
		___mTankMovingIndexsOffset_25 = value;
		Il2CppCodeGenWriteBarrier(&___mTankMovingIndexsOffset_25, value);
	}

	inline static int32_t get_offset_of_mTankAudioSource_26() { return static_cast<int32_t>(offsetof(Tank_t2050480468, ___mTankAudioSource_26)); }
	inline AudioSource_t1135106623 * get_mTankAudioSource_26() const { return ___mTankAudioSource_26; }
	inline AudioSource_t1135106623 ** get_address_of_mTankAudioSource_26() { return &___mTankAudioSource_26; }
	inline void set_mTankAudioSource_26(AudioSource_t1135106623 * value)
	{
		___mTankAudioSource_26 = value;
		Il2CppCodeGenWriteBarrier(&___mTankAudioSource_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
