#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t2506;
// System.ConsoleKeyInfo
#include "mscorlib_System_ConsoleKeyInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Handles
#include "mscorlib_System_Handles.h"
// System.ConsoleScreenBufferInfo
#include "mscorlib_System_ConsoleScreenBufferInfo.h"
// System.InputRecord
#include "mscorlib_System_InputRecord.h"

// System.Void System.WindowsConsoleDriver::.ctor()
extern "C" void WindowsConsoleDriver__ctor_m15343 (WindowsConsoleDriver_t2506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern "C" ConsoleKeyInfo_t2433  WindowsConsoleDriver_ReadKey_m15344 (WindowsConsoleDriver_t2506 * __this, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C" IntPtr_t WindowsConsoleDriver_GetStdHandle_m15345 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C" bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m15346 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ConsoleScreenBufferInfo_t2504 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C" bool WindowsConsoleDriver_ReadConsoleInput_m15347 (Object_t * __this /* static, unused */, IntPtr_t ___handle, InputRecord_t2501 * ___record, int32_t ___length, int32_t* ___nread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
