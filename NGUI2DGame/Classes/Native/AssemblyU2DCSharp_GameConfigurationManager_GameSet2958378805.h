#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameConfigurationManager/GameSettings/SoundSetting
struct  SoundSetting_t2958378805  : public Il2CppObject
{
public:
	// System.String GameConfigurationManager/GameSettings/SoundSetting::mBackgroundMusic
	String_t* ___mBackgroundMusic_2;
	// System.Single GameConfigurationManager/GameSettings/SoundSetting::mVolume
	float ___mVolume_3;

public:
	inline static int32_t get_offset_of_mBackgroundMusic_2() { return static_cast<int32_t>(offsetof(SoundSetting_t2958378805, ___mBackgroundMusic_2)); }
	inline String_t* get_mBackgroundMusic_2() const { return ___mBackgroundMusic_2; }
	inline String_t** get_address_of_mBackgroundMusic_2() { return &___mBackgroundMusic_2; }
	inline void set_mBackgroundMusic_2(String_t* value)
	{
		___mBackgroundMusic_2 = value;
		Il2CppCodeGenWriteBarrier(&___mBackgroundMusic_2, value);
	}

	inline static int32_t get_offset_of_mVolume_3() { return static_cast<int32_t>(offsetof(SoundSetting_t2958378805, ___mVolume_3)); }
	inline float get_mVolume_3() const { return ___mVolume_3; }
	inline float* get_address_of_mVolume_3() { return &___mVolume_3; }
	inline void set_mVolume_3(float value)
	{
		___mVolume_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
