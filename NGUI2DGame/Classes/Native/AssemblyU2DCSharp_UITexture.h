#pragma once
#include <stdint.h>
// UnityEngine.Shader
struct Shader_t262;
// UnityEngine.Texture
struct Texture_t263;
// UnityEngine.Material
struct Material_t170;
// UIWidget
#include "AssemblyU2DCSharp_UIWidget.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UITexture
struct  UITexture_t39  : public UIWidget_t13
{
	// UnityEngine.Rect UITexture::mRect
	Rect_t158  ___mRect_23;
	// UnityEngine.Shader UITexture::mShader
	Shader_t262 * ___mShader_24;
	// UnityEngine.Texture UITexture::mTexture
	Texture_t263 * ___mTexture_25;
	// UnityEngine.Material UITexture::mMat
	Material_t170 * ___mMat_26;
	// System.Boolean UITexture::mCreatingMat
	bool ___mCreatingMat_27;
	// UnityEngine.Material UITexture::mDynamicMat
	Material_t170 * ___mDynamicMat_28;
	// System.Int32 UITexture::mPMA
	int32_t ___mPMA_29;
};
