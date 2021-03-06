﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.IO.Stream
struct Stream_t3255436806;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct  InflaterInputBuffer_t3211561891  : public Il2CppObject
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::rawLength
	int32_t ___rawLength_0;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::rawData
	ByteU5BU5D_t3397334013* ___rawData_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::clearTextLength
	int32_t ___clearTextLength_2;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::clearText
	ByteU5BU5D_t3397334013* ___clearText_3;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::available
	int32_t ___available_4;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::cryptoTransform
	Il2CppObject * ___cryptoTransform_5;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::inputStream
	Stream_t3255436806 * ___inputStream_6;

public:
	inline static int32_t get_offset_of_rawLength_0() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t3211561891, ___rawLength_0)); }
	inline int32_t get_rawLength_0() const { return ___rawLength_0; }
	inline int32_t* get_address_of_rawLength_0() { return &___rawLength_0; }
	inline void set_rawLength_0(int32_t value)
	{
		___rawLength_0 = value;
	}

	inline static int32_t get_offset_of_rawData_1() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t3211561891, ___rawData_1)); }
	inline ByteU5BU5D_t3397334013* get_rawData_1() const { return ___rawData_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_rawData_1() { return &___rawData_1; }
	inline void set_rawData_1(ByteU5BU5D_t3397334013* value)
	{
		___rawData_1 = value;
		Il2CppCodeGenWriteBarrier(&___rawData_1, value);
	}

	inline static int32_t get_offset_of_clearTextLength_2() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t3211561891, ___clearTextLength_2)); }
	inline int32_t get_clearTextLength_2() const { return ___clearTextLength_2; }
	inline int32_t* get_address_of_clearTextLength_2() { return &___clearTextLength_2; }
	inline void set_clearTextLength_2(int32_t value)
	{
		___clearTextLength_2 = value;
	}

	inline static int32_t get_offset_of_clearText_3() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t3211561891, ___clearText_3)); }
	inline ByteU5BU5D_t3397334013* get_clearText_3() const { return ___clearText_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_clearText_3() { return &___clearText_3; }
	inline void set_clearText_3(ByteU5BU5D_t3397334013* value)
	{
		___clearText_3 = value;
		Il2CppCodeGenWriteBarrier(&___clearText_3, value);
	}

	inline static int32_t get_offset_of_available_4() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t3211561891, ___available_4)); }
	inline int32_t get_available_4() const { return ___available_4; }
	inline int32_t* get_address_of_available_4() { return &___available_4; }
	inline void set_available_4(int32_t value)
	{
		___available_4 = value;
	}

	inline static int32_t get_offset_of_cryptoTransform_5() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t3211561891, ___cryptoTransform_5)); }
	inline Il2CppObject * get_cryptoTransform_5() const { return ___cryptoTransform_5; }
	inline Il2CppObject ** get_address_of_cryptoTransform_5() { return &___cryptoTransform_5; }
	inline void set_cryptoTransform_5(Il2CppObject * value)
	{
		___cryptoTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___cryptoTransform_5, value);
	}

	inline static int32_t get_offset_of_inputStream_6() { return static_cast<int32_t>(offsetof(InflaterInputBuffer_t3211561891, ___inputStream_6)); }
	inline Stream_t3255436806 * get_inputStream_6() const { return ___inputStream_6; }
	inline Stream_t3255436806 ** get_address_of_inputStream_6() { return &___inputStream_6; }
	inline void set_inputStream_6(Stream_t3255436806 * value)
	{
		___inputStream_6 = value;
		Il2CppCodeGenWriteBarrier(&___inputStream_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
