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
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

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
	float ___mMoveTweenTime_3;
	// System.Single PlayerCarController::mIntervalTimeToKeepMovingUPOrDown
	float ___mIntervalTimeToKeepMovingUPOrDown_4;
	// UnityEngine.Vector3 PlayerCarController::mHorizontalOffset
	Vector3_t2243707580  ___mHorizontalOffset_5;
	// UnityEngine.Vector3 PlayerCarController::mVerticalOffset
	Vector3_t2243707580  ___mVerticalOffset_6;
	// UnityEngine.LayerMask PlayerCarController::mBolockingLayer
	LayerMask_t3188175821  ___mBolockingLayer_7;
	// UnityEngine.Vector3 PlayerCarController::mTargetPosition
	Vector3_t2243707580  ___mTargetPosition_8;
	// System.Boolean PlayerCarController::mIsTweenComplete
	bool ___mIsTweenComplete_9;
	// System.Boolean PlayerCarController::mIsKeepMovingUp
	bool ___mIsKeepMovingUp_10;
	// System.Boolean PlayerCarController::mIsKeepMovingDown
	bool ___mIsKeepMovingDown_11;
	// UnityEngine.Animator PlayerCarController::mPlayerCarAnimator
	Animator_t69676727 * ___mPlayerCarAnimator_12;
	// System.Boolean PlayerCarController::mIsCrash
	bool ___mIsCrash_13;

public:
	inline static int32_t get_offset_of_mMoveTweenTime_3() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mMoveTweenTime_3)); }
	inline float get_mMoveTweenTime_3() const { return ___mMoveTweenTime_3; }
	inline float* get_address_of_mMoveTweenTime_3() { return &___mMoveTweenTime_3; }
	inline void set_mMoveTweenTime_3(float value)
	{
		___mMoveTweenTime_3 = value;
	}

	inline static int32_t get_offset_of_mIntervalTimeToKeepMovingUPOrDown_4() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIntervalTimeToKeepMovingUPOrDown_4)); }
	inline float get_mIntervalTimeToKeepMovingUPOrDown_4() const { return ___mIntervalTimeToKeepMovingUPOrDown_4; }
	inline float* get_address_of_mIntervalTimeToKeepMovingUPOrDown_4() { return &___mIntervalTimeToKeepMovingUPOrDown_4; }
	inline void set_mIntervalTimeToKeepMovingUPOrDown_4(float value)
	{
		___mIntervalTimeToKeepMovingUPOrDown_4 = value;
	}

	inline static int32_t get_offset_of_mHorizontalOffset_5() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mHorizontalOffset_5)); }
	inline Vector3_t2243707580  get_mHorizontalOffset_5() const { return ___mHorizontalOffset_5; }
	inline Vector3_t2243707580 * get_address_of_mHorizontalOffset_5() { return &___mHorizontalOffset_5; }
	inline void set_mHorizontalOffset_5(Vector3_t2243707580  value)
	{
		___mHorizontalOffset_5 = value;
	}

	inline static int32_t get_offset_of_mVerticalOffset_6() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mVerticalOffset_6)); }
	inline Vector3_t2243707580  get_mVerticalOffset_6() const { return ___mVerticalOffset_6; }
	inline Vector3_t2243707580 * get_address_of_mVerticalOffset_6() { return &___mVerticalOffset_6; }
	inline void set_mVerticalOffset_6(Vector3_t2243707580  value)
	{
		___mVerticalOffset_6 = value;
	}

	inline static int32_t get_offset_of_mBolockingLayer_7() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mBolockingLayer_7)); }
	inline LayerMask_t3188175821  get_mBolockingLayer_7() const { return ___mBolockingLayer_7; }
	inline LayerMask_t3188175821 * get_address_of_mBolockingLayer_7() { return &___mBolockingLayer_7; }
	inline void set_mBolockingLayer_7(LayerMask_t3188175821  value)
	{
		___mBolockingLayer_7 = value;
	}

	inline static int32_t get_offset_of_mTargetPosition_8() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mTargetPosition_8)); }
	inline Vector3_t2243707580  get_mTargetPosition_8() const { return ___mTargetPosition_8; }
	inline Vector3_t2243707580 * get_address_of_mTargetPosition_8() { return &___mTargetPosition_8; }
	inline void set_mTargetPosition_8(Vector3_t2243707580  value)
	{
		___mTargetPosition_8 = value;
	}

	inline static int32_t get_offset_of_mIsTweenComplete_9() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIsTweenComplete_9)); }
	inline bool get_mIsTweenComplete_9() const { return ___mIsTweenComplete_9; }
	inline bool* get_address_of_mIsTweenComplete_9() { return &___mIsTweenComplete_9; }
	inline void set_mIsTweenComplete_9(bool value)
	{
		___mIsTweenComplete_9 = value;
	}

	inline static int32_t get_offset_of_mIsKeepMovingUp_10() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIsKeepMovingUp_10)); }
	inline bool get_mIsKeepMovingUp_10() const { return ___mIsKeepMovingUp_10; }
	inline bool* get_address_of_mIsKeepMovingUp_10() { return &___mIsKeepMovingUp_10; }
	inline void set_mIsKeepMovingUp_10(bool value)
	{
		___mIsKeepMovingUp_10 = value;
	}

	inline static int32_t get_offset_of_mIsKeepMovingDown_11() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIsKeepMovingDown_11)); }
	inline bool get_mIsKeepMovingDown_11() const { return ___mIsKeepMovingDown_11; }
	inline bool* get_address_of_mIsKeepMovingDown_11() { return &___mIsKeepMovingDown_11; }
	inline void set_mIsKeepMovingDown_11(bool value)
	{
		___mIsKeepMovingDown_11 = value;
	}

	inline static int32_t get_offset_of_mPlayerCarAnimator_12() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mPlayerCarAnimator_12)); }
	inline Animator_t69676727 * get_mPlayerCarAnimator_12() const { return ___mPlayerCarAnimator_12; }
	inline Animator_t69676727 ** get_address_of_mPlayerCarAnimator_12() { return &___mPlayerCarAnimator_12; }
	inline void set_mPlayerCarAnimator_12(Animator_t69676727 * value)
	{
		___mPlayerCarAnimator_12 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerCarAnimator_12, value);
	}

	inline static int32_t get_offset_of_mIsCrash_13() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIsCrash_13)); }
	inline bool get_mIsCrash_13() const { return ___mIsCrash_13; }
	inline bool* get_address_of_mIsCrash_13() { return &___mIsCrash_13; }
	inline void set_mIsCrash_13(bool value)
	{
		___mIsCrash_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
