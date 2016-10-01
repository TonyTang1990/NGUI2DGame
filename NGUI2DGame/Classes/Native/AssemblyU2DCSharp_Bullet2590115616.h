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
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_MoveAction868615717.h"

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
	// MoveAction Bullet::mBulletMoveAction
	int32_t ___mBulletMoveAction_5;
	// System.Single Bullet::mMoveIntervalTime
	float ___mMoveIntervalTime_6;
	// Tank Bullet::mOwner
	Tank_t2050480468 * ___mOwner_7;
	// System.String Bullet::mOwnerTag
	String_t* ___mOwnerTag_8;
	// UnityEngine.Animator Bullet::mExplosionAnimator
	Animator_t69676727 * ___mExplosionAnimator_9;
	// System.Boolean Bullet::mIsDestroy
	bool ___mIsDestroy_10;

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

	inline static int32_t get_offset_of_mBulletMoveAction_5() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mBulletMoveAction_5)); }
	inline int32_t get_mBulletMoveAction_5() const { return ___mBulletMoveAction_5; }
	inline int32_t* get_address_of_mBulletMoveAction_5() { return &___mBulletMoveAction_5; }
	inline void set_mBulletMoveAction_5(int32_t value)
	{
		___mBulletMoveAction_5 = value;
	}

	inline static int32_t get_offset_of_mMoveIntervalTime_6() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mMoveIntervalTime_6)); }
	inline float get_mMoveIntervalTime_6() const { return ___mMoveIntervalTime_6; }
	inline float* get_address_of_mMoveIntervalTime_6() { return &___mMoveIntervalTime_6; }
	inline void set_mMoveIntervalTime_6(float value)
	{
		___mMoveIntervalTime_6 = value;
	}

	inline static int32_t get_offset_of_mOwner_7() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mOwner_7)); }
	inline Tank_t2050480468 * get_mOwner_7() const { return ___mOwner_7; }
	inline Tank_t2050480468 ** get_address_of_mOwner_7() { return &___mOwner_7; }
	inline void set_mOwner_7(Tank_t2050480468 * value)
	{
		___mOwner_7 = value;
		Il2CppCodeGenWriteBarrier(&___mOwner_7, value);
	}

	inline static int32_t get_offset_of_mOwnerTag_8() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mOwnerTag_8)); }
	inline String_t* get_mOwnerTag_8() const { return ___mOwnerTag_8; }
	inline String_t** get_address_of_mOwnerTag_8() { return &___mOwnerTag_8; }
	inline void set_mOwnerTag_8(String_t* value)
	{
		___mOwnerTag_8 = value;
		Il2CppCodeGenWriteBarrier(&___mOwnerTag_8, value);
	}

	inline static int32_t get_offset_of_mExplosionAnimator_9() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mExplosionAnimator_9)); }
	inline Animator_t69676727 * get_mExplosionAnimator_9() const { return ___mExplosionAnimator_9; }
	inline Animator_t69676727 ** get_address_of_mExplosionAnimator_9() { return &___mExplosionAnimator_9; }
	inline void set_mExplosionAnimator_9(Animator_t69676727 * value)
	{
		___mExplosionAnimator_9 = value;
		Il2CppCodeGenWriteBarrier(&___mExplosionAnimator_9, value);
	}

	inline static int32_t get_offset_of_mIsDestroy_10() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___mIsDestroy_10)); }
	inline bool get_mIsDestroy_10() const { return ___mIsDestroy_10; }
	inline bool* get_address_of_mIsDestroy_10() { return &___mIsDestroy_10; }
	inline void set_mIsDestroy_10(bool value)
	{
		___mIsDestroy_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
