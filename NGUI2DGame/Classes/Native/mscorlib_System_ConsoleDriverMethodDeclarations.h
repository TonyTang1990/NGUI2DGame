#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ConsoleDriver
struct ConsoleDriver_t2431;
// System.IConsoleDriver
struct IConsoleDriver_t2430;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.ConsoleKeyInfo
#include "mscorlib_System_ConsoleKeyInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ConsoleDriver::.cctor()
extern "C" void ConsoleDriver__cctor_m14576 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateNullConsoleDriver()
extern "C" Object_t * ConsoleDriver_CreateNullConsoleDriver_m14577 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateWindowsConsoleDriver()
extern "C" Object_t * ConsoleDriver_CreateWindowsConsoleDriver_m14578 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateTermInfoDriver(System.String)
extern "C" Object_t * ConsoleDriver_CreateTermInfoDriver_m14579 (Object_t * __this /* static, unused */, String_t* ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.ConsoleDriver::ReadKey(System.Boolean)
extern "C" ConsoleKeyInfo_t2433  ConsoleDriver_ReadKey_m14580 (Object_t * __this /* static, unused */, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::get_IsConsole()
extern "C" bool ConsoleDriver_get_IsConsole_m14581 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::Isatty(System.IntPtr)
extern "C" bool ConsoleDriver_Isatty_m14582 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ConsoleDriver::InternalKeyAvailable(System.Int32)
extern "C" int32_t ConsoleDriver_InternalKeyAvailable_m14583 (Object_t * __this /* static, unused */, int32_t ___ms_timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::TtySetup(System.String,System.String,System.Byte[]&,System.Int32*&)
extern "C" bool ConsoleDriver_TtySetup_m14584 (Object_t * __this /* static, unused */, String_t* ___keypadXmit, String_t* ___teardown, ByteU5BU5D_t159** ___control_characters, int32_t** ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::SetEcho(System.Boolean)
extern "C" bool ConsoleDriver_SetEcho_m14585 (Object_t * __this /* static, unused */, bool ___wantEcho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
