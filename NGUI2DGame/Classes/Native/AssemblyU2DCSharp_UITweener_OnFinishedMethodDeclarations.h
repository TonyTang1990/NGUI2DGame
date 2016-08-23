#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UITweener/OnFinished
struct OnFinished_t96;
// System.Object
struct Object_t;
// UITweener
struct UITweener_t197;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UITweener/OnFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnFinished__ctor_m781 (OnFinished_t96 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener/OnFinished::Invoke(UITweener)
extern "C" void OnFinished_Invoke_m782 (OnFinished_t96 * __this, UITweener_t197 * ___tween, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnFinished_t96(Il2CppObject* delegate, UITweener_t197 * ___tween);
// System.IAsyncResult UITweener/OnFinished::BeginInvoke(UITweener,System.AsyncCallback,System.Object)
extern "C" Object_t * OnFinished_BeginInvoke_m783 (OnFinished_t96 * __this, UITweener_t197 * ___tween, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UITweener/OnFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnFinished_EndInvoke_m784 (OnFinished_t96 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
