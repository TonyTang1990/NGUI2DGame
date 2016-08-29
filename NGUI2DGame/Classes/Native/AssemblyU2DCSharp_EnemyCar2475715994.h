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
	// System.Single EnemyCar::mSpeed
	float ___mSpeed_2;
	// DG.Tweening.Tween EnemyCar::mMoveTween
	Tween_t278478013 * ___mMoveTween_3;

public:
	inline static int32_t get_offset_of_mSpeed_2() { return static_cast<int32_t>(offsetof(EnemyCar_t2475715994, ___mSpeed_2)); }
	inline float get_mSpeed_2() const { return ___mSpeed_2; }
	inline float* get_address_of_mSpeed_2() { return &___mSpeed_2; }
	inline void set_mSpeed_2(float value)
	{
		___mSpeed_2 = value;
	}

	inline static int32_t get_offset_of_mMoveTween_3() { return static_cast<int32_t>(offsetof(EnemyCar_t2475715994, ___mMoveTween_3)); }
	inline Tween_t278478013 * get_mMoveTween_3() const { return ___mMoveTween_3; }
	inline Tween_t278478013 ** get_address_of_mMoveTween_3() { return &___mMoveTween_3; }
	inline void set_mMoveTween_3(Tween_t278478013 * value)
	{
		___mMoveTween_3 = value;
		Il2CppCodeGenWriteBarrier(&___mMoveTween_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
