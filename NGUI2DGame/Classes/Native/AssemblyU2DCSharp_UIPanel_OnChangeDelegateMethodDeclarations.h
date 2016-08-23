#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIPanel/OnChangeDelegate
struct OnChangeDelegate_t243;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIPanel/OnChangeDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void OnChangeDelegate__ctor_m999 (OnChangeDelegate_t243 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel/OnChangeDelegate::Invoke()
extern "C" void OnChangeDelegate_Invoke_m1000 (OnChangeDelegate_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnChangeDelegate_t243(Il2CppObject* delegate);
// System.IAsyncResult UIPanel/OnChangeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnChangeDelegate_BeginInvoke_m1001 (OnChangeDelegate_t243 * __this, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel/OnChangeDelegate::EndInvoke(System.IAsyncResult)
extern "C" void OnChangeDelegate_EndInvoke_m1002 (OnChangeDelegate_t243 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
