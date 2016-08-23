#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t415;
struct Coroutine_t415_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m1954 (Coroutine_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m1955 (Coroutine_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m1956 (Coroutine_t415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t415_marshal(const Coroutine_t415& unmarshaled, Coroutine_t415_marshaled& marshaled);
void Coroutine_t415_marshal_back(const Coroutine_t415_marshaled& marshaled, Coroutine_t415& unmarshaled);
void Coroutine_t415_marshal_cleanup(Coroutine_t415_marshaled& marshaled);
