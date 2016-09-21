#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Tank2DGameManager
struct Tank2DGameManager_t1949600781;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_Game1600141214.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tank2DGameManager
struct  Tank2DGameManager_t1949600781  : public Game_t1600141214
{
public:
	// UnityEngine.GameObject Tank2DGameManager::mPlayerPrefab
	GameObject_t1756533147 * ___mPlayerPrefab_7;
	// UnityEngine.GameObject Tank2DGameManager::mEnemyPrefab
	GameObject_t1756533147 * ___mEnemyPrefab_8;

public:
	inline static int32_t get_offset_of_mPlayerPrefab_7() { return static_cast<int32_t>(offsetof(Tank2DGameManager_t1949600781, ___mPlayerPrefab_7)); }
	inline GameObject_t1756533147 * get_mPlayerPrefab_7() const { return ___mPlayerPrefab_7; }
	inline GameObject_t1756533147 ** get_address_of_mPlayerPrefab_7() { return &___mPlayerPrefab_7; }
	inline void set_mPlayerPrefab_7(GameObject_t1756533147 * value)
	{
		___mPlayerPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerPrefab_7, value);
	}

	inline static int32_t get_offset_of_mEnemyPrefab_8() { return static_cast<int32_t>(offsetof(Tank2DGameManager_t1949600781, ___mEnemyPrefab_8)); }
	inline GameObject_t1756533147 * get_mEnemyPrefab_8() const { return ___mEnemyPrefab_8; }
	inline GameObject_t1756533147 ** get_address_of_mEnemyPrefab_8() { return &___mEnemyPrefab_8; }
	inline void set_mEnemyPrefab_8(GameObject_t1756533147 * value)
	{
		___mEnemyPrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___mEnemyPrefab_8, value);
	}
};

struct Tank2DGameManager_t1949600781_StaticFields
{
public:
	// Tank2DGameManager Tank2DGameManager::mTank2DGameManagerInstance
	Tank2DGameManager_t1949600781 * ___mTank2DGameManagerInstance_6;

public:
	inline static int32_t get_offset_of_mTank2DGameManagerInstance_6() { return static_cast<int32_t>(offsetof(Tank2DGameManager_t1949600781_StaticFields, ___mTank2DGameManagerInstance_6)); }
	inline Tank2DGameManager_t1949600781 * get_mTank2DGameManagerInstance_6() const { return ___mTank2DGameManagerInstance_6; }
	inline Tank2DGameManager_t1949600781 ** get_address_of_mTank2DGameManagerInstance_6() { return &___mTank2DGameManagerInstance_6; }
	inline void set_mTank2DGameManagerInstance_6(Tank2DGameManager_t1949600781 * value)
	{
		___mTank2DGameManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier(&___mTank2DGameManagerInstance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
