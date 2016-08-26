#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t1110175137;
// System.IO.Stream
struct Stream_t3255436806;

#include "mscorlib_System_IO_Stream3255436806.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream
struct  PartialInputStream_t2358850295  : public Stream_t3255436806
{
public:
	// ICSharpCode.SharpZipLib.Zip.ZipFile ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::zipFile_
	ZipFile_t1110175137 * ___zipFile__2;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::baseStream_
	Stream_t3255436806 * ___baseStream__3;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::start_
	int64_t ___start__4;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::length_
	int64_t ___length__5;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::readPos_
	int64_t ___readPos__6;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::end_
	int64_t ___end__7;

public:
	inline static int32_t get_offset_of_zipFile__2() { return static_cast<int32_t>(offsetof(PartialInputStream_t2358850295, ___zipFile__2)); }
	inline ZipFile_t1110175137 * get_zipFile__2() const { return ___zipFile__2; }
	inline ZipFile_t1110175137 ** get_address_of_zipFile__2() { return &___zipFile__2; }
	inline void set_zipFile__2(ZipFile_t1110175137 * value)
	{
		___zipFile__2 = value;
		Il2CppCodeGenWriteBarrier(&___zipFile__2, value);
	}

	inline static int32_t get_offset_of_baseStream__3() { return static_cast<int32_t>(offsetof(PartialInputStream_t2358850295, ___baseStream__3)); }
	inline Stream_t3255436806 * get_baseStream__3() const { return ___baseStream__3; }
	inline Stream_t3255436806 ** get_address_of_baseStream__3() { return &___baseStream__3; }
	inline void set_baseStream__3(Stream_t3255436806 * value)
	{
		___baseStream__3 = value;
		Il2CppCodeGenWriteBarrier(&___baseStream__3, value);
	}

	inline static int32_t get_offset_of_start__4() { return static_cast<int32_t>(offsetof(PartialInputStream_t2358850295, ___start__4)); }
	inline int64_t get_start__4() const { return ___start__4; }
	inline int64_t* get_address_of_start__4() { return &___start__4; }
	inline void set_start__4(int64_t value)
	{
		___start__4 = value;
	}

	inline static int32_t get_offset_of_length__5() { return static_cast<int32_t>(offsetof(PartialInputStream_t2358850295, ___length__5)); }
	inline int64_t get_length__5() const { return ___length__5; }
	inline int64_t* get_address_of_length__5() { return &___length__5; }
	inline void set_length__5(int64_t value)
	{
		___length__5 = value;
	}

	inline static int32_t get_offset_of_readPos__6() { return static_cast<int32_t>(offsetof(PartialInputStream_t2358850295, ___readPos__6)); }
	inline int64_t get_readPos__6() const { return ___readPos__6; }
	inline int64_t* get_address_of_readPos__6() { return &___readPos__6; }
	inline void set_readPos__6(int64_t value)
	{
		___readPos__6 = value;
	}

	inline static int32_t get_offset_of_end__7() { return static_cast<int32_t>(offsetof(PartialInputStream_t2358850295, ___end__7)); }
	inline int64_t get_end__7() const { return ___end__7; }
	inline int64_t* get_address_of_end__7() { return &___end__7; }
	inline void set_end__7(int64_t value)
	{
		___end__7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
