#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.ComponentModel.CollectionChangeAction
#include "System_System_ComponentModel_CollectionChangeAction.h"
// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t1097  : public EventArgs_t912
{
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	Object_t * ___theElement_2;
};
