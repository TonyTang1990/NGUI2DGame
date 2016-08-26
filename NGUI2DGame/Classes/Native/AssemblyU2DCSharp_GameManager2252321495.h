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
	// GameConfigurationManager GameManager::mGameConfigurationManager
	GameConfigurationManager_t1548987031 * ___mGameConfigurationManager_2;

public:
	inline static int32_t get_offset_of_mGameConfigurationManager_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mGameConfigurationManager_2)); }
	inline GameConfigurationManager_t1548987031 * get_mGameConfigurationManager_2() const { return ___mGameConfigurationManager_2; }
	inline GameConfigurationManager_t1548987031 ** get_address_of_mGameConfigurationManager_2() { return &___mGameConfigurationManager_2; }
	inline void set_mGameConfigurationManager_2(GameConfigurationManager_t1548987031 * value)
	{
		___mGameConfigurationManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___mGameConfigurationManager_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
