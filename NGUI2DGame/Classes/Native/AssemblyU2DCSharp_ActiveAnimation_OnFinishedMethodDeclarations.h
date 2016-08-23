#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ActiveAnimation/OnFinished
struct OnFinished_t90;
// System.Object
struct Object_t;
// ActiveAnimation
struct ActiveAnimation_t146;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ActiveAnimation/OnFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnFinished__ctor_m442 (OnFinished_t90 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation/OnFinished::Invoke(ActiveAnimation)
extern "C" void OnFinished_Invoke_m443 (OnFinished_t90 * __this, ActiveAnimation_t146 * ___anim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnFinished_t90(Il2CppObject* delegate, ActiveAnimation_t146 * ___anim);
// System.IAsyncResult ActiveAnimation/OnFinished::BeginInvoke(ActiveAnimation,System.AsyncCallback,System.Object)
extern "C" Object_t * OnFinished_BeginInvoke_m444 (OnFinished_t90 * __this, ActiveAnimation_t146 * ___anim, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation/OnFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnFinished_EndInvoke_m445 (OnFinished_t90 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
