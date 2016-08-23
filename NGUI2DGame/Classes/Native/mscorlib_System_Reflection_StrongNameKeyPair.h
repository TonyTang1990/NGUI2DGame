#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t159;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t1243;
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t2579  : public Object_t
{
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t159* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t159* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t1243 * ____rsa_4;
};
