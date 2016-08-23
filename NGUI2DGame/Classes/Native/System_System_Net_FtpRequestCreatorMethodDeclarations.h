#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t2030;
// System.Net.WebRequest
struct WebRequest_t1380;
// System.Uri
struct Uri_t558;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m11292 (FtpRequestCreator_t2030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1380 * FtpRequestCreator_Create_m11293 (FtpRequestCreator_t2030 * __this, Uri_t558 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
