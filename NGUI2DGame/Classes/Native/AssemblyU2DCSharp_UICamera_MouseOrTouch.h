#pragma once
#include <stdint.h>
// UnityEngine.Camera
struct Camera_t7;
// UnityEngine.GameObject
struct GameObject_t17;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UICamera/ClickNotification
#include "AssemblyU2DCSharp_UICamera_ClickNotification.h"
// UICamera/MouseOrTouch
struct  MouseOrTouch_t216  : public Object_t
{
	// UnityEngine.Vector2 UICamera/MouseOrTouch::pos
	Vector2_t55  ___pos_0;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::delta
	Vector2_t55  ___delta_1;
	// UnityEngine.Vector2 UICamera/MouseOrTouch::totalDelta
	Vector2_t55  ___totalDelta_2;
	// UnityEngine.Camera UICamera/MouseOrTouch::pressedCam
	Camera_t7 * ___pressedCam_3;
	// UnityEngine.GameObject UICamera/MouseOrTouch::current
	GameObject_t17 * ___current_4;
	// UnityEngine.GameObject UICamera/MouseOrTouch::pressed
	GameObject_t17 * ___pressed_5;
	// UnityEngine.GameObject UICamera/MouseOrTouch::dragged
	GameObject_t17 * ___dragged_6;
	// System.Single UICamera/MouseOrTouch::clickTime
	float ___clickTime_7;
	// UICamera/ClickNotification UICamera/MouseOrTouch::clickNotification
	int32_t ___clickNotification_8;
	// System.Boolean UICamera/MouseOrTouch::touchBegan
	bool ___touchBegan_9;
	// System.Boolean UICamera/MouseOrTouch::pressStarted
	bool ___pressStarted_10;
	// System.Boolean UICamera/MouseOrTouch::dragStarted
	bool ___dragStarted_11;
};
