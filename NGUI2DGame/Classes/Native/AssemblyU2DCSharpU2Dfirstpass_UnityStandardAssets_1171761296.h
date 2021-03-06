﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2152133263.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3310062628.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1008153775.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat3360518468.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Tonemapping
struct  Tonemapping_t1171761296  : public PostEffectsBase_t2152133263
{
public:
	// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType UnityStandardAssets.ImageEffects.Tonemapping::type
	int32_t ___type_5;
	// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize UnityStandardAssets.ImageEffects.Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_6;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.Tonemapping::remapCurve
	AnimationCurve_t3306541151 * ___remapCurve_7;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Tonemapping::curveTex
	Texture2D_t3542995729 * ___curveTex_8;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::exposureAdjustment
	float ___exposureAdjustment_9;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::middleGrey
	float ___middleGrey_10;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::white
	float ___white_11;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::adaptionSpeed
	float ___adaptionSpeed_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Tonemapping::tonemapper
	Shader_t2430389951 * ___tonemapper_13;
	// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Tonemapping::tonemapMaterial
	Material_t193706927 * ___tonemapMaterial_15;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.Tonemapping::rt
	RenderTexture_t2666733923 * ___rt_16;
	// UnityEngine.RenderTextureFormat UnityStandardAssets.ImageEffects.Tonemapping::rtFormat
	int32_t ___rtFormat_17;

public:
	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_adaptiveTextureSize_6() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___adaptiveTextureSize_6)); }
	inline int32_t get_adaptiveTextureSize_6() const { return ___adaptiveTextureSize_6; }
	inline int32_t* get_address_of_adaptiveTextureSize_6() { return &___adaptiveTextureSize_6; }
	inline void set_adaptiveTextureSize_6(int32_t value)
	{
		___adaptiveTextureSize_6 = value;
	}

	inline static int32_t get_offset_of_remapCurve_7() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___remapCurve_7)); }
	inline AnimationCurve_t3306541151 * get_remapCurve_7() const { return ___remapCurve_7; }
	inline AnimationCurve_t3306541151 ** get_address_of_remapCurve_7() { return &___remapCurve_7; }
	inline void set_remapCurve_7(AnimationCurve_t3306541151 * value)
	{
		___remapCurve_7 = value;
		Il2CppCodeGenWriteBarrier(&___remapCurve_7, value);
	}

	inline static int32_t get_offset_of_curveTex_8() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___curveTex_8)); }
	inline Texture2D_t3542995729 * get_curveTex_8() const { return ___curveTex_8; }
	inline Texture2D_t3542995729 ** get_address_of_curveTex_8() { return &___curveTex_8; }
	inline void set_curveTex_8(Texture2D_t3542995729 * value)
	{
		___curveTex_8 = value;
		Il2CppCodeGenWriteBarrier(&___curveTex_8, value);
	}

	inline static int32_t get_offset_of_exposureAdjustment_9() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___exposureAdjustment_9)); }
	inline float get_exposureAdjustment_9() const { return ___exposureAdjustment_9; }
	inline float* get_address_of_exposureAdjustment_9() { return &___exposureAdjustment_9; }
	inline void set_exposureAdjustment_9(float value)
	{
		___exposureAdjustment_9 = value;
	}

	inline static int32_t get_offset_of_middleGrey_10() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___middleGrey_10)); }
	inline float get_middleGrey_10() const { return ___middleGrey_10; }
	inline float* get_address_of_middleGrey_10() { return &___middleGrey_10; }
	inline void set_middleGrey_10(float value)
	{
		___middleGrey_10 = value;
	}

	inline static int32_t get_offset_of_white_11() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___white_11)); }
	inline float get_white_11() const { return ___white_11; }
	inline float* get_address_of_white_11() { return &___white_11; }
	inline void set_white_11(float value)
	{
		___white_11 = value;
	}

	inline static int32_t get_offset_of_adaptionSpeed_12() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___adaptionSpeed_12)); }
	inline float get_adaptionSpeed_12() const { return ___adaptionSpeed_12; }
	inline float* get_address_of_adaptionSpeed_12() { return &___adaptionSpeed_12; }
	inline void set_adaptionSpeed_12(float value)
	{
		___adaptionSpeed_12 = value;
	}

	inline static int32_t get_offset_of_tonemapper_13() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___tonemapper_13)); }
	inline Shader_t2430389951 * get_tonemapper_13() const { return ___tonemapper_13; }
	inline Shader_t2430389951 ** get_address_of_tonemapper_13() { return &___tonemapper_13; }
	inline void set_tonemapper_13(Shader_t2430389951 * value)
	{
		___tonemapper_13 = value;
		Il2CppCodeGenWriteBarrier(&___tonemapper_13, value);
	}

	inline static int32_t get_offset_of_validRenderTextureFormat_14() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___validRenderTextureFormat_14)); }
	inline bool get_validRenderTextureFormat_14() const { return ___validRenderTextureFormat_14; }
	inline bool* get_address_of_validRenderTextureFormat_14() { return &___validRenderTextureFormat_14; }
	inline void set_validRenderTextureFormat_14(bool value)
	{
		___validRenderTextureFormat_14 = value;
	}

	inline static int32_t get_offset_of_tonemapMaterial_15() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___tonemapMaterial_15)); }
	inline Material_t193706927 * get_tonemapMaterial_15() const { return ___tonemapMaterial_15; }
	inline Material_t193706927 ** get_address_of_tonemapMaterial_15() { return &___tonemapMaterial_15; }
	inline void set_tonemapMaterial_15(Material_t193706927 * value)
	{
		___tonemapMaterial_15 = value;
		Il2CppCodeGenWriteBarrier(&___tonemapMaterial_15, value);
	}

	inline static int32_t get_offset_of_rt_16() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___rt_16)); }
	inline RenderTexture_t2666733923 * get_rt_16() const { return ___rt_16; }
	inline RenderTexture_t2666733923 ** get_address_of_rt_16() { return &___rt_16; }
	inline void set_rt_16(RenderTexture_t2666733923 * value)
	{
		___rt_16 = value;
		Il2CppCodeGenWriteBarrier(&___rt_16, value);
	}

	inline static int32_t get_offset_of_rtFormat_17() { return static_cast<int32_t>(offsetof(Tonemapping_t1171761296, ___rtFormat_17)); }
	inline int32_t get_rtFormat_17() const { return ___rtFormat_17; }
	inline int32_t* get_address_of_rtFormat_17() { return &___rtFormat_17; }
	inline void set_rtFormat_17(int32_t value)
	{
		___rtFormat_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
