#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t412;
struct YieldInstruction_t412_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m2604 (YieldInstruction_t412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t412_marshal(const YieldInstruction_t412& unmarshaled, YieldInstruction_t412_marshaled& marshaled);
void YieldInstruction_t412_marshal_back(const YieldInstruction_t412_marshaled& marshaled, YieldInstruction_t412& unmarshaled);
void YieldInstruction_t412_marshal_cleanup(YieldInstruction_t412_marshaled& marshaled);
