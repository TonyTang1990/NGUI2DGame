#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameUI
struct GameUI_t4016257260;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameUI
struct  GameUI_t4016257260  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameUI::mGOGamePanel
	GameObject_t1756533147 * ___mGOGamePanel_3;
	// UnityEngine.GameObject GameUI::mGOGameSettingPanel
	GameObject_t1756533147 * ___mGOGameSettingPanel_4;
	// UnityEngine.GameObject GameUI::mGOGameChoosePanel
	GameObject_t1756533147 * ___mGOGameChoosePanel_5;

public:
	inline static int32_t get_offset_of_mGOGamePanel_3() { return static_cast<int32_t>(offsetof(GameUI_t4016257260, ___mGOGamePanel_3)); }
	inline GameObject_t1756533147 * get_mGOGamePanel_3() const { return ___mGOGamePanel_3; }
	inline GameObject_t1756533147 ** get_address_of_mGOGamePanel_3() { return &___mGOGamePanel_3; }
	inline void set_mGOGamePanel_3(GameObject_t1756533147 * value)
	{
		___mGOGamePanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___mGOGamePanel_3, value);
	}

	inline static int32_t get_offset_of_mGOGameSettingPanel_4() { return static_cast<int32_t>(offsetof(GameUI_t4016257260, ___mGOGameSettingPanel_4)); }
	inline GameObject_t1756533147 * get_mGOGameSettingPanel_4() const { return ___mGOGameSettingPanel_4; }
	inline GameObject_t1756533147 ** get_address_of_mGOGameSettingPanel_4() { return &___mGOGameSettingPanel_4; }
	inline void set_mGOGameSettingPanel_4(GameObject_t1756533147 * value)
	{
		___mGOGameSettingPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___mGOGameSettingPanel_4, value);
	}

	inline static int32_t get_offset_of_mGOGameChoosePanel_5() { return static_cast<int32_t>(offsetof(GameUI_t4016257260, ___mGOGameChoosePanel_5)); }
	inline GameObject_t1756533147 * get_mGOGameChoosePanel_5() const { return ___mGOGameChoosePanel_5; }
	inline GameObject_t1756533147 ** get_address_of_mGOGameChoosePanel_5() { return &___mGOGameChoosePanel_5; }
	inline void set_mGOGameChoosePanel_5(GameObject_t1756533147 * value)
	{
		___mGOGameChoosePanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___mGOGameChoosePanel_5, value);
	}
};

struct GameUI_t4016257260_StaticFields
{
public:
	// GameUI GameUI::mGUIInstance
	GameUI_t4016257260 * ___mGUIInstance_2;

public:
	inline static int32_t get_offset_of_mGUIInstance_2() { return static_cast<int32_t>(offsetof(GameUI_t4016257260_StaticFields, ___mGUIInstance_2)); }
	inline GameUI_t4016257260 * get_mGUIInstance_2() const { return ___mGUIInstance_2; }
	inline GameUI_t4016257260 ** get_address_of_mGUIInstance_2() { return &___mGUIInstance_2; }
	inline void set_mGUIInstance_2(GameUI_t4016257260 * value)
	{
		___mGUIInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mGUIInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
