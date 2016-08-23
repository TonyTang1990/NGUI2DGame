#pragma once
#include <stdint.h>
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t896;
// System.ComponentModel.ISite
struct ISite_t934;
// System.Object
struct Object_t;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.ComponentModel.Component
struct  Component_t990  : public MarshalByRefObject_t882
{
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t896 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	Object_t * ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	Object_t * ___disposedEvent_3;
};
