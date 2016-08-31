#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CarDodgeGame
struct CarDodgeGame_t1650312537;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UILabel
struct UILabel_t1795115428;
// OffsetScroller
struct OffsetScroller_t1610136665;
// PlayerCarController
struct PlayerCarController_t116747357;

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
	GameObjectU5BU5D_t3057952154* ___mEnemySpawnPoint_4;
	// UnityEngine.GameObject CarDodgeGame::mPlayerSpawnPoint
	GameObject_t1756533147 * ___mPlayerSpawnPoint_5;
	// UnityEngine.GameObject[] CarDodgeGame::mNormalEnemyCar
	GameObjectU5BU5D_t3057952154* ___mNormalEnemyCar_6;
	// UnityEngine.GameObject[] CarDodgeGame::mTruckEnemyCar
	GameObjectU5BU5D_t3057952154* ___mTruckEnemyCar_7;
	// UnityEngine.GameObject[] CarDodgeGame::mFastEnemyCar
	GameObjectU5BU5D_t3057952154* ___mFastEnemyCar_8;
	// System.Single CarDodgeGame::mNormalCarSpawnChange
	float ___mNormalCarSpawnChange_9;
	// System.Single CarDodgeGame::mTruckSpawnChance
	float ___mTruckSpawnChance_10;
	// System.Single CarDodgeGame::mFastCarSpawnChance
	float ___mFastCarSpawnChance_11;
	// System.Single CarDodgeGame::mMaxSpawnSpeed
	float ___mMaxSpawnSpeed_12;
	// System.Single CarDodgeGame::mMinSpawnSpeed
	float ___mMinSpawnSpeed_13;
	// System.Single CarDodgeGame::mOriginalMaxSpawnSpeed
	float ___mOriginalMaxSpawnSpeed_14;
	// System.Single CarDodgeGame::mOriginalMinSpawnSpeed
	float ___mOriginalMinSpawnSpeed_15;
	// System.Single CarDodgeGame::mCurrentSpawnSpeed
	float ___mCurrentSpawnSpeed_16;
	// UILabel CarDodgeGame::mScoreLabel
	UILabel_t1795115428 * ___mScoreLabel_17;
	// UILabel CarDodgeGame::mGameLevelLabel
	UILabel_t1795115428 * ___mGameLevelLabel_18;
	// System.Int32 CarDodgeGame::mCurrentScore
	int32_t ___mCurrentScore_19;
	// System.Int32 CarDodgeGame::mGameLevel
	int32_t ___mGameLevel_20;
	// UnityEngine.GameObject CarDodgeGame::mScrollerBackground
	GameObject_t1756533147 * ___mScrollerBackground_21;
	// OffsetScroller CarDodgeGame::mBackgroundOffsetScroller
	OffsetScroller_t1610136665 * ___mBackgroundOffsetScroller_22;
	// UnityEngine.GameObject CarDodgeGame::mPlayerCar
	GameObject_t1756533147 * ___mPlayerCar_23;
	// PlayerCarController CarDodgeGame::mPlayerCarController
	PlayerCarController_t116747357 * ___mPlayerCarController_24;

public:
	inline static int32_t get_offset_of_mEnemySpawnPoint_4() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mEnemySpawnPoint_4)); }
	inline GameObjectU5BU5D_t3057952154* get_mEnemySpawnPoint_4() const { return ___mEnemySpawnPoint_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mEnemySpawnPoint_4() { return &___mEnemySpawnPoint_4; }
	inline void set_mEnemySpawnPoint_4(GameObjectU5BU5D_t3057952154* value)
	{
		___mEnemySpawnPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___mEnemySpawnPoint_4, value);
	}

	inline static int32_t get_offset_of_mPlayerSpawnPoint_5() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mPlayerSpawnPoint_5)); }
	inline GameObject_t1756533147 * get_mPlayerSpawnPoint_5() const { return ___mPlayerSpawnPoint_5; }
	inline GameObject_t1756533147 ** get_address_of_mPlayerSpawnPoint_5() { return &___mPlayerSpawnPoint_5; }
	inline void set_mPlayerSpawnPoint_5(GameObject_t1756533147 * value)
	{
		___mPlayerSpawnPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerSpawnPoint_5, value);
	}

	inline static int32_t get_offset_of_mNormalEnemyCar_6() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mNormalEnemyCar_6)); }
	inline GameObjectU5BU5D_t3057952154* get_mNormalEnemyCar_6() const { return ___mNormalEnemyCar_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mNormalEnemyCar_6() { return &___mNormalEnemyCar_6; }
	inline void set_mNormalEnemyCar_6(GameObjectU5BU5D_t3057952154* value)
	{
		___mNormalEnemyCar_6 = value;
		Il2CppCodeGenWriteBarrier(&___mNormalEnemyCar_6, value);
	}

	inline static int32_t get_offset_of_mTruckEnemyCar_7() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mTruckEnemyCar_7)); }
	inline GameObjectU5BU5D_t3057952154* get_mTruckEnemyCar_7() const { return ___mTruckEnemyCar_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mTruckEnemyCar_7() { return &___mTruckEnemyCar_7; }
	inline void set_mTruckEnemyCar_7(GameObjectU5BU5D_t3057952154* value)
	{
		___mTruckEnemyCar_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTruckEnemyCar_7, value);
	}

	inline static int32_t get_offset_of_mFastEnemyCar_8() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mFastEnemyCar_8)); }
	inline GameObjectU5BU5D_t3057952154* get_mFastEnemyCar_8() const { return ___mFastEnemyCar_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mFastEnemyCar_8() { return &___mFastEnemyCar_8; }
	inline void set_mFastEnemyCar_8(GameObjectU5BU5D_t3057952154* value)
	{
		___mFastEnemyCar_8 = value;
		Il2CppCodeGenWriteBarrier(&___mFastEnemyCar_8, value);
	}

	inline static int32_t get_offset_of_mNormalCarSpawnChange_9() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mNormalCarSpawnChange_9)); }
	inline float get_mNormalCarSpawnChange_9() const { return ___mNormalCarSpawnChange_9; }
	inline float* get_address_of_mNormalCarSpawnChange_9() { return &___mNormalCarSpawnChange_9; }
	inline void set_mNormalCarSpawnChange_9(float value)
	{
		___mNormalCarSpawnChange_9 = value;
	}

	inline static int32_t get_offset_of_mTruckSpawnChance_10() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mTruckSpawnChance_10)); }
	inline float get_mTruckSpawnChance_10() const { return ___mTruckSpawnChance_10; }
	inline float* get_address_of_mTruckSpawnChance_10() { return &___mTruckSpawnChance_10; }
	inline void set_mTruckSpawnChance_10(float value)
	{
		___mTruckSpawnChance_10 = value;
	}

	inline static int32_t get_offset_of_mFastCarSpawnChance_11() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mFastCarSpawnChance_11)); }
	inline float get_mFastCarSpawnChance_11() const { return ___mFastCarSpawnChance_11; }
	inline float* get_address_of_mFastCarSpawnChance_11() { return &___mFastCarSpawnChance_11; }
	inline void set_mFastCarSpawnChance_11(float value)
	{
		___mFastCarSpawnChance_11 = value;
	}

	inline static int32_t get_offset_of_mMaxSpawnSpeed_12() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mMaxSpawnSpeed_12)); }
	inline float get_mMaxSpawnSpeed_12() const { return ___mMaxSpawnSpeed_12; }
	inline float* get_address_of_mMaxSpawnSpeed_12() { return &___mMaxSpawnSpeed_12; }
	inline void set_mMaxSpawnSpeed_12(float value)
	{
		___mMaxSpawnSpeed_12 = value;
	}

	inline static int32_t get_offset_of_mMinSpawnSpeed_13() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mMinSpawnSpeed_13)); }
	inline float get_mMinSpawnSpeed_13() const { return ___mMinSpawnSpeed_13; }
	inline float* get_address_of_mMinSpawnSpeed_13() { return &___mMinSpawnSpeed_13; }
	inline void set_mMinSpawnSpeed_13(float value)
	{
		___mMinSpawnSpeed_13 = value;
	}

	inline static int32_t get_offset_of_mOriginalMaxSpawnSpeed_14() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mOriginalMaxSpawnSpeed_14)); }
	inline float get_mOriginalMaxSpawnSpeed_14() const { return ___mOriginalMaxSpawnSpeed_14; }
	inline float* get_address_of_mOriginalMaxSpawnSpeed_14() { return &___mOriginalMaxSpawnSpeed_14; }
	inline void set_mOriginalMaxSpawnSpeed_14(float value)
	{
		___mOriginalMaxSpawnSpeed_14 = value;
	}

	inline static int32_t get_offset_of_mOriginalMinSpawnSpeed_15() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mOriginalMinSpawnSpeed_15)); }
	inline float get_mOriginalMinSpawnSpeed_15() const { return ___mOriginalMinSpawnSpeed_15; }
	inline float* get_address_of_mOriginalMinSpawnSpeed_15() { return &___mOriginalMinSpawnSpeed_15; }
	inline void set_mOriginalMinSpawnSpeed_15(float value)
	{
		___mOriginalMinSpawnSpeed_15 = value;
	}

	inline static int32_t get_offset_of_mCurrentSpawnSpeed_16() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mCurrentSpawnSpeed_16)); }
	inline float get_mCurrentSpawnSpeed_16() const { return ___mCurrentSpawnSpeed_16; }
	inline float* get_address_of_mCurrentSpawnSpeed_16() { return &___mCurrentSpawnSpeed_16; }
	inline void set_mCurrentSpawnSpeed_16(float value)
	{
		___mCurrentSpawnSpeed_16 = value;
	}

	inline static int32_t get_offset_of_mScoreLabel_17() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mScoreLabel_17)); }
	inline UILabel_t1795115428 * get_mScoreLabel_17() const { return ___mScoreLabel_17; }
	inline UILabel_t1795115428 ** get_address_of_mScoreLabel_17() { return &___mScoreLabel_17; }
	inline void set_mScoreLabel_17(UILabel_t1795115428 * value)
	{
		___mScoreLabel_17 = value;
		Il2CppCodeGenWriteBarrier(&___mScoreLabel_17, value);
	}

	inline static int32_t get_offset_of_mGameLevelLabel_18() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mGameLevelLabel_18)); }
	inline UILabel_t1795115428 * get_mGameLevelLabel_18() const { return ___mGameLevelLabel_18; }
	inline UILabel_t1795115428 ** get_address_of_mGameLevelLabel_18() { return &___mGameLevelLabel_18; }
	inline void set_mGameLevelLabel_18(UILabel_t1795115428 * value)
	{
		___mGameLevelLabel_18 = value;
		Il2CppCodeGenWriteBarrier(&___mGameLevelLabel_18, value);
	}

	inline static int32_t get_offset_of_mCurrentScore_19() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mCurrentScore_19)); }
	inline int32_t get_mCurrentScore_19() const { return ___mCurrentScore_19; }
	inline int32_t* get_address_of_mCurrentScore_19() { return &___mCurrentScore_19; }
	inline void set_mCurrentScore_19(int32_t value)
	{
		___mCurrentScore_19 = value;
	}

	inline static int32_t get_offset_of_mGameLevel_20() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mGameLevel_20)); }
	inline int32_t get_mGameLevel_20() const { return ___mGameLevel_20; }
	inline int32_t* get_address_of_mGameLevel_20() { return &___mGameLevel_20; }
	inline void set_mGameLevel_20(int32_t value)
	{
		___mGameLevel_20 = value;
	}

	inline static int32_t get_offset_of_mScrollerBackground_21() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mScrollerBackground_21)); }
	inline GameObject_t1756533147 * get_mScrollerBackground_21() const { return ___mScrollerBackground_21; }
	inline GameObject_t1756533147 ** get_address_of_mScrollerBackground_21() { return &___mScrollerBackground_21; }
	inline void set_mScrollerBackground_21(GameObject_t1756533147 * value)
	{
		___mScrollerBackground_21 = value;
		Il2CppCodeGenWriteBarrier(&___mScrollerBackground_21, value);
	}

	inline static int32_t get_offset_of_mBackgroundOffsetScroller_22() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mBackgroundOffsetScroller_22)); }
	inline OffsetScroller_t1610136665 * get_mBackgroundOffsetScroller_22() const { return ___mBackgroundOffsetScroller_22; }
	inline OffsetScroller_t1610136665 ** get_address_of_mBackgroundOffsetScroller_22() { return &___mBackgroundOffsetScroller_22; }
	inline void set_mBackgroundOffsetScroller_22(OffsetScroller_t1610136665 * value)
	{
		___mBackgroundOffsetScroller_22 = value;
		Il2CppCodeGenWriteBarrier(&___mBackgroundOffsetScroller_22, value);
	}

	inline static int32_t get_offset_of_mPlayerCar_23() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mPlayerCar_23)); }
	inline GameObject_t1756533147 * get_mPlayerCar_23() const { return ___mPlayerCar_23; }
	inline GameObject_t1756533147 ** get_address_of_mPlayerCar_23() { return &___mPlayerCar_23; }
	inline void set_mPlayerCar_23(GameObject_t1756533147 * value)
	{
		___mPlayerCar_23 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerCar_23, value);
	}

	inline static int32_t get_offset_of_mPlayerCarController_24() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mPlayerCarController_24)); }
	inline PlayerCarController_t116747357 * get_mPlayerCarController_24() const { return ___mPlayerCarController_24; }
	inline PlayerCarController_t116747357 ** get_address_of_mPlayerCarController_24() { return &___mPlayerCarController_24; }
	inline void set_mPlayerCarController_24(PlayerCarController_t116747357 * value)
	{
		___mPlayerCarController_24 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerCarController_24, value);
	}
};

struct CarDodgeGame_t1650312537_StaticFields
{
public:
	// CarDodgeGame CarDodgeGame::mCarDodgeGameInstance
	CarDodgeGame_t1650312537 * ___mCarDodgeGameInstance_3;

public:
	inline static int32_t get_offset_of_mCarDodgeGameInstance_3() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537_StaticFields, ___mCarDodgeGameInstance_3)); }
	inline CarDodgeGame_t1650312537 * get_mCarDodgeGameInstance_3() const { return ___mCarDodgeGameInstance_3; }
	inline CarDodgeGame_t1650312537 ** get_address_of_mCarDodgeGameInstance_3() { return &___mCarDodgeGameInstance_3; }
	inline void set_mCarDodgeGameInstance_3(CarDodgeGame_t1650312537 * value)
	{
		___mCarDodgeGameInstance_3 = value;
		Il2CppCodeGenWriteBarrier(&___mCarDodgeGameInstance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
