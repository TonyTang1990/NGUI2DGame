#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Text.UTF32Encoding
#include "mscorlib_System_Text_UTF32Encoding.h"
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
// System.Text.UTF32Encoding
#include "mscorlib_System_Text_UTF32EncodingMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Text.EncoderFallback
#include "mscorlib_System_Text_EncoderFallback.h"
// System.Text.DecoderFallback
#include "mscorlib_System_Text_DecoderFallback.h"
// System.String
#include "mscorlib_System_String.h"
// System.Text.EncoderReplacementFallback
#include "mscorlib_System_Text_EncoderReplacementFallback.h"
// System.Text.DecoderReplacementFallback
#include "mscorlib_System_Text_DecoderReplacementFallback.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
#include "mscorlib_ArrayTypes.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Text.Decoder
#include "mscorlib_System_Text_Decoder.h"
// System.Text.UTF32Encoding/UTF32Decoder
#include "mscorlib_System_Text_UTF32Encoding_UTF32Decoder.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.Text.EncoderFallback
#include "mscorlib_System_Text_EncoderFallbackMethodDeclarations.h"
// System.Text.DecoderFallback
#include "mscorlib_System_Text_DecoderFallbackMethodDeclarations.h"
// System.Text.EncoderReplacementFallback
#include "mscorlib_System_Text_EncoderReplacementFallbackMethodDeclarations.h"
// System.Text.DecoderReplacementFallback
#include "mscorlib_System_Text_DecoderReplacementFallbackMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Text.UTF32Encoding/UTF32Decoder
#include "mscorlib_System_Text_UTF32Encoding_UTF32DecoderMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Text.UTF32Encoding::.ctor()
extern "C" void UTF32Encoding__ctor_m18728 (UTF32Encoding_t2943 * __this, const MethodInfo* method)
{
	{
		UTF32Encoding__ctor_m18730(__this, 0, 1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UTF32Encoding__ctor_m18729 (UTF32Encoding_t2943 * __this, bool ___bigEndian, bool ___byteOrderMark, const MethodInfo* method)
{
	{
		bool L_0 = ___bigEndian;
		bool L_1 = ___byteOrderMark;
		UTF32Encoding__ctor_m18730(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* Encoding_t321_il2cpp_TypeInfo_var;
extern TypeInfo* EncoderFallback_t2929_il2cpp_TypeInfo_var;
extern TypeInfo* DecoderFallback_t2921_il2cpp_TypeInfo_var;
extern TypeInfo* EncoderReplacementFallback_t2933_il2cpp_TypeInfo_var;
extern TypeInfo* DecoderReplacementFallback_t2926_il2cpp_TypeInfo_var;
extern "C" void UTF32Encoding__ctor_m18730 (UTF32Encoding_t2943 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidCharacters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		EncoderFallback_t2929_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5908);
		DecoderFallback_t2921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5903);
		EncoderReplacementFallback_t2933_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5912);
		DecoderReplacementFallback_t2926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5902);
		s_Il2CppMethodIntialized = true;
	}
	UTF32Encoding_t2943 * G_B2_0 = {0};
	UTF32Encoding_t2943 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	UTF32Encoding_t2943 * G_B3_1 = {0};
	{
		bool L_0 = ___bigEndian;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = ((int32_t)12001);
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)12000);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		Encoding__ctor_m18590(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		bool L_1 = ___bigEndian;
		__this->___bigEndian_28 = L_1;
		bool L_2 = ___byteOrderMark;
		__this->___byteOrderMark_29 = L_2;
		bool L_3 = ___throwOnInvalidCharacters;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EncoderFallback_t2929_il2cpp_TypeInfo_var);
		EncoderFallback_t2929 * L_4 = EncoderFallback_get_ExceptionFallback_m18567(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DecoderFallback_t2921_il2cpp_TypeInfo_var);
		DecoderFallback_t2921 * L_5 = DecoderFallback_get_ExceptionFallback_m18537(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		Encoding_SetFallbackInternal_m18597(__this, L_4, L_5, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_0038:
	{
		EncoderReplacementFallback_t2933 * L_6 = (EncoderReplacementFallback_t2933 *)il2cpp_codegen_object_new (EncoderReplacementFallback_t2933_il2cpp_TypeInfo_var);
		EncoderReplacementFallback__ctor_m18576(L_6, (String_t*) &_stringLiteral5567, /*hidden argument*/NULL);
		DecoderReplacementFallback_t2926 * L_7 = (DecoderReplacementFallback_t2926 *)il2cpp_codegen_object_new (DecoderReplacementFallback_t2926_il2cpp_TypeInfo_var);
		DecoderReplacementFallback__ctor_m18546(L_7, (String_t*) &_stringLiteral5567, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		Encoding_SetFallbackInternal_m18597(__this, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0052:
	{
		bool L_8 = ___bigEndian;
		if (!L_8)
		{
			goto IL_0083;
		}
	}
	{
		((Encoding_t321 *)__this)->___body_name_8 = (String_t*) &_stringLiteral5643;
		((Encoding_t321 *)__this)->___encoding_name_9 = (String_t*) &_stringLiteral5644;
		((Encoding_t321 *)__this)->___header_name_10 = (String_t*) &_stringLiteral5643;
		((Encoding_t321 *)__this)->___web_name_15 = (String_t*) &_stringLiteral5643;
		goto IL_00af;
	}

IL_0083:
	{
		((Encoding_t321 *)__this)->___body_name_8 = (String_t*) &_stringLiteral5645;
		((Encoding_t321 *)__this)->___encoding_name_9 = (String_t*) &_stringLiteral5646;
		((Encoding_t321 *)__this)->___header_name_10 = (String_t*) &_stringLiteral5645;
		((Encoding_t321 *)__this)->___web_name_15 = (String_t*) &_stringLiteral5645;
	}

IL_00af:
	{
		((Encoding_t321 *)__this)->___windows_code_page_1 = ((int32_t)12000);
		return;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t321_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t323_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetByteCount_m18731 (UTF32Encoding_t2943 * __this, CharU5BU5D_t260* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Encoding_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		Char_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t260* L_0 = ___chars;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral4503, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index;
		CharU5BU5D_t260* L_4 = ___chars;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_5 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_6 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_6, (String_t*) &_stringLiteral2137, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count;
		CharU5BU5D_t260* L_9 = ___chars;
		NullCheck(L_9);
		int32_t L_10 = ___index;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_11 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_12 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_12, (String_t*) &_stringLiteral1110, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004e:
	{
		V_0 = 0;
		int32_t L_13 = ___index;
		V_1 = L_13;
		goto IL_0086;
	}

IL_0054:
	{
		CharU5BU5D_t260* L_14 = ___chars;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t323_il2cpp_TypeInfo_var);
		bool L_17 = Char_IsSurrogate_m13323(NULL /*static, unused*/, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_18 = V_1;
		CharU5BU5D_t260* L_19 = ___chars;
		NullCheck(L_19);
		if ((((int32_t)((int32_t)((int32_t)L_18+(int32_t)1))) >= ((int32_t)(((int32_t)(((Array_t *)L_19)->max_length))))))
		{
			goto IL_0078;
		}
	}
	{
		CharU5BU5D_t260* L_20 = ___chars;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)((int32_t)L_21+(int32_t)1)));
		int32_t L_22 = ((int32_t)((int32_t)L_21+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Char_t323_il2cpp_TypeInfo_var);
		bool L_23 = Char_IsSurrogate_m13323(NULL /*static, unused*/, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_20, L_22)), /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24+(int32_t)4));
		goto IL_007c;
	}

IL_0078:
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)4));
	}

IL_007c:
	{
		goto IL_0082;
	}

IL_007e:
	{
		int32_t L_26 = V_0;
		V_0 = ((int32_t)((int32_t)L_26+(int32_t)4));
	}

IL_0082:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0086:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = ___index;
		int32_t L_30 = ___count;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)L_29+(int32_t)L_30)))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_31 = V_0;
		return L_31;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t321_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t323_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetBytes_m18732 (UTF32Encoding_t2943 * __this, CharU5BU5D_t260* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t159* ___bytes, int32_t ___byteIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Encoding_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		Char_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		CharU5BU5D_t260* L_0 = ___chars;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral4503, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ByteU5BU5D_t159* L_2 = ___bytes;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t692 * L_3 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_3, (String_t*) &_stringLiteral5557, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___charIndex;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___charIndex;
		CharU5BU5D_t260* L_6 = ___chars;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_7 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_8 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_8, (String_t*) &_stringLiteral5558, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003c:
	{
		int32_t L_9 = ___charCount;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___charCount;
		CharU5BU5D_t260* L_11 = ___chars;
		NullCheck(L_11);
		int32_t L_12 = ___charIndex;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_13 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_14 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_14, (String_t*) &_stringLiteral5559, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005d:
	{
		int32_t L_15 = ___byteIndex;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = ___byteIndex;
		ByteU5BU5D_t159* L_17 = ___bytes;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_007f;
		}
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_18 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_19 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_19, (String_t*) &_stringLiteral5560, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_007f:
	{
		ByteU5BU5D_t159* L_20 = ___bytes;
		NullCheck(L_20);
		int32_t L_21 = ___byteIndex;
		int32_t L_22 = ___charCount;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_20)->max_length)))-(int32_t)L_21))) >= ((int32_t)((int32_t)((int32_t)L_22*(int32_t)4)))))
		{
			goto IL_009b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_23 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5561, /*hidden argument*/NULL);
		ArgumentException_t356 * L_24 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_009b:
	{
		int32_t L_25 = ___byteIndex;
		V_0 = L_25;
		goto IL_01f0;
	}

IL_00a3:
	{
		CharU5BU5D_t260* L_26 = ___chars;
		int32_t L_27 = ___charIndex;
		int32_t L_28 = L_27;
		___charIndex = ((int32_t)((int32_t)L_28+(int32_t)1));
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_28);
		int32_t L_29 = L_28;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_26, L_29));
		uint16_t L_30 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t323_il2cpp_TypeInfo_var);
		bool L_31 = Char_IsSurrogate_m13323(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_32 = ___charCount;
		int32_t L_33 = L_32;
		___charCount = ((int32_t)((int32_t)L_33-(int32_t)1));
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_0140;
		}
	}
	{
		uint16_t L_34 = V_1;
		CharU5BU5D_t260* L_35 = ___chars;
		int32_t L_36 = ___charIndex;
		int32_t L_37 = L_36;
		___charIndex = ((int32_t)((int32_t)L_37+(int32_t)1));
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_37);
		int32_t L_38 = L_37;
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)1024)*(int32_t)((int32_t)((int32_t)L_34-(int32_t)((int32_t)55296)))))+(int32_t)((int32_t)65536)))+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_35, L_38))))-(int32_t)((int32_t)56320)));
		bool L_39 = (__this->___bigEndian_28);
		if (!L_39)
		{
			goto IL_011a;
		}
	}
	{
		V_3 = 0;
		goto IL_0110;
	}

IL_00f8:
	{
		ByteU5BU5D_t159* L_40 = ___bytes;
		int32_t L_41 = V_0;
		int32_t L_42 = V_3;
		int32_t L_43 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)((int32_t)((int32_t)((int32_t)L_41+(int32_t)3))-(int32_t)L_42)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_40, ((int32_t)((int32_t)((int32_t)((int32_t)L_41+(int32_t)3))-(int32_t)L_42)))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_43%(int32_t)((int32_t)256)))));
		int32_t L_44 = V_2;
		V_2 = ((int32_t)((int32_t)L_44>>(int32_t)8));
		int32_t L_45 = V_3;
		V_3 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_0110:
	{
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_47 = V_0;
		V_0 = ((int32_t)((int32_t)L_47+(int32_t)4));
		goto IL_013e;
	}

IL_011a:
	{
		V_4 = 0;
		goto IL_0139;
	}

IL_011f:
	{
		ByteU5BU5D_t159* L_48 = ___bytes;
		int32_t L_49 = V_0;
		int32_t L_50 = L_49;
		V_0 = ((int32_t)((int32_t)L_50+(int32_t)1));
		int32_t L_51 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_50);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_48, L_50)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_51%(int32_t)((int32_t)256)))));
		int32_t L_52 = V_2;
		V_2 = ((int32_t)((int32_t)L_52>>(int32_t)8));
		int32_t L_53 = V_4;
		V_4 = ((int32_t)((int32_t)L_53+(int32_t)1));
	}

IL_0139:
	{
		int32_t L_54 = V_4;
		if ((((int32_t)L_54) < ((int32_t)4)))
		{
			goto IL_011f;
		}
	}

IL_013e:
	{
		goto IL_0194;
	}

IL_0140:
	{
		bool L_55 = (__this->___bigEndian_28);
		if (!L_55)
		{
			goto IL_016f;
		}
	}
	{
		ByteU5BU5D_t159* L_56 = ___bytes;
		int32_t L_57 = V_0;
		int32_t L_58 = L_57;
		V_0 = ((int32_t)((int32_t)L_58+(int32_t)1));
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_58);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_56, L_58)) = (uint8_t)0;
		ByteU5BU5D_t159* L_59 = ___bytes;
		int32_t L_60 = V_0;
		int32_t L_61 = L_60;
		V_0 = ((int32_t)((int32_t)L_61+(int32_t)1));
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_61);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_59, L_61)) = (uint8_t)0;
		ByteU5BU5D_t159* L_62 = ___bytes;
		int32_t L_63 = V_0;
		int32_t L_64 = L_63;
		V_0 = ((int32_t)((int32_t)L_64+(int32_t)1));
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_64);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_62, L_64)) = (uint8_t)0;
		ByteU5BU5D_t159* L_65 = ___bytes;
		int32_t L_66 = V_0;
		int32_t L_67 = L_66;
		V_0 = ((int32_t)((int32_t)L_67+(int32_t)1));
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_67);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_65, L_67)) = (uint8_t)((int32_t)63);
		goto IL_0194;
	}

IL_016f:
	{
		ByteU5BU5D_t159* L_68 = ___bytes;
		int32_t L_69 = V_0;
		int32_t L_70 = L_69;
		V_0 = ((int32_t)((int32_t)L_70+(int32_t)1));
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_70);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_68, L_70)) = (uint8_t)((int32_t)63);
		ByteU5BU5D_t159* L_71 = ___bytes;
		int32_t L_72 = V_0;
		int32_t L_73 = L_72;
		V_0 = ((int32_t)((int32_t)L_73+(int32_t)1));
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_73);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_71, L_73)) = (uint8_t)0;
		ByteU5BU5D_t159* L_74 = ___bytes;
		int32_t L_75 = V_0;
		int32_t L_76 = L_75;
		V_0 = ((int32_t)((int32_t)L_76+(int32_t)1));
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, L_76);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_74, L_76)) = (uint8_t)0;
		ByteU5BU5D_t159* L_77 = ___bytes;
		int32_t L_78 = V_0;
		int32_t L_79 = L_78;
		V_0 = ((int32_t)((int32_t)L_79+(int32_t)1));
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, L_79);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_77, L_79)) = (uint8_t)0;
	}

IL_0194:
	{
		goto IL_01f0;
	}

IL_0196:
	{
		bool L_80 = (__this->___bigEndian_28);
		if (!L_80)
		{
			goto IL_01c8;
		}
	}
	{
		ByteU5BU5D_t159* L_81 = ___bytes;
		int32_t L_82 = V_0;
		int32_t L_83 = L_82;
		V_0 = ((int32_t)((int32_t)L_83+(int32_t)1));
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, L_83);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_81, L_83)) = (uint8_t)0;
		ByteU5BU5D_t159* L_84 = ___bytes;
		int32_t L_85 = V_0;
		int32_t L_86 = L_85;
		V_0 = ((int32_t)((int32_t)L_86+(int32_t)1));
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, L_86);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_84, L_86)) = (uint8_t)0;
		ByteU5BU5D_t159* L_87 = ___bytes;
		int32_t L_88 = V_0;
		int32_t L_89 = L_88;
		V_0 = ((int32_t)((int32_t)L_89+(int32_t)1));
		uint16_t L_90 = V_1;
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, L_89);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_87, L_89)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_90>>(int32_t)8))));
		ByteU5BU5D_t159* L_91 = ___bytes;
		int32_t L_92 = V_0;
		int32_t L_93 = L_92;
		V_0 = ((int32_t)((int32_t)L_93+(int32_t)1));
		uint16_t L_94 = V_1;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, L_93);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_91, L_93)) = (uint8_t)(((uint8_t)L_94));
		goto IL_01f0;
	}

IL_01c8:
	{
		ByteU5BU5D_t159* L_95 = ___bytes;
		int32_t L_96 = V_0;
		int32_t L_97 = L_96;
		V_0 = ((int32_t)((int32_t)L_97+(int32_t)1));
		uint16_t L_98 = V_1;
		NullCheck(L_95);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_95, L_97);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_95, L_97)) = (uint8_t)(((uint8_t)L_98));
		ByteU5BU5D_t159* L_99 = ___bytes;
		int32_t L_100 = V_0;
		int32_t L_101 = L_100;
		V_0 = ((int32_t)((int32_t)L_101+(int32_t)1));
		uint16_t L_102 = V_1;
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, L_101);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_99, L_101)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_102>>(int32_t)8))));
		ByteU5BU5D_t159* L_103 = ___bytes;
		int32_t L_104 = V_0;
		int32_t L_105 = L_104;
		V_0 = ((int32_t)((int32_t)L_105+(int32_t)1));
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_105);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_103, L_105)) = (uint8_t)0;
		ByteU5BU5D_t159* L_106 = ___bytes;
		int32_t L_107 = V_0;
		int32_t L_108 = L_107;
		V_0 = ((int32_t)((int32_t)L_108+(int32_t)1));
		NullCheck(L_106);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_106, L_108);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_106, L_108)) = (uint8_t)0;
	}

IL_01f0:
	{
		int32_t L_109 = ___charCount;
		int32_t L_110 = L_109;
		___charCount = ((int32_t)((int32_t)L_110-(int32_t)1));
		if ((((int32_t)L_110) > ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_111 = V_0;
		int32_t L_112 = ___byteIndex;
		return ((int32_t)((int32_t)L_111-(int32_t)L_112));
	}
}
// System.Int32 System.Text.UTF32Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t321_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetCharCount_m18733 (UTF32Encoding_t2943 * __this, ByteU5BU5D_t159* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Encoding_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t159* L_0 = ___bytes;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5557, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index;
		ByteU5BU5D_t159* L_4 = ___bytes;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_5 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_6 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_6, (String_t*) &_stringLiteral2137, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count;
		ByteU5BU5D_t159* L_9 = ___bytes;
		NullCheck(L_9);
		int32_t L_10 = ___index;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_11 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_12 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_12, (String_t*) &_stringLiteral1110, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004e:
	{
		int32_t L_13 = ___count;
		return ((int32_t)((int32_t)L_13/(int32_t)4));
	}
}
// System.Int32 System.Text.UTF32Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t321_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetChars_m18734 (UTF32Encoding_t2943 * __this, ByteU5BU5D_t159* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t260* ___chars, int32_t ___charIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		Encoding_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t159* L_0 = ___bytes;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5557, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		CharU5BU5D_t260* L_2 = ___chars;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t692 * L_3 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_3, (String_t*) &_stringLiteral4503, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___byteIndex;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___byteIndex;
		ByteU5BU5D_t159* L_6 = ___bytes;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_7 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_8 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_8, (String_t*) &_stringLiteral5560, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003c:
	{
		int32_t L_9 = ___byteCount;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___byteCount;
		ByteU5BU5D_t159* L_11 = ___bytes;
		NullCheck(L_11);
		int32_t L_12 = ___byteIndex;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_13 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_14 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_14, (String_t*) &_stringLiteral5564, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005d:
	{
		int32_t L_15 = ___charIndex;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = ___charIndex;
		CharU5BU5D_t260* L_17 = ___chars;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_007f;
		}
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_18 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_19 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_19, (String_t*) &_stringLiteral5558, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_007f:
	{
		CharU5BU5D_t260* L_20 = ___chars;
		NullCheck(L_20);
		int32_t L_21 = ___charIndex;
		int32_t L_22 = ___byteCount;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_20)->max_length)))-(int32_t)L_21))) >= ((int32_t)((int32_t)((int32_t)L_22/(int32_t)4)))))
		{
			goto IL_009b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_23 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5561, /*hidden argument*/NULL);
		ArgumentException_t356 * L_24 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_009b:
	{
		int32_t L_25 = ___charIndex;
		V_0 = L_25;
		bool L_26 = (__this->___bigEndian_28);
		if (!L_26)
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_00dc;
	}

IL_00a8:
	{
		CharU5BU5D_t260* L_27 = ___chars;
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
		ByteU5BU5D_t159* L_30 = ___bytes;
		int32_t L_31 = ___byteIndex;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		ByteU5BU5D_t159* L_33 = ___bytes;
		int32_t L_34 = ___byteIndex;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)((int32_t)L_34+(int32_t)1)));
		int32_t L_35 = ((int32_t)((int32_t)L_34+(int32_t)1));
		ByteU5BU5D_t159* L_36 = ___bytes;
		int32_t L_37 = ___byteIndex;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)((int32_t)L_37+(int32_t)2)));
		int32_t L_38 = ((int32_t)((int32_t)L_37+(int32_t)2));
		ByteU5BU5D_t159* L_39 = ___bytes;
		int32_t L_40 = ___byteIndex;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)L_40+(int32_t)3)));
		int32_t L_41 = ((int32_t)((int32_t)L_40+(int32_t)3));
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_29);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_32))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_33, L_35))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_38))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_39, L_41))))));
		int32_t L_42 = ___byteIndex;
		___byteIndex = ((int32_t)((int32_t)L_42+(int32_t)4));
		int32_t L_43 = ___byteCount;
		___byteCount = ((int32_t)((int32_t)L_43-(int32_t)4));
	}

IL_00dc:
	{
		int32_t L_44 = ___byteCount;
		if ((((int32_t)L_44) >= ((int32_t)4)))
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_011c;
	}

IL_00e2:
	{
		goto IL_0118;
	}

IL_00e4:
	{
		CharU5BU5D_t260* L_45 = ___chars;
		int32_t L_46 = V_0;
		int32_t L_47 = L_46;
		V_0 = ((int32_t)((int32_t)L_47+(int32_t)1));
		ByteU5BU5D_t159* L_48 = ___bytes;
		int32_t L_49 = ___byteIndex;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		int32_t L_50 = L_49;
		ByteU5BU5D_t159* L_51 = ___bytes;
		int32_t L_52 = ___byteIndex;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, ((int32_t)((int32_t)L_52+(int32_t)1)));
		int32_t L_53 = ((int32_t)((int32_t)L_52+(int32_t)1));
		ByteU5BU5D_t159* L_54 = ___bytes;
		int32_t L_55 = ___byteIndex;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)L_55+(int32_t)2)));
		int32_t L_56 = ((int32_t)((int32_t)L_55+(int32_t)2));
		ByteU5BU5D_t159* L_57 = ___bytes;
		int32_t L_58 = ___byteIndex;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)L_58+(int32_t)3)));
		int32_t L_59 = ((int32_t)((int32_t)L_58+(int32_t)3));
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_47);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_48, L_50))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_51, L_53))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_56))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_57, L_59))<<(int32_t)((int32_t)24)))))));
		int32_t L_60 = ___byteIndex;
		___byteIndex = ((int32_t)((int32_t)L_60+(int32_t)4));
		int32_t L_61 = ___byteCount;
		___byteCount = ((int32_t)((int32_t)L_61-(int32_t)4));
	}

IL_0118:
	{
		int32_t L_62 = ___byteCount;
		if ((((int32_t)L_62) >= ((int32_t)4)))
		{
			goto IL_00e4;
		}
	}

IL_011c:
	{
		int32_t L_63 = V_0;
		int32_t L_64 = ___charIndex;
		return ((int32_t)((int32_t)L_63-(int32_t)L_64));
	}
}
// System.Int32 System.Text.UTF32Encoding::GetMaxByteCount(System.Int32)
extern TypeInfo* Encoding_t321_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetMaxByteCount_m18735 (UTF32Encoding_t2943 * __this, int32_t ___charCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___charCount;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_1 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5565, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_2 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_2, (String_t*) &_stringLiteral5559, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = ___charCount;
		return ((int32_t)((int32_t)L_3*(int32_t)4));
	}
}
// System.Int32 System.Text.UTF32Encoding::GetMaxCharCount(System.Int32)
extern TypeInfo* Encoding_t321_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetMaxCharCount_m18736 (UTF32Encoding_t2943 * __this, int32_t ___byteCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(106);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___byteCount;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t321_il2cpp_TypeInfo_var);
		String_t* L_1 = Encoding___m18592(NULL /*static, unused*/, (String_t*) &_stringLiteral5565, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t694 * L_2 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_2, (String_t*) &_stringLiteral5564, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = ___byteCount;
		return ((int32_t)((int32_t)L_3/(int32_t)4));
	}
}
// System.Text.Decoder System.Text.UTF32Encoding::GetDecoder()
extern TypeInfo* UTF32Decoder_t2942_il2cpp_TypeInfo_var;
extern "C" Decoder_t1645 * UTF32Encoding_GetDecoder_m18737 (UTF32Encoding_t2943 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UTF32Decoder_t2942_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5923);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___bigEndian_28);
		UTF32Decoder_t2942 * L_1 = (UTF32Decoder_t2942 *)il2cpp_codegen_object_new (UTF32Decoder_t2942_il2cpp_TypeInfo_var);
		UTF32Decoder__ctor_m18726(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] System.Text.UTF32Encoding::GetPreamble()
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t159* UTF32Encoding_GetPreamble_m18738 (UTF32Encoding_t2943 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t159* V_0 = {0};
	{
		bool L_0 = (__this->___byteOrderMark_29);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		V_0 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, 4));
		bool L_1 = (__this->___bigEndian_28);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_t159* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 2)) = (uint8_t)((int32_t)254);
		ByteU5BU5D_t159* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 3)) = (uint8_t)((int32_t)255);
		goto IL_0039;
	}

IL_0029:
	{
		ByteU5BU5D_t159* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 0)) = (uint8_t)((int32_t)255);
		ByteU5BU5D_t159* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 1)) = (uint8_t)((int32_t)254);
	}

IL_0039:
	{
		ByteU5BU5D_t159* L_6 = V_0;
		return L_6;
	}

IL_003b:
	{
		return ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, 0));
	}
}
// System.Boolean System.Text.UTF32Encoding::Equals(System.Object)
extern TypeInfo* UTF32Encoding_t2943_il2cpp_TypeInfo_var;
extern "C" bool UTF32Encoding_Equals_m18739 (UTF32Encoding_t2943 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UTF32Encoding_t2943_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5918);
		s_Il2CppMethodIntialized = true;
	}
	UTF32Encoding_t2943 * V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((UTF32Encoding_t2943 *)IsInst(L_0, UTF32Encoding_t2943_il2cpp_TypeInfo_var));
		UTF32Encoding_t2943 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_2 = (((Encoding_t321 *)__this)->___codePage_0);
		UTF32Encoding_t2943 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (((Encoding_t321 *)L_3)->___codePage_0);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_003d;
		}
	}
	{
		bool L_5 = (__this->___bigEndian_28);
		UTF32Encoding_t2943 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (L_6->___bigEndian_28);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_003d;
		}
	}
	{
		bool L_8 = (__this->___byteOrderMark_29);
		UTF32Encoding_t2943 * L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = (L_9->___byteOrderMark_29);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_003d;
		}
	}
	{
		Object_t * L_11 = ___value;
		bool L_12 = Encoding_Equals_m18598(__this, L_11, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_12));
		goto IL_003e;
	}

IL_003d:
	{
		G_B6_0 = 0;
	}

IL_003e:
	{
		return G_B6_0;
	}

IL_003f:
	{
		return 0;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetHashCode()
extern "C" int32_t UTF32Encoding_GetHashCode_m18740 (UTF32Encoding_t2943 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Encoding_GetHashCode_m18609(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = (__this->___bigEndian_28);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2^(int32_t)((int32_t)31)));
	}

IL_0014:
	{
		bool L_3 = (__this->___byteOrderMark_29);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)((int32_t)63)));
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char*,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetByteCount_m18741 (UTF32Encoding_t2943 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t* L_0 = ___chars;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral4503, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___count;
		return ((int32_t)((int32_t)L_2*(int32_t)4));
	}
}
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.String)
extern "C" int32_t UTF32Encoding_GetByteCount_m18742 (UTF32Encoding_t2943 * __this, String_t* ___s, const MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		int32_t L_1 = Encoding_GetByteCount_m18599(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m18743 (UTF32Encoding_t2943 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method)
{
	{
		uint16_t* L_0 = ___chars;
		int32_t L_1 = ___charCount;
		uint8_t* L_2 = ___bytes;
		int32_t L_3 = ___byteCount;
		int32_t L_4 = Encoding_GetBytes_m18622(__this, (uint16_t*)(uint16_t*)L_0, L_1, (uint8_t*)(uint8_t*)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m18744 (UTF32Encoding_t2943 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t159* ___bytes, int32_t ___byteIndex, const MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		int32_t L_1 = ___charIndex;
		int32_t L_2 = ___charCount;
		ByteU5BU5D_t159* L_3 = ___bytes;
		int32_t L_4 = ___byteIndex;
		int32_t L_5 = Encoding_GetBytes_m18601(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Text.UTF32Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UTF32Encoding_GetString_m18745 (UTF32Encoding_t2943 * __this, ByteU5BU5D_t159* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		ByteU5BU5D_t159* L_0 = ___bytes;
		int32_t L_1 = ___index;
		int32_t L_2 = ___count;
		String_t* L_3 = Encoding_GetString_m18611(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Threading.AutoResetEvent
#include "mscorlib_System_Threading_AutoResetEvent.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.AutoResetEvent
#include "mscorlib_System_Threading_AutoResetEventMethodDeclarations.h"

// System.Threading.EventResetMode
#include "mscorlib_System_Threading_EventResetMode.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"


// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
extern "C" void AutoResetEvent__ctor_m12813 (AutoResetEvent_t2023 * __this, bool ___initialState, const MethodInfo* method)
{
	{
		bool L_0 = ___initialState;
		EventWaitHandle__ctor_m18752(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.CompressedStack
#include "mscorlib_System_Threading_CompressedStack.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.CompressedStack
#include "mscorlib_System_Threading_CompressedStackMethodDeclarations.h"

// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Security.SecurityFrame
#include "mscorlib_System_Security_SecurityFrameMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"


// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void CompressedStack__ctor_m18746 (CompressedStack_t2804 * __this, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___length;
		ArrayList_t913 * L_2 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m12793(L_2, L_1, /*hidden argument*/NULL);
		__this->____list_0 = L_2;
	}

IL_0016:
	{
		return;
	}
}
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern "C" void CompressedStack__ctor_m18747 (CompressedStack_t2804 * __this, CompressedStack_t2804 * ___cs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		CompressedStack_t2804 * L_0 = ___cs;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		CompressedStack_t2804 * L_1 = ___cs;
		NullCheck(L_1);
		ArrayList_t913 * L_2 = (L_1->____list_0);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		CompressedStack_t2804 * L_3 = ___cs;
		NullCheck(L_3);
		ArrayList_t913 * L_4 = (L_3->____list_0);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(45 /* System.Object System.Collections.ArrayList::Clone() */, L_4);
		__this->____list_0 = ((ArrayList_t913 *)Castclass(L_5, ArrayList_t913_il2cpp_TypeInfo_var));
	}

IL_0027:
	{
		return;
	}
}
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
extern TypeInfo* CompressedStack_t2804_il2cpp_TypeInfo_var;
extern "C" CompressedStack_t2804 * CompressedStack_CreateCopy_m18748 (CompressedStack_t2804 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompressedStack_t2804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5924);
		s_Il2CppMethodIntialized = true;
	}
	{
		CompressedStack_t2804 * L_0 = (CompressedStack_t2804 *)il2cpp_codegen_object_new (CompressedStack_t2804_il2cpp_TypeInfo_var);
		CompressedStack__ctor_m18747(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
extern TypeInfo* CompressedStack_t2804_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern "C" CompressedStack_t2804 * CompressedStack_Capture_m18749 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompressedStack_t2804_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5924);
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	CompressedStack_t2804 * V_0 = {0};
	CompressedStack_t2804 * V_1 = {0};
	int32_t V_2 = 0;
	{
		CompressedStack_t2804 * L_0 = (CompressedStack_t2804 *)il2cpp_codegen_object_new (CompressedStack_t2804_il2cpp_TypeInfo_var);
		CompressedStack__ctor_m18746(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		CompressedStack_t2804 * L_1 = V_0;
		ArrayList_t913 * L_2 = SecurityFrame_GetStack_m17663(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->____list_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Thread_t1122 * L_3 = Thread_get_CurrentThread_m5000(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		CompressedStack_t2804 * L_4 = Thread_GetCompressedStack_m18811(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		CompressedStack_t2804 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		V_2 = 0;
		goto IL_0041;
	}

IL_0025:
	{
		CompressedStack_t2804 * L_6 = V_0;
		NullCheck(L_6);
		ArrayList_t913 * L_7 = (L_6->____list_0);
		CompressedStack_t2804 * L_8 = V_1;
		NullCheck(L_8);
		ArrayList_t913 * L_9 = (L_8->____list_0);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_9, L_10);
		NullCheck(L_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_7, L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_13 = V_2;
		CompressedStack_t2804 * L_14 = V_1;
		NullCheck(L_14);
		ArrayList_t913 * L_15 = (L_14->____list_0);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_15);
		if ((((int32_t)L_13) < ((int32_t)L_16)))
		{
			goto IL_0025;
		}
	}

IL_004f:
	{
		CompressedStack_t2804 * L_17 = V_0;
		return L_17;
	}
}
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void CompressedStack_GetObjectData_m18750 (CompressedStack_t2804 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t669 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral2882, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Threading.CompressedStack::IsEmpty()
extern "C" bool CompressedStack_IsEmpty_m18751 (CompressedStack_t2804 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		ArrayList_t913 * L_0 = (__this->____list_0);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		ArrayList_t913 * L_1 = (__this->____list_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Threading.EventResetMode
#include "mscorlib_System_Threading_EventResetModeMethodDeclarations.h"



// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandle.h"
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Threading.NativeEventCalls
#include "mscorlib_System_Threading_NativeEventCallsMethodDeclarations.h"


// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
extern TypeInfo* WaitHandle_t1351_il2cpp_TypeInfo_var;
extern "C" void EventWaitHandle__ctor_m18752 (EventWaitHandle_t2944 * __this, bool ___initialState, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandle_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2832);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t1351_il2cpp_TypeInfo_var);
		WaitHandle__ctor_m18836(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___mode;
		bool L_1 = EventWaitHandle_IsManualReset_m18753(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		bool L_3 = ___initialState;
		IntPtr_t L_4 = NativeEventCalls_CreateEvent_internal_m18773(NULL /*static, unused*/, L_2, L_3, (String_t*)NULL, (&V_0), /*hidden argument*/NULL);
		VirtActionInvoker1< IntPtr_t >::Invoke(8 /* System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr) */, __this, L_4);
		return;
	}
}
// System.Boolean System.Threading.EventWaitHandle::IsManualReset(System.Threading.EventResetMode)
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" bool EventWaitHandle_IsManualReset_m18753 (EventWaitHandle_t2944 * __this, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___mode;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___mode;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0013;
		}
	}

IL_0008:
	{
		ArgumentException_t356 * L_2 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3152(L_2, (String_t*) &_stringLiteral2976, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		int32_t L_3 = ___mode;
		return ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean System.Threading.EventWaitHandle::Reset()
extern "C" bool EventWaitHandle_Reset_m6407 (EventWaitHandle_t2944 * __this, const MethodInfo* method)
{
	{
		WaitHandle_CheckDisposed_m18848(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = (IntPtr_t)VirtFuncInvoker0< IntPtr_t >::Invoke(7 /* System.IntPtr System.Threading.WaitHandle::get_Handle() */, __this);
		bool L_1 = NativeEventCalls_ResetEvent_internal_m18775(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" bool EventWaitHandle_Set_m6406 (EventWaitHandle_t2944 * __this, const MethodInfo* method)
{
	{
		WaitHandle_CheckDisposed_m18848(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = (IntPtr_t)VirtFuncInvoker0< IntPtr_t >::Invoke(7 /* System.IntPtr System.Threading.WaitHandle::get_Handle() */, __this);
		bool L_1 = NativeEventCalls_SetEvent_internal_m18774(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.ExecutionContext
#include "mscorlib_System_Threading_ExecutionContext.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ExecutionContext
#include "mscorlib_System_Threading_ExecutionContextMethodDeclarations.h"

// System.Security.SecurityContext
#include "mscorlib_System_Security_SecurityContext.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.Security.SecurityContext
#include "mscorlib_System_Security_SecurityContextMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.Security.SecurityManager
#include "mscorlib_System_Security_SecurityManagerMethodDeclarations.h"


// System.Void System.Threading.ExecutionContext::.ctor()
extern "C" void ExecutionContext__ctor_m18754 (ExecutionContext_t2724 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
extern TypeInfo* SecurityContext_t2805_il2cpp_TypeInfo_var;
extern "C" void ExecutionContext__ctor_m18755 (ExecutionContext_t2724 * __this, ExecutionContext_t2724 * ___ec, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityContext_t2805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5813);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ExecutionContext_t2724 * L_0 = ___ec;
		NullCheck(L_0);
		SecurityContext_t2805 * L_1 = (L_0->____sc_0);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		ExecutionContext_t2724 * L_2 = ___ec;
		NullCheck(L_2);
		SecurityContext_t2805 * L_3 = (L_2->____sc_0);
		SecurityContext_t2805 * L_4 = (SecurityContext_t2805 *)il2cpp_codegen_object_new (SecurityContext_t2805_il2cpp_TypeInfo_var);
		SecurityContext__ctor_m17629(L_4, L_3, /*hidden argument*/NULL);
		__this->____sc_0 = L_4;
	}

IL_001f:
	{
		ExecutionContext_t2724 * L_5 = ___ec;
		NullCheck(L_5);
		bool L_6 = (L_5->____suppressFlow_1);
		__this->____suppressFlow_1 = L_6;
		__this->____capture_2 = 1;
		return;
	}
}
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotImplementedException_t333_il2cpp_TypeInfo_var;
extern "C" void ExecutionContext__ctor_m18756 (ExecutionContext_t2724 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		NotImplementedException_t333 * L_0 = (NotImplementedException_t333 *)il2cpp_codegen_object_new (NotImplementedException_t333_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m4967(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* ExecutionContext_t2724_il2cpp_TypeInfo_var;
extern TypeInfo* SecurityManager_t2814_il2cpp_TypeInfo_var;
extern "C" ExecutionContext_t2724 * ExecutionContext_Capture_m18757 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		ExecutionContext_t2724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5925);
		SecurityManager_t2814_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5548);
		s_Il2CppMethodIntialized = true;
	}
	ExecutionContext_t2724 * V_0 = {0};
	ExecutionContext_t2724 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Thread_t1122 * L_0 = Thread_get_CurrentThread_m5000(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExecutionContext_t2724 * L_1 = Thread_get_ExecutionContext_m18808(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ExecutionContext_t2724 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = ExecutionContext_get_FlowSuppressed_m18761(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (ExecutionContext_t2724 *)NULL;
	}

IL_0015:
	{
		ExecutionContext_t2724 * L_4 = V_0;
		ExecutionContext_t2724 * L_5 = (ExecutionContext_t2724 *)il2cpp_codegen_object_new (ExecutionContext_t2724_il2cpp_TypeInfo_var);
		ExecutionContext__ctor_m18755(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(SecurityManager_t2814_il2cpp_TypeInfo_var);
		bool L_6 = SecurityManager_get_SecurityEnabled_m17676(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		ExecutionContext_t2724 * L_7 = V_1;
		SecurityContext_t2805 * L_8 = SecurityContext_Capture_m17630(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ExecutionContext_set_SecurityContext_m18760(L_7, L_8, /*hidden argument*/NULL);
	}

IL_002e:
	{
		ExecutionContext_t2724 * L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* NotImplementedException_t333_il2cpp_TypeInfo_var;
extern "C" void ExecutionContext_GetObjectData_m18758 (ExecutionContext_t2724 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		NotImplementedException_t333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t669 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral2882, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NotImplementedException_t333 * L_2 = (NotImplementedException_t333 *)il2cpp_codegen_object_new (NotImplementedException_t333_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m4967(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
extern TypeInfo* SecurityContext_t2805_il2cpp_TypeInfo_var;
extern "C" SecurityContext_t2805 * ExecutionContext_get_SecurityContext_m18759 (ExecutionContext_t2724 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityContext_t2805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5813);
		s_Il2CppMethodIntialized = true;
	}
	{
		SecurityContext_t2805 * L_0 = (__this->____sc_0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		SecurityContext_t2805 * L_1 = (SecurityContext_t2805 *)il2cpp_codegen_object_new (SecurityContext_t2805_il2cpp_TypeInfo_var);
		SecurityContext__ctor_m17628(L_1, /*hidden argument*/NULL);
		__this->____sc_0 = L_1;
	}

IL_0013:
	{
		SecurityContext_t2805 * L_2 = (__this->____sc_0);
		return L_2;
	}
}
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
extern "C" void ExecutionContext_set_SecurityContext_m18760 (ExecutionContext_t2724 * __this, SecurityContext_t2805 * ___value, const MethodInfo* method)
{
	{
		SecurityContext_t2805 * L_0 = ___value;
		__this->____sc_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
extern "C" bool ExecutionContext_get_FlowSuppressed_m18761 (ExecutionContext_t2724 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____suppressFlow_1);
		return L_0;
	}
}
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern "C" bool ExecutionContext_IsFlowSuppressed_m18762 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Thread_t1122 * L_0 = Thread_get_CurrentThread_m5000(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExecutionContext_t2724 * L_1 = Thread_get_ExecutionContext_m18808(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = ExecutionContext_get_FlowSuppressed_m18761(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Interlocked
#include "mscorlib_System_Threading_Interlocked.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"



// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C" int32_t Interlocked_CompareExchange_m9830 (Object_t * __this /* static, unused */, int32_t* ___location1, int32_t ___value, int32_t ___comparand, const MethodInfo* method)
{
	typedef int32_t (*Interlocked_CompareExchange_m9830_ftn) (int32_t*, int32_t, int32_t);
	static Interlocked_CompareExchange_m9830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Interlocked_CompareExchange_m9830_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)");
	return _il2cpp_icall_func(___location1, ___value, ___comparand);
}
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
extern "C" Object_t * Interlocked_CompareExchange_m5117 (Object_t * __this /* static, unused */, Object_t ** ___location1, Object_t * ___value, Object_t * ___comparand, const MethodInfo* method)
{
	typedef Object_t * (*Interlocked_CompareExchange_m5117_ftn) (Object_t **, Object_t *, Object_t *);
	static Interlocked_CompareExchange_m5117_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Interlocked_CompareExchange_m5117_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)");
	return _il2cpp_icall_func(___location1, ___value, ___comparand);
}
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
extern "C" int32_t Interlocked_Increment_m18763 (Object_t * __this /* static, unused */, int32_t* ___location, const MethodInfo* method)
{
	typedef int32_t (*Interlocked_Increment_m18763_ftn) (int32_t*);
	static Interlocked_Increment_m18763_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Interlocked_Increment_m18763_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Interlocked::Increment(System.Int32&)");
	return _il2cpp_icall_func(___location);
}
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"



// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
extern "C" void ManualResetEvent__ctor_m6405 (ManualResetEvent_t1300 * __this, bool ___initialState, const MethodInfo* method)
{
	{
		bool L_0 = ___initialState;
		EventWaitHandle__ctor_m18752(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Monitor
#include "mscorlib_System_Threading_Monitor.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"

// System.Threading.SynchronizationLockException
#include "mscorlib_System_Threading_SynchronizationLockException.h"
// System.Threading.SynchronizationLockException
#include "mscorlib_System_Threading_SynchronizationLockExceptionMethodDeclarations.h"


// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" void Monitor_Enter_m3583 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	typedef void (*Monitor_Enter_m3583_ftn) (Object_t *);
	static Monitor_Enter_m3583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Monitor_Enter_m3583_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Monitor::Enter(System.Object)");
	_il2cpp_icall_func(___obj);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" void Monitor_Exit_m3584 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	typedef void (*Monitor_Exit_m3584_ftn) (Object_t *);
	static Monitor_Exit_m3584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Monitor_Exit_m3584_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Monitor::Exit(System.Object)");
	_il2cpp_icall_func(___obj);
}
// System.Void System.Threading.Monitor::Monitor_pulse(System.Object)
extern "C" void Monitor_Monitor_pulse_m18764 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	typedef void (*Monitor_Monitor_pulse_m18764_ftn) (Object_t *);
	static Monitor_Monitor_pulse_m18764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Monitor_Monitor_pulse_m18764_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Monitor::Monitor_pulse(System.Object)");
	_il2cpp_icall_func(___obj);
}
// System.Boolean System.Threading.Monitor::Monitor_test_synchronised(System.Object)
extern "C" bool Monitor_Monitor_test_synchronised_m18765 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	typedef bool (*Monitor_Monitor_test_synchronised_m18765_ftn) (Object_t *);
	static Monitor_Monitor_test_synchronised_m18765_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Monitor_Monitor_test_synchronised_m18765_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Monitor::Monitor_test_synchronised(System.Object)");
	return _il2cpp_icall_func(___obj);
}
// System.Void System.Threading.Monitor::Pulse(System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationLockException_t2951_il2cpp_TypeInfo_var;
extern "C" void Monitor_Pulse_m18766 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		SynchronizationLockException_t2951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5926);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral4190, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___obj;
		bool L_3 = Monitor_Monitor_test_synchronised_m18765(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		SynchronizationLockException_t2951 * L_4 = (SynchronizationLockException_t2951 *)il2cpp_codegen_object_new (SynchronizationLockException_t2951_il2cpp_TypeInfo_var);
		SynchronizationLockException__ctor_m18781(L_4, (String_t*) &_stringLiteral5647, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		Object_t * L_5 = ___obj;
		Monitor_Monitor_pulse_m18764(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Threading.Monitor::Monitor_wait(System.Object,System.Int32)
extern "C" bool Monitor_Monitor_wait_m18767 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___ms, const MethodInfo* method)
{
	typedef bool (*Monitor_Monitor_wait_m18767_ftn) (Object_t *, int32_t);
	static Monitor_Monitor_wait_m18767_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Monitor_Monitor_wait_m18767_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Monitor::Monitor_wait(System.Object,System.Int32)");
	return _il2cpp_icall_func(___obj, ___ms);
}
// System.Boolean System.Threading.Monitor::Wait(System.Object,System.Int32)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationLockException_t2951_il2cpp_TypeInfo_var;
extern "C" bool Monitor_Wait_m18768 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___millisecondsTimeout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		SynchronizationLockException_t2951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5926);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral4190, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___millisecondsTimeout;
		if ((((int32_t)L_2) >= ((int32_t)(-1))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_3, (String_t*) &_stringLiteral5648, (String_t*) &_stringLiteral5649, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		Object_t * L_4 = ___obj;
		bool L_5 = Monitor_Monitor_test_synchronised_m18765(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		SynchronizationLockException_t2951 * L_6 = (SynchronizationLockException_t2951 *)il2cpp_codegen_object_new (SynchronizationLockException_t2951_il2cpp_TypeInfo_var);
		SynchronizationLockException__ctor_m18781(L_6, (String_t*) &_stringLiteral5647, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0035:
	{
		Object_t * L_7 = ___obj;
		int32_t L_8 = ___millisecondsTimeout;
		bool L_9 = Monitor_Monitor_wait_m18767(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Threading.Mutex
#include "mscorlib_System_Threading_Mutex.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"

// System.ApplicationException
#include "mscorlib_System_ApplicationException.h"
// System.ApplicationException
#include "mscorlib_System_ApplicationExceptionMethodDeclarations.h"


// System.Void System.Threading.Mutex::.ctor(System.Boolean)
extern TypeInfo* WaitHandle_t1351_il2cpp_TypeInfo_var;
extern "C" void Mutex__ctor_m18769 (Mutex_t2714 * __this, bool ___initiallyOwned, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandle_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2832);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t1351_il2cpp_TypeInfo_var);
		WaitHandle__ctor_m18836(__this, /*hidden argument*/NULL);
		bool L_0 = ___initiallyOwned;
		IntPtr_t L_1 = Mutex_CreateMutex_internal_m18770(NULL /*static, unused*/, L_0, (String_t*)NULL, (&V_0), /*hidden argument*/NULL);
		VirtActionInvoker1< IntPtr_t >::Invoke(8 /* System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr) */, __this, L_1);
		return;
	}
}
// System.IntPtr System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)
extern "C" IntPtr_t Mutex_CreateMutex_internal_m18770 (Object_t * __this /* static, unused */, bool ___initiallyOwned, String_t* ___name, bool* ___created, const MethodInfo* method)
{
	typedef IntPtr_t (*Mutex_CreateMutex_internal_m18770_ftn) (bool, String_t*, bool*);
	static Mutex_CreateMutex_internal_m18770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mutex_CreateMutex_internal_m18770_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)");
	return _il2cpp_icall_func(___initiallyOwned, ___name, ___created);
}
// System.Boolean System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)
extern "C" bool Mutex_ReleaseMutex_internal_m18771 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	typedef bool (*Mutex_ReleaseMutex_internal_m18771_ftn) (IntPtr_t);
	static Mutex_ReleaseMutex_internal_m18771_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mutex_ReleaseMutex_internal_m18771_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)");
	return _il2cpp_icall_func(___handle);
}
// System.Void System.Threading.Mutex::ReleaseMutex()
extern TypeInfo* ApplicationException_t1817_il2cpp_TypeInfo_var;
extern "C" void Mutex_ReleaseMutex_m18772 (Mutex_t2714 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ApplicationException_t1817_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4173);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		IntPtr_t L_0 = (IntPtr_t)VirtFuncInvoker0< IntPtr_t >::Invoke(7 /* System.IntPtr System.Threading.WaitHandle::get_Handle() */, __this);
		bool L_1 = Mutex_ReleaseMutex_internal_m18771(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		ApplicationException_t1817 * L_3 = (ApplicationException_t1817 *)il2cpp_codegen_object_new (ApplicationException_t1817_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m10280(L_3, (String_t*) &_stringLiteral5650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		return;
	}
}
// System.Threading.NativeEventCalls
#include "mscorlib_System_Threading_NativeEventCalls.h"
#ifndef _MSC_VER
#else
#endif



// System.IntPtr System.Threading.NativeEventCalls::CreateEvent_internal(System.Boolean,System.Boolean,System.String,System.Boolean&)
extern "C" IntPtr_t NativeEventCalls_CreateEvent_internal_m18773 (Object_t * __this /* static, unused */, bool ___manual, bool ___initial, String_t* ___name, bool* ___created, const MethodInfo* method)
{
	typedef IntPtr_t (*NativeEventCalls_CreateEvent_internal_m18773_ftn) (bool, bool, String_t*, bool*);
	static NativeEventCalls_CreateEvent_internal_m18773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeEventCalls_CreateEvent_internal_m18773_ftn)il2cpp_codegen_resolve_icall ("System.Threading.NativeEventCalls::CreateEvent_internal(System.Boolean,System.Boolean,System.String,System.Boolean&)");
	return _il2cpp_icall_func(___manual, ___initial, ___name, ___created);
}
// System.Boolean System.Threading.NativeEventCalls::SetEvent_internal(System.IntPtr)
extern "C" bool NativeEventCalls_SetEvent_internal_m18774 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	typedef bool (*NativeEventCalls_SetEvent_internal_m18774_ftn) (IntPtr_t);
	static NativeEventCalls_SetEvent_internal_m18774_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeEventCalls_SetEvent_internal_m18774_ftn)il2cpp_codegen_resolve_icall ("System.Threading.NativeEventCalls::SetEvent_internal(System.IntPtr)");
	return _il2cpp_icall_func(___handle);
}
// System.Boolean System.Threading.NativeEventCalls::ResetEvent_internal(System.IntPtr)
extern "C" bool NativeEventCalls_ResetEvent_internal_m18775 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	typedef bool (*NativeEventCalls_ResetEvent_internal_m18775_ftn) (IntPtr_t);
	static NativeEventCalls_ResetEvent_internal_m18775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeEventCalls_ResetEvent_internal_m18775_ftn)il2cpp_codegen_resolve_icall ("System.Threading.NativeEventCalls::ResetEvent_internal(System.IntPtr)");
	return _il2cpp_icall_func(___handle);
}
// System.Void System.Threading.NativeEventCalls::CloseEvent_internal(System.IntPtr)
extern "C" void NativeEventCalls_CloseEvent_internal_m18776 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	typedef void (*NativeEventCalls_CloseEvent_internal_m18776_ftn) (IntPtr_t);
	static NativeEventCalls_CloseEvent_internal_m18776_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeEventCalls_CloseEvent_internal_m18776_ftn)il2cpp_codegen_resolve_icall ("System.Threading.NativeEventCalls::CloseEvent_internal(System.IntPtr)");
	_il2cpp_icall_func(___handle);
}
// System.Threading.RegisteredWaitHandle
#include "mscorlib_System_Threading_RegisteredWaitHandle.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.RegisteredWaitHandle
#include "mscorlib_System_Threading_RegisteredWaitHandleMethodDeclarations.h"

// System.Threading.WaitOrTimerCallback
#include "mscorlib_System_Threading_WaitOrTimerCallback.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallback.h"
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObjectMethodDeclarations.h"
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallbackMethodDeclarations.h"
// System.Threading.ThreadPool
#include "mscorlib_System_Threading_ThreadPoolMethodDeclarations.h"
// System.Threading.WaitOrTimerCallback
#include "mscorlib_System_Threading_WaitOrTimerCallbackMethodDeclarations.h"


// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern TypeInfo* ManualResetEvent_t1300_il2cpp_TypeInfo_var;
extern "C" void RegisteredWaitHandle__ctor_m18777 (RegisteredWaitHandle_t2950 * __this, WaitHandle_t1351 * ___waitObject, WaitOrTimerCallback_t2949 * ___callback, Object_t * ___state, TimeSpan_t1129  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t1300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2638);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject__ctor_m5095(__this, /*hidden argument*/NULL);
		WaitHandle_t1351 * L_0 = ___waitObject;
		__this->____waitObject_1 = L_0;
		WaitOrTimerCallback_t2949 * L_1 = ___callback;
		__this->____callback_2 = L_1;
		Object_t * L_2 = ___state;
		__this->____state_4 = L_2;
		TimeSpan_t1129  L_3 = ___timeout;
		__this->____timeout_3 = L_3;
		bool L_4 = ___executeOnlyOnce;
		__this->____executeOnlyOnce_5 = L_4;
		__this->____finalEvent_6 = (WaitHandle_t1351 *)NULL;
		ManualResetEvent_t1300 * L_5 = (ManualResetEvent_t1300 *)il2cpp_codegen_object_new (ManualResetEvent_t1300_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m6405(L_5, 0, /*hidden argument*/NULL);
		__this->____cancelEvent_7 = L_5;
		__this->____callsInProcess_8 = 0;
		__this->____unregistered_9 = 0;
		return;
	}
}
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern TypeInfo* WaitHandleU5BU5D_t3006_il2cpp_TypeInfo_var;
extern TypeInfo* WaitHandle_t1351_il2cpp_TypeInfo_var;
extern TypeInfo* WaitCallback_t2086_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern const MethodInfo* RegisteredWaitHandle_DoCallBack_m18779_MethodInfo_var;
extern "C" void RegisteredWaitHandle_Wait_m18778 (RegisteredWaitHandle_t2950 * __this, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandleU5BU5D_t3006_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5927);
		WaitHandle_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2832);
		WaitCallback_t2086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		RegisteredWaitHandle_DoCallBack_m18779_MethodInfo_var = il2cpp_codegen_method_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	RegisteredWaitHandle_t2950 * V_0 = {0};
	WaitHandleU5BU5D_t3006* V_1 = {0};
	int32_t V_2 = 0;
	RegisteredWaitHandle_t2950 * V_3 = {0};
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
			WaitHandleU5BU5D_t3006* L_0 = ((WaitHandleU5BU5D_t3006*)SZArrayNew(WaitHandleU5BU5D_t3006_il2cpp_TypeInfo_var, 2));
			WaitHandle_t1351 * L_1 = (__this->____waitObject_1);
			NullCheck(L_0);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
			ArrayElementTypeCheck (L_0, L_1);
			*((WaitHandle_t1351 **)(WaitHandle_t1351 **)SZArrayLdElema(L_0, 0)) = (WaitHandle_t1351 *)L_1;
			WaitHandleU5BU5D_t3006* L_2 = L_0;
			ManualResetEvent_t1300 * L_3 = (__this->____cancelEvent_7);
			NullCheck(L_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
			ArrayElementTypeCheck (L_2, L_3);
			*((WaitHandle_t1351 **)(WaitHandle_t1351 **)SZArrayLdElema(L_2, 1)) = (WaitHandle_t1351 *)L_3;
			V_1 = L_2;
		}

IL_0019:
		{
			WaitHandleU5BU5D_t3006* L_4 = V_1;
			TimeSpan_t1129  L_5 = (__this->____timeout_3);
			IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t1351_il2cpp_TypeInfo_var);
			int32_t L_6 = WaitHandle_WaitAny_m18841(NULL /*static, unused*/, L_4, L_5, 0, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7 = (__this->____unregistered_9);
			if (L_7)
			{
				goto IL_006d;
			}
		}

IL_002f:
		{
			V_3 = __this;
			RegisteredWaitHandle_t2950 * L_8 = V_3;
			Monitor_Enter_m3583(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		}

IL_0037:
		try
		{ // begin try (depth: 2)
			int32_t L_9 = (__this->____callsInProcess_8);
			__this->____callsInProcess_8 = ((int32_t)((int32_t)L_9+(int32_t)1));
			IL2CPP_LEAVE(0x4E, FINALLY_0047);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t306 *)e.ex;
			goto FINALLY_0047;
		}

FINALLY_0047:
		{ // begin finally (depth: 2)
			RegisteredWaitHandle_t2950 * L_10 = V_3;
			Monitor_Exit_m3584(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(71)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(71)
		{
			IL2CPP_JUMP_TBL(0x4E, IL_004e)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
		}

IL_004e:
		{
			IntPtr_t L_11 = { (void*)RegisteredWaitHandle_DoCallBack_m18779_MethodInfo_var };
			WaitCallback_t2086 * L_12 = (WaitCallback_t2086 *)il2cpp_codegen_object_new (WaitCallback_t2086_il2cpp_TypeInfo_var);
			WaitCallback__ctor_m12836(L_12, __this, L_11, /*hidden argument*/NULL);
			int32_t L_13 = V_2;
			bool L_14 = ((((int32_t)L_13) == ((int32_t)((int32_t)258)))? 1 : 0);
			Object_t * L_15 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_14);
			ThreadPool_QueueUserWorkItem_m12837(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		}

IL_006d:
		{
			bool L_16 = (__this->____unregistered_9);
			if (L_16)
			{
				goto IL_007d;
			}
		}

IL_0075:
		{
			bool L_17 = (__this->____executeOnlyOnce_5);
			if (!L_17)
			{
				goto IL_0019;
			}
		}

IL_007d:
		{
			goto IL_0082;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_007f;
		throw e;
	}

CATCH_007f:
	{ // begin catch(System.Object)
		goto IL_0082;
	} // end catch (depth: 1)

IL_0082:
	{
		V_0 = __this;
		RegisteredWaitHandle_t2950 * L_18 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		{
			__this->____unregistered_9 = 1;
			int32_t L_19 = (__this->____callsInProcess_8);
			if (L_19)
			{
				goto IL_00b2;
			}
		}

IL_0099:
		{
			WaitHandle_t1351 * L_20 = (__this->____finalEvent_6);
			if (!L_20)
			{
				goto IL_00b2;
			}
		}

IL_00a1:
		{
			WaitHandle_t1351 * L_21 = (__this->____finalEvent_6);
			NullCheck(L_21);
			IntPtr_t L_22 = (IntPtr_t)VirtFuncInvoker0< IntPtr_t >::Invoke(7 /* System.IntPtr System.Threading.WaitHandle::get_Handle() */, L_21);
			NativeEventCalls_SetEvent_internal_m18774(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		}

IL_00b2:
		{
			IL2CPP_LEAVE(0xBB, FINALLY_00b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00b4;
	}

FINALLY_00b4:
	{ // begin finally (depth: 1)
		RegisteredWaitHandle_t2950 * L_23 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(180)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(180)
	{
		IL2CPP_JUMP_TBL(0xBB, IL_00bb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00bb:
	{
		return;
	}
}
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern "C" void RegisteredWaitHandle_DoCallBack_m18779 (RegisteredWaitHandle_t2950 * __this, Object_t * ___timedOut, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	RegisteredWaitHandle_t2950 * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		WaitOrTimerCallback_t2949 * L_0 = (__this->____callback_2);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		WaitOrTimerCallback_t2949 * L_1 = (__this->____callback_2);
		Object_t * L_2 = (__this->____state_4);
		Object_t * L_3 = ___timedOut;
		NullCheck(L_1);
		VirtActionInvoker2< Object_t *, bool >::Invoke(11 /* System.Void System.Threading.WaitOrTimerCallback::Invoke(System.Object,System.Boolean) */, L_1, L_2, ((*(bool*)((bool*)UnBox (L_3, Boolean_t311_il2cpp_TypeInfo_var)))));
	}

IL_001f:
	{
		V_0 = __this;
		RegisteredWaitHandle_t2950 * L_4 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_5 = (__this->____callsInProcess_8);
			__this->____callsInProcess_8 = ((int32_t)((int32_t)L_5-(int32_t)1));
			bool L_6 = (__this->____unregistered_9);
			if (!L_6)
			{
				goto IL_005e;
			}
		}

IL_003d:
		{
			int32_t L_7 = (__this->____callsInProcess_8);
			if (L_7)
			{
				goto IL_005e;
			}
		}

IL_0045:
		{
			WaitHandle_t1351 * L_8 = (__this->____finalEvent_6);
			if (!L_8)
			{
				goto IL_005e;
			}
		}

IL_004d:
		{
			WaitHandle_t1351 * L_9 = (__this->____finalEvent_6);
			NullCheck(L_9);
			IntPtr_t L_10 = (IntPtr_t)VirtFuncInvoker0< IntPtr_t >::Invoke(7 /* System.IntPtr System.Threading.WaitHandle::get_Handle() */, L_9);
			NativeEventCalls_SetEvent_internal_m18774(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		RegisteredWaitHandle_t2950 * L_11 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0067:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"


// System.Void System.Threading.SynchronizationLockException::.ctor()
extern "C" void SynchronizationLockException__ctor_m18780 (SynchronizationLockException_t2951 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m4993(__this, (String_t*) &_stringLiteral5651, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.SynchronizationLockException::.ctor(System.String)
extern "C" void SynchronizationLockException__ctor_m18781 (SynchronizationLockException_t2951 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m4993(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.SynchronizationLockException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SynchronizationLockException__ctor_m18782 (SynchronizationLockException_t2951 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		SystemException__ctor_m4994(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Threading.ThreadState
#include "mscorlib_System_Threading_ThreadState.h"
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStart.h"
// System.MulticastDelegate
#include "mscorlib_System_MulticastDelegate.h"
// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.NumberFormatter
#include "mscorlib_System_NumberFormatterMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaMethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void Thread__ctor_m12816 (Thread_t1122 * __this, ThreadStart_t2238 * ___start, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___state_7 = 8;
		__this->___apartment_state_32 = 2;
		CriticalFinalizerObject__ctor_m16975(__this, /*hidden argument*/NULL);
		ThreadStart_t2238 * L_0 = ___start;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5652, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0022:
	{
		ThreadStart_t2238 * L_2 = ___start;
		__this->___threadstart_45 = L_2;
		Thread_Thread_init_m18790(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Thread::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern "C" void Thread__cctor_m18783 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_0, /*hidden argument*/NULL);
		((Thread_t1122_StaticFields*)Thread_t1122_il2cpp_TypeInfo_var->static_fields)->___datastore_lock_49 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_1, /*hidden argument*/NULL);
		((Thread_t1122_StaticFields*)Thread_t1122_il2cpp_TypeInfo_var->static_fields)->___culture_lock_51 = L_1;
		return;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
extern "C" Context_t2693 * Thread_get_CurrentContext_m18784 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Context_t2693 * L_0 = AppDomain_InternalGetContext_m14494(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
extern "C" Thread_t1122 * Thread_CurrentThread_internal_m18785 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Thread_t1122 * (*Thread_CurrentThread_internal_m18785_ftn) ();
	static Thread_CurrentThread_internal_m18785_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_CurrentThread_internal_m18785_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::CurrentThread_internal()");
	return _il2cpp_icall_func();
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern "C" Thread_t1122 * Thread_get_CurrentThread_m5000 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Thread_t1122 * L_0 = Thread_CurrentThread_internal_m18785(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.AppDomain System.Threading.Thread::GetDomain()
extern "C" AppDomain_t1471 * Thread_GetDomain_m18786 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		AppDomain_t1471 * L_0 = AppDomain_get_CurrentDomain_m6900(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Threading.Thread::GetDomainID()
extern "C" int32_t Thread_GetDomainID_m18787 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Thread_GetDomainID_m18787_ftn) ();
	static Thread_GetDomainID_m18787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetDomainID_m18787_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetDomainID()");
	return _il2cpp_icall_func();
}
// System.Void System.Threading.Thread::ResetAbort_internal()
extern "C" void Thread_ResetAbort_internal_m18788 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*Thread_ResetAbort_internal_m18788_ftn) ();
	static Thread_ResetAbort_internal_m18788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_ResetAbort_internal_m18788_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::ResetAbort_internal()");
	_il2cpp_icall_func();
}
// System.Void System.Threading.Thread::ResetAbort()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern "C" void Thread_ResetAbort_m12840 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Thread_ResetAbort_internal_m18788(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
extern "C" IntPtr_t Thread_Thread_internal_m18789 (Thread_t1122 * __this, MulticastDelegate_t73 * ___start, const MethodInfo* method)
{
	typedef IntPtr_t (*Thread_Thread_internal_m18789_ftn) (Thread_t1122 *, MulticastDelegate_t73 *);
	static Thread_Thread_internal_m18789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_Thread_internal_m18789_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::Thread_internal(System.MulticastDelegate)");
	return _il2cpp_icall_func(__this, ___start);
}
// System.Void System.Threading.Thread::Thread_init()
extern "C" void Thread_Thread_init_m18790 (Thread_t1122 * __this, const MethodInfo* method)
{
	typedef void (*Thread_Thread_init_m18790_ftn) (Thread_t1122 *);
	static Thread_Thread_init_m18790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_Thread_init_m18790_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::Thread_init()");
	_il2cpp_icall_func(__this);
}
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
extern "C" CultureInfo_t693 * Thread_GetCachedCurrentCulture_m18791 (Thread_t1122 * __this, const MethodInfo* method)
{
	typedef CultureInfo_t693 * (*Thread_GetCachedCurrentCulture_m18791_ftn) (Thread_t1122 *);
	static Thread_GetCachedCurrentCulture_m18791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetCachedCurrentCulture_m18791_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetCachedCurrentCulture()");
	return _il2cpp_icall_func(__this);
}
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
extern "C" ByteU5BU5D_t159* Thread_GetSerializedCurrentCulture_m18792 (Thread_t1122 * __this, const MethodInfo* method)
{
	typedef ByteU5BU5D_t159* (*Thread_GetSerializedCurrentCulture_m18792_ftn) (Thread_t1122 *);
	static Thread_GetSerializedCurrentCulture_m18792_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetSerializedCurrentCulture_m18792_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetSerializedCurrentCulture()");
	return _il2cpp_icall_func(__this);
}
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentCulture_m18793 (Thread_t1122 * __this, CultureInfo_t693 * ___culture, const MethodInfo* method)
{
	typedef void (*Thread_SetCachedCurrentCulture_m18793_ftn) (Thread_t1122 *, CultureInfo_t693 *);
	static Thread_SetCachedCurrentCulture_m18793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_SetCachedCurrentCulture_m18793_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)");
	_il2cpp_icall_func(__this, ___culture);
}
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
extern "C" CultureInfo_t693 * Thread_GetCachedCurrentUICulture_m18794 (Thread_t1122 * __this, const MethodInfo* method)
{
	typedef CultureInfo_t693 * (*Thread_GetCachedCurrentUICulture_m18794_ftn) (Thread_t1122 *);
	static Thread_GetCachedCurrentUICulture_m18794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetCachedCurrentUICulture_m18794_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetCachedCurrentUICulture()");
	return _il2cpp_icall_func(__this);
}
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
extern "C" ByteU5BU5D_t159* Thread_GetSerializedCurrentUICulture_m18795 (Thread_t1122 * __this, const MethodInfo* method)
{
	typedef ByteU5BU5D_t159* (*Thread_GetSerializedCurrentUICulture_m18795_ftn) (Thread_t1122 *);
	static Thread_GetSerializedCurrentUICulture_m18795_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetSerializedCurrentUICulture_m18795_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetSerializedCurrentUICulture()");
	return _il2cpp_icall_func(__this);
}
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentUICulture_m18796 (Thread_t1122 * __this, CultureInfo_t693 * ___culture, const MethodInfo* method)
{
	typedef void (*Thread_SetCachedCurrentUICulture_m18796_ftn) (Thread_t1122 *, CultureInfo_t693 *);
	static Thread_SetCachedCurrentUICulture_m18796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_SetCachedCurrentUICulture_m18796_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)");
	_il2cpp_icall_func(__this, ___culture);
}
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* NumberFormatter_t2475_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryFormatter_t1132_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t686_il2cpp_TypeInfo_var;
extern "C" CultureInfo_t693 * Thread_get_CurrentCulture_m5001 (Thread_t1122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		NumberFormatter_t2475_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5417);
		BinaryFormatter_t1132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1965);
		MemoryStream_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(935);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t693 * V_0 = {0};
	ByteU5BU5D_t159* V_1 = {0};
	Object_t * V_2 = {0};
	BinaryFormatter_t1132 * V_3 = {0};
	MemoryStream_t686 * V_4 = {0};
	CultureInfo_t693 * V_5 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___in_currentculture_50);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_1 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		CultureInfo_t693 * L_2 = Thread_GetCachedCurrentCulture_m18791(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		CultureInfo_t693 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		CultureInfo_t693 * L_4 = V_0;
		return L_4;
	}

IL_001a:
	{
		ByteU5BU5D_t159* L_5 = Thread_GetSerializedCurrentCulture_m18792(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		ByteU5BU5D_t159* L_6 = V_1;
		if (L_6)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((Thread_t1122_StaticFields*)Thread_t1122_il2cpp_TypeInfo_var->static_fields)->___culture_lock_51;
		V_2 = L_7;
		Object_t * L_8 = V_2;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			__this->___in_currentculture_50 = 1;
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
			CultureInfo_t693 * L_9 = CultureInfo_ConstructCurrentCulture_m15719(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_0 = L_9;
			CultureInfo_t693 * L_10 = V_0;
			Thread_SetCachedCurrentCulture_m18793(__this, L_10, /*hidden argument*/NULL);
			__this->___in_currentculture_50 = 0;
			CultureInfo_t693 * L_11 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t2475_il2cpp_TypeInfo_var);
			NumberFormatter_SetThreadCurrentCulture_m15111(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
			CultureInfo_t693 * L_12 = V_0;
			V_5 = L_12;
			IL2CPP_LEAVE(0x9B, FINALLY_0058);
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		Object_t * L_13 = V_2;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x9B, IL_009b)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_005f:
	{
		__this->___in_currentculture_50 = 1;
	}

IL_0066:
	try
	{ // begin try (depth: 1)
		BinaryFormatter_t1132 * L_14 = (BinaryFormatter_t1132 *)il2cpp_codegen_object_new (BinaryFormatter_t1132_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m5044(L_14, /*hidden argument*/NULL);
		V_3 = L_14;
		ByteU5BU5D_t159* L_15 = V_1;
		MemoryStream_t686 * L_16 = (MemoryStream_t686 *)il2cpp_codegen_object_new (MemoryStream_t686_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m5043(L_16, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		BinaryFormatter_t1132 * L_17 = V_3;
		MemoryStream_t686 * L_18 = V_4;
		NullCheck(L_17);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker1< Object_t *, Stream_t844 * >::Invoke(7 /* System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream) */, L_17, L_18);
		V_0 = ((CultureInfo_t693 *)Castclass(L_19, CultureInfo_t693_il2cpp_TypeInfo_var));
		CultureInfo_t693 * L_20 = V_0;
		Thread_SetCachedCurrentCulture_m18793(__this, L_20, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x93, FINALLY_008b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_008b;
	}

FINALLY_008b:
	{ // begin finally (depth: 1)
		__this->___in_currentculture_50 = 0;
		IL2CPP_END_FINALLY(139)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(139)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0093:
	{
		CultureInfo_t693 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t2475_il2cpp_TypeInfo_var);
		NumberFormatter_SetThreadCurrentCulture_m15111(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		CultureInfo_t693 * L_22 = V_0;
		return L_22;
	}

IL_009b:
	{
		CultureInfo_t693 * L_23 = V_5;
		return L_23;
	}
}
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryFormatter_t1132_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t686_il2cpp_TypeInfo_var;
extern "C" CultureInfo_t693 * Thread_get_CurrentUICulture_m18797 (Thread_t1122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		BinaryFormatter_t1132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1965);
		MemoryStream_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(935);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t693 * V_0 = {0};
	ByteU5BU5D_t159* V_1 = {0};
	Object_t * V_2 = {0};
	BinaryFormatter_t1132 * V_3 = {0};
	MemoryStream_t686 * V_4 = {0};
	CultureInfo_t693 * V_5 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___in_currentculture_50);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_1 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		CultureInfo_t693 * L_2 = Thread_GetCachedCurrentUICulture_m18794(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		CultureInfo_t693 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		CultureInfo_t693 * L_4 = V_0;
		return L_4;
	}

IL_001a:
	{
		ByteU5BU5D_t159* L_5 = Thread_GetSerializedCurrentUICulture_m18795(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		ByteU5BU5D_t159* L_6 = V_1;
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((Thread_t1122_StaticFields*)Thread_t1122_il2cpp_TypeInfo_var->static_fields)->___culture_lock_51;
		V_2 = L_7;
		Object_t * L_8 = V_2;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			__this->___in_currentculture_50 = 1;
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
			CultureInfo_t693 * L_9 = CultureInfo_ConstructCurrentUICulture_m15720(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_0 = L_9;
			CultureInfo_t693 * L_10 = V_0;
			Thread_SetCachedCurrentUICulture_m18796(__this, L_10, /*hidden argument*/NULL);
			__this->___in_currentculture_50 = 0;
			CultureInfo_t693 * L_11 = V_0;
			V_5 = L_11;
			IL2CPP_LEAVE(0x8F, FINALLY_0052);
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x59, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Object_t * L_12 = V_2;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0059:
	{
		__this->___in_currentculture_50 = 1;
	}

IL_0060:
	try
	{ // begin try (depth: 1)
		BinaryFormatter_t1132 * L_13 = (BinaryFormatter_t1132 *)il2cpp_codegen_object_new (BinaryFormatter_t1132_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m5044(L_13, /*hidden argument*/NULL);
		V_3 = L_13;
		ByteU5BU5D_t159* L_14 = V_1;
		MemoryStream_t686 * L_15 = (MemoryStream_t686 *)il2cpp_codegen_object_new (MemoryStream_t686_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m5043(L_15, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		BinaryFormatter_t1132 * L_16 = V_3;
		MemoryStream_t686 * L_17 = V_4;
		NullCheck(L_16);
		Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, Stream_t844 * >::Invoke(7 /* System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream) */, L_16, L_17);
		V_0 = ((CultureInfo_t693 *)Castclass(L_18, CultureInfo_t693_il2cpp_TypeInfo_var));
		CultureInfo_t693 * L_19 = V_0;
		Thread_SetCachedCurrentUICulture_m18796(__this, L_19, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x8D, FINALLY_0085);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		__this->___in_currentculture_50 = 0;
		IL2CPP_END_FINALLY(133)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_008d:
	{
		CultureInfo_t693 * L_20 = V_0;
		return L_20;
	}

IL_008f:
	{
		CultureInfo_t693 * L_21 = V_5;
		return L_21;
	}
}
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
extern "C" void Thread_set_IsBackground_m18798 (Thread_t1122 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Thread_SetState_m18804(__this, 4, /*hidden argument*/NULL);
		goto IL_0013;
	}

IL_000c:
	{
		Thread_ClrState_m18805(__this, 4, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Threading.Thread::SetName_internal(System.String)
extern "C" void Thread_SetName_internal_m18799 (Thread_t1122 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Thread_SetName_internal_m18799_ftn) (Thread_t1122 *, String_t*);
	static Thread_SetName_internal_m18799_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_SetName_internal_m18799_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::SetName_internal(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void System.Threading.Thread::set_Name(System.String)
extern "C" void Thread_set_Name_m18800 (Thread_t1122 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		Thread_SetName_internal_m18799(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Thread::Abort_internal(System.Object)
extern "C" void Thread_Abort_internal_m18801 (Thread_t1122 * __this, Object_t * ___stateInfo, const MethodInfo* method)
{
	typedef void (*Thread_Abort_internal_m18801_ftn) (Thread_t1122 *, Object_t *);
	static Thread_Abort_internal_m18801_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_Abort_internal_m18801_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::Abort_internal(System.Object)");
	_il2cpp_icall_func(__this, ___stateInfo);
}
// System.Void System.Threading.Thread::Abort()
extern "C" void Thread_Abort_m12845 (Thread_t1122 * __this, const MethodInfo* method)
{
	{
		Thread_Abort_internal_m18801(__this, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Thread::MemoryBarrier()
extern "C" void Thread_MemoryBarrier_m12789 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*Thread_MemoryBarrier_m12789_ftn) ();
	static Thread_MemoryBarrier_m12789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_MemoryBarrier_m12789_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::MemoryBarrier()");
	_il2cpp_icall_func();
}
// System.Void System.Threading.Thread::Start()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* SystemException_t916_il2cpp_TypeInfo_var;
extern "C" void Thread_Start_m12817 (Thread_t1122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		SystemException_t916_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1983);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ExecutionContext_IsFlowSuppressed_m18762(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ExecutionContext_t2724 * L_1 = ExecutionContext_Capture_m18757(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___ec_to_set_37 = L_1;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Thread_t1122 * L_2 = Thread_get_CurrentThread_m5000(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (L_2->____principal_47);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Thread_t1122 * L_4 = Thread_get_CurrentThread_m5000(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_t * L_5 = (L_4->____principal_47);
		__this->____principal_47 = L_5;
	}

IL_002e:
	{
		MulticastDelegate_t73 * L_6 = (__this->___threadstart_45);
		IntPtr_t L_7 = Thread_Thread_internal_m18789(__this, L_6, /*hidden argument*/NULL);
		IntPtr_t L_8 = IntPtr_op_Explicit_m12839(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_9 = IntPtr_op_Equality_m3285(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		SystemException_t916 * L_10 = (SystemException_t916 *)il2cpp_codegen_object_new (SystemException_t916_il2cpp_TypeInfo_var);
		SystemException__ctor_m4993(L_10, (String_t*) &_stringLiteral5653, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0052:
	{
		return;
	}
}
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
extern "C" void Thread_Thread_free_internal_m18802 (Thread_t1122 * __this, IntPtr_t ___handle, const MethodInfo* method)
{
	typedef void (*Thread_Thread_free_internal_m18802_ftn) (Thread_t1122 *, IntPtr_t);
	static Thread_Thread_free_internal_m18802_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_Thread_free_internal_m18802_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::Thread_free_internal(System.IntPtr)");
	_il2cpp_icall_func(__this, ___handle);
}
// System.Void System.Threading.Thread::Finalize()
extern "C" void Thread_Finalize_m18803 (Thread_t1122 * __this, const MethodInfo* method)
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
		IntPtr_t L_0 = (__this->___system_thread_handle_1);
		Thread_Thread_free_internal_m18802(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x15, FINALLY_000e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_000e;
	}

FINALLY_000e:
	{ // begin finally (depth: 1)
		CriticalFinalizerObject_Finalize_m16976(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(14)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(14)
	{
		IL2CPP_JUMP_TBL(0x15, IL_0015)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.Threading.Thread::SetState(System.Threading.ThreadState)
extern "C" void Thread_SetState_m18804 (Thread_t1122 * __this, int32_t ___set, const MethodInfo* method)
{
	typedef void (*Thread_SetState_m18804_ftn) (Thread_t1122 *, int32_t);
	static Thread_SetState_m18804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_SetState_m18804_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::SetState(System.Threading.ThreadState)");
	_il2cpp_icall_func(__this, ___set);
}
// System.Void System.Threading.Thread::ClrState(System.Threading.ThreadState)
extern "C" void Thread_ClrState_m18805 (Thread_t1122 * __this, int32_t ___clr, const MethodInfo* method)
{
	typedef void (*Thread_ClrState_m18805_ftn) (Thread_t1122 *, int32_t);
	static Thread_ClrState_m18805_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_ClrState_m18805_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::ClrState(System.Threading.ThreadState)");
	_il2cpp_icall_func(__this, ___clr);
}
// System.Int32 System.Threading.Thread::GetNewManagedId()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern "C" int32_t Thread_GetNewManagedId_m18806 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		int32_t L_0 = Thread_GetNewManagedId_internal_m18807(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
extern "C" int32_t Thread_GetNewManagedId_internal_m18807 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Thread_GetNewManagedId_internal_m18807_ftn) ();
	static Thread_GetNewManagedId_internal_m18807_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetNewManagedId_internal_m18807_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetNewManagedId_internal()");
	return _il2cpp_icall_func();
}
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* ExecutionContext_t2724_il2cpp_TypeInfo_var;
extern "C" ExecutionContext_t2724 * Thread_get_ExecutionContext_m18808 (Thread_t1122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		ExecutionContext_t2724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5925);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		ExecutionContext_t2724 * L_0 = ((Thread_t1122_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Thread_t1122_il2cpp_TypeInfo_var))->____ec_44;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ExecutionContext_t2724 * L_1 = (ExecutionContext_t2724 *)il2cpp_codegen_object_new (ExecutionContext_t2724_il2cpp_TypeInfo_var);
		ExecutionContext__ctor_m18754(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		((Thread_t1122_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Thread_t1122_il2cpp_TypeInfo_var))->____ec_44 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		ExecutionContext_t2724 * L_2 = ((Thread_t1122_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Thread_t1122_il2cpp_TypeInfo_var))->____ec_44;
		return L_2;
	}
}
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern "C" int32_t Thread_get_ManagedThreadId_m18809 (Thread_t1122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___managed_id_46);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		int32_t L_1 = Thread_GetNewManagedId_m18806(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t* L_2 = &(__this->___managed_id_46);
		int32_t L_3 = V_0;
		Interlocked_CompareExchange_m9830(NULL /*static, unused*/, L_2, L_3, 0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		int32_t L_4 = (__this->___managed_id_46);
		return L_4;
	}
}
// System.Int32 System.Threading.Thread::GetHashCode()
extern "C" int32_t Thread_GetHashCode_m18810 (Thread_t1122 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Thread_get_ManagedThreadId_m18809(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
extern "C" CompressedStack_t2804 * Thread_GetCompressedStack_m18811 (Thread_t1122 * __this, const MethodInfo* method)
{
	CompressedStack_t2804 * V_0 = {0};
	CompressedStack_t2804 * G_B4_0 = {0};
	{
		ExecutionContext_t2724 * L_0 = Thread_get_ExecutionContext_m18808(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SecurityContext_t2805 * L_1 = ExecutionContext_get_SecurityContext_m18759(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		CompressedStack_t2804 * L_2 = SecurityContext_get_CompressedStack_m17632(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CompressedStack_t2804 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		CompressedStack_t2804 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = CompressedStack_IsEmpty_m18751(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001f;
		}
	}

IL_001c:
	{
		G_B4_0 = ((CompressedStack_t2804 *)(NULL));
		goto IL_0025;
	}

IL_001f:
	{
		CompressedStack_t2804 * L_6 = V_0;
		NullCheck(L_6);
		CompressedStack_t2804 * L_7 = CompressedStack_CreateCopy_m18748(L_6, /*hidden argument*/NULL);
		G_B4_0 = L_7;
	}

IL_0025:
	{
		return G_B4_0;
	}
}
// System.Threading.ThreadAbortException
#include "mscorlib_System_Threading_ThreadAbortException.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadAbortException
#include "mscorlib_System_Threading_ThreadAbortExceptionMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void System.Threading.ThreadAbortException::.ctor()
extern "C" void ThreadAbortException__ctor_m18812 (ThreadAbortException_t2240 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m4993(__this, (String_t*) &_stringLiteral5654, /*hidden argument*/NULL);
		Exception_set_HResult_m3281(__this, ((int32_t)-2146233040), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ThreadAbortException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ThreadAbortException__ctor_m18813 (ThreadAbortException_t2240 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___sc, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___sc;
		SystemException__ctor_m4994(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.ThreadInterruptedException
#include "mscorlib_System_Threading_ThreadInterruptedException.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadInterruptedException
#include "mscorlib_System_Threading_ThreadInterruptedExceptionMethodDeclarations.h"



// System.Void System.Threading.ThreadInterruptedException::.ctor()
extern "C" void ThreadInterruptedException__ctor_m18814 (ThreadInterruptedException_t2952 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m4993(__this, (String_t*) &_stringLiteral5655, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ThreadInterruptedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ThreadInterruptedException__ctor_m18815 (ThreadInterruptedException_t2952 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		SystemException__ctor_m4994(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.ThreadPool
#include "mscorlib_System_Threading_ThreadPool.h"
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"


// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" bool ThreadPool_QueueUserWorkItem_m12837 (Object_t * __this /* static, unused */, WaitCallback_t2086 * ___callBack, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		WaitCallback_t2086 * L_0 = ___callBack;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5656, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		WaitCallback_t2086 * L_2 = ___callBack;
		Object_t * L_3 = ___state;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t72 *, Object_t * >::Invoke(12 /* System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object) */, L_2, L_3, (AsyncCallback_t72 *)NULL, NULL);
		V_0 = L_4;
		Object_t * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		return 1;
	}
}
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.Int64,System.Boolean)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern TypeInfo* RegisteredWaitHandle_t2950_il2cpp_TypeInfo_var;
extern TypeInfo* WaitCallback_t2086_il2cpp_TypeInfo_var;
extern const MethodInfo* RegisteredWaitHandle_Wait_m18778_MethodInfo_var;
extern "C" RegisteredWaitHandle_t2950 * ThreadPool_RegisterWaitForSingleObject_m18816 (Object_t * __this /* static, unused */, WaitHandle_t1351 * ___waitObject, WaitOrTimerCallback_t2949 * ___callBack, Object_t * ___state, int64_t ___millisecondsTimeOutInterval, bool ___executeOnlyOnce, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		RegisteredWaitHandle_t2950_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5928);
		WaitCallback_t2086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		RegisteredWaitHandle_Wait_m18778_MethodInfo_var = il2cpp_codegen_method_info_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t1129  V_0 = {0};
	RegisteredWaitHandle_t2950 * V_1 = {0};
	{
		int64_t L_0 = ___millisecondsTimeOutInterval;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)(-1))))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3236(L_1, (String_t*) &_stringLiteral3097, (String_t*) &_stringLiteral5657, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___millisecondsTimeOutInterval;
		if ((((int64_t)L_2) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0029;
		}
	}
	{
		NotSupportedException_t303 * L_3 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_3, (String_t*) &_stringLiteral5658, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		int64_t L_4 = ___millisecondsTimeOutInterval;
		TimeSpan__ctor_m10291((&V_0), 0, 0, 0, 0, (((int32_t)L_4)), /*hidden argument*/NULL);
		WaitHandle_t1351 * L_5 = ___waitObject;
		WaitOrTimerCallback_t2949 * L_6 = ___callBack;
		Object_t * L_7 = ___state;
		TimeSpan_t1129  L_8 = V_0;
		bool L_9 = ___executeOnlyOnce;
		RegisteredWaitHandle_t2950 * L_10 = (RegisteredWaitHandle_t2950 *)il2cpp_codegen_object_new (RegisteredWaitHandle_t2950_il2cpp_TypeInfo_var);
		RegisteredWaitHandle__ctor_m18777(L_10, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		RegisteredWaitHandle_t2950 * L_11 = V_1;
		IntPtr_t L_12 = { (void*)RegisteredWaitHandle_Wait_m18778_MethodInfo_var };
		WaitCallback_t2086 * L_13 = (WaitCallback_t2086 *)il2cpp_codegen_object_new (WaitCallback_t2086_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m12836(L_13, L_11, L_12, /*hidden argument*/NULL);
		ThreadPool_QueueUserWorkItem_m12837(NULL /*static, unused*/, L_13, NULL, /*hidden argument*/NULL);
		RegisteredWaitHandle_t2950 * L_14 = V_1;
		return L_14;
	}
}
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" RegisteredWaitHandle_t2950 * ThreadPool_RegisterWaitForSingleObject_m18817 (Object_t * __this /* static, unused */, WaitHandle_t1351 * ___waitObject, WaitOrTimerCallback_t2949 * ___callBack, Object_t * ___state, TimeSpan_t1129  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method)
{
	{
		WaitHandle_t1351 * L_0 = ___waitObject;
		WaitOrTimerCallback_t2949 * L_1 = ___callBack;
		Object_t * L_2 = ___state;
		double L_3 = TimeSpan_get_TotalMilliseconds_m15259((&___timeout), /*hidden argument*/NULL);
		bool L_4 = ___executeOnlyOnce;
		RegisteredWaitHandle_t2950 * L_5 = ThreadPool_RegisterWaitForSingleObject_m18816(NULL /*static, unused*/, L_0, L_1, L_2, (((int64_t)L_3)), L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadState
#include "mscorlib_System_Threading_ThreadStateMethodDeclarations.h"



// System.Threading.ThreadStateException
#include "mscorlib_System_Threading_ThreadStateException.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadStateException
#include "mscorlib_System_Threading_ThreadStateExceptionMethodDeclarations.h"



// System.Void System.Threading.ThreadStateException::.ctor()
extern "C" void ThreadStateException__ctor_m18818 (ThreadStateException_t2955 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m4993(__this, (String_t*) &_stringLiteral5659, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ThreadStateException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ThreadStateException__ctor_m18819 (ThreadStateException_t2955 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		SystemException__ctor_m4994(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Timer/TimerComparer
#include "mscorlib_System_Threading_Timer_TimerComparer.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Timer/TimerComparer
#include "mscorlib_System_Threading_Timer_TimerComparerMethodDeclarations.h"

// System.Threading.Timer
#include "mscorlib_System_Threading_Timer.h"


// System.Void System.Threading.Timer/TimerComparer::.ctor()
extern "C" void TimerComparer__ctor_m18820 (TimerComparer_t2956 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Threading.Timer/TimerComparer::Compare(System.Object,System.Object)
extern TypeInfo* Timer_t2718_il2cpp_TypeInfo_var;
extern "C" int32_t TimerComparer_Compare_m18821 (TimerComparer_t2956 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Timer_t2718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5736);
		s_Il2CppMethodIntialized = true;
	}
	Timer_t2718 * V_0 = {0};
	Timer_t2718 * V_1 = {0};
	int64_t V_2 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Object_t * L_0 = ___x;
		V_0 = ((Timer_t2718 *)IsInst(L_0, Timer_t2718_il2cpp_TypeInfo_var));
		Timer_t2718 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}

IL_000c:
	{
		Object_t * L_2 = ___y;
		V_1 = ((Timer_t2718 *)IsInst(L_2, Timer_t2718_il2cpp_TypeInfo_var));
		Timer_t2718 * L_3 = V_1;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		Timer_t2718 * L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5 = (L_4->___next_run_6);
		Timer_t2718 * L_6 = V_1;
		NullCheck(L_6);
		int64_t L_7 = (L_6->___next_run_6);
		V_2 = ((int64_t)((int64_t)L_5-(int64_t)L_7));
		int64_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		Object_t * L_9 = ___x;
		Object_t * L_10 = ___y;
		if ((!(((Object_t*)(Object_t *)L_9) == ((Object_t*)(Object_t *)L_10))))
		{
			goto IL_0030;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B8_0 = (-1);
	}

IL_0031:
	{
		return G_B8_0;
	}

IL_0032:
	{
		int64_t L_11 = V_2;
		if ((((int64_t)L_11) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_003a;
		}
	}
	{
		G_B12_0 = 1;
		goto IL_003b;
	}

IL_003a:
	{
		G_B12_0 = (-1);
	}

IL_003b:
	{
		return G_B12_0;
	}
}
// System.Threading.Timer/Scheduler
#include "mscorlib_System_Threading_Timer_Scheduler.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Timer/Scheduler
#include "mscorlib_System_Threading_Timer_SchedulerMethodDeclarations.h"

// System.Collections.SortedList
#include "mscorlib_System_Collections_SortedList.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallback.h"
// System.Collections.SortedList
#include "mscorlib_System_Collections_SortedListMethodDeclarations.h"
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStartMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallbackMethodDeclarations.h"


// System.Void System.Threading.Timer/Scheduler::.ctor()
extern TypeInfo* TimerComparer_t2956_il2cpp_TypeInfo_var;
extern TypeInfo* SortedList_t1151_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadStart_t2238_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern const MethodInfo* Scheduler_SchedulerThread_m18829_MethodInfo_var;
extern "C" void Scheduler__ctor_m18822 (Scheduler_t2957 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimerComparer_t2956_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5929);
		SortedList_t1151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2049);
		ThreadStart_t2238_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4430);
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		Scheduler_SchedulerThread_m18829_MethodInfo_var = il2cpp_codegen_method_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	Thread_t1122 * V_0 = {0};
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		TimerComparer_t2956 * L_0 = (TimerComparer_t2956 *)il2cpp_codegen_object_new (TimerComparer_t2956_il2cpp_TypeInfo_var);
		TimerComparer__ctor_m18820(L_0, /*hidden argument*/NULL);
		SortedList_t1151 * L_1 = (SortedList_t1151 *)il2cpp_codegen_object_new (SortedList_t1151_il2cpp_TypeInfo_var);
		SortedList__ctor_m15602(L_1, L_0, ((int32_t)1024), /*hidden argument*/NULL);
		__this->___list_1 = L_1;
		IntPtr_t L_2 = { (void*)Scheduler_SchedulerThread_m18829_MethodInfo_var };
		ThreadStart_t2238 * L_3 = (ThreadStart_t2238 *)il2cpp_codegen_object_new (ThreadStart_t2238_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m12815(L_3, __this, L_2, /*hidden argument*/NULL);
		Thread_t1122 * L_4 = (Thread_t1122 *)il2cpp_codegen_object_new (Thread_t1122_il2cpp_TypeInfo_var);
		Thread__ctor_m12816(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Thread_t1122 * L_5 = V_0;
		NullCheck(L_5);
		Thread_set_IsBackground_m18798(L_5, 1, /*hidden argument*/NULL);
		Thread_t1122 * L_6 = V_0;
		NullCheck(L_6);
		Thread_Start_m12817(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::.cctor()
extern TypeInfo* Scheduler_t2957_il2cpp_TypeInfo_var;
extern "C" void Scheduler__cctor_m18823 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Scheduler_t2957_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5930);
		s_Il2CppMethodIntialized = true;
	}
	{
		Scheduler_t2957 * L_0 = (Scheduler_t2957 *)il2cpp_codegen_object_new (Scheduler_t2957_il2cpp_TypeInfo_var);
		Scheduler__ctor_m18822(L_0, /*hidden argument*/NULL);
		((Scheduler_t2957_StaticFields*)Scheduler_t2957_il2cpp_TypeInfo_var->static_fields)->___instance_0 = L_0;
		return;
	}
}
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
extern TypeInfo* Scheduler_t2957_il2cpp_TypeInfo_var;
extern "C" Scheduler_t2957 * Scheduler_get_Instance_m18824 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Scheduler_t2957_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5930);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Scheduler_t2957_il2cpp_TypeInfo_var);
		Scheduler_t2957 * L_0 = ((Scheduler_t2957_StaticFields*)Scheduler_t2957_il2cpp_TypeInfo_var->static_fields)->___instance_0;
		return L_0;
	}
}
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
extern "C" void Scheduler_Remove_m18825 (Scheduler_t2957 * __this, Timer_t2718 * ___timer, const MethodInfo* method)
{
	Scheduler_t2957 * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Timer_t2718 * L_0 = ___timer;
		NullCheck(L_0);
		int64_t L_1 = (L_0->___next_run_6);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Timer_t2718 * L_2 = ___timer;
		NullCheck(L_2);
		int64_t L_3 = (L_2->___next_run_6);
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		return;
	}

IL_001a:
	{
		V_0 = __this;
		Scheduler_t2957 * L_4 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		Timer_t2718 * L_5 = ___timer;
		Scheduler_InternalRemove_m18828(__this, L_5, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x33, FINALLY_002c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Scheduler_t2957 * L_6 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
extern "C" void Scheduler_Change_m18826 (Scheduler_t2957 * __this, Timer_t2718 * ___timer, int64_t ___new_next_run, const MethodInfo* method)
{
	Scheduler_t2957 * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		Scheduler_t2957 * L_0 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			Timer_t2718 * L_1 = ___timer;
			Scheduler_InternalRemove_m18828(__this, L_1, /*hidden argument*/NULL);
			int64_t L_2 = ___new_next_run;
			if ((!(((uint64_t)L_2) == ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
			{
				goto IL_0025;
			}
		}

IL_001c:
		{
			Timer_t2718 * L_3 = ___timer;
			int64_t L_4 = ___new_next_run;
			NullCheck(L_3);
			L_3->___next_run_6 = L_4;
			IL2CPP_LEAVE(0x59, FINALLY_0052);
		}

IL_0025:
		{
			Timer_t2718 * L_5 = ___timer;
			NullCheck(L_5);
			bool L_6 = (L_5->___disposed_7);
			if (L_6)
			{
				goto IL_0050;
			}
		}

IL_002d:
		{
			Timer_t2718 * L_7 = ___timer;
			int64_t L_8 = ___new_next_run;
			NullCheck(L_7);
			L_7->___next_run_6 = L_8;
			Timer_t2718 * L_9 = ___timer;
			Scheduler_Add_m18827(__this, L_9, /*hidden argument*/NULL);
			SortedList_t1151 * L_10 = (__this->___list_1);
			NullCheck(L_10);
			Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_10, 0);
			Timer_t2718 * L_12 = ___timer;
			if ((!(((Object_t*)(Object_t *)L_11) == ((Object_t*)(Timer_t2718 *)L_12))))
			{
				goto IL_0050;
			}
		}

IL_004a:
		{
			Monitor_Pulse_m18766(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x59, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Scheduler_t2957 * L_13 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0059:
	{
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
extern TypeInfo* Timer_t2718_il2cpp_TypeInfo_var;
extern "C" void Scheduler_Add_m18827 (Scheduler_t2957 * __this, Timer_t2718 * ___timer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Timer_t2718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5736);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Timer_t2718 * V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		SortedList_t1151 * L_0 = (__this->___list_1);
		Timer_t2718 * L_1 = ___timer;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(36 /* System.Int32 System.Collections.SortedList::IndexOfKey(System.Object) */, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_008c;
		}
	}
	{
		Timer_t2718 * L_4 = ___timer;
		NullCheck(L_4);
		int64_t L_5 = (L_4->___next_run_6);
		if ((((int64_t)((int64_t)((int64_t)((int64_t)std::numeric_limits<int64_t>::max())-(int64_t)L_5))) <= ((int64_t)(((int64_t)((int32_t)20000))))))
		{
			goto IL_002f;
		}
	}
	{
		G_B4_0 = 1;
		goto IL_0030;
	}

IL_002f:
	{
		G_B4_0 = 0;
	}

IL_0030:
	{
		V_1 = G_B4_0;
	}

IL_0031:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		Timer_t2718 * L_8 = ___timer;
		Timer_t2718 * L_9 = L_8;
		NullCheck(L_9);
		int64_t L_10 = (L_9->___next_run_6);
		NullCheck(L_9);
		L_9->___next_run_6 = ((int64_t)((int64_t)L_10+(int64_t)(((int64_t)1))));
		goto IL_0058;
	}

IL_0049:
	{
		Timer_t2718 * L_11 = ___timer;
		Timer_t2718 * L_12 = L_11;
		NullCheck(L_12);
		int64_t L_13 = (L_12->___next_run_6);
		NullCheck(L_12);
		L_12->___next_run_6 = ((int64_t)((int64_t)L_13-(int64_t)(((int64_t)1))));
	}

IL_0058:
	{
		int32_t L_14 = V_0;
		SortedList_t1151 * L_15 = (__this->___list_1);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Collections.SortedList::get_Count() */, L_15);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_008c;
	}

IL_0068:
	{
		SortedList_t1151 * L_17 = (__this->___list_1);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_17, L_18);
		V_2 = ((Timer_t2718 *)Castclass(L_19, Timer_t2718_il2cpp_TypeInfo_var));
		Timer_t2718 * L_20 = V_2;
		NullCheck(L_20);
		int64_t L_21 = (L_20->___next_run_6);
		Timer_t2718 * L_22 = ___timer;
		NullCheck(L_22);
		int64_t L_23 = (L_22->___next_run_6);
		if ((((int64_t)L_21) == ((int64_t)L_23)))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_008c;
	}

IL_008a:
	{
		goto IL_0031;
	}

IL_008c:
	{
		SortedList_t1151 * L_24 = (__this->___list_1);
		Timer_t2718 * L_25 = ___timer;
		Timer_t2718 * L_26 = ___timer;
		NullCheck(L_24);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(28 /* System.Void System.Collections.SortedList::Add(System.Object,System.Object) */, L_24, L_25, L_26);
		return;
	}
}
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
extern "C" int32_t Scheduler_InternalRemove_m18828 (Scheduler_t2957 * __this, Timer_t2718 * ___timer, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		SortedList_t1151 * L_0 = (__this->___list_1);
		Timer_t2718 * L_1 = ___timer;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(36 /* System.Int32 System.Collections.SortedList::IndexOfKey(System.Object) */, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		SortedList_t1151 * L_4 = (__this->___list_1);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_4, L_5);
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
extern TypeInfo* Thread_t1122_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t913_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern TypeInfo* Timer_t2718_il2cpp_TypeInfo_var;
extern TypeInfo* WaitCallback_t2086_il2cpp_TypeInfo_var;
extern const MethodInfo* TimerCallback_Invoke_m18895_MethodInfo_var;
extern "C" void Scheduler_SchedulerThread_m18829 (Scheduler_t2957 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1949);
		ArrayList_t913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1893);
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		Timer_t2718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5736);
		WaitCallback_t2086_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4462);
		TimerCallback_Invoke_m18895_MethodInfo_var = il2cpp_codegen_method_info_from_index(400);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t913 * V_0 = {0};
	int64_t V_1 = 0;
	Scheduler_t2957 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Timer_t2718 * V_5 = {0};
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	bool V_8 = false;
	Timer_t2718 * V_9 = {0};
	int32_t V_10 = 0;
	int64_t V_11 = 0;
	int32_t V_12 = 0;
	int64_t V_13 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1122_il2cpp_TypeInfo_var);
		Thread_t1122 * L_0 = Thread_get_CurrentThread_m5000(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Thread_set_Name_m18800(L_0, (String_t*) &_stringLiteral5665, /*hidden argument*/NULL);
		ArrayList_t913 * L_1 = (ArrayList_t913 *)il2cpp_codegen_object_new (ArrayList_t913_il2cpp_TypeInfo_var);
		ArrayList__ctor_m12793(L_1, ((int32_t)512), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		int64_t L_2 = DateTime_GetTimeMonotonic_m14792(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = __this;
		Scheduler_t2957 * L_3 = V_2;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			SortedList_t1151 * L_4 = (__this->___list_1);
			NullCheck(L_4);
			int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Collections.SortedList::get_Count() */, L_4);
			V_4 = L_5;
			V_3 = 0;
			goto IL_0104;
		}

IL_003c:
		{
			SortedList_t1151 * L_6 = (__this->___list_1);
			int32_t L_7 = V_3;
			NullCheck(L_6);
			Object_t * L_8 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_6, L_7);
			V_5 = ((Timer_t2718 *)Castclass(L_8, Timer_t2718_il2cpp_TypeInfo_var));
			Timer_t2718 * L_9 = V_5;
			NullCheck(L_9);
			int64_t L_10 = (L_9->___next_run_6);
			int64_t L_11 = V_1;
			if ((((int64_t)L_10) <= ((int64_t)L_11)))
			{
				goto IL_005e;
			}
		}

IL_0059:
		{
			goto IL_010c;
		}

IL_005e:
		{
			SortedList_t1151 * L_12 = (__this->___list_1);
			int32_t L_13 = V_3;
			NullCheck(L_12);
			VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_12, L_13);
			int32_t L_14 = V_4;
			V_4 = ((int32_t)((int32_t)L_14-(int32_t)1));
			int32_t L_15 = V_3;
			V_3 = ((int32_t)((int32_t)L_15-(int32_t)1));
			Timer_t2718 * L_16 = V_5;
			NullCheck(L_16);
			TimerCallback_t2958 * L_17 = (L_16->___callback_2);
			IntPtr_t L_18 = { (void*)TimerCallback_Invoke_m18895_MethodInfo_var };
			WaitCallback_t2086 * L_19 = (WaitCallback_t2086 *)il2cpp_codegen_object_new (WaitCallback_t2086_il2cpp_TypeInfo_var);
			WaitCallback__ctor_m12836(L_19, L_17, L_18, /*hidden argument*/NULL);
			Timer_t2718 * L_20 = V_5;
			NullCheck(L_20);
			Object_t * L_21 = (L_20->___state_3);
			ThreadPool_QueueUserWorkItem_m12837(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/NULL);
			Timer_t2718 * L_22 = V_5;
			NullCheck(L_22);
			int64_t L_23 = (L_22->___period_ms_5);
			V_6 = L_23;
			Timer_t2718 * L_24 = V_5;
			NullCheck(L_24);
			int64_t L_25 = (L_24->___due_time_ms_4);
			V_7 = L_25;
			int64_t L_26 = V_6;
			if ((((int64_t)L_26) == ((int64_t)(((int64_t)(-1))))))
			{
				goto IL_00c3;
			}
		}

IL_00ab:
		{
			int64_t L_27 = V_6;
			if (!L_27)
			{
				goto IL_00b5;
			}
		}

IL_00af:
		{
			int64_t L_28 = V_6;
			if ((!(((uint64_t)L_28) == ((uint64_t)(((int64_t)(-1)))))))
			{
				goto IL_00c0;
			}
		}

IL_00b5:
		{
			int64_t L_29 = V_7;
			G_B10_0 = ((((int32_t)((((int64_t)L_29) == ((int64_t)(((int64_t)(-1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_00c1;
		}

IL_00c0:
		{
			G_B10_0 = 0;
		}

IL_00c1:
		{
			G_B12_0 = G_B10_0;
			goto IL_00c4;
		}

IL_00c3:
		{
			G_B12_0 = 1;
		}

IL_00c4:
		{
			V_8 = G_B12_0;
			bool L_30 = V_8;
			if (!L_30)
			{
				goto IL_00dc;
			}
		}

IL_00ca:
		{
			Timer_t2718 * L_31 = V_5;
			NullCheck(L_31);
			L_31->___next_run_6 = ((int64_t)std::numeric_limits<int64_t>::max());
			goto IL_0100;
		}

IL_00dc:
		{
			Timer_t2718 * L_32 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
			int64_t L_33 = DateTime_GetTimeMonotonic_m14792(NULL /*static, unused*/, /*hidden argument*/NULL);
			Timer_t2718 * L_34 = V_5;
			NullCheck(L_34);
			int64_t L_35 = (L_34->___period_ms_5);
			NullCheck(L_32);
			L_32->___next_run_6 = ((int64_t)((int64_t)L_33+(int64_t)((int64_t)((int64_t)(((int64_t)((int32_t)10000)))*(int64_t)L_35))));
			ArrayList_t913 * L_36 = V_0;
			Timer_t2718 * L_37 = V_5;
			NullCheck(L_36);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(26 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_36, L_37);
		}

IL_0100:
		{
			int32_t L_38 = V_3;
			V_3 = ((int32_t)((int32_t)L_38+(int32_t)1));
		}

IL_0104:
		{
			int32_t L_39 = V_3;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_003c;
			}
		}

IL_010c:
		{
			ArrayList_t913 * L_41 = V_0;
			NullCheck(L_41);
			int32_t L_42 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_41);
			V_4 = L_42;
			V_3 = 0;
			goto IL_0132;
		}

IL_0118:
		{
			ArrayList_t913 * L_43 = V_0;
			int32_t L_44 = V_3;
			NullCheck(L_43);
			Object_t * L_45 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(18 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_43, L_44);
			V_9 = ((Timer_t2718 *)Castclass(L_45, Timer_t2718_il2cpp_TypeInfo_var));
			Timer_t2718 * L_46 = V_9;
			Scheduler_Add_m18827(__this, L_46, /*hidden argument*/NULL);
			int32_t L_47 = V_3;
			V_3 = ((int32_t)((int32_t)L_47+(int32_t)1));
		}

IL_0132:
		{
			int32_t L_48 = V_3;
			int32_t L_49 = V_4;
			if ((((int32_t)L_48) < ((int32_t)L_49)))
			{
				goto IL_0118;
			}
		}

IL_0137:
		{
			ArrayList_t913 * L_50 = V_0;
			NullCheck(L_50);
			VirtActionInvoker0::Invoke(27 /* System.Void System.Collections.ArrayList::Clear() */, L_50);
			ArrayList_t913 * L_51 = V_0;
			Scheduler_ShrinkIfNeeded_m18830(__this, L_51, ((int32_t)512), /*hidden argument*/NULL);
			SortedList_t1151 * L_52 = (__this->___list_1);
			NullCheck(L_52);
			int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 System.Collections.SortedList::get_Capacity() */, L_52);
			V_10 = L_53;
			SortedList_t1151 * L_54 = (__this->___list_1);
			NullCheck(L_54);
			int32_t L_55 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Collections.SortedList::get_Count() */, L_54);
			V_4 = L_55;
			int32_t L_56 = V_10;
			if ((((int32_t)L_56) <= ((int32_t)((int32_t)1024))))
			{
				goto IL_0188;
			}
		}

IL_016c:
		{
			int32_t L_57 = V_4;
			if ((((int32_t)L_57) <= ((int32_t)0)))
			{
				goto IL_0188;
			}
		}

IL_0171:
		{
			int32_t L_58 = V_10;
			int32_t L_59 = V_4;
			if ((((int32_t)((int32_t)((int32_t)L_58/(int32_t)L_59))) <= ((int32_t)3)))
			{
				goto IL_0188;
			}
		}

IL_0179:
		{
			SortedList_t1151 * L_60 = (__this->___list_1);
			int32_t L_61 = V_4;
			NullCheck(L_60);
			VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.SortedList::set_Capacity(System.Int32) */, L_60, ((int32_t)((int32_t)L_61*(int32_t)2)));
		}

IL_0188:
		{
			V_11 = ((int64_t)std::numeric_limits<int64_t>::max());
			SortedList_t1151 * L_62 = (__this->___list_1);
			NullCheck(L_62);
			int32_t L_63 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Collections.SortedList::get_Count() */, L_62);
			if ((((int32_t)L_63) <= ((int32_t)0)))
			{
				goto IL_01b9;
			}
		}

IL_01a1:
		{
			SortedList_t1151 * L_64 = (__this->___list_1);
			NullCheck(L_64);
			Object_t * L_65 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(40 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_64, 0);
			NullCheck(((Timer_t2718 *)Castclass(L_65, Timer_t2718_il2cpp_TypeInfo_var)));
			int64_t L_66 = (((Timer_t2718 *)Castclass(L_65, Timer_t2718_il2cpp_TypeInfo_var))->___next_run_6);
			V_11 = L_66;
		}

IL_01b9:
		{
			V_12 = (-1);
			int64_t L_67 = V_11;
			if ((((int64_t)L_67) == ((int64_t)((int64_t)std::numeric_limits<int64_t>::max()))))
			{
				goto IL_01e7;
			}
		}

IL_01c9:
		{
			int64_t L_68 = V_11;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
			int64_t L_69 = DateTime_GetTimeMonotonic_m14792(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_13 = ((int64_t)((int64_t)L_68-(int64_t)L_69));
			int64_t L_70 = V_13;
			V_12 = (((int32_t)((int64_t)((int64_t)L_70/(int64_t)(((int64_t)((int32_t)10000)))))));
			int32_t L_71 = V_12;
			if ((((int32_t)L_71) >= ((int32_t)0)))
			{
				goto IL_01e7;
			}
		}

IL_01e4:
		{
			V_12 = 0;
		}

IL_01e7:
		{
			int32_t L_72 = V_12;
			Monitor_Wait_m18768(NULL /*static, unused*/, __this, L_72, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x1F9, FINALLY_01f2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_01f2;
	}

FINALLY_01f2:
	{ // begin finally (depth: 1)
		Scheduler_t2957 * L_73 = V_2;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(498)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(498)
	{
		IL2CPP_JUMP_TBL(0x1F9, IL_01f9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_01f9:
	{
		goto IL_001a;
	}
}
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.ArrayList,System.Int32)
extern "C" void Scheduler_ShrinkIfNeeded_m18830 (Scheduler_t2957 * __this, ArrayList_t913 * ___list, int32_t ___initial, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayList_t913 * L_0 = ___list;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Capacity() */, L_0);
		V_0 = L_1;
		ArrayList_t913 * L_2 = ___list;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_2);
		V_1 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = ___initial;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_7/(int32_t)L_8))) <= ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		ArrayList_t913 * L_9 = ___list;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.ArrayList::set_Capacity(System.Int32) */, L_9, ((int32_t)((int32_t)L_10*(int32_t)2)));
	}

IL_0025:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"



// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.TimeSpan,System.TimeSpan)
extern "C" void Timer__ctor_m18831 (Timer_t2718 * __this, TimerCallback_t2958 * ___callback, Object_t * ___state, TimeSpan_t1129  ___dueTime, TimeSpan_t1129  ___period, const MethodInfo* method)
{
	{
		MarshalByRefObject__ctor_m5095(__this, /*hidden argument*/NULL);
		TimerCallback_t2958 * L_0 = ___callback;
		Object_t * L_1 = ___state;
		double L_2 = TimeSpan_get_TotalMilliseconds_m15259((&___dueTime), /*hidden argument*/NULL);
		double L_3 = TimeSpan_get_TotalMilliseconds_m15259((&___period), /*hidden argument*/NULL);
		Timer_Init_m18833(__this, L_0, L_1, (((int64_t)L_2)), (((int64_t)L_3)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer::.cctor()
extern TypeInfo* Scheduler_t2957_il2cpp_TypeInfo_var;
extern TypeInfo* Timer_t2718_il2cpp_TypeInfo_var;
extern "C" void Timer__cctor_m18832 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Scheduler_t2957_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5930);
		Timer_t2718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5736);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Scheduler_t2957_il2cpp_TypeInfo_var);
		Scheduler_t2957 * L_0 = Scheduler_get_Instance_m18824(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Timer_t2718_StaticFields*)Timer_t2718_il2cpp_TypeInfo_var->static_fields)->___scheduler_1 = L_0;
		return;
	}
}
// System.Void System.Threading.Timer::Init(System.Threading.TimerCallback,System.Object,System.Int64,System.Int64)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void Timer_Init_m18833 (Timer_t2718 * __this, TimerCallback_t2958 * ___callback, Object_t * ___state, int64_t ___dueTime, int64_t ___period, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimerCallback_t2958 * L_0 = ___callback;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5660, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TimerCallback_t2958 * L_2 = ___callback;
		__this->___callback_2 = L_2;
		Object_t * L_3 = ___state;
		__this->___state_3 = L_3;
		int64_t L_4 = ___dueTime;
		int64_t L_5 = ___period;
		Timer_Change_m18835(__this, L_4, L_5, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer::Dispose()
extern TypeInfo* Timer_t2718_il2cpp_TypeInfo_var;
extern "C" void Timer_Dispose_m18834 (Timer_t2718 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Timer_t2718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5736);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___disposed_7);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->___disposed_7 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(Timer_t2718_il2cpp_TypeInfo_var);
		Scheduler_t2957 * L_1 = ((Timer_t2718_StaticFields*)Timer_t2718_il2cpp_TypeInfo_var->static_fields)->___scheduler_1;
		NullCheck(L_1);
		Scheduler_Remove_m18825(L_1, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern TypeInfo* Timer_t2718_il2cpp_TypeInfo_var;
extern "C" bool Timer_Change_m18835 (Timer_t2718 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		Timer_t2718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5736);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	{
		int64_t L_0 = ___dueTime;
		if ((((int64_t)L_0) <= ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2))))))))
		{
			goto IL_0011;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_1, (String_t*) &_stringLiteral5661, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int64_t L_2 = ___period;
		if ((((int64_t)L_2) <= ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2))))))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_3 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_3, (String_t*) &_stringLiteral5662, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int64_t L_4 = ___dueTime;
		if ((((int64_t)L_4) >= ((int64_t)(((int64_t)(-1))))))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_5 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_5, (String_t*) &_stringLiteral5663, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0032:
	{
		int64_t L_6 = ___period;
		if ((((int64_t)L_6) >= ((int64_t)(((int64_t)(-1))))))
		{
			goto IL_0042;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_7 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_7, (String_t*) &_stringLiteral5664, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0042:
	{
		bool L_8 = (__this->___disposed_7);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		return 0;
	}

IL_004c:
	{
		int64_t L_9 = ___dueTime;
		__this->___due_time_ms_4 = L_9;
		int64_t L_10 = ___period;
		__this->___period_ms_5 = L_10;
		int64_t L_11 = ___dueTime;
		if (L_11)
		{
			goto IL_0062;
		}
	}
	{
		V_0 = (((int64_t)0));
		goto IL_008e;
	}

IL_0062:
	{
		int64_t L_12 = ___dueTime;
		if ((((int64_t)L_12) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_007f;
		}
	}
	{
		V_0 = ((int64_t)std::numeric_limits<int64_t>::max());
		bool L_13 = ___first;
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		int64_t L_14 = V_0;
		__this->___next_run_6 = L_14;
		return 1;
	}

IL_007d:
	{
		goto IL_008e;
	}

IL_007f:
	{
		int64_t L_15 = ___dueTime;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		int64_t L_16 = DateTime_GetTimeMonotonic_m14792(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_15*(int64_t)(((int64_t)((int32_t)10000)))))+(int64_t)L_16));
	}

IL_008e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Timer_t2718_il2cpp_TypeInfo_var);
		Scheduler_t2957 * L_17 = ((Timer_t2718_StaticFields*)Timer_t2718_il2cpp_TypeInfo_var->static_fields)->___scheduler_1;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		Scheduler_Change_m18826(L_17, __this, L_18, /*hidden argument*/NULL);
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

// Microsoft.Win32.SafeHandles.SafeWaitHandle
#include "mscorlib_Microsoft_Win32_SafeHandles_SafeWaitHandle.h"
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandle.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"
// Microsoft.Win32.SafeHandles.SafeWaitHandle
#include "mscorlib_Microsoft_Win32_SafeHandles_SafeWaitHandleMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void System.Threading.WaitHandle::.ctor()
extern "C" void WaitHandle__ctor_m18836 (WaitHandle_t1351 * __this, const MethodInfo* method)
{
	{
		MarshalByRefObject__ctor_m5095(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.WaitHandle::.cctor()
extern TypeInfo* WaitHandle_t1351_il2cpp_TypeInfo_var;
extern "C" void WaitHandle__cctor_m18837 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandle_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2832);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = IntPtr_op_Explicit_m12839(NULL /*static, unused*/, (-1), /*hidden argument*/NULL);
		((WaitHandle_t1351_StaticFields*)WaitHandle_t1351_il2cpp_TypeInfo_var->static_fields)->___InvalidHandle_3 = L_0;
		return;
	}
}
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
extern "C" void WaitHandle_System_IDisposable_Dispose_m18838 (WaitHandle_t1351 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void System.Threading.WaitHandle::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m3572(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.WaitHandle::CheckArray(System.Threading.WaitHandle[],System.Boolean)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t356_il2cpp_TypeInfo_var;
extern "C" void WaitHandle_CheckArray_m18839 (Object_t * __this /* static, unused */, WaitHandleU5BU5D_t3006* ___handles, bool ___waitAll, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		NotSupportedException_t303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		ArgumentException_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	WaitHandle_t1351 * V_1 = {0};
	WaitHandleU5BU5D_t3006* V_2 = {0};
	int32_t V_3 = 0;
	{
		WaitHandleU5BU5D_t3006* L_0 = ___handles;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3230(L_1, (String_t*) &_stringLiteral5666, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		WaitHandleU5BU5D_t3006* L_2 = ___handles;
		NullCheck(L_2);
		V_0 = (((int32_t)(((Array_t *)L_2)->max_length)));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)64))))
		{
			goto IL_0022;
		}
	}
	{
		NotSupportedException_t303 * L_4 = (NotSupportedException_t303 *)il2cpp_codegen_object_new (NotSupportedException_t303_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6327(L_4, (String_t*) &_stringLiteral5667, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		WaitHandleU5BU5D_t3006* L_5 = ___handles;
		V_2 = L_5;
		V_3 = 0;
		goto IL_005b;
	}

IL_0028:
	{
		WaitHandleU5BU5D_t3006* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(WaitHandle_t1351 **)(WaitHandle_t1351 **)SZArrayLdElema(L_6, L_8));
		WaitHandle_t1351 * L_9 = V_1;
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		ArgumentNullException_t692 * L_10 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4991(L_10, (String_t*) &_stringLiteral5666, (String_t*) &_stringLiteral5668, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003f:
	{
		WaitHandle_t1351 * L_11 = V_1;
		NullCheck(L_11);
		SafeWaitHandle_t2323 * L_12 = (L_11->___safe_wait_handle_2);
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		ArgumentException_t356 * L_13 = (ArgumentException_t356 *)il2cpp_codegen_object_new (ArgumentException_t356_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m6326(L_13, (String_t*) &_stringLiteral5669, (String_t*) &_stringLiteral5670, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0057:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_15 = V_3;
		WaitHandleU5BU5D_t3006* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0028;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Threading.WaitHandle::WaitAny_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)
extern "C" int32_t WaitHandle_WaitAny_internal_m18840 (Object_t * __this /* static, unused */, WaitHandleU5BU5D_t3006* ___handles, int32_t ___ms, bool ___exitContext, const MethodInfo* method)
{
	typedef int32_t (*WaitHandle_WaitAny_internal_m18840_ftn) (WaitHandleU5BU5D_t3006*, int32_t, bool);
	static WaitHandle_WaitAny_internal_m18840_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WaitHandle_WaitAny_internal_m18840_ftn)il2cpp_codegen_resolve_icall ("System.Threading.WaitHandle::WaitAny_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)");
	return _il2cpp_icall_func(___handles, ___ms, ___exitContext);
}
// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.TimeSpan,System.Boolean)
extern TypeInfo* WaitHandle_t1351_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" int32_t WaitHandle_WaitAny_m18841 (Object_t * __this /* static, unused */, WaitHandleU5BU5D_t3006* ___waitHandles, TimeSpan_t1129  ___timeout, bool ___exitContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandle_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2832);
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		WaitHandleU5BU5D_t3006* L_0 = ___waitHandles;
		IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t1351_il2cpp_TypeInfo_var);
		WaitHandle_CheckArray_m18839(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		double L_1 = TimeSpan_get_TotalMilliseconds_m15259((&___timeout), /*hidden argument*/NULL);
		V_0 = (((int64_t)L_1));
		int64_t L_2 = V_0;
		if ((((int64_t)L_2) < ((int64_t)(((int64_t)(-1))))))
		{
			goto IL_001e;
		}
	}
	{
		int64_t L_3 = V_0;
		if ((((int64_t)L_3) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0029;
		}
	}

IL_001e:
	{
		ArgumentOutOfRangeException_t694 * L_4 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_4, (String_t*) &_stringLiteral3097, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			bool L_5 = ___exitContext;
			if (!L_5)
			{
				goto IL_0031;
			}
		}

IL_002c:
		{
			SynchronizationAttribute_ExitContext_m17148(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_0031:
		{
			WaitHandleU5BU5D_t3006* L_6 = ___waitHandles;
			int64_t L_7 = V_0;
			bool L_8 = ___exitContext;
			IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t1351_il2cpp_TypeInfo_var);
			int32_t L_9 = WaitHandle_WaitAny_internal_m18840(NULL /*static, unused*/, L_6, (((int32_t)L_7)), L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			IL2CPP_LEAVE(0x48, FINALLY_003f);
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			bool L_10 = ___exitContext;
			if (!L_10)
			{
				goto IL_0047;
			}
		}

IL_0042:
		{
			SynchronizationAttribute_EnterContext_m17149(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_0047:
		{
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0048:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.IntPtr System.Threading.WaitHandle::get_Handle()
extern "C" IntPtr_t WaitHandle_get_Handle_m18842 (WaitHandle_t1351 * __this, const MethodInfo* method)
{
	{
		SafeWaitHandle_t2323 * L_0 = (__this->___safe_wait_handle_2);
		NullCheck(L_0);
		IntPtr_t L_1 = SafeHandle_DangerousGetHandle_m17004(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
extern TypeInfo* WaitHandle_t1351_il2cpp_TypeInfo_var;
extern TypeInfo* SafeWaitHandle_t2323_il2cpp_TypeInfo_var;
extern "C" void WaitHandle_set_Handle_m18843 (WaitHandle_t1351 * __this, IntPtr_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandle_t1351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2832);
		SafeWaitHandle_t2323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5931);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t1351_il2cpp_TypeInfo_var);
		IntPtr_t L_1 = ((WaitHandle_t1351_StaticFields*)WaitHandle_t1351_il2cpp_TypeInfo_var->static_fields)->___InvalidHandle_3;
		bool L_2 = IntPtr_op_Equality_m3285(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t1351_il2cpp_TypeInfo_var);
		IntPtr_t L_3 = ((WaitHandle_t1351_StaticFields*)WaitHandle_t1351_il2cpp_TypeInfo_var->static_fields)->___InvalidHandle_3;
		SafeWaitHandle_t2323 * L_4 = (SafeWaitHandle_t2323 *)il2cpp_codegen_object_new (SafeWaitHandle_t2323_il2cpp_TypeInfo_var);
		SafeWaitHandle__ctor_m13833(L_4, L_3, 0, /*hidden argument*/NULL);
		__this->___safe_wait_handle_2 = L_4;
		goto IL_002d;
	}

IL_0020:
	{
		IntPtr_t L_5 = ___value;
		SafeWaitHandle_t2323 * L_6 = (SafeWaitHandle_t2323 *)il2cpp_codegen_object_new (SafeWaitHandle_t2323_il2cpp_TypeInfo_var);
		SafeWaitHandle__ctor_m13833(L_6, L_5, 1, /*hidden argument*/NULL);
		__this->___safe_wait_handle_2 = L_6;
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
extern "C" bool WaitHandle_WaitOne_internal_m18844 (WaitHandle_t1351 * __this, IntPtr_t ___handle, int32_t ___ms, bool ___exitContext, const MethodInfo* method)
{
	typedef bool (*WaitHandle_WaitOne_internal_m18844_ftn) (WaitHandle_t1351 *, IntPtr_t, int32_t, bool);
	static WaitHandle_WaitOne_internal_m18844_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WaitHandle_WaitOne_internal_m18844_ftn)il2cpp_codegen_resolve_icall ("System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)");
	return _il2cpp_icall_func(__this, ___handle, ___ms, ___exitContext);
}
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
extern "C" void WaitHandle_Dispose_m18845 (WaitHandle_t1351 * __this, bool ___explicitDisposing, const MethodInfo* method)
{
	WaitHandle_t1351 * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___disposed_4);
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		__this->___disposed_4 = 1;
		SafeWaitHandle_t2323 * L_1 = (__this->___safe_wait_handle_2);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		V_0 = __this;
		WaitHandle_t1351 * L_2 = V_0;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			SafeWaitHandle_t2323 * L_3 = (__this->___safe_wait_handle_2);
			if (!L_3)
			{
				goto IL_0033;
			}
		}

IL_0028:
		{
			SafeWaitHandle_t2323 * L_4 = (__this->___safe_wait_handle_2);
			NullCheck(L_4);
			VirtActionInvoker0::Invoke(4 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose() */, L_4);
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		WaitHandle_t1351 * L_5 = V_0;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_003c:
	{
		return;
	}
}
// System.Boolean System.Threading.WaitHandle::WaitOne()
extern "C" bool WaitHandle_WaitOne_m18846 (WaitHandle_t1351 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		WaitHandle_CheckDisposed_m18848(__this, /*hidden argument*/NULL);
		V_0 = 0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			SafeWaitHandle_t2323 * L_0 = (__this->___safe_wait_handle_2);
			NullCheck(L_0);
			SafeHandle_DangerousAddRef_m17003(L_0, (&V_0), /*hidden argument*/NULL);
			SafeWaitHandle_t2323 * L_1 = (__this->___safe_wait_handle_2);
			NullCheck(L_1);
			IntPtr_t L_2 = SafeHandle_DangerousGetHandle_m17004(L_1, /*hidden argument*/NULL);
			bool L_3 = WaitHandle_WaitOne_internal_m18844(__this, L_2, (-1), 0, /*hidden argument*/NULL);
			V_1 = L_3;
			IL2CPP_LEAVE(0x3C, FINALLY_002d);
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_0;
			if (!L_4)
			{
				goto IL_003b;
			}
		}

IL_0030:
		{
			SafeWaitHandle_t2323 * L_5 = (__this->___safe_wait_handle_2);
			NullCheck(L_5);
			SafeHandle_DangerousRelease_m17005(L_5, /*hidden argument*/NULL);
		}

IL_003b:
		{
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_003c:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
extern TypeInfo* ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var;
extern "C" bool WaitHandle_WaitOne_m18847 (WaitHandle_t1351 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(984);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		WaitHandle_CheckDisposed_m18848(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___millisecondsTimeout;
		if ((((int32_t)L_0) >= ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t694 * L_1 = (ArgumentOutOfRangeException_t694 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t694_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m5002(L_1, (String_t*) &_stringLiteral5648, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		V_0 = 0;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = ___exitContext;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_001a:
		{
			SynchronizationAttribute_ExitContext_m17148(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_001f:
		{
			SafeWaitHandle_t2323 * L_3 = (__this->___safe_wait_handle_2);
			NullCheck(L_3);
			SafeHandle_DangerousAddRef_m17003(L_3, (&V_0), /*hidden argument*/NULL);
			SafeWaitHandle_t2323 * L_4 = (__this->___safe_wait_handle_2);
			NullCheck(L_4);
			IntPtr_t L_5 = SafeHandle_DangerousGetHandle_m17004(L_4, /*hidden argument*/NULL);
			int32_t L_6 = ___millisecondsTimeout;
			bool L_7 = ___exitContext;
			bool L_8 = WaitHandle_WaitOne_internal_m18844(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
			V_1 = L_8;
			IL2CPP_LEAVE(0x5B, FINALLY_0044);
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			bool L_9 = ___exitContext;
			if (!L_9)
			{
				goto IL_004c;
			}
		}

IL_0047:
		{
			SynchronizationAttribute_EnterContext_m17149(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_004c:
		{
			bool L_10 = V_0;
			if (!L_10)
			{
				goto IL_005a;
			}
		}

IL_004f:
		{
			SafeWaitHandle_t2323 * L_11 = (__this->___safe_wait_handle_2);
			NullCheck(L_11);
			SafeHandle_DangerousRelease_m17005(L_11, /*hidden argument*/NULL);
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_005b:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Void System.Threading.WaitHandle::CheckDisposed()
extern TypeInfo* ObjectDisposedException_t1359_il2cpp_TypeInfo_var;
extern "C" void WaitHandle_CheckDisposed_m18848 (WaitHandle_t1351 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___disposed_4);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		SafeWaitHandle_t2323 * L_1 = (__this->___safe_wait_handle_2);
		if (L_1)
		{
			goto IL_0021;
		}
	}

IL_0010:
	{
		Type_t * L_2 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_2);
		ObjectDisposedException_t1359 * L_4 = (ObjectDisposedException_t1359 *)il2cpp_codegen_object_new (ObjectDisposedException_t1359_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m6355(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		return;
	}
}
// System.Void System.Threading.WaitHandle::Finalize()
extern "C" void WaitHandle_Finalize_m18849 (WaitHandle_t1351 * __this, const MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void System.Threading.WaitHandle::Dispose(System.Boolean) */, __this, 0);
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
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_LinkMethodDeclarations.h"



// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"



// System.Void System.Collections.Generic.KeyNotFoundException::.ctor()
extern "C" void KeyNotFoundException__ctor_m18850 (KeyNotFoundException_t2960 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m4993(__this, (String_t*) &_stringLiteral5680, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void KeyNotFoundException__ctor_m18851 (KeyNotFoundException_t2960 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t669 * L_0 = ___info;
		StreamingContext_t670  L_1 = ___context;
		SystemException__ctor_m4994(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Math.Prime.PrimalityTest
#include "mscorlib_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Math.Prime.PrimalityTest
#include "mscorlib_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// Mono.Math.BigInteger
#include "mscorlib_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern "C" void PrimalityTest__ctor_m18852 (PrimalityTest_t2961 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTest_Invoke_m18853 (PrimalityTest_t2961 * __this, BigInteger_t2346 * ___bi, int32_t ___confidence, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m18853((PrimalityTest_t2961 *)__this->___prev_9,___bi, ___confidence, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t2346 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t2346 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t2961(Il2CppObject* delegate, BigInteger_t2346 * ___bi, int32_t ___confidence)
{
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t2346 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern TypeInfo* ConfidenceFactor_t2349_il2cpp_TypeInfo_var;
extern "C" Object_t * PrimalityTest_BeginInvoke_m18854 (PrimalityTest_t2961 * __this, BigInteger_t2346 * ___bi, int32_t ___confidence, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfidenceFactor_t2349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5932);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(ConfidenceFactor_t2349_il2cpp_TypeInfo_var, &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern "C" bool PrimalityTest_EndInvoke_m18855 (PrimalityTest_t2961 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializer.h"
#ifndef _MSC_VER
#else
#endif
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializerMethodDeclarations.h"



// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C" void AppDomainInitializer__ctor_m18856 (AppDomainInitializer_t2415 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C" void AppDomainInitializer_Invoke_m18857 (AppDomainInitializer_t2415 * __this, StringU5BU5D_t258* ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AppDomainInitializer_Invoke_m18857((AppDomainInitializer_t2415 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, StringU5BU5D_t258* ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, StringU5BU5D_t258* ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t2415(Il2CppObject* delegate, StringU5BU5D_t258* ___args)
{
	typedef void (STDCALL *native_function_ptr_type)(char**);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	char** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_string_array(___args);

	// Native function invocation
	_il2cpp_pinvoke_func(____args_marshaled);

	// Marshaling cleanup of parameter '___args' native representation
	if (___args != NULL) il2cpp_codegen_marshal_free_string_array((void**)____args_marshaled, ((Il2CppCodeGenArray*)___args)->max_length);
	____args_marshaled = NULL;

}
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m18858 (AppDomainInitializer_t2415 * __this, StringU5BU5D_t258* ___args, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C" void AppDomainInitializer_EndInvoke_m18859 (AppDomainInitializer_t2415 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandlerMethodDeclarations.h"

// System.AssemblyLoadEventArgs
#include "mscorlib_System_AssemblyLoadEventArgs.h"


// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AssemblyLoadEventHandler__ctor_m18860 (AssemblyLoadEventHandler_t2411 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern "C" void AssemblyLoadEventHandler_Invoke_m18861 (AssemblyLoadEventHandler_t2411 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t2418 * ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AssemblyLoadEventHandler_Invoke_m18861((AssemblyLoadEventHandler_t2411 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, AssemblyLoadEventArgs_t2418 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, AssemblyLoadEventArgs_t2418 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, AssemblyLoadEventArgs_t2418 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t2411(Il2CppObject* delegate, Object_t * ___sender, AssemblyLoadEventArgs_t2418 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * AssemblyLoadEventHandler_BeginInvoke_m18862 (AssemblyLoadEventHandler_t2411 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t2418 * ___args, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void AssemblyLoadEventHandler_EndInvoke_m18863 (AssemblyLoadEventHandler_t2411 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ConsoleCancelEventHandler
#include "mscorlib_System_ConsoleCancelEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.ConsoleCancelEventHandler
#include "mscorlib_System_ConsoleCancelEventHandlerMethodDeclarations.h"

// System.ConsoleCancelEventArgs
#include "mscorlib_System_ConsoleCancelEventArgs.h"


// System.Void System.ConsoleCancelEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ConsoleCancelEventHandler__ctor_m18864 (ConsoleCancelEventHandler_t2427 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.ConsoleCancelEventHandler::Invoke(System.Object,System.ConsoleCancelEventArgs)
extern "C" void ConsoleCancelEventHandler_Invoke_m18865 (ConsoleCancelEventHandler_t2427 * __this, Object_t * ___sender, ConsoleCancelEventArgs_t2428 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ConsoleCancelEventHandler_Invoke_m18865((ConsoleCancelEventHandler_t2427 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, ConsoleCancelEventArgs_t2428 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, ConsoleCancelEventArgs_t2428 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, ConsoleCancelEventArgs_t2428 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ConsoleCancelEventHandler_t2427(Il2CppObject* delegate, Object_t * ___sender, ConsoleCancelEventArgs_t2428 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.ConsoleCancelEventHandler::BeginInvoke(System.Object,System.ConsoleCancelEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ConsoleCancelEventHandler_BeginInvoke_m18866 (ConsoleCancelEventHandler_t2427 * __this, Object_t * ___sender, ConsoleCancelEventArgs_t2428 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.ConsoleCancelEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ConsoleCancelEventHandler_EndInvoke_m18867 (ConsoleCancelEventHandler_t2427 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.EventHandler
#include "mscorlib_System_EventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"

// System.EventArgs
#include "mscorlib_System_EventArgs.h"


// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandler__ctor_m12778 (EventHandler_t1926 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void EventHandler_Invoke_m18868 (EventHandler_t1926 * __this, Object_t * ___sender, EventArgs_t912 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandler_Invoke_m18868((EventHandler_t1926 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, EventArgs_t912 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, EventArgs_t912 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, EventArgs_t912 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_EventHandler_t1926(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t912 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandler_BeginInvoke_m18869 (EventHandler_t1926 * __this, Object_t * ___sender, EventArgs_t912 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_EndInvoke_m18870 (EventHandler_t1926 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"

// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgs.h"


// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m18871 (ResolveEventHandler_t2412 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1120 * ResolveEventHandler_Invoke_m18872 (ResolveEventHandler_t2412 * __this, Object_t * ___sender, ResolveEventArgs_t2479 * ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResolveEventHandler_Invoke_m18872((ResolveEventHandler_t2412 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Assembly_t1120 * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, ResolveEventArgs_t2479 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Assembly_t1120 * (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, ResolveEventArgs_t2479 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Assembly_t1120 * (*FunctionPointerType) (Object_t * __this, ResolveEventArgs_t2479 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Assembly_t1120 * pinvoke_delegate_wrapper_ResolveEventHandler_t2412(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t2479 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m18873 (ResolveEventHandler_t2412 * __this, Object_t * ___sender, ResolveEventArgs_t2479 * ___args, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1120 * ResolveEventHandler_EndInvoke_m18874 (ResolveEventHandler_t2412 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Assembly_t1120 *)__result;
}
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"

// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"


// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UnhandledExceptionEventHandler__ctor_m18875 (UnhandledExceptionEventHandler_t2413 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" void UnhandledExceptionEventHandler_Invoke_m18876 (UnhandledExceptionEventHandler_t2413 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t2498 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnhandledExceptionEventHandler_Invoke_m18876((UnhandledExceptionEventHandler_t2413 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t2498 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t2498 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, UnhandledExceptionEventArgs_t2498 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t2413(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t2498 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m18877 (UnhandledExceptionEventHandler_t2413 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t2498 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m18878 (UnhandledExceptionEventHandler_t2413 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilter.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilterMethodDeclarations.h"

// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"


// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern "C" void MemberFilter__ctor_m18879 (MemberFilter_t2302 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern "C" bool MemberFilter_Invoke_m18880 (MemberFilter_t2302 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MemberFilter_Invoke_m18880((MemberFilter_t2302 *)__this->___prev_9,___m, ___filterCriteria, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_MemberFilter_t2302(Il2CppObject* delegate, MemberInfo_t * ___m, Object_t * ___filterCriteria)
{
	// Marshaling of parameter '___m' to native representation
	MemberInfo_t * ____m_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Reflection.MemberInfo'."));
}
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * MemberFilter_BeginInvoke_m18881 (MemberFilter_t2302 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___m;
	__d_args[1] = ___filterCriteria;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
extern "C" bool MemberFilter_EndInvoke_m18882 (MemberFilter_t2302 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilter.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilterMethodDeclarations.h"



// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
extern "C" void TypeFilter__ctor_m18883 (TypeFilter_t2594 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
extern "C" bool TypeFilter_Invoke_m18884 (TypeFilter_t2594 * __this, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TypeFilter_Invoke_m18884((TypeFilter_t2594 *)__this->___prev_9,___m, ___filterCriteria, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_TypeFilter_t2594(Il2CppObject* delegate, Type_t * ___m, Object_t * ___filterCriteria)
{
	// Marshaling of parameter '___m' to native representation
	Type_t * ____m_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Type'."));
}
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * TypeFilter_BeginInvoke_m18885 (TypeFilter_t2594 * __this, Type_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___m;
	__d_args[1] = ___filterCriteria;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
extern "C" bool TypeFilter_EndInvoke_m18886 (TypeFilter_t2594 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"


// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern "C" void HeaderHandler__ctor_m18887 (HeaderHandler_t2963 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern "C" Object_t * HeaderHandler_Invoke_m18888 (HeaderHandler_t2963 * __this, HeaderU5BU5D_t2962* ___headers, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HeaderHandler_Invoke_m18888((HeaderHandler_t2963 *)__this->___prev_9,___headers, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, HeaderU5BU5D_t2962* ___headers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, HeaderU5BU5D_t2962* ___headers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_HeaderHandler_t2963(Il2CppObject* delegate, HeaderU5BU5D_t2962* ___headers)
{
	// Marshaling of parameter '___headers' to native representation
	HeaderU5BU5D_t2962* ____headers_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Messaging.Header[]'."));
}
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern "C" Object_t * HeaderHandler_BeginInvoke_m18889 (HeaderHandler_t2963 * __this, HeaderU5BU5D_t2962* ___headers, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___headers;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern "C" Object_t * HeaderHandler_EndInvoke_m18890 (HeaderHandler_t2963 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadStart__ctor_m12815 (ThreadStart_t2238 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.ThreadStart::Invoke()
extern "C" void ThreadStart_Invoke_m18891 (ThreadStart_t2238 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ThreadStart_Invoke_m18891((ThreadStart_t2238 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ThreadStart_t2238(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ThreadStart_BeginInvoke_m18892 (ThreadStart_t2238 * __this, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
extern "C" void ThreadStart_EndInvoke_m18893 (ThreadStart_t2238 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
extern "C" void TimerCallback__ctor_m18894 (TimerCallback_t2958 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
extern "C" void TimerCallback_Invoke_m18895 (TimerCallback_t2958 * __this, Object_t * ___state, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TimerCallback_Invoke_m18895((TimerCallback_t2958 *)__this->___prev_9,___state, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_TimerCallback_t2958(Il2CppObject* delegate, Object_t * ___state)
{
	// Marshaling of parameter '___state' to native representation
	Object_t * ____state_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.TimerCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * TimerCallback_BeginInvoke_m18896 (TimerCallback_t2958 * __this, Object_t * ___state, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___state;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.TimerCallback::EndInvoke(System.IAsyncResult)
extern "C" void TimerCallback_EndInvoke_m18897 (TimerCallback_t2958 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern "C" void WaitCallback__ctor_m12836 (WaitCallback_t2086 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
extern "C" void WaitCallback_Invoke_m18898 (WaitCallback_t2086 * __this, Object_t * ___state, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WaitCallback_Invoke_m18898((WaitCallback_t2086 *)__this->___prev_9,___state, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WaitCallback_t2086(Il2CppObject* delegate, Object_t * ___state)
{
	// Marshaling of parameter '___state' to native representation
	Object_t * ____state_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * WaitCallback_BeginInvoke_m18899 (WaitCallback_t2086 * __this, Object_t * ___state, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___state;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
extern "C" void WaitCallback_EndInvoke_m18900 (WaitCallback_t2086 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.WaitOrTimerCallback::.ctor(System.Object,System.IntPtr)
extern "C" void WaitOrTimerCallback__ctor_m18901 (WaitOrTimerCallback_t2949 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.WaitOrTimerCallback::Invoke(System.Object,System.Boolean)
extern "C" void WaitOrTimerCallback_Invoke_m18902 (WaitOrTimerCallback_t2949 * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WaitOrTimerCallback_Invoke_m18902((WaitOrTimerCallback_t2949 *)__this->___prev_9,___state, ___timedOut, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state, ___timedOut,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state, ___timedOut,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___timedOut, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___state, ___timedOut,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WaitOrTimerCallback_t2949(Il2CppObject* delegate, Object_t * ___state, bool ___timedOut)
{
	// Marshaling of parameter '___state' to native representation
	Object_t * ____state_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.WaitOrTimerCallback::BeginInvoke(System.Object,System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern "C" Object_t * WaitOrTimerCallback_BeginInvoke_m18903 (WaitOrTimerCallback_t2949 * __this, Object_t * ___state, bool ___timedOut, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___state;
	__d_args[1] = Box(Boolean_t311_il2cpp_TypeInfo_var, &___timedOut);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.WaitOrTimerCallback::EndInvoke(System.IAsyncResult)
extern "C" void WaitOrTimerCallback_EndInvoke_m18904 (WaitOrTimerCallback_t2949 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void U24ArrayTypeU2452_t2964_marshal(const U24ArrayTypeU2452_t2964& unmarshaled, U24ArrayTypeU2452_t2964_marshaled& marshaled)
{
}
void U24ArrayTypeU2452_t2964_marshal_back(const U24ArrayTypeU2452_t2964_marshaled& marshaled, U24ArrayTypeU2452_t2964& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void U24ArrayTypeU2452_t2964_marshal_cleanup(U24ArrayTypeU2452_t2964_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void U24ArrayTypeU2424_t2965_marshal(const U24ArrayTypeU2424_t2965& unmarshaled, U24ArrayTypeU2424_t2965_marshaled& marshaled)
{
}
void U24ArrayTypeU2424_t2965_marshal_back(const U24ArrayTypeU2424_t2965_marshaled& marshaled, U24ArrayTypeU2424_t2965& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void U24ArrayTypeU2424_t2965_marshal_cleanup(U24ArrayTypeU2424_t2965_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void U24ArrayTypeU2416_t2966_marshal(const U24ArrayTypeU2416_t2966& unmarshaled, U24ArrayTypeU2416_t2966_marshaled& marshaled)
{
}
void U24ArrayTypeU2416_t2966_marshal_back(const U24ArrayTypeU2416_t2966_marshaled& marshaled, U24ArrayTypeU2416_t2966& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void U24ArrayTypeU2416_t2966_marshal_cleanup(U24ArrayTypeU2416_t2966_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void U24ArrayTypeU24120_t2967_marshal(const U24ArrayTypeU24120_t2967& unmarshaled, U24ArrayTypeU24120_t2967_marshaled& marshaled)
{
}
void U24ArrayTypeU24120_t2967_marshal_back(const U24ArrayTypeU24120_t2967_marshaled& marshaled, U24ArrayTypeU24120_t2967& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void U24ArrayTypeU24120_t2967_marshal_cleanup(U24ArrayTypeU24120_t2967_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void U24ArrayTypeU243132_t2968_marshal(const U24ArrayTypeU243132_t2968& unmarshaled, U24ArrayTypeU243132_t2968_marshaled& marshaled)
{
}
void U24ArrayTypeU243132_t2968_marshal_back(const U24ArrayTypeU243132_t2968_marshaled& marshaled, U24ArrayTypeU243132_t2968& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void U24ArrayTypeU243132_t2968_marshal_cleanup(U24ArrayTypeU243132_t2968_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void U24ArrayTypeU2420_t2969_marshal(const U24ArrayTypeU2420_t2969& unmarshaled, U24ArrayTypeU2420_t2969_marshaled& marshaled)
{
}
void U24ArrayTypeU2420_t2969_marshal_back(const U24ArrayTypeU2420_t2969_marshaled& marshaled, U24ArrayTypeU2420_t2969& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void U24ArrayTypeU2420_t2969_marshal_cleanup(U24ArrayTypeU2420_t2969_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void U24ArrayTypeU2432_t2970_marshal(const U24ArrayTypeU2432_t2970& unmarshaled, U24ArrayTypeU2432_t2970_marshaled& marshaled)
{
}
void U24ArrayTypeU2432_t2970_marshal_back(const U24ArrayTypeU2432_t2970_marshaled& marshaled, U24ArrayTypeU2432_t2970& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void U24ArrayTypeU2432_t2970_marshal_cleanup(U24ArrayTypeU2432_t2970_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void U24ArrayTypeU2448_t2971_marshal(const U24ArrayTypeU2448_t2971& unmarshaled, U24ArrayTypeU2448_t2971_marshaled& marshaled)
{
}
void U24ArrayTypeU2448_t2971_marshal_back(const U24ArrayTypeU2448_t2971_marshaled& marshaled, U24ArrayTypeU2448_t2971& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void U24ArrayTypeU2448_t2971_marshal_cleanup(U24ArrayTypeU2448_t2971_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void U24ArrayTypeU2464_t2972_marshal(const U24ArrayTypeU2464_t2972& unmarshaled, U24ArrayTypeU2464_t2972_marshaled& marshaled)
{
}
void U24ArrayTypeU2464_t2972_marshal_back(const U24ArrayTypeU2464_t2972_marshaled& marshaled, U24ArrayTypeU2464_t2972& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void U24ArrayTypeU2464_t2972_marshal_cleanup(U24ArrayTypeU2464_t2972_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t2973_marshal(const U24ArrayTypeU2412_t2973& unmarshaled, U24ArrayTypeU2412_t2973_marshaled& marshaled)
{
}
void U24ArrayTypeU2412_t2973_marshal_back(const U24ArrayTypeU2412_t2973_marshaled& marshaled, U24ArrayTypeU2412_t2973& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t2973_marshal_cleanup(U24ArrayTypeU2412_t2973_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1668
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$1668
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1668
void U24ArrayTypeU241668_t2974_marshal(const U24ArrayTypeU241668_t2974& unmarshaled, U24ArrayTypeU241668_t2974_marshaled& marshaled)
{
}
void U24ArrayTypeU241668_t2974_marshal_back(const U24ArrayTypeU241668_t2974_marshaled& marshaled, U24ArrayTypeU241668_t2974& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1668
void U24ArrayTypeU241668_t2974_marshal_cleanup(U24ArrayTypeU241668_t2974_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$2100
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$2100
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2100
void U24ArrayTypeU242100_t2975_marshal(const U24ArrayTypeU242100_t2975& unmarshaled, U24ArrayTypeU242100_t2975_marshaled& marshaled)
{
}
void U24ArrayTypeU242100_t2975_marshal_back(const U24ArrayTypeU242100_t2975_marshaled& marshaled, U24ArrayTypeU242100_t2975& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2100
void U24ArrayTypeU242100_t2975_marshal_cleanup(U24ArrayTypeU242100_t2975_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1452
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$1452
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1452
void U24ArrayTypeU241452_t2976_marshal(const U24ArrayTypeU241452_t2976& unmarshaled, U24ArrayTypeU241452_t2976_marshaled& marshaled)
{
}
void U24ArrayTypeU241452_t2976_marshal_back(const U24ArrayTypeU241452_t2976_marshaled& marshaled, U24ArrayTypeU241452_t2976& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1452
void U24ArrayTypeU241452_t2976_marshal_cleanup(U24ArrayTypeU241452_t2976_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void U24ArrayTypeU24136_t2977_marshal(const U24ArrayTypeU24136_t2977& unmarshaled, U24ArrayTypeU24136_t2977_marshaled& marshaled)
{
}
void U24ArrayTypeU24136_t2977_marshal_back(const U24ArrayTypeU24136_t2977_marshaled& marshaled, U24ArrayTypeU24136_t2977& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void U24ArrayTypeU24136_t2977_marshal_cleanup(U24ArrayTypeU24136_t2977_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$84
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$84
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$84
void U24ArrayTypeU2484_t2978_marshal(const U24ArrayTypeU2484_t2978& unmarshaled, U24ArrayTypeU2484_t2978_marshaled& marshaled)
{
}
void U24ArrayTypeU2484_t2978_marshal_back(const U24ArrayTypeU2484_t2978_marshaled& marshaled, U24ArrayTypeU2484_t2978& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$84
void U24ArrayTypeU2484_t2978_marshal_cleanup(U24ArrayTypeU2484_t2978_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void U24ArrayTypeU2472_t2979_marshal(const U24ArrayTypeU2472_t2979& unmarshaled, U24ArrayTypeU2472_t2979_marshaled& marshaled)
{
}
void U24ArrayTypeU2472_t2979_marshal_back(const U24ArrayTypeU2472_t2979_marshaled& marshaled, U24ArrayTypeU2472_t2979& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void U24ArrayTypeU2472_t2979_marshal_cleanup(U24ArrayTypeU2472_t2979_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void U24ArrayTypeU24124_t2980_marshal(const U24ArrayTypeU24124_t2980& unmarshaled, U24ArrayTypeU24124_t2980_marshaled& marshaled)
{
}
void U24ArrayTypeU24124_t2980_marshal_back(const U24ArrayTypeU24124_t2980_marshaled& marshaled, U24ArrayTypeU24124_t2980& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void U24ArrayTypeU24124_t2980_marshal_cleanup(U24ArrayTypeU24124_t2980_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void U24ArrayTypeU2496_t2981_marshal(const U24ArrayTypeU2496_t2981& unmarshaled, U24ArrayTypeU2496_t2981_marshaled& marshaled)
{
}
void U24ArrayTypeU2496_t2981_marshal_back(const U24ArrayTypeU2496_t2981_marshaled& marshaled, U24ArrayTypeU2496_t2981& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void U24ArrayTypeU2496_t2981_marshal_cleanup(U24ArrayTypeU2496_t2981_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void U24ArrayTypeU242048_t2982_marshal(const U24ArrayTypeU242048_t2982& unmarshaled, U24ArrayTypeU242048_t2982_marshaled& marshaled)
{
}
void U24ArrayTypeU242048_t2982_marshal_back(const U24ArrayTypeU242048_t2982_marshaled& marshaled, U24ArrayTypeU242048_t2982& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void U24ArrayTypeU242048_t2982_marshal_cleanup(U24ArrayTypeU242048_t2982_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void U24ArrayTypeU2456_t2983_marshal(const U24ArrayTypeU2456_t2983& unmarshaled, U24ArrayTypeU2456_t2983_marshaled& marshaled)
{
}
void U24ArrayTypeU2456_t2983_marshal_back(const U24ArrayTypeU2456_t2983_marshaled& marshaled, U24ArrayTypeU2456_t2983& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void U24ArrayTypeU2456_t2983_marshal_cleanup(U24ArrayTypeU2456_t2983_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_3.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t2984_marshal(const U24ArrayTypeU24256_t2984& unmarshaled, U24ArrayTypeU24256_t2984_marshaled& marshaled)
{
}
void U24ArrayTypeU24256_t2984_marshal_back(const U24ArrayTypeU24256_t2984_marshaled& marshaled, U24ArrayTypeU24256_t2984& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t2984_marshal_cleanup(U24ArrayTypeU24256_t2984_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_6.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_6MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void U24ArrayTypeU241024_t2985_marshal(const U24ArrayTypeU241024_t2985& unmarshaled, U24ArrayTypeU241024_t2985_marshaled& marshaled)
{
}
void U24ArrayTypeU241024_t2985_marshal_back(const U24ArrayTypeU241024_t2985_marshaled& marshaled, U24ArrayTypeU241024_t2985& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void U24ArrayTypeU241024_t2985_marshal_cleanup(U24ArrayTypeU241024_t2985_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void U24ArrayTypeU24640_t2986_marshal(const U24ArrayTypeU24640_t2986& unmarshaled, U24ArrayTypeU24640_t2986_marshaled& marshaled)
{
}
void U24ArrayTypeU24640_t2986_marshal_back(const U24ArrayTypeU24640_t2986_marshaled& marshaled, U24ArrayTypeU24640_t2986& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void U24ArrayTypeU24640_t2986_marshal_cleanup(U24ArrayTypeU24640_t2986_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$160
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_7.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$160
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_7MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$160
void U24ArrayTypeU24160_t2987_marshal(const U24ArrayTypeU24160_t2987& unmarshaled, U24ArrayTypeU24160_t2987_marshaled& marshaled)
{
}
void U24ArrayTypeU24160_t2987_marshal_back(const U24ArrayTypeU24160_t2987_marshaled& marshaled, U24ArrayTypeU24160_t2987& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$160
void U24ArrayTypeU24160_t2987_marshal_cleanup(U24ArrayTypeU24160_t2987_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_8.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_8MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void U24ArrayTypeU24128_t2988_marshal(const U24ArrayTypeU24128_t2988& unmarshaled, U24ArrayTypeU24128_t2988_marshaled& marshaled)
{
}
void U24ArrayTypeU24128_t2988_marshal_back(const U24ArrayTypeU24128_t2988_marshaled& marshaled, U24ArrayTypeU24128_t2988& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void U24ArrayTypeU24128_t2988_marshal_cleanup(U24ArrayTypeU24128_t2988_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
