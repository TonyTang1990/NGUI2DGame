#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
struct ResponseDelegate_1_t655;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.BasicResponse
struct BasicResponse_t536;
// System.IAsyncResult
struct IAsyncResult_t71;
// System.AsyncCallback
struct AsyncCallback_t72;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m23157(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t655 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m23141_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m23158(__this, ___response, method) (( void (*) (ResponseDelegate_1_t655 *, BasicResponse_t536 *, const MethodInfo*))ResponseDelegate_1_Invoke_m23143_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m23159(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t655 *, BasicResponse_t536 *, AsyncCallback_t72 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m23145_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m23160(__this, ___result, method) (( void (*) (ResponseDelegate_1_t655 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m23147_gshared)(__this, ___result, method)
