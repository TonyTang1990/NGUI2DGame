#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler
struct KeysRequiredEventHandler_t4231608811;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// ICSharpCode.SharpZipLib.Zip.ZipEntry[]
struct ZipEntryU5BU5D_t2096538654;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// ICSharpCode.SharpZipLib.Zip.IArchiveStorage
struct IArchiveStorage_t26540254;
// ICSharpCode.SharpZipLib.Zip.IDynamicDataSource
struct IDynamicDataSource_t2637208857;
// ICSharpCode.SharpZipLib.Zip.IEntryFactory
struct IEntryFactory_t1879195925;

#include "mscorlib_System_Object2689449295.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi2471403746.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipFile
struct  ZipFile_t1110175137  : public Il2CppObject
{
public:
	// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler ICSharpCode.SharpZipLib.Zip.ZipFile::KeysRequired
	KeysRequiredEventHandler_t4231608811 * ___KeysRequired_0;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::isDisposed_
	bool ___isDisposed__1;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::comment_
	String_t* ___comment__2;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::baseStream_
	Stream_t3255436806 * ___baseStream__3;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::isStreamOwner
	bool ___isStreamOwner_4;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::offsetOfFirstEntry
	int64_t ___offsetOfFirstEntry_5;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry[] ICSharpCode.SharpZipLib.Zip.ZipFile::entries_
	ZipEntryU5BU5D_t2096538654* ___entries__6;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipFile::key
	ByteU5BU5D_t3397334013* ___key_7;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::isNewArchive_
	bool ___isNewArchive__8;
	// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipFile::useZip64_
	int32_t ___useZip64__9;
	// System.Collections.ArrayList ICSharpCode.SharpZipLib.Zip.ZipFile::updates_
	ArrayList_t4252133567 * ___updates__10;
	// System.Collections.Hashtable ICSharpCode.SharpZipLib.Zip.ZipFile::updateIndex_
	Hashtable_t909839986 * ___updateIndex__11;
	// ICSharpCode.SharpZipLib.Zip.IArchiveStorage ICSharpCode.SharpZipLib.Zip.ZipFile::archiveStorage_
	Il2CppObject * ___archiveStorage__12;
	// ICSharpCode.SharpZipLib.Zip.IDynamicDataSource ICSharpCode.SharpZipLib.Zip.ZipFile::updateDataSource_
	Il2CppObject * ___updateDataSource__13;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::bufferSize_
	int32_t ___bufferSize__14;
	// ICSharpCode.SharpZipLib.Zip.IEntryFactory ICSharpCode.SharpZipLib.Zip.ZipFile::updateEntryFactory_
	Il2CppObject * ___updateEntryFactory__15;

public:
	inline static int32_t get_offset_of_KeysRequired_0() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___KeysRequired_0)); }
	inline KeysRequiredEventHandler_t4231608811 * get_KeysRequired_0() const { return ___KeysRequired_0; }
	inline KeysRequiredEventHandler_t4231608811 ** get_address_of_KeysRequired_0() { return &___KeysRequired_0; }
	inline void set_KeysRequired_0(KeysRequiredEventHandler_t4231608811 * value)
	{
		___KeysRequired_0 = value;
		Il2CppCodeGenWriteBarrier(&___KeysRequired_0, value);
	}

	inline static int32_t get_offset_of_isDisposed__1() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___isDisposed__1)); }
	inline bool get_isDisposed__1() const { return ___isDisposed__1; }
	inline bool* get_address_of_isDisposed__1() { return &___isDisposed__1; }
	inline void set_isDisposed__1(bool value)
	{
		___isDisposed__1 = value;
	}

	inline static int32_t get_offset_of_comment__2() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___comment__2)); }
	inline String_t* get_comment__2() const { return ___comment__2; }
	inline String_t** get_address_of_comment__2() { return &___comment__2; }
	inline void set_comment__2(String_t* value)
	{
		___comment__2 = value;
		Il2CppCodeGenWriteBarrier(&___comment__2, value);
	}

	inline static int32_t get_offset_of_baseStream__3() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___baseStream__3)); }
	inline Stream_t3255436806 * get_baseStream__3() const { return ___baseStream__3; }
	inline Stream_t3255436806 ** get_address_of_baseStream__3() { return &___baseStream__3; }
	inline void set_baseStream__3(Stream_t3255436806 * value)
	{
		___baseStream__3 = value;
		Il2CppCodeGenWriteBarrier(&___baseStream__3, value);
	}

	inline static int32_t get_offset_of_isStreamOwner_4() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___isStreamOwner_4)); }
	inline bool get_isStreamOwner_4() const { return ___isStreamOwner_4; }
	inline bool* get_address_of_isStreamOwner_4() { return &___isStreamOwner_4; }
	inline void set_isStreamOwner_4(bool value)
	{
		___isStreamOwner_4 = value;
	}

	inline static int32_t get_offset_of_offsetOfFirstEntry_5() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___offsetOfFirstEntry_5)); }
	inline int64_t get_offsetOfFirstEntry_5() const { return ___offsetOfFirstEntry_5; }
	inline int64_t* get_address_of_offsetOfFirstEntry_5() { return &___offsetOfFirstEntry_5; }
	inline void set_offsetOfFirstEntry_5(int64_t value)
	{
		___offsetOfFirstEntry_5 = value;
	}

	inline static int32_t get_offset_of_entries__6() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___entries__6)); }
	inline ZipEntryU5BU5D_t2096538654* get_entries__6() const { return ___entries__6; }
	inline ZipEntryU5BU5D_t2096538654** get_address_of_entries__6() { return &___entries__6; }
	inline void set_entries__6(ZipEntryU5BU5D_t2096538654* value)
	{
		___entries__6 = value;
		Il2CppCodeGenWriteBarrier(&___entries__6, value);
	}

	inline static int32_t get_offset_of_key_7() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___key_7)); }
	inline ByteU5BU5D_t3397334013* get_key_7() const { return ___key_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_key_7() { return &___key_7; }
	inline void set_key_7(ByteU5BU5D_t3397334013* value)
	{
		___key_7 = value;
		Il2CppCodeGenWriteBarrier(&___key_7, value);
	}

	inline static int32_t get_offset_of_isNewArchive__8() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___isNewArchive__8)); }
	inline bool get_isNewArchive__8() const { return ___isNewArchive__8; }
	inline bool* get_address_of_isNewArchive__8() { return &___isNewArchive__8; }
	inline void set_isNewArchive__8(bool value)
	{
		___isNewArchive__8 = value;
	}

	inline static int32_t get_offset_of_useZip64__9() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___useZip64__9)); }
	inline int32_t get_useZip64__9() const { return ___useZip64__9; }
	inline int32_t* get_address_of_useZip64__9() { return &___useZip64__9; }
	inline void set_useZip64__9(int32_t value)
	{
		___useZip64__9 = value;
	}

	inline static int32_t get_offset_of_updates__10() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___updates__10)); }
	inline ArrayList_t4252133567 * get_updates__10() const { return ___updates__10; }
	inline ArrayList_t4252133567 ** get_address_of_updates__10() { return &___updates__10; }
	inline void set_updates__10(ArrayList_t4252133567 * value)
	{
		___updates__10 = value;
		Il2CppCodeGenWriteBarrier(&___updates__10, value);
	}

	inline static int32_t get_offset_of_updateIndex__11() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___updateIndex__11)); }
	inline Hashtable_t909839986 * get_updateIndex__11() const { return ___updateIndex__11; }
	inline Hashtable_t909839986 ** get_address_of_updateIndex__11() { return &___updateIndex__11; }
	inline void set_updateIndex__11(Hashtable_t909839986 * value)
	{
		___updateIndex__11 = value;
		Il2CppCodeGenWriteBarrier(&___updateIndex__11, value);
	}

	inline static int32_t get_offset_of_archiveStorage__12() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___archiveStorage__12)); }
	inline Il2CppObject * get_archiveStorage__12() const { return ___archiveStorage__12; }
	inline Il2CppObject ** get_address_of_archiveStorage__12() { return &___archiveStorage__12; }
	inline void set_archiveStorage__12(Il2CppObject * value)
	{
		___archiveStorage__12 = value;
		Il2CppCodeGenWriteBarrier(&___archiveStorage__12, value);
	}

	inline static int32_t get_offset_of_updateDataSource__13() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___updateDataSource__13)); }
	inline Il2CppObject * get_updateDataSource__13() const { return ___updateDataSource__13; }
	inline Il2CppObject ** get_address_of_updateDataSource__13() { return &___updateDataSource__13; }
	inline void set_updateDataSource__13(Il2CppObject * value)
	{
		___updateDataSource__13 = value;
		Il2CppCodeGenWriteBarrier(&___updateDataSource__13, value);
	}

	inline static int32_t get_offset_of_bufferSize__14() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___bufferSize__14)); }
	inline int32_t get_bufferSize__14() const { return ___bufferSize__14; }
	inline int32_t* get_address_of_bufferSize__14() { return &___bufferSize__14; }
	inline void set_bufferSize__14(int32_t value)
	{
		___bufferSize__14 = value;
	}

	inline static int32_t get_offset_of_updateEntryFactory__15() { return static_cast<int32_t>(offsetof(ZipFile_t1110175137, ___updateEntryFactory__15)); }
	inline Il2CppObject * get_updateEntryFactory__15() const { return ___updateEntryFactory__15; }
	inline Il2CppObject ** get_address_of_updateEntryFactory__15() { return &___updateEntryFactory__15; }
	inline void set_updateEntryFactory__15(Il2CppObject * value)
	{
		___updateEntryFactory__15 = value;
		Il2CppCodeGenWriteBarrier(&___updateEntryFactory__15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
