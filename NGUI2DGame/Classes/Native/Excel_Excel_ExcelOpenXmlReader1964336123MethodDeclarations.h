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

// Excel.ExcelOpenXmlReader
struct ExcelOpenXmlReader_t1964336123;
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt>
struct List_1_t589459722;
// Excel.Core.OpenXmlFormat.XlsxWorksheet
struct XlsxWorksheet_t2598215163;
// System.IO.Stream
struct Stream_t3255436806;
// System.Data.DataSet
struct DataSet_t3097402844;

#include "codegen/il2cpp-codegen.h"
#include "Excel_Excel_Core_OpenXmlFormat_XlsxWorksheet2598215163.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Excel.ExcelOpenXmlReader::.ctor()
extern "C"  void ExcelOpenXmlReader__ctor_m2920103612 (ExcelOpenXmlReader_t1964336123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::ReadGlobals()
extern "C"  void ExcelOpenXmlReader_ReadGlobals_m356406304 (ExcelOpenXmlReader_t1964336123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::CheckDateTimeNumFmts(System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt>)
extern "C"  void ExcelOpenXmlReader_CheckDateTimeNumFmts_m1223386651 (ExcelOpenXmlReader_t1964336123 * __this, List_1_t589459722 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::ReadSheetGlobals(Excel.Core.OpenXmlFormat.XlsxWorksheet)
extern "C"  void ExcelOpenXmlReader_ReadSheetGlobals_m3581744618 (ExcelOpenXmlReader_t1964336123 * __this, XlsxWorksheet_t2598215163 * ___sheet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.ExcelOpenXmlReader::ReadSheetRow(Excel.Core.OpenXmlFormat.XlsxWorksheet)
extern "C"  bool ExcelOpenXmlReader_ReadSheetRow_m3966407690 (ExcelOpenXmlReader_t1964336123 * __this, XlsxWorksheet_t2598215163 * ___sheet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.ExcelOpenXmlReader::IsDateTimeStyle(System.Int32)
extern "C"  bool ExcelOpenXmlReader_IsDateTimeStyle_m2153382639 (ExcelOpenXmlReader_t1964336123 * __this, int32_t ___styleId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::Initialize(System.IO.Stream)
extern "C"  void ExcelOpenXmlReader_Initialize_m3797863185 (ExcelOpenXmlReader_t1964336123 * __this, Stream_t3255436806 * ___fileStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet Excel.ExcelOpenXmlReader::AsDataSet()
extern "C"  DataSet_t3097402844 * ExcelOpenXmlReader_AsDataSet_m2452927416 (ExcelOpenXmlReader_t1964336123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet Excel.ExcelOpenXmlReader::AsDataSet(System.Boolean)
extern "C"  DataSet_t3097402844 * ExcelOpenXmlReader_AsDataSet_m2575323469 (ExcelOpenXmlReader_t1964336123 * __this, bool ___convertOADateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::Close()
extern "C"  void ExcelOpenXmlReader_Close_m2461826172 (ExcelOpenXmlReader_t1964336123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::Dispose()
extern "C"  void ExcelOpenXmlReader_Dispose_m2298408177 (ExcelOpenXmlReader_t1964336123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::Dispose(System.Boolean)
extern "C"  void ExcelOpenXmlReader_Dispose_m3451071528 (ExcelOpenXmlReader_t1964336123 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::Finalize()
extern "C"  void ExcelOpenXmlReader_Finalize_m3175468180 (ExcelOpenXmlReader_t1964336123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
