#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OffsetScroller
struct  OffsetScroller_t1610136665  : public MonoBehaviour_t1158329972
{
public:
	// System.Single OffsetScroller::mScrollSpeed
	float ___mScrollSpeed_2;
	// UnityEngine.Vector2 OffsetScroller::mStartOffset
	Vector2_t2243707579  ___mStartOffset_3;
	// UnityEngine.MeshRenderer OffsetScroller::mBackgroundMeshRender
	MeshRenderer_t1268241104 * ___mBackgroundMeshRender_4;

public:
	inline static int32_t get_offset_of_mScrollSpeed_2() { return static_cast<int32_t>(offsetof(OffsetScroller_t1610136665, ___mScrollSpeed_2)); }
	inline float get_mScrollSpeed_2() const { return ___mScrollSpeed_2; }
	inline float* get_address_of_mScrollSpeed_2() { return &___mScrollSpeed_2; }
	inline void set_mScrollSpeed_2(float value)
	{
		___mScrollSpeed_2 = value;
	}

	inline static int32_t get_offset_of_mStartOffset_3() { return static_cast<int32_t>(offsetof(OffsetScroller_t1610136665, ___mStartOffset_3)); }
	inline Vector2_t2243707579  get_mStartOffset_3() const { return ___mStartOffset_3; }
	inline Vector2_t2243707579 * get_address_of_mStartOffset_3() { return &___mStartOffset_3; }
	inline void set_mStartOffset_3(Vector2_t2243707579  value)
	{
		___mStartOffset_3 = value;
	}

	inline static int32_t get_offset_of_mBackgroundMeshRender_4() { return static_cast<int32_t>(offsetof(OffsetScroller_t1610136665, ___mBackgroundMeshRender_4)); }
	inline MeshRenderer_t1268241104 * get_mBackgroundMeshRender_4() const { return ___mBackgroundMeshRender_4; }
	inline MeshRenderer_t1268241104 ** get_address_of_mBackgroundMeshRender_4() { return &___mBackgroundMeshRender_4; }
	inline void set_mBackgroundMeshRender_4(MeshRenderer_t1268241104 * value)
	{
		___mBackgroundMeshRender_4 = value;
		Il2CppCodeGenWriteBarrier(&___mBackgroundMeshRender_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
