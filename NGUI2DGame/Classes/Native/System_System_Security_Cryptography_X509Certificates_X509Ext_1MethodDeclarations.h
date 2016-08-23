﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t2121;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t2108;
// System.Collections.ArrayList
struct ArrayList_t913;

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void X509ExtensionEnumerator__ctor_m12110 (X509ExtensionEnumerator_t2121 * __this, ArrayList_t913 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509ExtensionEnumerator_System_Collections_IEnumerator_get_Current_m12111 (X509ExtensionEnumerator_t2121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::get_Current()
extern "C" X509Extension_t2108 * X509ExtensionEnumerator_get_Current_m12112 (X509ExtensionEnumerator_t2121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::MoveNext()
extern "C" bool X509ExtensionEnumerator_MoveNext_m12113 (X509ExtensionEnumerator_t2121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
