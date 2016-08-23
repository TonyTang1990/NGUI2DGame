#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Stores
struct X509Stores_t2394;
// Mono.Security.X509.X509Store
struct X509Store_t2393;
// System.String
struct String_t;

// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C" void X509Stores__ctor_m14420 (X509Stores_t2394 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C" X509Store_t2393 * X509Stores_get_TrustedRoot_m14421 (X509Stores_t2394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
