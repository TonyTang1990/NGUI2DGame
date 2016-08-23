#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "ICSharpCode_SharpZipLib_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "ICSharpCode_SharpZipLib_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// ICSharpCode.SharpZipLib.SharpZipBaseException
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_SharpZipBase.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.SharpZipBaseException
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_SharpZipBaseMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.String
#include "mscorlib_System_String.h"
// System.ApplicationException
#include "mscorlib_System_ApplicationExceptionMethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.SharpZipBaseException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SharpZipBaseException__ctor_m10058 (SharpZipBaseException_t1816 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		ApplicationException__ctor_m10278(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.SharpZipBaseException::.ctor()
extern "C" void SharpZipBaseException__ctor_m10059 (SharpZipBaseException_t1816 * __this, const MethodInfo* method)
{
	{
		ApplicationException__ctor_m10279(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.SharpZipBaseException::.ctor(System.String)
extern "C" void SharpZipBaseException__ctor_m10060 (SharpZipBaseException_t1816 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		ApplicationException__ctor_m10280(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// ICSharpCode.SharpZipLib.Checksums.Adler32
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Checksums_Ad.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Checksums.Adler32
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Checksums_AdMethodDeclarations.h"

// System.Int64
#include "mscorlib_System_Int64.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"


// System.Int64 ICSharpCode.SharpZipLib.Checksums.Adler32::get_Value()
extern "C" int64_t Adler32_get_Value_m10061 (Adler32_t1818 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___checksum_0);
		return (((uint64_t)L_0));
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksums.Adler32::.ctor()
extern "C" void Adler32__ctor_m10062 (Adler32_t1818 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Adler32_Reset_m10063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksums.Adler32::Reset()
extern "C" void Adler32_Reset_m10063 (Adler32_t1818 * __this, const MethodInfo* method)
{
	{
		__this->___checksum_0 = 1;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksums.Adler32::Update(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" void Adler32_Update_m10064 (Adler32_t1818 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_t159* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral1447, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral1379, (String_t*) &_stringLiteral2776, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = ___count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_5 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_5, (String_t*) &_stringLiteral1110, (String_t*) &_stringLiteral2776, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = ___offset;
		ByteU5BU5D_t159* L_7 = ___buffer;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_8 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_8, (String_t*) &_stringLiteral1379, (String_t*) &_stringLiteral2777, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004c:
	{
		int32_t L_9 = ___offset;
		int32_t L_10 = ___count;
		ByteU5BU5D_t159* L_11 = ___buffer;
		NullCheck(L_11);
		if ((((int32_t)((int32_t)((int32_t)L_9+(int32_t)L_10))) <= ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0064;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_12 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_12, (String_t*) &_stringLiteral1110, (String_t*) &_stringLiteral2778, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0064:
	{
		uint32_t L_13 = (__this->___checksum_0);
		V_0 = ((int32_t)((int32_t)L_13&(int32_t)((int32_t)65535)));
		uint32_t L_14 = (__this->___checksum_0);
		V_1 = ((int32_t)((uint32_t)L_14>>((int32_t)16)));
		goto IL_00bd;
	}

IL_007d:
	{
		V_2 = ((int32_t)3800);
		int32_t L_15 = V_2;
		int32_t L_16 = ___count;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_17 = ___count;
		V_2 = L_17;
	}

IL_0089:
	{
		int32_t L_18 = ___count;
		int32_t L_19 = V_2;
		___count = ((int32_t)((int32_t)L_18-(int32_t)L_19));
		goto IL_00a5;
	}

IL_0090:
	{
		uint32_t L_20 = V_0;
		ByteU5BU5D_t159* L_21 = ___buffer;
		int32_t L_22 = ___offset;
		int32_t L_23 = L_22;
		___offset = ((int32_t)((int32_t)L_23+(int32_t)1));
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		int32_t L_24 = L_23;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_24))&(int32_t)((int32_t)255)))));
		uint32_t L_25 = V_1;
		uint32_t L_26 = V_0;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)L_26));
	}

IL_00a5:
	{
		int32_t L_27 = V_2;
		int32_t L_28 = ((int32_t)((int32_t)L_27-(int32_t)1));
		V_2 = L_28;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		uint32_t L_29 = V_0;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_29%(uint32_t)(int32_t)((int32_t)65521)));
		uint32_t L_30 = V_1;
		V_1 = ((int32_t)((uint32_t)(int32_t)L_30%(uint32_t)(int32_t)((int32_t)65521)));
	}

IL_00bd:
	{
		int32_t L_31 = ___count;
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		uint32_t L_32 = V_1;
		uint32_t L_33 = V_0;
		__this->___checksum_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_32<<(int32_t)((int32_t)16)))|(int32_t)L_33));
		return;
	}
}
// ICSharpCode.SharpZipLib.Checksums.Crc32
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Checksums_Cr.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Checksums.Crc32
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Checksums_CrMethodDeclarations.h"

// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_5.h"
// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=1024
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_5MethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"


// System.UInt32 ICSharpCode.SharpZipLib.Checksums.Crc32::ComputeCrc32(System.UInt32,System.Byte)
extern TypeInfo* Crc32_t1819_il2cpp_TypeInfo_var;
extern "C" uint32_t Crc32_ComputeCrc32_m10065 (Object_t * __this /* static, unused */, uint32_t ___oldCrc, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Crc32_t1819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4140);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Crc32_t1819_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t1003* L_0 = ((Crc32_t1819_StaticFields*)Crc32_t1819_il2cpp_TypeInfo_var->static_fields)->___CrcTable_0;
		uint32_t L_1 = ___oldCrc;
		uint8_t L_2 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (((uintptr_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_2))&(int32_t)((int32_t)255))))));
		uintptr_t L_3 = (((uintptr_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_2))&(int32_t)((int32_t)255)))));
		uint32_t L_4 = ___oldCrc;
		return ((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_0, L_3))^(int32_t)((int32_t)((uint32_t)L_4>>8))));
	}
}
// System.Void ICSharpCode.SharpZipLib.Checksums.Crc32::.cctor()
extern TypeInfo* UInt32U5BU5D_t1003_il2cpp_TypeInfo_var;
extern TypeInfo* Crc32_t1819_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004bcU2D1_0_FieldInfo_var;
extern "C" void Crc32__cctor_m10066 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt32U5BU5D_t1003_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2017);
		Crc32_t1819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4140);
		U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004bcU2D1_0_FieldInfo_var = il2cpp_codegen_field_info_from_index(4141, 0);
		s_Il2CppMethodIntialized = true;
	}
	{
		UInt32U5BU5D_t1003* L_0 = ((UInt32U5BU5D_t1003*)SZArrayNew(UInt32U5BU5D_t1003_il2cpp_TypeInfo_var, ((int32_t)256)));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004bcU2D1_0_FieldInfo_var), /*hidden argument*/NULL);
		((Crc32_t1819_StaticFields*)Crc32_t1819_il2cpp_TypeInfo_var->static_fields)->___CrcTable_0 = L_0;
		return;
	}
}
// ICSharpCode.SharpZipLib.Core.StreamUtils
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Core_StreamU.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Core.StreamUtils
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Core_StreamUMethodDeclarations.h"

// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.EndOfStreamException
#include "mscorlib_System_IO_EndOfStreamException.h"
// System.IO.Stream
#include "mscorlib_System_IO_StreamMethodDeclarations.h"
// System.IO.EndOfStreamException
#include "mscorlib_System_IO_EndOfStreamExceptionMethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::ReadFully(System.IO.Stream,System.Byte[])
extern "C" void StreamUtils_ReadFully_m10067 (Object_t * __this /* static, unused */, Stream_t844 * ___stream, ByteU5BU5D_t159* ___buffer, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = ___stream;
		ByteU5BU5D_t159* L_1 = ___buffer;
		ByteU5BU5D_t159* L_2 = ___buffer;
		NullCheck(L_2);
		StreamUtils_ReadFully_m10068(NULL /*static, unused*/, L_0, L_1, 0, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::ReadFully(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* EndOfStreamException_t1861_il2cpp_TypeInfo_var;
extern "C" void StreamUtils_ReadFully_m10068 (Object_t * __this /* static, unused */, Stream_t844 * ___stream, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		EndOfStreamException_t1861_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4142);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Stream_t844 * L_0 = ___stream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral2779, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ByteU5BU5D_t159* L_2 = ___buffer;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t692 * L_3 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_3, (String_t*) &_stringLiteral1447, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = ___offset;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = ___offset;
		ByteU5BU5D_t159* L_6 = ___buffer;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_0031;
		}
	}

IL_0026:
	{
		ArgumentOutOfRangeException_t694 * L_7 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_7, (String_t*) &_stringLiteral1379, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		int32_t L_8 = ___count;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_9 = ___offset;
		int32_t L_10 = ___count;
		ByteU5BU5D_t159* L_11 = ___buffer;
		NullCheck(L_11);
		if ((((int32_t)((int32_t)((int32_t)L_9+(int32_t)L_10))) <= ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0066;
		}
	}

IL_003d:
	{
		ArgumentOutOfRangeException_t694 * L_12 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_12, (String_t*) &_stringLiteral1110, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0048:
	{
		Stream_t844 * L_13 = ___stream;
		ByteU5BU5D_t159* L_14 = ___buffer;
		int32_t L_15 = ___offset;
		int32_t L_16 = ___count;
		NullCheck(L_13);
		int32_t L_17 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t159*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, L_15, L_16);
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		EndOfStreamException_t1861 * L_19 = (EndOfStreamException_t1861 *)il2cpp_codegen_object_new (EndOfStreamException_t1861_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_m10281(L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_005c:
	{
		int32_t L_20 = ___offset;
		int32_t L_21 = V_0;
		___offset = ((int32_t)((int32_t)L_20+(int32_t)L_21));
		int32_t L_22 = ___count;
		int32_t L_23 = V_0;
		___count = ((int32_t)((int32_t)L_22-(int32_t)L_23));
	}

IL_0066:
	{
		int32_t L_24 = ___count;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
// ICSharpCode.SharpZipLib.Encryption.PkzipClassic
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_P.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Encryption.PkzipClassic
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_PMethodDeclarations.h"

// System.Security.Cryptography.SymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithmMethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassic::.ctor()
extern "C" void PkzipClassic__ctor_m10069 (PkzipClassic_t1821 * __this, const MethodInfo* method)
{
	{
		SymmetricAlgorithm__ctor_m6350(__this, /*hidden argument*/NULL);
		return;
	}
}
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_P_0.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_P_0MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"


// System.Byte ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::TransformByte()
extern "C" uint8_t PkzipClassicCryptoBase_TransformByte_m10070 (PkzipClassicCryptoBase_t1822 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t1003* L_0 = (__this->___keys_0);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 2);
		int32_t L_1 = 2;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_0, L_1))&(int32_t)((int32_t)65535)))|(int32_t)2));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		return (((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_2*(int32_t)((int32_t)((int32_t)L_3^(int32_t)1))))>>8))));
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::SetKeys(System.Byte[])
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32U5BU5D_t1003_il2cpp_TypeInfo_var;
extern "C" void PkzipClassicCryptoBase_SetKeys_m10071 (PkzipClassicCryptoBase_t1822 * __this, ByteU5BU5D_t159* ___keyData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		UInt32U5BU5D_t1003_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2017);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t159* L_0 = ___keyData;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral2780, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ByteU5BU5D_t159* L_2 = ___keyData;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) == ((int32_t)((int32_t)12))))
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*) &_stringLiteral2781, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		__this->___keys_0 = ((UInt32U5BU5D_t1003*)SZArrayNew(UInt32U5BU5D_t1003_il2cpp_TypeInfo_var, 3));
		UInt32U5BU5D_t1003* L_4 = (__this->___keys_0);
		ByteU5BU5D_t159* L_5 = ___keyData;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		int32_t L_6 = 3;
		ByteU5BU5D_t159* L_7 = ___keyData;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		int32_t L_8 = 2;
		ByteU5BU5D_t159* L_9 = ___keyData;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		int32_t L_10 = 1;
		ByteU5BU5D_t159* L_11 = ___keyData;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		int32_t L_12 = 0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_4, 0)) = (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_6))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_8))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12))));
		UInt32U5BU5D_t1003* L_13 = (__this->___keys_0);
		ByteU5BU5D_t159* L_14 = ___keyData;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		int32_t L_15 = 7;
		ByteU5BU5D_t159* L_16 = ___keyData;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 6);
		int32_t L_17 = 6;
		ByteU5BU5D_t159* L_18 = ___keyData;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		int32_t L_19 = 5;
		ByteU5BU5D_t159* L_20 = ___keyData;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 4);
		int32_t L_21 = 4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_13, 1)) = (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_17))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_18, L_19))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21))));
		UInt32U5BU5D_t1003* L_22 = (__this->___keys_0);
		ByteU5BU5D_t159* L_23 = ___keyData;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)11));
		int32_t L_24 = ((int32_t)11);
		ByteU5BU5D_t159* L_25 = ___keyData;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)10));
		int32_t L_26 = ((int32_t)10);
		ByteU5BU5D_t159* L_27 = ___keyData;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)9));
		int32_t L_28 = ((int32_t)9);
		ByteU5BU5D_t159* L_29 = ___keyData;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 8);
		int32_t L_30 = 8;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_22, 2)) = (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_24))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_25, L_26))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_28))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_30))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::UpdateKeys(System.Byte)
extern TypeInfo* Crc32_t1819_il2cpp_TypeInfo_var;
extern "C" void PkzipClassicCryptoBase_UpdateKeys_m10072 (PkzipClassicCryptoBase_t1822 * __this, uint8_t ___ch, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Crc32_t1819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4140);
		s_Il2CppMethodIntialized = true;
	}
	{
		UInt32U5BU5D_t1003* L_0 = (__this->___keys_0);
		UInt32U5BU5D_t1003* L_1 = (__this->___keys_0);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		uint8_t L_3 = ___ch;
		IL2CPP_RUNTIME_CLASS_INIT(Crc32_t1819_il2cpp_TypeInfo_var);
		uint32_t L_4 = Crc32_ComputeCrc32_m10065(NULL /*static, unused*/, (*(uint32_t*)(uint32_t*)SZArrayLdElema(L_1, L_2)), L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_0, 0)) = (uint32_t)L_4;
		UInt32U5BU5D_t1003* L_5 = (__this->___keys_0);
		UInt32U5BU5D_t1003* L_6 = (__this->___keys_0);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		int32_t L_7 = 1;
		UInt32U5BU5D_t1003* L_8 = (__this->___keys_0);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t L_9 = 0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_5, 1)) = (uint32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_6, L_7))+(int32_t)(((uint8_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_8, L_9))))));
		UInt32U5BU5D_t1003* L_10 = (__this->___keys_0);
		UInt32U5BU5D_t1003* L_11 = (__this->___keys_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		int32_t L_12 = 1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_10, 1)) = (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_11, L_12))*(int32_t)((int32_t)134775813)))+(int32_t)1));
		UInt32U5BU5D_t1003* L_13 = (__this->___keys_0);
		UInt32U5BU5D_t1003* L_14 = (__this->___keys_0);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		int32_t L_15 = 2;
		UInt32U5BU5D_t1003* L_16 = (__this->___keys_0);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		int32_t L_17 = 1;
		uint32_t L_18 = Crc32_ComputeCrc32_m10065(NULL /*static, unused*/, (*(uint32_t*)(uint32_t*)SZArrayLdElema(L_14, L_15)), (((uint8_t)((int32_t)((uint32_t)(*(uint32_t*)(uint32_t*)SZArrayLdElema(L_16, L_17))>>((int32_t)24))))), /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 2);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_13, 2)) = (uint32_t)L_18;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::Reset()
extern "C" void PkzipClassicCryptoBase_Reset_m10073 (PkzipClassicCryptoBase_t1822 * __this, const MethodInfo* method)
{
	{
		UInt32U5BU5D_t1003* L_0 = (__this->___keys_0);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_0, 0)) = (uint32_t)0;
		UInt32U5BU5D_t1003* L_1 = (__this->___keys_0);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_1, 1)) = (uint32_t)0;
		UInt32U5BU5D_t1003* L_2 = (__this->___keys_0);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_2, 2)) = (uint32_t)0;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase::.ctor()
extern "C" void PkzipClassicCryptoBase__ctor_m10074 (PkzipClassicCryptoBase_t1822 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_P_1.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_P_1MethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"


// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::.ctor(System.Byte[])
extern "C" void PkzipClassicEncryptCryptoTransform__ctor_m10075 (PkzipClassicEncryptCryptoTransform_t1823 * __this, ByteU5BU5D_t159* ___keyBlock, const MethodInfo* method)
{
	{
		PkzipClassicCryptoBase__ctor_m10074(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_0 = ___keyBlock;
		PkzipClassicCryptoBase_SetKeys_m10071(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t159* PkzipClassicEncryptCryptoTransform_TransformFinalBlock_m10076 (PkzipClassicEncryptCryptoTransform_t1823 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t159* V_0 = {0};
	{
		int32_t L_0 = ___inputCount;
		V_0 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, L_0));
		ByteU5BU5D_t159* L_1 = ___inputBuffer;
		int32_t L_2 = ___inputOffset;
		int32_t L_3 = ___inputCount;
		ByteU5BU5D_t159* L_4 = V_0;
		PkzipClassicEncryptCryptoTransform_TransformBlock_m10077(__this, L_1, L_2, L_3, L_4, 0, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_5 = V_0;
		return L_5;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t PkzipClassicEncryptCryptoTransform_TransformBlock_m10077 (PkzipClassicEncryptCryptoTransform_t1823 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t159* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = ___inputOffset;
		V_0 = L_0;
		goto IL_0028;
	}

IL_0004:
	{
		ByteU5BU5D_t159* L_1 = ___inputBuffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		ByteU5BU5D_t159* L_4 = ___outputBuffer;
		int32_t L_5 = ___outputOffset;
		int32_t L_6 = L_5;
		___outputOffset = ((int32_t)((int32_t)L_6+(int32_t)1));
		ByteU5BU5D_t159* L_7 = ___inputBuffer;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		uint8_t L_10 = PkzipClassicCryptoBase_TransformByte_m10070(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_6)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))^(int32_t)L_10))));
		uint8_t L_11 = V_1;
		PkzipClassicCryptoBase_UpdateKeys_m10072(__this, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = ___inputOffset;
		int32_t L_15 = ___inputCount;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)L_14+(int32_t)L_15)))))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_16 = ___inputCount;
		return L_16;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_CanReuseTransform()
extern "C" bool PkzipClassicEncryptCryptoTransform_get_CanReuseTransform_m10078 (PkzipClassicEncryptCryptoTransform_t1823 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_InputBlockSize()
extern "C" int32_t PkzipClassicEncryptCryptoTransform_get_InputBlockSize_m10079 (PkzipClassicEncryptCryptoTransform_t1823 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_OutputBlockSize()
extern "C" int32_t PkzipClassicEncryptCryptoTransform_get_OutputBlockSize_m10080 (PkzipClassicEncryptCryptoTransform_t1823 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::get_CanTransformMultipleBlocks()
extern "C" bool PkzipClassicEncryptCryptoTransform_get_CanTransformMultipleBlocks_m10081 (PkzipClassicEncryptCryptoTransform_t1823 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicEncryptCryptoTransform::Dispose()
extern "C" void PkzipClassicEncryptCryptoTransform_Dispose_m10082 (PkzipClassicEncryptCryptoTransform_t1823 * __this, const MethodInfo* method)
{
	{
		PkzipClassicCryptoBase_Reset_m10073(__this, /*hidden argument*/NULL);
		return;
	}
}
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_P_2.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_P_2MethodDeclarations.h"



// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::.ctor(System.Byte[])
extern "C" void PkzipClassicDecryptCryptoTransform__ctor_m10083 (PkzipClassicDecryptCryptoTransform_t1824 * __this, ByteU5BU5D_t159* ___keyBlock, const MethodInfo* method)
{
	{
		PkzipClassicCryptoBase__ctor_m10074(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_0 = ___keyBlock;
		PkzipClassicCryptoBase_SetKeys_m10071(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t159* PkzipClassicDecryptCryptoTransform_TransformFinalBlock_m10084 (PkzipClassicDecryptCryptoTransform_t1824 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t159* V_0 = {0};
	{
		int32_t L_0 = ___inputCount;
		V_0 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, L_0));
		ByteU5BU5D_t159* L_1 = ___inputBuffer;
		int32_t L_2 = ___inputOffset;
		int32_t L_3 = ___inputCount;
		ByteU5BU5D_t159* L_4 = V_0;
		PkzipClassicDecryptCryptoTransform_TransformBlock_m10085(__this, L_1, L_2, L_3, L_4, 0, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_5 = V_0;
		return L_5;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t PkzipClassicDecryptCryptoTransform_TransformBlock_m10085 (PkzipClassicDecryptCryptoTransform_t1824 * __this, ByteU5BU5D_t159* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t159* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = ___inputOffset;
		V_0 = L_0;
		goto IL_0026;
	}

IL_0004:
	{
		ByteU5BU5D_t159* L_1 = ___inputBuffer;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		uint8_t L_4 = PkzipClassicCryptoBase_TransformByte_m10070(__this, /*hidden argument*/NULL);
		V_1 = (((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3))^(int32_t)L_4))));
		ByteU5BU5D_t159* L_5 = ___outputBuffer;
		int32_t L_6 = ___outputOffset;
		int32_t L_7 = L_6;
		___outputOffset = ((int32_t)((int32_t)L_7+(int32_t)1));
		uint8_t L_8 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7)) = (uint8_t)L_8;
		uint8_t L_9 = V_1;
		PkzipClassicCryptoBase_UpdateKeys_m10072(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___inputOffset;
		int32_t L_13 = ___inputCount;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)L_12+(int32_t)L_13)))))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_14 = ___inputCount;
		return L_14;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_CanReuseTransform()
extern "C" bool PkzipClassicDecryptCryptoTransform_get_CanReuseTransform_m10086 (PkzipClassicDecryptCryptoTransform_t1824 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_InputBlockSize()
extern "C" int32_t PkzipClassicDecryptCryptoTransform_get_InputBlockSize_m10087 (PkzipClassicDecryptCryptoTransform_t1824 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_OutputBlockSize()
extern "C" int32_t PkzipClassicDecryptCryptoTransform_get_OutputBlockSize_m10088 (PkzipClassicDecryptCryptoTransform_t1824 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::get_CanTransformMultipleBlocks()
extern "C" bool PkzipClassicDecryptCryptoTransform_get_CanTransformMultipleBlocks_m10089 (PkzipClassicDecryptCryptoTransform_t1824 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicDecryptCryptoTransform::Dispose()
extern "C" void PkzipClassicDecryptCryptoTransform_Dispose_m10090 (PkzipClassicDecryptCryptoTransform_t1824 * __this, const MethodInfo* method)
{
	{
		PkzipClassicCryptoBase_Reset_m10073(__this, /*hidden argument*/NULL);
		return;
	}
}
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_P_3.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_P_3MethodDeclarations.h"

// System.Security.Cryptography.CryptographicException
#include "mscorlib_System_Security_Cryptography_CryptographicException.h"
// System.Security.Cryptography.KeySizes
#include "mscorlib_System_Security_Cryptography_KeySizes.h"
// System.Security.Cryptography.SymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Random
#include "mscorlib_System_Random.h"
// System.Security.Cryptography.CryptographicException
#include "mscorlib_System_Security_Cryptography_CryptographicExceptionMethodDeclarations.h"
// System.Security.Cryptography.KeySizes
#include "mscorlib_System_Security_Cryptography_KeySizesMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"


// System.Int32 ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_BlockSize()
extern "C" int32_t PkzipClassicManaged_get_BlockSize_m10091 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method)
{
	{
		return 8;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::set_BlockSize(System.Int32)
extern TypeInfo* CryptographicException_t1355_il2cpp_TypeInfo_var;
extern "C" void PkzipClassicManaged_set_BlockSize_m10092 (PkzipClassicManaged_t1825 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CryptographicException_t1355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2561);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_000f;
		}
	}
	{
		CryptographicException_t1355 * L_1 = (CryptographicException_t1355 *)il2cpp_codegen_object_new (CryptographicException_t1355_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m6343(L_1, (String_t*) &_stringLiteral2782, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		return;
	}
}
// System.Security.Cryptography.KeySizes[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_LegalKeySizes()
extern TypeInfo* KeySizesU5BU5D_t1239_il2cpp_TypeInfo_var;
extern TypeInfo* KeySizes_t1358_il2cpp_TypeInfo_var;
extern "C" KeySizesU5BU5D_t1239* PkzipClassicManaged_get_LegalKeySizes_m10093 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeySizesU5BU5D_t1239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2565);
		KeySizes_t1358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2566);
		s_Il2CppMethodIntialized = true;
	}
	KeySizesU5BU5D_t1239* V_0 = {0};
	{
		V_0 = ((KeySizesU5BU5D_t1239*)SZArrayNew(KeySizesU5BU5D_t1239_il2cpp_TypeInfo_var, 1));
		KeySizesU5BU5D_t1239* L_0 = V_0;
		KeySizes_t1358 * L_1 = (KeySizes_t1358 *)il2cpp_codegen_object_new (KeySizes_t1358_il2cpp_TypeInfo_var);
		KeySizes__ctor_m6351(L_1, ((int32_t)96), ((int32_t)96), 0, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((KeySizes_t1358 **)(KeySizes_t1358 **)SZArrayLdElema(L_0, 0)) = (KeySizes_t1358 *)L_1;
		KeySizesU5BU5D_t1239* L_2 = V_0;
		return L_2;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::GenerateIV()
extern "C" void PkzipClassicManaged_GenerateIV_m10094 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::get_Key()
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t159* PkzipClassicManaged_get_Key_m10095 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t159* L_0 = (__this->___key__10);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(25 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey() */, __this);
	}

IL_000e:
	{
		ByteU5BU5D_t159* L_1 = (__this->___key__10);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Array::Clone() */, L_1);
		return ((ByteU5BU5D_t159*)Castclass(L_2, ByteU5BU5D_t159_il2cpp_TypeInfo_var));
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::set_Key(System.Byte[])
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* CryptographicException_t1355_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern "C" void PkzipClassicManaged_set_Key_m10096 (PkzipClassicManaged_t1825 * __this, ByteU5BU5D_t159* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		CryptographicException_t1355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2561);
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t159* L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ByteU5BU5D_t159* L_2 = ___value;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) == ((int32_t)((int32_t)12))))
		{
			goto IL_0020;
		}
	}
	{
		CryptographicException_t1355 * L_3 = (CryptographicException_t1355 *)il2cpp_codegen_object_new (CryptographicException_t1355_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m6343(L_3, (String_t*) &_stringLiteral2783, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		ByteU5BU5D_t159* L_4 = ___value;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Array::Clone() */, L_4);
		__this->___key__10 = ((ByteU5BU5D_t159*)Castclass(L_5, ByteU5BU5D_t159_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::GenerateKey()
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern TypeInfo* Random_t555_il2cpp_TypeInfo_var;
extern "C" void PkzipClassicManaged_GenerateKey_m10097 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		Random_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(962);
		s_Il2CppMethodIntialized = true;
	}
	Random_t555 * V_0 = {0};
	{
		__this->___key__10 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)12)));
		Random_t555 * L_0 = (Random_t555 *)il2cpp_codegen_object_new (Random_t555_il2cpp_TypeInfo_var);
		Random__ctor_m10282(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Random_t555 * L_1 = V_0;
		ByteU5BU5D_t159* L_2 = (__this->___key__10);
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_t159* >::Invoke(6 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_1, L_2);
		return;
	}
}
// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern TypeInfo* PkzipClassicEncryptCryptoTransform_t1823_il2cpp_TypeInfo_var;
extern "C" Object_t * PkzipClassicManaged_CreateEncryptor_m10098 (PkzipClassicManaged_t1825 * __this, ByteU5BU5D_t159* ___rgbKey, ByteU5BU5D_t159* ___rgbIV, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PkzipClassicEncryptCryptoTransform_t1823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4143);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t159* L_0 = ___rgbKey;
		__this->___key__10 = L_0;
		ByteU5BU5D_t159* L_1 = (ByteU5BU5D_t159*)VirtFuncInvoker0< ByteU5BU5D_t159* >::Invoke(11 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, __this);
		PkzipClassicEncryptCryptoTransform_t1823 * L_2 = (PkzipClassicEncryptCryptoTransform_t1823 *)il2cpp_codegen_object_new (PkzipClassicEncryptCryptoTransform_t1823_il2cpp_TypeInfo_var);
		PkzipClassicEncryptCryptoTransform__ctor_m10075(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern TypeInfo* PkzipClassicDecryptCryptoTransform_t1824_il2cpp_TypeInfo_var;
extern "C" Object_t * PkzipClassicManaged_CreateDecryptor_m10099 (PkzipClassicManaged_t1825 * __this, ByteU5BU5D_t159* ___rgbKey, ByteU5BU5D_t159* ___rgbIV, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PkzipClassicDecryptCryptoTransform_t1824_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4144);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t159* L_0 = ___rgbKey;
		__this->___key__10 = L_0;
		ByteU5BU5D_t159* L_1 = (ByteU5BU5D_t159*)VirtFuncInvoker0< ByteU5BU5D_t159* >::Invoke(11 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, __this);
		PkzipClassicDecryptCryptoTransform_t1824 * L_2 = (PkzipClassicDecryptCryptoTransform_t1824 *)il2cpp_codegen_object_new (PkzipClassicDecryptCryptoTransform_t1824_il2cpp_TypeInfo_var);
		PkzipClassicDecryptCryptoTransform__ctor_m10083(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::.ctor()
extern "C" void PkzipClassicManaged__ctor_m10100 (PkzipClassicManaged_t1825 * __this, const MethodInfo* method)
{
	{
		PkzipClassic__ctor_m10069(__this, /*hidden argument*/NULL);
		return;
	}
}
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_CompressMethodDeclarations.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_0.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_4.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// ICSharpCode.SharpZipLib.Zip.ZipException
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipExcep.h"
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_0MethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_4MethodDeclarations.h"
// ICSharpCode.SharpZipLib.Zip.ZipException
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipExcepMethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
extern "C" void InflaterInputStream__ctor_m10101 (InflaterInputStream_t1828 * __this, Stream_t844 * ___baseInputStream, Inflater_t1826 * ___inf, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = ___baseInputStream;
		Inflater_t1826 * L_1 = ___inf;
		InflaterInputStream__ctor_m10102(__this, L_0, L_1, ((int32_t)4096), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater,System.Int32)
extern TypeInfo* Stream_t844_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* InflaterInputBuffer_t1827_il2cpp_TypeInfo_var;
extern "C" void InflaterInputStream__ctor_m10102 (InflaterInputStream_t1828 * __this, Stream_t844 * ___baseInputStream, Inflater_t1826 * ___inflater, int32_t ___bufferSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1818);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		InflaterInputBuffer_t1827_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4145);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___isStreamOwner_6 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t844_il2cpp_TypeInfo_var);
		Stream__ctor_m6414(__this, /*hidden argument*/NULL);
		Stream_t844 * L_0 = ___baseInputStream;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral2785, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001b:
	{
		Inflater_t1826 * L_2 = ___inflater;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t692 * L_3 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_3, (String_t*) &_stringLiteral2786, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		int32_t L_4 = ___bufferSize;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_5 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_5, (String_t*) &_stringLiteral2787, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0038:
	{
		Stream_t844 * L_6 = ___baseInputStream;
		__this->___baseInputStream_4 = L_6;
		Inflater_t1826 * L_7 = ___inflater;
		__this->___inf_2 = L_7;
		Stream_t844 * L_8 = ___baseInputStream;
		int32_t L_9 = ___bufferSize;
		InflaterInputBuffer_t1827 * L_10 = (InflaterInputBuffer_t1827 *)il2cpp_codegen_object_new (InflaterInputBuffer_t1827_il2cpp_TypeInfo_var);
		InflaterInputBuffer__ctor_m10118(L_10, L_8, L_9, /*hidden argument*/NULL);
		__this->___inputBuffer_3 = L_10;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Fill()
extern "C" void InflaterInputStream_Fill_m10103 (InflaterInputStream_t1828 * __this, const MethodInfo* method)
{
	{
		InflaterInputBuffer_t1827 * L_0 = (__this->___inputBuffer_3);
		NullCheck(L_0);
		InflaterInputBuffer_Fill_m10121(L_0, /*hidden argument*/NULL);
		InflaterInputBuffer_t1827 * L_1 = (__this->___inputBuffer_3);
		Inflater_t1826 * L_2 = (__this->___inf_2);
		NullCheck(L_1);
		InflaterInputBuffer_SetInflaterInput_m10120(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanRead()
extern "C" bool InflaterInputStream_get_CanRead_m10104 (InflaterInputStream_t1828 * __this, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___baseInputStream_4);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanSeek()
extern "C" bool InflaterInputStream_get_CanSeek_m10105 (InflaterInputStream_t1828 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_CanWrite()
extern "C" bool InflaterInputStream_get_CanWrite_m10106 (InflaterInputStream_t1828 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_Length()
extern "C" int64_t InflaterInputStream_get_Length_m10107 (InflaterInputStream_t1828 * __this, const MethodInfo* method)
{
	{
		InflaterInputBuffer_t1827 * L_0 = (__this->___inputBuffer_3);
		NullCheck(L_0);
		int32_t L_1 = InflaterInputBuffer_get_RawLength_m10119(L_0, /*hidden argument*/NULL);
		return (((int64_t)L_1));
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::get_Position()
extern "C" int64_t InflaterInputStream_get_Position_m10108 (InflaterInputStream_t1828 * __this, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___baseInputStream_4);
		NullCheck(L_0);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::set_Position(System.Int64)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void InflaterInputStream_set_Position_m10109 (InflaterInputStream_t1828 * __this, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*) &_stringLiteral2784, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Flush()
extern "C" void InflaterInputStream_Flush_m10110 (InflaterInputStream_t1828 * __this, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___baseInputStream_4);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" int64_t InflaterInputStream_Seek_m10111 (InflaterInputStream_t1828 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*) &_stringLiteral2788, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::SetLength(System.Int64)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void InflaterInputStream_SetLength_m10112 (InflaterInputStream_t1828 * __this, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*) &_stringLiteral2789, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void InflaterInputStream_Write_m10113 (InflaterInputStream_t1828 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*) &_stringLiteral2790, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::WriteByte(System.Byte)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void InflaterInputStream_WriteByte_m10114 (InflaterInputStream_t1828 * __this, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*) &_stringLiteral2791, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" Object_t * InflaterInputStream_BeginWrite_m10115 (InflaterInputStream_t1828 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t72 * ___callback, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_0, (String_t*) &_stringLiteral2792, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Close()
extern "C" void InflaterInputStream_Close_m10116 (InflaterInputStream_t1828 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isClosed_5);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		__this->___isClosed_5 = 1;
		bool L_1 = (__this->___isStreamOwner_6);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Stream_t844 * L_2 = (__this->___baseInputStream_4);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* SharpZipBaseException_t1816_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t1840_il2cpp_TypeInfo_var;
extern "C" int32_t InflaterInputStream_Read_m10117 (InflaterInputStream_t1828 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SharpZipBaseException_t1816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4146);
		ZipException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4147);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Inflater_t1826 * L_0 = (__this->___inf_2);
		NullCheck(L_0);
		bool L_1 = Inflater_get_IsNeedingDictionary_m10150(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		SharpZipBaseException_t1816 * L_2 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_2, (String_t*) &_stringLiteral2793, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = ___count;
		V_0 = L_3;
	}

IL_001a:
	{
		Inflater_t1826 * L_4 = (__this->___inf_2);
		ByteU5BU5D_t159* L_5 = ___buffer;
		int32_t L_6 = ___offset;
		int32_t L_7 = V_0;
		NullCheck(L_4);
		int32_t L_8 = Inflater_Inflate_m10148(L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = ___offset;
		int32_t L_10 = V_1;
		___offset = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_0 = ((int32_t)((int32_t)L_11-(int32_t)L_12));
		int32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		Inflater_t1826 * L_14 = (__this->___inf_2);
		NullCheck(L_14);
		bool L_15 = Inflater_get_IsFinished_m10151(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0065;
		}
	}
	{
		Inflater_t1826 * L_16 = (__this->___inf_2);
		NullCheck(L_16);
		bool L_17 = Inflater_get_IsNeedingInput_m10149(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		InflaterInputStream_Fill_m10103(__this, /*hidden argument*/NULL);
		goto IL_001a;
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		if (L_18)
		{
			goto IL_001a;
		}
	}
	{
		ZipException_t1840 * L_19 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_19, (String_t*) &_stringLiteral2794, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0065:
	{
		int32_t L_20 = ___count;
		int32_t L_21 = V_0;
		return ((int32_t)((int32_t)L_20-(int32_t)L_21));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::.ctor(System.IO.Stream,System.Int32)
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern "C" void InflaterInputBuffer__ctor_m10118 (InflaterInputBuffer_t1827 * __this, Stream_t844 * ___stream, int32_t ___bufferSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Stream_t844 * L_0 = ___stream;
		__this->___inputStream_6 = L_0;
		int32_t L_1 = ___bufferSize;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_001c;
		}
	}
	{
		___bufferSize = ((int32_t)1024);
	}

IL_001c:
	{
		int32_t L_2 = ___bufferSize;
		__this->___rawData_1 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, L_2));
		ByteU5BU5D_t159* L_3 = (__this->___rawData_1);
		__this->___clearText_3 = L_3;
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::get_RawLength()
extern "C" int32_t InflaterInputBuffer_get_RawLength_m10119 (InflaterInputBuffer_t1827 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___rawLength_0);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::SetInflaterInput(ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
extern "C" void InflaterInputBuffer_SetInflaterInput_m10120 (InflaterInputBuffer_t1827 * __this, Inflater_t1826 * ___inflater, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___available_4);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		Inflater_t1826 * L_1 = ___inflater;
		ByteU5BU5D_t159* L_2 = (__this->___clearText_3);
		int32_t L_3 = (__this->___clearTextLength_2);
		int32_t L_4 = (__this->___available_4);
		int32_t L_5 = (__this->___available_4);
		NullCheck(L_1);
		Inflater_SetInput_m10147(L_1, L_2, ((int32_t)((int32_t)L_3-(int32_t)L_4)), L_5, /*hidden argument*/NULL);
		__this->___available_4 = 0;
	}

IL_002f:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer::Fill()
extern TypeInfo* SharpZipBaseException_t1816_il2cpp_TypeInfo_var;
extern TypeInfo* ICryptoTransform_t1278_il2cpp_TypeInfo_var;
extern "C" void InflaterInputBuffer_Fill_m10121 (InflaterInputBuffer_t1827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SharpZipBaseException_t1816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4146);
		ICryptoTransform_t1278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2577);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->___rawLength_0 = 0;
		ByteU5BU5D_t159* L_0 = (__this->___rawData_1);
		NullCheck(L_0);
		V_0 = (((int32_t)(((Array_t *)L_0)->max_length)));
		goto IL_0054;
	}

IL_0012:
	{
		Stream_t844 * L_1 = (__this->___inputStream_6);
		ByteU5BU5D_t159* L_2 = (__this->___rawData_1);
		int32_t L_3 = (__this->___rawLength_0);
		int32_t L_4 = V_0;
		NullCheck(L_1);
		int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t159*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = (__this->___rawLength_0);
		if (L_7)
		{
			goto IL_0058;
		}
	}
	{
		SharpZipBaseException_t1816 * L_8 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_8, (String_t*) &_stringLiteral2795, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0042:
	{
		int32_t L_9 = (__this->___rawLength_0);
		int32_t L_10 = V_1;
		__this->___rawLength_0 = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_0 = ((int32_t)((int32_t)L_11-(int32_t)L_12));
	}

IL_0054:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_0058:
	{
		Object_t * L_14 = (__this->___cryptoTransform_5);
		if (!L_14)
		{
			goto IL_0087;
		}
	}
	{
		Object_t * L_15 = (__this->___cryptoTransform_5);
		ByteU5BU5D_t159* L_16 = (__this->___rawData_1);
		int32_t L_17 = (__this->___rawLength_0);
		ByteU5BU5D_t159* L_18 = (__this->___clearText_3);
		NullCheck(L_15);
		int32_t L_19 = (int32_t)InterfaceFuncInvoker5< int32_t, ByteU5BU5D_t159*, int32_t, int32_t, ByteU5BU5D_t159*, int32_t >::Invoke(4 /* System.Int32 System.Security.Cryptography.ICryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, ICryptoTransform_t1278_il2cpp_TypeInfo_var, L_15, L_16, 0, L_17, L_18, 0);
		__this->___clearTextLength_2 = L_19;
		goto IL_0093;
	}

IL_0087:
	{
		int32_t L_20 = (__this->___rawLength_0);
		__this->___clearTextLength_2 = L_20;
	}

IL_0093:
	{
		int32_t L_21 = (__this->___clearTextLength_2);
		__this->___available_4 = L_21;
		return;
	}
}
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_1.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_1MethodDeclarations.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_2.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_2MethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::Write(System.Int32)
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" void OutputWindow_Write_m10122 (OutputWindow_t1829 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___windowFilled_2);
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->___windowFilled_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)32768)))))
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*) &_stringLiteral2796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		ByteU5BU5D_t159* L_4 = (__this->___window_0);
		int32_t L_5 = (__this->___windowEnd_1);
		int32_t L_6 = L_5;
		V_1 = L_6;
		__this->___windowEnd_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_1;
		int32_t L_8 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_7)) = (uint8_t)(((uint8_t)L_8));
		int32_t L_9 = (__this->___windowEnd_1);
		__this->___windowEnd_1 = ((int32_t)((int32_t)L_9&(int32_t)((int32_t)32767)));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::SlowRepeat(System.Int32,System.Int32,System.Int32)
extern "C" void OutputWindow_SlowRepeat_m10123 (OutputWindow_t1829 * __this, int32_t ___repStart, int32_t ___length, int32_t ___distance, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0042;
	}

IL_0002:
	{
		ByteU5BU5D_t159* L_0 = (__this->___window_0);
		int32_t L_1 = (__this->___windowEnd_1);
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___windowEnd_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_0;
		ByteU5BU5D_t159* L_4 = (__this->___window_0);
		int32_t L_5 = ___repStart;
		int32_t L_6 = L_5;
		___repStart = ((int32_t)((int32_t)L_6+(int32_t)1));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_3)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_7));
		int32_t L_8 = (__this->___windowEnd_1);
		__this->___windowEnd_1 = ((int32_t)((int32_t)L_8&(int32_t)((int32_t)32767)));
		int32_t L_9 = ___repStart;
		___repStart = ((int32_t)((int32_t)L_9&(int32_t)((int32_t)32767)));
	}

IL_0042:
	{
		int32_t L_10 = ___length;
		int32_t L_11 = L_10;
		___length = ((int32_t)((int32_t)L_11-(int32_t)1));
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::Repeat(System.Int32,System.Int32)
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" void OutputWindow_Repeat_m10124 (OutputWindow_t1829 * __this, int32_t ___length, int32_t ___distance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (__this->___windowFilled_2);
		int32_t L_1 = ___length;
		int32_t L_2 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		V_2 = L_2;
		__this->___windowFilled_2 = L_2;
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t1116 * L_4 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_4, (String_t*) &_stringLiteral2796, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		int32_t L_5 = (__this->___windowEnd_1);
		int32_t L_6 = ___distance;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)L_6))&(int32_t)((int32_t)32767)));
		int32_t L_7 = ___length;
		V_1 = ((int32_t)((int32_t)((int32_t)32768)-(int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) > ((int32_t)L_9)))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_10 = (__this->___windowEnd_1);
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_12 = ___length;
		int32_t L_13 = ___distance;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_0097;
		}
	}
	{
		ByteU5BU5D_t159* L_14 = (__this->___window_0);
		int32_t L_15 = V_0;
		ByteU5BU5D_t159* L_16 = (__this->___window_0);
		int32_t L_17 = (__this->___windowEnd_1);
		int32_t L_18 = ___length;
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_14, L_15, (Array_t *)(Array_t *)L_16, L_17, L_18, /*hidden argument*/NULL);
		int32_t L_19 = (__this->___windowEnd_1);
		int32_t L_20 = ___length;
		__this->___windowEnd_1 = ((int32_t)((int32_t)L_19+(int32_t)L_20));
		return;
	}

IL_0073:
	{
		ByteU5BU5D_t159* L_21 = (__this->___window_0);
		int32_t L_22 = (__this->___windowEnd_1);
		int32_t L_23 = L_22;
		V_3 = L_23;
		__this->___windowEnd_1 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_3;
		ByteU5BU5D_t159* L_25 = (__this->___window_0);
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)((int32_t)L_27+(int32_t)1));
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_27);
		int32_t L_28 = L_27;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_24);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_24)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_25, L_28));
	}

IL_0097:
	{
		int32_t L_29 = ___length;
		int32_t L_30 = L_29;
		___length = ((int32_t)((int32_t)L_30-(int32_t)1));
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00a1:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___length;
		int32_t L_33 = ___distance;
		OutputWindow_SlowRepeat_m10123(__this, L_31, L_32, L_33, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::CopyStored(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator,System.Int32)
extern "C" int32_t OutputWindow_CopyStored_m10125 (OutputWindow_t1829 * __this, StreamManipulator_t1830 * ___input, int32_t ___length, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length;
		int32_t L_1 = (__this->___windowFilled_2);
		int32_t L_2 = Math_Min_m5252(NULL /*static, unused*/, L_0, ((int32_t)((int32_t)((int32_t)32768)-(int32_t)L_1)), /*hidden argument*/NULL);
		StreamManipulator_t1830 * L_3 = ___input;
		NullCheck(L_3);
		int32_t L_4 = StreamManipulator_get_AvailableBytes_m10134(L_3, /*hidden argument*/NULL);
		int32_t L_5 = Math_Min_m5252(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		___length = L_5;
		int32_t L_6 = (__this->___windowEnd_1);
		V_1 = ((int32_t)((int32_t)((int32_t)32768)-(int32_t)L_6));
		int32_t L_7 = ___length;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_005d;
		}
	}
	{
		StreamManipulator_t1830 * L_9 = ___input;
		ByteU5BU5D_t159* L_10 = (__this->___window_0);
		int32_t L_11 = (__this->___windowEnd_1);
		int32_t L_12 = V_1;
		NullCheck(L_9);
		int32_t L_13 = StreamManipulator_CopyBytes_m10137(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_16 = V_0;
		StreamManipulator_t1830 * L_17 = ___input;
		ByteU5BU5D_t159* L_18 = (__this->___window_0);
		int32_t L_19 = ___length;
		int32_t L_20 = V_1;
		NullCheck(L_17);
		int32_t L_21 = StreamManipulator_CopyBytes_m10137(L_17, L_18, 0, ((int32_t)((int32_t)L_19-(int32_t)L_20)), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)L_21));
		goto IL_0071;
	}

IL_005d:
	{
		StreamManipulator_t1830 * L_22 = ___input;
		ByteU5BU5D_t159* L_23 = (__this->___window_0);
		int32_t L_24 = (__this->___windowEnd_1);
		int32_t L_25 = ___length;
		NullCheck(L_22);
		int32_t L_26 = StreamManipulator_CopyBytes_m10137(L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
	}

IL_0071:
	{
		int32_t L_27 = (__this->___windowEnd_1);
		int32_t L_28 = V_0;
		__this->___windowEnd_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27+(int32_t)L_28))&(int32_t)((int32_t)32767)));
		int32_t L_29 = (__this->___windowFilled_2);
		int32_t L_30 = V_0;
		__this->___windowFilled_2 = ((int32_t)((int32_t)L_29+(int32_t)L_30));
		int32_t L_31 = V_0;
		return L_31;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::GetFreeSpace()
extern "C" int32_t OutputWindow_GetFreeSpace_m10126 (OutputWindow_t1829 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___windowFilled_2);
		return ((int32_t)((int32_t)((int32_t)32768)-(int32_t)L_0));
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::GetAvailable()
extern "C" int32_t OutputWindow_GetAvailable_m10127 (OutputWindow_t1829 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___windowFilled_2);
		return L_0;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::CopyOutput(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" int32_t OutputWindow_CopyOutput_m10128 (OutputWindow_t1829 * __this, ByteU5BU5D_t159* ___output, int32_t ___offset, int32_t ___len, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->___windowEnd_1);
		V_0 = L_0;
		int32_t L_1 = ___len;
		int32_t L_2 = (__this->___windowFilled_2);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = (__this->___windowFilled_2);
		___len = L_3;
		goto IL_0030;
	}

IL_001a:
	{
		int32_t L_4 = (__this->___windowEnd_1);
		int32_t L_5 = (__this->___windowFilled_2);
		int32_t L_6 = ___len;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)L_5))+(int32_t)L_6))&(int32_t)((int32_t)32767)));
	}

IL_0030:
	{
		int32_t L_7 = ___len;
		V_1 = L_7;
		int32_t L_8 = ___len;
		int32_t L_9 = V_0;
		V_2 = ((int32_t)((int32_t)L_8-(int32_t)L_9));
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		ByteU5BU5D_t159* L_11 = (__this->___window_0);
		int32_t L_12 = V_2;
		ByteU5BU5D_t159* L_13 = ___output;
		int32_t L_14 = ___offset;
		int32_t L_15 = V_2;
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_11, ((int32_t)((int32_t)((int32_t)32768)-(int32_t)L_12)), (Array_t *)(Array_t *)L_13, L_14, L_15, /*hidden argument*/NULL);
		int32_t L_16 = ___offset;
		int32_t L_17 = V_2;
		___offset = ((int32_t)((int32_t)L_16+(int32_t)L_17));
		int32_t L_18 = V_0;
		___len = L_18;
	}

IL_0057:
	{
		ByteU5BU5D_t159* L_19 = (__this->___window_0);
		int32_t L_20 = V_0;
		int32_t L_21 = ___len;
		ByteU5BU5D_t159* L_22 = ___output;
		int32_t L_23 = ___offset;
		int32_t L_24 = ___len;
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_19, ((int32_t)((int32_t)L_20-(int32_t)L_21)), (Array_t *)(Array_t *)L_22, L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = (__this->___windowFilled_2);
		int32_t L_26 = V_1;
		__this->___windowFilled_2 = ((int32_t)((int32_t)L_25-(int32_t)L_26));
		int32_t L_27 = (__this->___windowFilled_2);
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		InvalidOperationException_t1116 * L_28 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m5032(L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_0085:
	{
		int32_t L_29 = V_1;
		return L_29;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow::.ctor()
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern "C" void OutputWindow__ctor_m10129 (OutputWindow_t1829 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___window_0 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)32768)));
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::.ctor()
extern "C" void StreamManipulator__ctor_m10130 (StreamManipulator_t1830 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::PeekBits(System.Int32)
extern "C" int32_t StreamManipulator_PeekBits_m10131 (StreamManipulator_t1830 * __this, int32_t ___bitCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___bitsInBuffer__4);
		int32_t L_1 = ___bitCount;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_2 = (__this->___windowStart__1);
		int32_t L_3 = (__this->___windowEnd__2);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		uint32_t L_4 = (__this->___buffer__3);
		ByteU5BU5D_t159* L_5 = (__this->___window__0);
		int32_t L_6 = (__this->___windowStart__1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___windowStart__1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		ByteU5BU5D_t159* L_10 = (__this->___window__0);
		int32_t L_11 = (__this->___windowStart__1);
		int32_t L_12 = L_11;
		V_1 = L_12;
		__this->___windowStart__1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_13);
		int32_t L_14 = L_13;
		int32_t L_15 = (__this->___bitsInBuffer__4);
		__this->___buffer__3 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_9))&(int32_t)((int32_t)255)))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_14))&(int32_t)((int32_t)255)))<<(int32_t)8))))<<(int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)31)))))));
		int32_t L_16 = (__this->___bitsInBuffer__4);
		__this->___bitsInBuffer__4 = ((int32_t)((int32_t)L_16+(int32_t)((int32_t)16)));
	}

IL_007e:
	{
		uint32_t L_17 = (__this->___buffer__3);
		int32_t L_18 = ___bitCount;
		return (((int32_t)((int64_t)((int64_t)(((uint64_t)L_17))&(int64_t)(((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)31)))))-(int32_t)1))))))));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::DropBits(System.Int32)
extern "C" void StreamManipulator_DropBits_m10132 (StreamManipulator_t1830 * __this, int32_t ___bitCount, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___buffer__3);
		int32_t L_1 = ___bitCount;
		__this->___buffer__3 = ((int32_t)((uint32_t)L_0>>((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))));
		int32_t L_2 = (__this->___bitsInBuffer__4);
		int32_t L_3 = ___bitCount;
		__this->___bitsInBuffer__4 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_AvailableBits()
extern "C" int32_t StreamManipulator_get_AvailableBits_m10133 (StreamManipulator_t1830 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___bitsInBuffer__4);
		return L_0;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_AvailableBytes()
extern "C" int32_t StreamManipulator_get_AvailableBytes_m10134 (StreamManipulator_t1830 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___windowEnd__2);
		int32_t L_1 = (__this->___windowStart__1);
		int32_t L_2 = (__this->___bitsInBuffer__4);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_0-(int32_t)L_1))+(int32_t)((int32_t)((int32_t)L_2>>(int32_t)3))));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::SkipToByteBoundary()
extern "C" void StreamManipulator_SkipToByteBoundary_m10135 (StreamManipulator_t1830 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___buffer__3);
		int32_t L_1 = (__this->___bitsInBuffer__4);
		__this->___buffer__3 = ((int32_t)((uint32_t)L_0>>((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)7))&(int32_t)((int32_t)31)))));
		int32_t L_2 = (__this->___bitsInBuffer__4);
		__this->___bitsInBuffer__4 = ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-8)));
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::get_IsNeedingInput()
extern "C" bool StreamManipulator_get_IsNeedingInput_m10136 (StreamManipulator_t1830 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___windowStart__1);
		int32_t L_1 = (__this->___windowEnd__2);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::CopyBytes(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" int32_t StreamManipulator_CopyBytes_m10137 (StreamManipulator_t1830 * __this, ByteU5BU5D_t159* ___output, int32_t ___offset, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_1, (String_t*) &_stringLiteral1850, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		int32_t L_2 = (__this->___bitsInBuffer__4);
		if (!((int32_t)((int32_t)L_2&(int32_t)7)))
		{
			goto IL_0024;
		}
	}
	{
		InvalidOperationException_t1116 * L_3 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_3, (String_t*) &_stringLiteral2797, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		V_0 = 0;
		goto IL_005c;
	}

IL_0028:
	{
		ByteU5BU5D_t159* L_4 = ___output;
		int32_t L_5 = ___offset;
		int32_t L_6 = L_5;
		___offset = ((int32_t)((int32_t)L_6+(int32_t)1));
		uint32_t L_7 = (__this->___buffer__3);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_6)) = (uint8_t)(((uint8_t)L_7));
		uint32_t L_8 = (__this->___buffer__3);
		__this->___buffer__3 = ((int32_t)((uint32_t)L_8>>8));
		int32_t L_9 = (__this->___bitsInBuffer__4);
		__this->___bitsInBuffer__4 = ((int32_t)((int32_t)L_9-(int32_t)8));
		int32_t L_10 = ___length;
		___length = ((int32_t)((int32_t)L_10-(int32_t)1));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_12 = (__this->___bitsInBuffer__4);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_13 = ___length;
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0028;
		}
	}

IL_0069:
	{
		int32_t L_14 = ___length;
		if (L_14)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}

IL_006e:
	{
		int32_t L_16 = (__this->___windowEnd__2);
		int32_t L_17 = (__this->___windowStart__1);
		V_1 = ((int32_t)((int32_t)L_16-(int32_t)L_17));
		int32_t L_18 = ___length;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)L_19)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_20 = V_1;
		___length = L_20;
	}

IL_0083:
	{
		ByteU5BU5D_t159* L_21 = (__this->___window__0);
		int32_t L_22 = (__this->___windowStart__1);
		ByteU5BU5D_t159* L_23 = ___output;
		int32_t L_24 = ___offset;
		int32_t L_25 = ___length;
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_21, L_22, (Array_t *)(Array_t *)L_23, L_24, L_25, /*hidden argument*/NULL);
		int32_t L_26 = (__this->___windowStart__1);
		int32_t L_27 = ___length;
		__this->___windowStart__1 = ((int32_t)((int32_t)L_26+(int32_t)L_27));
		int32_t L_28 = (__this->___windowStart__1);
		int32_t L_29 = (__this->___windowEnd__2);
		if (!((int32_t)((int32_t)((int32_t)((int32_t)L_28-(int32_t)L_29))&(int32_t)1)))
		{
			goto IL_00e1;
		}
	}
	{
		ByteU5BU5D_t159* L_30 = (__this->___window__0);
		int32_t L_31 = (__this->___windowStart__1);
		int32_t L_32 = L_31;
		V_2 = L_32;
		__this->___windowStart__1 = ((int32_t)((int32_t)L_32+(int32_t)1));
		int32_t L_33 = V_2;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_33);
		int32_t L_34 = L_33;
		__this->___buffer__3 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_34))&(int32_t)((int32_t)255)));
		__this->___bitsInBuffer__4 = 8;
	}

IL_00e1:
	{
		int32_t L_35 = V_0;
		int32_t L_36 = ___length;
		return ((int32_t)((int32_t)L_35+(int32_t)L_36));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator::SetInput(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" void StreamManipulator_SetInput_m10138 (StreamManipulator_t1830 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t159* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral1447, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral1379, (String_t*) &_stringLiteral2798, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = ___count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_5 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_5, (String_t*) &_stringLiteral1110, (String_t*) &_stringLiteral2798, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = (__this->___windowStart__1);
		int32_t L_7 = (__this->___windowEnd__2);
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_004f;
		}
	}
	{
		InvalidOperationException_t1116 * L_8 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_8, (String_t*) &_stringLiteral2799, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004f:
	{
		int32_t L_9 = ___offset;
		int32_t L_10 = ___count;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		int32_t L_11 = ___offset;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) > ((int32_t)L_12)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_t159* L_14 = ___buffer;
		NullCheck(L_14);
		if ((((int32_t)L_13) <= ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0068;
		}
	}

IL_005d:
	{
		ArgumentOutOfRangeException_t694 * L_15 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_15, (String_t*) &_stringLiteral1110, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0068:
	{
		int32_t L_16 = ___count;
		if (!((int32_t)((int32_t)L_16&(int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		uint32_t L_17 = (__this->___buffer__3);
		ByteU5BU5D_t159* L_18 = ___buffer;
		int32_t L_19 = ___offset;
		int32_t L_20 = L_19;
		___offset = ((int32_t)((int32_t)L_20+(int32_t)1));
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		int32_t L_21 = L_20;
		int32_t L_22 = (__this->___bitsInBuffer__4);
		__this->___buffer__3 = ((int32_t)((int32_t)L_17|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_18, L_21))&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))))));
		int32_t L_23 = (__this->___bitsInBuffer__4);
		__this->___bitsInBuffer__4 = ((int32_t)((int32_t)L_23+(int32_t)8));
	}

IL_00a0:
	{
		ByteU5BU5D_t159* L_24 = ___buffer;
		__this->___window__0 = L_24;
		int32_t L_25 = ___offset;
		__this->___windowStart__1 = L_25;
		int32_t L_26 = V_0;
		__this->___windowEnd__2 = L_26;
		return;
	}
}
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_3.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_3MethodDeclarations.h"

// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=76
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_1.h"
// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=16
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_2.h"
// System.Int16
#include "mscorlib_System_Int16.h"


// System.Void ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::.cctor()
extern TypeInfo* Int32U5BU5D_t1_il2cpp_TypeInfo_var;
extern TypeInfo* DeflaterHuffman_t1831_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern TypeInfo* Int16U5BU5D_t886_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x600026eU2D1_1_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x600026eU2D2_2_FieldInfo_var;
extern "C" void DeflaterHuffman__cctor_m10139 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		DeflaterHuffman_t1831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4148);
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		Int16U5BU5D_t886_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x600026eU2D1_1_FieldInfo_var = il2cpp_codegen_field_info_from_index(4141, 1);
		U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x600026eU2D2_2_FieldInfo_var = il2cpp_codegen_field_info_from_index(4141, 2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t1* L_0 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, ((int32_t)19)));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x600026eU2D1_1_FieldInfo_var), /*hidden argument*/NULL);
		((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___BL_ORDER_0 = L_0;
		ByteU5BU5D_t159* L_1 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)16)));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x600026eU2D2_2_FieldInfo_var), /*hidden argument*/NULL);
		((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___bit4Reverse_1 = L_1;
		((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticLCodes_2 = ((Int16U5BU5D_t886*)SZArrayNew(Int16U5BU5D_t886_il2cpp_TypeInfo_var, ((int32_t)286)));
		((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticLLength_3 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)286)));
		V_0 = 0;
		goto IL_006e;
	}

IL_0050:
	{
		Int16U5BU5D_t886* L_2 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticLCodes_2;
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		int16_t L_5 = DeflaterHuffman_BitReverse_m10140(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)48)+(int32_t)L_4))<<(int32_t)8)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((int16_t*)(int16_t*)SZArrayLdElema(L_2, L_3)) = (int16_t)L_5;
		ByteU5BU5D_t159* L_6 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticLLength_3;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8)) = (uint8_t)8;
	}

IL_006e:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)144))))
		{
			goto IL_0050;
		}
	}
	{
		goto IL_009a;
	}

IL_0078:
	{
		Int16U5BU5D_t886* L_10 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticLCodes_2;
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		int16_t L_13 = DeflaterHuffman_BitReverse_m10140(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)256)+(int32_t)L_12))<<(int32_t)7)), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		*((int16_t*)(int16_t*)SZArrayLdElema(L_10, L_11)) = (int16_t)L_13;
		ByteU5BU5D_t159* L_14 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticLLength_3;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_16);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16)) = (uint8_t)((int32_t)9);
	}

IL_009a:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)256))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_00c6;
	}

IL_00a4:
	{
		Int16U5BU5D_t886* L_18 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticLCodes_2;
		int32_t L_19 = V_0;
		int32_t L_20 = V_0;
		int16_t L_21 = DeflaterHuffman_BitReverse_m10140(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-256)+(int32_t)L_20))<<(int32_t)((int32_t)9))), /*hidden argument*/NULL);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		*((int16_t*)(int16_t*)SZArrayLdElema(L_18, L_19)) = (int16_t)L_21;
		ByteU5BU5D_t159* L_22 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticLLength_3;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)((int32_t)L_24+(int32_t)1));
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_24);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_24)) = (uint8_t)7;
	}

IL_00c6:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)280))))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_00ee;
	}

IL_00d0:
	{
		Int16U5BU5D_t886* L_26 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticLCodes_2;
		int32_t L_27 = V_0;
		int32_t L_28 = V_0;
		int16_t L_29 = DeflaterHuffman_BitReverse_m10140(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-88)+(int32_t)L_28))<<(int32_t)8)), /*hidden argument*/NULL);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		*((int16_t*)(int16_t*)SZArrayLdElema(L_26, L_27)) = (int16_t)L_29;
		ByteU5BU5D_t159* L_30 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticLLength_3;
		int32_t L_31 = V_0;
		int32_t L_32 = L_31;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)1));
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_32);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_32)) = (uint8_t)8;
	}

IL_00ee:
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)286))))
		{
			goto IL_00d0;
		}
	}
	{
		((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticDCodes_4 = ((Int16U5BU5D_t886*)SZArrayNew(Int16U5BU5D_t886_il2cpp_TypeInfo_var, ((int32_t)30)));
		((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticDLength_5 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)30)));
		V_0 = 0;
		goto IL_012e;
	}

IL_0112:
	{
		Int16U5BU5D_t886* L_34 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticDCodes_4;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		int16_t L_37 = DeflaterHuffman_BitReverse_m10140(NULL /*static, unused*/, ((int32_t)((int32_t)L_36<<(int32_t)((int32_t)11))), /*hidden argument*/NULL);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		*((int16_t*)(int16_t*)SZArrayLdElema(L_34, L_35)) = (int16_t)L_37;
		ByteU5BU5D_t159* L_38 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___staticDLength_5;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, L_39)) = (uint8_t)5;
		int32_t L_40 = V_0;
		V_0 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_012e:
	{
		int32_t L_41 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)30))))
		{
			goto IL_0112;
		}
	}
	{
		return;
	}
}
// System.Int16 ICSharpCode.SharpZipLib.Zip.Compression.DeflaterHuffman::BitReverse(System.Int32)
extern TypeInfo* DeflaterHuffman_t1831_il2cpp_TypeInfo_var;
extern "C" int16_t DeflaterHuffman_BitReverse_m10140 (Object_t * __this /* static, unused */, int32_t ___toReverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DeflaterHuffman_t1831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4148);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeflaterHuffman_t1831_il2cpp_TypeInfo_var);
		ByteU5BU5D_t159* L_0 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___bit4Reverse_1;
		int32_t L_1 = ___toReverse;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, ((int32_t)((int32_t)L_1&(int32_t)((int32_t)15))));
		int32_t L_2 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)15)));
		ByteU5BU5D_t159* L_3 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___bit4Reverse_1;
		int32_t L_4 = ___toReverse;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)4))&(int32_t)((int32_t)15))));
		int32_t L_5 = ((int32_t)((int32_t)((int32_t)((int32_t)L_4>>(int32_t)4))&(int32_t)((int32_t)15)));
		ByteU5BU5D_t159* L_6 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___bit4Reverse_1;
		int32_t L_7 = ___toReverse;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)8))&(int32_t)((int32_t)15))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)8))&(int32_t)((int32_t)15)));
		ByteU5BU5D_t159* L_9 = ((DeflaterHuffman_t1831_StaticFields*)DeflaterHuffman_t1831_il2cpp_TypeInfo_var->static_fields)->___bit4Reverse_1;
		int32_t L_10 = ___toReverse;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10>>(int32_t)((int32_t)12))));
		int32_t L_11 = ((int32_t)((int32_t)L_10>>(int32_t)((int32_t)12)));
		return (((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))<<(int32_t)((int32_t)12)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8))<<(int32_t)4))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_11))))));
	}
}
#ifndef _MSC_VER
#else
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_6.h"
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_5.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=116
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_3.h"
// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=120
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_4.h"
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_6MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_5MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::.ctor(System.Boolean)
extern TypeInfo* Adler32_t1818_il2cpp_TypeInfo_var;
extern TypeInfo* StreamManipulator_t1830_il2cpp_TypeInfo_var;
extern TypeInfo* OutputWindow_t1829_il2cpp_TypeInfo_var;
extern "C" void Inflater__ctor_m10141 (Inflater_t1826 * __this, bool ___noHeader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Adler32_t1818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4149);
		StreamManipulator_t1830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4150);
		OutputWindow_t1829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4151);
		s_Il2CppMethodIntialized = true;
	}
	Inflater_t1826 * G_B2_0 = {0};
	Inflater_t1826 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	Inflater_t1826 * G_B3_1 = {0};
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		bool L_0 = ___noHeader;
		__this->___noHeader_13 = L_0;
		Adler32_t1818 * L_1 = (Adler32_t1818 *)il2cpp_codegen_object_new (Adler32_t1818_il2cpp_TypeInfo_var);
		Adler32__ctor_m10062(L_1, /*hidden argument*/NULL);
		__this->___adler_19 = L_1;
		StreamManipulator_t1830 * L_2 = (StreamManipulator_t1830 *)il2cpp_codegen_object_new (StreamManipulator_t1830_il2cpp_TypeInfo_var);
		StreamManipulator__ctor_m10130(L_2, /*hidden argument*/NULL);
		__this->___input_14 = L_2;
		OutputWindow_t1829 * L_3 = (OutputWindow_t1829 *)il2cpp_codegen_object_new (OutputWindow_t1829_il2cpp_TypeInfo_var);
		OutputWindow__ctor_m10129(L_3, /*hidden argument*/NULL);
		__this->___outputWindow_15 = L_3;
		bool L_4 = ___noHeader;
		G_B1_0 = __this;
		if (L_4)
		{
			G_B2_0 = __this;
			goto IL_0035;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_0036:
	{
		NullCheck(G_B3_1);
		G_B3_1->___mode_4 = G_B3_0;
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeHeader()
extern TypeInfo* SharpZipBaseException_t1816_il2cpp_TypeInfo_var;
extern "C" bool Inflater_DecodeHeader_m10142 (Inflater_t1826 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SharpZipBaseException_t1816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4146);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		StreamManipulator_t1830 * L_0 = (__this->___input_14);
		NullCheck(L_0);
		int32_t L_1 = StreamManipulator_PeekBits_m10131(L_0, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		StreamManipulator_t1830 * L_3 = (__this->___input_14);
		NullCheck(L_3);
		StreamManipulator_DropBits_m10132(L_3, ((int32_t)16), /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)8))|(int32_t)((int32_t)((int32_t)L_5>>(int32_t)8))))&(int32_t)((int32_t)65535)));
		int32_t L_6 = V_0;
		if (!((int32_t)((int32_t)L_6%(int32_t)((int32_t)31))))
		{
			goto IL_0040;
		}
	}
	{
		SharpZipBaseException_t1816 * L_7 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_7, (String_t*) &_stringLiteral2800, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0040:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)3840)))) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0059;
		}
	}
	{
		SharpZipBaseException_t1816 * L_9 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_9, (String_t*) &_stringLiteral2801, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0059:
	{
		int32_t L_10 = V_0;
		if (((int32_t)((int32_t)L_10&(int32_t)((int32_t)32))))
		{
			goto IL_0068;
		}
	}
	{
		__this->___mode_4 = 2;
		goto IL_0077;
	}

IL_0068:
	{
		__this->___mode_4 = 1;
		__this->___neededBits_6 = ((int32_t)32);
	}

IL_0077:
	{
		return 1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeDict()
extern "C" bool Inflater_DecodeDict_m10143 (Inflater_t1826 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_003f;
	}

IL_0002:
	{
		StreamManipulator_t1830 * L_0 = (__this->___input_14);
		NullCheck(L_0);
		int32_t L_1 = StreamManipulator_PeekBits_m10131(L_0, 8, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		StreamManipulator_t1830 * L_3 = (__this->___input_14);
		NullCheck(L_3);
		StreamManipulator_DropBits_m10132(L_3, 8, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___readAdler_5);
		int32_t L_5 = V_0;
		__this->___readAdler_5 = ((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)8))|(int32_t)L_5));
		int32_t L_6 = (__this->___neededBits_6);
		__this->___neededBits_6 = ((int32_t)((int32_t)L_6-(int32_t)8));
	}

IL_003f:
	{
		int32_t L_7 = (__this->___neededBits_6);
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return 0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeHuffman()
extern TypeInfo* Inflater_t1826_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t306_il2cpp_TypeInfo_var;
extern TypeInfo* SharpZipBaseException_t1816_il2cpp_TypeInfo_var;
extern "C" bool Inflater_DecodeHuffman_m10144 (Inflater_t1826 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Inflater_t1826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4152);
		Exception_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		SharpZipBaseException_t1816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4146);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		OutputWindow_t1829 * L_0 = (__this->___outputWindow_15);
		NullCheck(L_0);
		int32_t L_1 = OutputWindow_GetFreeSpace_m10126(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_01d0;
	}

IL_0011:
	{
		int32_t L_2 = (__this->___mode_4);
		V_4 = L_2;
		int32_t L_3 = V_4;
		if (((int32_t)((int32_t)L_3-(int32_t)7)) == 0)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)7)) == 1)
		{
			goto IL_00c5;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)7)) == 2)
		{
			goto IL_0114;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)7)) == 3)
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01c5;
	}

IL_0037:
	{
		OutputWindow_t1829 * L_4 = (__this->___outputWindow_15);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		OutputWindow_Write_m10122(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = ((int32_t)((int32_t)L_6-(int32_t)1));
		V_0 = L_7;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)258))))
		{
			goto IL_0051;
		}
	}
	{
		return 1;
	}

IL_0051:
	{
		InflaterHuffmanTree_t1833 * L_8 = (__this->___litlenTree_17);
		StreamManipulator_t1830 * L_9 = (__this->___input_14);
		NullCheck(L_8);
		int32_t L_10 = InflaterHuffmanTree_GetSymbol_m10161(L_8, L_9, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		V_1 = L_11;
		if (!((int32_t)((int32_t)L_11&(int32_t)((int32_t)-256))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)257))))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		return 0;
	}

IL_007a:
	{
		__this->___distTree_18 = (InflaterHuffmanTree_t1833 *)NULL;
		__this->___litlenTree_17 = (InflaterHuffmanTree_t1833 *)NULL;
		__this->___mode_4 = 2;
		return 1;
	}

IL_0091:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_t1826_il2cpp_TypeInfo_var);
		Int32U5BU5D_t1* L_14 = ((Inflater_t1826_StaticFields*)Inflater_t1826_il2cpp_TypeInfo_var->static_fields)->___CPLENS_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_15-(int32_t)((int32_t)257))));
		int32_t L_16 = ((int32_t)((int32_t)L_15-(int32_t)((int32_t)257)));
		__this->___repLength_7 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16));
		Int32U5BU5D_t1* L_17 = ((Inflater_t1826_StaticFields*)Inflater_t1826_il2cpp_TypeInfo_var->static_fields)->___CPLEXT_1;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)((int32_t)L_18-(int32_t)((int32_t)257))));
		int32_t L_19 = ((int32_t)((int32_t)L_18-(int32_t)((int32_t)257)));
		__this->___neededBits_6 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_17, L_19));
		goto IL_00c5;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t306_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00b9;
		throw e;
	}

CATCH_00b9:
	{ // begin catch(System.Exception)
		SharpZipBaseException_t1816 * L_20 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_20, (String_t*) &_stringLiteral2802, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	} // end catch (depth: 1)

IL_00c5:
	{
		int32_t L_21 = (__this->___neededBits_6);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_010c;
		}
	}
	{
		__this->___mode_4 = 8;
		StreamManipulator_t1830 * L_22 = (__this->___input_14);
		int32_t L_23 = (__this->___neededBits_6);
		NullCheck(L_22);
		int32_t L_24 = StreamManipulator_PeekBits_m10131(L_22, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_00ed;
		}
	}
	{
		return 0;
	}

IL_00ed:
	{
		StreamManipulator_t1830 * L_26 = (__this->___input_14);
		int32_t L_27 = (__this->___neededBits_6);
		NullCheck(L_26);
		StreamManipulator_DropBits_m10132(L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = (__this->___repLength_7);
		int32_t L_29 = V_2;
		__this->___repLength_7 = ((int32_t)((int32_t)L_28+(int32_t)L_29));
	}

IL_010c:
	{
		__this->___mode_4 = ((int32_t)9);
	}

IL_0114:
	{
		InflaterHuffmanTree_t1833 * L_30 = (__this->___distTree_18);
		StreamManipulator_t1830 * L_31 = (__this->___input_14);
		NullCheck(L_30);
		int32_t L_32 = InflaterHuffmanTree_GetSymbol_m10161(L_30, L_31, /*hidden argument*/NULL);
		V_1 = L_32;
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_012c;
		}
	}
	{
		return 0;
	}

IL_012c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_t1826_il2cpp_TypeInfo_var);
		Int32U5BU5D_t1* L_34 = ((Inflater_t1826_StaticFields*)Inflater_t1826_il2cpp_TypeInfo_var->static_fields)->___CPDIST_2;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		int32_t L_36 = L_35;
		__this->___repDist_8 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_34, L_36));
		Int32U5BU5D_t1* L_37 = ((Inflater_t1826_StaticFields*)Inflater_t1826_il2cpp_TypeInfo_var->static_fields)->___CPDEXT_3;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = L_38;
		__this->___neededBits_6 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_37, L_39));
		goto IL_0154;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t306_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0148;
		throw e;
	}

CATCH_0148:
	{ // begin catch(System.Exception)
		SharpZipBaseException_t1816 * L_40 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_40, (String_t*) &_stringLiteral2803, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_40);
	} // end catch (depth: 1)

IL_0154:
	{
		int32_t L_41 = (__this->___neededBits_6);
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_019c;
		}
	}
	{
		__this->___mode_4 = ((int32_t)10);
		StreamManipulator_t1830 * L_42 = (__this->___input_14);
		int32_t L_43 = (__this->___neededBits_6);
		NullCheck(L_42);
		int32_t L_44 = StreamManipulator_PeekBits_m10131(L_42, L_43, /*hidden argument*/NULL);
		V_3 = L_44;
		int32_t L_45 = V_3;
		if ((((int32_t)L_45) >= ((int32_t)0)))
		{
			goto IL_017d;
		}
	}
	{
		return 0;
	}

IL_017d:
	{
		StreamManipulator_t1830 * L_46 = (__this->___input_14);
		int32_t L_47 = (__this->___neededBits_6);
		NullCheck(L_46);
		StreamManipulator_DropBits_m10132(L_46, L_47, /*hidden argument*/NULL);
		int32_t L_48 = (__this->___repDist_8);
		int32_t L_49 = V_3;
		__this->___repDist_8 = ((int32_t)((int32_t)L_48+(int32_t)L_49));
	}

IL_019c:
	{
		OutputWindow_t1829 * L_50 = (__this->___outputWindow_15);
		int32_t L_51 = (__this->___repLength_7);
		int32_t L_52 = (__this->___repDist_8);
		NullCheck(L_50);
		OutputWindow_Repeat_m10124(L_50, L_51, L_52, /*hidden argument*/NULL);
		int32_t L_53 = V_0;
		int32_t L_54 = (__this->___repLength_7);
		V_0 = ((int32_t)((int32_t)L_53-(int32_t)L_54));
		__this->___mode_4 = 7;
		goto IL_01d0;
	}

IL_01c5:
	{
		SharpZipBaseException_t1816 * L_55 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_55, (String_t*) &_stringLiteral2804, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_55);
	}

IL_01d0:
	{
		int32_t L_56 = V_0;
		if ((((int32_t)L_56) >= ((int32_t)((int32_t)258))))
		{
			goto IL_0011;
		}
	}
	{
		return 1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::DecodeChksum()
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SharpZipBaseException_t1816_il2cpp_TypeInfo_var;
extern "C" bool Inflater_DecodeChksum_m10145 (Inflater_t1826 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SharpZipBaseException_t1816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4146);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t300* V_1 = {0};
	{
		goto IL_003f;
	}

IL_0002:
	{
		StreamManipulator_t1830 * L_0 = (__this->___input_14);
		NullCheck(L_0);
		int32_t L_1 = StreamManipulator_PeekBits_m10131(L_0, 8, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		StreamManipulator_t1830 * L_3 = (__this->___input_14);
		NullCheck(L_3);
		StreamManipulator_DropBits_m10132(L_3, 8, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___readAdler_5);
		int32_t L_5 = V_0;
		__this->___readAdler_5 = ((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)8))|(int32_t)L_5));
		int32_t L_6 = (__this->___neededBits_6);
		__this->___neededBits_6 = ((int32_t)((int32_t)L_6-(int32_t)8));
	}

IL_003f:
	{
		int32_t L_7 = (__this->___neededBits_6);
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		Adler32_t1818 * L_8 = (__this->___adler_19);
		NullCheck(L_8);
		int64_t L_9 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(4 /* System.Int64 ICSharpCode.SharpZipLib.Checksums.Adler32::get_Value() */, L_8);
		int32_t L_10 = (__this->___readAdler_5);
		if ((((int32_t)(((int32_t)L_9))) == ((int32_t)L_10)))
		{
			goto IL_00a1;
		}
	}
	{
		V_1 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 4));
		ObjectU5BU5D_t300* L_11 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral2805);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 0)) = (Object_t *)(String_t*) &_stringLiteral2805;
		ObjectU5BU5D_t300* L_12 = V_1;
		Adler32_t1818 * L_13 = (__this->___adler_19);
		NullCheck(L_13);
		int64_t L_14 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(4 /* System.Int64 ICSharpCode.SharpZipLib.Checksums.Adler32::get_Value() */, L_13);
		int32_t L_15 = (((int32_t)L_14));
		Object_t * L_16 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 1)) = (Object_t *)L_16;
		ObjectU5BU5D_t300* L_17 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral2806);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 2)) = (Object_t *)(String_t*) &_stringLiteral2806;
		ObjectU5BU5D_t300* L_18 = V_1;
		int32_t L_19 = (__this->___readAdler_5);
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 3);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 3)) = (Object_t *)L_21;
		ObjectU5BU5D_t300* L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m1267(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		SharpZipBaseException_t1816 * L_24 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		__this->___mode_4 = ((int32_t)12);
		return 0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::Decode()
extern TypeInfo* InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var;
extern TypeInfo* InflaterDynHeader_t1832_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SharpZipBaseException_t1816_il2cpp_TypeInfo_var;
extern "C" bool Inflater_Decode_m10146 (Inflater_t1826 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4153);
		InflaterDynHeader_t1832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4154);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		SharpZipBaseException_t1816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4146);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = (__this->___mode_4);
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (L_1 == 0)
		{
			goto IL_0046;
		}
		if (L_1 == 1)
		{
			goto IL_004d;
		}
		if (L_1 == 2)
		{
			goto IL_005b;
		}
		if (L_1 == 3)
		{
			goto IL_0136;
		}
		if (L_1 == 4)
		{
			goto IL_0167;
		}
		if (L_1 == 5)
		{
			goto IL_01a9;
		}
		if (L_1 == 6)
		{
			goto IL_01ef;
		}
		if (L_1 == 7)
		{
			goto IL_022d;
		}
		if (L_1 == 8)
		{
			goto IL_022d;
		}
		if (L_1 == 9)
		{
			goto IL_022d;
		}
		if (L_1 == 10)
		{
			goto IL_022d;
		}
		if (L_1 == 11)
		{
			goto IL_0054;
		}
		if (L_1 == 12)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0236;
	}

IL_0046:
	{
		bool L_2 = Inflater_DecodeHeader_m10142(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_004d:
	{
		bool L_3 = Inflater_DecodeDict_m10143(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0054:
	{
		bool L_4 = Inflater_DecodeChksum_m10145(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_005b:
	{
		bool L_5 = (__this->___isLastBlock_10);
		if (!L_5)
		{
			goto IL_0092;
		}
	}
	{
		bool L_6 = (__this->___noHeader_13);
		if (!L_6)
		{
			goto IL_0075;
		}
	}
	{
		__this->___mode_4 = ((int32_t)12);
		return 0;
	}

IL_0075:
	{
		StreamManipulator_t1830 * L_7 = (__this->___input_14);
		NullCheck(L_7);
		StreamManipulator_SkipToByteBoundary_m10135(L_7, /*hidden argument*/NULL);
		__this->___neededBits_6 = ((int32_t)32);
		__this->___mode_4 = ((int32_t)11);
		return 1;
	}

IL_0092:
	{
		StreamManipulator_t1830 * L_8 = (__this->___input_14);
		NullCheck(L_8);
		int32_t L_9 = StreamManipulator_PeekBits_m10131(L_8, 3, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		return 0;
	}

IL_00a5:
	{
		StreamManipulator_t1830 * L_11 = (__this->___input_14);
		NullCheck(L_11);
		StreamManipulator_DropBits_m10132(L_11, 3, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		if (!((int32_t)((int32_t)L_12&(int32_t)1)))
		{
			goto IL_00bd;
		}
	}
	{
		__this->___isLastBlock_10 = 1;
	}

IL_00bd:
	{
		int32_t L_13 = V_0;
		V_4 = ((int32_t)((int32_t)L_13>>(int32_t)1));
		int32_t L_14 = V_4;
		if (L_14 == 0)
		{
			goto IL_00d7;
		}
		if (L_14 == 1)
		{
			goto IL_00eb;
		}
		if (L_14 == 2)
		{
			goto IL_010a;
		}
	}
	{
		goto IL_011e;
	}

IL_00d7:
	{
		StreamManipulator_t1830 * L_15 = (__this->___input_14);
		NullCheck(L_15);
		StreamManipulator_SkipToByteBoundary_m10135(L_15, /*hidden argument*/NULL);
		__this->___mode_4 = 3;
		goto IL_0134;
	}

IL_00eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var);
		InflaterHuffmanTree_t1833 * L_16 = ((InflaterHuffmanTree_t1833_StaticFields*)InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var->static_fields)->___defLitLenTree_1;
		__this->___litlenTree_17 = L_16;
		InflaterHuffmanTree_t1833 * L_17 = ((InflaterHuffmanTree_t1833_StaticFields*)InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var->static_fields)->___defDistTree_2;
		__this->___distTree_18 = L_17;
		__this->___mode_4 = 7;
		goto IL_0134;
	}

IL_010a:
	{
		InflaterDynHeader_t1832 * L_18 = (InflaterDynHeader_t1832 *)il2cpp_codegen_object_new (InflaterDynHeader_t1832_il2cpp_TypeInfo_var);
		InflaterDynHeader__ctor_m10153(L_18, /*hidden argument*/NULL);
		__this->___dynHeader_16 = L_18;
		__this->___mode_4 = 6;
		goto IL_0134;
	}

IL_011e:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m1248(NULL /*static, unused*/, (String_t*) &_stringLiteral2807, L_21, /*hidden argument*/NULL);
		SharpZipBaseException_t1816 * L_23 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_23, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_0134:
	{
		return 1;
	}

IL_0136:
	{
		StreamManipulator_t1830 * L_24 = (__this->___input_14);
		NullCheck(L_24);
		int32_t L_25 = StreamManipulator_PeekBits_m10131(L_24, ((int32_t)16), /*hidden argument*/NULL);
		int32_t L_26 = L_25;
		V_5 = L_26;
		__this->___uncomprLen_9 = L_26;
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0153;
		}
	}
	{
		return 0;
	}

IL_0153:
	{
		StreamManipulator_t1830 * L_28 = (__this->___input_14);
		NullCheck(L_28);
		StreamManipulator_DropBits_m10132(L_28, ((int32_t)16), /*hidden argument*/NULL);
		__this->___mode_4 = 4;
	}

IL_0167:
	{
		StreamManipulator_t1830 * L_29 = (__this->___input_14);
		NullCheck(L_29);
		int32_t L_30 = StreamManipulator_PeekBits_m10131(L_29, ((int32_t)16), /*hidden argument*/NULL);
		V_1 = L_30;
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_017b;
		}
	}
	{
		return 0;
	}

IL_017b:
	{
		StreamManipulator_t1830 * L_32 = (__this->___input_14);
		NullCheck(L_32);
		StreamManipulator_DropBits_m10132(L_32, ((int32_t)16), /*hidden argument*/NULL);
		int32_t L_33 = V_1;
		int32_t L_34 = (__this->___uncomprLen_9);
		if ((((int32_t)L_33) == ((int32_t)((int32_t)((int32_t)L_34^(int32_t)((int32_t)65535))))))
		{
			goto IL_01a2;
		}
	}
	{
		SharpZipBaseException_t1816 * L_35 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_35, (String_t*) &_stringLiteral2808, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_35);
	}

IL_01a2:
	{
		__this->___mode_4 = 5;
	}

IL_01a9:
	{
		OutputWindow_t1829 * L_36 = (__this->___outputWindow_15);
		StreamManipulator_t1830 * L_37 = (__this->___input_14);
		int32_t L_38 = (__this->___uncomprLen_9);
		NullCheck(L_36);
		int32_t L_39 = OutputWindow_CopyStored_m10125(L_36, L_37, L_38, /*hidden argument*/NULL);
		V_2 = L_39;
		int32_t L_40 = (__this->___uncomprLen_9);
		int32_t L_41 = V_2;
		__this->___uncomprLen_9 = ((int32_t)((int32_t)L_40-(int32_t)L_41));
		int32_t L_42 = (__this->___uncomprLen_9);
		if (L_42)
		{
			goto IL_01e0;
		}
	}
	{
		__this->___mode_4 = 2;
		return 1;
	}

IL_01e0:
	{
		StreamManipulator_t1830 * L_43 = (__this->___input_14);
		NullCheck(L_43);
		bool L_44 = StreamManipulator_get_IsNeedingInput_m10136(L_43, /*hidden argument*/NULL);
		return ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
	}

IL_01ef:
	{
		InflaterDynHeader_t1832 * L_45 = (__this->___dynHeader_16);
		StreamManipulator_t1830 * L_46 = (__this->___input_14);
		NullCheck(L_45);
		bool L_47 = InflaterDynHeader_Decode_m10154(L_45, L_46, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_0204;
		}
	}
	{
		return 0;
	}

IL_0204:
	{
		InflaterDynHeader_t1832 * L_48 = (__this->___dynHeader_16);
		NullCheck(L_48);
		InflaterHuffmanTree_t1833 * L_49 = InflaterDynHeader_BuildLitLenTree_m10155(L_48, /*hidden argument*/NULL);
		__this->___litlenTree_17 = L_49;
		InflaterDynHeader_t1832 * L_50 = (__this->___dynHeader_16);
		NullCheck(L_50);
		InflaterHuffmanTree_t1833 * L_51 = InflaterDynHeader_BuildDistTree_m10156(L_50, /*hidden argument*/NULL);
		__this->___distTree_18 = L_51;
		__this->___mode_4 = 7;
	}

IL_022d:
	{
		bool L_52 = Inflater_DecodeHuffman_m10144(__this, /*hidden argument*/NULL);
		return L_52;
	}

IL_0234:
	{
		return 0;
	}

IL_0236:
	{
		SharpZipBaseException_t1816 * L_53 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_53, (String_t*) &_stringLiteral2809, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_53);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C" void Inflater_SetInput_m10147 (Inflater_t1826 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		StreamManipulator_t1830 * L_0 = (__this->___input_14);
		ByteU5BU5D_t159* L_1 = ___buffer;
		int32_t L_2 = ___index;
		int32_t L_3 = ___count;
		NullCheck(L_0);
		StreamManipulator_SetInput_m10138(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		int64_t L_4 = (__this->___totalIn_12);
		int32_t L_5 = ___count;
		__this->___totalIn_12 = ((int64_t)((int64_t)L_4+(int64_t)(((int64_t)L_5))));
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" int32_t Inflater_Inflate_m10148 (Inflater_t1826 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t159* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral1447, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral1110, (String_t*) &_stringLiteral2810, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = ___offset;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_5 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_5, (String_t*) &_stringLiteral1379, (String_t*) &_stringLiteral2811, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = ___offset;
		int32_t L_7 = ___count;
		ByteU5BU5D_t159* L_8 = ___buffer;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))) <= ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t356 * L_9 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_9, (String_t*) &_stringLiteral2812, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0049:
	{
		int32_t L_10 = ___count;
		if (L_10)
		{
			goto IL_005d;
		}
	}
	{
		bool L_11 = Inflater_get_IsFinished_m10151(__this, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		Inflater_Decode_m10146(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return 0;
	}

IL_005d:
	{
		V_0 = 0;
	}

IL_005f:
	{
		int32_t L_12 = (__this->___mode_4);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)11))))
		{
			goto IL_00ac;
		}
	}
	{
		OutputWindow_t1829 * L_13 = (__this->___outputWindow_15);
		ByteU5BU5D_t159* L_14 = ___buffer;
		int32_t L_15 = ___offset;
		int32_t L_16 = ___count;
		NullCheck(L_13);
		int32_t L_17 = OutputWindow_CopyOutput_m10128(L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00ac;
		}
	}
	{
		Adler32_t1818 * L_19 = (__this->___adler_19);
		ByteU5BU5D_t159* L_20 = ___buffer;
		int32_t L_21 = ___offset;
		int32_t L_22 = V_1;
		NullCheck(L_19);
		VirtActionInvoker3< ByteU5BU5D_t159*, int32_t, int32_t >::Invoke(6 /* System.Void ICSharpCode.SharpZipLib.Checksums.Adler32::Update(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, L_21, L_22);
		int32_t L_23 = ___offset;
		int32_t L_24 = V_1;
		___offset = ((int32_t)((int32_t)L_23+(int32_t)L_24));
		int32_t L_25 = V_0;
		int32_t L_26 = V_1;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)L_26));
		int64_t L_27 = (__this->___totalOut_11);
		int32_t L_28 = V_1;
		__this->___totalOut_11 = ((int64_t)((int64_t)L_27+(int64_t)(((int64_t)L_28))));
		int32_t L_29 = ___count;
		int32_t L_30 = V_1;
		___count = ((int32_t)((int32_t)L_29-(int32_t)L_30));
		int32_t L_31 = ___count;
		if (L_31)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_32 = V_0;
		return L_32;
	}

IL_00ac:
	{
		bool L_33 = Inflater_Decode_m10146(__this, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_005f;
		}
	}
	{
		OutputWindow_t1829 * L_34 = (__this->___outputWindow_15);
		NullCheck(L_34);
		int32_t L_35 = OutputWindow_GetAvailable_m10127(L_34, /*hidden argument*/NULL);
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_36 = (__this->___mode_4);
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_005f;
		}
	}

IL_00cc:
	{
		int32_t L_37 = V_0;
		return L_37;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsNeedingInput()
extern "C" bool Inflater_get_IsNeedingInput_m10149 (Inflater_t1826 * __this, const MethodInfo* method)
{
	{
		StreamManipulator_t1830 * L_0 = (__this->___input_14);
		NullCheck(L_0);
		bool L_1 = StreamManipulator_get_IsNeedingInput_m10136(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsNeedingDictionary()
extern "C" bool Inflater_get_IsNeedingDictionary_m10150 (Inflater_t1826 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mode_4);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = (__this->___neededBits_6);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0013:
	{
		return 0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::get_IsFinished()
extern "C" bool Inflater_get_IsFinished_m10151 (Inflater_t1826 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mode_4);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0019;
		}
	}
	{
		OutputWindow_t1829 * L_1 = (__this->___outputWindow_15);
		NullCheck(L_1);
		int32_t L_2 = OutputWindow_GetAvailable_m10127(L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0019:
	{
		return 0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::.cctor()
extern TypeInfo* Int32U5BU5D_t1_il2cpp_TypeInfo_var;
extern TypeInfo* Inflater_t1826_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D1_3_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D2_4_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D3_5_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D4_6_FieldInfo_var;
extern "C" void Inflater__cctor_m10152 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		Inflater_t1826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4152);
		U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D1_3_FieldInfo_var = il2cpp_codegen_field_info_from_index(4141, 3);
		U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D2_4_FieldInfo_var = il2cpp_codegen_field_info_from_index(4141, 4);
		U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D3_5_FieldInfo_var = il2cpp_codegen_field_info_from_index(4141, 5);
		U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D4_6_FieldInfo_var = il2cpp_codegen_field_info_from_index(4141, 6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Int32U5BU5D_t1* L_0 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, ((int32_t)29)));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D1_3_FieldInfo_var), /*hidden argument*/NULL);
		((Inflater_t1826_StaticFields*)Inflater_t1826_il2cpp_TypeInfo_var->static_fields)->___CPLENS_0 = L_0;
		Int32U5BU5D_t1* L_1 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, ((int32_t)29)));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D2_4_FieldInfo_var), /*hidden argument*/NULL);
		((Inflater_t1826_StaticFields*)Inflater_t1826_il2cpp_TypeInfo_var->static_fields)->___CPLEXT_1 = L_1;
		Int32U5BU5D_t1* L_2 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, ((int32_t)30)));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D3_5_FieldInfo_var), /*hidden argument*/NULL);
		((Inflater_t1826_StaticFields*)Inflater_t1826_il2cpp_TypeInfo_var->static_fields)->___CPDIST_2 = L_2;
		Int32U5BU5D_t1* L_3 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, ((int32_t)30)));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c0U2D4_6_FieldInfo_var), /*hidden argument*/NULL);
		((Inflater_t1826_StaticFields*)Inflater_t1826_il2cpp_TypeInfo_var->static_fields)->___CPDEXT_3 = L_3;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=12
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_0.h"


// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::.ctor()
extern "C" void InflaterDynHeader__ctor_m10153 (InflaterDynHeader_t1832 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::Decode(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator)
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern TypeInfo* InflaterDynHeader_t1832_il2cpp_TypeInfo_var;
extern TypeInfo* InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var;
extern TypeInfo* SharpZipBaseException_t1816_il2cpp_TypeInfo_var;
extern "C" bool InflaterDynHeader_Decode_m10154 (InflaterDynHeader_t1832 * __this, StreamManipulator_t1830 * ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		InflaterDynHeader_t1832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4154);
		InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4153);
		SharpZipBaseException_t1816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4146);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;

IL_0000:
	{
		int32_t L_0 = (__this->___mode_6);
		V_4 = L_0;
		int32_t L_1 = V_4;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0061;
		}
		if (L_1 == 2)
		{
			goto IL_00b9;
		}
		if (L_1 == 3)
		{
			goto IL_013b;
		}
		if (L_1 == 4)
		{
			goto IL_01a8;
		}
		if (L_1 == 5)
		{
			goto IL_01ee;
		}
	}
	{
		goto IL_0000;
	}

IL_0029:
	{
		StreamManipulator_t1830 * L_2 = ___input;
		NullCheck(L_2);
		int32_t L_3 = StreamManipulator_PeekBits_m10131(L_2, 5, /*hidden argument*/NULL);
		__this->___lnum_7 = L_3;
		int32_t L_4 = (__this->___lnum_7);
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		int32_t L_5 = (__this->___lnum_7);
		__this->___lnum_7 = ((int32_t)((int32_t)L_5+(int32_t)((int32_t)257)));
		StreamManipulator_t1830 * L_6 = ___input;
		NullCheck(L_6);
		StreamManipulator_DropBits_m10132(L_6, 5, /*hidden argument*/NULL);
		__this->___mode_6 = 1;
	}

IL_0061:
	{
		StreamManipulator_t1830 * L_7 = ___input;
		NullCheck(L_7);
		int32_t L_8 = StreamManipulator_PeekBits_m10131(L_7, 5, /*hidden argument*/NULL);
		__this->___dnum_8 = L_8;
		int32_t L_9 = (__this->___dnum_8);
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		return 0;
	}

IL_0079:
	{
		int32_t L_10 = (__this->___dnum_8);
		__this->___dnum_8 = ((int32_t)((int32_t)L_10+(int32_t)1));
		StreamManipulator_t1830 * L_11 = ___input;
		NullCheck(L_11);
		StreamManipulator_DropBits_m10132(L_11, 5, /*hidden argument*/NULL);
		int32_t L_12 = (__this->___lnum_7);
		int32_t L_13 = (__this->___dnum_8);
		__this->___num_10 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = (__this->___num_10);
		__this->___litdistLens_4 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, L_14));
		__this->___mode_6 = 2;
	}

IL_00b9:
	{
		StreamManipulator_t1830 * L_15 = ___input;
		NullCheck(L_15);
		int32_t L_16 = StreamManipulator_PeekBits_m10131(L_15, 4, /*hidden argument*/NULL);
		__this->___blnum_9 = L_16;
		int32_t L_17 = (__this->___blnum_9);
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_00d1;
		}
	}
	{
		return 0;
	}

IL_00d1:
	{
		int32_t L_18 = (__this->___blnum_9);
		__this->___blnum_9 = ((int32_t)((int32_t)L_18+(int32_t)4));
		StreamManipulator_t1830 * L_19 = ___input;
		NullCheck(L_19);
		StreamManipulator_DropBits_m10132(L_19, 4, /*hidden argument*/NULL);
		__this->___blLens_3 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)19)));
		__this->___ptr_13 = 0;
		__this->___mode_6 = 3;
		goto IL_013b;
	}

IL_0103:
	{
		StreamManipulator_t1830 * L_20 = ___input;
		NullCheck(L_20);
		int32_t L_21 = StreamManipulator_PeekBits_m10131(L_20, 3, /*hidden argument*/NULL);
		V_0 = L_21;
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_0111;
		}
	}
	{
		return 0;
	}

IL_0111:
	{
		StreamManipulator_t1830 * L_23 = ___input;
		NullCheck(L_23);
		StreamManipulator_DropBits_m10132(L_23, 3, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_24 = (__this->___blLens_3);
		IL2CPP_RUNTIME_CLASS_INIT(InflaterDynHeader_t1832_il2cpp_TypeInfo_var);
		Int32U5BU5D_t1* L_25 = ((InflaterDynHeader_t1832_StaticFields*)InflaterDynHeader_t1832_il2cpp_TypeInfo_var->static_fields)->___BL_ORDER_2;
		int32_t L_26 = (__this->___ptr_13);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = L_26;
		int32_t L_28 = V_0;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, (*(int32_t*)(int32_t*)SZArrayLdElema(L_25, L_27)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_24, (*(int32_t*)(int32_t*)SZArrayLdElema(L_25, L_27)))) = (uint8_t)(((uint8_t)L_28));
		int32_t L_29 = (__this->___ptr_13);
		__this->___ptr_13 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_013b:
	{
		int32_t L_30 = (__this->___ptr_13);
		int32_t L_31 = (__this->___blnum_9);
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0103;
		}
	}
	{
		ByteU5BU5D_t159* L_32 = (__this->___blLens_3);
		InflaterHuffmanTree_t1833 * L_33 = (InflaterHuffmanTree_t1833 *)il2cpp_codegen_object_new (InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var);
		InflaterHuffmanTree__ctor_m10159(L_33, L_32, /*hidden argument*/NULL);
		__this->___blTree_5 = L_33;
		__this->___blLens_3 = (ByteU5BU5D_t159*)NULL;
		__this->___ptr_13 = 0;
		__this->___mode_6 = 4;
		goto IL_01a8;
	}

IL_0171:
	{
		ByteU5BU5D_t159* L_34 = (__this->___litdistLens_4);
		int32_t L_35 = (__this->___ptr_13);
		int32_t L_36 = L_35;
		V_5 = L_36;
		__this->___ptr_13 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_5;
		int32_t L_38 = V_1;
		uint8_t L_39 = (((uint8_t)L_38));
		V_6 = L_39;
		__this->___lastLen_12 = L_39;
		uint8_t L_40 = V_6;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_37);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_37)) = (uint8_t)L_40;
		int32_t L_41 = (__this->___ptr_13);
		int32_t L_42 = (__this->___num_10);
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_01a8;
		}
	}
	{
		return 1;
	}

IL_01a8:
	{
		InflaterHuffmanTree_t1833 * L_43 = (__this->___blTree_5);
		StreamManipulator_t1830 * L_44 = ___input;
		NullCheck(L_43);
		int32_t L_45 = InflaterHuffmanTree_GetSymbol_m10161(L_43, L_44, /*hidden argument*/NULL);
		int32_t L_46 = L_45;
		V_1 = L_46;
		if (!((int32_t)((int32_t)L_46&(int32_t)((int32_t)-16))))
		{
			goto IL_0171;
		}
	}
	{
		int32_t L_47 = V_1;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_01c1;
		}
	}
	{
		return 0;
	}

IL_01c1:
	{
		int32_t L_48 = V_1;
		if ((((int32_t)L_48) < ((int32_t)((int32_t)17))))
		{
			goto IL_01cf;
		}
	}
	{
		__this->___lastLen_12 = 0;
		goto IL_01dd;
	}

IL_01cf:
	{
		int32_t L_49 = (__this->___ptr_13);
		if (L_49)
		{
			goto IL_01dd;
		}
	}
	{
		SharpZipBaseException_t1816 * L_50 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10059(L_50, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_50);
	}

IL_01dd:
	{
		int32_t L_51 = V_1;
		__this->___repSymbol_11 = ((int32_t)((int32_t)L_51-(int32_t)((int32_t)16)));
		__this->___mode_6 = 5;
	}

IL_01ee:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InflaterDynHeader_t1832_il2cpp_TypeInfo_var);
		Int32U5BU5D_t1* L_52 = ((InflaterDynHeader_t1832_StaticFields*)InflaterDynHeader_t1832_il2cpp_TypeInfo_var->static_fields)->___repBits_1;
		int32_t L_53 = (__this->___repSymbol_11);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		int32_t L_54 = L_53;
		V_2 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_52, L_54));
		StreamManipulator_t1830 * L_55 = ___input;
		int32_t L_56 = V_2;
		NullCheck(L_55);
		int32_t L_57 = StreamManipulator_PeekBits_m10131(L_55, L_56, /*hidden argument*/NULL);
		V_3 = L_57;
		int32_t L_58 = V_3;
		if ((((int32_t)L_58) >= ((int32_t)0)))
		{
			goto IL_0209;
		}
	}
	{
		return 0;
	}

IL_0209:
	{
		StreamManipulator_t1830 * L_59 = ___input;
		int32_t L_60 = V_2;
		NullCheck(L_59);
		StreamManipulator_DropBits_m10132(L_59, L_60, /*hidden argument*/NULL);
		int32_t L_61 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InflaterDynHeader_t1832_il2cpp_TypeInfo_var);
		Int32U5BU5D_t1* L_62 = ((InflaterDynHeader_t1832_StaticFields*)InflaterDynHeader_t1832_il2cpp_TypeInfo_var->static_fields)->___repMin_0;
		int32_t L_63 = (__this->___repSymbol_11);
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		int32_t L_64 = L_63;
		V_3 = ((int32_t)((int32_t)L_61+(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_62, L_64))));
		int32_t L_65 = (__this->___ptr_13);
		int32_t L_66 = V_3;
		int32_t L_67 = (__this->___num_10);
		if ((((int32_t)((int32_t)((int32_t)L_65+(int32_t)L_66))) <= ((int32_t)L_67)))
		{
			goto IL_0255;
		}
	}
	{
		SharpZipBaseException_t1816 * L_68 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10059(L_68, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_68);
	}

IL_0235:
	{
		ByteU5BU5D_t159* L_69 = (__this->___litdistLens_4);
		int32_t L_70 = (__this->___ptr_13);
		int32_t L_71 = L_70;
		V_7 = L_71;
		__this->___ptr_13 = ((int32_t)((int32_t)L_71+(int32_t)1));
		int32_t L_72 = V_7;
		uint8_t L_73 = (__this->___lastLen_12);
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_72);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_69, L_72)) = (uint8_t)L_73;
	}

IL_0255:
	{
		int32_t L_74 = V_3;
		int32_t L_75 = L_74;
		V_3 = ((int32_t)((int32_t)L_75-(int32_t)1));
		if ((((int32_t)L_75) > ((int32_t)0)))
		{
			goto IL_0235;
		}
	}
	{
		int32_t L_76 = (__this->___ptr_13);
		int32_t L_77 = (__this->___num_10);
		if ((!(((uint32_t)L_76) == ((uint32_t)L_77))))
		{
			goto IL_026d;
		}
	}
	{
		return 1;
	}

IL_026d:
	{
		__this->___mode_6 = 4;
		goto IL_0000;
	}
}
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::BuildLitLenTree()
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern TypeInfo* InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var;
extern "C" InflaterHuffmanTree_t1833 * InflaterDynHeader_BuildLitLenTree_m10155 (InflaterDynHeader_t1832 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4153);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t159* V_0 = {0};
	{
		int32_t L_0 = (__this->___lnum_7);
		V_0 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, L_0));
		ByteU5BU5D_t159* L_1 = (__this->___litdistLens_4);
		ByteU5BU5D_t159* L_2 = V_0;
		int32_t L_3 = (__this->___lnum_7);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, 0, (Array_t *)(Array_t *)L_2, 0, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_4 = V_0;
		InflaterHuffmanTree_t1833 * L_5 = (InflaterHuffmanTree_t1833 *)il2cpp_codegen_object_new (InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var);
		InflaterHuffmanTree__ctor_m10159(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::BuildDistTree()
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern TypeInfo* InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var;
extern "C" InflaterHuffmanTree_t1833 * InflaterDynHeader_BuildDistTree_m10156 (InflaterDynHeader_t1832 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4153);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t159* V_0 = {0};
	{
		int32_t L_0 = (__this->___dnum_8);
		V_0 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, L_0));
		ByteU5BU5D_t159* L_1 = (__this->___litdistLens_4);
		int32_t L_2 = (__this->___lnum_7);
		ByteU5BU5D_t159* L_3 = V_0;
		int32_t L_4 = (__this->___dnum_8);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, L_2, (Array_t *)(Array_t *)L_3, 0, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_5 = V_0;
		InflaterHuffmanTree_t1833 * L_6 = (InflaterHuffmanTree_t1833 *)il2cpp_codegen_object_new (InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var);
		InflaterHuffmanTree__ctor_m10159(L_6, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader::.cctor()
extern TypeInfo* Int32U5BU5D_t1_il2cpp_TypeInfo_var;
extern TypeInfo* InflaterDynHeader_t1832_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c1U2D1_7_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c1U2D2_8_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c1U2D3_9_FieldInfo_var;
extern "C" void InflaterDynHeader__cctor_m10157 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		InflaterDynHeader_t1832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4154);
		U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c1U2D1_7_FieldInfo_var = il2cpp_codegen_field_info_from_index(4141, 7);
		U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c1U2D2_8_FieldInfo_var = il2cpp_codegen_field_info_from_index(4141, 8);
		U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c1U2D3_9_FieldInfo_var = il2cpp_codegen_field_info_from_index(4141, 9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Int32U5BU5D_t1* L_0 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c1U2D1_7_FieldInfo_var), /*hidden argument*/NULL);
		((InflaterDynHeader_t1832_StaticFields*)InflaterDynHeader_t1832_il2cpp_TypeInfo_var->static_fields)->___repMin_0 = L_0;
		Int32U5BU5D_t1* L_1 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, 3));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c1U2D2_8_FieldInfo_var), /*hidden argument*/NULL);
		((InflaterDynHeader_t1832_StaticFields*)InflaterDynHeader_t1832_il2cpp_TypeInfo_var->static_fields)->___repBits_1 = L_1;
		Int32U5BU5D_t1* L_2 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, ((int32_t)19)));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B6C7CFC05U2D3661U2D46A0U2D98ABU2DFC6F81793937U7D_t1859____U24U24method0x60004c1U2D3_9_FieldInfo_var), /*hidden argument*/NULL);
		((InflaterDynHeader_t1832_StaticFields*)InflaterDynHeader_t1832_il2cpp_TypeInfo_var->static_fields)->___BL_ORDER_2 = L_2;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::.cctor()
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern TypeInfo* InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t306_il2cpp_TypeInfo_var;
extern TypeInfo* SharpZipBaseException_t1816_il2cpp_TypeInfo_var;
extern "C" void InflaterHuffmanTree__cctor_m10158 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4153);
		Exception_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		SharpZipBaseException_t1816_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4146);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t159* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			V_0 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)288)));
			V_1 = 0;
			goto IL_0017;
		}

IL_000f:
		{
			ByteU5BU5D_t159* L_0 = V_0;
			int32_t L_1 = V_1;
			int32_t L_2 = L_1;
			V_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
			NullCheck(L_0);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_2);
			*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2)) = (uint8_t)8;
		}

IL_0017:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) < ((int32_t)((int32_t)144))))
			{
				goto IL_000f;
			}
		}

IL_001f:
		{
			goto IL_002a;
		}

IL_0021:
		{
			ByteU5BU5D_t159* L_4 = V_0;
			int32_t L_5 = V_1;
			int32_t L_6 = L_5;
			V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
			NullCheck(L_4);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_6);
			*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_6)) = (uint8_t)((int32_t)9);
		}

IL_002a:
		{
			int32_t L_7 = V_1;
			if ((((int32_t)L_7) < ((int32_t)((int32_t)256))))
			{
				goto IL_0021;
			}
		}

IL_0032:
		{
			goto IL_003c;
		}

IL_0034:
		{
			ByteU5BU5D_t159* L_8 = V_0;
			int32_t L_9 = V_1;
			int32_t L_10 = L_9;
			V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_10);
			*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_10)) = (uint8_t)7;
		}

IL_003c:
		{
			int32_t L_11 = V_1;
			if ((((int32_t)L_11) < ((int32_t)((int32_t)280))))
			{
				goto IL_0034;
			}
		}

IL_0044:
		{
			goto IL_004e;
		}

IL_0046:
		{
			ByteU5BU5D_t159* L_12 = V_0;
			int32_t L_13 = V_1;
			int32_t L_14 = L_13;
			V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_14);
			*((uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_14)) = (uint8_t)8;
		}

IL_004e:
		{
			int32_t L_15 = V_1;
			if ((((int32_t)L_15) < ((int32_t)((int32_t)288))))
			{
				goto IL_0046;
			}
		}

IL_0056:
		{
			ByteU5BU5D_t159* L_16 = V_0;
			InflaterHuffmanTree_t1833 * L_17 = (InflaterHuffmanTree_t1833 *)il2cpp_codegen_object_new (InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var);
			InflaterHuffmanTree__ctor_m10159(L_17, L_16, /*hidden argument*/NULL);
			((InflaterHuffmanTree_t1833_StaticFields*)InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var->static_fields)->___defLitLenTree_1 = L_17;
			V_0 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)32)));
			V_1 = 0;
			goto IL_0075;
		}

IL_006d:
		{
			ByteU5BU5D_t159* L_18 = V_0;
			int32_t L_19 = V_1;
			int32_t L_20 = L_19;
			V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
			NullCheck(L_18);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
			*((uint8_t*)(uint8_t*)SZArrayLdElema(L_18, L_20)) = (uint8_t)5;
		}

IL_0075:
		{
			int32_t L_21 = V_1;
			if ((((int32_t)L_21) < ((int32_t)((int32_t)32))))
			{
				goto IL_006d;
			}
		}

IL_007a:
		{
			ByteU5BU5D_t159* L_22 = V_0;
			InflaterHuffmanTree_t1833 * L_23 = (InflaterHuffmanTree_t1833 *)il2cpp_codegen_object_new (InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var);
			InflaterHuffmanTree__ctor_m10159(L_23, L_22, /*hidden argument*/NULL);
			((InflaterHuffmanTree_t1833_StaticFields*)InflaterHuffmanTree_t1833_il2cpp_TypeInfo_var->static_fields)->___defDistTree_2 = L_23;
			goto IL_0093;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t306_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0087;
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		SharpZipBaseException_t1816 * L_24 = (SharpZipBaseException_t1816 *)il2cpp_codegen_object_new (SharpZipBaseException_t1816_il2cpp_TypeInfo_var);
		SharpZipBaseException__ctor_m10060(L_24, (String_t*) &_stringLiteral2813, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	} // end catch (depth: 1)

IL_0093:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::.ctor(System.Byte[])
extern "C" void InflaterHuffmanTree__ctor_m10159 (InflaterHuffmanTree_t1833 * __this, ByteU5BU5D_t159* ___codeLengths, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_0 = ___codeLengths;
		InflaterHuffmanTree_BuildTree_m10160(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::BuildTree(System.Byte[])
extern TypeInfo* Int32U5BU5D_t1_il2cpp_TypeInfo_var;
extern TypeInfo* Int16U5BU5D_t886_il2cpp_TypeInfo_var;
extern TypeInfo* DeflaterHuffman_t1831_il2cpp_TypeInfo_var;
extern "C" void InflaterHuffmanTree_BuildTree_m10160 (InflaterHuffmanTree_t1833 * __this, ByteU5BU5D_t159* ___codeLengths, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		Int16U5BU5D_t886_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1864);
		DeflaterHuffman_t1831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4148);
		s_Il2CppMethodIntialized = true;
	}
	Int32U5BU5D_t1* V_0 = {0};
	Int32U5BU5D_t1* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	{
		V_0 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, ((int32_t)16)));
		V_1 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, ((int32_t)16)));
		V_2 = 0;
		goto IL_0034;
	}

IL_0014:
	{
		ByteU5BU5D_t159* L_0 = ___codeLengths;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_3 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = V_3;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		Int32U5BU5D_t1* L_4 = V_0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t* L_6 = ((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5));
		*L_6 = ((int32_t)((int32_t)(*(int32_t*)L_6)+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_8 = V_2;
		ByteU5BU5D_t159* L_9 = ___codeLengths;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		V_4 = 0;
		V_5 = ((int32_t)512);
		V_6 = 1;
		goto IL_0096;
	}

IL_0049:
	{
		Int32U5BU5D_t1* L_10 = V_1;
		int32_t L_11 = V_6;
		int32_t L_12 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_11)) = (int32_t)L_12;
		int32_t L_13 = V_4;
		Int32U5BU5D_t1* L_14 = V_0;
		int32_t L_15 = V_6;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = V_6;
		V_4 = ((int32_t)((int32_t)L_13+(int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)16)-(int32_t)L_17))&(int32_t)((int32_t)31)))))));
		int32_t L_18 = V_6;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)10))))
		{
			goto IL_0090;
		}
	}
	{
		Int32U5BU5D_t1* L_19 = V_1;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		V_7 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_19, L_21))&(int32_t)((int32_t)130944)));
		int32_t L_22 = V_4;
		V_8 = ((int32_t)((int32_t)L_22&(int32_t)((int32_t)130944)));
		int32_t L_23 = V_5;
		int32_t L_24 = V_8;
		int32_t L_25 = V_7;
		int32_t L_26 = V_6;
		V_5 = ((int32_t)((int32_t)L_23+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_24-(int32_t)L_25))>>(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)16)-(int32_t)L_26))&(int32_t)((int32_t)31)))))));
	}

IL_0090:
	{
		int32_t L_27 = V_6;
		V_6 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0096:
	{
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_29 = V_5;
		__this->___tree_0 = ((Int16U5BU5D_t886*)SZArrayNew(Int16U5BU5D_t886_il2cpp_TypeInfo_var, L_29));
		V_9 = ((int32_t)512);
		V_10 = ((int32_t)15);
		goto IL_011e;
	}

IL_00b6:
	{
		int32_t L_30 = V_4;
		V_11 = ((int32_t)((int32_t)L_30&(int32_t)((int32_t)130944)));
		int32_t L_31 = V_4;
		Int32U5BU5D_t1* L_32 = V_0;
		int32_t L_33 = V_10;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = L_33;
		int32_t L_35 = V_10;
		V_4 = ((int32_t)((int32_t)L_31-(int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_32, L_34))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)16)-(int32_t)L_35))&(int32_t)((int32_t)31)))))));
		int32_t L_36 = V_4;
		V_12 = ((int32_t)((int32_t)L_36&(int32_t)((int32_t)130944)));
		int32_t L_37 = V_12;
		V_13 = L_37;
		goto IL_0112;
	}

IL_00e2:
	{
		Int16U5BU5D_t886* L_38 = (__this->___tree_0);
		int32_t L_39 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(DeflaterHuffman_t1831_il2cpp_TypeInfo_var);
		int16_t L_40 = DeflaterHuffman_BitReverse_m10140(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		int32_t L_41 = V_9;
		int32_t L_42 = V_10;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_40);
		*((int16_t*)(int16_t*)SZArrayLdElema(L_38, L_40)) = (int16_t)(((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)((-L_41))<<(int32_t)4))|(int32_t)L_42))));
		int32_t L_43 = V_9;
		int32_t L_44 = V_10;
		V_9 = ((int32_t)((int32_t)L_43+(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44-(int32_t)((int32_t)9)))&(int32_t)((int32_t)31)))))));
		int32_t L_45 = V_13;
		V_13 = ((int32_t)((int32_t)L_45+(int32_t)((int32_t)128)));
	}

IL_0112:
	{
		int32_t L_46 = V_13;
		int32_t L_47 = V_11;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_48 = V_10;
		V_10 = ((int32_t)((int32_t)L_48-(int32_t)1));
	}

IL_011e:
	{
		int32_t L_49 = V_10;
		if ((((int32_t)L_49) >= ((int32_t)((int32_t)10))))
		{
			goto IL_00b6;
		}
	}
	{
		V_14 = 0;
		goto IL_01da;
	}

IL_012c:
	{
		ByteU5BU5D_t159* L_50 = ___codeLengths;
		int32_t L_51 = V_14;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = L_51;
		V_15 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_50, L_52));
		int32_t L_53 = V_15;
		if (!L_53)
		{
			goto IL_01d4;
		}
	}
	{
		Int32U5BU5D_t1* L_54 = V_1;
		int32_t L_55 = V_15;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		int32_t L_56 = L_55;
		V_4 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_54, L_56));
		int32_t L_57 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(DeflaterHuffman_t1831_il2cpp_TypeInfo_var);
		int16_t L_58 = DeflaterHuffman_BitReverse_m10140(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		V_16 = L_58;
		int32_t L_59 = V_15;
		if ((((int32_t)L_59) > ((int32_t)((int32_t)9))))
		{
			goto IL_0176;
		}
	}

IL_014e:
	{
		Int16U5BU5D_t886* L_60 = (__this->___tree_0);
		int32_t L_61 = V_16;
		int32_t L_62 = V_14;
		int32_t L_63 = V_15;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		*((int16_t*)(int16_t*)SZArrayLdElema(L_60, L_61)) = (int16_t)(((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_62<<(int32_t)4))|(int32_t)L_63))));
		int32_t L_64 = V_16;
		int32_t L_65 = V_15;
		V_16 = ((int32_t)((int32_t)L_64+(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_65&(int32_t)((int32_t)31)))))));
		int32_t L_66 = V_16;
		if ((((int32_t)L_66) < ((int32_t)((int32_t)512))))
		{
			goto IL_014e;
		}
	}
	{
		goto IL_01c3;
	}

IL_0176:
	{
		Int16U5BU5D_t886* L_67 = (__this->___tree_0);
		int32_t L_68 = V_16;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, ((int32_t)((int32_t)L_68&(int32_t)((int32_t)511))));
		int32_t L_69 = ((int32_t)((int32_t)L_68&(int32_t)((int32_t)511)));
		V_17 = (*(int16_t*)(int16_t*)SZArrayLdElema(L_67, L_69));
		int32_t L_70 = V_17;
		V_18 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_70&(int32_t)((int32_t)15)))&(int32_t)((int32_t)31)))));
		int32_t L_71 = V_17;
		V_17 = ((-((int32_t)((int32_t)L_71>>(int32_t)4))));
	}

IL_019a:
	{
		Int16U5BU5D_t886* L_72 = (__this->___tree_0);
		int32_t L_73 = V_17;
		int32_t L_74 = V_16;
		int32_t L_75 = V_14;
		int32_t L_76 = V_15;
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, ((int32_t)((int32_t)L_73|(int32_t)((int32_t)((int32_t)L_74>>(int32_t)((int32_t)9))))));
		*((int16_t*)(int16_t*)SZArrayLdElema(L_72, ((int32_t)((int32_t)L_73|(int32_t)((int32_t)((int32_t)L_74>>(int32_t)((int32_t)9))))))) = (int16_t)(((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_75<<(int32_t)4))|(int32_t)L_76))));
		int32_t L_77 = V_16;
		int32_t L_78 = V_15;
		V_16 = ((int32_t)((int32_t)L_77+(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_78&(int32_t)((int32_t)31)))))));
		int32_t L_79 = V_16;
		int32_t L_80 = V_18;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_019a;
		}
	}

IL_01c3:
	{
		Int32U5BU5D_t1* L_81 = V_1;
		int32_t L_82 = V_15;
		int32_t L_83 = V_4;
		int32_t L_84 = V_15;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, L_82);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_81, L_82)) = (int32_t)((int32_t)((int32_t)L_83+(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)16)-(int32_t)L_84))&(int32_t)((int32_t)31)))))));
	}

IL_01d4:
	{
		int32_t L_85 = V_14;
		V_14 = ((int32_t)((int32_t)L_85+(int32_t)1));
	}

IL_01da:
	{
		int32_t L_86 = V_14;
		ByteU5BU5D_t159* L_87 = ___codeLengths;
		NullCheck(L_87);
		if ((((int32_t)L_86) < ((int32_t)(((int32_t)(((Array_t *)L_87)->max_length))))))
		{
			goto IL_012c;
		}
	}
	{
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::GetSymbol(ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator)
extern "C" int32_t InflaterHuffmanTree_GetSymbol_m10161 (InflaterHuffmanTree_t1833 * __this, StreamManipulator_t1830 * ___input, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		StreamManipulator_t1830 * L_0 = ___input;
		NullCheck(L_0);
		int32_t L_1 = StreamManipulator_PeekBits_m10131(L_0, ((int32_t)9), /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		V_0 = L_2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		Int16U5BU5D_t886* L_3 = (__this->___tree_0);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		int16_t L_6 = (*(int16_t*)(int16_t*)SZArrayLdElema(L_3, L_5));
		V_1 = L_6;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		StreamManipulator_t1830 * L_7 = ___input;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		StreamManipulator_DropBits_m10132(L_7, ((int32_t)((int32_t)L_8&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		return ((int32_t)((int32_t)L_9>>(int32_t)4));
	}

IL_002b:
	{
		int32_t L_10 = V_1;
		V_2 = ((-((int32_t)((int32_t)L_10>>(int32_t)4))));
		int32_t L_11 = V_1;
		V_3 = ((int32_t)((int32_t)L_11&(int32_t)((int32_t)15)));
		StreamManipulator_t1830 * L_12 = ___input;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = StreamManipulator_PeekBits_m10131(L_12, L_13, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		V_0 = L_15;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		Int16U5BU5D_t886* L_16 = (__this->___tree_0);
		int32_t L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)((int32_t)L_17|(int32_t)((int32_t)((int32_t)L_18>>(int32_t)((int32_t)9))))));
		int32_t L_19 = ((int32_t)((int32_t)L_17|(int32_t)((int32_t)((int32_t)L_18>>(int32_t)((int32_t)9)))));
		V_1 = (*(int16_t*)(int16_t*)SZArrayLdElema(L_16, L_19));
		StreamManipulator_t1830 * L_20 = ___input;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		StreamManipulator_DropBits_m10132(L_20, ((int32_t)((int32_t)L_21&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		int32_t L_22 = V_1;
		return ((int32_t)((int32_t)L_22>>(int32_t)4));
	}

IL_005d:
	{
		StreamManipulator_t1830 * L_23 = ___input;
		NullCheck(L_23);
		int32_t L_24 = StreamManipulator_get_AvailableBits_m10133(L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		StreamManipulator_t1830 * L_25 = ___input;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = StreamManipulator_PeekBits_m10131(L_25, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		Int16U5BU5D_t886* L_28 = (__this->___tree_0);
		int32_t L_29 = V_2;
		int32_t L_30 = V_0;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29|(int32_t)((int32_t)((int32_t)L_30>>(int32_t)((int32_t)9))))));
		int32_t L_31 = ((int32_t)((int32_t)L_29|(int32_t)((int32_t)((int32_t)L_30>>(int32_t)((int32_t)9)))));
		V_1 = (*(int16_t*)(int16_t*)SZArrayLdElema(L_28, L_31));
		int32_t L_32 = V_1;
		int32_t L_33 = V_4;
		if ((((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)15)))) > ((int32_t)L_33)))
		{
			goto IL_0092;
		}
	}
	{
		StreamManipulator_t1830 * L_34 = ___input;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		StreamManipulator_DropBits_m10132(L_34, ((int32_t)((int32_t)L_35&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		int32_t L_36 = V_1;
		return ((int32_t)((int32_t)L_36>>(int32_t)4));
	}

IL_0092:
	{
		return (-1);
	}

IL_0094:
	{
		StreamManipulator_t1830 * L_37 = ___input;
		NullCheck(L_37);
		int32_t L_38 = StreamManipulator_get_AvailableBits_m10133(L_37, /*hidden argument*/NULL);
		V_5 = L_38;
		StreamManipulator_t1830 * L_39 = ___input;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t L_41 = StreamManipulator_PeekBits_m10131(L_39, L_40, /*hidden argument*/NULL);
		V_0 = L_41;
		Int16U5BU5D_t886* L_42 = (__this->___tree_0);
		int32_t L_43 = V_0;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		int32_t L_44 = L_43;
		V_1 = (*(int16_t*)(int16_t*)SZArrayLdElema(L_42, L_44));
		int32_t L_45 = V_1;
		if ((((int32_t)L_45) < ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_46 = V_1;
		int32_t L_47 = V_5;
		if ((((int32_t)((int32_t)((int32_t)L_46&(int32_t)((int32_t)15)))) > ((int32_t)L_47)))
		{
			goto IL_00c8;
		}
	}
	{
		StreamManipulator_t1830 * L_48 = ___input;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		StreamManipulator_DropBits_m10132(L_48, ((int32_t)((int32_t)L_49&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		int32_t L_50 = V_1;
		return ((int32_t)((int32_t)L_50>>(int32_t)4));
	}

IL_00c8:
	{
		return (-1);
	}
}
// ICSharpCode.SharpZipLib.Zip.UseZip64
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_UseZip64.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.UseZip64
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_UseZip64MethodDeclarations.h"



// ICSharpCode.SharpZipLib.Zip.CompressionMethod
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_7.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.CompressionMethod
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_7MethodDeclarations.h"



// ICSharpCode.SharpZipLib.Zip.ZipConstants
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipConst.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.ZipConstants
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipConstMethodDeclarations.h"

// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.TextInfo
#include "mscorlib_System_Globalization_TextInfo.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Globalization.TextInfo
#include "mscorlib_System_Globalization_TextInfoMethodDeclarations.h"


// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipConstants::get_DefaultCodePage()
extern TypeInfo* ZipConstants_t1836_il2cpp_TypeInfo_var;
extern "C" int32_t ZipConstants_get_DefaultCodePage_m10162 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipConstants_t1836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4155);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t1836_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ZipConstants_t1836_StaticFields*)ZipConstants_t1836_il2cpp_TypeInfo_var->static_fields)->___defaultCodePage_0;
		return L_0;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipConstants::ConvertToString(System.Byte[],System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t1836_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t321_il2cpp_TypeInfo_var;
extern "C" String_t* ZipConstants_ConvertToString_m10163 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___data, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ZipConstants_t1836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4155);
		Encoding_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t159* L_0 = ___data;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0009:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t1836_il2cpp_TypeInfo_var);
		int32_t L_2 = ZipConstants_get_DefaultCodePage_m10162(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		Encoding_t321 * L_3 = Encoding_GetEncoding_m10283(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_4 = ___data;
		int32_t L_5 = ___count;
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t159*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, L_5);
		return L_6;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipConstants::ConvertToString(System.Byte[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t1836_il2cpp_TypeInfo_var;
extern "C" String_t* ZipConstants_ConvertToString_m10164 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ZipConstants_t1836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4155);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t159* L_0 = ___data;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0009:
	{
		ByteU5BU5D_t159* L_2 = ___data;
		ByteU5BU5D_t159* L_3 = ___data;
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t1836_il2cpp_TypeInfo_var);
		String_t* L_4 = ZipConstants_ConvertToString_m10163(NULL /*static, unused*/, L_2, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipConstants::ConvertToStringExt(System.Int32,System.Byte[],System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t321_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t1836_il2cpp_TypeInfo_var;
extern "C" String_t* ZipConstants_ConvertToStringExt_m10165 (Object_t * __this /* static, unused */, int32_t ___flags, ByteU5BU5D_t159* ___data, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Encoding_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		ZipConstants_t1836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4155);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t159* L_0 = ___data;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0009:
	{
		int32_t L_2 = ___flags;
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)2048))))
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		Encoding_t321 * L_3 = Encoding_get_UTF8_m1525(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_4 = ___data;
		int32_t L_5 = ___count;
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t159*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, L_5);
		return L_6;
	}

IL_0020:
	{
		ByteU5BU5D_t159* L_7 = ___data;
		int32_t L_8 = ___count;
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t1836_il2cpp_TypeInfo_var);
		String_t* L_9 = ZipConstants_ConvertToString_m10163(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipConstants::ConvertToStringExt(System.Int32,System.Byte[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t321_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t1836_il2cpp_TypeInfo_var;
extern "C" String_t* ZipConstants_ConvertToStringExt_m10166 (Object_t * __this /* static, unused */, int32_t ___flags, ByteU5BU5D_t159* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Encoding_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		ZipConstants_t1836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4155);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t159* L_0 = ___data;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0009:
	{
		int32_t L_2 = ___flags;
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)2048))))
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		Encoding_t321 * L_3 = Encoding_get_UTF8_m1525(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_4 = ___data;
		ByteU5BU5D_t159* L_5 = ___data;
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = (String_t*)VirtFuncInvoker3< String_t*, ByteU5BU5D_t159*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))));
		return L_6;
	}

IL_0022:
	{
		ByteU5BU5D_t159* L_7 = ___data;
		ByteU5BU5D_t159* L_8 = ___data;
		NullCheck(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t1836_il2cpp_TypeInfo_var);
		String_t* L_9 = ZipConstants_ConvertToString_m10163(NULL /*static, unused*/, L_7, (((int32_t)(((Array_t *)L_8)->max_length))), /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipConstants::.cctor()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t1836_il2cpp_TypeInfo_var;
extern "C" void ZipConstants__cctor_m10167 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		ZipConstants_t1836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4155);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Thread_t1122 * L_0 = Thread_get_CurrentThread_m5000(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		CultureInfo_t693 * L_1 = Thread_get_CurrentCulture_m5001(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		TextInfo_t1862 * L_2 = (TextInfo_t1862 *)VirtFuncInvoker0< TextInfo_t1862 * >::Invoke(9 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_1);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Globalization.TextInfo::get_OEMCodePage() */, L_2);
		((ZipConstants_t1836_StaticFields*)ZipConstants_t1836_il2cpp_TypeInfo_var->static_fields)->___defaultCodePage_0 = L_3;
		return;
	}
}
// ICSharpCode.SharpZipLib.Zip.ZipEntry/Known
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry_0.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.ZipEntry/Known
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry_0MethodDeclarations.h"



// ICSharpCode.SharpZipLib.Zip.ZipEntry
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.ZipEntry
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntryMethodDeclarations.h"

// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Char
#include "mscorlib_System_Char.h"
// ICSharpCode.SharpZipLib.Zip.ZipExtraData
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipExtra.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// ICSharpCode.SharpZipLib.Zip.ZipExtraData
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipExtraMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::.ctor(System.String,System.Int32,System.Int32,ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern "C" void ZipEntry__ctor_m10168 (ZipEntry_t856 * __this, String_t* ___name, int32_t ___versionRequiredToExtract, int32_t ___madeByInfo, int32_t ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___externalFileAttributes_1 = (-1);
		__this->___method_9 = 8;
		__this->___zipFileIndex_13 = (((int64_t)(-1)));
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_002a:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1368(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0047;
		}
	}
	{
		ArgumentException_t356 * L_4 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6326(L_4, (String_t*) &_stringLiteral2815, (String_t*) &_stringLiteral302, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0047:
	{
		int32_t L_5 = ___versionRequiredToExtract;
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_6 = ___versionRequiredToExtract;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)10))))
		{
			goto IL_005a;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_7 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_7, (String_t*) &_stringLiteral2816, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		DateTime_t445  L_8 = DateTime_get_Now_m3160(NULL /*static, unused*/, /*hidden argument*/NULL);
		ZipEntry_set_DateTime_m10186(__this, L_8, /*hidden argument*/NULL);
		String_t* L_9 = ___name;
		__this->___name_3 = L_9;
		int32_t L_10 = ___madeByInfo;
		__this->___versionMadeBy_2 = (((uint16_t)L_10));
		int32_t L_11 = ___versionRequiredToExtract;
		__this->___versionToExtract_6 = (((uint16_t)L_11));
		int32_t L_12 = ___method;
		__this->___method_9 = L_12;
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsCrypted()
extern "C" bool ZipEntry_get_IsCrypted_m10169 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_12);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Byte ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CryptoCheckValue()
extern "C" uint8_t ZipEntry_get_CryptoCheckValue_m10170 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___cryptoCheckValue__16);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_CryptoCheckValue(System.Byte)
extern "C" void ZipEntry_set_CryptoCheckValue_m10171 (ZipEntry_t856 * __this, uint8_t ___value, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		__this->___cryptoCheckValue__16 = L_0;
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Flags()
extern "C" int32_t ZipEntry_get_Flags_m10172 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_12);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Flags(System.Int32)
extern "C" void ZipEntry_set_Flags_m10173 (ZipEntry_t856 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___flags_12 = L_0;
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_ZipFileIndex()
extern "C" int64_t ZipEntry_get_ZipFileIndex_m10174 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___zipFileIndex_13);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ZipFileIndex(System.Int64)
extern "C" void ZipEntry_set_ZipFileIndex_m10175 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___zipFileIndex_13 = L_0;
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Offset()
extern "C" int64_t ZipEntry_get_Offset_m10176 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___offset_14);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Offset(System.Int64)
extern "C" void ZipEntry_set_Offset_m10177 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___offset_14 = L_0;
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_ExternalFileAttributes()
extern "C" int32_t ZipEntry_get_ExternalFileAttributes_m10178 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___known_0);
		if ((((uint8_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16))))))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}

IL_000e:
	{
		int32_t L_1 = (__this->___externalFileAttributes_1);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ExternalFileAttributes(System.Int32)
extern "C" void ZipEntry_set_ExternalFileAttributes_m10179 (ZipEntry_t856 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___externalFileAttributes_1 = L_0;
		uint8_t L_1 = (__this->___known_0);
		__this->___known_0 = (((uint8_t)((int32_t)((int32_t)L_1|(int32_t)((int32_t)16)))));
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::HasDosAttributes(System.Int32)
extern "C" bool ZipEntry_HasDosAttributes_m10180 (ZipEntry_t856 * __this, int32_t ___attributes, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		uint8_t L_0 = (__this->___known_0);
		if (!(((uint8_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16))))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = ZipEntry_get_HostSystem_m10181(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ZipEntry_get_HostSystem_m10181(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_002d;
		}
	}

IL_0020:
	{
		int32_t L_3 = ZipEntry_get_ExternalFileAttributes_m10178(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___attributes;
		int32_t L_5 = ___attributes;
		if ((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)L_4))) == ((uint32_t)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		V_0 = 1;
	}

IL_002d:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_HostSystem()
extern "C" int32_t ZipEntry_get_HostSystem_m10181 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___versionMadeBy_2);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_0>>(int32_t)8))&(int32_t)((int32_t)255)));
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Version()
extern "C" int32_t ZipEntry_get_Version_m10182 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		uint16_t L_0 = (__this->___versionToExtract_6);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		uint16_t L_1 = (__this->___versionToExtract_6);
		return L_1;
	}

IL_000f:
	{
		V_0 = ((int32_t)10);
		bool L_2 = ZipEntry_get_CentralHeaderRequiresZip64_m10184(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		V_0 = ((int32_t)45);
		goto IL_0053;
	}

IL_001f:
	{
		int32_t L_3 = (__this->___method_9);
		if ((!(((uint32_t)8) == ((uint32_t)L_3))))
		{
			goto IL_002d;
		}
	}
	{
		V_0 = ((int32_t)20);
		goto IL_0053;
	}

IL_002d:
	{
		bool L_4 = ZipEntry_get_IsDirectory_m3563(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		V_0 = ((int32_t)20);
		goto IL_0053;
	}

IL_003a:
	{
		bool L_5 = ZipEntry_get_IsCrypted_m10169(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		V_0 = ((int32_t)20);
		goto IL_0053;
	}

IL_0047:
	{
		bool L_6 = ZipEntry_HasDosAttributes_m10180(__this, 8, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		V_0 = ((int32_t)11);
	}

IL_0053:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_LocalHeaderRequiresZip64()
extern "C" bool ZipEntry_get_LocalHeaderRequiresZip64_m10183 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	uint64_t V_1 = 0;
	int32_t G_B10_0 = 0;
	{
		bool L_0 = (__this->___forceZip64__15);
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		uint64_t L_2 = (__this->___compressedSize_5);
		V_1 = L_2;
		uint16_t L_3 = (__this->___versionToExtract_6);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		bool L_4 = ZipEntry_get_IsCrypted_m10169(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		uint64_t L_5 = V_1;
		V_1 = ((int64_t)((int64_t)L_5+(int64_t)(((int64_t)((int32_t)12)))));
	}

IL_0027:
	{
		uint64_t L_6 = (__this->___size_4);
		if ((!(((uint64_t)L_6) < ((uint64_t)(((uint64_t)(((uint32_t)(-1)))))))))
		{
			goto IL_0036;
		}
	}
	{
		uint64_t L_7 = V_1;
		if ((!(((uint64_t)L_7) >= ((uint64_t)(((uint64_t)(((uint32_t)(-1)))))))))
		{
			goto IL_0050;
		}
	}

IL_0036:
	{
		uint16_t L_8 = (__this->___versionToExtract_6);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		uint16_t L_9 = (__this->___versionToExtract_6);
		G_B10_0 = ((((int32_t)((((int32_t)L_9) < ((int32_t)((int32_t)45)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0051;
	}

IL_004d:
	{
		G_B10_0 = 1;
		goto IL_0051;
	}

IL_0050:
	{
		G_B10_0 = 0;
	}

IL_0051:
	{
		V_0 = G_B10_0;
	}

IL_0052:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CentralHeaderRequiresZip64()
extern "C" bool ZipEntry_get_CentralHeaderRequiresZip64_m10184 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ZipEntry_get_LocalHeaderRequiresZip64_m10183(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int64_t L_1 = (__this->___offset_14);
		return ((((int32_t)((((int64_t)L_1) < ((int64_t)(((uint64_t)(((uint32_t)(-1)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return 1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_DosTime(System.Int64)
extern "C" void ZipEntry_set_DosTime_m10185 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___dosTime_8 = (((uint32_t)L_0));
		uint8_t L_1 = (__this->___known_0);
		__this->___known_0 = (((uint8_t)((int32_t)((int32_t)L_1|(int32_t)8))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_DateTime(System.DateTime)
extern "C" void ZipEntry_set_DateTime_m10186 (ZipEntry_t856 * __this, DateTime_t445  ___value, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		int32_t L_0 = DateTime_get_Year_m10284((&___value), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = DateTime_get_Month_m10285((&___value), /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = DateTime_get_Day_m10286((&___value), /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = DateTime_get_Hour_m10287((&___value), /*hidden argument*/NULL);
		V_3 = L_3;
		int32_t L_4 = DateTime_get_Minute_m10288((&___value), /*hidden argument*/NULL);
		V_4 = L_4;
		int32_t L_5 = DateTime_get_Second_m10289((&___value), /*hidden argument*/NULL);
		V_5 = L_5;
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) < ((uint32_t)((int32_t)1980)))))
		{
			goto IL_004e;
		}
	}
	{
		V_0 = ((int32_t)1980);
		V_1 = 1;
		V_2 = 1;
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		goto IL_006d;
	}

IL_004e:
	{
		uint32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)2107)))))
		{
			goto IL_006d;
		}
	}
	{
		V_0 = ((int32_t)2107);
		V_1 = ((int32_t)12);
		V_2 = ((int32_t)31);
		V_3 = ((int32_t)23);
		V_4 = ((int32_t)59);
		V_5 = ((int32_t)59);
	}

IL_006d:
	{
		uint32_t L_8 = V_0;
		uint32_t L_9 = V_1;
		uint32_t L_10 = V_2;
		uint32_t L_11 = V_3;
		uint32_t L_12 = V_4;
		uint32_t L_13 = V_5;
		ZipEntry_set_DosTime_m10185(__this, (((uint64_t)(((uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8-(int32_t)((int32_t)1980)))&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)25)))|(int32_t)((int32_t)((int32_t)L_9<<(int32_t)((int32_t)21)))))|(int32_t)((int32_t)((int32_t)L_10<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_11<<(int32_t)((int32_t)11)))))|(int32_t)((int32_t)((int32_t)L_12<<(int32_t)5))))|(int32_t)((int32_t)((uint32_t)L_13>>1)))))))), /*hidden argument*/NULL);
		return;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Name()
extern "C" String_t* ZipEntry_get_Name_m3562 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		return L_0;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Size()
extern "C" int64_t ZipEntry_get_Size_m10187 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___known_0);
		if ((((uint8_t)((int32_t)((int32_t)L_0&(int32_t)1)))))
		{
			goto IL_000e;
		}
	}
	{
		return (((int64_t)(-1)));
	}

IL_000e:
	{
		uint64_t L_1 = (__this->___size_4);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Size(System.Int64)
extern "C" void ZipEntry_set_Size_m10188 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___size_4 = L_0;
		uint8_t L_1 = (__this->___known_0);
		__this->___known_0 = (((uint8_t)((int32_t)((int32_t)L_1|(int32_t)1))));
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CompressedSize()
extern "C" int64_t ZipEntry_get_CompressedSize_m10189 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___known_0);
		if ((((uint8_t)((int32_t)((int32_t)L_0&(int32_t)2)))))
		{
			goto IL_000e;
		}
	}
	{
		return (((int64_t)(-1)));
	}

IL_000e:
	{
		uint64_t L_1 = (__this->___compressedSize_5);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_CompressedSize(System.Int64)
extern "C" void ZipEntry_set_CompressedSize_m10190 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___compressedSize_5 = L_0;
		uint8_t L_1 = (__this->___known_0);
		__this->___known_0 = (((uint8_t)((int32_t)((int32_t)L_1|(int32_t)2))));
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Crc()
extern "C" int64_t ZipEntry_get_Crc_m10191 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___known_0);
		if ((((uint8_t)((int32_t)((int32_t)L_0&(int32_t)4)))))
		{
			goto IL_000e;
		}
	}
	{
		return (((int64_t)(-1)));
	}

IL_000e:
	{
		uint32_t L_1 = (__this->___crc_7);
		return ((int64_t)((int64_t)(((uint64_t)L_1))&(int64_t)(((uint64_t)(((uint32_t)(-1)))))));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Crc(System.Int64)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" void ZipEntry_set_Crc_m10192 (ZipEntry_t856 * __this, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint32_t L_0 = (__this->___crc_7);
		if ((((int64_t)((int64_t)((int64_t)(((uint64_t)L_0))&(int64_t)((int64_t)-4294967296LL)))) == ((int64_t)(((int64_t)0)))))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_1, (String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0020:
	{
		int64_t L_2 = ___value;
		__this->___crc_7 = (((uint32_t)L_2));
		uint8_t L_3 = (__this->___known_0);
		__this->___known_0 = (((uint8_t)((int32_t)((int32_t)L_3|(int32_t)4))));
		return;
	}
}
// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipEntry::get_CompressionMethod()
extern "C" int32_t ZipEntry_get_CompressionMethod_m10193 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___method_9);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_ExtraData(System.Byte[])
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern "C" void ZipEntry_set_ExtraData_m10194 (ZipEntry_t856 * __this, ByteU5BU5D_t159* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t159* L_0 = ___value;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		__this->___extra_10 = (ByteU5BU5D_t159*)NULL;
		return;
	}

IL_000b:
	{
		ByteU5BU5D_t159* L_1 = ___value;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_2 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_2, (String_t*) &_stringLiteral1100, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		ByteU5BU5D_t159* L_3 = ___value;
		NullCheck(L_3);
		__this->___extra_10 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		ByteU5BU5D_t159* L_4 = ___value;
		ByteU5BU5D_t159* L_5 = (__this->___extra_10);
		ByteU5BU5D_t159* L_6 = ___value;
		NullCheck(L_6);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 0, (Array_t *)(Array_t *)L_5, 0, (((int32_t)(((Array_t *)L_6)->max_length))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::ProcessExtraData(System.Boolean)
extern TypeInfo* ZipExtraData_t1841_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern "C" void ZipEntry_ProcessExtraData_m10195 (ZipEntry_t856 * __this, bool ___localHeader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipExtraData_t1841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4156);
		ZipException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4147);
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		s_Il2CppMethodIntialized = true;
	}
	ZipExtraData_t1841 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	DateTime_t445  V_7 = {0};
	DateTime_t445  V_8 = {0};
	{
		ByteU5BU5D_t159* L_0 = (__this->___extra_10);
		ZipExtraData_t1841 * L_1 = (ZipExtraData_t1841 *)il2cpp_codegen_object_new (ZipExtraData_t1841_il2cpp_TypeInfo_var);
		ZipExtraData__ctor_m10204(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ZipExtraData_t1841 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = ZipExtraData_Find_m10207(L_2, 1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_009b;
		}
	}
	{
		uint16_t L_4 = (__this->___versionToExtract_6);
		if ((((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))) >= ((int32_t)((int32_t)45))))
		{
			goto IL_0033;
		}
	}
	{
		ZipException_t1840 * L_5 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_5, (String_t*) &_stringLiteral2817, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0033:
	{
		__this->___forceZip64__15 = 1;
		ZipExtraData_t1841 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = ZipExtraData_get_ValueLength_m10205(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) >= ((int32_t)4)))
		{
			goto IL_004e;
		}
	}
	{
		ZipException_t1840 * L_8 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_8, (String_t*) &_stringLiteral2818, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004e:
	{
		bool L_9 = ___localHeader;
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		uint64_t L_10 = (__this->___size_4);
		if ((!(((uint64_t)L_10) == ((uint64_t)(((uint64_t)(((uint32_t)(-1)))))))))
		{
			goto IL_0067;
		}
	}

IL_005b:
	{
		ZipExtraData_t1841 * L_11 = V_0;
		NullCheck(L_11);
		int64_t L_12 = ZipExtraData_ReadLong_m10208(L_11, /*hidden argument*/NULL);
		__this->___size_4 = L_12;
	}

IL_0067:
	{
		bool L_13 = ___localHeader;
		if (L_13)
		{
			goto IL_0074;
		}
	}
	{
		uint64_t L_14 = (__this->___compressedSize_5);
		if ((!(((uint64_t)L_14) == ((uint64_t)(((uint64_t)(((uint32_t)(-1)))))))))
		{
			goto IL_0080;
		}
	}

IL_0074:
	{
		ZipExtraData_t1841 * L_15 = V_0;
		NullCheck(L_15);
		int64_t L_16 = ZipExtraData_ReadLong_m10208(L_15, /*hidden argument*/NULL);
		__this->___compressedSize_5 = L_16;
	}

IL_0080:
	{
		bool L_17 = ___localHeader;
		if (L_17)
		{
			goto IL_00ca;
		}
	}
	{
		int64_t L_18 = (__this->___offset_14);
		if ((!(((uint64_t)L_18) == ((uint64_t)(((uint64_t)(((uint32_t)(-1)))))))))
		{
			goto IL_00ca;
		}
	}
	{
		ZipExtraData_t1841 * L_19 = V_0;
		NullCheck(L_19);
		int64_t L_20 = ZipExtraData_ReadLong_m10208(L_19, /*hidden argument*/NULL);
		__this->___offset_14 = L_20;
		goto IL_00ca;
	}

IL_009b:
	{
		uint16_t L_21 = (__this->___versionToExtract_6);
		if ((((int32_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)255)))) < ((int32_t)((int32_t)45))))
		{
			goto IL_00ca;
		}
	}
	{
		uint64_t L_22 = (__this->___size_4);
		if ((((int64_t)L_22) == ((int64_t)(((uint64_t)(((uint32_t)(-1))))))))
		{
			goto IL_00bf;
		}
	}
	{
		uint64_t L_23 = (__this->___compressedSize_5);
		if ((!(((uint64_t)L_23) == ((uint64_t)(((uint64_t)(((uint32_t)(-1)))))))))
		{
			goto IL_00ca;
		}
	}

IL_00bf:
	{
		ZipException_t1840 * L_24 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_24, (String_t*) &_stringLiteral2819, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00ca:
	{
		ZipExtraData_t1841 * L_25 = V_0;
		NullCheck(L_25);
		bool L_26 = ZipExtraData_Find_m10207(L_25, ((int32_t)10), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_013e;
		}
	}
	{
		ZipExtraData_t1841 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = ZipExtraData_get_ValueLength_m10205(L_27, /*hidden argument*/NULL);
		if ((((int32_t)L_28) >= ((int32_t)8)))
		{
			goto IL_00e8;
		}
	}
	{
		ZipException_t1840 * L_29 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_29, (String_t*) &_stringLiteral2820, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_00e8:
	{
		ZipExtraData_t1841 * L_30 = V_0;
		NullCheck(L_30);
		ZipExtraData_ReadInt_m10209(L_30, /*hidden argument*/NULL);
		goto IL_0134;
	}

IL_00f1:
	{
		ZipExtraData_t1841 * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = ZipExtraData_ReadShort_m10210(L_31, /*hidden argument*/NULL);
		V_1 = L_32;
		ZipExtraData_t1841 * L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = ZipExtraData_ReadShort_m10210(L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		int32_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)1))))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_36 = V_2;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)24))))
		{
			goto IL_01a5;
		}
	}
	{
		ZipExtraData_t1841 * L_37 = V_0;
		NullCheck(L_37);
		int64_t L_38 = ZipExtraData_ReadLong_m10208(L_37, /*hidden argument*/NULL);
		V_3 = L_38;
		ZipExtraData_t1841 * L_39 = V_0;
		NullCheck(L_39);
		ZipExtraData_ReadLong_m10208(L_39, /*hidden argument*/NULL);
		ZipExtraData_t1841 * L_40 = V_0;
		NullCheck(L_40);
		ZipExtraData_ReadLong_m10208(L_40, /*hidden argument*/NULL);
		int64_t L_41 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		DateTime_t445  L_42 = DateTime_FromFileTime_m10290(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		ZipEntry_set_DateTime_m10186(__this, L_42, /*hidden argument*/NULL);
		return;
	}

IL_012d:
	{
		ZipExtraData_t1841 * L_43 = V_0;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		ZipExtraData_Skip_m10212(L_43, L_44, /*hidden argument*/NULL);
	}

IL_0134:
	{
		ZipExtraData_t1841 * L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = ZipExtraData_get_UnreadCount_m10206(L_45, /*hidden argument*/NULL);
		if ((((int32_t)L_46) >= ((int32_t)4)))
		{
			goto IL_00f1;
		}
	}
	{
		return;
	}

IL_013e:
	{
		ZipExtraData_t1841 * L_47 = V_0;
		NullCheck(L_47);
		bool L_48 = ZipExtraData_Find_m10207(L_47, ((int32_t)21589), /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01a5;
		}
	}
	{
		ZipExtraData_t1841 * L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = ZipExtraData_get_ValueLength_m10205(L_49, /*hidden argument*/NULL);
		V_4 = L_50;
		ZipExtraData_t1841 * L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = ZipExtraData_ReadByte_m10211(L_51, /*hidden argument*/NULL);
		V_5 = L_52;
		int32_t L_53 = V_5;
		if (!((int32_t)((int32_t)L_53&(int32_t)1)))
		{
			goto IL_01a5;
		}
	}
	{
		int32_t L_54 = V_4;
		if ((((int32_t)L_54) < ((int32_t)5)))
		{
			goto IL_01a5;
		}
	}
	{
		ZipExtraData_t1841 * L_55 = V_0;
		NullCheck(L_55);
		int32_t L_56 = ZipExtraData_ReadInt_m10209(L_55, /*hidden argument*/NULL);
		V_6 = L_56;
		DateTime_t445  L_57 = {0};
		DateTime__ctor_m5128(&L_57, ((int32_t)1970), 1, 1, 0, 0, 0, /*hidden argument*/NULL);
		V_7 = L_57;
		DateTime_t445  L_58 = DateTime_ToUniversalTime_m3258((&V_7), /*hidden argument*/NULL);
		int32_t L_59 = V_6;
		TimeSpan_t1129  L_60 = {0};
		TimeSpan__ctor_m10291(&L_60, 0, 0, 0, L_59, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		DateTime_t445  L_61 = DateTime_op_Addition_m10292(NULL /*static, unused*/, L_58, L_60, /*hidden argument*/NULL);
		V_8 = L_61;
		DateTime_t445  L_62 = DateTime_ToLocalTime_m9849((&V_8), /*hidden argument*/NULL);
		ZipEntry_set_DateTime_m10186(__this, L_62, /*hidden argument*/NULL);
	}

IL_01a5:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Comment(System.String)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" void ZipEntry_set_Comment_m10196 (ZipEntry_t856 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_1 = ___value;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1368(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral1100, (String_t*) &_stringLiteral2814, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0020:
	{
		String_t* L_4 = ___value;
		__this->___comment_11 = L_4;
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsDirectory()
extern "C" bool ZipEntry_get_IsDirectory_m3563 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		String_t* L_0 = (__this->___name_3);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1368(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3 = (__this->___name_3);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		uint16_t L_5 = String_get_Chars_m1370(L_3, ((int32_t)((int32_t)L_4-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_6 = (__this->___name_3);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		uint16_t L_8 = String_get_Chars_m1370(L_6, ((int32_t)((int32_t)L_7-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)92))))
		{
			goto IL_003e;
		}
	}

IL_0034:
	{
		bool L_9 = ZipEntry_HasDosAttributes_m10180(__this, ((int32_t)16), /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_003f;
	}

IL_003e:
	{
		G_B5_0 = 1;
	}

IL_003f:
	{
		V_1 = G_B5_0;
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsFile()
extern "C" bool ZipEntry_get_IsFile_m3567 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ZipEntry_get_IsDirectory_m3563(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = ZipEntry_HasDosAttributes_m10180(__this, 8, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0013:
	{
		return 0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::IsCompressionMethodSupported()
extern "C" bool ZipEntry_IsCompressionMethodSupported_m3561 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = ZipEntry_get_CompressionMethod_m10193(__this, /*hidden argument*/NULL);
		bool L_1 = ZipEntry_IsCompressionMethodSupported_m10199(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object ICSharpCode.SharpZipLib.Zip.ZipEntry::Clone()
extern TypeInfo* ZipEntry_t856_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern "C" Object_t * ZipEntry_Clone_m10197 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipEntry_t856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1781);
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	ZipEntry_t856 * V_0 = {0};
	{
		Object_t * L_0 = Object_MemberwiseClone_m9826(__this, /*hidden argument*/NULL);
		V_0 = ((ZipEntry_t856 *)Castclass(L_0, ZipEntry_t856_il2cpp_TypeInfo_var));
		ByteU5BU5D_t159* L_1 = (__this->___extra_10);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		ZipEntry_t856 * L_2 = V_0;
		ByteU5BU5D_t159* L_3 = (__this->___extra_10);
		NullCheck(L_3);
		NullCheck(L_2);
		L_2->___extra_10 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		ByteU5BU5D_t159* L_4 = (__this->___extra_10);
		ZipEntry_t856 * L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_t159* L_6 = (L_5->___extra_10);
		ByteU5BU5D_t159* L_7 = (__this->___extra_10);
		NullCheck(L_7);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 0, (Array_t *)(Array_t *)L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
	}

IL_0042:
	{
		ZipEntry_t856 * L_8 = V_0;
		return L_8;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::ToString()
extern "C" String_t* ZipEntry_ToString_m10198 (ZipEntry_t856 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		return L_0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::IsCompressionMethodSupported(ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern "C" bool ZipEntry_IsCompressionMethodSupported_m10199 (Object_t * __this /* static, unused */, int32_t ___method, const MethodInfo* method)
{
	{
		int32_t L_0 = ___method;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___method;
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_0009:
	{
		return 1;
	}
}
// ICSharpCode.SharpZipLib.Zip.ZipEntryFactory
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry_1.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.ZipEntryFactory
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry_1MethodDeclarations.h"

// ICSharpCode.SharpZipLib.Zip.ZipNameTransform
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipNameT.h"
// ICSharpCode.SharpZipLib.Zip.ZipNameTransform
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipNameTMethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntryFactory::.ctor()
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern TypeInfo* ZipNameTransform_t1852_il2cpp_TypeInfo_var;
extern "C" void ZipEntryFactory__ctor_m10200 (ZipEntryFactory_t1839 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		ZipNameTransform_t1852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4157);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		DateTime_t445  L_0 = DateTime_get_Now_m3160(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___fixedDateTime__1 = L_0;
		__this->___getAttributes__2 = (-1);
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ZipNameTransform_t1852 * L_1 = (ZipNameTransform_t1852 *)il2cpp_codegen_object_new (ZipNameTransform_t1852_il2cpp_TypeInfo_var);
		ZipNameTransform__ctor_m10275(L_1, /*hidden argument*/NULL);
		__this->___nameTransform__0 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void ICSharpCode.SharpZipLib.Zip.ZipException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ZipException__ctor_m10201 (ZipException_t1840 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		SharpZipBaseException__ctor_m10058(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipException::.ctor()
extern "C" void ZipException__ctor_m10202 (ZipException_t1840 * __this, const MethodInfo* method)
{
	{
		SharpZipBaseException__ctor_m10059(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipException::.ctor(System.String)
extern "C" void ZipException__ctor_m10203 (ZipException_t1840 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SharpZipBaseException__ctor_m10060(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"


// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::.ctor(System.Byte[])
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern "C" void ZipExtraData__ctor_m10204 (ZipExtraData_t1841 * __this, ByteU5BU5D_t159* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_0 = ___data;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		__this->___data__4 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, 0));
		return;
	}

IL_0016:
	{
		ByteU5BU5D_t159* L_1 = ___data;
		__this->___data__4 = L_1;
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::get_ValueLength()
extern "C" int32_t ZipExtraData_get_ValueLength_m10205 (ZipExtraData_t1841 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___readValueLength__2);
		return L_0;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::get_UnreadCount()
extern TypeInfo* ZipException_t1840_il2cpp_TypeInfo_var;
extern "C" int32_t ZipExtraData_get_UnreadCount_m10206 (ZipExtraData_t1841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4147);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___readValueStart__1);
		ByteU5BU5D_t159* L_1 = (__this->___data__4);
		NullCheck(L_1);
		if ((((int32_t)L_0) > ((int32_t)(((int32_t)(((Array_t *)L_1)->max_length))))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = (__this->___readValueStart__1);
		if ((((int32_t)L_2) >= ((int32_t)4)))
		{
			goto IL_0024;
		}
	}

IL_0019:
	{
		ZipException_t1840 * L_3 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_3, (String_t*) &_stringLiteral2821, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		int32_t L_4 = (__this->___readValueStart__1);
		int32_t L_5 = (__this->___readValueLength__2);
		int32_t L_6 = (__this->___index__0);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))-(int32_t)L_6));
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipExtraData::Find(System.Int32)
extern "C" bool ZipExtraData_Find_m10207 (ZipExtraData_t1841 * __this, int32_t ___headerID, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B8_0 = 0;
	{
		ByteU5BU5D_t159* L_0 = (__this->___data__4);
		NullCheck(L_0);
		__this->___readValueStart__1 = (((int32_t)(((Array_t *)L_0)->max_length)));
		__this->___readValueLength__2 = 0;
		__this->___index__0 = 0;
		int32_t L_1 = (__this->___readValueStart__1);
		V_0 = L_1;
		int32_t L_2 = ___headerID;
		V_1 = ((int32_t)((int32_t)L_2-(int32_t)1));
		goto IL_0049;
	}

IL_0029:
	{
		int32_t L_3 = ZipExtraData_ReadShortInternal_m10214(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = ZipExtraData_ReadShortInternal_m10214(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = ___headerID;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_7 = (__this->___index__0);
		int32_t L_8 = V_0;
		__this->___index__0 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
	}

IL_0049:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ___headerID;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11 = (__this->___index__0);
		ByteU5BU5D_t159* L_12 = (__this->___data__4);
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_12)->max_length)))-(int32_t)3)))))
		{
			goto IL_0029;
		}
	}

IL_005f:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ___headerID;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_15 = (__this->___index__0);
		int32_t L_16 = V_0;
		ByteU5BU5D_t159* L_17 = (__this->___data__4);
		NullCheck(L_17);
		G_B8_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_15+(int32_t)L_16))) > ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007b;
	}

IL_007a:
	{
		G_B8_0 = 0;
	}

IL_007b:
	{
		V_2 = G_B8_0;
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_19 = (__this->___index__0);
		__this->___readValueStart__1 = L_19;
		int32_t L_20 = V_0;
		__this->___readValueLength__2 = L_20;
	}

IL_0092:
	{
		bool L_21 = V_2;
		return L_21;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadLong()
extern "C" int64_t ZipExtraData_ReadLong_m10208 (ZipExtraData_t1841 * __this, const MethodInfo* method)
{
	{
		ZipExtraData_ReadCheck_m10213(__this, 8, /*hidden argument*/NULL);
		int32_t L_0 = ZipExtraData_ReadInt_m10209(__this, /*hidden argument*/NULL);
		int32_t L_1 = ZipExtraData_ReadInt_m10209(__this, /*hidden argument*/NULL);
		return ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_0))&(int64_t)(((uint64_t)(((uint32_t)(-1)))))))|(int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))));
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadInt()
extern "C" int32_t ZipExtraData_ReadInt_m10209 (ZipExtraData_t1841 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ZipExtraData_ReadCheck_m10213(__this, 4, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_0 = (__this->___data__4);
		int32_t L_1 = (__this->___index__0);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		ByteU5BU5D_t159* L_3 = (__this->___data__4);
		int32_t L_4 = (__this->___index__0);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)));
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		ByteU5BU5D_t159* L_6 = (__this->___data__4);
		int32_t L_7 = (__this->___index__0);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)2)));
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)2));
		ByteU5BU5D_t159* L_9 = (__this->___data__4);
		int32_t L_10 = (__this->___index__0);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)3)));
		int32_t L_11 = ((int32_t)((int32_t)L_10+(int32_t)3));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5))<<(int32_t)8))))+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8))<<(int32_t)((int32_t)16)))))+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_11))<<(int32_t)((int32_t)24)))));
		int32_t L_12 = (__this->___index__0);
		__this->___index__0 = ((int32_t)((int32_t)L_12+(int32_t)4));
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadShort()
extern "C" int32_t ZipExtraData_ReadShort_m10210 (ZipExtraData_t1841 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ZipExtraData_ReadCheck_m10213(__this, 2, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_0 = (__this->___data__4);
		int32_t L_1 = (__this->___index__0);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		ByteU5BU5D_t159* L_3 = (__this->___data__4);
		int32_t L_4 = (__this->___index__0);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)));
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_0 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5))<<(int32_t)8))));
		int32_t L_6 = (__this->___index__0);
		__this->___index__0 = ((int32_t)((int32_t)L_6+(int32_t)2));
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadByte()
extern "C" int32_t ZipExtraData_ReadByte_m10211 (ZipExtraData_t1841 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		int32_t L_0 = (__this->___index__0);
		ByteU5BU5D_t159* L_1 = (__this->___data__4);
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)(((int32_t)(((Array_t *)L_1)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_2 = (__this->___readValueStart__1);
		int32_t L_3 = (__this->___readValueLength__2);
		int32_t L_4 = (__this->___index__0);
		if ((((int32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0043;
		}
	}
	{
		ByteU5BU5D_t159* L_5 = (__this->___data__4);
		int32_t L_6 = (__this->___index__0);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		int32_t L_8 = (__this->___index__0);
		__this->___index__0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0043:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::Skip(System.Int32)
extern "C" void ZipExtraData_Skip_m10212 (ZipExtraData_t1841 * __this, int32_t ___amount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___amount;
		ZipExtraData_ReadCheck_m10213(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___index__0);
		int32_t L_2 = ___amount;
		__this->___index__0 = ((int32_t)((int32_t)L_1+(int32_t)L_2));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadCheck(System.Int32)
extern TypeInfo* ZipException_t1840_il2cpp_TypeInfo_var;
extern "C" void ZipExtraData_ReadCheck_m10213 (ZipExtraData_t1841 * __this, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4147);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___readValueStart__1);
		ByteU5BU5D_t159* L_1 = (__this->___data__4);
		NullCheck(L_1);
		if ((((int32_t)L_0) > ((int32_t)(((int32_t)(((Array_t *)L_1)->max_length))))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = (__this->___readValueStart__1);
		if ((((int32_t)L_2) >= ((int32_t)4)))
		{
			goto IL_0024;
		}
	}

IL_0019:
	{
		ZipException_t1840 * L_3 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_3, (String_t*) &_stringLiteral2821, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		int32_t L_4 = (__this->___index__0);
		int32_t L_5 = (__this->___readValueStart__1);
		int32_t L_6 = (__this->___readValueLength__2);
		int32_t L_7 = ___length;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5+(int32_t)L_6))-(int32_t)L_7)))))
		{
			goto IL_0046;
		}
	}
	{
		ZipException_t1840 * L_8 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_8, (String_t*) &_stringLiteral2822, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0046:
	{
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::ReadShortInternal()
extern TypeInfo* ZipException_t1840_il2cpp_TypeInfo_var;
extern "C" int32_t ZipExtraData_ReadShortInternal_m10214 (ZipExtraData_t1841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4147);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___index__0);
		ByteU5BU5D_t159* L_1 = (__this->___data__4);
		NullCheck(L_1);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))-(int32_t)2)))))
		{
			goto IL_001d;
		}
	}
	{
		ZipException_t1840 * L_2 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_2, (String_t*) &_stringLiteral2822, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		ByteU5BU5D_t159* L_3 = (__this->___data__4);
		int32_t L_4 = (__this->___index__0);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		ByteU5BU5D_t159* L_6 = (__this->___data__4);
		int32_t L_7 = (__this->___index__0);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)1)));
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		V_0 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5))+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8))<<(int32_t)8))));
		int32_t L_9 = (__this->___index__0);
		__this->___index__0 = ((int32_t)((int32_t)L_9+(int32_t)2));
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipExtraData::Dispose()
extern "C" void ZipExtraData_Dispose_m10215 (ZipExtraData_t1841 * __this, const MethodInfo* method)
{
	{
		MemoryStream_t686 * L_0 = (__this->___newEntry__3);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		MemoryStream_t686 * L_1 = (__this->___newEntry__3);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_1);
	}

IL_0013:
	{
		return;
	}
}
// ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_KeysRequ.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_KeysRequMethodDeclarations.h"

// System.EventArgs
#include "mscorlib_System_EventArgsMethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::.ctor(System.String,System.Byte[])
extern TypeInfo* EventArgs_t912_il2cpp_TypeInfo_var;
extern "C" void KeysRequiredEventArgs__ctor_m10216 (KeysRequiredEventArgs_t1842 * __this, String_t* ___name, ByteU5BU5D_t159* ___keyValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventArgs_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1932);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t912_il2cpp_TypeInfo_var);
		EventArgs__ctor_m4987(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___fileName_1 = L_0;
		ByteU5BU5D_t159* L_1 = ___keyValue;
		__this->___key_2 = L_1;
		return;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs::get_Key()
extern "C" ByteU5BU5D_t159* KeysRequiredEventArgs_get_Key_m10217 (KeysRequiredEventArgs_t1842 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t159* L_0 = (__this->___key_2);
		return L_0;
	}
}
// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile_.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile_MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"


// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void KeysRequiredEventHandler__ctor_m10218 (KeysRequiredEventHandler_t1843 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::Invoke(System.Object,ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs)
extern "C" void KeysRequiredEventHandler_Invoke_m10219 (KeysRequiredEventHandler_t1843 * __this, Object_t * ___sender, KeysRequiredEventArgs_t1842 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		KeysRequiredEventHandler_Invoke_m10219((KeysRequiredEventHandler_t1843 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, KeysRequiredEventArgs_t1842 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, KeysRequiredEventArgs_t1842 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, KeysRequiredEventArgs_t1842 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_KeysRequiredEventHandler_t1843(Il2CppObject* delegate, Object_t * ___sender, KeysRequiredEventArgs_t1842 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::BeginInvoke(System.Object,ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * KeysRequiredEventHandler_BeginInvoke_m10220 (KeysRequiredEventHandler_t1843 * __this, Object_t * ___sender, KeysRequiredEventArgs_t1842 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void KeysRequiredEventHandler_EndInvoke_m10221 (KeysRequiredEventHandler_t1843 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// ICSharpCode.SharpZipLib.Zip.ZipFile/HeaderTest
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__0.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.ZipFile/HeaderTest
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__0MethodDeclarations.h"



// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__1.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__1MethodDeclarations.h"

#include "ICSharpCode.SharpZipLib_ArrayTypes.h"


// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::.ctor(ICSharpCode.SharpZipLib.Zip.ZipEntry[])
extern "C" void ZipEntryEnumerator__ctor_m10222 (ZipEntryEnumerator_t1846 * __this, ZipEntryU5BU5D_t1845* ___entries, const MethodInfo* method)
{
	{
		__this->___index_1 = (-1);
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ZipEntryU5BU5D_t1845* L_0 = ___entries;
		__this->___array_0 = L_0;
		return;
	}
}
// System.Object ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::get_Current()
extern "C" Object_t * ZipEntryEnumerator_get_Current_m10223 (ZipEntryEnumerator_t1846 * __this, const MethodInfo* method)
{
	{
		ZipEntryU5BU5D_t1845* L_0 = (__this->___array_0);
		int32_t L_1 = (__this->___index_1);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_0, L_2));
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator::MoveNext()
extern "C" bool ZipEntryEnumerator_MoveNext_m10224 (ZipEntryEnumerator_t1846 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___index_1);
		int32_t L_1 = ((int32_t)((int32_t)L_0+(int32_t)1));
		V_0 = L_1;
		__this->___index_1 = L_1;
		int32_t L_2 = V_0;
		ZipEntryU5BU5D_t1845* L_3 = (__this->___array_0);
		NullCheck(L_3);
		return ((((int32_t)L_2) < ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))? 1 : 0);
	}
}
// ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__2.h"
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__2MethodDeclarations.h"

// ICSharpCode.SharpZipLib.Zip.ZipFile
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile.h"
// System.IO.IOException
#include "mscorlib_System_IO_IOException.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.IO.IOException
#include "mscorlib_System_IO_IOExceptionMethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::.ctor(ICSharpCode.SharpZipLib.Zip.ZipFile,System.Int64,System.Int64)
extern TypeInfo* Stream_t844_il2cpp_TypeInfo_var;
extern "C" void PartialInputStream__ctor_m10225 (PartialInputStream_t1847 * __this, ZipFile_t855 * ___zipFile, int64_t ___start, int64_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1818);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t844_il2cpp_TypeInfo_var);
		Stream__ctor_m6414(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___start;
		__this->___start__4 = L_0;
		int64_t L_1 = ___length;
		__this->___length__5 = L_1;
		ZipFile_t855 * L_2 = ___zipFile;
		__this->___zipFile__2 = L_2;
		ZipFile_t855 * L_3 = (__this->___zipFile__2);
		NullCheck(L_3);
		Stream_t844 * L_4 = (L_3->___baseStream__3);
		__this->___baseStream__3 = L_4;
		int64_t L_5 = ___start;
		__this->___readPos__6 = L_5;
		int64_t L_6 = ___start;
		int64_t L_7 = ___length;
		__this->___end__7 = ((int64_t)((int64_t)L_6+(int64_t)L_7));
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::ReadByte()
extern "C" int32_t PartialInputStream_ReadByte_m10226 (PartialInputStream_t1847 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Stream_t844 * V_1 = {0};
	int64_t V_2 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int64_t L_0 = (__this->___readPos__6);
		int64_t L_1 = (__this->___end__7);
		if ((((int64_t)L_0) < ((int64_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (-1);
	}

IL_0010:
	{
		Stream_t844 * L_2 = (__this->___baseStream__3);
		Stream_t844 * L_3 = L_2;
		V_1 = L_3;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		Stream_t844 * L_4 = (__this->___baseStream__3);
		int64_t L_5 = (__this->___readPos__6);
		int64_t L_6 = L_5;
		V_2 = L_6;
		__this->___readPos__6 = ((int64_t)((int64_t)L_6+(int64_t)(((int64_t)1))));
		int64_t L_7 = V_2;
		NullCheck(L_4);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_4, L_7, 0);
		Stream_t844 * L_8 = (__this->___baseStream__3);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.IO.Stream::ReadByte() */, L_8);
		V_0 = L_9;
		IL2CPP_LEAVE(0x51, FINALLY_004a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Stream_t844 * L_10 = V_1;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0051:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Close()
extern "C" void PartialInputStream_Close_m10227 (PartialInputStream_t1847 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t PartialInputStream_Read_m10228 (PartialInputStream_t1847 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Stream_t844 * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t844 * L_0 = (__this->___baseStream__3);
		Stream_t844 * L_1 = L_0;
		V_2 = L_1;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = ___count;
			int64_t L_3 = (__this->___end__7);
			int64_t L_4 = (__this->___readPos__6);
			if ((((int64_t)(((int64_t)L_2))) <= ((int64_t)((int64_t)((int64_t)L_3-(int64_t)L_4)))))
			{
				goto IL_0035;
			}
		}

IL_001e:
		{
			int64_t L_5 = (__this->___end__7);
			int64_t L_6 = (__this->___readPos__6);
			___count = (((int32_t)((int64_t)((int64_t)L_5-(int64_t)L_6))));
			int32_t L_7 = ___count;
			if (L_7)
			{
				goto IL_0035;
			}
		}

IL_0031:
		{
			V_1 = 0;
			IL2CPP_LEAVE(0x75, FINALLY_006e);
		}

IL_0035:
		{
			Stream_t844 * L_8 = (__this->___baseStream__3);
			int64_t L_9 = (__this->___readPos__6);
			NullCheck(L_8);
			VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_8, L_9, 0);
			Stream_t844 * L_10 = (__this->___baseStream__3);
			ByteU5BU5D_t159* L_11 = ___buffer;
			int32_t L_12 = ___offset;
			int32_t L_13 = ___count;
			NullCheck(L_10);
			int32_t L_14 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t159*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, L_12, L_13);
			V_0 = L_14;
			int32_t L_15 = V_0;
			if ((((int32_t)L_15) <= ((int32_t)0)))
			{
				goto IL_006a;
			}
		}

IL_005b:
		{
			int64_t L_16 = (__this->___readPos__6);
			int32_t L_17 = V_0;
			__this->___readPos__6 = ((int64_t)((int64_t)L_16+(int64_t)(((int64_t)L_17))));
		}

IL_006a:
		{
			int32_t L_18 = V_0;
			V_1 = L_18;
			IL2CPP_LEAVE(0x75, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Stream_t844 * L_19 = V_2;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0075:
	{
		int32_t L_20 = V_1;
		return L_20;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void PartialInputStream_Write_m10229 (PartialInputStream_t1847 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::SetLength(System.Int64)
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void PartialInputStream_SetLength_m10230 (PartialInputStream_t1847 * __this, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t303 * L_0 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1312(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t863_il2cpp_TypeInfo_var;
extern "C" int64_t PartialInputStream_Seek_m10231 (PartialInputStream_t1847 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		IOException_t863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1782);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = {0};
	{
		int64_t L_0 = (__this->___readPos__6);
		V_0 = L_0;
		int32_t L_1 = ___origin;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2 == 0)
		{
			goto IL_001d;
		}
		if (L_2 == 1)
		{
			goto IL_0028;
		}
		if (L_2 == 2)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_003c;
	}

IL_001d:
	{
		int64_t L_3 = (__this->___start__4);
		int64_t L_4 = ___offset;
		V_0 = ((int64_t)((int64_t)L_3+(int64_t)L_4));
		goto IL_003c;
	}

IL_0028:
	{
		int64_t L_5 = (__this->___readPos__6);
		int64_t L_6 = ___offset;
		V_0 = ((int64_t)((int64_t)L_5+(int64_t)L_6));
		goto IL_003c;
	}

IL_0033:
	{
		int64_t L_7 = (__this->___end__7);
		int64_t L_8 = ___offset;
		V_0 = ((int64_t)((int64_t)L_7+(int64_t)L_8));
	}

IL_003c:
	{
		int64_t L_9 = V_0;
		int64_t L_10 = (__this->___start__4);
		if ((((int64_t)L_9) >= ((int64_t)L_10)))
		{
			goto IL_0050;
		}
	}
	{
		ArgumentException_t356 * L_11 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_11, (String_t*) &_stringLiteral2867, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0050:
	{
		int64_t L_12 = V_0;
		int64_t L_13 = (__this->___end__7);
		if ((((int64_t)L_12) < ((int64_t)L_13)))
		{
			goto IL_0064;
		}
	}
	{
		IOException_t863 * L_14 = (IOException_t863 *)il2cpp_codegen_object_new (IOException_t863_il2cpp_TypeInfo_var);
		IOException__ctor_m10293(L_14, (String_t*) &_stringLiteral2868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0064:
	{
		int64_t L_15 = V_0;
		__this->___readPos__6 = L_15;
		int64_t L_16 = (__this->___readPos__6);
		return L_16;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::Flush()
extern "C" void PartialInputStream_Flush_m10232 (PartialInputStream_t1847 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_Position()
extern "C" int64_t PartialInputStream_get_Position_m10233 (PartialInputStream_t1847 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___readPos__6);
		int64_t L_1 = (__this->___start__4);
		return ((int64_t)((int64_t)L_0-(int64_t)L_1));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::set_Position(System.Int64)
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1116_il2cpp_TypeInfo_var;
extern "C" void PartialInputStream_set_Position_m10234 (PartialInputStream_t1847 * __this, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		InvalidOperationException_t1116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1907);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	{
		int64_t L_0 = (__this->___start__4);
		int64_t L_1 = ___value;
		V_0 = ((int64_t)((int64_t)L_0+(int64_t)L_1));
		int64_t L_2 = V_0;
		int64_t L_3 = (__this->___start__4);
		if ((((int64_t)L_2) >= ((int64_t)L_3)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_t356 * L_4 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_4, (String_t*) &_stringLiteral2867, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001d:
	{
		int64_t L_5 = V_0;
		int64_t L_6 = (__this->___end__7);
		if ((((int64_t)L_5) < ((int64_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		InvalidOperationException_t1116 * L_7 = (InvalidOperationException_t1116 *)il2cpp_codegen_object_new (InvalidOperationException_t1116_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4979(L_7, (String_t*) &_stringLiteral2868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		int64_t L_8 = V_0;
		__this->___readPos__6 = L_8;
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_Length()
extern "C" int64_t PartialInputStream_get_Length_m10235 (PartialInputStream_t1847 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___length__5);
		return L_0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanWrite()
extern "C" bool PartialInputStream_get_CanWrite_m10236 (PartialInputStream_t1847 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanSeek()
extern "C" bool PartialInputStream_get_CanSeek_m10237 (PartialInputStream_t1847 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream::get_CanRead()
extern "C" bool PartialInputStream_get_CanRead_m10238 (PartialInputStream_t1847 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif
// ICSharpCode.SharpZipLib.Zip.ZipFile
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFileMethodDeclarations.h"

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// ICSharpCode.SharpZipLib.Zip.ZipHelperStream
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipHelpe.h"
// System.Security.Cryptography.CryptoStream
#include "mscorlib_System_Security_Cryptography_CryptoStream.h"
// System.Security.Cryptography.CryptoStreamMode
#include "mscorlib_System_Security_Cryptography_CryptoStreamMode.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// ICSharpCode.SharpZipLib.Zip.ZipHelperStream
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipHelpeMethodDeclarations.h"
// System.Security.Cryptography.CryptoStream
#include "mscorlib_System_Security_Cryptography_CryptoStreamMethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::OnKeysRequired(System.String)
extern TypeInfo* KeysRequiredEventArgs_t1842_il2cpp_TypeInfo_var;
extern "C" void ZipFile_OnKeysRequired_m10239 (ZipFile_t855 * __this, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeysRequiredEventArgs_t1842_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4158);
		s_Il2CppMethodIntialized = true;
	}
	KeysRequiredEventArgs_t1842 * V_0 = {0};
	{
		KeysRequiredEventHandler_t1843 * L_0 = (__this->___KeysRequired_0);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_1 = ___fileName;
		ByteU5BU5D_t159* L_2 = (__this->___key_7);
		KeysRequiredEventArgs_t1842 * L_3 = (KeysRequiredEventArgs_t1842 *)il2cpp_codegen_object_new (KeysRequiredEventArgs_t1842_il2cpp_TypeInfo_var);
		KeysRequiredEventArgs__ctor_m10216(L_3, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		KeysRequiredEventHandler_t1843 * L_4 = (__this->___KeysRequired_0);
		KeysRequiredEventArgs_t1842 * L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< Object_t *, KeysRequiredEventArgs_t1842 * >::Invoke(11 /* System.Void ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler::Invoke(System.Object,ICSharpCode.SharpZipLib.Zip.KeysRequiredEventArgs) */, L_4, __this, L_5);
		KeysRequiredEventArgs_t1842 * L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_t159* L_7 = KeysRequiredEventArgs_get_Key_m10217(L_6, /*hidden argument*/NULL);
		__this->___key_7 = L_7;
	}

IL_002e:
	{
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_HaveKeys()
extern "C" bool ZipFile_get_HaveKeys_m10240 (ZipFile_t855 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t159* L_0 = (__this->___key_7);
		return ((((int32_t)((((Object_t*)(ByteU5BU5D_t159*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor(System.IO.Stream)
extern TypeInfo* ZipEntryFactory_t1839_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntryU5BU5D_t1845_il2cpp_TypeInfo_var;
extern "C" void ZipFile__ctor_m3556 (ZipFile_t855 * __this, Stream_t844 * ___stream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipEntryFactory_t1839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4159);
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ZipEntryU5BU5D_t1845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4160);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->___useZip64__9 = 2;
		__this->___bufferSize__14 = ((int32_t)4096);
		ZipEntryFactory_t1839 * L_0 = (ZipEntryFactory_t1839 *)il2cpp_codegen_object_new (ZipEntryFactory_t1839_il2cpp_TypeInfo_var);
		ZipEntryFactory__ctor_m10200(L_0, /*hidden argument*/NULL);
		__this->___updateEntryFactory__15 = L_0;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Stream_t844 * L_1 = ___stream;
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t692 * L_2 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_2, (String_t*) &_stringLiteral2779, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0031:
	{
		Stream_t844 * L_3 = ___stream;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_3);
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t356 * L_5 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6326(L_5, (String_t*) &_stringLiteral2823, (String_t*) &_stringLiteral2779, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0049:
	{
		Stream_t844 * L_6 = ___stream;
		__this->___baseStream__3 = L_6;
		__this->___isStreamOwner_4 = 1;
		Stream_t844 * L_7 = (__this->___baseStream__3);
		NullCheck(L_7);
		int64_t L_8 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_7);
		if ((((int64_t)L_8) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0078;
		}
	}

IL_0066:
	try
	{ // begin try (depth: 1)
		ZipFile_ReadEntries_m10255(__this, /*hidden argument*/NULL);
		goto IL_008b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_006e;
		throw e;
	}

CATCH_006e:
	{ // begin catch(System.Object)
		ZipFile_DisposeInternal_m10249(__this, 1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(__exception_local);
	} // end catch (depth: 1)

IL_0078:
	{
		__this->___entries__6 = ((ZipEntryU5BU5D_t1845*)SZArrayNew(ZipEntryU5BU5D_t1845_il2cpp_TypeInfo_var, 0));
		__this->___isNewArchive__8 = 1;
	}

IL_008b:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Finalize()
extern "C" void ZipFile_Finalize_m10241 (ZipFile_t855 * __this, const MethodInfo* method)
{
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Dispose(System.Boolean) */, __this, 0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m1886(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0010:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Close()
extern "C" void ZipFile_Close_m3557 (ZipFile_t855 * __this, const MethodInfo* method)
{
	{
		ZipFile_DisposeInternal_m10249(__this, 1, /*hidden argument*/NULL);
		GC_SuppressFinalize_m3572(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_IsStreamOwner()
extern "C" bool ZipFile_get_IsStreamOwner_m10242 (ZipFile_t855 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isStreamOwner_4);
		return L_0;
	}
}
// System.Collections.IEnumerator ICSharpCode.SharpZipLib.Zip.ZipFile::GetEnumerator()
extern TypeInfo* ObjectDisposedException_t1359_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntryEnumerator_t1846_il2cpp_TypeInfo_var;
extern "C" Object_t * ZipFile_GetEnumerator_m10243 (ZipFile_t855 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		ZipEntryEnumerator_t1846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4161);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isDisposed__1);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1359 * L_1 = (ObjectDisposedException_t1359 *)il2cpp_codegen_object_new (ObjectDisposedException_t1359_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6355(L_1, (String_t*) &_stringLiteral2824, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		ZipEntryU5BU5D_t1845* L_2 = (__this->___entries__6);
		ZipEntryEnumerator_t1846 * L_3 = (ZipEntryEnumerator_t1846 *)il2cpp_codegen_object_new (ZipEntryEnumerator_t1846_il2cpp_TypeInfo_var);
		ZipEntryEnumerator__ctor_m10222(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::FindEntry(System.String,System.Boolean)
extern TypeInfo* ObjectDisposedException_t1359_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t ZipFile_FindEntry_m10244 (ZipFile_t855 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___isDisposed__1);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1359 * L_1 = (ObjectDisposedException_t1359 *)il2cpp_codegen_object_new (ObjectDisposedException_t1359_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6355(L_1, (String_t*) &_stringLiteral2824, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		V_0 = 0;
		goto IL_0038;
	}

IL_0017:
	{
		String_t* L_2 = ___name;
		ZipEntryU5BU5D_t1845* L_3 = (__this->___entries__6);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_3, L_5)));
		String_t* L_6 = ZipEntry_get_Name_m3562((*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		bool L_7 = ___ignoreCase;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_8 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_9 = String_Compare_m4973(NULL /*static, unused*/, L_2, L_6, L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}

IL_0034:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0038:
	{
		int32_t L_12 = V_0;
		ZipEntryU5BU5D_t1845* L_13 = (__this->___entries__6);
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return (-1);
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetInputStream(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectDisposedException_t1359_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t1840_il2cpp_TypeInfo_var;
extern "C" Stream_t844 * ZipFile_GetInputStream_m3568 (ZipFile_t855 * __this, ZipEntry_t856 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ObjectDisposedException_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ZipException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4147);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	{
		ZipEntry_t856 * L_0 = ___entry;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral2825, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = (__this->___isDisposed__1);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ObjectDisposedException_t1359 * L_3 = (ObjectDisposedException_t1359 *)il2cpp_codegen_object_new (ObjectDisposedException_t1359_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6355(L_3, (String_t*) &_stringLiteral2824, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0021:
	{
		ZipEntry_t856 * L_4 = ___entry;
		NullCheck(L_4);
		int64_t L_5 = ZipEntry_get_ZipFileIndex_m10174(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int64_t L_6 = V_0;
		if ((((int64_t)L_6) < ((int64_t)(((int64_t)0)))))
		{
			goto IL_0054;
		}
	}
	{
		int64_t L_7 = V_0;
		ZipEntryU5BU5D_t1845* L_8 = (__this->___entries__6);
		NullCheck(L_8);
		if ((((int64_t)L_7) >= ((int64_t)(((int64_t)(((int32_t)(((Array_t *)L_8)->max_length))))))))
		{
			goto IL_0054;
		}
	}
	{
		ZipEntryU5BU5D_t1845* L_9 = (__this->___entries__6);
		int64_t L_10 = V_0;
		if ((int64_t)(L_10) > INTPTR_MAX) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, (((intptr_t)L_10)));
		intptr_t L_11 = (((intptr_t)L_10));
		NullCheck((*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_9, L_11)));
		String_t* L_12 = ZipEntry_get_Name_m3562((*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_9, L_11)), /*hidden argument*/NULL);
		ZipEntry_t856 * L_13 = ___entry;
		NullCheck(L_13);
		String_t* L_14 = ZipEntry_get_Name_m3562(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Inequality_m1484(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0073;
		}
	}

IL_0054:
	{
		ZipEntry_t856 * L_16 = ___entry;
		NullCheck(L_16);
		String_t* L_17 = ZipEntry_get_Name_m3562(L_16, /*hidden argument*/NULL);
		int32_t L_18 = ZipFile_FindEntry_m10244(__this, L_17, 1, /*hidden argument*/NULL);
		V_0 = (((int64_t)L_18));
		int64_t L_19 = V_0;
		if ((((int64_t)L_19) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0073;
		}
	}
	{
		ZipException_t1840 * L_20 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_20, (String_t*) &_stringLiteral2826, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0073:
	{
		int64_t L_21 = V_0;
		Stream_t844 * L_22 = ZipFile_GetInputStream_m10245(__this, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetInputStream(System.Int64)
extern TypeInfo* ObjectDisposedException_t1359_il2cpp_TypeInfo_var;
extern TypeInfo* PartialInputStream_t1847_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* Inflater_t1826_il2cpp_TypeInfo_var;
extern TypeInfo* InflaterInputStream_t1828_il2cpp_TypeInfo_var;
extern TypeInfo* CompressionMethod_t1835_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Stream_t844 * ZipFile_GetInputStream_m10245 (ZipFile_t855 * __this, int64_t ___entryIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		PartialInputStream_t1847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4162);
		ZipException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4147);
		Inflater_t1826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4152);
		InflaterInputStream_t1828_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4163);
		CompressionMethod_t1835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4164);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = {0};
	Stream_t844 * V_2 = {0};
	int32_t V_3 = {0};
	{
		bool L_0 = (__this->___isDisposed__1);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1359 * L_1 = (ObjectDisposedException_t1359 *)il2cpp_codegen_object_new (ObjectDisposedException_t1359_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6355(L_1, (String_t*) &_stringLiteral2824, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		ZipEntryU5BU5D_t1845* L_2 = (__this->___entries__6);
		int64_t L_3 = ___entryIndex;
		if ((int64_t)(L_3) > INTPTR_MAX) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, (((intptr_t)L_3)));
		intptr_t L_4 = (((intptr_t)L_3));
		int64_t L_5 = ZipFile_LocateEntry_m10256(__this, (*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/NULL);
		V_0 = L_5;
		ZipEntryU5BU5D_t1845* L_6 = (__this->___entries__6);
		int64_t L_7 = ___entryIndex;
		if ((int64_t)(L_7) > INTPTR_MAX) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, (((intptr_t)L_7)));
		intptr_t L_8 = (((intptr_t)L_7));
		NullCheck((*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_6, L_8)));
		int32_t L_9 = ZipEntry_get_CompressionMethod_m10193((*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_6, L_8)), /*hidden argument*/NULL);
		V_1 = L_9;
		int64_t L_10 = V_0;
		ZipEntryU5BU5D_t1845* L_11 = (__this->___entries__6);
		int64_t L_12 = ___entryIndex;
		if ((int64_t)(L_12) > INTPTR_MAX) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, (((intptr_t)L_12)));
		intptr_t L_13 = (((intptr_t)L_12));
		NullCheck((*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_11, L_13)));
		int64_t L_14 = ZipEntry_get_CompressedSize_m10189((*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_11, L_13)), /*hidden argument*/NULL);
		PartialInputStream_t1847 * L_15 = (PartialInputStream_t1847 *)il2cpp_codegen_object_new (PartialInputStream_t1847_il2cpp_TypeInfo_var);
		PartialInputStream__ctor_m10225(L_15, __this, L_10, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		ZipEntryU5BU5D_t1845* L_16 = (__this->___entries__6);
		int64_t L_17 = ___entryIndex;
		if ((int64_t)(L_17) > INTPTR_MAX) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, (((intptr_t)L_17)));
		intptr_t L_18 = (((intptr_t)L_17));
		NullCheck((*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_16, L_18)));
		bool L_19 = ZipEntry_get_IsCrypted_m10169((*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_16, L_18)), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		Stream_t844 * L_20 = V_2;
		ZipEntryU5BU5D_t1845* L_21 = (__this->___entries__6);
		int64_t L_22 = ___entryIndex;
		if ((int64_t)(L_22) > INTPTR_MAX) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, (((intptr_t)L_22)));
		intptr_t L_23 = (((intptr_t)L_22));
		Stream_t844 * L_24 = ZipFile_CreateAndInitDecryptionStream_m10257(__this, L_20, (*(ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_21, L_23)), /*hidden argument*/NULL);
		V_2 = L_24;
		Stream_t844 * L_25 = V_2;
		if (L_25)
		{
			goto IL_0077;
		}
	}
	{
		ZipException_t1840 * L_26 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_26, (String_t*) &_stringLiteral2827, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_26);
	}

IL_0077:
	{
		int32_t L_27 = V_1;
		V_3 = L_27;
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) == ((int32_t)0)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)8))))
		{
			goto IL_0090;
		}
	}
	{
		Stream_t844 * L_30 = V_2;
		Inflater_t1826 * L_31 = (Inflater_t1826 *)il2cpp_codegen_object_new (Inflater_t1826_il2cpp_TypeInfo_var);
		Inflater__ctor_m10141(L_31, 1, /*hidden argument*/NULL);
		InflaterInputStream_t1828 * L_32 = (InflaterInputStream_t1828 *)il2cpp_codegen_object_new (InflaterInputStream_t1828_il2cpp_TypeInfo_var);
		InflaterInputStream__ctor_m10101(L_32, L_30, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		goto IL_00a6;
	}

IL_0090:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(CompressionMethod_t1835_il2cpp_TypeInfo_var, &L_34);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m1248(NULL /*static, unused*/, (String_t*) &_stringLiteral2828, L_35, /*hidden argument*/NULL);
		ZipException_t1840 * L_37 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_37, L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_37);
	}

IL_00a6:
	{
		Stream_t844 * L_38 = V_2;
		return L_38;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::TestLocalHeader(ICSharpCode.SharpZipLib.Zip.ZipEntry,ICSharpCode.SharpZipLib.Zip.ZipFile/HeaderTest)
extern TypeInfo* Int64_t696_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern TypeInfo* ZipExtraData_t1841_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t378_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t1836_il2cpp_TypeInfo_var;
extern TypeInfo* ZipNameTransform_t1852_il2cpp_TypeInfo_var;
extern "C" int64_t ZipFile_TestLocalHeader_m10246 (ZipFile_t855 * __this, ZipEntry_t856 * ___entry, int32_t ___tests, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(986);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ZipException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4147);
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		ZipExtraData_t1841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4156);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Int16_t378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(993);
		ZipConstants_t1836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4155);
		ZipNameTransform_t1852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4157);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int16_t V_2 = 0;
	int16_t V_3 = 0;
	int16_t V_4 = 0;
	int16_t V_5 = 0;
	int16_t V_6 = 0;
	uint32_t V_7 = 0;
	int64_t V_8 = 0;
	int64_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	ByteU5BU5D_t159* V_12 = {0};
	ByteU5BU5D_t159* V_13 = {0};
	ZipExtraData_t1841 * V_14 = {0};
	String_t* V_15 = {0};
	int32_t V_16 = 0;
	int64_t V_17 = 0;
	Stream_t844 * V_18 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t844 * L_0 = (__this->___baseStream__3);
		Stream_t844 * L_1 = L_0;
		V_18 = L_1;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = ___tests;
			V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			int32_t L_3 = ___tests;
			V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			Stream_t844 * L_4 = (__this->___baseStream__3);
			int64_t L_5 = (__this->___offsetOfFirstEntry_5);
			ZipEntry_t856 * L_6 = ___entry;
			NullCheck(L_6);
			int64_t L_7 = ZipEntry_get_Offset_m10176(L_6, /*hidden argument*/NULL);
			NullCheck(L_4);
			VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_4, ((int64_t)((int64_t)L_5+(int64_t)L_7)), 0);
			uint32_t L_8 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_8) == ((int32_t)((int32_t)67324752))))
			{
				goto IL_006b;
			}
		}

IL_0049:
		{
			int64_t L_9 = (__this->___offsetOfFirstEntry_5);
			ZipEntry_t856 * L_10 = ___entry;
			NullCheck(L_10);
			int64_t L_11 = ZipEntry_get_Offset_m10176(L_10, /*hidden argument*/NULL);
			int64_t L_12 = ((int64_t)((int64_t)L_9+(int64_t)L_11));
			Object_t * L_13 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_12);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_14 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral2829, L_13, /*hidden argument*/NULL);
			ZipException_t1840 * L_15 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_15, L_14, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_15);
		}

IL_006b:
		{
			uint16_t L_16 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
			V_2 = (((int16_t)L_16));
			uint16_t L_17 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
			V_3 = (((int16_t)L_17));
			uint16_t L_18 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
			V_4 = (((int16_t)L_18));
			uint16_t L_19 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
			V_5 = (((int16_t)L_19));
			uint16_t L_20 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
			V_6 = (((int16_t)L_20));
			uint32_t L_21 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
			V_7 = L_21;
			uint32_t L_22 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
			V_8 = (((uint64_t)L_22));
			uint32_t L_23 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
			V_9 = (((uint64_t)L_23));
			uint16_t L_24 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
			V_10 = L_24;
			uint16_t L_25 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
			V_11 = L_25;
			int32_t L_26 = V_10;
			V_12 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, L_26));
			Stream_t844 * L_27 = (__this->___baseStream__3);
			ByteU5BU5D_t159* L_28 = V_12;
			StreamUtils_ReadFully_m10067(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
			int32_t L_29 = V_11;
			V_13 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, L_29));
			Stream_t844 * L_30 = (__this->___baseStream__3);
			ByteU5BU5D_t159* L_31 = V_13;
			StreamUtils_ReadFully_m10067(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
			ByteU5BU5D_t159* L_32 = V_13;
			ZipExtraData_t1841 * L_33 = (ZipExtraData_t1841 *)il2cpp_codegen_object_new (ZipExtraData_t1841_il2cpp_TypeInfo_var);
			ZipExtraData__ctor_m10204(L_33, L_32, /*hidden argument*/NULL);
			V_14 = L_33;
			ZipExtraData_t1841 * L_34 = V_14;
			NullCheck(L_34);
			bool L_35 = ZipExtraData_Find_m10207(L_34, 1, /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_018d;
			}
		}

IL_0102:
		{
			int16_t L_36 = V_2;
			if ((((int32_t)L_36) >= ((int32_t)((int32_t)45))))
			{
				goto IL_0129;
			}
		}

IL_0107:
		{
			int16_t L_37 = V_2;
			int32_t L_38 = ((int32_t)((int32_t)L_37/(int32_t)((int32_t)10)));
			Object_t * L_39 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_38);
			int16_t L_40 = V_2;
			int32_t L_41 = ((int32_t)((int32_t)L_40%(int32_t)((int32_t)10)));
			Object_t * L_42 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_41);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_43 = String_Format_m3539(NULL /*static, unused*/, (String_t*) &_stringLiteral2830, L_39, L_42, /*hidden argument*/NULL);
			ZipException_t1840 * L_44 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_44, L_43, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_44);
		}

IL_0129:
		{
			int64_t L_45 = V_9;
			if ((((int32_t)(((uint32_t)L_45))) == ((int32_t)(-1))))
			{
				goto IL_0140;
			}
		}

IL_012f:
		{
			int64_t L_46 = V_8;
			if ((((int32_t)(((uint32_t)L_46))) == ((int32_t)(-1))))
			{
				goto IL_0140;
			}
		}

IL_0135:
		{
			ZipException_t1840 * L_47 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_47, (String_t*) &_stringLiteral2831, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_47);
		}

IL_0140:
		{
			ZipExtraData_t1841 * L_48 = V_14;
			NullCheck(L_48);
			int64_t L_49 = ZipExtraData_ReadLong_m10208(L_48, /*hidden argument*/NULL);
			V_9 = L_49;
			ZipExtraData_t1841 * L_50 = V_14;
			NullCheck(L_50);
			int64_t L_51 = ZipExtraData_ReadLong_m10208(L_50, /*hidden argument*/NULL);
			V_8 = L_51;
			int16_t L_52 = V_3;
			if (!((int32_t)((int32_t)L_52&(int32_t)8)))
			{
				goto IL_01a9;
			}
		}

IL_0157:
		{
			int64_t L_53 = V_9;
			if ((((int64_t)L_53) == ((int64_t)(((int64_t)(-1))))))
			{
				goto IL_0172;
			}
		}

IL_015d:
		{
			int64_t L_54 = V_9;
			ZipEntry_t856 * L_55 = ___entry;
			NullCheck(L_55);
			int64_t L_56 = ZipEntry_get_Size_m10187(L_55, /*hidden argument*/NULL);
			if ((((int64_t)L_54) == ((int64_t)L_56)))
			{
				goto IL_0172;
			}
		}

IL_0167:
		{
			ZipException_t1840 * L_57 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_57, (String_t*) &_stringLiteral2832, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_57);
		}

IL_0172:
		{
			int64_t L_58 = V_8;
			if ((((int64_t)L_58) == ((int64_t)(((int64_t)(-1))))))
			{
				goto IL_01a9;
			}
		}

IL_0178:
		{
			int64_t L_59 = V_8;
			ZipEntry_t856 * L_60 = ___entry;
			NullCheck(L_60);
			int64_t L_61 = ZipEntry_get_CompressedSize_m10189(L_60, /*hidden argument*/NULL);
			if ((((int64_t)L_59) == ((int64_t)L_61)))
			{
				goto IL_01a9;
			}
		}

IL_0182:
		{
			ZipException_t1840 * L_62 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_62, (String_t*) &_stringLiteral2833, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_62);
		}

IL_018d:
		{
			int16_t L_63 = V_2;
			if ((((int32_t)L_63) < ((int32_t)((int32_t)45))))
			{
				goto IL_01a9;
			}
		}

IL_0192:
		{
			int64_t L_64 = V_9;
			if ((((int32_t)(((uint32_t)L_64))) == ((int32_t)(-1))))
			{
				goto IL_019e;
			}
		}

IL_0198:
		{
			int64_t L_65 = V_8;
			if ((!(((uint32_t)(((uint32_t)L_65))) == ((uint32_t)(-1)))))
			{
				goto IL_01a9;
			}
		}

IL_019e:
		{
			ZipException_t1840 * L_66 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_66, (String_t*) &_stringLiteral2834, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_66);
		}

IL_01a9:
		{
			bool L_67 = V_1;
			if (!L_67)
			{
				goto IL_0200;
			}
		}

IL_01ac:
		{
			ZipEntry_t856 * L_68 = ___entry;
			NullCheck(L_68);
			bool L_69 = ZipEntry_get_IsFile_m3567(L_68, /*hidden argument*/NULL);
			if (!L_69)
			{
				goto IL_0200;
			}
		}

IL_01b4:
		{
			ZipEntry_t856 * L_70 = ___entry;
			NullCheck(L_70);
			bool L_71 = ZipEntry_IsCompressionMethodSupported_m3561(L_70, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_01c7;
			}
		}

IL_01bc:
		{
			ZipException_t1840 * L_72 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_72, (String_t*) &_stringLiteral2835, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_72);
		}

IL_01c7:
		{
			int16_t L_73 = V_2;
			if ((((int32_t)L_73) > ((int32_t)((int32_t)45))))
			{
				goto IL_01d6;
			}
		}

IL_01cc:
		{
			int16_t L_74 = V_2;
			if ((((int32_t)L_74) <= ((int32_t)((int32_t)20))))
			{
				goto IL_01ec;
			}
		}

IL_01d1:
		{
			int16_t L_75 = V_2;
			if ((((int32_t)L_75) >= ((int32_t)((int32_t)45))))
			{
				goto IL_01ec;
			}
		}

IL_01d6:
		{
			int16_t L_76 = V_2;
			int16_t L_77 = L_76;
			Object_t * L_78 = Box(Int16_t378_il2cpp_TypeInfo_var, &L_77);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_79 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral2836, L_78, /*hidden argument*/NULL);
			ZipException_t1840 * L_80 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_80, L_79, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_80);
		}

IL_01ec:
		{
			int16_t L_81 = V_3;
			if (!((int32_t)((int32_t)L_81&(int32_t)((int32_t)12384))))
			{
				goto IL_0200;
			}
		}

IL_01f5:
		{
			ZipException_t1840 * L_82 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_82, (String_t*) &_stringLiteral2837, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_82);
		}

IL_0200:
		{
			bool L_83 = V_0;
			if (!L_83)
			{
				goto IL_0429;
			}
		}

IL_0206:
		{
			int16_t L_84 = V_2;
			if ((((int32_t)L_84) > ((int32_t)((int32_t)63))))
			{
				goto IL_0267;
			}
		}

IL_020b:
		{
			int16_t L_85 = V_2;
			if ((((int32_t)L_85) == ((int32_t)((int32_t)10))))
			{
				goto IL_0267;
			}
		}

IL_0210:
		{
			int16_t L_86 = V_2;
			if ((((int32_t)L_86) == ((int32_t)((int32_t)11))))
			{
				goto IL_0267;
			}
		}

IL_0215:
		{
			int16_t L_87 = V_2;
			if ((((int32_t)L_87) == ((int32_t)((int32_t)20))))
			{
				goto IL_0267;
			}
		}

IL_021a:
		{
			int16_t L_88 = V_2;
			if ((((int32_t)L_88) == ((int32_t)((int32_t)21))))
			{
				goto IL_0267;
			}
		}

IL_021f:
		{
			int16_t L_89 = V_2;
			if ((((int32_t)L_89) == ((int32_t)((int32_t)25))))
			{
				goto IL_0267;
			}
		}

IL_0224:
		{
			int16_t L_90 = V_2;
			if ((((int32_t)L_90) == ((int32_t)((int32_t)27))))
			{
				goto IL_0267;
			}
		}

IL_0229:
		{
			int16_t L_91 = V_2;
			if ((((int32_t)L_91) == ((int32_t)((int32_t)45))))
			{
				goto IL_0267;
			}
		}

IL_022e:
		{
			int16_t L_92 = V_2;
			if ((((int32_t)L_92) == ((int32_t)((int32_t)46))))
			{
				goto IL_0267;
			}
		}

IL_0233:
		{
			int16_t L_93 = V_2;
			if ((((int32_t)L_93) == ((int32_t)((int32_t)50))))
			{
				goto IL_0267;
			}
		}

IL_0238:
		{
			int16_t L_94 = V_2;
			if ((((int32_t)L_94) == ((int32_t)((int32_t)51))))
			{
				goto IL_0267;
			}
		}

IL_023d:
		{
			int16_t L_95 = V_2;
			if ((((int32_t)L_95) == ((int32_t)((int32_t)52))))
			{
				goto IL_0267;
			}
		}

IL_0242:
		{
			int16_t L_96 = V_2;
			if ((((int32_t)L_96) == ((int32_t)((int32_t)61))))
			{
				goto IL_0267;
			}
		}

IL_0247:
		{
			int16_t L_97 = V_2;
			if ((((int32_t)L_97) == ((int32_t)((int32_t)62))))
			{
				goto IL_0267;
			}
		}

IL_024c:
		{
			int16_t L_98 = V_2;
			if ((((int32_t)L_98) == ((int32_t)((int32_t)63))))
			{
				goto IL_0267;
			}
		}

IL_0251:
		{
			int16_t L_99 = V_2;
			int16_t L_100 = L_99;
			Object_t * L_101 = Box(Int16_t378_il2cpp_TypeInfo_var, &L_100);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_102 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral2838, L_101, /*hidden argument*/NULL);
			ZipException_t1840 * L_103 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_103, L_102, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_103);
		}

IL_0267:
		{
			int16_t L_104 = V_3;
			if (!((int32_t)((int32_t)L_104&(int32_t)((int32_t)49168))))
			{
				goto IL_027b;
			}
		}

IL_0270:
		{
			ZipException_t1840 * L_105 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_105, (String_t*) &_stringLiteral2839, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_105);
		}

IL_027b:
		{
			int16_t L_106 = V_3;
			if (!((int32_t)((int32_t)L_106&(int32_t)1)))
			{
				goto IL_029b;
			}
		}

IL_0280:
		{
			int16_t L_107 = V_2;
			if ((((int32_t)L_107) >= ((int32_t)((int32_t)20))))
			{
				goto IL_029b;
			}
		}

IL_0285:
		{
			int16_t L_108 = V_2;
			int16_t L_109 = L_108;
			Object_t * L_110 = Box(Int16_t378_il2cpp_TypeInfo_var, &L_109);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_111 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral2840, L_110, /*hidden argument*/NULL);
			ZipException_t1840 * L_112 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_112, L_111, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_112);
		}

IL_029b:
		{
			int16_t L_113 = V_3;
			if (!((int32_t)((int32_t)L_113&(int32_t)((int32_t)64))))
			{
				goto IL_02cc;
			}
		}

IL_02a1:
		{
			int16_t L_114 = V_3;
			if (((int32_t)((int32_t)L_114&(int32_t)1)))
			{
				goto IL_02b1;
			}
		}

IL_02a6:
		{
			ZipException_t1840 * L_115 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_115, (String_t*) &_stringLiteral2841, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_115);
		}

IL_02b1:
		{
			int16_t L_116 = V_2;
			if ((((int32_t)L_116) >= ((int32_t)((int32_t)50))))
			{
				goto IL_02cc;
			}
		}

IL_02b6:
		{
			int16_t L_117 = V_2;
			int16_t L_118 = L_117;
			Object_t * L_119 = Box(Int16_t378_il2cpp_TypeInfo_var, &L_118);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_120 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral2840, L_119, /*hidden argument*/NULL);
			ZipException_t1840 * L_121 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_121, L_120, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_121);
		}

IL_02cc:
		{
			int16_t L_122 = V_3;
			if (!((int32_t)((int32_t)L_122&(int32_t)((int32_t)32))))
			{
				goto IL_02ed;
			}
		}

IL_02d2:
		{
			int16_t L_123 = V_2;
			if ((((int32_t)L_123) >= ((int32_t)((int32_t)27))))
			{
				goto IL_02ed;
			}
		}

IL_02d7:
		{
			int16_t L_124 = V_2;
			int16_t L_125 = L_124;
			Object_t * L_126 = Box(Int16_t378_il2cpp_TypeInfo_var, &L_125);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_127 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral2842, L_126, /*hidden argument*/NULL);
			ZipException_t1840 * L_128 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_128, L_127, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_128);
		}

IL_02ed:
		{
			int16_t L_129 = V_3;
			ZipEntry_t856 * L_130 = ___entry;
			NullCheck(L_130);
			int32_t L_131 = ZipEntry_get_Flags_m10172(L_130, /*hidden argument*/NULL);
			if ((((int32_t)L_129) == ((int32_t)L_131)))
			{
				goto IL_0301;
			}
		}

IL_02f6:
		{
			ZipException_t1840 * L_132 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_132, (String_t*) &_stringLiteral2843, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_132);
		}

IL_0301:
		{
			ZipEntry_t856 * L_133 = ___entry;
			NullCheck(L_133);
			int32_t L_134 = ZipEntry_get_CompressionMethod_m10193(L_133, /*hidden argument*/NULL);
			int16_t L_135 = V_4;
			if ((((int32_t)L_134) == ((int32_t)L_135)))
			{
				goto IL_0316;
			}
		}

IL_030b:
		{
			ZipException_t1840 * L_136 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_136, (String_t*) &_stringLiteral2844, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_136);
		}

IL_0316:
		{
			ZipEntry_t856 * L_137 = ___entry;
			NullCheck(L_137);
			int32_t L_138 = ZipEntry_get_Version_m10182(L_137, /*hidden argument*/NULL);
			int16_t L_139 = V_2;
			if ((((int32_t)L_138) == ((int32_t)L_139)))
			{
				goto IL_032a;
			}
		}

IL_031f:
		{
			ZipException_t1840 * L_140 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_140, (String_t*) &_stringLiteral2845, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_140);
		}

IL_032a:
		{
			int16_t L_141 = V_3;
			if (!((int32_t)((int32_t)L_141&(int32_t)((int32_t)64))))
			{
				goto IL_0340;
			}
		}

IL_0330:
		{
			int16_t L_142 = V_2;
			if ((((int32_t)L_142) >= ((int32_t)((int32_t)62))))
			{
				goto IL_0340;
			}
		}

IL_0335:
		{
			ZipException_t1840 * L_143 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_143, (String_t*) &_stringLiteral2846, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_143);
		}

IL_0340:
		{
			int16_t L_144 = V_3;
			if (!((int32_t)((int32_t)L_144&(int32_t)((int32_t)8192))))
			{
				goto IL_035c;
			}
		}

IL_0349:
		{
			int16_t L_145 = V_5;
			if (L_145)
			{
				goto IL_0351;
			}
		}

IL_034d:
		{
			int16_t L_146 = V_6;
			if (!L_146)
			{
				goto IL_035c;
			}
		}

IL_0351:
		{
			ZipException_t1840 * L_147 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_147, (String_t*) &_stringLiteral2847, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_147);
		}

IL_035c:
		{
			int16_t L_148 = V_3;
			if (((int32_t)((int32_t)L_148&(int32_t)8)))
			{
				goto IL_0377;
			}
		}

IL_0361:
		{
			uint32_t L_149 = V_7;
			ZipEntry_t856 * L_150 = ___entry;
			NullCheck(L_150);
			int64_t L_151 = ZipEntry_get_Crc_m10191(L_150, /*hidden argument*/NULL);
			if ((((int32_t)L_149) == ((int32_t)(((uint32_t)L_151)))))
			{
				goto IL_0377;
			}
		}

IL_036c:
		{
			ZipException_t1840 * L_152 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_152, (String_t*) &_stringLiteral2848, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_152);
		}

IL_0377:
		{
			int64_t L_153 = V_9;
			if ((!(((uint64_t)L_153) == ((uint64_t)(((int64_t)0))))))
			{
				goto IL_0392;
			}
		}

IL_037d:
		{
			int64_t L_154 = V_8;
			if ((!(((uint64_t)L_154) == ((uint64_t)(((int64_t)0))))))
			{
				goto IL_0392;
			}
		}

IL_0383:
		{
			uint32_t L_155 = V_7;
			if (!L_155)
			{
				goto IL_0392;
			}
		}

IL_0387:
		{
			ZipException_t1840 * L_156 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_156, (String_t*) &_stringLiteral2849, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_156);
		}

IL_0392:
		{
			ZipEntry_t856 * L_157 = ___entry;
			NullCheck(L_157);
			String_t* L_158 = ZipEntry_get_Name_m3562(L_157, /*hidden argument*/NULL);
			NullCheck(L_158);
			int32_t L_159 = String_get_Length_m1368(L_158, /*hidden argument*/NULL);
			int32_t L_160 = V_10;
			if ((((int32_t)L_159) <= ((int32_t)L_160)))
			{
				goto IL_03ac;
			}
		}

IL_03a1:
		{
			ZipException_t1840 * L_161 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_161, (String_t*) &_stringLiteral2850, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_161);
		}

IL_03ac:
		{
			int16_t L_162 = V_3;
			ByteU5BU5D_t159* L_163 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t1836_il2cpp_TypeInfo_var);
			String_t* L_164 = ZipConstants_ConvertToStringExt_m10166(NULL /*static, unused*/, L_162, L_163, /*hidden argument*/NULL);
			V_15 = L_164;
			String_t* L_165 = V_15;
			ZipEntry_t856 * L_166 = ___entry;
			NullCheck(L_166);
			String_t* L_167 = ZipEntry_get_Name_m3562(L_166, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_168 = String_op_Inequality_m1484(NULL /*static, unused*/, L_165, L_167, /*hidden argument*/NULL);
			if (!L_168)
			{
				goto IL_03d0;
			}
		}

IL_03c5:
		{
			ZipException_t1840 * L_169 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_169, (String_t*) &_stringLiteral2851, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_169);
		}

IL_03d0:
		{
			ZipEntry_t856 * L_170 = ___entry;
			NullCheck(L_170);
			bool L_171 = ZipEntry_get_IsDirectory_m3563(L_170, /*hidden argument*/NULL);
			if (!L_171)
			{
				goto IL_0414;
			}
		}

IL_03d8:
		{
			int64_t L_172 = V_9;
			if ((((int64_t)L_172) <= ((int64_t)(((int64_t)0)))))
			{
				goto IL_03e9;
			}
		}

IL_03de:
		{
			ZipException_t1840 * L_173 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_173, (String_t*) &_stringLiteral2852, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_173);
		}

IL_03e9:
		{
			ZipEntry_t856 * L_174 = ___entry;
			NullCheck(L_174);
			bool L_175 = ZipEntry_get_IsCrypted_m10169(L_174, /*hidden argument*/NULL);
			if (!L_175)
			{
				goto IL_0403;
			}
		}

IL_03f1:
		{
			int64_t L_176 = V_8;
			if ((((int64_t)L_176) <= ((int64_t)(((int64_t)((int32_t)14))))))
			{
				goto IL_0414;
			}
		}

IL_03f8:
		{
			ZipException_t1840 * L_177 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_177, (String_t*) &_stringLiteral2853, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_177);
		}

IL_0403:
		{
			int64_t L_178 = V_8;
			if ((((int64_t)L_178) <= ((int64_t)(((int64_t)2)))))
			{
				goto IL_0414;
			}
		}

IL_0409:
		{
			ZipException_t1840 * L_179 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_179, (String_t*) &_stringLiteral2853, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_179);
		}

IL_0414:
		{
			String_t* L_180 = V_15;
			IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_t1852_il2cpp_TypeInfo_var);
			bool L_181 = ZipNameTransform_IsValidName_m10277(NULL /*static, unused*/, L_180, 1, /*hidden argument*/NULL);
			if (L_181)
			{
				goto IL_0429;
			}
		}

IL_041e:
		{
			ZipException_t1840 * L_182 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_182, (String_t*) &_stringLiteral2854, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_182);
		}

IL_0429:
		{
			int16_t L_183 = V_3;
			if (!((int32_t)((int32_t)L_183&(int32_t)8)))
			{
				goto IL_043a;
			}
		}

IL_042e:
		{
			int64_t L_184 = V_9;
			if ((((int64_t)L_184) > ((int64_t)(((int64_t)0)))))
			{
				goto IL_043a;
			}
		}

IL_0434:
		{
			int64_t L_185 = V_8;
			if ((((int64_t)L_185) <= ((int64_t)(((int64_t)0)))))
			{
				goto IL_0492;
			}
		}

IL_043a:
		{
			int64_t L_186 = V_9;
			ZipEntry_t856 * L_187 = ___entry;
			NullCheck(L_187);
			int64_t L_188 = ZipEntry_get_Size_m10187(L_187, /*hidden argument*/NULL);
			if ((((int64_t)L_186) == ((int64_t)L_188)))
			{
				goto IL_0466;
			}
		}

IL_0444:
		{
			ZipEntry_t856 * L_189 = ___entry;
			NullCheck(L_189);
			int64_t L_190 = ZipEntry_get_Size_m10187(L_189, /*hidden argument*/NULL);
			int64_t L_191 = L_190;
			Object_t * L_192 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_191);
			int64_t L_193 = V_9;
			int64_t L_194 = L_193;
			Object_t * L_195 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_194);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_196 = String_Format_m3539(NULL /*static, unused*/, (String_t*) &_stringLiteral2855, L_192, L_195, /*hidden argument*/NULL);
			ZipException_t1840 * L_197 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_197, L_196, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_197);
		}

IL_0466:
		{
			int64_t L_198 = V_8;
			ZipEntry_t856 * L_199 = ___entry;
			NullCheck(L_199);
			int64_t L_200 = ZipEntry_get_CompressedSize_m10189(L_199, /*hidden argument*/NULL);
			if ((((int64_t)L_198) == ((int64_t)L_200)))
			{
				goto IL_0492;
			}
		}

IL_0470:
		{
			ZipEntry_t856 * L_201 = ___entry;
			NullCheck(L_201);
			int64_t L_202 = ZipEntry_get_CompressedSize_m10189(L_201, /*hidden argument*/NULL);
			int64_t L_203 = L_202;
			Object_t * L_204 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_203);
			int64_t L_205 = V_8;
			int64_t L_206 = L_205;
			Object_t * L_207 = Box(Int64_t696_il2cpp_TypeInfo_var, &L_206);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_208 = String_Format_m3539(NULL /*static, unused*/, (String_t*) &_stringLiteral2856, L_204, L_207, /*hidden argument*/NULL);
			ZipException_t1840 * L_209 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
			ZipException__ctor_m10203(L_209, L_208, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_209);
		}

IL_0492:
		{
			int32_t L_210 = V_10;
			int32_t L_211 = V_11;
			V_16 = ((int32_t)((int32_t)L_210+(int32_t)L_211));
			int64_t L_212 = (__this->___offsetOfFirstEntry_5);
			ZipEntry_t856 * L_213 = ___entry;
			NullCheck(L_213);
			int64_t L_214 = ZipEntry_get_Offset_m10176(L_213, /*hidden argument*/NULL);
			int32_t L_215 = V_16;
			V_17 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_212+(int64_t)L_214))+(int64_t)(((int64_t)((int32_t)30)))))+(int64_t)(((int64_t)L_215))));
			IL2CPP_LEAVE(0x4BA, FINALLY_04b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_04b2;
	}

FINALLY_04b2:
	{ // begin finally (depth: 1)
		Stream_t844 * L_216 = V_18;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_216, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(1202)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1202)
	{
		IL2CPP_JUMP_TBL(0x4BA, IL_04ba)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_04ba:
	{
		int64_t L_217 = V_17;
		return L_217;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::PostUpdateCleanup()
extern TypeInfo* IArchiveStorage_t1848_il2cpp_TypeInfo_var;
extern "C" void ZipFile_PostUpdateCleanup_m10247 (ZipFile_t855 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IArchiveStorage_t1848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4165);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___archiveStorage__12);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = (__this->___archiveStorage__12);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void ICSharpCode.SharpZipLib.Zip.IArchiveStorage::Dispose() */, IArchiveStorage_t1848_il2cpp_TypeInfo_var, L_1);
		__this->___archiveStorage__12 = (Object_t *)NULL;
	}

IL_001a:
	{
		__this->___updateDataSource__13 = (Object_t *)NULL;
		__this->___updates__10 = (ArrayList_t913 *)NULL;
		__this->___updateIndex__11 = (Hashtable_t915 *)NULL;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::System.IDisposable.Dispose()
extern "C" void ZipFile_System_IDisposable_Dispose_m10248 (ZipFile_t855 * __this, const MethodInfo* method)
{
	{
		ZipFile_Close_m3557(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::DisposeInternal(System.Boolean)
extern TypeInfo* ZipEntryU5BU5D_t1845_il2cpp_TypeInfo_var;
extern "C" void ZipFile_DisposeInternal_m10249 (ZipFile_t855 * __this, bool ___disposing, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipEntryU5BU5D_t1845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4160);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t844 * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___isDisposed__1);
		if (L_0)
		{
			goto IL_0052;
		}
	}
	{
		__this->___isDisposed__1 = 1;
		__this->___entries__6 = ((ZipEntryU5BU5D_t1845*)SZArrayNew(ZipEntryU5BU5D_t1845_il2cpp_TypeInfo_var, 0));
		bool L_1 = ZipFile_get_IsStreamOwner_m10242(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Stream_t844 * L_2 = (__this->___baseStream__3);
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		Stream_t844 * L_3 = (__this->___baseStream__3);
		Stream_t844 * L_4 = L_3;
		V_0 = L_4;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		Stream_t844 * L_5 = (__this->___baseStream__3);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_5);
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		Stream_t844 * L_6 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_004c:
	{
		ZipFile_PostUpdateCleanup_m10247(__this, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Dispose(System.Boolean)
extern "C" void ZipFile_Dispose_m10250 (ZipFile_t855 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		ZipFile_DisposeInternal_m10249(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUshort()
extern TypeInfo* EndOfStreamException_t1861_il2cpp_TypeInfo_var;
extern "C" uint16_t ZipFile_ReadLEUshort_m10251 (ZipFile_t855 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EndOfStreamException_t1861_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4142);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Stream_t844 * L_0 = (__this->___baseStream__3);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		EndOfStreamException_t1861 * L_3 = (EndOfStreamException_t1861 *)il2cpp_codegen_object_new (EndOfStreamException_t1861_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_m10294(L_3, (String_t*) &_stringLiteral2857, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		Stream_t844 * L_4 = (__this->___baseStream__3);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		EndOfStreamException_t1861 * L_7 = (EndOfStreamException_t1861 *)il2cpp_codegen_object_new (EndOfStreamException_t1861_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_m10294(L_7, (String_t*) &_stringLiteral2857, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (((uint16_t)((int32_t)((int32_t)(((uint16_t)L_8))|(int32_t)(((uint16_t)((int32_t)((int32_t)L_9<<(int32_t)8))))))));
	}
}
// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUint()
extern "C" uint32_t ZipFile_ReadLEUint_m10252 (ZipFile_t855 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		uint16_t L_1 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))));
	}
}
// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUlong()
extern "C" uint64_t ZipFile_ReadLEUlong_m10253 (ZipFile_t855 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		uint32_t L_1 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		return ((int64_t)((int64_t)(((uint64_t)L_0))|(int64_t)((int64_t)((int64_t)(((uint64_t)L_1))<<(int32_t)((int32_t)32)))));
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::LocateBlockWithSignature(System.Int32,System.Int64,System.Int32,System.Int32)
extern TypeInfo* ZipHelperStream_t1851_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" int64_t ZipFile_LocateBlockWithSignature_m10254 (ZipFile_t855 * __this, int32_t ___signature, int64_t ___endLocation, int32_t ___minimumBlockSize, int32_t ___maximumVariableData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipHelperStream_t1851_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4166);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	ZipHelperStream_t1851 * V_0 = {0};
	int64_t V_1 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t844 * L_0 = (__this->___baseStream__3);
		ZipHelperStream_t1851 * L_1 = (ZipHelperStream_t1851 *)il2cpp_codegen_object_new (ZipHelperStream_t1851_il2cpp_TypeInfo_var);
		ZipHelperStream__ctor_m10259(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		ZipHelperStream_t1851 * L_2 = V_0;
		int32_t L_3 = ___signature;
		int64_t L_4 = ___endLocation;
		int32_t L_5 = ___minimumBlockSize;
		int32_t L_6 = ___maximumVariableData;
		NullCheck(L_2);
		int64_t L_7 = ZipHelperStream_LocateBlockWithSignature_m10272(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			ZipHelperStream_t1851 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			ZipHelperStream_t1851 * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_9);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0024:
	{
		int64_t L_10 = V_1;
		return L_10;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::ReadEntries()
extern TypeInfo* ZipException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t1836_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t699_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntryU5BU5D_t1845_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntry_t856_il2cpp_TypeInfo_var;
extern "C" void ZipFile_ReadEntries_m10255 (ZipFile_t855 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4147);
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		ZipConstants_t1836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4155);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		UInt64_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(990);
		ZipEntryU5BU5D_t1845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4160);
		ZipEntry_t856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1781);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	int64_t V_6 = 0;
	uint32_t V_7 = 0;
	ByteU5BU5D_t159* V_8 = {0};
	bool V_9 = false;
	int64_t V_10 = 0;
	uint64_t V_11 = 0;
	int64_t V_12 = 0;
	uint64_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	int64_t V_20 = 0;
	int64_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	uint32_t V_25 = 0;
	int64_t V_26 = 0;
	ByteU5BU5D_t159* V_27 = {0};
	String_t* V_28 = {0};
	ZipEntry_t856 * V_29 = {0};
	ByteU5BU5D_t159* V_30 = {0};
	{
		Stream_t844 * L_0 = (__this->___baseStream__3);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ZipException_t1840 * L_2 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_2, (String_t*) &_stringLiteral2858, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		Stream_t844 * L_3 = (__this->___baseStream__3);
		NullCheck(L_3);
		int64_t L_4 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		int64_t L_5 = ZipFile_LocateBlockWithSignature_m10254(__this, ((int32_t)101010256), L_4, ((int32_t)22), ((int32_t)65535), /*hidden argument*/NULL);
		V_0 = L_5;
		int64_t L_6 = V_0;
		if ((((int64_t)L_6) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0046;
		}
	}
	{
		ZipException_t1840 * L_7 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_7, (String_t*) &_stringLiteral2859, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0046:
	{
		uint16_t L_8 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		uint16_t L_9 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		uint16_t L_10 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_3 = (((uint64_t)L_10));
		uint16_t L_11 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_4 = (((uint64_t)L_11));
		uint32_t L_12 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		V_5 = (((uint64_t)L_12));
		uint32_t L_13 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		V_6 = (((uint64_t)L_13));
		uint16_t L_14 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_7 = L_14;
		uint32_t L_15 = V_7;
		if ((!(((uint32_t)L_15) > ((uint32_t)0))))
		{
			goto IL_00aa;
		}
	}
	{
		uint32_t L_16 = V_7;
		V_8 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, (((uintptr_t)L_16))));
		Stream_t844 * L_17 = (__this->___baseStream__3);
		ByteU5BU5D_t159* L_18 = V_8;
		StreamUtils_ReadFully_m10067(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_19 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t1836_il2cpp_TypeInfo_var);
		String_t* L_20 = ZipConstants_ConvertToString_m10164(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		__this->___comment__2 = L_20;
		goto IL_00b5;
	}

IL_00aa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___comment__2 = L_21;
	}

IL_00b5:
	{
		V_9 = 0;
		uint16_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)65535))))
		{
			goto IL_00ea;
		}
	}
	{
		uint16_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)65535))))
		{
			goto IL_00ea;
		}
	}
	{
		uint64_t L_24 = V_3;
		if ((((int64_t)L_24) == ((int64_t)(((int64_t)((int32_t)65535))))))
		{
			goto IL_00ea;
		}
	}
	{
		uint64_t L_25 = V_4;
		if ((((int64_t)L_25) == ((int64_t)(((int64_t)((int32_t)65535))))))
		{
			goto IL_00ea;
		}
	}
	{
		uint64_t L_26 = V_5;
		if ((((int64_t)L_26) == ((int64_t)(((uint64_t)(((uint32_t)(-1))))))))
		{
			goto IL_00ea;
		}
	}
	{
		int64_t L_27 = V_6;
		if ((!(((uint64_t)L_27) == ((uint64_t)(((uint64_t)(((uint32_t)(-1)))))))))
		{
			goto IL_01a1;
		}
	}

IL_00ea:
	{
		V_9 = 1;
		int64_t L_28 = V_0;
		int64_t L_29 = ZipFile_LocateBlockWithSignature_m10254(__this, ((int32_t)117853008), L_28, 0, ((int32_t)4096), /*hidden argument*/NULL);
		V_10 = L_29;
		int64_t L_30 = V_10;
		if ((((int64_t)L_30) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0112;
		}
	}
	{
		ZipException_t1840 * L_31 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_31, (String_t*) &_stringLiteral2860, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_0112:
	{
		ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		uint64_t L_32 = ZipFile_ReadLEUlong_m10253(__this, /*hidden argument*/NULL);
		V_11 = L_32;
		ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		Stream_t844 * L_33 = (__this->___baseStream__3);
		uint64_t L_34 = V_11;
		NullCheck(L_33);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_33, L_34);
		uint32_t L_35 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		V_12 = (((uint64_t)L_35));
		int64_t L_36 = V_12;
		if ((((int64_t)L_36) == ((int64_t)(((int64_t)((int32_t)101075792))))))
		{
			goto IL_015f;
		}
	}
	{
		uint64_t L_37 = V_11;
		uint64_t L_38 = L_37;
		Object_t * L_39 = Box(UInt64_t699_il2cpp_TypeInfo_var, &L_38);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral2861, L_39, /*hidden argument*/NULL);
		ZipException_t1840 * L_41 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_41, L_40, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_41);
	}

IL_015f:
	{
		ZipFile_ReadLEUlong_m10253(__this, /*hidden argument*/NULL);
		ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		uint64_t L_42 = ZipFile_ReadLEUlong_m10253(__this, /*hidden argument*/NULL);
		V_3 = L_42;
		uint64_t L_43 = ZipFile_ReadLEUlong_m10253(__this, /*hidden argument*/NULL);
		V_4 = L_43;
		uint64_t L_44 = ZipFile_ReadLEUlong_m10253(__this, /*hidden argument*/NULL);
		V_5 = L_44;
		uint64_t L_45 = ZipFile_ReadLEUlong_m10253(__this, /*hidden argument*/NULL);
		V_6 = L_45;
	}

IL_01a1:
	{
		uint64_t L_46 = V_3;
		if ((uint64_t)(L_46) > INTPTR_MAX) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		__this->___entries__6 = ((ZipEntryU5BU5D_t1845*)SZArrayNew(ZipEntryU5BU5D_t1845_il2cpp_TypeInfo_var, (((intptr_t)L_46))));
		bool L_47 = V_9;
		if (L_47)
		{
			goto IL_01e2;
		}
	}
	{
		int64_t L_48 = V_6;
		int64_t L_49 = V_0;
		uint64_t L_50 = V_5;
		if ((((int64_t)L_48) >= ((int64_t)((int64_t)((int64_t)L_49-(int64_t)((int64_t)((int64_t)(((int64_t)4))+(int64_t)L_50)))))))
		{
			goto IL_01e2;
		}
	}
	{
		int64_t L_51 = V_0;
		uint64_t L_52 = V_5;
		int64_t L_53 = V_6;
		__this->___offsetOfFirstEntry_5 = ((int64_t)((int64_t)L_51-(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)4))+(int64_t)L_52))+(int64_t)L_53))));
		int64_t L_54 = (__this->___offsetOfFirstEntry_5);
		if ((((int64_t)L_54) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_01e2;
		}
	}
	{
		ZipException_t1840 * L_55 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_55, (String_t*) &_stringLiteral2862, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_55);
	}

IL_01e2:
	{
		Stream_t844 * L_56 = (__this->___baseStream__3);
		int64_t L_57 = (__this->___offsetOfFirstEntry_5);
		int64_t L_58 = V_6;
		NullCheck(L_56);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_56, ((int64_t)((int64_t)L_57+(int64_t)L_58)), 0);
		V_13 = (((int64_t)0));
		goto IL_03ae;
	}

IL_0201:
	{
		uint32_t L_59 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_59) == ((int32_t)((int32_t)33639248))))
		{
			goto IL_0219;
		}
	}
	{
		ZipException_t1840 * L_60 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_60, (String_t*) &_stringLiteral2863, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_60);
	}

IL_0219:
	{
		uint16_t L_61 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_14 = L_61;
		uint16_t L_62 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_15 = L_62;
		uint16_t L_63 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_16 = L_63;
		uint16_t L_64 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_17 = L_64;
		uint32_t L_65 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		V_18 = L_65;
		uint32_t L_66 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		V_19 = L_66;
		uint32_t L_67 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		V_20 = (((uint64_t)L_67));
		uint32_t L_68 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		V_21 = (((uint64_t)L_68));
		uint16_t L_69 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_22 = L_69;
		uint16_t L_70 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_23 = L_70;
		uint16_t L_71 = ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		V_24 = L_71;
		ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		ZipFile_ReadLEUshort_m10251(__this, /*hidden argument*/NULL);
		uint32_t L_72 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		V_25 = L_72;
		uint32_t L_73 = ZipFile_ReadLEUint_m10252(__this, /*hidden argument*/NULL);
		V_26 = (((uint64_t)L_73));
		int32_t L_74 = V_22;
		int32_t L_75 = V_24;
		int32_t L_76 = Math_Max_m5256(NULL /*static, unused*/, L_74, L_75, /*hidden argument*/NULL);
		V_27 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, L_76));
		Stream_t844 * L_77 = (__this->___baseStream__3);
		ByteU5BU5D_t159* L_78 = V_27;
		int32_t L_79 = V_22;
		StreamUtils_ReadFully_m10068(NULL /*static, unused*/, L_77, L_78, 0, L_79, /*hidden argument*/NULL);
		int32_t L_80 = V_16;
		ByteU5BU5D_t159* L_81 = V_27;
		int32_t L_82 = V_22;
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t1836_il2cpp_TypeInfo_var);
		String_t* L_83 = ZipConstants_ConvertToStringExt_m10165(NULL /*static, unused*/, L_80, L_81, L_82, /*hidden argument*/NULL);
		V_28 = L_83;
		String_t* L_84 = V_28;
		int32_t L_85 = V_15;
		int32_t L_86 = V_14;
		int32_t L_87 = V_17;
		ZipEntry_t856 * L_88 = (ZipEntry_t856 *)il2cpp_codegen_object_new (ZipEntry_t856_il2cpp_TypeInfo_var);
		ZipEntry__ctor_m10168(L_88, L_84, L_85, L_86, L_87, /*hidden argument*/NULL);
		V_29 = L_88;
		ZipEntry_t856 * L_89 = V_29;
		uint32_t L_90 = V_19;
		NullCheck(L_89);
		ZipEntry_set_Crc_m10192(L_89, ((int64_t)((int64_t)(((uint64_t)L_90))&(int64_t)(((uint64_t)(((uint32_t)(-1))))))), /*hidden argument*/NULL);
		ZipEntry_t856 * L_91 = V_29;
		int64_t L_92 = V_21;
		NullCheck(L_91);
		ZipEntry_set_Size_m10188(L_91, ((int64_t)((int64_t)L_92&(int64_t)(((uint64_t)(((uint32_t)(-1))))))), /*hidden argument*/NULL);
		ZipEntry_t856 * L_93 = V_29;
		int64_t L_94 = V_20;
		NullCheck(L_93);
		ZipEntry_set_CompressedSize_m10190(L_93, ((int64_t)((int64_t)L_94&(int64_t)(((uint64_t)(((uint32_t)(-1))))))), /*hidden argument*/NULL);
		ZipEntry_t856 * L_95 = V_29;
		int32_t L_96 = V_16;
		NullCheck(L_95);
		ZipEntry_set_Flags_m10173(L_95, L_96, /*hidden argument*/NULL);
		ZipEntry_t856 * L_97 = V_29;
		uint32_t L_98 = V_18;
		NullCheck(L_97);
		ZipEntry_set_DosTime_m10185(L_97, (((uint64_t)L_98)), /*hidden argument*/NULL);
		ZipEntry_t856 * L_99 = V_29;
		uint64_t L_100 = V_13;
		NullCheck(L_99);
		ZipEntry_set_ZipFileIndex_m10175(L_99, L_100, /*hidden argument*/NULL);
		ZipEntry_t856 * L_101 = V_29;
		int64_t L_102 = V_26;
		NullCheck(L_101);
		ZipEntry_set_Offset_m10177(L_101, L_102, /*hidden argument*/NULL);
		ZipEntry_t856 * L_103 = V_29;
		uint32_t L_104 = V_25;
		NullCheck(L_103);
		ZipEntry_set_ExternalFileAttributes_m10179(L_103, L_104, /*hidden argument*/NULL);
		int32_t L_105 = V_16;
		if (((int32_t)((int32_t)L_105&(int32_t)8)))
		{
			goto IL_0336;
		}
	}
	{
		ZipEntry_t856 * L_106 = V_29;
		uint32_t L_107 = V_19;
		NullCheck(L_106);
		ZipEntry_set_CryptoCheckValue_m10171(L_106, (((uint8_t)((int32_t)((uint32_t)L_107>>((int32_t)24))))), /*hidden argument*/NULL);
		goto IL_0348;
	}

IL_0336:
	{
		ZipEntry_t856 * L_108 = V_29;
		uint32_t L_109 = V_18;
		NullCheck(L_108);
		ZipEntry_set_CryptoCheckValue_m10171(L_108, (((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_109>>8))&(int32_t)((int32_t)255))))), /*hidden argument*/NULL);
	}

IL_0348:
	{
		int32_t L_110 = V_23;
		if ((((int32_t)L_110) <= ((int32_t)0)))
		{
			goto IL_036c;
		}
	}
	{
		int32_t L_111 = V_23;
		V_30 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, L_111));
		Stream_t844 * L_112 = (__this->___baseStream__3);
		ByteU5BU5D_t159* L_113 = V_30;
		StreamUtils_ReadFully_m10067(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/NULL);
		ZipEntry_t856 * L_114 = V_29;
		ByteU5BU5D_t159* L_115 = V_30;
		NullCheck(L_114);
		ZipEntry_set_ExtraData_m10194(L_114, L_115, /*hidden argument*/NULL);
	}

IL_036c:
	{
		ZipEntry_t856 * L_116 = V_29;
		NullCheck(L_116);
		ZipEntry_ProcessExtraData_m10195(L_116, 0, /*hidden argument*/NULL);
		int32_t L_117 = V_24;
		if ((((int32_t)L_117) <= ((int32_t)0)))
		{
			goto IL_039b;
		}
	}
	{
		Stream_t844 * L_118 = (__this->___baseStream__3);
		ByteU5BU5D_t159* L_119 = V_27;
		int32_t L_120 = V_24;
		StreamUtils_ReadFully_m10068(NULL /*static, unused*/, L_118, L_119, 0, L_120, /*hidden argument*/NULL);
		ZipEntry_t856 * L_121 = V_29;
		int32_t L_122 = V_16;
		ByteU5BU5D_t159* L_123 = V_27;
		int32_t L_124 = V_24;
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t1836_il2cpp_TypeInfo_var);
		String_t* L_125 = ZipConstants_ConvertToStringExt_m10165(NULL /*static, unused*/, L_122, L_123, L_124, /*hidden argument*/NULL);
		NullCheck(L_121);
		ZipEntry_set_Comment_m10196(L_121, L_125, /*hidden argument*/NULL);
	}

IL_039b:
	{
		ZipEntryU5BU5D_t1845* L_126 = (__this->___entries__6);
		uint64_t L_127 = V_13;
		if ((uint64_t)(L_127) > INTPTR_MAX) il2cpp_codegen_raise_exception(il2cpp_codegen_get_overflow_exception());
		ZipEntry_t856 * L_128 = V_29;
		NullCheck(L_126);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_126, (((intptr_t)L_127)));
		ArrayElementTypeCheck (L_126, L_128);
		*((ZipEntry_t856 **)(ZipEntry_t856 **)SZArrayLdElema(L_126, (((intptr_t)L_127)))) = (ZipEntry_t856 *)L_128;
		uint64_t L_129 = V_13;
		V_13 = ((int64_t)((int64_t)L_129+(int64_t)(((int64_t)1))));
	}

IL_03ae:
	{
		uint64_t L_130 = V_13;
		uint64_t L_131 = V_3;
		if ((!(((uint64_t)L_130) >= ((uint64_t)L_131))))
		{
			goto IL_0201;
		}
	}
	{
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::LocateEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" int64_t ZipFile_LocateEntry_m10256 (ZipFile_t855 * __this, ZipEntry_t856 * ___entry, const MethodInfo* method)
{
	{
		ZipEntry_t856 * L_0 = ___entry;
		int64_t L_1 = ZipFile_TestLocalHeader_m10246(__this, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::CreateAndInitDecryptionStream(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* PkzipClassicManaged_t1825_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t1840_il2cpp_TypeInfo_var;
extern TypeInfo* CryptoStream_t1860_il2cpp_TypeInfo_var;
extern "C" Stream_t844 * ZipFile_CreateAndInitDecryptionStream_m10257 (ZipFile_t855 * __this, Stream_t844 * ___baseStream, ZipEntry_t856 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PkzipClassicManaged_t1825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4167);
		ZipException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4147);
		CryptoStream_t1860_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4168);
		s_Il2CppMethodIntialized = true;
	}
	CryptoStream_t1860 * V_0 = {0};
	PkzipClassicManaged_t1825 * V_1 = {0};
	{
		V_0 = (CryptoStream_t1860 *)NULL;
		ZipEntry_t856 * L_0 = ___entry;
		NullCheck(L_0);
		int32_t L_1 = ZipEntry_get_Version_m10182(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)50))))
		{
			goto IL_0017;
		}
	}
	{
		ZipEntry_t856 * L_2 = ___entry;
		NullCheck(L_2);
		int32_t L_3 = ZipEntry_get_Flags_m10172(L_2, /*hidden argument*/NULL);
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)64))))
		{
			goto IL_005a;
		}
	}

IL_0017:
	{
		PkzipClassicManaged_t1825 * L_4 = (PkzipClassicManaged_t1825 *)il2cpp_codegen_object_new (PkzipClassicManaged_t1825_il2cpp_TypeInfo_var);
		PkzipClassicManaged__ctor_m10100(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		ZipEntry_t856 * L_5 = ___entry;
		NullCheck(L_5);
		String_t* L_6 = ZipEntry_get_Name_m3562(L_5, /*hidden argument*/NULL);
		ZipFile_OnKeysRequired_m10239(__this, L_6, /*hidden argument*/NULL);
		bool L_7 = ZipFile_get_HaveKeys_m10240(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003c;
		}
	}
	{
		ZipException_t1840 * L_8 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_8, (String_t*) &_stringLiteral2864, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003c:
	{
		Stream_t844 * L_9 = ___baseStream;
		PkzipClassicManaged_t1825 * L_10 = V_1;
		ByteU5BU5D_t159* L_11 = (__this->___key_7);
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker2< Object_t *, ByteU5BU5D_t159*, ByteU5BU5D_t159* >::Invoke(21 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_10, L_11, (ByteU5BU5D_t159*)(ByteU5BU5D_t159*)NULL);
		CryptoStream_t1860 * L_13 = (CryptoStream_t1860 *)il2cpp_codegen_object_new (CryptoStream_t1860_il2cpp_TypeInfo_var);
		CryptoStream__ctor_m10295(L_13, L_9, L_12, 0, /*hidden argument*/NULL);
		V_0 = L_13;
		CryptoStream_t1860 * L_14 = V_0;
		ZipEntry_t856 * L_15 = ___entry;
		ZipFile_CheckClassicPassword_m10258(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		goto IL_0065;
	}

IL_005a:
	{
		ZipException_t1840 * L_16 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_16, (String_t*) &_stringLiteral2865, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0065:
	{
		CryptoStream_t1860 * L_17 = V_0;
		return L_17;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CheckClassicPassword(System.Security.Cryptography.CryptoStream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t1840_il2cpp_TypeInfo_var;
extern "C" void ZipFile_CheckClassicPassword_m10258 (Object_t * __this /* static, unused */, CryptoStream_t1860 * ___classicCryptoStream, ZipEntry_t856 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		ZipException_t1840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4147);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t159* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)12)));
		CryptoStream_t1860 * L_0 = ___classicCryptoStream;
		ByteU5BU5D_t159* L_1 = V_0;
		StreamUtils_ReadFully_m10067(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_t159* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)11));
		int32_t L_3 = ((int32_t)11);
		ZipEntry_t856 * L_4 = ___entry;
		NullCheck(L_4);
		uint8_t L_5 = ZipEntry_get_CryptoCheckValue_m10170(L_4, /*hidden argument*/NULL);
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))) == ((int32_t)L_5)))
		{
			goto IL_0026;
		}
	}
	{
		ZipException_t1840 * L_6 = (ZipException_t1840 *)il2cpp_codegen_object_new (ZipException_t1840_il2cpp_TypeInfo_var);
		ZipException__ctor_m10203(L_6, (String_t*) &_stringLiteral2866, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::.ctor(System.IO.Stream)
extern TypeInfo* Stream_t844_il2cpp_TypeInfo_var;
extern "C" void ZipHelperStream__ctor_m10259 (ZipHelperStream_t1851 * __this, Stream_t844 * ___stream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1818);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t844_il2cpp_TypeInfo_var);
		Stream__ctor_m6414(__this, /*hidden argument*/NULL);
		Stream_t844 * L_0 = ___stream;
		__this->___stream__3 = L_0;
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanRead()
extern "C" bool ZipHelperStream_get_CanRead_m10260 (ZipHelperStream_t1851 * __this, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanSeek()
extern "C" bool ZipHelperStream_get_CanSeek_m10261 (ZipHelperStream_t1851 * __this, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		return L_1;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_Length()
extern "C" int64_t ZipHelperStream_get_Length_m10262 (ZipHelperStream_t1851 * __this, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		NullCheck(L_0);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_Position()
extern "C" int64_t ZipHelperStream_get_Position_m10263 (ZipHelperStream_t1851 * __this, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		NullCheck(L_0);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::set_Position(System.Int64)
extern "C" void ZipHelperStream_set_Position_m10264 (ZipHelperStream_t1851 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		int64_t L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanWrite()
extern "C" bool ZipHelperStream_get_CanWrite_m10265 (ZipHelperStream_t1851 * __this, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Flush()
extern "C" void ZipHelperStream_Flush_m10266 (ZipHelperStream_t1851 * __this, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ZipHelperStream_Seek_m10267 (ZipHelperStream_t1851 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		int64_t L_1 = ___offset;
		int32_t L_2 = ___origin;
		NullCheck(L_0);
		int64_t L_3 = (int64_t)VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::SetLength(System.Int64)
extern "C" void ZipHelperStream_SetLength_m10268 (ZipHelperStream_t1851 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		int64_t L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipHelperStream_Read_m10269 (ZipHelperStream_t1851 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		ByteU5BU5D_t159* L_1 = ___buffer;
		int32_t L_2 = ___offset;
		int32_t L_3 = ___count;
		NullCheck(L_0);
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t159*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ZipHelperStream_Write_m10270 (ZipHelperStream_t1851 * __this, ByteU5BU5D_t159* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		ByteU5BU5D_t159* L_1 = ___buffer;
		int32_t L_2 = ___offset;
		int32_t L_3 = ___count;
		NullCheck(L_0);
		VirtActionInvoker3< ByteU5BU5D_t159*, int32_t, int32_t >::Invoke(22 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Close()
extern "C" void ZipHelperStream_Close_m10271 (ZipHelperStream_t1851 * __this, const MethodInfo* method)
{
	Stream_t844 * V_0 = {0};
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		V_0 = L_0;
		__this->___stream__3 = (Stream_t844 *)NULL;
		bool L_1 = (__this->___isOwner__2);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Stream_t844 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		__this->___isOwner__2 = 0;
		Stream_t844 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_3);
	}

IL_0026:
	{
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::LocateBlockWithSignature(System.Int32,System.Int64,System.Int32,System.Int32)
extern "C" int64_t ZipHelperStream_LocateBlockWithSignature_m10272 (ZipHelperStream_t1851 * __this, int32_t ___signature, int64_t ___endLocation, int32_t ___minimumBlockSize, int32_t ___maximumVariableData, const MethodInfo* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int64_t L_0 = ___endLocation;
		int32_t L_1 = ___minimumBlockSize;
		V_0 = ((int64_t)((int64_t)L_0-(int64_t)(((int64_t)L_1))));
		int64_t L_2 = V_0;
		if ((((int64_t)L_2) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_000d;
		}
	}
	{
		return (((int64_t)(-1)));
	}

IL_000d:
	{
		int64_t L_3 = V_0;
		int32_t L_4 = ___maximumVariableData;
		int64_t L_5 = Math_Max_m5257(NULL /*static, unused*/, ((int64_t)((int64_t)L_3-(int64_t)(((int64_t)L_4)))), (((int64_t)0)), /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_001a:
	{
		int64_t L_6 = V_0;
		int64_t L_7 = V_1;
		if ((((int64_t)L_6) >= ((int64_t)L_7)))
		{
			goto IL_0021;
		}
	}
	{
		return (((int64_t)(-1)));
	}

IL_0021:
	{
		int64_t L_8 = V_0;
		int64_t L_9 = L_8;
		V_0 = ((int64_t)((int64_t)L_9-(int64_t)(((int64_t)1))));
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, __this, L_9, 0);
		int32_t L_10 = ZipHelperStream_ReadLEInt_m10274(__this, /*hidden argument*/NULL);
		int32_t L_11 = ___signature;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_001a;
		}
	}
	{
		int64_t L_12 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		return L_12;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLEShort()
extern TypeInfo* EndOfStreamException_t1861_il2cpp_TypeInfo_var;
extern "C" int32_t ZipHelperStream_ReadLEShort_m10273 (ZipHelperStream_t1851 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EndOfStreamException_t1861_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4142);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Stream_t844 * L_0 = (__this->___stream__3);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		EndOfStreamException_t1861 * L_3 = (EndOfStreamException_t1861 *)il2cpp_codegen_object_new (EndOfStreamException_t1861_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_m10281(L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0016:
	{
		Stream_t844 * L_4 = (__this->___stream__3);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		EndOfStreamException_t1861 * L_7 = (EndOfStreamException_t1861 *)il2cpp_codegen_object_new (EndOfStreamException_t1861_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_m10281(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return ((int32_t)((int32_t)L_8|(int32_t)((int32_t)((int32_t)L_9<<(int32_t)8))));
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLEInt()
extern "C" int32_t ZipHelperStream_ReadLEInt_m10274 (ZipHelperStream_t1851 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = ZipHelperStream_ReadLEShort_m10273(__this, /*hidden argument*/NULL);
		int32_t L_1 = ZipHelperStream_ReadLEShort_m10273(__this, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))));
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"


// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::.ctor()
extern "C" void ZipNameTransform__ctor_m10275 (ZipNameTransform_t1852 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::.cctor()
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t260_il2cpp_TypeInfo_var;
extern TypeInfo* ZipNameTransform_t1852_il2cpp_TypeInfo_var;
extern "C" void ZipNameTransform__cctor_m10276 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		CharU5BU5D_t260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		ZipNameTransform_t1852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4157);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t260* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		CharU5BU5D_t260* L_0 = Path_GetInvalidPathChars_m10296(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t260* L_1 = V_0;
		NullCheck(L_1);
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))+(int32_t)2));
		int32_t L_2 = V_1;
		((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryCharsRelaxed_1 = ((CharU5BU5D_t260*)SZArrayNew(CharU5BU5D_t260_il2cpp_TypeInfo_var, L_2));
		CharU5BU5D_t260* L_3 = V_0;
		CharU5BU5D_t260* L_4 = ((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryCharsRelaxed_1;
		CharU5BU5D_t260* L_5 = V_0;
		NullCheck(L_5);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, 0, (Array_t *)(Array_t *)L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		CharU5BU5D_t260* L_6 = ((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryCharsRelaxed_1;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7-(int32_t)1)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, ((int32_t)((int32_t)L_7-(int32_t)1)))) = (uint16_t)((int32_t)42);
		CharU5BU5D_t260* L_8 = ((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryCharsRelaxed_1;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9-(int32_t)2)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, ((int32_t)((int32_t)L_9-(int32_t)2)))) = (uint16_t)((int32_t)63);
		CharU5BU5D_t260* L_10 = V_0;
		NullCheck(L_10);
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))+(int32_t)4));
		int32_t L_11 = V_1;
		((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_0 = ((CharU5BU5D_t260*)SZArrayNew(CharU5BU5D_t260_il2cpp_TypeInfo_var, L_11));
		CharU5BU5D_t260* L_12 = V_0;
		CharU5BU5D_t260* L_13 = ((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_0;
		CharU5BU5D_t260* L_14 = V_0;
		NullCheck(L_14);
		Array_Copy_m5108(NULL /*static, unused*/, (Array_t *)(Array_t *)L_12, 0, (Array_t *)(Array_t *)L_13, 0, (((int32_t)(((Array_t *)L_14)->max_length))), /*hidden argument*/NULL);
		CharU5BU5D_t260* L_15 = ((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16-(int32_t)1)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, ((int32_t)((int32_t)L_16-(int32_t)1)))) = (uint16_t)((int32_t)58);
		CharU5BU5D_t260* L_17 = ((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)((int32_t)L_18-(int32_t)2)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_17, ((int32_t)((int32_t)L_18-(int32_t)2)))) = (uint16_t)((int32_t)92);
		CharU5BU5D_t260* L_19 = ((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)((int32_t)L_20-(int32_t)3)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_19, ((int32_t)((int32_t)L_20-(int32_t)3)))) = (uint16_t)((int32_t)42);
		CharU5BU5D_t260* L_21 = ((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)L_22-(int32_t)4)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_21, ((int32_t)((int32_t)L_22-(int32_t)4)))) = (uint16_t)((int32_t)63);
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipNameTransform::IsValidName(System.String,System.Boolean)
extern TypeInfo* ZipNameTransform_t1852_il2cpp_TypeInfo_var;
extern "C" bool ZipNameTransform_IsValidName_m10277 (Object_t * __this /* static, unused */, String_t* ___name, bool ___relaxed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipNameTransform_t1852_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4157);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		String_t* L_0 = ___name;
		V_0 = ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		bool L_2 = ___relaxed;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_t1852_il2cpp_TypeInfo_var);
		CharU5BU5D_t260* L_4 = ((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryCharsRelaxed_1;
		NullCheck(L_3);
		int32_t L_5 = String_IndexOfAny_m3523(L_3, L_4, /*hidden argument*/NULL);
		V_0 = ((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_001f:
	{
		String_t* L_6 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_t1852_il2cpp_TypeInfo_var);
		CharU5BU5D_t260* L_7 = ((ZipNameTransform_t1852_StaticFields*)ZipNameTransform_t1852_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_0;
		NullCheck(L_6);
		int32_t L_8 = String_IndexOfAny_m3523(L_6, L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_9 = ___name;
		NullCheck(L_9);
		int32_t L_10 = String_IndexOf_m3182(L_9, ((int32_t)47), /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B6_0 = 0;
	}

IL_003e:
	{
		V_0 = G_B6_0;
	}

IL_003f:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=1024
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=1024
void __StaticArrayInitTypeSizeU3D1024_t1853_marshal(const __StaticArrayInitTypeSizeU3D1024_t1853& unmarshaled, __StaticArrayInitTypeSizeU3D1024_t1853_marshaled& marshaled)
{
}
void __StaticArrayInitTypeSizeU3D1024_t1853_marshal_back(const __StaticArrayInitTypeSizeU3D1024_t1853_marshaled& marshaled, __StaticArrayInitTypeSizeU3D1024_t1853& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=1024
void __StaticArrayInitTypeSizeU3D1024_t1853_marshal_cleanup(__StaticArrayInitTypeSizeU3D1024_t1853_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=12
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=12
void __StaticArrayInitTypeSizeU3D12_t1854_marshal(const __StaticArrayInitTypeSizeU3D12_t1854& unmarshaled, __StaticArrayInitTypeSizeU3D12_t1854_marshaled& marshaled)
{
}
void __StaticArrayInitTypeSizeU3D12_t1854_marshal_back(const __StaticArrayInitTypeSizeU3D12_t1854_marshaled& marshaled, __StaticArrayInitTypeSizeU3D12_t1854& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=12
void __StaticArrayInitTypeSizeU3D12_t1854_marshal_cleanup(__StaticArrayInitTypeSizeU3D12_t1854_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=76
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=76
void __StaticArrayInitTypeSizeU3D76_t1855_marshal(const __StaticArrayInitTypeSizeU3D76_t1855& unmarshaled, __StaticArrayInitTypeSizeU3D76_t1855_marshaled& marshaled)
{
}
void __StaticArrayInitTypeSizeU3D76_t1855_marshal_back(const __StaticArrayInitTypeSizeU3D76_t1855_marshaled& marshaled, __StaticArrayInitTypeSizeU3D76_t1855& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=76
void __StaticArrayInitTypeSizeU3D76_t1855_marshal_cleanup(__StaticArrayInitTypeSizeU3D76_t1855_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=16
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=16
void __StaticArrayInitTypeSizeU3D16_t1856_marshal(const __StaticArrayInitTypeSizeU3D16_t1856& unmarshaled, __StaticArrayInitTypeSizeU3D16_t1856_marshaled& marshaled)
{
}
void __StaticArrayInitTypeSizeU3D16_t1856_marshal_back(const __StaticArrayInitTypeSizeU3D16_t1856_marshaled& marshaled, __StaticArrayInitTypeSizeU3D16_t1856& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=16
void __StaticArrayInitTypeSizeU3D16_t1856_marshal_cleanup(__StaticArrayInitTypeSizeU3D16_t1856_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=116
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=116
void __StaticArrayInitTypeSizeU3D116_t1857_marshal(const __StaticArrayInitTypeSizeU3D116_t1857& unmarshaled, __StaticArrayInitTypeSizeU3D116_t1857_marshaled& marshaled)
{
}
void __StaticArrayInitTypeSizeU3D116_t1857_marshal_back(const __StaticArrayInitTypeSizeU3D116_t1857_marshaled& marshaled, __StaticArrayInitTypeSizeU3D116_t1857& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=116
void __StaticArrayInitTypeSizeU3D116_t1857_marshal_cleanup(__StaticArrayInitTypeSizeU3D116_t1857_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=120
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_4MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=120
void __StaticArrayInitTypeSizeU3D120_t1858_marshal(const __StaticArrayInitTypeSizeU3D120_t1858& unmarshaled, __StaticArrayInitTypeSizeU3D120_t1858_marshaled& marshaled)
{
}
void __StaticArrayInitTypeSizeU3D120_t1858_marshal_back(const __StaticArrayInitTypeSizeU3D120_t1858_marshaled& marshaled, __StaticArrayInitTypeSizeU3D120_t1858& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>{6C7CFC05-3661-46A0-98AB-FC6F81793937}/__StaticArrayInitTypeSize=120
void __StaticArrayInitTypeSizeU3D120_t1858_marshal_cleanup(__StaticArrayInitTypeSizeU3D120_t1858_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif
