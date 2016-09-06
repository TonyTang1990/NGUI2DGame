#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2252321495;
// PlayerData
struct PlayerData_t3643615029;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// PlayerData GameManager::mPlayerData
	PlayerData_t3643615029 * ___mPlayerData_3;
	// System.String GameManager::mProfilePath
	String_t* ___mProfilePath_4;

public:
	inline static int32_t get_offset_of_mPlayerData_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mPlayerData_3)); }
	inline PlayerData_t3643615029 * get_mPlayerData_3() const { return ___mPlayerData_3; }
	inline PlayerData_t3643615029 ** get_address_of_mPlayerData_3() { return &___mPlayerData_3; }
	inline void set_mPlayerData_3(PlayerData_t3643615029 * value)
	{
		___mPlayerData_3 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerData_3, value);
	}

	inline static int32_t get_offset_of_mProfilePath_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mProfilePath_4)); }
	inline String_t* get_mProfilePath_4() const { return ___mProfilePath_4; }
	inline String_t** get_address_of_mProfilePath_4() { return &___mProfilePath_4; }
	inline void set_mProfilePath_4(String_t* value)
	{
		___mProfilePath_4 = value;
		Il2CppCodeGenWriteBarrier(&___mProfilePath_4, value);
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::mGameManagerInstance
	GameManager_t2252321495 * ___mGameManagerInstance_2;

public:
	inline static int32_t get_offset_of_mGameManagerInstance_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___mGameManagerInstance_2)); }
	inline GameManager_t2252321495 * get_mGameManagerInstance_2() const { return ___mGameManagerInstance_2; }
	inline GameManager_t2252321495 ** get_address_of_mGameManagerInstance_2() { return &___mGameManagerInstance_2; }
	inline void set_mGameManagerInstance_2(GameManager_t2252321495 * value)
	{
		___mGameManagerInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mGameManagerInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
