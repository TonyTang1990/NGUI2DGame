#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameConfigurationManager/GameSettings/SoundSetting
struct SoundSetting_t2958378805;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GameConfigurationManager_GameSet3332754345.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameConfigurationManager/GameSettings
struct  GameSettings_t213610147  : public Il2CppObject
{
public:
	// GameConfigurationManager/GameSettings/GameDifficulty GameConfigurationManager/GameSettings::mGameDifficulty
	int32_t ___mGameDifficulty_0;
	// GameConfigurationManager/GameSettings/SoundSetting GameConfigurationManager/GameSettings::mSoundSetting
	SoundSetting_t2958378805 * ___mSoundSetting_1;

public:
	inline static int32_t get_offset_of_mGameDifficulty_0() { return static_cast<int32_t>(offsetof(GameSettings_t213610147, ___mGameDifficulty_0)); }
	inline int32_t get_mGameDifficulty_0() const { return ___mGameDifficulty_0; }
	inline int32_t* get_address_of_mGameDifficulty_0() { return &___mGameDifficulty_0; }
	inline void set_mGameDifficulty_0(int32_t value)
	{
		___mGameDifficulty_0 = value;
	}

	inline static int32_t get_offset_of_mSoundSetting_1() { return static_cast<int32_t>(offsetof(GameSettings_t213610147, ___mSoundSetting_1)); }
	inline SoundSetting_t2958378805 * get_mSoundSetting_1() const { return ___mSoundSetting_1; }
	inline SoundSetting_t2958378805 ** get_address_of_mSoundSetting_1() { return &___mSoundSetting_1; }
	inline void set_mSoundSetting_1(SoundSetting_t2958378805 * value)
	{
		___mSoundSetting_1 = value;
		Il2CppCodeGenWriteBarrier(&___mSoundSetting_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
