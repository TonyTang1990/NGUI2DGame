#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Excel.Core.ZipWorker
struct  ZipWorker_t1305438663  : public Il2CppObject
{
public:
	// System.Byte[] Excel.Core.ZipWorker::buffer
	ByteU5BU5D_t3397334013* ___buffer_0;
	// System.Boolean Excel.Core.ZipWorker::disposed
	bool ___disposed_1;
	// System.Boolean Excel.Core.ZipWorker::_isCleaned
	bool ____isCleaned_2;
	// System.String Excel.Core.ZipWorker::_tempPath
	String_t* ____tempPath_3;
	// System.String Excel.Core.ZipWorker::_tempEnv
	String_t* ____tempEnv_4;
	// System.String Excel.Core.ZipWorker::_exceptionMessage
	String_t* ____exceptionMessage_5;
	// System.String Excel.Core.ZipWorker::_xlPath
	String_t* ____xlPath_6;
	// System.String Excel.Core.ZipWorker::_format
	String_t* ____format_7;
	// System.Boolean Excel.Core.ZipWorker::_isValid
	bool ____isValid_8;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(ZipWorker_t1305438663, ___buffer_0)); }
	inline ByteU5BU5D_t3397334013* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t3397334013* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(ZipWorker_t1305438663, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of__isCleaned_2() { return static_cast<int32_t>(offsetof(ZipWorker_t1305438663, ____isCleaned_2)); }
	inline bool get__isCleaned_2() const { return ____isCleaned_2; }
	inline bool* get_address_of__isCleaned_2() { return &____isCleaned_2; }
	inline void set__isCleaned_2(bool value)
	{
		____isCleaned_2 = value;
	}

	inline static int32_t get_offset_of__tempPath_3() { return static_cast<int32_t>(offsetof(ZipWorker_t1305438663, ____tempPath_3)); }
	inline String_t* get__tempPath_3() const { return ____tempPath_3; }
	inline String_t** get_address_of__tempPath_3() { return &____tempPath_3; }
	inline void set__tempPath_3(String_t* value)
	{
		____tempPath_3 = value;
		Il2CppCodeGenWriteBarrier(&____tempPath_3, value);
	}

	inline static int32_t get_offset_of__tempEnv_4() { return static_cast<int32_t>(offsetof(ZipWorker_t1305438663, ____tempEnv_4)); }
	inline String_t* get__tempEnv_4() const { return ____tempEnv_4; }
	inline String_t** get_address_of__tempEnv_4() { return &____tempEnv_4; }
	inline void set__tempEnv_4(String_t* value)
	{
		____tempEnv_4 = value;
		Il2CppCodeGenWriteBarrier(&____tempEnv_4, value);
	}

	inline static int32_t get_offset_of__exceptionMessage_5() { return static_cast<int32_t>(offsetof(ZipWorker_t1305438663, ____exceptionMessage_5)); }
	inline String_t* get__exceptionMessage_5() const { return ____exceptionMessage_5; }
	inline String_t** get_address_of__exceptionMessage_5() { return &____exceptionMessage_5; }
	inline void set__exceptionMessage_5(String_t* value)
	{
		____exceptionMessage_5 = value;
		Il2CppCodeGenWriteBarrier(&____exceptionMessage_5, value);
	}

	inline static int32_t get_offset_of__xlPath_6() { return static_cast<int32_t>(offsetof(ZipWorker_t1305438663, ____xlPath_6)); }
	inline String_t* get__xlPath_6() const { return ____xlPath_6; }
	inline String_t** get_address_of__xlPath_6() { return &____xlPath_6; }
	inline void set__xlPath_6(String_t* value)
	{
		____xlPath_6 = value;
		Il2CppCodeGenWriteBarrier(&____xlPath_6, value);
	}

	inline static int32_t get_offset_of__format_7() { return static_cast<int32_t>(offsetof(ZipWorker_t1305438663, ____format_7)); }
	inline String_t* get__format_7() const { return ____format_7; }
	inline String_t** get_address_of__format_7() { return &____format_7; }
	inline void set__format_7(String_t* value)
	{
		____format_7 = value;
		Il2CppCodeGenWriteBarrier(&____format_7, value);
	}

	inline static int32_t get_offset_of__isValid_8() { return static_cast<int32_t>(offsetof(ZipWorker_t1305438663, ____isValid_8)); }
	inline bool get__isValid_8() const { return ____isValid_8; }
	inline bool* get_address_of__isValid_8() { return &____isValid_8; }
	inline void set__isValid_8(bool value)
	{
		____isValid_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
