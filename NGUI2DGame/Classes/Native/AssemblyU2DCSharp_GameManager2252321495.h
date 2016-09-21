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
// GameManager
struct GameManager_t2252321495;
// Game
struct Game_t1600141214;

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
	// Game GameManager::mCurrentGame
	Game_t1600141214 * ___mCurrentGame_4;
	// System.String GameManager::mProfilePath
	String_t* ___mProfilePath_5;

public:
	inline static int32_t get_offset_of_mCurrentGame_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mCurrentGame_4)); }
	inline Game_t1600141214 * get_mCurrentGame_4() const { return ___mCurrentGame_4; }
	inline Game_t1600141214 ** get_address_of_mCurrentGame_4() { return &___mCurrentGame_4; }
	inline void set_mCurrentGame_4(Game_t1600141214 * value)
	{
		___mCurrentGame_4 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentGame_4, value);
	}

	inline static int32_t get_offset_of_mProfilePath_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mProfilePath_5)); }
	inline String_t* get_mProfilePath_5() const { return ___mProfilePath_5; }
	inline String_t** get_address_of_mProfilePath_5() { return &___mProfilePath_5; }
	inline void set_mProfilePath_5(String_t* value)
	{
		___mProfilePath_5 = value;
		Il2CppCodeGenWriteBarrier(&___mProfilePath_5, value);
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::mGameManagerInstance
	GameManager_t2252321495 * ___mGameManagerInstance_3;

public:
	inline static int32_t get_offset_of_mGameManagerInstance_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___mGameManagerInstance_3)); }
	inline GameManager_t2252321495 * get_mGameManagerInstance_3() const { return ___mGameManagerInstance_3; }
	inline GameManager_t2252321495 ** get_address_of_mGameManagerInstance_3() { return &___mGameManagerInstance_3; }
	inline void set_mGameManagerInstance_3(GameManager_t2252321495 * value)
	{
		___mGameManagerInstance_3 = value;
		Il2CppCodeGenWriteBarrier(&___mGameManagerInstance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
