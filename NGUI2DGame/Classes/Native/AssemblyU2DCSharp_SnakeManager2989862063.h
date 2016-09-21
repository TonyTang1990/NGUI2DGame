#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SnakeManager
struct SnakeManager_t2989862063;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// SnakeHead
struct SnakeHead_t2301560042;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UILabel
struct UILabel_t1795115428;

#include "AssemblyU2DCSharp_Game1600141214.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SnakeManager
struct  SnakeManager_t2989862063  : public Game_t1600141214
{
public:
	// UnityEngine.GameObject SnakeManager::mSnakeFood
	GameObject_t1756533147 * ___mSnakeFood_7;
	// UnityEngine.GameObject SnakeManager::mSnakeHeadGO
	GameObject_t1756533147 * ___mSnakeHeadGO_8;
	// SnakeHead SnakeManager::mSnakeHead
	SnakeHead_t2301560042 * ___mSnakeHead_9;
	// UnityEngine.GameObject SnakeManager::mSnakeTailGO
	GameObject_t1756533147 * ___mSnakeTailGO_10;
	// UnityEngine.GameObject SnakeManager::mSnakeFoodInstance
	GameObject_t1756533147 * ___mSnakeFoodInstance_11;
	// UnityEngine.GameObject SnakeManager::mCurrentAvaliableSnakeFoodGO
	GameObject_t1756533147 * ___mCurrentAvaliableSnakeFoodGO_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SnakeManager::mSnakeList
	List_1_t1125654279 * ___mSnakeList_13;
	// System.Single SnakeManager::mSnakeMoveIntervalTime
	float ___mSnakeMoveIntervalTime_14;
	// System.Single SnakeManager::mOriginalSnakeMoveIntervalTime
	float ___mOriginalSnakeMoveIntervalTime_15;
	// UnityEngine.Vector2 SnakeManager::mLastTailPosition
	Vector2_t2243707579  ___mLastTailPosition_16;
	// System.Int32 SnakeManager::mLastTailIndex
	int32_t ___mLastTailIndex_17;
	// System.Int32 SnakeManager::mSnakeTailNumber
	int32_t ___mSnakeTailNumber_18;
	// System.Int32 SnakeManager::mLevelUpNumbers
	int32_t ___mLevelUpNumbers_19;
	// System.Int32 SnakeManager::mSnakeGameSpeedLevel
	int32_t ___mSnakeGameSpeedLevel_20;
	// UILabel SnakeManager::mSnakeTailsNumberText
	UILabel_t1795115428 * ___mSnakeTailsNumberText_21;
	// UILabel SnakeManager::mSnakeGameSpeedText
	UILabel_t1795115428 * ___mSnakeGameSpeedText_22;

public:
	inline static int32_t get_offset_of_mSnakeFood_7() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeFood_7)); }
	inline GameObject_t1756533147 * get_mSnakeFood_7() const { return ___mSnakeFood_7; }
	inline GameObject_t1756533147 ** get_address_of_mSnakeFood_7() { return &___mSnakeFood_7; }
	inline void set_mSnakeFood_7(GameObject_t1756533147 * value)
	{
		___mSnakeFood_7 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeFood_7, value);
	}

	inline static int32_t get_offset_of_mSnakeHeadGO_8() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeHeadGO_8)); }
	inline GameObject_t1756533147 * get_mSnakeHeadGO_8() const { return ___mSnakeHeadGO_8; }
	inline GameObject_t1756533147 ** get_address_of_mSnakeHeadGO_8() { return &___mSnakeHeadGO_8; }
	inline void set_mSnakeHeadGO_8(GameObject_t1756533147 * value)
	{
		___mSnakeHeadGO_8 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeHeadGO_8, value);
	}

	inline static int32_t get_offset_of_mSnakeHead_9() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeHead_9)); }
	inline SnakeHead_t2301560042 * get_mSnakeHead_9() const { return ___mSnakeHead_9; }
	inline SnakeHead_t2301560042 ** get_address_of_mSnakeHead_9() { return &___mSnakeHead_9; }
	inline void set_mSnakeHead_9(SnakeHead_t2301560042 * value)
	{
		___mSnakeHead_9 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeHead_9, value);
	}

	inline static int32_t get_offset_of_mSnakeTailGO_10() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeTailGO_10)); }
	inline GameObject_t1756533147 * get_mSnakeTailGO_10() const { return ___mSnakeTailGO_10; }
	inline GameObject_t1756533147 ** get_address_of_mSnakeTailGO_10() { return &___mSnakeTailGO_10; }
	inline void set_mSnakeTailGO_10(GameObject_t1756533147 * value)
	{
		___mSnakeTailGO_10 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeTailGO_10, value);
	}

	inline static int32_t get_offset_of_mSnakeFoodInstance_11() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeFoodInstance_11)); }
	inline GameObject_t1756533147 * get_mSnakeFoodInstance_11() const { return ___mSnakeFoodInstance_11; }
	inline GameObject_t1756533147 ** get_address_of_mSnakeFoodInstance_11() { return &___mSnakeFoodInstance_11; }
	inline void set_mSnakeFoodInstance_11(GameObject_t1756533147 * value)
	{
		___mSnakeFoodInstance_11 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeFoodInstance_11, value);
	}

	inline static int32_t get_offset_of_mCurrentAvaliableSnakeFoodGO_12() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mCurrentAvaliableSnakeFoodGO_12)); }
	inline GameObject_t1756533147 * get_mCurrentAvaliableSnakeFoodGO_12() const { return ___mCurrentAvaliableSnakeFoodGO_12; }
	inline GameObject_t1756533147 ** get_address_of_mCurrentAvaliableSnakeFoodGO_12() { return &___mCurrentAvaliableSnakeFoodGO_12; }
	inline void set_mCurrentAvaliableSnakeFoodGO_12(GameObject_t1756533147 * value)
	{
		___mCurrentAvaliableSnakeFoodGO_12 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentAvaliableSnakeFoodGO_12, value);
	}

	inline static int32_t get_offset_of_mSnakeList_13() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeList_13)); }
	inline List_1_t1125654279 * get_mSnakeList_13() const { return ___mSnakeList_13; }
	inline List_1_t1125654279 ** get_address_of_mSnakeList_13() { return &___mSnakeList_13; }
	inline void set_mSnakeList_13(List_1_t1125654279 * value)
	{
		___mSnakeList_13 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeList_13, value);
	}

	inline static int32_t get_offset_of_mSnakeMoveIntervalTime_14() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeMoveIntervalTime_14)); }
	inline float get_mSnakeMoveIntervalTime_14() const { return ___mSnakeMoveIntervalTime_14; }
	inline float* get_address_of_mSnakeMoveIntervalTime_14() { return &___mSnakeMoveIntervalTime_14; }
	inline void set_mSnakeMoveIntervalTime_14(float value)
	{
		___mSnakeMoveIntervalTime_14 = value;
	}

	inline static int32_t get_offset_of_mOriginalSnakeMoveIntervalTime_15() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mOriginalSnakeMoveIntervalTime_15)); }
	inline float get_mOriginalSnakeMoveIntervalTime_15() const { return ___mOriginalSnakeMoveIntervalTime_15; }
	inline float* get_address_of_mOriginalSnakeMoveIntervalTime_15() { return &___mOriginalSnakeMoveIntervalTime_15; }
	inline void set_mOriginalSnakeMoveIntervalTime_15(float value)
	{
		___mOriginalSnakeMoveIntervalTime_15 = value;
	}

	inline static int32_t get_offset_of_mLastTailPosition_16() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mLastTailPosition_16)); }
	inline Vector2_t2243707579  get_mLastTailPosition_16() const { return ___mLastTailPosition_16; }
	inline Vector2_t2243707579 * get_address_of_mLastTailPosition_16() { return &___mLastTailPosition_16; }
	inline void set_mLastTailPosition_16(Vector2_t2243707579  value)
	{
		___mLastTailPosition_16 = value;
	}

	inline static int32_t get_offset_of_mLastTailIndex_17() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mLastTailIndex_17)); }
	inline int32_t get_mLastTailIndex_17() const { return ___mLastTailIndex_17; }
	inline int32_t* get_address_of_mLastTailIndex_17() { return &___mLastTailIndex_17; }
	inline void set_mLastTailIndex_17(int32_t value)
	{
		___mLastTailIndex_17 = value;
	}

	inline static int32_t get_offset_of_mSnakeTailNumber_18() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeTailNumber_18)); }
	inline int32_t get_mSnakeTailNumber_18() const { return ___mSnakeTailNumber_18; }
	inline int32_t* get_address_of_mSnakeTailNumber_18() { return &___mSnakeTailNumber_18; }
	inline void set_mSnakeTailNumber_18(int32_t value)
	{
		___mSnakeTailNumber_18 = value;
	}

	inline static int32_t get_offset_of_mLevelUpNumbers_19() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mLevelUpNumbers_19)); }
	inline int32_t get_mLevelUpNumbers_19() const { return ___mLevelUpNumbers_19; }
	inline int32_t* get_address_of_mLevelUpNumbers_19() { return &___mLevelUpNumbers_19; }
	inline void set_mLevelUpNumbers_19(int32_t value)
	{
		___mLevelUpNumbers_19 = value;
	}

	inline static int32_t get_offset_of_mSnakeGameSpeedLevel_20() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeGameSpeedLevel_20)); }
	inline int32_t get_mSnakeGameSpeedLevel_20() const { return ___mSnakeGameSpeedLevel_20; }
	inline int32_t* get_address_of_mSnakeGameSpeedLevel_20() { return &___mSnakeGameSpeedLevel_20; }
	inline void set_mSnakeGameSpeedLevel_20(int32_t value)
	{
		___mSnakeGameSpeedLevel_20 = value;
	}

	inline static int32_t get_offset_of_mSnakeTailsNumberText_21() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeTailsNumberText_21)); }
	inline UILabel_t1795115428 * get_mSnakeTailsNumberText_21() const { return ___mSnakeTailsNumberText_21; }
	inline UILabel_t1795115428 ** get_address_of_mSnakeTailsNumberText_21() { return &___mSnakeTailsNumberText_21; }
	inline void set_mSnakeTailsNumberText_21(UILabel_t1795115428 * value)
	{
		___mSnakeTailsNumberText_21 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeTailsNumberText_21, value);
	}

	inline static int32_t get_offset_of_mSnakeGameSpeedText_22() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeGameSpeedText_22)); }
	inline UILabel_t1795115428 * get_mSnakeGameSpeedText_22() const { return ___mSnakeGameSpeedText_22; }
	inline UILabel_t1795115428 ** get_address_of_mSnakeGameSpeedText_22() { return &___mSnakeGameSpeedText_22; }
	inline void set_mSnakeGameSpeedText_22(UILabel_t1795115428 * value)
	{
		___mSnakeGameSpeedText_22 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeGameSpeedText_22, value);
	}
};

struct SnakeManager_t2989862063_StaticFields
{
public:
	// SnakeManager SnakeManager::mSnakeManagerInstance
	SnakeManager_t2989862063 * ___mSnakeManagerInstance_6;

public:
	inline static int32_t get_offset_of_mSnakeManagerInstance_6() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063_StaticFields, ___mSnakeManagerInstance_6)); }
	inline SnakeManager_t2989862063 * get_mSnakeManagerInstance_6() const { return ___mSnakeManagerInstance_6; }
	inline SnakeManager_t2989862063 ** get_address_of_mSnakeManagerInstance_6() { return &___mSnakeManagerInstance_6; }
	inline void set_mSnakeManagerInstance_6(SnakeManager_t2989862063 * value)
	{
		___mSnakeManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeManagerInstance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
