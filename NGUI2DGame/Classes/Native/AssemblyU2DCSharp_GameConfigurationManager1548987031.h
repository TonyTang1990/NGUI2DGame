#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameConfigurationManager
struct GameConfigurationManager_t1548987031;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GameConfigurationManager/Account>
struct List_1_t2431734405;
// GameConfigurationManager/GameSettings
struct GameSettings_t213610147;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameConfigurationManager
struct  GameConfigurationManager_t1548987031  : public Il2CppObject
{
public:
	// System.String GameConfigurationManager::mConfigurationPath
	String_t* ___mConfigurationPath_1;
	// System.Boolean GameConfigurationManager::mIsConfigurationComplete
	bool ___mIsConfigurationComplete_2;
	// System.Collections.Generic.List`1<GameConfigurationManager/Account> GameConfigurationManager::mValideAccountList
	List_1_t2431734405 * ___mValideAccountList_3;
	// GameConfigurationManager/GameSettings GameConfigurationManager::mInGameSettings
	GameSettings_t213610147 * ___mInGameSettings_4;

public:
	inline static int32_t get_offset_of_mConfigurationPath_1() { return static_cast<int32_t>(offsetof(GameConfigurationManager_t1548987031, ___mConfigurationPath_1)); }
	inline String_t* get_mConfigurationPath_1() const { return ___mConfigurationPath_1; }
	inline String_t** get_address_of_mConfigurationPath_1() { return &___mConfigurationPath_1; }
	inline void set_mConfigurationPath_1(String_t* value)
	{
		___mConfigurationPath_1 = value;
		Il2CppCodeGenWriteBarrier(&___mConfigurationPath_1, value);
	}

	inline static int32_t get_offset_of_mIsConfigurationComplete_2() { return static_cast<int32_t>(offsetof(GameConfigurationManager_t1548987031, ___mIsConfigurationComplete_2)); }
	inline bool get_mIsConfigurationComplete_2() const { return ___mIsConfigurationComplete_2; }
	inline bool* get_address_of_mIsConfigurationComplete_2() { return &___mIsConfigurationComplete_2; }
	inline void set_mIsConfigurationComplete_2(bool value)
	{
		___mIsConfigurationComplete_2 = value;
	}

	inline static int32_t get_offset_of_mValideAccountList_3() { return static_cast<int32_t>(offsetof(GameConfigurationManager_t1548987031, ___mValideAccountList_3)); }
	inline List_1_t2431734405 * get_mValideAccountList_3() const { return ___mValideAccountList_3; }
	inline List_1_t2431734405 ** get_address_of_mValideAccountList_3() { return &___mValideAccountList_3; }
	inline void set_mValideAccountList_3(List_1_t2431734405 * value)
	{
		___mValideAccountList_3 = value;
		Il2CppCodeGenWriteBarrier(&___mValideAccountList_3, value);
	}

	inline static int32_t get_offset_of_mInGameSettings_4() { return static_cast<int32_t>(offsetof(GameConfigurationManager_t1548987031, ___mInGameSettings_4)); }
	inline GameSettings_t213610147 * get_mInGameSettings_4() const { return ___mInGameSettings_4; }
	inline GameSettings_t213610147 ** get_address_of_mInGameSettings_4() { return &___mInGameSettings_4; }
	inline void set_mInGameSettings_4(GameSettings_t213610147 * value)
	{
		___mInGameSettings_4 = value;
		Il2CppCodeGenWriteBarrier(&___mInGameSettings_4, value);
	}
};

struct GameConfigurationManager_t1548987031_StaticFields
{
public:
	// GameConfigurationManager GameConfigurationManager::mLMInstance
	GameConfigurationManager_t1548987031 * ___mLMInstance_0;

public:
	inline static int32_t get_offset_of_mLMInstance_0() { return static_cast<int32_t>(offsetof(GameConfigurationManager_t1548987031_StaticFields, ___mLMInstance_0)); }
	inline GameConfigurationManager_t1548987031 * get_mLMInstance_0() const { return ___mLMInstance_0; }
	inline GameConfigurationManager_t1548987031 ** get_address_of_mLMInstance_0() { return &___mLMInstance_0; }
	inline void set_mLMInstance_0(GameConfigurationManager_t1548987031 * value)
	{
		___mLMInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___mLMInstance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
