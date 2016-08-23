#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t405;
struct AsyncOperation_t405_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2483 (AsyncOperation_t405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2484 (AsyncOperation_t405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2485 (AsyncOperation_t405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t405_marshal(const AsyncOperation_t405& unmarshaled, AsyncOperation_t405_marshaled& marshaled);
void AsyncOperation_t405_marshal_back(const AsyncOperation_t405_marshaled& marshaled, AsyncOperation_t405& unmarshaled);
void AsyncOperation_t405_marshal_cleanup(AsyncOperation_t405_marshaled& marshaled);
