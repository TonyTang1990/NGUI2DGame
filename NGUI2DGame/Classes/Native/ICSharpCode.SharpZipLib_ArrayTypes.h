#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t1764014695;

#include "mscorlib_System_Array3829468939.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1764014695.h"

#pragma once
// ICSharpCode.SharpZipLib.Zip.ZipEntry[]
struct ZipEntryU5BU5D_t2096538654  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ZipEntry_t1764014695 * m_Items[1];

public:
	inline ZipEntry_t1764014695 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ZipEntry_t1764014695 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ZipEntry_t1764014695 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
