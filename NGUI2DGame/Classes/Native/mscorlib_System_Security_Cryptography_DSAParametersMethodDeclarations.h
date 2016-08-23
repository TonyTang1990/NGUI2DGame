#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1350;
struct DSAParameters_t1350_marshaled;

void DSAParameters_t1350_marshal(const DSAParameters_t1350& unmarshaled, DSAParameters_t1350_marshaled& marshaled);
void DSAParameters_t1350_marshal_back(const DSAParameters_t1350_marshaled& marshaled, DSAParameters_t1350& unmarshaled);
void DSAParameters_t1350_marshal_cleanup(DSAParameters_t1350_marshaled& marshaled);
