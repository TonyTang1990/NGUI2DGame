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

// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler
struct KeysRequiredEventHandler_t4231608811;
// System.Object
struct Il2CppObject;
// ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs
struct KeysRequiredEventArgs_t881954000;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip881954000.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void KeysRequiredEventHandler__ctor_m3611807203 (KeysRequiredEventHandler_t4231608811 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::Invoke(System.Object,ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs)
extern "C"  void KeysRequiredEventHandler_Invoke_m4258674557 (KeysRequiredEventHandler_t4231608811 * __this, Il2CppObject * ___sender0, KeysRequiredEventArgs_t881954000 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::BeginInvoke(System.Object,ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * KeysRequiredEventHandler_BeginInvoke_m2446664134 (KeysRequiredEventHandler_t4231608811 * __this, Il2CppObject * ___sender0, KeysRequiredEventArgs_t881954000 * ___e1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void KeysRequiredEventHandler_EndInvoke_m3747947989 (KeysRequiredEventHandler_t4231608811 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
