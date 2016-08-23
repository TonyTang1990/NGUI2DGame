#pragma once
#include <stdint.h>
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.ComponentModel.ListChangedType
#include "System_System_ComponentModel_ListChangedType.h"
// System.ComponentModel.ListChangedEventArgs
struct  ListChangedEventArgs_t1100  : public EventArgs_t912
{
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::changedType
	int32_t ___changedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_3;
};
