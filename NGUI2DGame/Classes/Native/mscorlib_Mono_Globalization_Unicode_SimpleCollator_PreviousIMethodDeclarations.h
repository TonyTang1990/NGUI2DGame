#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t2336;
struct PreviousInfo_t2336_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m13869 (PreviousInfo_t2336 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t2336_marshal(const PreviousInfo_t2336& unmarshaled, PreviousInfo_t2336_marshaled& marshaled);
void PreviousInfo_t2336_marshal_back(const PreviousInfo_t2336_marshaled& marshaled, PreviousInfo_t2336& unmarshaled);
void PreviousInfo_t2336_marshal_cleanup(PreviousInfo_t2336_marshaled& marshaled);
