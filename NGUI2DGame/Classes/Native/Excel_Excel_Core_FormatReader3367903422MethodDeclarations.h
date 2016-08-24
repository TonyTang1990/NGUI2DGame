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

// Excel.Core.FormatReader
struct FormatReader_t3367903422;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.String Excel.Core.FormatReader::get_FormatString()
extern "C"  String_t* FormatReader_get_FormatString_m3486194298 (FormatReader_t3367903422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.FormatReader::set_FormatString(System.String)
extern "C"  void FormatReader_set_FormatString_m894199159 (FormatReader_t3367903422 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.FormatReader::.ctor()
extern "C"  void FormatReader__ctor_m1666847312 (FormatReader_t3367903422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.FormatReader::IsDateFormatString()
extern "C"  bool FormatReader_IsDateFormatString_m3255475084 (FormatReader_t3367903422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.FormatReader::IsSurroundedByQuotes(System.Char,System.Int32)
extern "C"  bool FormatReader_IsSurroundedByQuotes_m2508166547 (FormatReader_t3367903422 * __this, Il2CppChar ___dateChar0, int32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.FormatReader::IsPrecededByBackSlash(System.Char,System.Int32)
extern "C"  bool FormatReader_IsPrecededByBackSlash_m4280506347 (FormatReader_t3367903422 * __this, Il2CppChar ___dateChar0, int32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.FormatReader::IsSurroundedByBracket(System.Char,System.Int32)
extern "C"  bool FormatReader_IsSurroundedByBracket_m2253026190 (FormatReader_t3367903422 * __this, Il2CppChar ___dateChar0, int32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Excel.Core.FormatReader::NumberOfUnescapedOccurances(System.Char,System.String)
extern "C"  int32_t FormatReader_NumberOfUnescapedOccurances_m2715376771 (FormatReader_t3367903422 * __this, Il2CppChar ___value0, String_t* ___src1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
