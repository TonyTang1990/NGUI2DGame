#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2347;
// Mono.Math.BigInteger
struct BigInteger_t2346;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m13942 (ModulusRing_t2347 * __this, BigInteger_t2346 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m13943 (ModulusRing_t2347 * __this, BigInteger_t2346 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2346 * ModulusRing_Multiply_m13944 (ModulusRing_t2347 * __this, BigInteger_t2346 * ___a, BigInteger_t2346 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2346 * ModulusRing_Difference_m13945 (ModulusRing_t2347 * __this, BigInteger_t2346 * ___a, BigInteger_t2346 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2346 * ModulusRing_Pow_m13946 (ModulusRing_t2347 * __this, BigInteger_t2346 * ___a, BigInteger_t2346 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t2346 * ModulusRing_Pow_m13947 (ModulusRing_t2347 * __this, uint32_t ___b, BigInteger_t2346 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
