#pragma once
#include <stdint.h>
// UnityEngine.Animation
struct Animation_t56;
// UnityEngine.AnimationClip
struct AnimationClip_t57;
// System.Collections.Generic.List`1<UnityEngine.AnimationClip>
struct List_1_t58;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayIdleAnimations
struct  PlayIdleAnimations_t59  : public MonoBehaviour_t3
{
	// UnityEngine.Animation PlayIdleAnimations::mAnim
	Animation_t56 * ___mAnim_2;
	// UnityEngine.AnimationClip PlayIdleAnimations::mIdle
	AnimationClip_t57 * ___mIdle_3;
	// System.Collections.Generic.List`1<UnityEngine.AnimationClip> PlayIdleAnimations::mBreaks
	List_1_t58 * ___mBreaks_4;
	// System.Single PlayIdleAnimations::mNextBreak
	float ___mNextBreak_5;
	// System.Int32 PlayIdleAnimations::mLastIndex
	int32_t ___mLastIndex_6;
};
