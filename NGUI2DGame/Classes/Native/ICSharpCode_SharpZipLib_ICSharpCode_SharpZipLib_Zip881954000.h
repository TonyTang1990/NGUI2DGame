#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_EventArgs3289624707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs
struct  KeysRequiredEventArgs_t881954000  : public EventArgs_t3289624707
{
public:
	// System.String ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::fileName
	String_t* ___fileName_1;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::key
	ByteU5BU5D_t3397334013* ___key_2;

public:
	inline static int32_t get_offset_of_fileName_1() { return static_cast<int32_t>(offsetof(KeysRequiredEventArgs_t881954000, ___fileName_1)); }
	inline String_t* get_fileName_1() const { return ___fileName_1; }
	inline String_t** get_address_of_fileName_1() { return &___fileName_1; }
	inline void set_fileName_1(String_t* value)
	{
		___fileName_1 = value;
		Il2CppCodeGenWriteBarrier(&___fileName_1, value);
	}

	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(KeysRequiredEventArgs_t881954000, ___key_2)); }
	inline ByteU5BU5D_t3397334013* get_key_2() const { return ___key_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(ByteU5BU5D_t3397334013* value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier(&___key_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
