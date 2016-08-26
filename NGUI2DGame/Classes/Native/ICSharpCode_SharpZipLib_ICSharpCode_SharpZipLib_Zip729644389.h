#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Zip.ZipEntry[]
struct ZipEntryU5BU5D_t2096538654;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator
struct  ZipEntryEnumerator_t729644389  : public Il2CppObject
{
public:
	// ICSharpCode.SharpZipLib.Zip.ZipEntry[] ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::array
	ZipEntryU5BU5D_t2096538654* ___array_0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ZipEntryEnumerator_t729644389, ___array_0)); }
	inline ZipEntryU5BU5D_t2096538654* get_array_0() const { return ___array_0; }
	inline ZipEntryU5BU5D_t2096538654** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(ZipEntryU5BU5D_t2096538654* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier(&___array_0, value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ZipEntryEnumerator_t729644389, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
