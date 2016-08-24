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

// Excel.Core.ZipWorker
struct ZipWorker_t1305438663;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t1110175137;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t1764014695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1110175137.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1764014695.h"

// System.Boolean Excel.Core.ZipWorker::get_IsValid()
extern "C"  bool ZipWorker_get_IsValid_m3976233184 (ZipWorker_t1305438663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Excel.Core.ZipWorker::get_ExceptionMessage()
extern "C"  String_t* ZipWorker_get_ExceptionMessage_m775648301 (ZipWorker_t1305438663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::.ctor()
extern "C"  void ZipWorker__ctor_m3365551045 (ZipWorker_t1305438663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.ZipWorker::Extract(System.IO.Stream)
extern "C"  bool ZipWorker_Extract_m3209149031 (ZipWorker_t1305438663 * __this, Stream_t3255436806 * ___fileStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetSharedStringsStream()
extern "C"  Stream_t3255436806 * ZipWorker_GetSharedStringsStream_m1773174858 (ZipWorker_t1305438663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetStylesStream()
extern "C"  Stream_t3255436806 * ZipWorker_GetStylesStream_m3866322631 (ZipWorker_t1305438663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetWorkbookStream()
extern "C"  Stream_t3255436806 * ZipWorker_GetWorkbookStream_m1279462543 (ZipWorker_t1305438663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetWorksheetStream(System.String)
extern "C"  Stream_t3255436806 * ZipWorker_GetWorksheetStream_m3599487247 (ZipWorker_t1305438663 * __this, String_t* ___sheetPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetWorkbookRelsStream()
extern "C"  Stream_t3255436806 * ZipWorker_GetWorkbookRelsStream_m2990482831 (ZipWorker_t1305438663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::CleanFromTemp(System.Boolean)
extern "C"  void ZipWorker_CleanFromTemp_m3051253553 (ZipWorker_t1305438663 * __this, bool ___catchIoError0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::ExtractZipEntry(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C"  void ZipWorker_ExtractZipEntry_m3512310153 (ZipWorker_t1305438663 * __this, ZipFile_t1110175137 * ___zipFile0, ZipEntry_t1764014695 * ___entry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::NewTempPath()
extern "C"  void ZipWorker_NewTempPath_m3191004630 (ZipWorker_t1305438663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.ZipWorker::CheckFolderTree()
extern "C"  bool ZipWorker_CheckFolderTree_m3988233943 (ZipWorker_t1305438663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetStream(System.String)
extern "C"  Stream_t3255436806 * ZipWorker_GetStream_m1165928629 (Il2CppObject * __this /* static, unused */, String_t* ___filePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::Dispose()
extern "C"  void ZipWorker_Dispose_m2777260408 (ZipWorker_t1305438663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::Dispose(System.Boolean)
extern "C"  void ZipWorker_Dispose_m547991009 (ZipWorker_t1305438663 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::Finalize()
extern "C"  void ZipWorker_Finalize_m3289108063 (ZipWorker_t1305438663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
