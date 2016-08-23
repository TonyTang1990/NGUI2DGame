#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.Calendar
struct Calendar_t2536;
// System.Int32[]
struct Int32U5BU5D_t1;
// System.String[]
struct StringU5BU5D_t258;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.Calendar::.ctor()
extern "C" void Calendar__ctor_m15664 (Calendar_t2536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.Calendar::get_Eras()
// System.Object System.Globalization.Calendar::Clone()
extern "C" Object_t * Calendar_Clone_m15665 (Calendar_t2536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.Calendar::CheckReadOnly()
extern "C" void Calendar_CheckReadOnly_m15666 (Calendar_t2536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.Calendar::GetDayOfMonth(System.DateTime)
// System.DayOfWeek System.Globalization.Calendar::GetDayOfWeek(System.DateTime)
// System.Int32 System.Globalization.Calendar::GetEra(System.DateTime)
// System.Int32 System.Globalization.Calendar::GetMonth(System.DateTime)
// System.Int32 System.Globalization.Calendar::GetYear(System.DateTime)
// System.String[] System.Globalization.Calendar::get_EraNames()
extern "C" StringU5BU5D_t258* Calendar_get_EraNames_m15667 (Calendar_t2536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
