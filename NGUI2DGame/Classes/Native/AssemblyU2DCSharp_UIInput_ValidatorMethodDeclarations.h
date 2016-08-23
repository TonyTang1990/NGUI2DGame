#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIInput/Validator
struct Validator_t235;
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

// System.Void UIInput/Validator::.ctor(System.Object,System.IntPtr)
extern "C" void Validator__ctor_m919 (Validator_t235 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/Validator::Invoke(System.String,System.Char)
extern "C" uint16_t Validator_Invoke_m920 (Validator_t235 * __this, String_t* ___currentText, uint16_t ___nextChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" uint16_t pinvoke_delegate_wrapper_Validator_t235(Il2CppObject* delegate, String_t* ___currentText, uint16_t ___nextChar);
// System.IAsyncResult UIInput/Validator::BeginInvoke(System.String,System.Char,System.AsyncCallback,System.Object)
extern "C" Object_t * Validator_BeginInvoke_m921 (Validator_t235 * __this, String_t* ___currentText, uint16_t ___nextChar, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInput/Validator::EndInvoke(System.IAsyncResult)
extern "C" uint16_t Validator_EndInvoke_m922 (Validator_t235 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
