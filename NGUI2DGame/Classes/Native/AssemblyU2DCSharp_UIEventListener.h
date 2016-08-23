#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// UIEventListener/VoidDelegate
struct VoidDelegate_t176;
// UIEventListener/BoolDelegate
struct BoolDelegate_t177;
// UIEventListener/FloatDelegate
struct FloatDelegate_t178;
// UIEventListener/VectorDelegate
struct VectorDelegate_t179;
// UIEventListener/ObjectDelegate
struct ObjectDelegate_t181;
// UIEventListener/StringDelegate
struct StringDelegate_t180;
// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t182;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIEventListener
struct  UIEventListener_t183  : public MonoBehaviour_t3
{
	// System.Object UIEventListener::parameter
	Object_t * ___parameter_2;
	// UIEventListener/VoidDelegate UIEventListener::onSubmit
	VoidDelegate_t176 * ___onSubmit_3;
	// UIEventListener/VoidDelegate UIEventListener::onClick
	VoidDelegate_t176 * ___onClick_4;
	// UIEventListener/VoidDelegate UIEventListener::onDoubleClick
	VoidDelegate_t176 * ___onDoubleClick_5;
	// UIEventListener/BoolDelegate UIEventListener::onHover
	BoolDelegate_t177 * ___onHover_6;
	// UIEventListener/BoolDelegate UIEventListener::onPress
	BoolDelegate_t177 * ___onPress_7;
	// UIEventListener/BoolDelegate UIEventListener::onSelect
	BoolDelegate_t177 * ___onSelect_8;
	// UIEventListener/FloatDelegate UIEventListener::onScroll
	FloatDelegate_t178 * ___onScroll_9;
	// UIEventListener/VectorDelegate UIEventListener::onDrag
	VectorDelegate_t179 * ___onDrag_10;
	// UIEventListener/ObjectDelegate UIEventListener::onDrop
	ObjectDelegate_t181 * ___onDrop_11;
	// UIEventListener/StringDelegate UIEventListener::onInput
	StringDelegate_t180 * ___onInput_12;
	// UIEventListener/KeyCodeDelegate UIEventListener::onKey
	KeyCodeDelegate_t182 * ___onKey_13;
};
