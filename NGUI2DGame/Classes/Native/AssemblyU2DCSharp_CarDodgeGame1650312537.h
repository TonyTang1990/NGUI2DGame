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
// NGUI2DGame.PlayerData
struct PlayerData_t4175080041;

#include "AssemblyU2DCSharp_Game1600141214.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CarDodgeGame
struct  CarDodgeGame_t1650312537  : public Game_t1600141214
{
public:
	// UnityEngine.GameObject[] CarDodgeGame::mEnemySpawnPoint
	GameObjectU5BU5D_t3057952154* ___mEnemySpawnPoint_8;
	// UnityEngine.GameObject CarDodgeGame::mPlayerSpawnPoint
	GameObject_t1756533147 * ___mPlayerSpawnPoint_9;
	// UnityEngine.GameObject[] CarDodgeGame::mNormalEnemyCar
	GameObjectU5BU5D_t3057952154* ___mNormalEnemyCar_10;
	// UnityEngine.GameObject[] CarDodgeGame::mTruckEnemyCar
	GameObjectU5BU5D_t3057952154* ___mTruckEnemyCar_11;
	// UnityEngine.GameObject[] CarDodgeGame::mFastEnemyCar
	GameObjectU5BU5D_t3057952154* ___mFastEnemyCar_12;
	// System.Single CarDodgeGame::mNormalCarSpawnChange
	float ___mNormalCarSpawnChange_13;
	// System.Single CarDodgeGame::mTruckSpawnChance
	float ___mTruckSpawnChance_14;
	// System.Single CarDodgeGame::mFastCarSpawnChance
	float ___mFastCarSpawnChance_15;
	// System.Single CarDodgeGame::mMaxSpawnSpeed
	float ___mMaxSpawnSpeed_16;
	// System.Single CarDodgeGame::mMinSpawnSpeed
	float ___mMinSpawnSpeed_17;
	// System.Single CarDodgeGame::mOriginalMaxSpawnSpeed
	float ___mOriginalMaxSpawnSpeed_18;
	// System.Single CarDodgeGame::mOriginalMinSpawnSpeed
	float ___mOriginalMinSpawnSpeed_19;
	// System.Single CarDodgeGame::mCurrentSpawnSpeed
	float ___mCurrentSpawnSpeed_20;
	// UILabel CarDodgeGame::mScoreLabel
	UILabel_t1795115428 * ___mScoreLabel_21;
	// UILabel CarDodgeGame::mGameLevelLabel
	UILabel_t1795115428 * ___mGameLevelLabel_22;
	// System.Int32 CarDodgeGame::mCurrentScore
	int32_t ___mCurrentScore_23;
	// System.Int32 CarDodgeGame::mGameLevel
	int32_t ___mGameLevel_24;
	// UnityEngine.GameObject CarDodgeGame::mScrollerBackground
	GameObject_t1756533147 * ___mScrollerBackground_25;
	// OffsetScroller CarDodgeGame::mBackgroundOffsetScroller
	OffsetScroller_t1610136665 * ___mBackgroundOffsetScroller_26;
	// UnityEngine.GameObject CarDodgeGame::mPlayerCar
	GameObject_t1756533147 * ___mPlayerCar_27;
	// PlayerCarController CarDodgeGame::mPlayerCarController
	PlayerCarController_t116747357 * ___mPlayerCarController_28;
	// NGUI2DGame.PlayerData CarDodgeGame::mPlayerData
	PlayerData_t4175080041 * ___mPlayerData_29;

public:
	inline static int32_t get_offset_of_mEnemySpawnPoint_8() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mEnemySpawnPoint_8)); }
	inline GameObjectU5BU5D_t3057952154* get_mEnemySpawnPoint_8() const { return ___mEnemySpawnPoint_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mEnemySpawnPoint_8() { return &___mEnemySpawnPoint_8; }
	inline void set_mEnemySpawnPoint_8(GameObjectU5BU5D_t3057952154* value)
	{
		___mEnemySpawnPoint_8 = value;
		Il2CppCodeGenWriteBarrier(&___mEnemySpawnPoint_8, value);
	}

	inline static int32_t get_offset_of_mPlayerSpawnPoint_9() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mPlayerSpawnPoint_9)); }
	inline GameObject_t1756533147 * get_mPlayerSpawnPoint_9() const { return ___mPlayerSpawnPoint_9; }
	inline GameObject_t1756533147 ** get_address_of_mPlayerSpawnPoint_9() { return &___mPlayerSpawnPoint_9; }
	inline void set_mPlayerSpawnPoint_9(GameObject_t1756533147 * value)
	{
		___mPlayerSpawnPoint_9 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerSpawnPoint_9, value);
	}

	inline static int32_t get_offset_of_mNormalEnemyCar_10() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mNormalEnemyCar_10)); }
	inline GameObjectU5BU5D_t3057952154* get_mNormalEnemyCar_10() const { return ___mNormalEnemyCar_10; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mNormalEnemyCar_10() { return &___mNormalEnemyCar_10; }
	inline void set_mNormalEnemyCar_10(GameObjectU5BU5D_t3057952154* value)
	{
		___mNormalEnemyCar_10 = value;
		Il2CppCodeGenWriteBarrier(&___mNormalEnemyCar_10, value);
	}

	inline static int32_t get_offset_of_mTruckEnemyCar_11() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mTruckEnemyCar_11)); }
	inline GameObjectU5BU5D_t3057952154* get_mTruckEnemyCar_11() const { return ___mTruckEnemyCar_11; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mTruckEnemyCar_11() { return &___mTruckEnemyCar_11; }
	inline void set_mTruckEnemyCar_11(GameObjectU5BU5D_t3057952154* value)
	{
		___mTruckEnemyCar_11 = value;
		Il2CppCodeGenWriteBarrier(&___mTruckEnemyCar_11, value);
	}

	inline static int32_t get_offset_of_mFastEnemyCar_12() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mFastEnemyCar_12)); }
	inline GameObjectU5BU5D_t3057952154* get_mFastEnemyCar_12() const { return ___mFastEnemyCar_12; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_mFastEnemyCar_12() { return &___mFastEnemyCar_12; }
	inline void set_mFastEnemyCar_12(GameObjectU5BU5D_t3057952154* value)
	{
		___mFastEnemyCar_12 = value;
		Il2CppCodeGenWriteBarrier(&___mFastEnemyCar_12, value);
	}

	inline static int32_t get_offset_of_mNormalCarSpawnChange_13() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mNormalCarSpawnChange_13)); }
	inline float get_mNormalCarSpawnChange_13() const { return ___mNormalCarSpawnChange_13; }
	inline float* get_address_of_mNormalCarSpawnChange_13() { return &___mNormalCarSpawnChange_13; }
	inline void set_mNormalCarSpawnChange_13(float value)
	{
		___mNormalCarSpawnChange_13 = value;
	}

	inline static int32_t get_offset_of_mTruckSpawnChance_14() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mTruckSpawnChance_14)); }
	inline float get_mTruckSpawnChance_14() const { return ___mTruckSpawnChance_14; }
	inline float* get_address_of_mTruckSpawnChance_14() { return &___mTruckSpawnChance_14; }
	inline void set_mTruckSpawnChance_14(float value)
	{
		___mTruckSpawnChance_14 = value;
	}

	inline static int32_t get_offset_of_mFastCarSpawnChance_15() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mFastCarSpawnChance_15)); }
	inline float get_mFastCarSpawnChance_15() const { return ___mFastCarSpawnChance_15; }
	inline float* get_address_of_mFastCarSpawnChance_15() { return &___mFastCarSpawnChance_15; }
	inline void set_mFastCarSpawnChance_15(float value)
	{
		___mFastCarSpawnChance_15 = value;
	}

	inline static int32_t get_offset_of_mMaxSpawnSpeed_16() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mMaxSpawnSpeed_16)); }
	inline float get_mMaxSpawnSpeed_16() const { return ___mMaxSpawnSpeed_16; }
	inline float* get_address_of_mMaxSpawnSpeed_16() { return &___mMaxSpawnSpeed_16; }
	inline void set_mMaxSpawnSpeed_16(float value)
	{
		___mMaxSpawnSpeed_16 = value;
	}

	inline static int32_t get_offset_of_mMinSpawnSpeed_17() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mMinSpawnSpeed_17)); }
	inline float get_mMinSpawnSpeed_17() const { return ___mMinSpawnSpeed_17; }
	inline float* get_address_of_mMinSpawnSpeed_17() { return &___mMinSpawnSpeed_17; }
	inline void set_mMinSpawnSpeed_17(float value)
	{
		___mMinSpawnSpeed_17 = value;
	}

	inline static int32_t get_offset_of_mOriginalMaxSpawnSpeed_18() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mOriginalMaxSpawnSpeed_18)); }
	inline float get_mOriginalMaxSpawnSpeed_18() const { return ___mOriginalMaxSpawnSpeed_18; }
	inline float* get_address_of_mOriginalMaxSpawnSpeed_18() { return &___mOriginalMaxSpawnSpeed_18; }
	inline void set_mOriginalMaxSpawnSpeed_18(float value)
	{
		___mOriginalMaxSpawnSpeed_18 = value;
	}

	inline static int32_t get_offset_of_mOriginalMinSpawnSpeed_19() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mOriginalMinSpawnSpeed_19)); }
	inline float get_mOriginalMinSpawnSpeed_19() const { return ___mOriginalMinSpawnSpeed_19; }
	inline float* get_address_of_mOriginalMinSpawnSpeed_19() { return &___mOriginalMinSpawnSpeed_19; }
	inline void set_mOriginalMinSpawnSpeed_19(float value)
	{
		___mOriginalMinSpawnSpeed_19 = value;
	}

	inline static int32_t get_offset_of_mCurrentSpawnSpeed_20() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mCurrentSpawnSpeed_20)); }
	inline float get_mCurrentSpawnSpeed_20() const { return ___mCurrentSpawnSpeed_20; }
	inline float* get_address_of_mCurrentSpawnSpeed_20() { return &___mCurrentSpawnSpeed_20; }
	inline void set_mCurrentSpawnSpeed_20(float value)
	{
		___mCurrentSpawnSpeed_20 = value;
	}

	inline static int32_t get_offset_of_mScoreLabel_21() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mScoreLabel_21)); }
	inline UILabel_t1795115428 * get_mScoreLabel_21() const { return ___mScoreLabel_21; }
	inline UILabel_t1795115428 ** get_address_of_mScoreLabel_21() { return &___mScoreLabel_21; }
	inline void set_mScoreLabel_21(UILabel_t1795115428 * value)
	{
		___mScoreLabel_21 = value;
		Il2CppCodeGenWriteBarrier(&___mScoreLabel_21, value);
	}

	inline static int32_t get_offset_of_mGameLevelLabel_22() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mGameLevelLabel_22)); }
	inline UILabel_t1795115428 * get_mGameLevelLabel_22() const { return ___mGameLevelLabel_22; }
	inline UILabel_t1795115428 ** get_address_of_mGameLevelLabel_22() { return &___mGameLevelLabel_22; }
	inline void set_mGameLevelLabel_22(UILabel_t1795115428 * value)
	{
		___mGameLevelLabel_22 = value;
		Il2CppCodeGenWriteBarrier(&___mGameLevelLabel_22, value);
	}

	inline static int32_t get_offset_of_mCurrentScore_23() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mCurrentScore_23)); }
	inline int32_t get_mCurrentScore_23() const { return ___mCurrentScore_23; }
	inline int32_t* get_address_of_mCurrentScore_23() { return &___mCurrentScore_23; }
	inline void set_mCurrentScore_23(int32_t value)
	{
		___mCurrentScore_23 = value;
	}

	inline static int32_t get_offset_of_mGameLevel_24() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mGameLevel_24)); }
	inline int32_t get_mGameLevel_24() const { return ___mGameLevel_24; }
	inline int32_t* get_address_of_mGameLevel_24() { return &___mGameLevel_24; }
	inline void set_mGameLevel_24(int32_t value)
	{
		___mGameLevel_24 = value;
	}

	inline static int32_t get_offset_of_mScrollerBackground_25() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mScrollerBackground_25)); }
	inline GameObject_t1756533147 * get_mScrollerBackground_25() const { return ___mScrollerBackground_25; }
	inline GameObject_t1756533147 ** get_address_of_mScrollerBackground_25() { return &___mScrollerBackground_25; }
	inline void set_mScrollerBackground_25(GameObject_t1756533147 * value)
	{
		___mScrollerBackground_25 = value;
		Il2CppCodeGenWriteBarrier(&___mScrollerBackground_25, value);
	}

	inline static int32_t get_offset_of_mBackgroundOffsetScroller_26() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mBackgroundOffsetScroller_26)); }
	inline OffsetScroller_t1610136665 * get_mBackgroundOffsetScroller_26() const { return ___mBackgroundOffsetScroller_26; }
	inline OffsetScroller_t1610136665 ** get_address_of_mBackgroundOffsetScroller_26() { return &___mBackgroundOffsetScroller_26; }
	inline void set_mBackgroundOffsetScroller_26(OffsetScroller_t1610136665 * value)
	{
		___mBackgroundOffsetScroller_26 = value;
		Il2CppCodeGenWriteBarrier(&___mBackgroundOffsetScroller_26, value);
	}

	inline static int32_t get_offset_of_mPlayerCar_27() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mPlayerCar_27)); }
	inline GameObject_t1756533147 * get_mPlayerCar_27() const { return ___mPlayerCar_27; }
	inline GameObject_t1756533147 ** get_address_of_mPlayerCar_27() { return &___mPlayerCar_27; }
	inline void set_mPlayerCar_27(GameObject_t1756533147 * value)
	{
		___mPlayerCar_27 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerCar_27, value);
	}

	inline static int32_t get_offset_of_mPlayerCarController_28() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mPlayerCarController_28)); }
	inline PlayerCarController_t116747357 * get_mPlayerCarController_28() const { return ___mPlayerCarController_28; }
	inline PlayerCarController_t116747357 ** get_address_of_mPlayerCarController_28() { return &___mPlayerCarController_28; }
	inline void set_mPlayerCarController_28(PlayerCarController_t116747357 * value)
	{
		___mPlayerCarController_28 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerCarController_28, value);
	}

	inline static int32_t get_offset_of_mPlayerData_29() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537, ___mPlayerData_29)); }
	inline PlayerData_t4175080041 * get_mPlayerData_29() const { return ___mPlayerData_29; }
	inline PlayerData_t4175080041 ** get_address_of_mPlayerData_29() { return &___mPlayerData_29; }
	inline void set_mPlayerData_29(PlayerData_t4175080041 * value)
	{
		___mPlayerData_29 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerData_29, value);
	}
};

struct CarDodgeGame_t1650312537_StaticFields
{
public:
	// CarDodgeGame CarDodgeGame::mCarDodgeGameInstance
	CarDodgeGame_t1650312537 * ___mCarDodgeGameInstance_7;

public:
	inline static int32_t get_offset_of_mCarDodgeGameInstance_7() { return static_cast<int32_t>(offsetof(CarDodgeGame_t1650312537_StaticFields, ___mCarDodgeGameInstance_7)); }
	inline CarDodgeGame_t1650312537 * get_mCarDodgeGameInstance_7() const { return ___mCarDodgeGameInstance_7; }
	inline CarDodgeGame_t1650312537 ** get_address_of_mCarDodgeGameInstance_7() { return &___mCarDodgeGameInstance_7; }
	inline void set_mCarDodgeGameInstance_7(CarDodgeGame_t1650312537 * value)
	{
		___mCarDodgeGameInstance_7 = value;
		Il2CppCodeGenWriteBarrier(&___mCarDodgeGameInstance_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
