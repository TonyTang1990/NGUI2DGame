#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InputRecord
struct InputRecord_t2501;
struct InputRecord_t2501_marshaled;

void InputRecord_t2501_marshal(const InputRecord_t2501& unmarshaled, InputRecord_t2501_marshaled& marshaled);
void InputRecord_t2501_marshal_back(const InputRecord_t2501_marshaled& marshaled, InputRecord_t2501& unmarshaled);
void InputRecord_t2501_marshal_cleanup(InputRecord_t2501_marshaled& marshaled);
