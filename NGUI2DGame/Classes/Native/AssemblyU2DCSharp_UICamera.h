#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UICamera/OnCustomInput
struct OnCustomInput_t218;
// UICamera
struct UICamera_t219;
// UnityEngine.Camera
struct Camera_t7;
// UICamera/MouseOrTouch
struct MouseOrTouch_t216;
// UnityEngine.GameObject
struct GameObject_t17;
// System.Collections.Generic.List`1<UICamera>
struct List_1_t220;
// System.Collections.Generic.List`1<UICamera/Highlighted>
struct List_1_t221;
// UICamera/MouseOrTouch[]
struct MouseOrTouchU5BU5D_t222;
// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>
struct Dictionary_2_t223;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t224;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UICamera
struct  UICamera_t219  : public MonoBehaviour_t3
{
	// System.Boolean UICamera::debug
	bool ___debug_2;
	// System.Boolean UICamera::useMouse
	bool ___useMouse_3;
	// System.Boolean UICamera::useTouch
	bool ___useTouch_4;
	// System.Boolean UICamera::allowMultiTouch
	bool ___allowMultiTouch_5;
	// System.Boolean UICamera::useKeyboard
	bool ___useKeyboard_6;
	// System.Boolean UICamera::useController
	bool ___useController_7;
	// System.Boolean UICamera::stickyPress
	bool ___stickyPress_8;
	// UnityEngine.LayerMask UICamera::eventReceiverMask
	LayerMask_t225  ___eventReceiverMask_9;
	// System.Boolean UICamera::clipRaycasts
	bool ___clipRaycasts_10;
	// System.Single UICamera::tooltipDelay
	float ___tooltipDelay_11;
	// System.Boolean UICamera::stickyTooltip
	bool ___stickyTooltip_12;
	// System.Single UICamera::mouseDragThreshold
	float ___mouseDragThreshold_13;
	// System.Single UICamera::mouseClickThreshold
	float ___mouseClickThreshold_14;
	// System.Single UICamera::touchDragThreshold
	float ___touchDragThreshold_15;
	// System.Single UICamera::touchClickThreshold
	float ___touchClickThreshold_16;
	// System.Single UICamera::rangeDistance
	float ___rangeDistance_17;
	// System.String UICamera::scrollAxisName
	String_t* ___scrollAxisName_18;
	// System.String UICamera::verticalAxisName
	String_t* ___verticalAxisName_19;
	// System.String UICamera::horizontalAxisName
	String_t* ___horizontalAxisName_20;
	// UnityEngine.KeyCode UICamera::submitKey0
	int32_t ___submitKey0_21;
	// UnityEngine.KeyCode UICamera::submitKey1
	int32_t ___submitKey1_22;
	// UnityEngine.KeyCode UICamera::cancelKey0
	int32_t ___cancelKey0_23;
	// UnityEngine.KeyCode UICamera::cancelKey1
	int32_t ___cancelKey1_24;
	// UnityEngine.GameObject UICamera::mTooltip
	GameObject_t17 * ___mTooltip_44;
	// UnityEngine.Camera UICamera::mCam
	Camera_t7 * ___mCam_45;
	// UnityEngine.LayerMask UICamera::mLayerMask
	LayerMask_t225  ___mLayerMask_46;
	// System.Single UICamera::mTooltipTime
	float ___mTooltipTime_47;
	// System.Boolean UICamera::mIsEditor
	bool ___mIsEditor_48;
};
struct UICamera_t219_StaticFields{
	// UICamera/OnCustomInput UICamera::onCustomInput
	OnCustomInput_t218 * ___onCustomInput_25;
	// System.Boolean UICamera::showTooltips
	bool ___showTooltips_26;
	// UnityEngine.Vector2 UICamera::lastTouchPosition
	Vector2_t55  ___lastTouchPosition_27;
	// UnityEngine.RaycastHit UICamera::lastHit
	RaycastHit_t226  ___lastHit_28;
	// UICamera UICamera::current
	UICamera_t219 * ___current_29;
	// UnityEngine.Camera UICamera::currentCamera
	Camera_t7 * ___currentCamera_30;
	// System.Int32 UICamera::currentTouchID
	int32_t ___currentTouchID_31;
	// UICamera/MouseOrTouch UICamera::currentTouch
	MouseOrTouch_t216 * ___currentTouch_32;
	// System.Boolean UICamera::inputHasFocus
	bool ___inputHasFocus_33;
	// UnityEngine.GameObject UICamera::genericEventHandler
	GameObject_t17 * ___genericEventHandler_34;
	// UnityEngine.GameObject UICamera::fallThrough
	GameObject_t17 * ___fallThrough_35;
	// System.Collections.Generic.List`1<UICamera> UICamera::mList
	List_1_t220 * ___mList_36;
	// System.Collections.Generic.List`1<UICamera/Highlighted> UICamera::mHighlighted
	List_1_t221 * ___mHighlighted_37;
	// UnityEngine.GameObject UICamera::mSel
	GameObject_t17 * ___mSel_38;
	// UICamera/MouseOrTouch[] UICamera::mMouse
	MouseOrTouchU5BU5D_t222* ___mMouse_39;
	// UnityEngine.GameObject UICamera::mHover
	GameObject_t17 * ___mHover_40;
	// UICamera/MouseOrTouch UICamera::mController
	MouseOrTouch_t216 * ___mController_41;
	// System.Single UICamera::mNextEvent
	float ___mNextEvent_42;
	// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch> UICamera::mTouches
	Dictionary_2_t223 * ___mTouches_43;
	// System.Boolean UICamera::isDragging
	bool ___isDragging_49;
	// UnityEngine.GameObject UICamera::hoveredObject
	GameObject_t17 * ___hoveredObject_50;
	// UnityEngine.RaycastHit UICamera::mEmpty
	RaycastHit_t226  ___mEmpty_51;
	// System.Comparison`1<UnityEngine.RaycastHit> UICamera::<>f__am$cache32
	Comparison_1_t224 * ___U3CU3Ef__amU24cache32_52;
};
