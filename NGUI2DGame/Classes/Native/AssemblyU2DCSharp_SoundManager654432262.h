#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SoundManager
struct SoundManager_t654432262;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t3847337892;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t654432262  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource SoundManager::mGameBackgroundMusic
	AudioSource_t1135106623 * ___mGameBackgroundMusic_3;
	// UnityEngine.AudioClip[] SoundManager::mGameBackgroundMusciClipChoice
	AudioClipU5BU5D_t2203355011* ___mGameBackgroundMusciClipChoice_4;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip> SoundManager::mBackgroundMusicClipDictionary
	Dictionary_2_t3847337892 * ___mBackgroundMusicClipDictionary_5;

public:
	inline static int32_t get_offset_of_mGameBackgroundMusic_3() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___mGameBackgroundMusic_3)); }
	inline AudioSource_t1135106623 * get_mGameBackgroundMusic_3() const { return ___mGameBackgroundMusic_3; }
	inline AudioSource_t1135106623 ** get_address_of_mGameBackgroundMusic_3() { return &___mGameBackgroundMusic_3; }
	inline void set_mGameBackgroundMusic_3(AudioSource_t1135106623 * value)
	{
		___mGameBackgroundMusic_3 = value;
		Il2CppCodeGenWriteBarrier(&___mGameBackgroundMusic_3, value);
	}

	inline static int32_t get_offset_of_mGameBackgroundMusciClipChoice_4() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___mGameBackgroundMusciClipChoice_4)); }
	inline AudioClipU5BU5D_t2203355011* get_mGameBackgroundMusciClipChoice_4() const { return ___mGameBackgroundMusciClipChoice_4; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_mGameBackgroundMusciClipChoice_4() { return &___mGameBackgroundMusciClipChoice_4; }
	inline void set_mGameBackgroundMusciClipChoice_4(AudioClipU5BU5D_t2203355011* value)
	{
		___mGameBackgroundMusciClipChoice_4 = value;
		Il2CppCodeGenWriteBarrier(&___mGameBackgroundMusciClipChoice_4, value);
	}

	inline static int32_t get_offset_of_mBackgroundMusicClipDictionary_5() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___mBackgroundMusicClipDictionary_5)); }
	inline Dictionary_2_t3847337892 * get_mBackgroundMusicClipDictionary_5() const { return ___mBackgroundMusicClipDictionary_5; }
	inline Dictionary_2_t3847337892 ** get_address_of_mBackgroundMusicClipDictionary_5() { return &___mBackgroundMusicClipDictionary_5; }
	inline void set_mBackgroundMusicClipDictionary_5(Dictionary_2_t3847337892 * value)
	{
		___mBackgroundMusicClipDictionary_5 = value;
		Il2CppCodeGenWriteBarrier(&___mBackgroundMusicClipDictionary_5, value);
	}
};

struct SoundManager_t654432262_StaticFields
{
public:
	// SoundManager SoundManager::mSoundManagerInstance
	SoundManager_t654432262 * ___mSoundManagerInstance_2;

public:
	inline static int32_t get_offset_of_mSoundManagerInstance_2() { return static_cast<int32_t>(offsetof(SoundManager_t654432262_StaticFields, ___mSoundManagerInstance_2)); }
	inline SoundManager_t654432262 * get_mSoundManagerInstance_2() const { return ___mSoundManagerInstance_2; }
	inline SoundManager_t654432262 ** get_address_of_mSoundManagerInstance_2() { return &___mSoundManagerInstance_2; }
	inline void set_mSoundManagerInstance_2(SoundManager_t654432262 * value)
	{
		___mSoundManagerInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mSoundManagerInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
