#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIPopupList/OnSelectionChange
struct OnSelectionChange_t127;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIPopupList/OnSelectionChange::.ctor(System.Object,System.IntPtr)
extern "C" void OnSelectionChange__ctor_m340 (OnSelectionChange_t127 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/OnSelectionChange::Invoke(System.String)
extern "C" void OnSelectionChange_Invoke_m341 (OnSelectionChange_t127 * __this, String_t* ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_OnSelectionChange_t127(Il2CppObject* delegate, String_t* ___item);
// System.IAsyncResult UIPopupList/OnSelectionChange::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * OnSelectionChange_BeginInvoke_m342 (OnSelectionChange_t127 * __this, String_t* ___item, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPopupList/OnSelectionChange::EndInvoke(System.IAsyncResult)
extern "C" void OnSelectionChange_EndInvoke_m343 (OnSelectionChange_t127 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
