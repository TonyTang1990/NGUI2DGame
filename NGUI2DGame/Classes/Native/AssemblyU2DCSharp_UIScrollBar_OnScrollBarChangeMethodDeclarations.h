#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIScrollBar/OnScrollBarChange
struct OnScrollBarChange_t133;
// System.Object
struct Object_t;
// UIScrollBar
struct UIScrollBar_t119;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIScrollBar/OnScrollBarChange::.ctor(System.Object,System.IntPtr)
extern "C" void OnScrollBarChange__ctor_m371 (OnScrollBarChange_t133 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar/OnScrollBarChange::Invoke(UIScrollBar)
extern "C" void OnScrollBarChange_Invoke_m372 (OnScrollBarChange_t133 * __this, UIScrollBar_t119 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnScrollBarChange_t133(Il2CppObject* delegate, UIScrollBar_t119 * ___sb);
// System.IAsyncResult UIScrollBar/OnScrollBarChange::BeginInvoke(UIScrollBar,System.AsyncCallback,System.Object)
extern "C" Object_t * OnScrollBarChange_BeginInvoke_m373 (OnScrollBarChange_t133 * __this, UIScrollBar_t119 * ___sb, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIScrollBar/OnScrollBarChange::EndInvoke(System.IAsyncResult)
extern "C" void OnScrollBarChange_EndInvoke_m374 (OnScrollBarChange_t133 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
