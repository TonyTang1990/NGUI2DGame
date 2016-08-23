#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UIAtlas/Sprite
struct Sprite_t156;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// BMSymbol
struct  BMSymbol_t157  : public Object_t
{
	// System.String BMSymbol::sequence
	String_t* ___sequence_0;
	// System.String BMSymbol::spriteName
	String_t* ___spriteName_1;
	// UIAtlas/Sprite BMSymbol::mSprite
	Sprite_t156 * ___mSprite_2;
	// System.Boolean BMSymbol::mIsValid
	bool ___mIsValid_3;
	// System.Int32 BMSymbol::mLength
	int32_t ___mLength_4;
	// System.Int32 BMSymbol::mOffsetX
	int32_t ___mOffsetX_5;
	// System.Int32 BMSymbol::mOffsetY
	int32_t ___mOffsetY_6;
	// System.Int32 BMSymbol::mWidth
	int32_t ___mWidth_7;
	// System.Int32 BMSymbol::mHeight
	int32_t ___mHeight_8;
	// System.Int32 BMSymbol::mAdvance
	int32_t ___mAdvance_9;
	// UnityEngine.Rect BMSymbol::mUV
	Rect_t158  ___mUV_10;
};
