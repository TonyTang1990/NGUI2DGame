#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t2950;
// System.Threading.WaitHandle
struct WaitHandle_t1351;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t2949;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" void RegisteredWaitHandle__ctor_m18777 (RegisteredWaitHandle_t2950 * __this, WaitHandle_t1351 * ___waitObject, WaitOrTimerCallback_t2949 * ___callback, Object_t * ___state, TimeSpan_t1129  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C" void RegisteredWaitHandle_Wait_m18778 (RegisteredWaitHandle_t2950 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C" void RegisteredWaitHandle_DoCallBack_m18779 (RegisteredWaitHandle_t2950 * __this, Object_t * ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
