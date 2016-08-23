#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t439;
struct Gradient_t439_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m2071 (Gradient_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2072 (Gradient_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2073 (Gradient_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m2074 (Gradient_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t439_marshal(const Gradient_t439& unmarshaled, Gradient_t439_marshaled& marshaled);
void Gradient_t439_marshal_back(const Gradient_t439_marshaled& marshaled, Gradient_t439& unmarshaled);
void Gradient_t439_marshal_cleanup(Gradient_t439_marshaled& marshaled);
