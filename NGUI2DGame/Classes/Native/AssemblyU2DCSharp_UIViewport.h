#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.Transform
struct Transform_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIViewport
struct  UIViewport_t267  : public MonoBehaviour_t3
{
	// UnityEngine.Camera UIViewport::sourceCamera
	Camera_t7 * ___sourceCamera_2;
	// UnityEngine.Transform UIViewport::topLeft
	Transform_t8 * ___topLeft_3;
	// UnityEngine.Transform UIViewport::bottomRight
	Transform_t8 * ___bottomRight_4;
	// System.Single UIViewport::fullSize
	float ___fullSize_5;
	// UnityEngine.Camera UIViewport::mCam
	Camera_t7 * ___mCam_6;
};
