#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t2025;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1351;
// System.Exception
struct Exception_t306;
// System.Net.FtpWebResponse
struct FtpWebResponse_t2024;
// System.IO.Stream
struct Stream_t844;
// System.AsyncCallback
struct AsyncCallback_t72;

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FtpAsyncResult__ctor_m11248 (FtpAsyncResult_t2025 * __this, AsyncCallback_t72 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C" Object_t * FtpAsyncResult_get_AsyncState_m11249 (FtpAsyncResult_t2025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1351 * FtpAsyncResult_get_AsyncWaitHandle_m11250 (FtpAsyncResult_t2025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C" bool FtpAsyncResult_get_IsCompleted_m11251 (FtpAsyncResult_t2025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C" bool FtpAsyncResult_get_GotException_m11252 (FtpAsyncResult_t2025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C" Exception_t306 * FtpAsyncResult_get_Exception_m11253 (FtpAsyncResult_t2025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C" FtpWebResponse_t2024 * FtpAsyncResult_get_Response_m11254 (FtpAsyncResult_t2025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C" void FtpAsyncResult_set_Stream_m11255 (FtpAsyncResult_t2025 * __this, Stream_t844 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool FtpAsyncResult_WaitUntilComplete_m11256 (FtpAsyncResult_t2025 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m11257 (FtpAsyncResult_t2025 * __this, bool ___synch, Exception_t306 * ___exc, FtpWebResponse_t2024 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m11258 (FtpAsyncResult_t2025 * __this, bool ___synch, FtpWebResponse_t2024 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void FtpAsyncResult_SetCompleted_m11259 (FtpAsyncResult_t2025 * __this, bool ___synch, Exception_t306 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C" void FtpAsyncResult_DoCallback_m11260 (FtpAsyncResult_t2025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
