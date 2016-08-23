#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UpdateManager/OnUpdate
struct OnUpdate_t67;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UpdateManager/OnUpdate::.ctor(System.Object,System.IntPtr)
extern "C" void OnUpdate__ctor_m122 (OnUpdate_t67 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager/OnUpdate::Invoke(System.Single)
extern "C" void OnUpdate_Invoke_m123 (OnUpdate_t67 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnUpdate_t67(Il2CppObject* delegate, float ___delta);
// System.IAsyncResult UpdateManager/OnUpdate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern "C" Object_t * OnUpdate_BeginInvoke_m124 (OnUpdate_t67 * __this, float ___delta, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager/OnUpdate::EndInvoke(System.IAsyncResult)
extern "C" void OnUpdate_EndInvoke_m125 (OnUpdate_t67 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
