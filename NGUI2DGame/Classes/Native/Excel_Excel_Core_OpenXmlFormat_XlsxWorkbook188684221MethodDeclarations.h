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

// Excel.Core.OpenXmlFormat.XlsxWorkbook
struct XlsxWorkbook_t188684221;
// System.IO.Stream
struct Stream_t3255436806;
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>
struct List_1_t1967336295;
// Excel.Core.OpenXmlFormat.XlsxSST
struct XlsxSST_t3732229269;
// Excel.Core.OpenXmlFormat.XlsxStyles
struct XlsxStyles_t1776783765;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::.ctor(System.IO.Stream,System.IO.Stream,System.IO.Stream,System.IO.Stream)
extern "C"  void XlsxWorkbook__ctor_m912209719 (XlsxWorkbook_t188684221 * __this, Stream_t3255436806 * ___workbookStream0, Stream_t3255436806 * ___relsStream1, Stream_t3255436806 * ___sharedStringsStream2, Stream_t3255436806 * ___stylesStream3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet> Excel.Core.OpenXmlFormat.XlsxWorkbook::get_Sheets()
extern "C"  List_1_t1967336295 * XlsxWorkbook_get_Sheets_m3489303710 (XlsxWorkbook_t188684221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Excel.Core.OpenXmlFormat.XlsxSST Excel.Core.OpenXmlFormat.XlsxWorkbook::get_SST()
extern "C"  XlsxSST_t3732229269 * XlsxWorkbook_get_SST_m3367944442 (XlsxWorkbook_t188684221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Excel.Core.OpenXmlFormat.XlsxStyles Excel.Core.OpenXmlFormat.XlsxWorkbook::get_Styles()
extern "C"  XlsxStyles_t1776783765 * XlsxWorkbook_get_Styles_m2879484330 (XlsxWorkbook_t188684221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadStyles(System.IO.Stream)
extern "C"  void XlsxWorkbook_ReadStyles_m4081036932 (XlsxWorkbook_t188684221 * __this, Stream_t3255436806 * ___xmlFileStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadSharedStrings(System.IO.Stream)
extern "C"  void XlsxWorkbook_ReadSharedStrings_m783934533 (XlsxWorkbook_t188684221 * __this, Stream_t3255436806 * ___xmlFileStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadWorkbook(System.IO.Stream)
extern "C"  void XlsxWorkbook_ReadWorkbook_m1276773658 (XlsxWorkbook_t188684221 * __this, Stream_t3255436806 * ___xmlFileStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadWorkbookRels(System.IO.Stream)
extern "C"  void XlsxWorkbook_ReadWorkbookRels_m2614923554 (XlsxWorkbook_t188684221 * __this, Stream_t3255436806 * ___xmlFileStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
