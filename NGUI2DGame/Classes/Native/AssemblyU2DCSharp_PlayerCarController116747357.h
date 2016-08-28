#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerCarController
struct  PlayerCarController_t116747357  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerCarController::mMoveTweenTime
	float ___mMoveTweenTime_2;
	// System.Single PlayerCarController::mIntervalTimeToKeepMovingUPOrDown
	float ___mIntervalTimeToKeepMovingUPOrDown_3;
	// UnityEngine.Vector3 PlayerCarController::mHorizontalOffset
	Vector3_t2243707580  ___mHorizontalOffset_4;
	// UnityEngine.Vector3 PlayerCarController::mVerticalOffset
	Vector3_t2243707580  ___mVerticalOffset_5;
	// UnityEngine.Vector3 PlayerCarController::mTargetPosition
	Vector3_t2243707580  ___mTargetPosition_6;
	// System.Boolean PlayerCarController::mIsTweenComplete
	bool ___mIsTweenComplete_7;
	// System.Boolean PlayerCarController::mIsKeepMovingUp
	bool ___mIsKeepMovingUp_8;
	// System.Boolean PlayerCarController::mIsKeepMovingDown
	bool ___mIsKeepMovingDown_9;
	// UnityEngine.Animator PlayerCarController::mPlayerCarAnimator
	Animator_t69676727 * ___mPlayerCarAnimator_10;

public:
	inline static int32_t get_offset_of_mMoveTweenTime_2() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mMoveTweenTime_2)); }
	inline float get_mMoveTweenTime_2() const { return ___mMoveTweenTime_2; }
	inline float* get_address_of_mMoveTweenTime_2() { return &___mMoveTweenTime_2; }
	inline void set_mMoveTweenTime_2(float value)
	{
		___mMoveTweenTime_2 = value;
	}

	inline static int32_t get_offset_of_mIntervalTimeToKeepMovingUPOrDown_3() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIntervalTimeToKeepMovingUPOrDown_3)); }
	inline float get_mIntervalTimeToKeepMovingUPOrDown_3() const { return ___mIntervalTimeToKeepMovingUPOrDown_3; }
	inline float* get_address_of_mIntervalTimeToKeepMovingUPOrDown_3() { return &___mIntervalTimeToKeepMovingUPOrDown_3; }
	inline void set_mIntervalTimeToKeepMovingUPOrDown_3(float value)
	{
		___mIntervalTimeToKeepMovingUPOrDown_3 = value;
	}

	inline static int32_t get_offset_of_mHorizontalOffset_4() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mHorizontalOffset_4)); }
	inline Vector3_t2243707580  get_mHorizontalOffset_4() const { return ___mHorizontalOffset_4; }
	inline Vector3_t2243707580 * get_address_of_mHorizontalOffset_4() { return &___mHorizontalOffset_4; }
	inline void set_mHorizontalOffset_4(Vector3_t2243707580  value)
	{
		___mHorizontalOffset_4 = value;
	}

	inline static int32_t get_offset_of_mVerticalOffset_5() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mVerticalOffset_5)); }
	inline Vector3_t2243707580  get_mVerticalOffset_5() const { return ___mVerticalOffset_5; }
	inline Vector3_t2243707580 * get_address_of_mVerticalOffset_5() { return &___mVerticalOffset_5; }
	inline void set_mVerticalOffset_5(Vector3_t2243707580  value)
	{
		___mVerticalOffset_5 = value;
	}

	inline static int32_t get_offset_of_mTargetPosition_6() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mTargetPosition_6)); }
	inline Vector3_t2243707580  get_mTargetPosition_6() const { return ___mTargetPosition_6; }
	inline Vector3_t2243707580 * get_address_of_mTargetPosition_6() { return &___mTargetPosition_6; }
	inline void set_mTargetPosition_6(Vector3_t2243707580  value)
	{
		___mTargetPosition_6 = value;
	}

	inline static int32_t get_offset_of_mIsTweenComplete_7() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIsTweenComplete_7)); }
	inline bool get_mIsTweenComplete_7() const { return ___mIsTweenComplete_7; }
	inline bool* get_address_of_mIsTweenComplete_7() { return &___mIsTweenComplete_7; }
	inline void set_mIsTweenComplete_7(bool value)
	{
		___mIsTweenComplete_7 = value;
	}

	inline static int32_t get_offset_of_mIsKeepMovingUp_8() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIsKeepMovingUp_8)); }
	inline bool get_mIsKeepMovingUp_8() const { return ___mIsKeepMovingUp_8; }
	inline bool* get_address_of_mIsKeepMovingUp_8() { return &___mIsKeepMovingUp_8; }
	inline void set_mIsKeepMovingUp_8(bool value)
	{
		___mIsKeepMovingUp_8 = value;
	}

	inline static int32_t get_offset_of_mIsKeepMovingDown_9() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIsKeepMovingDown_9)); }
	inline bool get_mIsKeepMovingDown_9() const { return ___mIsKeepMovingDown_9; }
	inline bool* get_address_of_mIsKeepMovingDown_9() { return &___mIsKeepMovingDown_9; }
	inline void set_mIsKeepMovingDown_9(bool value)
	{
		___mIsKeepMovingDown_9 = value;
	}

	inline static int32_t get_offset_of_mPlayerCarAnimator_10() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mPlayerCarAnimator_10)); }
	inline Animator_t69676727 * get_mPlayerCarAnimator_10() const { return ___mPlayerCarAnimator_10; }
	inline Animator_t69676727 ** get_address_of_mPlayerCarAnimator_10() { return &___mPlayerCarAnimator_10; }
	inline void set_mPlayerCarAnimator_10(Animator_t69676727 * value)
	{
		___mPlayerCarAnimator_10 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerCarAnimator_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
