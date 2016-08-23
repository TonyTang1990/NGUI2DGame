#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t343;
struct Touch_t343_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m1733 (Touch_t343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t55  Touch_get_position_m1735 (Touch_t343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Touch::get_tapCount()
extern "C" int32_t Touch_get_tapCount_m1736 (Touch_t343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m1734 (Touch_t343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t343_marshal(const Touch_t343& unmarshaled, Touch_t343_marshaled& marshaled);
void Touch_t343_marshal_back(const Touch_t343_marshaled& marshaled, Touch_t343& unmarshaled);
void Touch_t343_marshal_cleanup(Touch_t343_marshaled& marshaled);
