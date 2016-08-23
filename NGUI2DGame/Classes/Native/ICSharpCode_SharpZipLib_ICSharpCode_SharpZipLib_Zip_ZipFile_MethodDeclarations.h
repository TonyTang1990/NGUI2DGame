#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler
struct KeysRequiredEventHandler_t1843;
// System.Object
struct Object_t;
// ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs
struct KeysRequiredEventArgs_t1842;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void KeysRequiredEventHandler__ctor_m10218 (KeysRequiredEventHandler_t1843 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::Invoke(System.Object,ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs)
extern "C" void KeysRequiredEventHandler_Invoke_m10219 (KeysRequiredEventHandler_t1843 * __this, Object_t * ___sender, KeysRequiredEventArgs_t1842 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeysRequiredEventHandler_t1843(Il2CppObject* delegate, Object_t * ___sender, KeysRequiredEventArgs_t1842 * ___e);
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::BeginInvoke(System.Object,ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * KeysRequiredEventHandler_BeginInvoke_m10220 (KeysRequiredEventHandler_t1843 * __this, Object_t * ___sender, KeysRequiredEventArgs_t1842 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void KeysRequiredEventHandler_EndInvoke_m10221 (KeysRequiredEventHandler_t1843 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
