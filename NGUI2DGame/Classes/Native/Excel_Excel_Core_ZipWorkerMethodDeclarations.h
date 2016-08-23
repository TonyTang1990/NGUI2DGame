#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Excel.Core.ZipWorker
struct ZipWorker_t841;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t844;
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t855;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t856;

// System.Boolean Excel.Core.ZipWorker::get_IsValid()
extern "C" bool ZipWorker_get_IsValid_m3486 (ZipWorker_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Excel.Core.ZipWorker::get_ExceptionMessage()
extern "C" String_t* ZipWorker_get_ExceptionMessage_m3487 (ZipWorker_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::.ctor()
extern "C" void ZipWorker__ctor_m3488 (ZipWorker_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.ZipWorker::Extract(System.IO.Stream)
extern "C" bool ZipWorker_Extract_m3489 (ZipWorker_t841 * __this, Stream_t844 * ___fileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetSharedStringsStream()
extern "C" Stream_t844 * ZipWorker_GetSharedStringsStream_m3490 (ZipWorker_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetStylesStream()
extern "C" Stream_t844 * ZipWorker_GetStylesStream_m3491 (ZipWorker_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetWorkbookStream()
extern "C" Stream_t844 * ZipWorker_GetWorkbookStream_m3492 (ZipWorker_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetWorksheetStream(System.String)
extern "C" Stream_t844 * ZipWorker_GetWorksheetStream_m3493 (ZipWorker_t841 * __this, String_t* ___sheetPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetWorkbookRelsStream()
extern "C" Stream_t844 * ZipWorker_GetWorkbookRelsStream_m3494 (ZipWorker_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::CleanFromTemp(System.Boolean)
extern "C" void ZipWorker_CleanFromTemp_m3495 (ZipWorker_t841 * __this, bool ___catchIoError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::ExtractZipEntry(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" void ZipWorker_ExtractZipEntry_m3496 (ZipWorker_t841 * __this, ZipFile_t855 * ___zipFile, ZipEntry_t856 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::NewTempPath()
extern "C" void ZipWorker_NewTempPath_m3497 (ZipWorker_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Excel.Core.ZipWorker::CheckFolderTree()
extern "C" bool ZipWorker_CheckFolderTree_m3498 (ZipWorker_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Excel.Core.ZipWorker::GetStream(System.String)
extern "C" Stream_t844 * ZipWorker_GetStream_m3499 (Object_t * __this /* static, unused */, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::Dispose()
extern "C" void ZipWorker_Dispose_m3500 (ZipWorker_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::Dispose(System.Boolean)
extern "C" void ZipWorker_Dispose_m3501 (ZipWorker_t841 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Excel.Core.ZipWorker::Finalize()
extern "C" void ZipWorker_Finalize_m3502 (ZipWorker_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
