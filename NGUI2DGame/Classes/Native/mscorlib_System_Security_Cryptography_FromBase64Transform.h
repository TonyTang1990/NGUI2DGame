#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.FromBase64TransformMode
#include "mscorlib_System_Security_Cryptography_FromBase64TransformMod.h"
// System.Security.Cryptography.FromBase64Transform
struct  FromBase64Transform_t1793  : public Object_t
{
	// System.Security.Cryptography.FromBase64TransformMode System.Security.Cryptography.FromBase64Transform::mode
	int32_t ___mode_0;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::accumulator
	ByteU5BU5D_t159* ___accumulator_1;
	// System.Int32 System.Security.Cryptography.FromBase64Transform::accPtr
	int32_t ___accPtr_2;
	// System.Boolean System.Security.Cryptography.FromBase64Transform::m_disposed
	bool ___m_disposed_3;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::lookupTable
	ByteU5BU5D_t159* ___lookupTable_4;
};
