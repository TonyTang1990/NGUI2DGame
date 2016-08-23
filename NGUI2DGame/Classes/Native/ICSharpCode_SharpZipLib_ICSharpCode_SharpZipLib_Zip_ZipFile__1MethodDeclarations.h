#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator
struct ZipEntryEnumerator_t1846;
// System.Object
struct Object_t;
// ICSharpCode.SharpZipLib.Zip.ZipEntry[]
struct ZipEntryU5BU5D_t1845;

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::.ctor(ICSharpCode.SharpZipLib.Zip.ZipEntry[])
extern "C" void ZipEntryEnumerator__ctor_m10222 (ZipEntryEnumerator_t1846 * __this, ZipEntryU5BU5D_t1845* ___entries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::get_Current()
extern "C" Object_t * ZipEntryEnumerator_get_Current_m10223 (ZipEntryEnumerator_t1846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::MoveNext()
extern "C" bool ZipEntryEnumerator_MoveNext_m10224 (ZipEntryEnumerator_t1846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
