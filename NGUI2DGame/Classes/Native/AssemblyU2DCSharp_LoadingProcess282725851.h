#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIScrollBar
struct UIScrollBar_t1736046648;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingProcess
struct  LoadingProcess_t282725851  : public MonoBehaviour_t1158329972
{
public:
	// UIScrollBar LoadingProcess::mProcessScrollBar
	UIScrollBar_t1736046648 * ___mProcessScrollBar_2;
	// System.Single LoadingProcess::mCurrentProcessPer
	float ___mCurrentProcessPer_3;
	// System.Boolean LoadingProcess::mIsLoadingComplete
	bool ___mIsLoadingComplete_4;

public:
	inline static int32_t get_offset_of_mProcessScrollBar_2() { return static_cast<int32_t>(offsetof(LoadingProcess_t282725851, ___mProcessScrollBar_2)); }
	inline UIScrollBar_t1736046648 * get_mProcessScrollBar_2() const { return ___mProcessScrollBar_2; }
	inline UIScrollBar_t1736046648 ** get_address_of_mProcessScrollBar_2() { return &___mProcessScrollBar_2; }
	inline void set_mProcessScrollBar_2(UIScrollBar_t1736046648 * value)
	{
		___mProcessScrollBar_2 = value;
		Il2CppCodeGenWriteBarrier(&___mProcessScrollBar_2, value);
	}

	inline static int32_t get_offset_of_mCurrentProcessPer_3() { return static_cast<int32_t>(offsetof(LoadingProcess_t282725851, ___mCurrentProcessPer_3)); }
	inline float get_mCurrentProcessPer_3() const { return ___mCurrentProcessPer_3; }
	inline float* get_address_of_mCurrentProcessPer_3() { return &___mCurrentProcessPer_3; }
	inline void set_mCurrentProcessPer_3(float value)
	{
		___mCurrentProcessPer_3 = value;
	}

	inline static int32_t get_offset_of_mIsLoadingComplete_4() { return static_cast<int32_t>(offsetof(LoadingProcess_t282725851, ___mIsLoadingComplete_4)); }
	inline bool get_mIsLoadingComplete_4() const { return ___mIsLoadingComplete_4; }
	inline bool* get_address_of_mIsLoadingComplete_4() { return &___mIsLoadingComplete_4; }
	inline void set_mIsLoadingComplete_4(bool value)
	{
		___mIsLoadingComplete_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
