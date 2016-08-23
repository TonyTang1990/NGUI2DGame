#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1384;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1338;
// System.Byte[]
struct ByteU5BU5D_t159;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m6420 (RSAPKCS1KeyExchangeFormatter_t1384 * __this, AsymmetricAlgorithm_t1338 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t159* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m17946 (RSAPKCS1KeyExchangeFormatter_t1384 * __this, ByteU5BU5D_t159* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m17947 (RSAPKCS1KeyExchangeFormatter_t1384 * __this, AsymmetricAlgorithm_t1338 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
