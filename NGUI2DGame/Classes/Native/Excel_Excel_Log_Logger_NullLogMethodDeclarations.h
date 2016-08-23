#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Excel.Log.Logger.NullLog
struct NullLog_t850;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t300;

// System.Void Excel.Log.Logger.NullLog::InitializeFor(System.String)
extern "C" void NullLog_InitializeFor_m3520 (NullLog_t850 * __this, String_t* ___loggerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Log.Logger.NullLog::Debug(System.String,System.Object[])
extern "C" void NullLog_Debug_m3521 (NullLog_t850 * __this, String_t* ___message, ObjectU5BU5D_t300* ___formatting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Log.Logger.NullLog::.ctor()
extern "C" void NullLog__ctor_m3522 (NullLog_t850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
