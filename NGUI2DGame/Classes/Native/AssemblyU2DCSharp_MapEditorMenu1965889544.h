#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t1631627530;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapEditorMenu
struct  MapEditorMenu_t1965889544  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField MapEditorMenu::mMapNameInputField
	InputField_t1631627530 * ___mMapNameInputField_2;

public:
	inline static int32_t get_offset_of_mMapNameInputField_2() { return static_cast<int32_t>(offsetof(MapEditorMenu_t1965889544, ___mMapNameInputField_2)); }
	inline InputField_t1631627530 * get_mMapNameInputField_2() const { return ___mMapNameInputField_2; }
	inline InputField_t1631627530 ** get_address_of_mMapNameInputField_2() { return &___mMapNameInputField_2; }
	inline void set_mMapNameInputField_2(InputField_t1631627530 * value)
	{
		___mMapNameInputField_2 = value;
		Il2CppCodeGenWriteBarrier(&___mMapNameInputField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
