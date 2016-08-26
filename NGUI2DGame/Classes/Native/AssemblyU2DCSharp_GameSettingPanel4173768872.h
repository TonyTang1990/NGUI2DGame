#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TweenPosition
struct TweenPosition_t1144714832;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameSettingPanel
struct  GameSettingPanel_t4173768872  : public MonoBehaviour_t1158329972
{
public:
	// TweenPosition GameSettingPanel::mGSPTweenPosition
	TweenPosition_t1144714832 * ___mGSPTweenPosition_2;
	// UnityEngine.GameObject GameSettingPanel::mGOFinishSettingButton
	GameObject_t1756533147 * ___mGOFinishSettingButton_3;

public:
	inline static int32_t get_offset_of_mGSPTweenPosition_2() { return static_cast<int32_t>(offsetof(GameSettingPanel_t4173768872, ___mGSPTweenPosition_2)); }
	inline TweenPosition_t1144714832 * get_mGSPTweenPosition_2() const { return ___mGSPTweenPosition_2; }
	inline TweenPosition_t1144714832 ** get_address_of_mGSPTweenPosition_2() { return &___mGSPTweenPosition_2; }
	inline void set_mGSPTweenPosition_2(TweenPosition_t1144714832 * value)
	{
		___mGSPTweenPosition_2 = value;
		Il2CppCodeGenWriteBarrier(&___mGSPTweenPosition_2, value);
	}

	inline static int32_t get_offset_of_mGOFinishSettingButton_3() { return static_cast<int32_t>(offsetof(GameSettingPanel_t4173768872, ___mGOFinishSettingButton_3)); }
	inline GameObject_t1756533147 * get_mGOFinishSettingButton_3() const { return ___mGOFinishSettingButton_3; }
	inline GameObject_t1756533147 ** get_address_of_mGOFinishSettingButton_3() { return &___mGOFinishSettingButton_3; }
	inline void set_mGOFinishSettingButton_3(GameObject_t1756533147 * value)
	{
		___mGOFinishSettingButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___mGOFinishSettingButton_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
