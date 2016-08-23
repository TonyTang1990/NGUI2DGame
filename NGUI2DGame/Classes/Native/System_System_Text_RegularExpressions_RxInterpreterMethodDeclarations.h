#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t2181;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t2180;
// System.Text.RegularExpressions.Match
struct Match_t854;
// System.Text.RegularExpressions.Regex
struct Regex_t355;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t861;

// System.Void System.Text.RegularExpressions.RxInterpreter::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern "C" void RxInterpreter__ctor_m12437 (RxInterpreter_t2181 * __this, ByteU5BU5D_t159* ___program, EvalDelegate_t2180 * ___eval_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::.cctor()
extern "C" void RxInterpreter__cctor_m12438 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::ReadInt(System.Byte[],System.Int32)
extern "C" int32_t RxInterpreter_ReadInt_m12439 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___code, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t854 * RxInterpreter_Scan_m12440 (RxInterpreter_t2181 * __this, Regex_t355 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Open(System.Int32,System.Int32)
extern "C" void RxInterpreter_Open_m12441 (RxInterpreter_t2181 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Close(System.Int32,System.Int32)
extern "C" void RxInterpreter_Close_m12442 (RxInterpreter_t2181 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" bool RxInterpreter_Balance_m12443 (RxInterpreter_t2181 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::Checkpoint()
extern "C" int32_t RxInterpreter_Checkpoint_m12444 (RxInterpreter_t2181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Backtrack(System.Int32)
extern "C" void RxInterpreter_Backtrack_m12445 (RxInterpreter_t2181 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::ResetGroups()
extern "C" void RxInterpreter_ResetGroups_m12446 (RxInterpreter_t2181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::GetLastDefined(System.Int32)
extern "C" int32_t RxInterpreter_GetLastDefined_m12447 (RxInterpreter_t2181 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::CreateMark(System.Int32)
extern "C" int32_t RxInterpreter_CreateMark_m12448 (RxInterpreter_t2181 * __this, int32_t ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C" void RxInterpreter_GetGroupInfo_m12449 (RxInterpreter_t2181 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern "C" void RxInterpreter_PopulateGroup_m12450 (RxInterpreter_t2181 * __this, Group_t861 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern "C" Match_t854 * RxInterpreter_GenerateMatch_m12451 (RxInterpreter_t2181 * __this, Regex_t355 * ___regex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::IsWordChar(System.Char)
extern "C" bool RxInterpreter_IsWordChar_m12452 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::EvalByteCode(System.Int32,System.Int32,System.Int32&)
extern "C" bool RxInterpreter_EvalByteCode_m12453 (RxInterpreter_t2181 * __this, int32_t ___pc, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
