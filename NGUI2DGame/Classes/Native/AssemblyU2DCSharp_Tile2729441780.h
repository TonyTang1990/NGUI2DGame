#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TileType701644524.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tile
struct  Tile_t2729441780  : public MonoBehaviour_t1158329972
{
public:
	// TileType Tile::mTileType
	int32_t ___mTileType_3;
	// System.Boolean Tile::mPassable
	bool ___mPassable_4;
	// System.Boolean Tile::mDestroyable
	bool ___mDestroyable_5;
	// System.Int32 Tile::mIndex
	int32_t ___mIndex_6;
	// UnityEngine.SpriteRenderer Tile::mSpriteRender
	SpriteRenderer_t1209076198 * ___mSpriteRender_7;
	// System.Int32 Tile::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_mTileType_3() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mTileType_3)); }
	inline int32_t get_mTileType_3() const { return ___mTileType_3; }
	inline int32_t* get_address_of_mTileType_3() { return &___mTileType_3; }
	inline void set_mTileType_3(int32_t value)
	{
		___mTileType_3 = value;
	}

	inline static int32_t get_offset_of_mPassable_4() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mPassable_4)); }
	inline bool get_mPassable_4() const { return ___mPassable_4; }
	inline bool* get_address_of_mPassable_4() { return &___mPassable_4; }
	inline void set_mPassable_4(bool value)
	{
		___mPassable_4 = value;
	}

	inline static int32_t get_offset_of_mDestroyable_5() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mDestroyable_5)); }
	inline bool get_mDestroyable_5() const { return ___mDestroyable_5; }
	inline bool* get_address_of_mDestroyable_5() { return &___mDestroyable_5; }
	inline void set_mDestroyable_5(bool value)
	{
		___mDestroyable_5 = value;
	}

	inline static int32_t get_offset_of_mIndex_6() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mIndex_6)); }
	inline int32_t get_mIndex_6() const { return ___mIndex_6; }
	inline int32_t* get_address_of_mIndex_6() { return &___mIndex_6; }
	inline void set_mIndex_6(int32_t value)
	{
		___mIndex_6 = value;
	}

	inline static int32_t get_offset_of_mSpriteRender_7() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mSpriteRender_7)); }
	inline SpriteRenderer_t1209076198 * get_mSpriteRender_7() const { return ___mSpriteRender_7; }
	inline SpriteRenderer_t1209076198 ** get_address_of_mSpriteRender_7() { return &___mSpriteRender_7; }
	inline void set_mSpriteRender_7(SpriteRenderer_t1209076198 * value)
	{
		___mSpriteRender_7 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteRender_7, value);
	}

	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___U3CIndexU3Ek__BackingField_8)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_8() const { return ___U3CIndexU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_8() { return &___U3CIndexU3Ek__BackingField_8; }
	inline void set_U3CIndexU3Ek__BackingField_8(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
