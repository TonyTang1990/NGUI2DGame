#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TankGameUIBackgroundScale
struct  TankGameUIBackgroundScale_t2061701262  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform TankGameUIBackgroundScale::mRect
	RectTransform_t3349966182 * ___mRect_2;
	// UnityEngine.BoxCollider2D TankGameUIBackgroundScale::mBoundingBox
	BoxCollider2D_t948534547 * ___mBoundingBox_3;

public:
	inline static int32_t get_offset_of_mRect_2() { return static_cast<int32_t>(offsetof(TankGameUIBackgroundScale_t2061701262, ___mRect_2)); }
	inline RectTransform_t3349966182 * get_mRect_2() const { return ___mRect_2; }
	inline RectTransform_t3349966182 ** get_address_of_mRect_2() { return &___mRect_2; }
	inline void set_mRect_2(RectTransform_t3349966182 * value)
	{
		___mRect_2 = value;
		Il2CppCodeGenWriteBarrier(&___mRect_2, value);
	}

	inline static int32_t get_offset_of_mBoundingBox_3() { return static_cast<int32_t>(offsetof(TankGameUIBackgroundScale_t2061701262, ___mBoundingBox_3)); }
	inline BoxCollider2D_t948534547 * get_mBoundingBox_3() const { return ___mBoundingBox_3; }
	inline BoxCollider2D_t948534547 ** get_address_of_mBoundingBox_3() { return &___mBoundingBox_3; }
	inline void set_mBoundingBox_3(BoxCollider2D_t948534547 * value)
	{
		___mBoundingBox_3 = value;
		Il2CppCodeGenWriteBarrier(&___mBoundingBox_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
