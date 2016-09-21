#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPSDisplay
struct  FPSDisplay_t3952194245  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text FPSDisplay::mFPSText
	Text_t356221433 * ___mFPSText_2;
	// System.Single FPSDisplay::mDeltaTime
	float ___mDeltaTime_3;
	// System.Single FPSDisplay::mFPS
	float ___mFPS_4;

public:
	inline static int32_t get_offset_of_mFPSText_2() { return static_cast<int32_t>(offsetof(FPSDisplay_t3952194245, ___mFPSText_2)); }
	inline Text_t356221433 * get_mFPSText_2() const { return ___mFPSText_2; }
	inline Text_t356221433 ** get_address_of_mFPSText_2() { return &___mFPSText_2; }
	inline void set_mFPSText_2(Text_t356221433 * value)
	{
		___mFPSText_2 = value;
		Il2CppCodeGenWriteBarrier(&___mFPSText_2, value);
	}

	inline static int32_t get_offset_of_mDeltaTime_3() { return static_cast<int32_t>(offsetof(FPSDisplay_t3952194245, ___mDeltaTime_3)); }
	inline float get_mDeltaTime_3() const { return ___mDeltaTime_3; }
	inline float* get_address_of_mDeltaTime_3() { return &___mDeltaTime_3; }
	inline void set_mDeltaTime_3(float value)
	{
		___mDeltaTime_3 = value;
	}

	inline static int32_t get_offset_of_mFPS_4() { return static_cast<int32_t>(offsetof(FPSDisplay_t3952194245, ___mFPS_4)); }
	inline float get_mFPS_4() const { return ___mFPS_4; }
	inline float* get_address_of_mFPS_4() { return &___mFPS_4; }
	inline void set_mFPS_4(float value)
	{
		___mFPS_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
