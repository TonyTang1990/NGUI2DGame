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
	GameObjectU5BU5D_t3057952154* ___mEnemySpawnPoint_3;
	// UnityEngine.GameObject CarDodgeGame::mPlayerSpawnPoint
	GameObject_t1756533147 * ___mPlayerSpawnPoint_4;
	// UnityEngine.GameObject[] CarDodgeGame::mNormalEnemyCar
	GameObjectU5BU5D_t3057952154* ___mNormalEnemyCar_5;
	// UnityEngine.GameObject[] CarDodgeGame::mTruckEnemyCar
	GameObjectU5BU5D_t3057952154* ___mTruckEnemyCar_6;
	// UnityEngine.GameObject[] CarDodgeGame::mFastEnemyCar
	GameObjectU5BU5D_t3057952154* ___mFastEnemyCar_7;
	// System.Single CarDodgeGame::mNormalCarSpawnChange
	float ___mNormalCarSpawnChange_8;
	// System.Single CarDodgeGame::mTruckSpawnChance
	float ___mTruckSpawnChance_9;
	// System.Single CarDodgeGame::mFastCarSpawnChance
	float ___mFastCarSpawnChance_10;
	// System.Single CarDodgeGame::mMaxSpawnSpeed
	float ___mMaxSpawnSpeed_11;
	// System.Single CarDodgeGame::mMinSpawnSpeed
	float ___mMinSpawnSpeed_12;
	// System.Single CarDodgeGame::mOriginalMaxSpawnSpeed
	float ___mOriginalMaxSpawnSpeed_13;
	// System.Single CarDodgeGame::mOriginalMinSpawnSpeed
	float ___mOriginalMinSpawnSpeed_14;
	// System.Single CarDodgeGame::mCurrentSpawnSpeed
	float ___mCurrentSpawnSpeed_15;
	// UILabel CarDodgeGame::mScoreLabel
	UILabel_t1795115428 * ___mScoreLabel_16;
	// UILabel CarDodgeGame::mGameLevelLabel
	UILabel_t1795115428 * ___mGameLevelLabel_17;
	// System.Int32 CarDodgeGame::mCurrentScore
	int32_t ___mCurrentScore_18;
	// System.Int32 CarDodgeGame::mGameLevel
	int32_t ___mGameLevel_19;
	// UnityEngine.GameObject CarDodgeGame::mScrollerBackground
	GameObject_t1756533147 * ___mScrollerBackground_20;
	// OffsetScroller CarDodgeGame::mBackgroundOffsetScroller
	OffsetScroller_t1610136665 * ___mBackgroundOffsetScroller_21;
	// UnityEngine.GameObject CarDodgeGame::mPlayerCar
	GameObject_t1756533147 * ___mPlayerCar_22;
	// PlayerCarController CarDodgeGame::mPlayerCarController
	PlayerCarController_t116747357 * ___mPlayerCarController_23;

public:
	inline static int32_t get_offset_of_mEnemySpawnPoint_3() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mEnemySpawnPoint_3)); }
	inline GameObjectU5BU5D_t3057952154* get_mEnemySpawnPoint_3() const { return ___mEnemySpawnPoint_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mEnemySpawnPoint_3() { return &___mEnemySpawnPoint_3; }
	inline void set_mEnemySpawnPoint_3(GameObjectU5BU5D_t3057952154* value)
	{
		___mEnemySpawnPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___mEnemySpawnPoint_3, value);
	}

	inline static int32_t get_offset_of_mPlayerSpawnPoint_4() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mPlayerSpawnPoint_4)); }
	inline GameObject_t1756533147 * get_mPlayerSpawnPoint_4() const { return ___mPlayerSpawnPoint_4; }
	inline GameObject_t1756533147 ** get_address_of_mPlayerSpawnPoint_4() { return &___mPlayerSpawnPoint_4; }
	inline void set_mPlayerSpawnPoint_4(GameObject_t1756533147 * value)
	{
		___mPlayerSpawnPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerSpawnPoint_4, value);
	}

	inline static int32_t get_offset_of_mNormalEnemyCar_5() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mNormalEnemyCar_5)); }
	inline GameObjectU5BU5D_t3057952154* get_mNormalEnemyCar_5() const { return ___mNormalEnemyCar_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mNormalEnemyCar_5() { return &___mNormalEnemyCar_5; }
	inline void set_mNormalEnemyCar_5(GameObjectU5BU5D_t3057952154* value)
	{
		___mNormalEnemyCar_5 = value;
		Il2CppCodeGenWriteBarrier(&___mNormalEnemyCar_5, value);
	}

	inline static int32_t get_offset_of_mTruckEnemyCar_6() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mTruckEnemyCar_6)); }
	inline GameObjectU5BU5D_t3057952154* get_mTruckEnemyCar_6() const { return ___mTruckEnemyCar_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mTruckEnemyCar_6() { return &___mTruckEnemyCar_6; }
	inline void set_mTruckEnemyCar_6(GameObjectU5BU5D_t3057952154* value)
	{
		___mTruckEnemyCar_6 = value;
		Il2CppCodeGenWriteBarrier(&___mTruckEnemyCar_6, value);
	}

	inline static int32_t get_offset_of_mFastEnemyCar_7() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mFastEnemyCar_7)); }
	inline GameObjectU5BU5D_t3057952154* get_mFastEnemyCar_7() const { return ___mFastEnemyCar_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mFastEnemyCar_7() { return &___mFastEnemyCar_7; }
	inline void set_mFastEnemyCar_7(GameObjectU5BU5D_t3057952154* value)
	{
		___mFastEnemyCar_7 = value;
		Il2CppCodeGenWriteBarrier(&___mFastEnemyCar_7, value);
	}

	inline static int32_t get_offset_of_mNormalCarSpawnChange_8() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mNormalCarSpawnChange_8)); }
	inline float get_mNormalCarSpawnChange_8() const { return ___mNormalCarSpawnChange_8; }
	inline float* get_address_of_mNormalCarSpawnChange_8() { return &___mNormalCarSpawnChange_8; }
	inline void set_mNormalCarSpawnChange_8(float value)
	{
		___mNormalCarSpawnChange_8 = value;
	}

	inline static int32_t get_offset_of_mTruckSpawnChance_9() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mTruckSpawnChance_9)); }
	inline float get_mTruckSpawnChance_9() const { return ___mTruckSpawnChance_9; }
	inline float* get_address_of_mTruckSpawnChance_9() { return &___mTruckSpawnChance_9; }
	inline void set_mTruckSpawnChance_9(float value)
	{
		___mTruckSpawnChance_9 = value;
	}

	inline static int32_t get_offset_of_mFastCarSpawnChance_10() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mFastCarSpawnChance_10)); }
	inline float get_mFastCarSpawnChance_10() const { return ___mFastCarSpawnChance_10; }
	inline float* get_address_of_mFastCarSpawnChance_10() { return &___mFastCarSpawnChance_10; }
	inline void set_mFastCarSpawnChance_10(float value)
	{
		___mFastCarSpawnChance_10 = value;
	}

	inline static int32_t get_offset_of_mMaxSpawnSpeed_11() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mMaxSpawnSpeed_11)); }
	inline float get_mMaxSpawnSpeed_11() const { return ___mMaxSpawnSpeed_11; }
	inline float* get_address_of_mMaxSpawnSpeed_11() { return &___mMaxSpawnSpeed_11; }
	inline void set_mMaxSpawnSpeed_11(float value)
	{
		___mMaxSpawnSpeed_11 = value;
	}

	inline static int32_t get_offset_of_mMinSpawnSpeed_12() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mMinSpawnSpeed_12)); }
	inline float get_mMinSpawnSpeed_12() const { return ___mMinSpawnSpeed_12; }
	inline float* get_address_of_mMinSpawnSpeed_12() { return &___mMinSpawnSpeed_12; }
	inline void set_mMinSpawnSpeed_12(float value)
	{
		___mMinSpawnSpeed_12 = value;
	}

	inline static int32_t get_offset_of_mOriginalMaxSpawnSpeed_13() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mOriginalMaxSpawnSpeed_13)); }
	inline float get_mOriginalMaxSpawnSpeed_13() const { return ___mOriginalMaxSpawnSpeed_13; }
	inline float* get_address_of_mOriginalMaxSpawnSpeed_13() { return &___mOriginalMaxSpawnSpeed_13; }
	inline void set_mOriginalMaxSpawnSpeed_13(float value)
	{
		___mOriginalMaxSpawnSpeed_13 = value;
	}

	inline static int32_t get_offset_of_mOriginalMinSpawnSpeed_14() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mOriginalMinSpawnSpeed_14)); }
	inline float get_mOriginalMinSpawnSpeed_14() const { return ___mOriginalMinSpawnSpeed_14; }
	inline float* get_address_of_mOriginalMinSpawnSpeed_14() { return &___mOriginalMinSpawnSpeed_14; }
	inline void set_mOriginalMinSpawnSpeed_14(float value)
	{
		___mOriginalMinSpawnSpeed_14 = value;
	}

	inline static int32_t get_offset_of_mCurrentSpawnSpeed_15() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mCurrentSpawnSpeed_15)); }
	inline float get_mCurrentSpawnSpeed_15() const { return ___mCurrentSpawnSpeed_15; }
	inline float* get_address_of_mCurrentSpawnSpeed_15() { return &___mCurrentSpawnSpeed_15; }
	inline void set_mCurrentSpawnSpeed_15(float value)
	{
		___mCurrentSpawnSpeed_15 = value;
	}

	inline static int32_t get_offset_of_mScoreLabel_16() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mScoreLabel_16)); }
	inline UILabel_t1795115428 * get_mScoreLabel_16() const { return ___mScoreLabel_16; }
	inline UILabel_t1795115428 ** get_address_of_mScoreLabel_16() { return &___mScoreLabel_16; }
	inline void set_mScoreLabel_16(UILabel_t1795115428 * value)
	{
		___mScoreLabel_16 = value;
		Il2CppCodeGenWriteBarrier(&___mScoreLabel_16, value);
	}

	inline static int32_t get_offset_of_mGameLevelLabel_17() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mGameLevelLabel_17)); }
	inline UILabel_t1795115428 * get_mGameLevelLabel_17() const { return ___mGameLevelLabel_17; }
	inline UILabel_t1795115428 ** get_address_of_mGameLevelLabel_17() { return &___mGameLevelLabel_17; }
	inline void set_mGameLevelLabel_17(UILabel_t1795115428 * value)
	{
		___mGameLevelLabel_17 = value;
		Il2CppCodeGenWriteBarrier(&___mGameLevelLabel_17, value);
	}

	inline static int32_t get_offset_of_mCurrentScore_18() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mCurrentScore_18)); }
	inline int32_t get_mCurrentScore_18() const { return ___mCurrentScore_18; }
	inline int32_t* get_address_of_mCurrentScore_18() { return &___mCurrentScore_18; }
	inline void set_mCurrentScore_18(int32_t value)
	{
		___mCurrentScore_18 = value;
	}

	inline static int32_t get_offset_of_mGameLevel_19() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mGameLevel_19)); }
	inline int32_t get_mGameLevel_19() const { return ___mGameLevel_19; }
	inline int32_t* get_address_of_mGameLevel_19() { return &___mGameLevel_19; }
	inline void set_mGameLevel_19(int32_t value)
	{
		___mGameLevel_19 = value;
	}

	inline static int32_t get_offset_of_mScrollerBackground_20() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mScrollerBackground_20)); }
	inline GameObject_t1756533147 * get_mScrollerBackground_20() const { return ___mScrollerBackground_20; }
	inline GameObject_t1756533147 ** get_address_of_mScrollerBackground_20() { return &___mScrollerBackground_20; }
	inline void set_mScrollerBackground_20(GameObject_t1756533147 * value)
	{
		___mScrollerBackground_20 = value;
		Il2CppCodeGenWriteBarrier(&___mScrollerBackground_20, value);
	}

	inline static int32_t get_offset_of_mBackgroundOffsetScroller_21() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mBackgroundOffsetScroller_21)); }
	inline OffsetScroller_t1610136665 * get_mBackgroundOffsetScroller_21() const { return ___mBackgroundOffsetScroller_21; }
	inline OffsetScroller_t1610136665 ** get_address_of_mBackgroundOffsetScroller_21() { return &___mBackgroundOffsetScroller_21; }
	inline void set_mBackgroundOffsetScroller_21(OffsetScroller_t1610136665 * value)
	{
		___mBackgroundOffsetScroller_21 = value;
		Il2CppCodeGenWriteBarrier(&___mBackgroundOffsetScroller_21, value);
	}

	inline static int32_t get_offset_of_mPlayerCar_22() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mPlayerCar_22)); }
	inline GameObject_t1756533147 * get_mPlayerCar_22() const { return ___mPlayerCar_22; }
	inline GameObject_t1756533147 ** get_address_of_mPlayerCar_22() { return &___mPlayerCar_22; }
	inline void set_mPlayerCar_22(GameObject_t1756533147 * value)
	{
		___mPlayerCar_22 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerCar_22, value);
	}

	inline static int32_t get_offset_of_mPlayerCarController_23() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mPlayerCarController_23)); }
	inline PlayerCarController_t116747357 * get_mPlayerCarController_23() const { return ___mPlayerCarController_23; }
	inline PlayerCarController_t116747357 ** get_address_of_mPlayerCarController_23() { return &___mPlayerCarController_23; }
	inline void set_mPlayerCarController_23(PlayerCarController_t116747357 * value)
	{
		___mPlayerCarController_23 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerCarController_23, value);
	}
};

struct CarDodgeGame_t1650312537_StaticFields
{
public:
	// CarDodgeGame CarDodgeGame::mCarDodgeGameInstance
	CarDodgeGame_t1650312537 * ___mCarDodgeGameInstance_2;

public:
	inline static int32_t get_offset_of_mCarDodgeGameInstance_2() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537_StaticFields, ___mCarDodgeGameInstance_2)); }
	inline CarDodgeGame_t1650312537 * get_mCarDodgeGameInstance_2() const { return ___mCarDodgeGameInstance_2; }
	inline CarDodgeGame_t1650312537 ** get_address_of_mCarDodgeGameInstance_2() { return &___mCarDodgeGameInstance_2; }
	inline void set_mCarDodgeGameInstance_2(CarDodgeGame_t1650312537 * value)
	{
		___mCarDodgeGameInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mCarDodgeGameInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
