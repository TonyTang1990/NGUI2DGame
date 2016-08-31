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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SnakeManager
struct  SnakeManager_t2989862063  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SnakeManager::mSnakeFood
	GameObject_t1756533147 * ___mSnakeFood_3;
	// UnityEngine.GameObject SnakeManager::mSnakeHeadGO
	GameObject_t1756533147 * ___mSnakeHeadGO_4;
	// SnakeHead SnakeManager::mSnakeHead
	SnakeHead_t2301560042 * ___mSnakeHead_5;
	// UnityEngine.GameObject SnakeManager::mSnakeTailGO
	GameObject_t1756533147 * ___mSnakeTailGO_6;
	// UnityEngine.GameObject SnakeManager::mSnakeFoodInstance
	GameObject_t1756533147 * ___mSnakeFoodInstance_7;
	// UnityEngine.GameObject SnakeManager::mCurrentAvaliableSnakeFoodGO
	GameObject_t1756533147 * ___mCurrentAvaliableSnakeFoodGO_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SnakeManager::mSnakeList
	List_1_t1125654279 * ___mSnakeList_9;
	// System.Single SnakeManager::mSnakeMoveIntervalTime
	float ___mSnakeMoveIntervalTime_10;
	// System.Single SnakeManager::mOriginalSnakeMoveIntervalTime
	float ___mOriginalSnakeMoveIntervalTime_11;
	// UnityEngine.Vector2 SnakeManager::mLastTailPosition
	Vector2_t2243707579  ___mLastTailPosition_12;
	// System.Int32 SnakeManager::mLastTailIndex
	int32_t ___mLastTailIndex_13;
	// System.Boolean SnakeManager::mIsGameOver
	bool ___mIsGameOver_14;
	// System.Int32 SnakeManager::mSnakeTailNumber
	int32_t ___mSnakeTailNumber_15;
	// System.Int32 SnakeManager::mLevelUpNumbers
	int32_t ___mLevelUpNumbers_16;
	// System.Int32 SnakeManager::mSnakeGameSpeedLevel
	int32_t ___mSnakeGameSpeedLevel_17;
	// UILabel SnakeManager::mSnakeTailsNumberText
	UILabel_t1795115428 * ___mSnakeTailsNumberText_18;
	// UILabel SnakeManager::mSnakeGameSpeedText
	UILabel_t1795115428 * ___mSnakeGameSpeedText_19;

public:
	inline static int32_t get_offset_of_mSnakeFood_3() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeFood_3)); }
	inline GameObject_t1756533147 * get_mSnakeFood_3() const { return ___mSnakeFood_3; }
	inline GameObject_t1756533147 ** get_address_of_mSnakeFood_3() { return &___mSnakeFood_3; }
	inline void set_mSnakeFood_3(GameObject_t1756533147 * value)
	{
		___mSnakeFood_3 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeFood_3, value);
	}

	inline static int32_t get_offset_of_mSnakeHeadGO_4() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeHeadGO_4)); }
	inline GameObject_t1756533147 * get_mSnakeHeadGO_4() const { return ___mSnakeHeadGO_4; }
	inline GameObject_t1756533147 ** get_address_of_mSnakeHeadGO_4() { return &___mSnakeHeadGO_4; }
	inline void set_mSnakeHeadGO_4(GameObject_t1756533147 * value)
	{
		___mSnakeHeadGO_4 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeHeadGO_4, value);
	}

	inline static int32_t get_offset_of_mSnakeHead_5() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeHead_5)); }
	inline SnakeHead_t2301560042 * get_mSnakeHead_5() const { return ___mSnakeHead_5; }
	inline SnakeHead_t2301560042 ** get_address_of_mSnakeHead_5() { return &___mSnakeHead_5; }
	inline void set_mSnakeHead_5(SnakeHead_t2301560042 * value)
	{
		___mSnakeHead_5 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeHead_5, value);
	}

	inline static int32_t get_offset_of_mSnakeTailGO_6() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeTailGO_6)); }
	inline GameObject_t1756533147 * get_mSnakeTailGO_6() const { return ___mSnakeTailGO_6; }
	inline GameObject_t1756533147 ** get_address_of_mSnakeTailGO_6() { return &___mSnakeTailGO_6; }
	inline void set_mSnakeTailGO_6(GameObject_t1756533147 * value)
	{
		___mSnakeTailGO_6 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeTailGO_6, value);
	}

	inline static int32_t get_offset_of_mSnakeFoodInstance_7() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeFoodInstance_7)); }
	inline GameObject_t1756533147 * get_mSnakeFoodInstance_7() const { return ___mSnakeFoodInstance_7; }
	inline GameObject_t1756533147 ** get_address_of_mSnakeFoodInstance_7() { return &___mSnakeFoodInstance_7; }
	inline void set_mSnakeFoodInstance_7(GameObject_t1756533147 * value)
	{
		___mSnakeFoodInstance_7 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeFoodInstance_7, value);
	}

	inline static int32_t get_offset_of_mCurrentAvaliableSnakeFoodGO_8() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mCurrentAvaliableSnakeFoodGO_8)); }
	inline GameObject_t1756533147 * get_mCurrentAvaliableSnakeFoodGO_8() const { return ___mCurrentAvaliableSnakeFoodGO_8; }
	inline GameObject_t1756533147 ** get_address_of_mCurrentAvaliableSnakeFoodGO_8() { return &___mCurrentAvaliableSnakeFoodGO_8; }
	inline void set_mCurrentAvaliableSnakeFoodGO_8(GameObject_t1756533147 * value)
	{
		___mCurrentAvaliableSnakeFoodGO_8 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentAvaliableSnakeFoodGO_8, value);
	}

	inline static int32_t get_offset_of_mSnakeList_9() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeList_9)); }
	inline List_1_t1125654279 * get_mSnakeList_9() const { return ___mSnakeList_9; }
	inline List_1_t1125654279 ** get_address_of_mSnakeList_9() { return &___mSnakeList_9; }
	inline void set_mSnakeList_9(List_1_t1125654279 * value)
	{
		___mSnakeList_9 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeList_9, value);
	}

	inline static int32_t get_offset_of_mSnakeMoveIntervalTime_10() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeMoveIntervalTime_10)); }
	inline float get_mSnakeMoveIntervalTime_10() const { return ___mSnakeMoveIntervalTime_10; }
	inline float* get_address_of_mSnakeMoveIntervalTime_10() { return &___mSnakeMoveIntervalTime_10; }
	inline void set_mSnakeMoveIntervalTime_10(float value)
	{
		___mSnakeMoveIntervalTime_10 = value;
	}

	inline static int32_t get_offset_of_mOriginalSnakeMoveIntervalTime_11() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mOriginalSnakeMoveIntervalTime_11)); }
	inline float get_mOriginalSnakeMoveIntervalTime_11() const { return ___mOriginalSnakeMoveIntervalTime_11; }
	inline float* get_address_of_mOriginalSnakeMoveIntervalTime_11() { return &___mOriginalSnakeMoveIntervalTime_11; }
	inline void set_mOriginalSnakeMoveIntervalTime_11(float value)
	{
		___mOriginalSnakeMoveIntervalTime_11 = value;
	}

	inline static int32_t get_offset_of_mLastTailPosition_12() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mLastTailPosition_12)); }
	inline Vector2_t2243707579  get_mLastTailPosition_12() const { return ___mLastTailPosition_12; }
	inline Vector2_t2243707579 * get_address_of_mLastTailPosition_12() { return &___mLastTailPosition_12; }
	inline void set_mLastTailPosition_12(Vector2_t2243707579  value)
	{
		___mLastTailPosition_12 = value;
	}

	inline static int32_t get_offset_of_mLastTailIndex_13() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mLastTailIndex_13)); }
	inline int32_t get_mLastTailIndex_13() const { return ___mLastTailIndex_13; }
	inline int32_t* get_address_of_mLastTailIndex_13() { return &___mLastTailIndex_13; }
	inline void set_mLastTailIndex_13(int32_t value)
	{
		___mLastTailIndex_13 = value;
	}

	inline static int32_t get_offset_of_mIsGameOver_14() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mIsGameOver_14)); }
	inline bool get_mIsGameOver_14() const { return ___mIsGameOver_14; }
	inline bool* get_address_of_mIsGameOver_14() { return &___mIsGameOver_14; }
	inline void set_mIsGameOver_14(bool value)
	{
		___mIsGameOver_14 = value;
	}

	inline static int32_t get_offset_of_mSnakeTailNumber_15() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeTailNumber_15)); }
	inline int32_t get_mSnakeTailNumber_15() const { return ___mSnakeTailNumber_15; }
	inline int32_t* get_address_of_mSnakeTailNumber_15() { return &___mSnakeTailNumber_15; }
	inline void set_mSnakeTailNumber_15(int32_t value)
	{
		___mSnakeTailNumber_15 = value;
	}

	inline static int32_t get_offset_of_mLevelUpNumbers_16() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mLevelUpNumbers_16)); }
	inline int32_t get_mLevelUpNumbers_16() const { return ___mLevelUpNumbers_16; }
	inline int32_t* get_address_of_mLevelUpNumbers_16() { return &___mLevelUpNumbers_16; }
	inline void set_mLevelUpNumbers_16(int32_t value)
	{
		___mLevelUpNumbers_16 = value;
	}

	inline static int32_t get_offset_of_mSnakeGameSpeedLevel_17() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeGameSpeedLevel_17)); }
	inline int32_t get_mSnakeGameSpeedLevel_17() const { return ___mSnakeGameSpeedLevel_17; }
	inline int32_t* get_address_of_mSnakeGameSpeedLevel_17() { return &___mSnakeGameSpeedLevel_17; }
	inline void set_mSnakeGameSpeedLevel_17(int32_t value)
	{
		___mSnakeGameSpeedLevel_17 = value;
	}

	inline static int32_t get_offset_of_mSnakeTailsNumberText_18() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeTailsNumberText_18)); }
	inline UILabel_t1795115428 * get_mSnakeTailsNumberText_18() const { return ___mSnakeTailsNumberText_18; }
	inline UILabel_t1795115428 ** get_address_of_mSnakeTailsNumberText_18() { return &___mSnakeTailsNumberText_18; }
	inline void set_mSnakeTailsNumberText_18(UILabel_t1795115428 * value)
	{
		___mSnakeTailsNumberText_18 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeTailsNumberText_18, value);
	}

	inline static int32_t get_offset_of_mSnakeGameSpeedText_19() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063, ___mSnakeGameSpeedText_19)); }
	inline UILabel_t1795115428 * get_mSnakeGameSpeedText_19() const { return ___mSnakeGameSpeedText_19; }
	inline UILabel_t1795115428 ** get_address_of_mSnakeGameSpeedText_19() { return &___mSnakeGameSpeedText_19; }
	inline void set_mSnakeGameSpeedText_19(UILabel_t1795115428 * value)
	{
		___mSnakeGameSpeedText_19 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeGameSpeedText_19, value);
	}
};

struct SnakeManager_t2989862063_StaticFields
{
public:
	// SnakeManager SnakeManager::mSnakeManagerInstance
	SnakeManager_t2989862063 * ___mSnakeManagerInstance_2;

public:
	inline static int32_t get_offset_of_mSnakeManagerInstance_2() { return static_cast<int32_t>(offsetof(SnakeManager_t2989862063_StaticFields, ___mSnakeManagerInstance_2)); }
	inline SnakeManager_t2989862063 * get_mSnakeManagerInstance_2() const { return ___mSnakeManagerInstance_2; }
	inline SnakeManager_t2989862063 ** get_address_of_mSnakeManagerInstance_2() { return &___mSnakeManagerInstance_2; }
	inline void set_mSnakeManagerInstance_2(SnakeManager_t2989862063 * value)
	{
		___mSnakeManagerInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mSnakeManagerInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
