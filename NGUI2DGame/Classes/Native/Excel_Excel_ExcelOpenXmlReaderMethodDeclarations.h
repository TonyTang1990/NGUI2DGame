#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Excel.ExcelOpenXmlReader
struct ExcelOpenXmlReader_t845;
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt>
struct List_1_t834;
// Excel.Core.OpenXmlFormat.XlsxWorksheet
struct XlsxWorksheet_t838;
// System.IO.Stream
struct Stream_t844;
// System.Data.DataSet
struct DataSet_t346;

// System.Void Excel.ExcelOpenXmlReader::.ctor()
extern "C" void ExcelOpenXmlReader__ctor_m3503 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::ReadGlobals()
extern "C" void ExcelOpenXmlReader_ReadGlobals_m3504 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::CheckDateTimeNumFmts(System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt>)
extern "C" void ExcelOpenXmlReader_CheckDateTimeNumFmts_m3505 (ExcelOpenXmlReader_t845 * __this, List_1_t834 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::ReadSheetGlobals(Excel.Core.OpenXmlFormat.XlsxWorksheet)
extern "C" void ExcelOpenXmlReader_ReadSheetGlobals_m3506 (ExcelOpenXmlReader_t845 * __this, XlsxWorksheet_t838 * ___sheet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.ExcelOpenXmlReader::ReadSheetRow(Excel.Core.OpenXmlFormat.XlsxWorksheet)
extern "C" bool ExcelOpenXmlReader_ReadSheetRow_m3507 (ExcelOpenXmlReader_t845 * __this, XlsxWorksheet_t838 * ___sheet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.ExcelOpenXmlReader::IsDateTimeStyle(System.Int32)
extern "C" bool ExcelOpenXmlReader_IsDateTimeStyle_m3508 (ExcelOpenXmlReader_t845 * __this, int32_t ___styleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::Initialize(System.IO.Stream)
extern "C" void ExcelOpenXmlReader_Initialize_m3509 (ExcelOpenXmlReader_t845 * __this, Stream_t844 * ___fileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet Excel.ExcelOpenXmlReader::AsDataSet()
extern "C" DataSet_t346 * ExcelOpenXmlReader_AsDataSet_m3510 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet Excel.ExcelOpenXmlReader::AsDataSet(System.Boolean)
extern "C" DataSet_t346 * ExcelOpenXmlReader_AsDataSet_m3511 (ExcelOpenXmlReader_t845 * __this, bool ___convertOADateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::Close()
extern "C" void ExcelOpenXmlReader_Close_m3512 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::Dispose()
extern "C" void ExcelOpenXmlReader_Dispose_m3513 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::Dispose(System.Boolean)
extern "C" void ExcelOpenXmlReader_Dispose_m3514 (ExcelOpenXmlReader_t845 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.ExcelOpenXmlReader::Finalize()
extern "C" void ExcelOpenXmlReader_Finalize_m3515 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
