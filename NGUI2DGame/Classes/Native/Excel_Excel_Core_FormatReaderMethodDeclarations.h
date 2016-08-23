#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Excel.Core.FormatReader
struct FormatReader_t827;
// System.String
struct String_t;

// System.String Excel.Core.FormatReader::get_FormatString()
extern "C" String_t* FormatReader_get_FormatString_m3432 (FormatReader_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.FormatReader::set_FormatString(System.String)
extern "C" void FormatReader_set_FormatString_m3433 (FormatReader_t827 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.FormatReader::.ctor()
extern "C" void FormatReader__ctor_m3434 (FormatReader_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.FormatReader::IsDateFormatString()
extern "C" bool FormatReader_IsDateFormatString_m3435 (FormatReader_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.FormatReader::IsSurroundedByQuotes(System.Char,System.Int32)
extern "C" bool FormatReader_IsSurroundedByQuotes_m3436 (FormatReader_t827 * __this, uint16_t ___dateChar, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.FormatReader::IsPrecededByBackSlash(System.Char,System.Int32)
extern "C" bool FormatReader_IsPrecededByBackSlash_m3437 (FormatReader_t827 * __this, uint16_t ___dateChar, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.FormatReader::IsSurroundedByBracket(System.Char,System.Int32)
extern "C" bool FormatReader_IsSurroundedByBracket_m3438 (FormatReader_t827 * __this, uint16_t ___dateChar, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Excel.Core.FormatReader::NumberOfUnescapedOccurances(System.Char,System.String)
extern "C" int32_t FormatReader_NumberOfUnescapedOccurances_m3439 (FormatReader_t827 * __this, uint16_t ___value, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
