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
// DG.Tweening.Sequence
struct Sequence_t110643099;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;

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
	// System.Boolean PlayerCarController::mIsJumpComplete
	bool ___mIsJumpComplete_10;
	// System.Boolean PlayerCarController::mIsKeepMovingUp
	bool ___mIsKeepMovingUp_11;
	// System.Boolean PlayerCarController::mIsKeepMovingDown
	bool ___mIsKeepMovingDown_12;
	// System.Boolean PlayerCarController::mUpdateJumpAnimationLater
	bool ___mUpdateJumpAnimationLater_13;
	// UnityEngine.Animator PlayerCarController::mPlayerCarAnimator
	Animator_t69676727 * ___mPlayerCarAnimator_14;
	// System.Boolean PlayerCarController::mIsCrash
	bool ___mIsCrash_15;
	// System.Single PlayerCarController::mJumpDuration
	float ___mJumpDuration_16;
	// System.Single PlayerCarController::mOriginalJumpDuration
	float ___mOriginalJumpDuration_17;
	// UnityEngine.Vector3 PlayerCarController::mJumpEndScale
	Vector3_t2243707580  ___mJumpEndScale_18;
	// UnityEngine.Vector3 PlayerCarController::mOriginalScale
	Vector3_t2243707580  ___mOriginalScale_19;
	// DG.Tweening.Sequence PlayerCarController::mJumpSequence
	Sequence_t110643099 * ___mJumpSequence_20;
	// UnityEngine.BoxCollider2D PlayerCarController::mPlayerCarBox2D
	BoxCollider2D_t948534547 * ___mPlayerCarBox2D_21;

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

	inline static int32_t get_offset_of_mIsJumpComplete_10() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIsJumpComplete_10)); }
	inline bool get_mIsJumpComplete_10() const { return ___mIsJumpComplete_10; }
	inline bool* get_address_of_mIsJumpComplete_10() { return &___mIsJumpComplete_10; }
	inline void set_mIsJumpComplete_10(bool value)
	{
		___mIsJumpComplete_10 = value;
	}

	inline static int32_t get_offset_of_mIsKeepMovingUp_11() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIsKeepMovingUp_11)); }
	inline bool get_mIsKeepMovingUp_11() const { return ___mIsKeepMovingUp_11; }
	inline bool* get_address_of_mIsKeepMovingUp_11() { return &___mIsKeepMovingUp_11; }
	inline void set_mIsKeepMovingUp_11(bool value)
	{
		___mIsKeepMovingUp_11 = value;
	}

	inline static int32_t get_offset_of_mIsKeepMovingDown_12() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIsKeepMovingDown_12)); }
	inline bool get_mIsKeepMovingDown_12() const { return ___mIsKeepMovingDown_12; }
	inline bool* get_address_of_mIsKeepMovingDown_12() { return &___mIsKeepMovingDown_12; }
	inline void set_mIsKeepMovingDown_12(bool value)
	{
		___mIsKeepMovingDown_12 = value;
	}

	inline static int32_t get_offset_of_mUpdateJumpAnimationLater_13() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mUpdateJumpAnimationLater_13)); }
	inline bool get_mUpdateJumpAnimationLater_13() const { return ___mUpdateJumpAnimationLater_13; }
	inline bool* get_address_of_mUpdateJumpAnimationLater_13() { return &___mUpdateJumpAnimationLater_13; }
	inline void set_mUpdateJumpAnimationLater_13(bool value)
	{
		___mUpdateJumpAnimationLater_13 = value;
	}

	inline static int32_t get_offset_of_mPlayerCarAnimator_14() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mPlayerCarAnimator_14)); }
	inline Animator_t69676727 * get_mPlayerCarAnimator_14() const { return ___mPlayerCarAnimator_14; }
	inline Animator_t69676727 ** get_address_of_mPlayerCarAnimator_14() { return &___mPlayerCarAnimator_14; }
	inline void set_mPlayerCarAnimator_14(Animator_t69676727 * value)
	{
		___mPlayerCarAnimator_14 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerCarAnimator_14, value);
	}

	inline static int32_t get_offset_of_mIsCrash_15() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mIsCrash_15)); }
	inline bool get_mIsCrash_15() const { return ___mIsCrash_15; }
	inline bool* get_address_of_mIsCrash_15() { return &___mIsCrash_15; }
	inline void set_mIsCrash_15(bool value)
	{
		___mIsCrash_15 = value;
	}

	inline static int32_t get_offset_of_mJumpDuration_16() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mJumpDuration_16)); }
	inline float get_mJumpDuration_16() const { return ___mJumpDuration_16; }
	inline float* get_address_of_mJumpDuration_16() { return &___mJumpDuration_16; }
	inline void set_mJumpDuration_16(float value)
	{
		___mJumpDuration_16 = value;
	}

	inline static int32_t get_offset_of_mOriginalJumpDuration_17() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mOriginalJumpDuration_17)); }
	inline float get_mOriginalJumpDuration_17() const { return ___mOriginalJumpDuration_17; }
	inline float* get_address_of_mOriginalJumpDuration_17() { return &___mOriginalJumpDuration_17; }
	inline void set_mOriginalJumpDuration_17(float value)
	{
		___mOriginalJumpDuration_17 = value;
	}

	inline static int32_t get_offset_of_mJumpEndScale_18() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mJumpEndScale_18)); }
	inline Vector3_t2243707580  get_mJumpEndScale_18() const { return ___mJumpEndScale_18; }
	inline Vector3_t2243707580 * get_address_of_mJumpEndScale_18() { return &___mJumpEndScale_18; }
	inline void set_mJumpEndScale_18(Vector3_t2243707580  value)
	{
		___mJumpEndScale_18 = value;
	}

	inline static int32_t get_offset_of_mOriginalScale_19() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mOriginalScale_19)); }
	inline Vector3_t2243707580  get_mOriginalScale_19() const { return ___mOriginalScale_19; }
	inline Vector3_t2243707580 * get_address_of_mOriginalScale_19() { return &___mOriginalScale_19; }
	inline void set_mOriginalScale_19(Vector3_t2243707580  value)
	{
		___mOriginalScale_19 = value;
	}

	inline static int32_t get_offset_of_mJumpSequence_20() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mJumpSequence_20)); }
	inline Sequence_t110643099 * get_mJumpSequence_20() const { return ___mJumpSequence_20; }
	inline Sequence_t110643099 ** get_address_of_mJumpSequence_20() { return &___mJumpSequence_20; }
	inline void set_mJumpSequence_20(Sequence_t110643099 * value)
	{
		___mJumpSequence_20 = value;
		Il2CppCodeGenWriteBarrier(&___mJumpSequence_20, value);
	}

	inline static int32_t get_offset_of_mPlayerCarBox2D_21() { return static_cast<int32_t>(offsetof(PlayerCarController_t116747357, ___mPlayerCarBox2D_21)); }
	inline BoxCollider2D_t948534547 * get_mPlayerCarBox2D_21() const { return ___mPlayerCarBox2D_21; }
	inline BoxCollider2D_t948534547 ** get_address_of_mPlayerCarBox2D_21() { return &___mPlayerCarBox2D_21; }
	inline void set_mPlayerCarBox2D_21(BoxCollider2D_t948534547 * value)
	{
		___mPlayerCarBox2D_21 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerCarBox2D_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
