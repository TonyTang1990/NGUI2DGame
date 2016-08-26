#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Data.DataSet
struct DataSet_t3097402844;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Data_System_Data_DataSet3097402844.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_System_Text_RegularExpressions_Match3164245899.h"

// System.String Excel.Core.Helpers::ConvertEscapeChars(System.String)
extern "C"  String_t* Helpers_ConvertEscapeChars_m2354180383 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Excel.Core.Helpers::ConvertFromOATime(System.Double)
extern "C"  Il2CppObject * Helpers_ConvertFromOATime_m3489838396 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.Helpers::FixDataTypes(System.Data.DataSet)
extern "C"  void Helpers_FixDataTypes_m3481117268 (Il2CppObject * __this /* static, unused */, DataSet_t3097402844 * ___dataset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.Helpers::AddColumnHandleDuplicate(System.Data.DataTable,System.String)
extern "C"  void Helpers_AddColumnHandleDuplicate_m2739049988 (Il2CppObject * __this /* static, unused */, DataTable_t3267612424 * ___table0, String_t* ___columnName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Excel.Core.Helpers::<ConvertEscapeChars>b__0(System.Text.RegularExpressions.Match)
extern "C"  String_t* Helpers_U3CConvertEscapeCharsU3Eb__0_m1680631643 (Il2CppObject * __this /* static, unused */, Match_t3164245899 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.Helpers::.cctor()
extern "C"  void Helpers__cctor_m3113545832 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
