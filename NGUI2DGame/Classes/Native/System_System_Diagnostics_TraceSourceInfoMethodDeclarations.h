#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.TraceSourceInfo
struct TraceSourceInfo_t1955;
// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t1952;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t1949;
// System.Diagnostics.SourceLevels
#include "System_System_Diagnostics_SourceLevels.h"

// System.Void System.Diagnostics.TraceSourceInfo::.ctor(System.String,System.Diagnostics.SourceLevels,System.Diagnostics.TraceImplSettings)
extern "C" void TraceSourceInfo__ctor_m10842 (TraceSourceInfo_t1955 * __this, String_t* ___name, int32_t ___levels, TraceImplSettings_t1949 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceSourceInfo::get_Name()
extern "C" String_t* TraceSourceInfo_get_Name_m10843 (TraceSourceInfo_t1955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::get_Listeners()
extern "C" TraceListenerCollection_t1952 * TraceSourceInfo_get_Listeners_m10844 (TraceSourceInfo_t1955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
