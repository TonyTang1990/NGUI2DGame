#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Core.INameTransform
struct INameTransform_t275444258;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipEntryFactory
struct  ZipEntryFactory_t3498628499  : public Il2CppObject
{
public:
	// ICSharpCode.SharpZipLib.Core.INameTransform ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::nameTransform_
	Il2CppObject * ___nameTransform__0;
	// System.DateTime ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::fixedDateTime_
	DateTime_t693205669  ___fixedDateTime__1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::getAttributes_
	int32_t ___getAttributes__2;

public:
	inline static int32_t get_offset_of_nameTransform__0() { return static_cast<int32_t>(offsetof(ZipEntryFactory_t3498628499, ___nameTransform__0)); }
	inline Il2CppObject * get_nameTransform__0() const { return ___nameTransform__0; }
	inline Il2CppObject ** get_address_of_nameTransform__0() { return &___nameTransform__0; }
	inline void set_nameTransform__0(Il2CppObject * value)
	{
		___nameTransform__0 = value;
		Il2CppCodeGenWriteBarrier(&___nameTransform__0, value);
	}

	inline static int32_t get_offset_of_fixedDateTime__1() { return static_cast<int32_t>(offsetof(ZipEntryFactory_t3498628499, ___fixedDateTime__1)); }
	inline DateTime_t693205669  get_fixedDateTime__1() const { return ___fixedDateTime__1; }
	inline DateTime_t693205669 * get_address_of_fixedDateTime__1() { return &___fixedDateTime__1; }
	inline void set_fixedDateTime__1(DateTime_t693205669  value)
	{
		___fixedDateTime__1 = value;
	}

	inline static int32_t get_offset_of_getAttributes__2() { return static_cast<int32_t>(offsetof(ZipEntryFactory_t3498628499, ___getAttributes__2)); }
	inline int32_t get_getAttributes__2() const { return ___getAttributes__2; }
	inline int32_t* get_address_of_getAttributes__2() { return &___getAttributes__2; }
	inline void set_getAttributes__2(int32_t value)
	{
		___getAttributes__2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
