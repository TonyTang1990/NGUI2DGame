#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TileType701644524.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapEditor
struct  MapEditor_t1120091431  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MapEditor::mTileMapContainer
	GameObject_t1756533147 * ___mTileMapContainer_2;
	// UnityEngine.GameObject MapEditor::mCurrentSelectedTileGO
	GameObject_t1756533147 * ___mCurrentSelectedTileGO_3;
	// TileType MapEditor::mCurrentSelectedTileType
	int32_t ___mCurrentSelectedTileType_4;

public:
	inline static int32_t get_offset_of_mTileMapContainer_2() { return static_cast<int32_t>(offsetof(MapEditor_t1120091431, ___mTileMapContainer_2)); }
	inline GameObject_t1756533147 * get_mTileMapContainer_2() const { return ___mTileMapContainer_2; }
	inline GameObject_t1756533147 ** get_address_of_mTileMapContainer_2() { return &___mTileMapContainer_2; }
	inline void set_mTileMapContainer_2(GameObject_t1756533147 * value)
	{
		___mTileMapContainer_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTileMapContainer_2, value);
	}

	inline static int32_t get_offset_of_mCurrentSelectedTileGO_3() { return static_cast<int32_t>(offsetof(MapEditor_t1120091431, ___mCurrentSelectedTileGO_3)); }
	inline GameObject_t1756533147 * get_mCurrentSelectedTileGO_3() const { return ___mCurrentSelectedTileGO_3; }
	inline GameObject_t1756533147 ** get_address_of_mCurrentSelectedTileGO_3() { return &___mCurrentSelectedTileGO_3; }
	inline void set_mCurrentSelectedTileGO_3(GameObject_t1756533147 * value)
	{
		___mCurrentSelectedTileGO_3 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentSelectedTileGO_3, value);
	}

	inline static int32_t get_offset_of_mCurrentSelectedTileType_4() { return static_cast<int32_t>(offsetof(MapEditor_t1120091431, ___mCurrentSelectedTileType_4)); }
	inline int32_t get_mCurrentSelectedTileType_4() const { return ___mCurrentSelectedTileType_4; }
	inline int32_t* get_address_of_mCurrentSelectedTileType_4() { return &___mCurrentSelectedTileType_4; }
	inline void set_mCurrentSelectedTileType_4(int32_t value)
	{
		___mCurrentSelectedTileType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
