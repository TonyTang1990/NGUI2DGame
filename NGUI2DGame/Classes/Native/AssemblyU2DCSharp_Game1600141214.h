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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameMode1861898983.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game
struct  Game_t1600141214  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Game::mIsGameOver
	bool ___mIsGameOver_2;
	// System.Boolean Game::mIsPause
	bool ___mIsPause_3;
	// GameMode Game::mCurrentGameMode
	int32_t ___mCurrentGameMode_4;
	// System.String Game::mCurrentGameName
	String_t* ___mCurrentGameName_5;

public:
	inline static int32_t get_offset_of_mIsGameOver_2() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___mIsGameOver_2)); }
	inline bool get_mIsGameOver_2() const { return ___mIsGameOver_2; }
	inline bool* get_address_of_mIsGameOver_2() { return &___mIsGameOver_2; }
	inline void set_mIsGameOver_2(bool value)
	{
		___mIsGameOver_2 = value;
	}

	inline static int32_t get_offset_of_mIsPause_3() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___mIsPause_3)); }
	inline bool get_mIsPause_3() const { return ___mIsPause_3; }
	inline bool* get_address_of_mIsPause_3() { return &___mIsPause_3; }
	inline void set_mIsPause_3(bool value)
	{
		___mIsPause_3 = value;
	}

	inline static int32_t get_offset_of_mCurrentGameMode_4() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___mCurrentGameMode_4)); }
	inline int32_t get_mCurrentGameMode_4() const { return ___mCurrentGameMode_4; }
	inline int32_t* get_address_of_mCurrentGameMode_4() { return &___mCurrentGameMode_4; }
	inline void set_mCurrentGameMode_4(int32_t value)
	{
		___mCurrentGameMode_4 = value;
	}

	inline static int32_t get_offset_of_mCurrentGameName_5() { return static_cast<int32_t>(offsetof(Game_t1600141214, ___mCurrentGameName_5)); }
	inline String_t* get_mCurrentGameName_5() const { return ___mCurrentGameName_5; }
	inline String_t** get_address_of_mCurrentGameName_5() { return &___mCurrentGameName_5; }
	inline void set_mCurrentGameName_5(String_t* value)
	{
		___mCurrentGameName_5 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentGameName_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
