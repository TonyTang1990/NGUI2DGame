﻿#pragma once
#include <stdint.h>
// UnityEngine.Event
struct Event_t469;
struct Event_t469_marshaled;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t60;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Event
struct  Event_t469  : public Object_t
{
	// System.IntPtr UnityEngine.Event::m_Ptr
	IntPtr_t ___m_Ptr_0;
};
struct Event_t469_StaticFields{
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t469 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t469 * ___s_MasterEvent_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Event::<>f__switch$map0
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map0_3;
};
// Native definition for marshalling of: UnityEngine.Event
struct Event_t469_marshaled
{
	IntPtr_t ___m_Ptr_0;
};
