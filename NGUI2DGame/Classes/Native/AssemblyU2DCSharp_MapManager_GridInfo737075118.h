#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapManager/GridInfo
struct  GridInfo_t737075118  : public Il2CppObject
{
public:
	// System.Boolean MapManager/GridInfo::mOccupied
	bool ___mOccupied_0;
	// UnityEngine.Vector2 MapManager/GridInfo::mGridPosition
	Vector2_t2243707579  ___mGridPosition_1;
	// System.Int32 MapManager/GridInfo::mGridIndex
	int32_t ___mGridIndex_2;

public:
	inline static int32_t get_offset_of_mOccupied_0() { return static_cast<int32_t>(offsetof(GridInfo_t737075118, ___mOccupied_0)); }
	inline bool get_mOccupied_0() const { return ___mOccupied_0; }
	inline bool* get_address_of_mOccupied_0() { return &___mOccupied_0; }
	inline void set_mOccupied_0(bool value)
	{
		___mOccupied_0 = value;
	}

	inline static int32_t get_offset_of_mGridPosition_1() { return static_cast<int32_t>(offsetof(GridInfo_t737075118, ___mGridPosition_1)); }
	inline Vector2_t2243707579  get_mGridPosition_1() const { return ___mGridPosition_1; }
	inline Vector2_t2243707579 * get_address_of_mGridPosition_1() { return &___mGridPosition_1; }
	inline void set_mGridPosition_1(Vector2_t2243707579  value)
	{
		___mGridPosition_1 = value;
	}

	inline static int32_t get_offset_of_mGridIndex_2() { return static_cast<int32_t>(offsetof(GridInfo_t737075118, ___mGridIndex_2)); }
	inline int32_t get_mGridIndex_2() const { return ___mGridIndex_2; }
	inline int32_t* get_address_of_mGridIndex_2() { return &___mGridIndex_2; }
	inline void set_mGridIndex_2(int32_t value)
	{
		___mGridIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
