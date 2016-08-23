#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t2017;
// System.Net.WebRequest
struct WebRequest_t1380;
// System.Uri
struct Uri_t558;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m11211 (FileWebRequestCreator_t2017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1380 * FileWebRequestCreator_Create_m11212 (FileWebRequestCreator_t2017 * __this, Uri_t558 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
