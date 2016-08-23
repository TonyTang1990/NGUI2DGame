#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t170;
// System.Collections.Generic.List`1<UIAtlas/Sprite>
struct List_1_t214;
// UIAtlas
struct UIAtlas_t10;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIAtlas/Coordinates
#include "AssemblyU2DCSharp_UIAtlas_Coordinates.h"
// UIAtlas
struct  UIAtlas_t10  : public MonoBehaviour_t3
{
	// UnityEngine.Material UIAtlas::material
	Material_t170 * ___material_2;
	// System.Collections.Generic.List`1<UIAtlas/Sprite> UIAtlas::sprites
	List_1_t214 * ___sprites_3;
	// UIAtlas/Coordinates UIAtlas::mCoordinates
	int32_t ___mCoordinates_4;
	// System.Single UIAtlas::mPixelSize
	float ___mPixelSize_5;
	// UIAtlas UIAtlas::mReplacement
	UIAtlas_t10 * ___mReplacement_6;
	// System.Int32 UIAtlas::mPMA
	int32_t ___mPMA_7;
};
