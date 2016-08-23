#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.Material
struct Material_t170;
// UnityEngine.Mesh
struct Mesh_t171;
// UnityEngine.MeshFilter
struct MeshFilter_t172;
// UnityEngine.MeshRenderer
struct MeshRenderer_t173;
// System.Int32[]
struct Int32U5BU5D_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIDrawCall
struct  UIDrawCall_t174  : public MonoBehaviour_t3
{
	// UnityEngine.Transform UIDrawCall::mTrans
	Transform_t8 * ___mTrans_2;
	// UnityEngine.Material UIDrawCall::mSharedMat
	Material_t170 * ___mSharedMat_3;
	// UnityEngine.Mesh UIDrawCall::mMesh0
	Mesh_t171 * ___mMesh0_4;
	// UnityEngine.Mesh UIDrawCall::mMesh1
	Mesh_t171 * ___mMesh1_5;
	// UnityEngine.MeshFilter UIDrawCall::mFilter
	MeshFilter_t172 * ___mFilter_6;
	// UnityEngine.MeshRenderer UIDrawCall::mRen
	MeshRenderer_t173 * ___mRen_7;
	// UIDrawCall/Clipping UIDrawCall::mClipping
	int32_t ___mClipping_8;
	// UnityEngine.Vector4 UIDrawCall::mClipRange
	Vector4_t175  ___mClipRange_9;
	// UnityEngine.Vector2 UIDrawCall::mClipSoft
	Vector2_t55  ___mClipSoft_10;
	// UnityEngine.Material UIDrawCall::mMat
	Material_t170 * ___mMat_11;
	// UnityEngine.Material UIDrawCall::mDepthMat
	Material_t170 * ___mDepthMat_12;
	// System.Int32[] UIDrawCall::mIndices
	Int32U5BU5D_t1* ___mIndices_13;
	// System.Boolean UIDrawCall::mUseDepth
	bool ___mUseDepth_14;
	// System.Boolean UIDrawCall::mReset
	bool ___mReset_15;
	// System.Boolean UIDrawCall::mEven
	bool ___mEven_16;
	// System.Int32 UIDrawCall::mDepth
	int32_t ___mDepth_17;
};
