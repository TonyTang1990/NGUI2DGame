#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TouchInputManager
struct TouchInputManager_t3372913232;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchInputManager
struct  TouchInputManager_t3372913232  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TouchInputManager::mValidInputDeltaTime
	float ___mValidInputDeltaTime_3;
	// System.Single TouchInputManager::mInputTimer
	float ___mInputTimer_4;

public:
	inline static int32_t get_offset_of_mValidInputDeltaTime_3() { return static_cast<int32_t>(offsetof(TouchInputManager_t3372913232, ___mValidInputDeltaTime_3)); }
	inline float get_mValidInputDeltaTime_3() const { return ___mValidInputDeltaTime_3; }
	inline float* get_address_of_mValidInputDeltaTime_3() { return &___mValidInputDeltaTime_3; }
	inline void set_mValidInputDeltaTime_3(float value)
	{
		___mValidInputDeltaTime_3 = value;
	}

	inline static int32_t get_offset_of_mInputTimer_4() { return static_cast<int32_t>(offsetof(TouchInputManager_t3372913232, ___mInputTimer_4)); }
	inline float get_mInputTimer_4() const { return ___mInputTimer_4; }
	inline float* get_address_of_mInputTimer_4() { return &___mInputTimer_4; }
	inline void set_mInputTimer_4(float value)
	{
		___mInputTimer_4 = value;
	}
};

struct TouchInputManager_t3372913232_StaticFields
{
public:
	// TouchInputManager TouchInputManager::mInputInstance
	TouchInputManager_t3372913232 * ___mInputInstance_2;

public:
	inline static int32_t get_offset_of_mInputInstance_2() { return static_cast<int32_t>(offsetof(TouchInputManager_t3372913232_StaticFields, ___mInputInstance_2)); }
	inline TouchInputManager_t3372913232 * get_mInputInstance_2() const { return ___mInputInstance_2; }
	inline TouchInputManager_t3372913232 ** get_address_of_mInputInstance_2() { return &___mInputInstance_2; }
	inline void set_mInputInstance_2(TouchInputManager_t3372913232 * value)
	{
		___mInputInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mInputInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
