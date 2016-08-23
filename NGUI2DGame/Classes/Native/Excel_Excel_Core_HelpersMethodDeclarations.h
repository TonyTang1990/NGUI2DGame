#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Excel.Core.Helpers
struct Helpers_t829;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Data.DataSet
struct DataSet_t346;
// System.Data.DataTable
struct DataTable_t296;
// System.Text.RegularExpressions.Match
struct Match_t854;

// System.String Excel.Core.Helpers::ConvertEscapeChars(System.String)
extern "C" String_t* Helpers_ConvertEscapeChars_m3440 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Excel.Core.Helpers::ConvertFromOATime(System.Double)
extern "C" Object_t * Helpers_ConvertFromOATime_m3441 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.Helpers::FixDataTypes(System.Data.DataSet)
extern "C" void Helpers_FixDataTypes_m3442 (Object_t * __this /* static, unused */, DataSet_t346 * ___dataset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.Helpers::AddColumnHandleDuplicate(System.Data.DataTable,System.String)
extern "C" void Helpers_AddColumnHandleDuplicate_m3443 (Object_t * __this /* static, unused */, DataTable_t296 * ___table, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Excel.Core.Helpers::<ConvertEscapeChars>b__0(System.Text.RegularExpressions.Match)
extern "C" String_t* Helpers_U3CConvertEscapeCharsU3Eb__0_m3444 (Object_t * __this /* static, unused */, Match_t854 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.Helpers::.cctor()
extern "C" void Helpers__cctor_m3445 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
