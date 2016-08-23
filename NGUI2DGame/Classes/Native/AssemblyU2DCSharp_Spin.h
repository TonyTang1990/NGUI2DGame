#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t63;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Spin
struct  Spin_t64  : public MonoBehaviour_t3
{
	// UnityEngine.Vector3 Spin::rotationsPerSecond
	Vector3_t48  ___rotationsPerSecond_2;
	// UnityEngine.Rigidbody Spin::mRb
	Rigidbody_t63 * ___mRb_3;
	// UnityEngine.Transform Spin::mTrans
	Transform_t8 * ___mTrans_4;
};
