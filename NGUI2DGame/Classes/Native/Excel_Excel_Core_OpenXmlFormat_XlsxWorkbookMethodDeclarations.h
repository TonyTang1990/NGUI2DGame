#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Excel.Core.OpenXmlFormat.XlsxWorkbook
struct XlsxWorkbook_t837;
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>
struct List_1_t836;
// Excel.Core.OpenXmlFormat.XlsxSST
struct XlsxSST_t832;
// Excel.Core.OpenXmlFormat.XlsxStyles
struct XlsxStyles_t835;
// System.IO.Stream
struct Stream_t844;

// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::.ctor(System.IO.Stream,System.IO.Stream,System.IO.Stream,System.IO.Stream)
extern "C" void XlsxWorkbook__ctor_m3464 (XlsxWorkbook_t837 * __this, Stream_t844 * ___workbookStream, Stream_t844 * ___relsStream, Stream_t844 * ___sharedStringsStream, Stream_t844 * ___stylesStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet> Excel.Core.OpenXmlFormat.XlsxWorkbook::get_Sheets()
extern "C" List_1_t836 * XlsxWorkbook_get_Sheets_m3465 (XlsxWorkbook_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Excel.Core.OpenXmlFormat.XlsxSST Excel.Core.OpenXmlFormat.XlsxWorkbook::get_SST()
extern "C" XlsxSST_t832 * XlsxWorkbook_get_SST_m3466 (XlsxWorkbook_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Excel.Core.OpenXmlFormat.XlsxStyles Excel.Core.OpenXmlFormat.XlsxWorkbook::get_Styles()
extern "C" XlsxStyles_t835 * XlsxWorkbook_get_Styles_m3467 (XlsxWorkbook_t837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadStyles(System.IO.Stream)
extern "C" void XlsxWorkbook_ReadStyles_m3468 (XlsxWorkbook_t837 * __this, Stream_t844 * ___xmlFileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadSharedStrings(System.IO.Stream)
extern "C" void XlsxWorkbook_ReadSharedStrings_m3469 (XlsxWorkbook_t837 * __this, Stream_t844 * ___xmlFileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadWorkbook(System.IO.Stream)
extern "C" void XlsxWorkbook_ReadWorkbook_m3470 (XlsxWorkbook_t837 * __this, Stream_t844 * ___xmlFileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadWorkbookRels(System.IO.Stream)
extern "C" void XlsxWorkbook_ReadWorkbookRels_m3471 (XlsxWorkbook_t837 * __this, Stream_t844 * ___xmlFileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
