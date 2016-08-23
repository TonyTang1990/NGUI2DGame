#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1215;
// Mono.Math.BigInteger
struct BigInteger_t1214;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m5438 (ModulusRing_t1215 * __this, BigInteger_t1214 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m5439 (ModulusRing_t1215 * __this, BigInteger_t1214 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1214 * ModulusRing_Multiply_m5440 (ModulusRing_t1215 * __this, BigInteger_t1214 * ___a, BigInteger_t1214 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1214 * ModulusRing_Difference_m5441 (ModulusRing_t1215 * __this, BigInteger_t1214 * ___a, BigInteger_t1214 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1214 * ModulusRing_Pow_m5442 (ModulusRing_t1215 * __this, BigInteger_t1214 * ___a, BigInteger_t1214 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1214 * ModulusRing_Pow_m5443 (ModulusRing_t1215 * __this, uint32_t ___b, BigInteger_t1214 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
