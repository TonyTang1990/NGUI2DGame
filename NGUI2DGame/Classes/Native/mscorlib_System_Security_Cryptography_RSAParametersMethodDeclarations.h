#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1323;
struct RSAParameters_t1323_marshaled;

void RSAParameters_t1323_marshal(const RSAParameters_t1323& unmarshaled, RSAParameters_t1323_marshaled& marshaled);
void RSAParameters_t1323_marshal_back(const RSAParameters_t1323_marshaled& marshaled, RSAParameters_t1323& unmarshaled);
void RSAParameters_t1323_marshal_cleanup(RSAParameters_t1323_marshaled& marshaled);
