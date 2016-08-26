#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GamePanel
struct  GamePanel_t539122112  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GamePanel::mGOSettingButton
	GameObject_t1756533147 * ___mGOSettingButton_2;
	// UnityEngine.GameObject GamePanel::mGOGameChooseButton
	GameObject_t1756533147 * ___mGOGameChooseButton_3;
	// UnityEngine.GameObject GamePanel::mGOExitGameButton
	GameObject_t1756533147 * ___mGOExitGameButton_4;

public:
	inline static int32_t get_offset_of_mGOSettingButton_2() { return static_cast<int32_t>(offsetof(GamePanel_t539122112, ___mGOSettingButton_2)); }
	inline GameObject_t1756533147 * get_mGOSettingButton_2() const { return ___mGOSettingButton_2; }
	inline GameObject_t1756533147 ** get_address_of_mGOSettingButton_2() { return &___mGOSettingButton_2; }
	inline void set_mGOSettingButton_2(GameObject_t1756533147 * value)
	{
		___mGOSettingButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___mGOSettingButton_2, value);
	}

	inline static int32_t get_offset_of_mGOGameChooseButton_3() { return static_cast<int32_t>(offsetof(GamePanel_t539122112, ___mGOGameChooseButton_3)); }
	inline GameObject_t1756533147 * get_mGOGameChooseButton_3() const { return ___mGOGameChooseButton_3; }
	inline GameObject_t1756533147 ** get_address_of_mGOGameChooseButton_3() { return &___mGOGameChooseButton_3; }
	inline void set_mGOGameChooseButton_3(GameObject_t1756533147 * value)
	{
		___mGOGameChooseButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___mGOGameChooseButton_3, value);
	}

	inline static int32_t get_offset_of_mGOExitGameButton_4() { return static_cast<int32_t>(offsetof(GamePanel_t539122112, ___mGOExitGameButton_4)); }
	inline GameObject_t1756533147 * get_mGOExitGameButton_4() const { return ___mGOExitGameButton_4; }
	inline GameObject_t1756533147 ** get_address_of_mGOExitGameButton_4() { return &___mGOExitGameButton_4; }
	inline void set_mGOExitGameButton_4(GameObject_t1756533147 * value)
	{
		___mGOExitGameButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___mGOExitGameButton_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
