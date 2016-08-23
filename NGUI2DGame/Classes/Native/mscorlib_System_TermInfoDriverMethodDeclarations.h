#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TermInfoDriver
struct TermInfoDriver_t2422;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t260;
// System.ConsoleKeyInfo
#include "mscorlib_System_ConsoleKeyInfo.h"
// System.TermInfoStrings
#include "mscorlib_System_TermInfoStrings.h"

// System.Void System.TermInfoDriver::.ctor(System.String)
extern "C" void TermInfoDriver__ctor_m15197 (TermInfoDriver_t2422 * __this, String_t* ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::.cctor()
extern "C" void TermInfoDriver__cctor_m15198 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::SearchTerminfo(System.String)
extern "C" String_t* TermInfoDriver_SearchTerminfo_m15199 (Object_t * __this /* static, unused */, String_t* ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteConsole(System.String)
extern "C" void TermInfoDriver_WriteConsole_m15200 (TermInfoDriver_t2422 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::get_Initialized()
extern "C" bool TermInfoDriver_get_Initialized_m15201 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::Init()
extern "C" void TermInfoDriver_Init_m15202 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::MangleParameters(System.String)
extern "C" String_t* TermInfoDriver_MangleParameters_m15203 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::IncrementX()
extern "C" void TermInfoDriver_IncrementX_m15204 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteSpecialKey(System.ConsoleKeyInfo)
extern "C" void TermInfoDriver_WriteSpecialKey_m15205 (TermInfoDriver_t2422 * __this, ConsoleKeyInfo_t2433  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteSpecialKey(System.Char)
extern "C" void TermInfoDriver_WriteSpecialKey_m15206 (TermInfoDriver_t2422 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::IsSpecialKey(System.ConsoleKeyInfo)
extern "C" bool TermInfoDriver_IsSpecialKey_m15207 (TermInfoDriver_t2422 * __this, ConsoleKeyInfo_t2433  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::IsSpecialKey(System.Char)
extern "C" bool TermInfoDriver_IsSpecialKey_m15208 (TermInfoDriver_t2422 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::GetCursorPosition()
extern "C" void TermInfoDriver_GetCursorPosition_m15209 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::CheckWindowDimensions()
extern "C" void TermInfoDriver_CheckWindowDimensions_m15210 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::get_WindowHeight()
extern "C" int32_t TermInfoDriver_get_WindowHeight_m15211 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::get_WindowWidth()
extern "C" int32_t TermInfoDriver_get_WindowWidth_m15212 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AddToBuffer(System.Int32)
extern "C" void TermInfoDriver_AddToBuffer_m15213 (TermInfoDriver_t2422 * __this, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AdjustBuffer()
extern "C" void TermInfoDriver_AdjustBuffer_m15214 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::CreateKeyInfoFromInt(System.Int32,System.Boolean)
extern "C" ConsoleKeyInfo_t2433  TermInfoDriver_CreateKeyInfoFromInt_m15215 (TermInfoDriver_t2422 * __this, int32_t ___n, bool ___alt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.TermInfoDriver::GetKeyFromBuffer(System.Boolean)
extern "C" Object_t * TermInfoDriver_GetKeyFromBuffer_m15216 (TermInfoDriver_t2422 * __this, bool ___cooked, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::ReadKeyInternal(System.Boolean&)
extern "C" ConsoleKeyInfo_t2433  TermInfoDriver_ReadKeyInternal_m15217 (TermInfoDriver_t2422 * __this, bool* ___fresh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::InputPending()
extern "C" bool TermInfoDriver_InputPending_m15218 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::QueueEcho(System.Char)
extern "C" void TermInfoDriver_QueueEcho_m15219 (TermInfoDriver_t2422 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::Echo(System.ConsoleKeyInfo)
extern "C" void TermInfoDriver_Echo_m15220 (TermInfoDriver_t2422 * __this, ConsoleKeyInfo_t2433  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::EchoFlush()
extern "C" void TermInfoDriver_EchoFlush_m15221 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t TermInfoDriver_Read_m15222 (TermInfoDriver_t2422 * __this, CharU5BU5D_t260* ___dest, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::ReadKey(System.Boolean)
extern "C" ConsoleKeyInfo_t2433  TermInfoDriver_ReadKey_m15223 (TermInfoDriver_t2422 * __this, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::ReadLine()
extern "C" String_t* TermInfoDriver_ReadLine_m15224 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::SetCursorPosition(System.Int32,System.Int32)
extern "C" void TermInfoDriver_SetCursorPosition_m15225 (TermInfoDriver_t2422 * __this, int32_t ___left, int32_t ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::CreateKeyMap()
extern "C" void TermInfoDriver_CreateKeyMap_m15226 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::InitKeys()
extern "C" void TermInfoDriver_InitKeys_m15227 (TermInfoDriver_t2422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AddStringMapping(System.TermInfoStrings)
extern "C" void TermInfoDriver_AddStringMapping_m15228 (TermInfoDriver_t2422 * __this, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
