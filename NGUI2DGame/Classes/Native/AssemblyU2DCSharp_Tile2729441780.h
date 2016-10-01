#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// System.Collections.Generic.Dictionary`2<MoveAction,System.Int32>
struct Dictionary_2_t841443130;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TileType701644524.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

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
	// System.Int32 Tile::mPartitionLevel
	int32_t ___mPartitionLevel_6;
	// System.Collections.Generic.List`1<System.Int32> Tile::mIndexs
	List_1_t1440998580 * ___mIndexs_7;
	// System.Int32 Tile::mMinIndex
	int32_t ___mMinIndex_8;
	// System.Int32 Tile::mMaxIndex
	int32_t ___mMaxIndex_9;
	// UnityEngine.SpriteRenderer Tile::mSpriteRender
	SpriteRenderer_t1209076198 * ___mSpriteRender_10;
	// System.Collections.Generic.Dictionary`2<MoveAction,System.Int32> Tile::mTileIndexsOffset
	Dictionary_2_t841443130 * ___mTileIndexsOffset_11;
	// UnityEngine.Vector2 Tile::mLocatedTileRC
	Vector2_t2243707579  ___mLocatedTileRC_12;

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

	inline static int32_t get_offset_of_mPartitionLevel_6() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mPartitionLevel_6)); }
	inline int32_t get_mPartitionLevel_6() const { return ___mPartitionLevel_6; }
	inline int32_t* get_address_of_mPartitionLevel_6() { return &___mPartitionLevel_6; }
	inline void set_mPartitionLevel_6(int32_t value)
	{
		___mPartitionLevel_6 = value;
	}

	inline static int32_t get_offset_of_mIndexs_7() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mIndexs_7)); }
	inline List_1_t1440998580 * get_mIndexs_7() const { return ___mIndexs_7; }
	inline List_1_t1440998580 ** get_address_of_mIndexs_7() { return &___mIndexs_7; }
	inline void set_mIndexs_7(List_1_t1440998580 * value)
	{
		___mIndexs_7 = value;
		Il2CppCodeGenWriteBarrier(&___mIndexs_7, value);
	}

	inline static int32_t get_offset_of_mMinIndex_8() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mMinIndex_8)); }
	inline int32_t get_mMinIndex_8() const { return ___mMinIndex_8; }
	inline int32_t* get_address_of_mMinIndex_8() { return &___mMinIndex_8; }
	inline void set_mMinIndex_8(int32_t value)
	{
		___mMinIndex_8 = value;
	}

	inline static int32_t get_offset_of_mMaxIndex_9() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mMaxIndex_9)); }
	inline int32_t get_mMaxIndex_9() const { return ___mMaxIndex_9; }
	inline int32_t* get_address_of_mMaxIndex_9() { return &___mMaxIndex_9; }
	inline void set_mMaxIndex_9(int32_t value)
	{
		___mMaxIndex_9 = value;
	}

	inline static int32_t get_offset_of_mSpriteRender_10() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mSpriteRender_10)); }
	inline SpriteRenderer_t1209076198 * get_mSpriteRender_10() const { return ___mSpriteRender_10; }
	inline SpriteRenderer_t1209076198 ** get_address_of_mSpriteRender_10() { return &___mSpriteRender_10; }
	inline void set_mSpriteRender_10(SpriteRenderer_t1209076198 * value)
	{
		___mSpriteRender_10 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteRender_10, value);
	}

	inline static int32_t get_offset_of_mTileIndexsOffset_11() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mTileIndexsOffset_11)); }
	inline Dictionary_2_t841443130 * get_mTileIndexsOffset_11() const { return ___mTileIndexsOffset_11; }
	inline Dictionary_2_t841443130 ** get_address_of_mTileIndexsOffset_11() { return &___mTileIndexsOffset_11; }
	inline void set_mTileIndexsOffset_11(Dictionary_2_t841443130 * value)
	{
		___mTileIndexsOffset_11 = value;
		Il2CppCodeGenWriteBarrier(&___mTileIndexsOffset_11, value);
	}

	inline static int32_t get_offset_of_mLocatedTileRC_12() { return static_cast<int32_t>(offsetof(Tile_t2729441780, ___mLocatedTileRC_12)); }
	inline Vector2_t2243707579  get_mLocatedTileRC_12() const { return ___mLocatedTileRC_12; }
	inline Vector2_t2243707579 * get_address_of_mLocatedTileRC_12() { return &___mLocatedTileRC_12; }
	inline void set_mLocatedTileRC_12(Vector2_t2243707579  value)
	{
		___mLocatedTileRC_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
