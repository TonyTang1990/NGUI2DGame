#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Tank
struct Tank_t2050480468;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bullet
struct  Bullet_t2590115616  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Bullet::mMoveSpeed
	float ___mMoveSpeed_2;
	// System.Single Bullet::mDamage
	float ___mDamage_3;
	// UnityEngine.Vector3 Bullet::mMoveDir
	Vector3_t2243707580  ___mMoveDir_4;
	// System.Single Bullet::mMoveIntervalTime
	float ___mMoveIntervalTime_5;
	// Tank Bullet::mOwner
	Tank_t2050480468 * ___mOwner_6;
	// System.String Bullet::mOwnerTag
	String_t* ___mOwnerTag_7;

public:
	inline static int32_t get_offset_of_mMoveSpeed_2() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mMoveSpeed_2)); }
	inline float get_mMoveSpeed_2() const { return ___mMoveSpeed_2; }
	inline float* get_address_of_mMoveSpeed_2() { return &___mMoveSpeed_2; }
	inline void set_mMoveSpeed_2(float value)
	{
		___mMoveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_mDamage_3() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mDamage_3)); }
	inline float get_mDamage_3() const { return ___mDamage_3; }
	inline float* get_address_of_mDamage_3() { return &___mDamage_3; }
	inline void set_mDamage_3(float value)
	{
		___mDamage_3 = value;
	}

	inline static int32_t get_offset_of_mMoveDir_4() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mMoveDir_4)); }
	inline Vector3_t2243707580  get_mMoveDir_4() const { return ___mMoveDir_4; }
	inline Vector3_t2243707580 * get_address_of_mMoveDir_4() { return &___mMoveDir_4; }
	inline void set_mMoveDir_4(Vector3_t2243707580  value)
	{
		___mMoveDir_4 = value;
	}

	inline static int32_t get_offset_of_mMoveIntervalTime_5() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mMoveIntervalTime_5)); }
	inline float get_mMoveIntervalTime_5() const { return ___mMoveIntervalTime_5; }
	inline float* get_address_of_mMoveIntervalTime_5() { return &___mMoveIntervalTime_5; }
	inline void set_mMoveIntervalTime_5(float value)
	{
		___mMoveIntervalTime_5 = value;
	}

	inline static int32_t get_offset_of_mOwner_6() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mOwner_6)); }
	inline Tank_t2050480468 * get_mOwner_6() const { return ___mOwner_6; }
	inline Tank_t2050480468 ** get_address_of_mOwner_6() { return &___mOwner_6; }
	inline void set_mOwner_6(Tank_t2050480468 * value)
	{
		___mOwner_6 = value;
		Il2CppCodeGenWriteBarrier(&___mOwner_6, value);
	}

	inline static int32_t get_offset_of_mOwnerTag_7() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mOwnerTag_7)); }
	inline String_t* get_mOwnerTag_7() const { return ___mOwnerTag_7; }
	inline String_t** get_address_of_mOwnerTag_7() { return &___mOwnerTag_7; }
	inline void set_mOwnerTag_7(String_t* value)
	{
		___mOwnerTag_7 = value;
		Il2CppCodeGenWriteBarrier(&___mOwnerTag_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
