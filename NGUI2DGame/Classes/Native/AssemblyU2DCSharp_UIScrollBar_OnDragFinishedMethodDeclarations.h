#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIScrollBar/OnDragFinished
struct OnDragFinished_t134;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIScrollBar/OnDragFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnDragFinished__ctor_m375 (OnDragFinished_t134 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar/OnDragFinished::Invoke()
extern "C" void OnDragFinished_Invoke_m376 (OnDragFinished_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnDragFinished_t134(Il2CppObject* delegate);
// System.IAsyncResult UIScrollBar/OnDragFinished::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnDragFinished_BeginInvoke_m377 (OnDragFinished_t134 * __this, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar/OnDragFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnDragFinished_EndInvoke_m378 (OnDragFinished_t134 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
