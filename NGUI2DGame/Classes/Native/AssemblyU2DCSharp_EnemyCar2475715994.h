#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Tween
struct Tween_t278478013;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyCar
struct  EnemyCar_t2475715994  : public MonoBehaviour_t1158329972
{
public:
	// System.Single EnemyCar::mDefaultSpeed
	float ___mDefaultSpeed_2;
	// System.Single EnemyCar::mSpeed
	float ___mSpeed_3;
	// DG.Tweening.Tween EnemyCar::mMoveTween
	Tween_t278478013 * ___mMoveTween_4;

public:
	inline static int32_t get_offset_of_mDefaultSpeed_2() { return static_cast<int32_t>(offsetof(EnemyCar_t2475715994, ___mDefaultSpeed_2)); }
	inline float get_mDefaultSpeed_2() const { return ___mDefaultSpeed_2; }
	inline float* get_address_of_mDefaultSpeed_2() { return &___mDefaultSpeed_2; }
	inline void set_mDefaultSpeed_2(float value)
	{
		___mDefaultSpeed_2 = value;
	}

	inline static int32_t get_offset_of_mSpeed_3() { return static_cast<int32_t>(offsetof(EnemyCar_t2475715994, ___mSpeed_3)); }
	inline float get_mSpeed_3() const { return ___mSpeed_3; }
	inline float* get_address_of_mSpeed_3() { return &___mSpeed_3; }
	inline void set_mSpeed_3(float value)
	{
		___mSpeed_3 = value;
	}

	inline static int32_t get_offset_of_mMoveTween_4() { return static_cast<int32_t>(offsetof(EnemyCar_t2475715994, ___mMoveTween_4)); }
	inline Tween_t278478013 * get_mMoveTween_4() const { return ___mMoveTween_4; }
	inline Tween_t278478013 ** get_address_of_mMoveTween_4() { return &___mMoveTween_4; }
	inline void set_mMoveTween_4(Tween_t278478013 * value)
	{
		___mMoveTween_4 = value;
		Il2CppCodeGenWriteBarrier(&___mMoveTween_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
