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
#include "Excel_U3CModuleU3E.h"
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
#include "Excel_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// Excel.Core.FormatReader
#include "Excel_Excel_Core_FormatReader.h"
#ifndef _MSC_VER
#else
#endif
// Excel.Core.FormatReader
#include "Excel_Excel_Core_FormatReaderMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
#include "mscorlib_ArrayTypes.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// <PrivateImplementationDetails>{10037FEE-F752-4B71-ADAE-B726711CA9CA}
#include "Excel_U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2_1.h"
// <PrivateImplementationDetails>{10037FEE-F752-4B71-ADAE-B726711CA9CA}/__StaticArrayInitTypeSize=20
#include "Excel_U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// <PrivateImplementationDetails>{10037FEE-F752-4B71-ADAE-B726711CA9CA}
#include "Excel_U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2_1MethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"


// System.String Excel.Core.FormatReader::get_FormatString()
extern "C" String_t* FormatReader_get_FormatString_m3432 (FormatReader_t827 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CFormatStringU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void Excel.Core.FormatReader::set_FormatString(System.String)
extern "C" void FormatReader_set_FormatString_m3433 (FormatReader_t827 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CFormatStringU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Excel.Core.FormatReader::.ctor()
extern "C" void FormatReader__ctor_m3434 (FormatReader_t827 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Excel.Core.FormatReader::IsDateFormatString()
extern TypeInfo* CharU5BU5D_t260_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2D4B71U2DADAEU2DB726711CA9CAU7D_t853____U24U24method0x60000dfU2D1_0_FieldInfo_var;
extern "C" bool FormatReader_IsDateFormatString_m3435 (FormatReader_t827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2D4B71U2DADAEU2DB726711CA9CAU7D_t853____U24U24method0x60000dfU2D1_0_FieldInfo_var = il2cpp_codegen_field_info_from_index(1766, 0);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t260* V_0 = {0};
	uint16_t V_1 = 0x0;
	int32_t V_2 = 0;
	bool V_3 = false;
	CharU5BU5D_t260* V_4 = {0};
	int32_t V_5 = 0;
	{
		CharU5BU5D_t260* L_0 = ((CharU5BU5D_t260*)SZArrayNew(CharU5BU5D_t260_il2cpp_TypeInfo_var, ((int32_t)10)));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2D4B71U2DADAEU2DB726711CA9CAU7D_t853____U24U24method0x60000dfU2D1_0_FieldInfo_var), /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		CharU5BU5D_t260* L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = String_IndexOfAny_m3523(L_1, L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t260* L_4 = V_0;
		V_4 = L_4;
		V_5 = 0;
		goto IL_007b;
	}

IL_002a:
	{
		CharU5BU5D_t260* L_5 = V_4;
		int32_t L_6 = V_5;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7));
		String_t* L_8 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		uint16_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = String_IndexOf_m3182(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_0071;
	}

IL_003f:
	{
		uint16_t L_11 = V_1;
		int32_t L_12 = V_2;
		bool L_13 = FormatReader_IsSurroundedByBracket_m3438(__this, L_11, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		uint16_t L_14 = V_1;
		int32_t L_15 = V_2;
		bool L_16 = FormatReader_IsPrecededByBackSlash_m3437(__this, L_14, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0061;
		}
	}
	{
		uint16_t L_17 = V_1;
		int32_t L_18 = V_2;
		bool L_19 = FormatReader_IsSurroundedByQuotes_m3436(__this, L_17, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0061;
		}
	}
	{
		V_3 = 1;
		goto IL_0085;
	}

IL_0061:
	{
		String_t* L_20 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		uint16_t L_21 = V_1;
		int32_t L_22 = V_2;
		NullCheck(L_20);
		int32_t L_23 = String_IndexOf_m3179(L_20, L_21, ((int32_t)((int32_t)L_22+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_23;
	}

IL_0071:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) > ((int32_t)(-1))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_25 = V_5;
		V_5 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_007b:
	{
		int32_t L_26 = V_5;
		CharU5BU5D_t260* L_27 = V_4;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_002a;
		}
	}

IL_0083:
	{
		return 0;
	}

IL_0085:
	{
		bool L_28 = V_3;
		return L_28;
	}
}
// System.Boolean Excel.Core.FormatReader::IsSurroundedByQuotes(System.Char,System.Int32)
extern "C" bool FormatReader_IsSurroundedByQuotes_m3436 (FormatReader_t827 * __this, uint16_t ___dateChar, int32_t ___pos, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___pos;
		String_t* L_1 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1368(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)((int32_t)L_2-(int32_t)1))))))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		String_t* L_3 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___pos;
		NullCheck(L_3);
		String_t* L_5 = String_Substring_m3180(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_6 = FormatReader_NumberOfUnescapedOccurances_m3439(__this, ((int32_t)34), L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		int32_t L_8 = ___pos;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m1371(L_7, 0, L_8, /*hidden argument*/NULL);
		int32_t L_10 = FormatReader_NumberOfUnescapedOccurances_m3439(__this, ((int32_t)34), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_11%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_12 = V_1;
		return ((((int32_t)((int32_t)((int32_t)L_12%(int32_t)2))) == ((int32_t)1))? 1 : 0);
	}

IL_004c:
	{
		return 0;
	}
}
// System.Boolean Excel.Core.FormatReader::IsPrecededByBackSlash(System.Char,System.Int32)
extern "C" bool FormatReader_IsPrecededByBackSlash_m3437 (FormatReader_t827 * __this, uint16_t ___dateChar, int32_t ___pos, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		int32_t L_0 = ___pos;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		String_t* L_1 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___pos;
		NullCheck(L_1);
		uint16_t L_3 = String_get_Chars_m1370(L_1, ((int32_t)((int32_t)L_2-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = Char_CompareTo_m3524((&V_0), ((int32_t)92), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		return 0;
	}
}
// System.Boolean Excel.Core.FormatReader::IsSurroundedByBracket(System.Char,System.Int32)
extern "C" bool FormatReader_IsSurroundedByBracket_m3438 (FormatReader_t827 * __this, uint16_t ___dateChar, int32_t ___pos, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___pos;
		String_t* L_1 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1368(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)((int32_t)L_2-(int32_t)1))))))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		String_t* L_3 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___pos;
		NullCheck(L_3);
		String_t* L_5 = String_Substring_m1371(L_3, 0, L_4, /*hidden argument*/NULL);
		int32_t L_6 = FormatReader_NumberOfUnescapedOccurances_m3439(__this, ((int32_t)91), L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		int32_t L_8 = ___pos;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m1371(L_7, 0, L_8, /*hidden argument*/NULL);
		int32_t L_10 = FormatReader_NumberOfUnescapedOccurances_m3439(__this, ((int32_t)93), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_0 = ((int32_t)((int32_t)L_11-(int32_t)L_12));
		String_t* L_13 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		int32_t L_14 = ___pos;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m3180(L_13, ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_16 = FormatReader_NumberOfUnescapedOccurances_m3439(__this, ((int32_t)91), L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		String_t* L_17 = FormatReader_get_FormatString_m3432(__this, /*hidden argument*/NULL);
		int32_t L_18 = ___pos;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m3180(L_17, ((int32_t)((int32_t)L_18+(int32_t)1)), /*hidden argument*/NULL);
		int32_t L_20 = FormatReader_NumberOfUnescapedOccurances_m3439(__this, ((int32_t)93), L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		V_3 = ((int32_t)((int32_t)L_21-(int32_t)L_22));
		int32_t L_23 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_23%(int32_t)2))) == ((uint32_t)1))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_24 = V_3;
		return ((((int32_t)((int32_t)((int32_t)L_24%(int32_t)2))) == ((int32_t)1))? 1 : 0);
	}

IL_0081:
	{
		return 0;
	}
}
// System.Int32 Excel.Core.FormatReader::NumberOfUnescapedOccurances(System.Char,System.String)
extern "C" int32_t FormatReader_NumberOfUnescapedOccurances_m3439 (FormatReader_t827 * __this, uint16_t ___value, String_t* ___src, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	uint16_t V_2 = 0x0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		String_t* L_0 = ___src;
		V_3 = L_0;
		V_4 = 0;
		goto IL_0032;
	}

IL_000b:
	{
		String_t* L_1 = V_3;
		int32_t L_2 = V_4;
		NullCheck(L_1);
		uint16_t L_3 = String_get_Chars_m1370(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		uint16_t L_4 = V_2;
		uint16_t L_5 = ___value;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002c;
		}
	}
	{
		uint16_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_7 = Char_CompareTo_m3524((&V_1), ((int32_t)92), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
		uint16_t L_9 = V_2;
		V_1 = L_9;
	}

IL_002c:
	{
		int32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_11 = V_4;
		String_t* L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m1368(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
// Excel.Core.Helpers
#include "Excel_Excel_Core_Helpers.h"
#ifndef _MSC_VER
#else
#endif
// Excel.Core.Helpers
#include "Excel_Excel_Core_HelpersMethodDeclarations.h"

// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluator.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Data.DataSet
#include "System_Data_System_Data_DataSet.h"
// System.Collections.Generic.List`1<System.Data.DataTable>
#include "mscorlib_System_Collections_Generic_List_1_gen_29.h"
// System.Data.DataTable
#include "System_Data_System_Data_DataTable.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Data.DataRow
#include "System_Data_System_Data_DataRow.h"
// System.Data.DataTableCollection
#include "System_Data_System_Data_DataTableCollection.h"
// System.Data.InternalDataCollectionBase
#include "System_Data_System_Data_InternalDataCollectionBase.h"
// System.Data.DataRowCollection
#include "System_Data_System_Data_DataRowCollection.h"
// System.Data.DataColumnCollection
#include "System_Data_System_Data_DataColumnCollection.h"
// System.Data.DataColumn
#include "System_Data_System_Data_DataColumn.h"
#include "System.Data_ArrayTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluatorMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.Data.DataSet
#include "System_Data_System_Data_DataSetMethodDeclarations.h"
// System.Data.InternalDataCollectionBase
#include "System_Data_System_Data_InternalDataCollectionBaseMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Data.DataTable>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
// System.Data.DataTable
#include "System_Data_System_Data_DataTableMethodDeclarations.h"
// System.Data.DataRow
#include "System_Data_System_Data_DataRowMethodDeclarations.h"
// System.Data.DataColumnCollection
#include "System_Data_System_Data_DataColumnCollectionMethodDeclarations.h"
// System.Data.DataColumn
#include "System_Data_System_Data_DataColumnMethodDeclarations.h"
// System.Data.DataTableCollection
#include "System_Data_System_Data_DataTableCollectionMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"


// System.String Excel.Core.Helpers::ConvertEscapeChars(System.String)
extern TypeInfo* Helpers_t829_il2cpp_TypeInfo_var;
extern TypeInfo* MatchEvaluator_t828_il2cpp_TypeInfo_var;
extern const MethodInfo* Helpers_U3CConvertEscapeCharsU3Eb__0_m3444_MethodInfo_var;
extern "C" String_t* Helpers_ConvertEscapeChars_m3440 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Helpers_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1767);
		MatchEvaluator_t828_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1768);
		Helpers_U3CConvertEscapeCharsU3Eb__0_m3444_MethodInfo_var = il2cpp_codegen_method_info_from_index(274);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	Regex_t355 * G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	Regex_t355 * G_B1_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t829_il2cpp_TypeInfo_var);
		Regex_t355 * L_0 = ((Helpers_t829_StaticFields*)Helpers_t829_il2cpp_TypeInfo_var->static_fields)->___re_0;
		String_t* L_1 = ___input;
		MatchEvaluator_t828 * L_2 = ((Helpers_t829_StaticFields*)Helpers_t829_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_3 = { (void*)Helpers_U3CConvertEscapeCharsU3Eb__0_m3444_MethodInfo_var };
		MatchEvaluator_t828 * L_4 = (MatchEvaluator_t828 *)il2cpp_codegen_object_new (MatchEvaluator_t828_il2cpp_TypeInfo_var);
		MatchEvaluator__ctor_m3525(L_4, NULL, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t829_il2cpp_TypeInfo_var);
		((Helpers_t829_StaticFields*)Helpers_t829_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = L_4;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t829_il2cpp_TypeInfo_var);
		MatchEvaluator_t828 * L_5 = ((Helpers_t829_StaticFields*)Helpers_t829_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		NullCheck(G_B2_1);
		String_t* L_6 = Regex_Replace_m3526(G_B2_1, G_B2_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object Excel.Core.Helpers::ConvertFromOATime(System.Double)
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern "C" Object_t * Helpers_ConvertFromOATime_m3441 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		s_Il2CppMethodIntialized = true;
	}
	{
		double L_0 = ___value;
		if ((!(((double)L_0) >= ((double)(0.0)))))
		{
			goto IL_0025;
		}
	}
	{
		double L_1 = ___value;
		if ((!(((double)L_1) < ((double)(60.0)))))
		{
			goto IL_0025;
		}
	}
	{
		double L_2 = ___value;
		___value = ((double)((double)L_2+(double)(1.0)));
	}

IL_0025:
	{
		double L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		DateTime_t445  L_4 = DateTime_FromOADate_m3527(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		DateTime_t445  L_5 = L_4;
		Object_t * L_6 = Box(DateTime_t445_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void Excel.Core.Helpers::FixDataTypes(System.Data.DataSet)
extern TypeInfo* List_1_t857_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* DataTable_t296_il2cpp_TypeInfo_var;
extern TypeInfo* DataRow_t352_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3528_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m3536_MethodInfo_var;
extern "C" void Helpers_FixDataTypes_m3442 (Object_t * __this /* static, unused */, DataSet_t346 * ___dataset, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t857_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1769);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		DataTable_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(842);
		DataRow_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1770);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		List_1__ctor_m3528_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483923);
		List_1_ToArray_m3536_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483924);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t857 * V_0 = {0};
	bool V_1 = false;
	DataTable_t296 * V_2 = {0};
	DataTable_t296 * V_3 = {0};
	int32_t V_4 = 0;
	Type_t * V_5 = {0};
	DataRow_t352 * V_6 = {0};
	Type_t * V_7 = {0};
	DataRow_t352 * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		DataSet_t346 * L_0 = ___dataset;
		NullCheck(L_0);
		DataTableCollection_t348 * L_1 = DataSet_get_Tables_m1823(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_1);
		List_1_t857 * L_3 = (List_1_t857 *)il2cpp_codegen_object_new (List_1_t857_il2cpp_TypeInfo_var);
		List_1__ctor_m3528(L_3, L_2, /*hidden argument*/List_1__ctor_m3528_MethodInfo_var);
		V_0 = L_3;
		V_1 = 0;
		DataSet_t346 * L_4 = ___dataset;
		NullCheck(L_4);
		DataTableCollection_t348 * L_5 = DataSet_get_Tables_m1823(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_5);
		V_9 = L_6;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0165;
		}

IL_0025:
		{
			Object_t * L_7 = V_9;
			NullCheck(L_7);
			Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_7);
			V_2 = ((DataTable_t296 *)Castclass(L_8, DataTable_t296_il2cpp_TypeInfo_var));
			DataTable_t296 * L_9 = V_2;
			NullCheck(L_9);
			DataRowCollection_t349 * L_10 = DataTable_get_Rows_m1825(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_10);
			if (L_11)
			{
				goto IL_004b;
			}
		}

IL_003f:
		{
			List_1_t857 * L_12 = V_0;
			DataTable_t296 * L_13 = V_2;
			NullCheck(L_12);
			VirtActionInvoker1< DataTable_t296 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Data.DataTable>::Add(!0) */, L_12, L_13);
			goto IL_0165;
		}

IL_004b:
		{
			V_3 = (DataTable_t296 *)NULL;
			V_4 = 0;
			goto IL_00ef;
		}

IL_0055:
		{
			V_5 = (Type_t *)NULL;
			DataTable_t296 * L_14 = V_2;
			NullCheck(L_14);
			DataRowCollection_t349 * L_15 = DataTable_get_Rows_m1825(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			Object_t * L_16 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_15);
			V_10 = L_16;
		}

IL_0065:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00a5;
			}

IL_0067:
			{
				Object_t * L_17 = V_10;
				NullCheck(L_17);
				Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_17);
				V_6 = ((DataRow_t352 *)Castclass(L_18, DataRow_t352_il2cpp_TypeInfo_var));
				DataRow_t352 * L_19 = V_6;
				int32_t L_20 = V_4;
				NullCheck(L_19);
				bool L_21 = DataRow_IsNull_m3529(L_19, L_20, /*hidden argument*/NULL);
				if (L_21)
				{
					goto IL_00a5;
				}
			}

IL_0080:
			{
				DataRow_t352 * L_22 = V_6;
				int32_t L_23 = V_4;
				NullCheck(L_22);
				Object_t * L_24 = DataRow_get_Item_m1829(L_22, L_23, /*hidden argument*/NULL);
				NullCheck(L_24);
				Type_t * L_25 = Object_GetType_m1416(L_24, /*hidden argument*/NULL);
				V_7 = L_25;
				Type_t * L_26 = V_7;
				Type_t * L_27 = V_5;
				if ((((Object_t*)(Type_t *)L_26) == ((Object_t*)(Type_t *)L_27)))
				{
					goto IL_00a5;
				}
			}

IL_0096:
			{
				Type_t * L_28 = V_5;
				if (L_28)
				{
					goto IL_00a0;
				}
			}

IL_009a:
			{
				Type_t * L_29 = V_7;
				V_5 = L_29;
				goto IL_00a5;
			}

IL_00a0:
			{
				V_5 = (Type_t *)NULL;
				goto IL_00ae;
			}

IL_00a5:
			{
				Object_t * L_30 = V_10;
				NullCheck(L_30);
				bool L_31 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_30);
				if (L_31)
				{
					goto IL_0067;
				}
			}

IL_00ae:
			{
				IL2CPP_LEAVE(0xC5, FINALLY_00b0);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t306 *)e.ex;
			goto FINALLY_00b0;
		}

FINALLY_00b0:
		{ // begin finally (depth: 2)
			{
				Object_t * L_32 = V_10;
				V_11 = ((Object_t *)IsInst(L_32, IDisposable_t307_il2cpp_TypeInfo_var));
				Object_t * L_33 = V_11;
				if (!L_33)
				{
					goto IL_00c4;
				}
			}

IL_00bd:
			{
				Object_t * L_34 = V_11;
				NullCheck(L_34);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_34);
			}

IL_00c4:
			{
				IL2CPP_END_FINALLY(176)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(176)
		{
			IL2CPP_JUMP_TBL(0xC5, IL_00c5)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
		}

IL_00c5:
		{
			Type_t * L_35 = V_5;
			if (!L_35)
			{
				goto IL_00e9;
			}
		}

IL_00c9:
		{
			V_1 = 1;
			DataTable_t296 * L_36 = V_3;
			if (L_36)
			{
				goto IL_00d5;
			}
		}

IL_00ce:
		{
			DataTable_t296 * L_37 = V_2;
			NullCheck(L_37);
			DataTable_t296 * L_38 = (DataTable_t296 *)VirtFuncInvoker0< DataTable_t296 * >::Invoke(16 /* System.Data.DataTable System.Data.DataTable::Clone() */, L_37);
			V_3 = L_38;
		}

IL_00d5:
		{
			DataTable_t296 * L_39 = V_3;
			NullCheck(L_39);
			DataColumnCollection_t350 * L_40 = DataTable_get_Columns_m1826(L_39, /*hidden argument*/NULL);
			int32_t L_41 = V_4;
			NullCheck(L_40);
			DataColumn_t858 * L_42 = DataColumnCollection_get_Item_m3530(L_40, L_41, /*hidden argument*/NULL);
			Type_t * L_43 = V_5;
			NullCheck(L_42);
			DataColumn_set_DataType_m3531(L_42, L_43, /*hidden argument*/NULL);
		}

IL_00e9:
		{
			int32_t L_44 = V_4;
			V_4 = ((int32_t)((int32_t)L_44+(int32_t)1));
		}

IL_00ef:
		{
			int32_t L_45 = V_4;
			DataTable_t296 * L_46 = V_2;
			NullCheck(L_46);
			DataColumnCollection_t350 * L_47 = DataTable_get_Columns_m1826(L_46, /*hidden argument*/NULL);
			NullCheck(L_47);
			int32_t L_48 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_47);
			if ((((int32_t)L_45) < ((int32_t)L_48)))
			{
				goto IL_0055;
			}
		}

IL_0101:
		{
			DataTable_t296 * L_49 = V_3;
			if (!L_49)
			{
				goto IL_015e;
			}
		}

IL_0104:
		{
			DataTable_t296 * L_50 = V_3;
			NullCheck(L_50);
			DataTable_BeginLoadData_m3532(L_50, /*hidden argument*/NULL);
			DataTable_t296 * L_51 = V_2;
			NullCheck(L_51);
			DataRowCollection_t349 * L_52 = DataTable_get_Rows_m1825(L_51, /*hidden argument*/NULL);
			NullCheck(L_52);
			Object_t * L_53 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_52);
			V_12 = L_53;
		}

IL_0117:
		try
		{ // begin try (depth: 2)
			{
				goto IL_012f;
			}

IL_0119:
			{
				Object_t * L_54 = V_12;
				NullCheck(L_54);
				Object_t * L_55 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_54);
				V_8 = ((DataRow_t352 *)Castclass(L_55, DataRow_t352_il2cpp_TypeInfo_var));
				DataTable_t296 * L_56 = V_3;
				DataRow_t352 * L_57 = V_8;
				NullCheck(L_56);
				DataTable_ImportRow_m3533(L_56, L_57, /*hidden argument*/NULL);
			}

IL_012f:
			{
				Object_t * L_58 = V_12;
				NullCheck(L_58);
				bool L_59 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_58);
				if (L_59)
				{
					goto IL_0119;
				}
			}

IL_0138:
			{
				IL2CPP_LEAVE(0x14F, FINALLY_013a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t306 *)e.ex;
			goto FINALLY_013a;
		}

FINALLY_013a:
		{ // begin finally (depth: 2)
			{
				Object_t * L_60 = V_12;
				V_13 = ((Object_t *)IsInst(L_60, IDisposable_t307_il2cpp_TypeInfo_var));
				Object_t * L_61 = V_13;
				if (!L_61)
				{
					goto IL_014e;
				}
			}

IL_0147:
			{
				Object_t * L_62 = V_13;
				NullCheck(L_62);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_62);
			}

IL_014e:
			{
				IL2CPP_END_FINALLY(314)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(314)
		{
			IL2CPP_JUMP_TBL(0x14F, IL_014f)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
		}

IL_014f:
		{
			DataTable_t296 * L_63 = V_3;
			NullCheck(L_63);
			DataTable_EndLoadData_m3534(L_63, /*hidden argument*/NULL);
			List_1_t857 * L_64 = V_0;
			DataTable_t296 * L_65 = V_3;
			NullCheck(L_64);
			VirtActionInvoker1< DataTable_t296 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Data.DataTable>::Add(!0) */, L_64, L_65);
			goto IL_0165;
		}

IL_015e:
		{
			List_1_t857 * L_66 = V_0;
			DataTable_t296 * L_67 = V_2;
			NullCheck(L_66);
			VirtActionInvoker1< DataTable_t296 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Data.DataTable>::Add(!0) */, L_66, L_67);
		}

IL_0165:
		{
			Object_t * L_68 = V_9;
			NullCheck(L_68);
			bool L_69 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_68);
			if (L_69)
			{
				goto IL_0025;
			}
		}

IL_0171:
		{
			IL2CPP_LEAVE(0x188, FINALLY_0173);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0173;
	}

FINALLY_0173:
	{ // begin finally (depth: 1)
		{
			Object_t * L_70 = V_9;
			V_14 = ((Object_t *)IsInst(L_70, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_71 = V_14;
			if (!L_71)
			{
				goto IL_0187;
			}
		}

IL_0180:
		{
			Object_t * L_72 = V_14;
			NullCheck(L_72);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_72);
		}

IL_0187:
		{
			IL2CPP_END_FINALLY(371)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(371)
	{
		IL2CPP_JUMP_TBL(0x188, IL_0188)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0188:
	{
		bool L_73 = V_1;
		if (!L_73)
		{
			goto IL_01a7;
		}
	}
	{
		DataSet_t346 * L_74 = ___dataset;
		NullCheck(L_74);
		DataTableCollection_t348 * L_75 = DataSet_get_Tables_m1823(L_74, /*hidden argument*/NULL);
		NullCheck(L_75);
		DataTableCollection_Clear_m3535(L_75, /*hidden argument*/NULL);
		DataSet_t346 * L_76 = ___dataset;
		NullCheck(L_76);
		DataTableCollection_t348 * L_77 = DataSet_get_Tables_m1823(L_76, /*hidden argument*/NULL);
		List_1_t857 * L_78 = V_0;
		NullCheck(L_78);
		DataTableU5BU5D_t859* L_79 = List_1_ToArray_m3536(L_78, /*hidden argument*/List_1_ToArray_m3536_MethodInfo_var);
		NullCheck(L_77);
		DataTableCollection_AddRange_m3537(L_77, L_79, /*hidden argument*/NULL);
	}

IL_01a7:
	{
		return;
	}
}
// System.Void Excel.Core.Helpers::AddColumnHandleDuplicate(System.Data.DataTable,System.String)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Helpers_AddColumnHandleDuplicate_m3443 (Object_t * __this /* static, unused */, DataTable_t296 * ___table, String_t* ___columnName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	DataColumn_t858 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___columnName;
		V_0 = L_0;
		DataTable_t296 * L_1 = ___table;
		NullCheck(L_1);
		DataColumnCollection_t350 * L_2 = DataTable_get_Columns_m1826(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___columnName;
		NullCheck(L_2);
		DataColumn_t858 * L_4 = DataColumnCollection_get_Item_m3538(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 1;
		goto IL_0036;
	}

IL_0013:
	{
		String_t* L_5 = ___columnName;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m3539(NULL /*static, unused*/, (String_t*) &_stringLiteral418, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		DataTable_t296 * L_10 = ___table;
		NullCheck(L_10);
		DataColumnCollection_t350 * L_11 = DataTable_get_Columns_m1826(L_10, /*hidden argument*/NULL);
		String_t* L_12 = V_0;
		NullCheck(L_11);
		DataColumn_t858 * L_13 = DataColumnCollection_get_Item_m3538(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0036:
	{
		DataColumn_t858 * L_15 = V_1;
		if (L_15)
		{
			goto IL_0013;
		}
	}
	{
		DataTable_t296 * L_16 = ___table;
		NullCheck(L_16);
		DataColumnCollection_t350 * L_17 = DataTable_get_Columns_m1826(L_16, /*hidden argument*/NULL);
		String_t* L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		DataColumnCollection_Add_m3540(L_17, L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.String Excel.Core.Helpers::<ConvertEscapeChars>b__0(System.Text.RegularExpressions.Match)
extern "C" String_t* Helpers_U3CConvertEscapeCharsU3Eb__0_m3444 (Object_t * __this /* static, unused */, Match_t854 * ___m, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		Match_t854 * L_0 = ___m;
		NullCheck(L_0);
		GroupCollection_t860 * L_1 = (GroupCollection_t860 *)VirtFuncInvoker0< GroupCollection_t860 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_0);
		NullCheck(L_1);
		Group_t861 * L_2 = GroupCollection_get_Item_m3541(L_1, 1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Capture_get_Value_m3542(L_2, /*hidden argument*/NULL);
		uint32_t L_4 = UInt32_Parse_m3543(NULL /*static, unused*/, L_3, ((int32_t)515), /*hidden argument*/NULL);
		V_0 = (((uint16_t)L_4));
		String_t* L_5 = Char_ToString_m3544((&V_0), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Excel.Core.Helpers::.cctor()
extern TypeInfo* Regex_t355_il2cpp_TypeInfo_var;
extern TypeInfo* Helpers_t829_il2cpp_TypeInfo_var;
extern "C" void Helpers__cctor_m3445 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Regex_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		Helpers_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1767);
		s_Il2CppMethodIntialized = true;
	}
	{
		Regex_t355 * L_0 = (Regex_t355 *)il2cpp_codegen_object_new (Regex_t355_il2cpp_TypeInfo_var);
		Regex__ctor_m1839(L_0, (String_t*) &_stringLiteral419, /*hidden argument*/NULL);
		((Helpers_t829_StaticFields*)Helpers_t829_il2cpp_TypeInfo_var->static_fields)->___re_0 = L_0;
		return;
	}
}
// Excel.Core.OpenXmlFormat.XlsxDimension
#include "Excel_Excel_Core_OpenXmlFormat_XlsxDimension.h"
#ifndef _MSC_VER
#else
#endif
// Excel.Core.OpenXmlFormat.XlsxDimension
#include "Excel_Excel_Core_OpenXmlFormat_XlsxDimensionMethodDeclarations.h"

// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void Excel.Core.OpenXmlFormat.XlsxDimension::.ctor(System.String)
extern "C" void XlsxDimension__ctor_m3446 (XlsxDimension_t830 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		XlsxDimension_ParseDimensions_m3455(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxDimension::.ctor(System.Int32,System.Int32)
extern "C" void XlsxDimension__ctor_m3447 (XlsxDimension_t830 * __this, int32_t ___rows, int32_t ___cols, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		XlsxDimension_set_FirstRow_m3449(__this, 1, /*hidden argument*/NULL);
		int32_t L_0 = ___rows;
		XlsxDimension_set_LastRow_m3450(__this, L_0, /*hidden argument*/NULL);
		XlsxDimension_set_FirstCol_m3452(__this, 1, /*hidden argument*/NULL);
		int32_t L_1 = ___cols;
		XlsxDimension_set_LastCol_m3454(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Excel.Core.OpenXmlFormat.XlsxDimension::get_FirstRow()
extern "C" int32_t XlsxDimension_get_FirstRow_m3448 (XlsxDimension_t830 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____FirstRow_0);
		return L_0;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxDimension::set_FirstRow(System.Int32)
extern "C" void XlsxDimension_set_FirstRow_m3449 (XlsxDimension_t830 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->____FirstRow_0 = L_0;
		return;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxDimension::set_LastRow(System.Int32)
extern "C" void XlsxDimension_set_LastRow_m3450 (XlsxDimension_t830 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->____LastRow_1 = L_0;
		return;
	}
}
// System.Int32 Excel.Core.OpenXmlFormat.XlsxDimension::get_FirstCol()
extern "C" int32_t XlsxDimension_get_FirstCol_m3451 (XlsxDimension_t830 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____FirstCol_2);
		return L_0;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxDimension::set_FirstCol(System.Int32)
extern "C" void XlsxDimension_set_FirstCol_m3452 (XlsxDimension_t830 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->____FirstCol_2 = L_0;
		return;
	}
}
// System.Int32 Excel.Core.OpenXmlFormat.XlsxDimension::get_LastCol()
extern "C" int32_t XlsxDimension_get_LastCol_m3453 (XlsxDimension_t830 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____LastCol_3);
		return L_0;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxDimension::set_LastCol(System.Int32)
extern "C" void XlsxDimension_set_LastCol_m3454 (XlsxDimension_t830 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->____LastCol_3 = L_0;
		return;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxDimension::ParseDimensions(System.String)
extern TypeInfo* CharU5BU5D_t260_il2cpp_TypeInfo_var;
extern "C" void XlsxDimension_ParseDimensions_m3455 (XlsxDimension_t830 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t258* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	CharU5BU5D_t260* V_3 = {0};
	{
		String_t* L_0 = ___value;
		V_3 = ((CharU5BU5D_t260*)SZArrayNew(CharU5BU5D_t260_il2cpp_TypeInfo_var, 1));
		CharU5BU5D_t260* L_1 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)((int32_t)58);
		CharU5BU5D_t260* L_2 = V_3;
		NullCheck(L_0);
		StringU5BU5D_t258* L_3 = String_Split_m1813(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t258* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		XlsxDimension_XlsxDim_m3456(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), (&V_1), (&V_2), /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		XlsxDimension_set_FirstCol_m3452(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		XlsxDimension_set_FirstRow_m3449(__this, L_7, /*hidden argument*/NULL);
		StringU5BU5D_t258* L_8 = V_0;
		NullCheck(L_8);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_8)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = XlsxDimension_get_FirstCol_m3451(__this, /*hidden argument*/NULL);
		XlsxDimension_set_LastCol_m3454(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = XlsxDimension_get_FirstRow_m3448(__this, /*hidden argument*/NULL);
		XlsxDimension_set_LastRow_m3450(__this, L_10, /*hidden argument*/NULL);
		return;
	}

IL_004d:
	{
		StringU5BU5D_t258* L_11 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		int32_t L_12 = 1;
		XlsxDimension_XlsxDim_m3456(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_11, L_12)), (&V_1), (&V_2), /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		XlsxDimension_set_LastCol_m3454(__this, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_2;
		XlsxDimension_set_LastRow_m3450(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxDimension::XlsxDim(System.String,System.Int32&,System.Int32&)
extern TypeInfo* Int32U5BU5D_t1_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t323_il2cpp_TypeInfo_var;
extern "C" void XlsxDimension_XlsxDim_m3456 (Object_t * __this /* static, unused */, String_t* ___value, int32_t* ___val1, int32_t* ___val2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		Char_t323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t* L_0 = ___val1;
		*((int32_t*)(L_0)) = (int32_t)0;
		String_t* L_1 = ___value;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1368(L_1, /*hidden argument*/NULL);
		V_1 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2-(int32_t)1))));
		goto IL_0036;
	}

IL_0015:
	{
		String_t* L_3 = ___value;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		uint16_t L_5 = String_get_Chars_m1370(L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t323_il2cpp_TypeInfo_var);
		bool L_6 = Char_IsDigit_m3545(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003f;
		}
	}
	{
		Int32U5BU5D_t1* L_7 = V_1;
		int32_t L_8 = V_0;
		String_t* L_9 = ___value;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		uint16_t L_11 = String_get_Chars_m1370(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11-(int32_t)((int32_t)65)))+(int32_t)1));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_13 = V_0;
		String_t* L_14 = ___value;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1368(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0015;
		}
	}

IL_003f:
	{
		V_2 = 0;
		goto IL_0066;
	}

IL_0043:
	{
		int32_t* L_16 = ___val1;
		int32_t* L_17 = L_16;
		Int32U5BU5D_t1* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int32_t L_21 = V_0;
		int32_t L_22 = V_2;
		double L_23 = pow((26.0), (((double)((int32_t)((int32_t)((int32_t)((int32_t)L_21-(int32_t)L_22))-(int32_t)1)))));
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_17))+(int32_t)(((int32_t)((double)((double)(((double)(*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20))))*(double)L_23))))));
		int32_t L_24 = V_2;
		V_2 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0066:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t* L_27 = ___val2;
		String_t* L_28 = ___value;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		String_t* L_30 = String_Substring_m3180(L_28, L_29, /*hidden argument*/NULL);
		int32_t L_31 = Int32_Parse_m3546(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		*((int32_t*)(L_27)) = (int32_t)L_31;
		return;
	}
}
// Excel.Core.OpenXmlFormat.XlsxNumFmt
#include "Excel_Excel_Core_OpenXmlFormat_XlsxNumFmt.h"
#ifndef _MSC_VER
#else
#endif
// Excel.Core.OpenXmlFormat.XlsxNumFmt
#include "Excel_Excel_Core_OpenXmlFormat_XlsxNumFmtMethodDeclarations.h"



// System.Int32 Excel.Core.OpenXmlFormat.XlsxNumFmt::get_Id()
extern "C" int32_t XlsxNumFmt_get_Id_m3457 (XlsxNumFmt_t831 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____Id_0);
		return L_0;
	}
}
// System.String Excel.Core.OpenXmlFormat.XlsxNumFmt::get_FormatCode()
extern "C" String_t* XlsxNumFmt_get_FormatCode_m3458 (XlsxNumFmt_t831 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____FormatCode_1);
		return L_0;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxNumFmt::.ctor(System.Int32,System.String)
extern "C" void XlsxNumFmt__ctor_m3459 (XlsxNumFmt_t831 * __this, int32_t ___id, String_t* ___formatCode, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___id;
		__this->____Id_0 = L_0;
		String_t* L_1 = ___formatCode;
		__this->____FormatCode_1 = L_1;
		return;
	}
}
// Excel.Core.OpenXmlFormat.XlsxSST
#include "Excel_Excel_Core_OpenXmlFormat_XlsxSST.h"
#ifndef _MSC_VER
#else
#endif
// Excel.Core.OpenXmlFormat.XlsxSST
#include "Excel_Excel_Core_OpenXmlFormat_XlsxSSTMethodDeclarations.h"

// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"


// System.Void Excel.Core.OpenXmlFormat.XlsxSST::.ctor()
extern TypeInfo* List_1_t129_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1482_MethodInfo_var;
extern "C" void XlsxSST__ctor_m3460 (XlsxSST_t832 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		List_1__ctor_m1482_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483720);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t129_il2cpp_TypeInfo_var);
		List_1__ctor_m1482(__this, /*hidden argument*/List_1__ctor_m1482_MethodInfo_var);
		return;
	}
}
// Excel.Core.OpenXmlFormat.XlsxStyles
#include "Excel_Excel_Core_OpenXmlFormat_XlsxStyles.h"
#ifndef _MSC_VER
#else
#endif
// Excel.Core.OpenXmlFormat.XlsxStyles
#include "Excel_Excel_Core_OpenXmlFormat_XlsxStylesMethodDeclarations.h"

// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxXf>
#include "mscorlib_System_Collections_Generic_List_1_gen_30.h"
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt>
#include "mscorlib_System_Collections_Generic_List_1_gen_31.h"
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxXf>
#include "mscorlib_System_Collections_Generic_List_1_gen_30MethodDeclarations.h"
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt>
#include "mscorlib_System_Collections_Generic_List_1_gen_31MethodDeclarations.h"


// System.Void Excel.Core.OpenXmlFormat.XlsxStyles::.ctor()
extern TypeInfo* List_1_t833_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t834_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3547_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3548_MethodInfo_var;
extern "C" void XlsxStyles__ctor_m3461 (XlsxStyles_t835 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1773);
		List_1_t834_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1774);
		List_1__ctor_m3547_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483925);
		List_1__ctor_m3548_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483926);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		List_1_t833 * L_0 = (List_1_t833 *)il2cpp_codegen_object_new (List_1_t833_il2cpp_TypeInfo_var);
		List_1__ctor_m3547(L_0, /*hidden argument*/List_1__ctor_m3547_MethodInfo_var);
		__this->____cellXfs_0 = L_0;
		List_1_t834 * L_1 = (List_1_t834 *)il2cpp_codegen_object_new (List_1_t834_il2cpp_TypeInfo_var);
		List_1__ctor_m3548(L_1, /*hidden argument*/List_1__ctor_m3548_MethodInfo_var);
		__this->____NumFmts_1 = L_1;
		return;
	}
}
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxXf> Excel.Core.OpenXmlFormat.XlsxStyles::get_CellXfs()
extern "C" List_1_t833 * XlsxStyles_get_CellXfs_m3462 (XlsxStyles_t835 * __this, const MethodInfo* method)
{
	{
		List_1_t833 * L_0 = (__this->____cellXfs_0);
		return L_0;
	}
}
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt> Excel.Core.OpenXmlFormat.XlsxStyles::get_NumFmts()
extern "C" List_1_t834 * XlsxStyles_get_NumFmts_m3463 (XlsxStyles_t835 * __this, const MethodInfo* method)
{
	{
		List_1_t834 * L_0 = (__this->____NumFmts_1);
		return L_0;
	}
}
// Excel.Core.OpenXmlFormat.XlsxWorkbook
#include "Excel_Excel_Core_OpenXmlFormat_XlsxWorkbook.h"
#ifndef _MSC_VER
#else
#endif
// Excel.Core.OpenXmlFormat.XlsxWorkbook
#include "Excel_Excel_Core_OpenXmlFormat_XlsxWorkbookMethodDeclarations.h"

// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// Excel.Core.OpenXmlFormat.XlsxXf
#include "Excel_Excel_Core_OpenXmlFormat_XlsxXf.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
// Excel.Core.OpenXmlFormat.XlsxWorksheet
#include "Excel_Excel_Core_OpenXmlFormat_XlsxWorksheet.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReaderMethodDeclarations.h"
// Excel.Core.OpenXmlFormat.XlsxXf
#include "Excel_Excel_Core_OpenXmlFormat_XlsxXfMethodDeclarations.h"
// System.IO.Stream
#include "mscorlib_System_IO_StreamMethodDeclarations.h"
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"
// Excel.Core.OpenXmlFormat.XlsxWorksheet
#include "Excel_Excel_Core_OpenXmlFormat_XlsxWorksheetMethodDeclarations.h"


// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::.ctor(System.IO.Stream,System.IO.Stream,System.IO.Stream,System.IO.Stream)
extern TypeInfo* ArgumentNullException_t692_il2cpp_TypeInfo_var;
extern "C" void XlsxWorkbook__ctor_m3464 (XlsxWorkbook_t837 * __this, Stream_t844 * ___workbookStream, Stream_t844 * ___relsStream, Stream_t844 * ___sharedStringsStream, Stream_t844 * ___stylesStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(978);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		Stream_t844 * L_0 = ___workbookStream;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ArgumentNullException_t692 * L_1 = (ArgumentNullException_t692 *)il2cpp_codegen_object_new (ArgumentNullException_t692_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3549(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Stream_t844 * L_2 = ___workbookStream;
		XlsxWorkbook_ReadWorkbook_m3470(__this, L_2, /*hidden argument*/NULL);
		Stream_t844 * L_3 = ___relsStream;
		XlsxWorkbook_ReadWorkbookRels_m3471(__this, L_3, /*hidden argument*/NULL);
		Stream_t844 * L_4 = ___sharedStringsStream;
		XlsxWorkbook_ReadSharedStrings_m3469(__this, L_4, /*hidden argument*/NULL);
		Stream_t844 * L_5 = ___stylesStream;
		XlsxWorkbook_ReadStyles_m3468(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet> Excel.Core.OpenXmlFormat.XlsxWorkbook::get_Sheets()
extern "C" List_1_t836 * XlsxWorkbook_get_Sheets_m3465 (XlsxWorkbook_t837 * __this, const MethodInfo* method)
{
	{
		List_1_t836 * L_0 = (__this->___sheets_0);
		return L_0;
	}
}
// Excel.Core.OpenXmlFormat.XlsxSST Excel.Core.OpenXmlFormat.XlsxWorkbook::get_SST()
extern "C" XlsxSST_t832 * XlsxWorkbook_get_SST_m3466 (XlsxWorkbook_t837 * __this, const MethodInfo* method)
{
	{
		XlsxSST_t832 * L_0 = (__this->____SST_1);
		return L_0;
	}
}
// Excel.Core.OpenXmlFormat.XlsxStyles Excel.Core.OpenXmlFormat.XlsxWorkbook::get_Styles()
extern "C" XlsxStyles_t835 * XlsxWorkbook_get_Styles_m3467 (XlsxWorkbook_t837 * __this, const MethodInfo* method)
{
	{
		XlsxStyles_t835 * L_0 = (__this->____Styles_2);
		return L_0;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadStyles(System.IO.Stream)
extern TypeInfo* XlsxStyles_t835_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XlsxNumFmt_t831_il2cpp_TypeInfo_var;
extern TypeInfo* XlsxXf_t839_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void XlsxWorkbook_ReadStyles_m3468 (XlsxWorkbook_t837 * __this, Stream_t844 * ___xmlFileStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XlsxStyles_t835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1775);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XlsxNumFmt_t831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1772);
		XlsxXf_t839_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1771);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	XmlReader_t843 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	List_1_t833 * G_B24_0 = {0};
	List_1_t833 * G_B23_0 = {0};
	int32_t G_B25_0 = 0;
	List_1_t833 * G_B25_1 = {0};
	int32_t G_B27_0 = 0;
	List_1_t833 * G_B27_1 = {0};
	int32_t G_B26_0 = 0;
	List_1_t833 * G_B26_1 = {0};
	int32_t G_B28_0 = 0;
	int32_t G_B28_1 = 0;
	List_1_t833 * G_B28_2 = {0};
	{
		Stream_t844 * L_0 = ___xmlFileStream;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		XlsxStyles_t835 * L_1 = (XlsxStyles_t835 *)il2cpp_codegen_object_new (XlsxStyles_t835_il2cpp_TypeInfo_var);
		XlsxStyles__ctor_m3461(L_1, /*hidden argument*/NULL);
		__this->____Styles_2 = L_1;
		V_0 = 0;
		Stream_t844 * L_2 = ___xmlFileStream;
		XmlReader_t843 * L_3 = XmlReader_Create_m3550(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_015a;
		}

IL_001d:
		{
			bool L_4 = V_0;
			if (L_4)
			{
				goto IL_00a7;
			}
		}

IL_0023:
		{
			XmlReader_t843 * L_5 = V_1;
			NullCheck(L_5);
			int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_5);
			if ((!(((uint32_t)L_6) == ((uint32_t)1))))
			{
				goto IL_00a7;
			}
		}

IL_002c:
		{
			XmlReader_t843 * L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_7);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_9 = String_op_Equality_m1295(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral420, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_00a7;
			}
		}

IL_003e:
		{
			goto IL_009d;
		}

IL_0040:
		{
			XmlReader_t843 * L_10 = V_1;
			NullCheck(L_10);
			int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_10);
			if ((!(((uint32_t)L_11) == ((uint32_t)1))))
			{
				goto IL_0052;
			}
		}

IL_0049:
		{
			XmlReader_t843 * L_12 = V_1;
			NullCheck(L_12);
			int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_12);
			if ((((int32_t)L_13) == ((int32_t)1)))
			{
				goto IL_00a5;
			}
		}

IL_0052:
		{
			XmlReader_t843 * L_14 = V_1;
			NullCheck(L_14);
			int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_14);
			if ((!(((uint32_t)L_15) == ((uint32_t)1))))
			{
				goto IL_009d;
			}
		}

IL_005b:
		{
			XmlReader_t843 * L_16 = V_1;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_16);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_18 = String_op_Equality_m1295(NULL /*static, unused*/, L_17, (String_t*) &_stringLiteral421, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_009d;
			}
		}

IL_006d:
		{
			XlsxStyles_t835 * L_19 = (__this->____Styles_2);
			NullCheck(L_19);
			List_1_t834 * L_20 = XlsxStyles_get_NumFmts_m3463(L_19, /*hidden argument*/NULL);
			XmlReader_t843 * L_21 = V_1;
			NullCheck(L_21);
			String_t* L_22 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_21, (String_t*) &_stringLiteral422);
			int32_t L_23 = Int32_Parse_m3546(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
			XmlReader_t843 * L_24 = V_1;
			NullCheck(L_24);
			String_t* L_25 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_24, (String_t*) &_stringLiteral423);
			XlsxNumFmt_t831 * L_26 = (XlsxNumFmt_t831 *)il2cpp_codegen_object_new (XlsxNumFmt_t831_il2cpp_TypeInfo_var);
			XlsxNumFmt__ctor_m3459(L_26, L_23, L_25, /*hidden argument*/NULL);
			NullCheck(L_20);
			VirtActionInvoker1< XlsxNumFmt_t831 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt>::Add(!0) */, L_20, L_26);
		}

IL_009d:
		{
			XmlReader_t843 * L_27 = V_1;
			NullCheck(L_27);
			bool L_28 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_27);
			if (L_28)
			{
				goto IL_0040;
			}
		}

IL_00a5:
		{
			V_0 = 1;
		}

IL_00a7:
		{
			XmlReader_t843 * L_29 = V_1;
			NullCheck(L_29);
			int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_29);
			if ((!(((uint32_t)L_30) == ((uint32_t)1))))
			{
				goto IL_015a;
			}
		}

IL_00b3:
		{
			XmlReader_t843 * L_31 = V_1;
			NullCheck(L_31);
			String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_31);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_33 = String_op_Equality_m1295(NULL /*static, unused*/, L_32, (String_t*) &_stringLiteral424, /*hidden argument*/NULL);
			if (!L_33)
			{
				goto IL_015a;
			}
		}

IL_00c8:
		{
			goto IL_014d;
		}

IL_00cd:
		{
			XmlReader_t843 * L_34 = V_1;
			NullCheck(L_34);
			int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_34);
			if ((!(((uint32_t)L_35) == ((uint32_t)1))))
			{
				goto IL_00e2;
			}
		}

IL_00d6:
		{
			XmlReader_t843 * L_36 = V_1;
			NullCheck(L_36);
			int32_t L_37 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_36);
			if ((((int32_t)L_37) == ((int32_t)1)))
			{
				goto IL_0165;
			}
		}

IL_00e2:
		{
			XmlReader_t843 * L_38 = V_1;
			NullCheck(L_38);
			int32_t L_39 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_38);
			if ((!(((uint32_t)L_39) == ((uint32_t)1))))
			{
				goto IL_014d;
			}
		}

IL_00eb:
		{
			XmlReader_t843 * L_40 = V_1;
			NullCheck(L_40);
			String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_40);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_42 = String_op_Equality_m1295(NULL /*static, unused*/, L_41, (String_t*) &_stringLiteral425, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_014d;
			}
		}

IL_00fd:
		{
			XmlReader_t843 * L_43 = V_1;
			NullCheck(L_43);
			String_t* L_44 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_43, (String_t*) &_stringLiteral426);
			V_2 = L_44;
			XmlReader_t843 * L_45 = V_1;
			NullCheck(L_45);
			String_t* L_46 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_45, (String_t*) &_stringLiteral422);
			V_3 = L_46;
			XlsxStyles_t835 * L_47 = (__this->____Styles_2);
			NullCheck(L_47);
			List_1_t833 * L_48 = XlsxStyles_get_CellXfs_m3462(L_47, /*hidden argument*/NULL);
			String_t* L_49 = V_2;
			G_B23_0 = L_48;
			if (!L_49)
			{
				G_B24_0 = L_48;
				goto IL_012b;
			}
		}

IL_0123:
		{
			String_t* L_50 = V_2;
			int32_t L_51 = Int32_Parse_m3546(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
			G_B25_0 = L_51;
			G_B25_1 = G_B23_0;
			goto IL_012c;
		}

IL_012b:
		{
			G_B25_0 = (-1);
			G_B25_1 = G_B24_0;
		}

IL_012c:
		{
			String_t* L_52 = V_3;
			G_B26_0 = G_B25_0;
			G_B26_1 = G_B25_1;
			if (!L_52)
			{
				G_B27_0 = G_B25_0;
				G_B27_1 = G_B25_1;
				goto IL_0137;
			}
		}

IL_012f:
		{
			String_t* L_53 = V_3;
			int32_t L_54 = Int32_Parse_m3546(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
			G_B28_0 = L_54;
			G_B28_1 = G_B26_0;
			G_B28_2 = G_B26_1;
			goto IL_0138;
		}

IL_0137:
		{
			G_B28_0 = (-1);
			G_B28_1 = G_B27_0;
			G_B28_2 = G_B27_1;
		}

IL_0138:
		{
			XmlReader_t843 * L_55 = V_1;
			NullCheck(L_55);
			String_t* L_56 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_55, (String_t*) &_stringLiteral427);
			XlsxXf_t839 * L_57 = (XlsxXf_t839 *)il2cpp_codegen_object_new (XlsxXf_t839_il2cpp_TypeInfo_var);
			XlsxXf__ctor_m3484(L_57, G_B28_1, G_B28_0, L_56, /*hidden argument*/NULL);
			NullCheck(G_B28_2);
			VirtActionInvoker1< XlsxXf_t839 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxXf>::Add(!0) */, G_B28_2, L_57);
		}

IL_014d:
		{
			XmlReader_t843 * L_58 = V_1;
			NullCheck(L_58);
			bool L_59 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_58);
			if (L_59)
			{
				goto IL_00cd;
			}
		}

IL_0158:
		{
			goto IL_0165;
		}

IL_015a:
		{
			XmlReader_t843 * L_60 = V_1;
			NullCheck(L_60);
			bool L_61 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_60);
			if (L_61)
			{
				goto IL_001d;
			}
		}

IL_0165:
		{
			Stream_t844 * L_62 = ___xmlFileStream;
			NullCheck(L_62);
			VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_62);
			IL2CPP_LEAVE(0x177, FINALLY_016d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_016d;
	}

FINALLY_016d:
	{ // begin finally (depth: 1)
		{
			XmlReader_t843 * L_63 = V_1;
			if (!L_63)
			{
				goto IL_0176;
			}
		}

IL_0170:
		{
			XmlReader_t843 * L_64 = V_1;
			NullCheck(L_64);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_64);
		}

IL_0176:
		{
			IL2CPP_END_FINALLY(365)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(365)
	{
		IL2CPP_JUMP_TBL(0x177, IL_0177)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0177:
	{
		return;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadSharedStrings(System.IO.Stream)
extern TypeInfo* XlsxSST_t832_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void XlsxWorkbook_ReadSharedStrings_m3469 (XlsxWorkbook_t837 * __this, Stream_t844 * ___xmlFileStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XlsxSST_t832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1776);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	XmlReader_t843 * V_0 = {0};
	bool V_1 = false;
	String_t* V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t844 * L_0 = ___xmlFileStream;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		XlsxSST_t832 * L_1 = (XlsxSST_t832 *)il2cpp_codegen_object_new (XlsxSST_t832_il2cpp_TypeInfo_var);
		XlsxSST__ctor_m3460(L_1, /*hidden argument*/NULL);
		__this->____SST_1 = L_1;
		Stream_t844 * L_2 = ___xmlFileStream;
		XmlReader_t843 * L_3 = XmlReader_Create_m3550(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			V_2 = (String_t*) &_stringLiteral428;
			goto IL_007c;
		}

IL_0020:
		{
			XmlReader_t843 * L_4 = V_0;
			NullCheck(L_4);
			int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_4);
			if ((!(((uint32_t)L_5) == ((uint32_t)1))))
			{
				goto IL_0054;
			}
		}

IL_0029:
		{
			XmlReader_t843 * L_6 = V_0;
			NullCheck(L_6);
			String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_6);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_8 = String_op_Equality_m1295(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral429, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0054;
			}
		}

IL_003b:
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_004c;
			}
		}

IL_003e:
		{
			XlsxSST_t832 * L_10 = (__this->____SST_1);
			String_t* L_11 = V_2;
			NullCheck(L_10);
			VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_10, L_11);
			goto IL_004e;
		}

IL_004c:
		{
			V_1 = 1;
		}

IL_004e:
		{
			V_2 = (String_t*) &_stringLiteral428;
		}

IL_0054:
		{
			XmlReader_t843 * L_12 = V_0;
			NullCheck(L_12);
			int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_12);
			if ((!(((uint32_t)L_13) == ((uint32_t)1))))
			{
				goto IL_007c;
			}
		}

IL_005d:
		{
			XmlReader_t843 * L_14 = V_0;
			NullCheck(L_14);
			String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_16 = String_op_Equality_m1295(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral430, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_007c;
			}
		}

IL_006f:
		{
			String_t* L_17 = V_2;
			XmlReader_t843 * L_18 = V_0;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(52 /* System.String System.Xml.XmlReader::ReadElementContentAsString() */, L_18);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_20 = String_Concat_m1269(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
			V_2 = L_20;
		}

IL_007c:
		{
			XmlReader_t843 * L_21 = V_0;
			NullCheck(L_21);
			bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_21);
			if (L_22)
			{
				goto IL_0020;
			}
		}

IL_0084:
		{
			bool L_23 = V_1;
			if (!L_23)
			{
				goto IL_0093;
			}
		}

IL_0087:
		{
			XlsxSST_t832 * L_24 = (__this->____SST_1);
			String_t* L_25 = V_2;
			NullCheck(L_24);
			VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_24, L_25);
		}

IL_0093:
		{
			Stream_t844 * L_26 = ___xmlFileStream;
			NullCheck(L_26);
			VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_26);
			IL2CPP_LEAVE(0xA5, FINALLY_009b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		{
			XmlReader_t843 * L_27 = V_0;
			if (!L_27)
			{
				goto IL_00a4;
			}
		}

IL_009e:
		{
			XmlReader_t843 * L_28 = V_0;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_28);
		}

IL_00a4:
		{
			IL2CPP_END_FINALLY(155)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00a5:
	{
		return;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadWorkbook(System.IO.Stream)
extern TypeInfo* List_1_t836_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XlsxWorksheet_t838_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3551_MethodInfo_var;
extern "C" void XlsxWorkbook_ReadWorkbook_m3470 (XlsxWorkbook_t837 * __this, Stream_t844 * ___xmlFileStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1778);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XlsxWorksheet_t838_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1777);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		List_1__ctor_m3551_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483927);
		s_Il2CppMethodIntialized = true;
	}
	XmlReader_t843 * V_0 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t836 * L_0 = (List_1_t836 *)il2cpp_codegen_object_new (List_1_t836_il2cpp_TypeInfo_var);
		List_1__ctor_m3551(L_0, /*hidden argument*/List_1__ctor_m3551_MethodInfo_var);
		__this->___sheets_0 = L_0;
		Stream_t844 * L_1 = ___xmlFileStream;
		XmlReader_t843 * L_2 = XmlReader_Create_m3550(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0014:
		{
			XmlReader_t843 * L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_3);
			if ((!(((uint32_t)L_4) == ((uint32_t)1))))
			{
				goto IL_0065;
			}
		}

IL_001d:
		{
			XmlReader_t843 * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_5);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_7 = String_op_Equality_m1295(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral431, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0065;
			}
		}

IL_002f:
		{
			List_1_t836 * L_8 = (__this->___sheets_0);
			XmlReader_t843 * L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_9, (String_t*) &_stringLiteral302);
			XmlReader_t843 * L_11 = V_0;
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_11, (String_t*) &_stringLiteral432);
			int32_t L_13 = Int32_Parse_m3546(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
			XmlReader_t843 * L_14 = V_0;
			NullCheck(L_14);
			String_t* L_15 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_14, (String_t*) &_stringLiteral433);
			XlsxWorksheet_t838 * L_16 = (XlsxWorksheet_t838 *)il2cpp_codegen_object_new (XlsxWorksheet_t838_il2cpp_TypeInfo_var);
			XlsxWorksheet__ctor_m3481(L_16, L_10, L_13, L_15, /*hidden argument*/NULL);
			NullCheck(L_8);
			VirtActionInvoker1< XlsxWorksheet_t838 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>::Add(!0) */, L_8, L_16);
		}

IL_0065:
		{
			XmlReader_t843 * L_17 = V_0;
			NullCheck(L_17);
			bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_17);
			if (L_18)
			{
				goto IL_0014;
			}
		}

IL_006d:
		{
			Stream_t844 * L_19 = ___xmlFileStream;
			NullCheck(L_19);
			VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_19);
			IL2CPP_LEAVE(0x7F, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			XmlReader_t843 * L_20 = V_0;
			if (!L_20)
			{
				goto IL_007e;
			}
		}

IL_0078:
		{
			XmlReader_t843 * L_21 = V_0;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_21);
		}

IL_007e:
		{
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_007f:
	{
		return;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxWorkbook::ReadWorkbookRels(System.IO.Stream)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void XlsxWorkbook_ReadWorkbookRels_m3471 (XlsxWorkbook_t837 * __this, Stream_t844 * ___xmlFileStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	XmlReader_t843 * V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	XlsxWorksheet_t838 * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t844 * L_0 = ___xmlFileStream;
		XmlReader_t843 * L_1 = XmlReader_Create_m3550(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0081;
		}

IL_0009:
		{
			XmlReader_t843 * L_2 = V_0;
			NullCheck(L_2);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_2);
			if ((!(((uint32_t)L_3) == ((uint32_t)1))))
			{
				goto IL_0081;
			}
		}

IL_0012:
		{
			XmlReader_t843 * L_4 = V_0;
			NullCheck(L_4);
			String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_4);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_6 = String_op_Equality_m1295(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral434, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0081;
			}
		}

IL_0024:
		{
			XmlReader_t843 * L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_7, (String_t*) &_stringLiteral435);
			V_1 = L_8;
			V_2 = 0;
			goto IL_0073;
		}

IL_0034:
		{
			List_1_t836 * L_9 = (__this->___sheets_0);
			int32_t L_10 = V_2;
			NullCheck(L_9);
			XlsxWorksheet_t838 * L_11 = (XlsxWorksheet_t838 *)VirtFuncInvoker1< XlsxWorksheet_t838 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>::get_Item(System.Int32) */, L_9, L_10);
			V_3 = L_11;
			XlsxWorksheet_t838 * L_12 = V_3;
			NullCheck(L_12);
			String_t* L_13 = XlsxWorksheet_get_RID_m3478(L_12, /*hidden argument*/NULL);
			String_t* L_14 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_15 = String_op_Equality_m1295(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_006f;
			}
		}

IL_004f:
		{
			XlsxWorksheet_t838 * L_16 = V_3;
			XmlReader_t843 * L_17 = V_0;
			NullCheck(L_17);
			String_t* L_18 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_17, (String_t*) &_stringLiteral436);
			NullCheck(L_16);
			XlsxWorksheet_set_Path_m3480(L_16, L_18, /*hidden argument*/NULL);
			List_1_t836 * L_19 = (__this->___sheets_0);
			int32_t L_20 = V_2;
			XlsxWorksheet_t838 * L_21 = V_3;
			NullCheck(L_19);
			VirtActionInvoker2< int32_t, XlsxWorksheet_t838 * >::Invoke(29 /* System.Void System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>::set_Item(System.Int32,!0) */, L_19, L_20, L_21);
			goto IL_0081;
		}

IL_006f:
		{
			int32_t L_22 = V_2;
			V_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
		}

IL_0073:
		{
			int32_t L_23 = V_2;
			List_1_t836 * L_24 = (__this->___sheets_0);
			NullCheck(L_24);
			int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>::get_Count() */, L_24);
			if ((((int32_t)L_23) < ((int32_t)L_25)))
			{
				goto IL_0034;
			}
		}

IL_0081:
		{
			XmlReader_t843 * L_26 = V_0;
			NullCheck(L_26);
			bool L_27 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_26);
			if (L_27)
			{
				goto IL_0009;
			}
		}

IL_0089:
		{
			Stream_t844 * L_28 = ___xmlFileStream;
			NullCheck(L_28);
			VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_28);
			IL2CPP_LEAVE(0x9B, FINALLY_0091);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		{
			XmlReader_t843 * L_29 = V_0;
			if (!L_29)
			{
				goto IL_009a;
			}
		}

IL_0094:
		{
			XmlReader_t843 * L_30 = V_0;
			NullCheck(L_30);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_30);
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(145)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0x9B, IL_009b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_009b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean Excel.Core.OpenXmlFormat.XlsxWorksheet::get_IsEmpty()
extern "C" bool XlsxWorksheet_get_IsEmpty_m3472 (XlsxWorksheet_t838 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CIsEmptyU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxWorksheet::set_IsEmpty(System.Boolean)
extern "C" void XlsxWorksheet_set_IsEmpty_m3473 (XlsxWorksheet_t838 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CIsEmptyU3Ek__BackingField_5 = L_0;
		return;
	}
}
// Excel.Core.OpenXmlFormat.XlsxDimension Excel.Core.OpenXmlFormat.XlsxWorksheet::get_Dimension()
extern "C" XlsxDimension_t830 * XlsxWorksheet_get_Dimension_m3474 (XlsxWorksheet_t838 * __this, const MethodInfo* method)
{
	{
		XlsxDimension_t830 * L_0 = (__this->____dimension_0);
		return L_0;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxWorksheet::set_Dimension(Excel.Core.OpenXmlFormat.XlsxDimension)
extern "C" void XlsxWorksheet_set_Dimension_m3475 (XlsxWorksheet_t838 * __this, XlsxDimension_t830 * ___value, const MethodInfo* method)
{
	{
		XlsxDimension_t830 * L_0 = ___value;
		__this->____dimension_0 = L_0;
		return;
	}
}
// System.Int32 Excel.Core.OpenXmlFormat.XlsxWorksheet::get_ColumnsCount()
extern "C" int32_t XlsxWorksheet_get_ColumnsCount_m3476 (XlsxWorksheet_t838 * __this, const MethodInfo* method)
{
	{
		bool L_0 = XlsxWorksheet_get_IsEmpty_m3472(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		XlsxDimension_t830 * L_1 = (__this->____dimension_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		XlsxDimension_t830 * L_2 = (__this->____dimension_0);
		NullCheck(L_2);
		int32_t L_3 = XlsxDimension_get_LastCol_m3453(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001c:
	{
		return (-1);
	}

IL_001e:
	{
		return 0;
	}
}
// System.String Excel.Core.OpenXmlFormat.XlsxWorksheet::get_Name()
extern "C" String_t* XlsxWorksheet_get_Name_m3477 (XlsxWorksheet_t838 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____Name_1);
		return L_0;
	}
}
// System.String Excel.Core.OpenXmlFormat.XlsxWorksheet::get_RID()
extern "C" String_t* XlsxWorksheet_get_RID_m3478 (XlsxWorksheet_t838 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rid_3);
		return L_0;
	}
}
// System.String Excel.Core.OpenXmlFormat.XlsxWorksheet::get_Path()
extern "C" String_t* XlsxWorksheet_get_Path_m3479 (XlsxWorksheet_t838 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____path_4);
		return L_0;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxWorksheet::set_Path(System.String)
extern "C" void XlsxWorksheet_set_Path_m3480 (XlsxWorksheet_t838 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____path_4 = L_0;
		return;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxWorksheet::.ctor(System.String,System.Int32,System.String)
extern "C" void XlsxWorksheet__ctor_m3481 (XlsxWorksheet_t838 * __this, String_t* ___name, int32_t ___id, String_t* ___rid, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->____Name_1 = L_0;
		int32_t L_1 = ___id;
		__this->____id_2 = L_1;
		String_t* L_2 = ___rid;
		__this->____rid_3 = L_2;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 Excel.Core.OpenXmlFormat.XlsxXf::get_NumFmtId()
extern "C" int32_t XlsxXf_get_NumFmtId_m3482 (XlsxXf_t839 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____numFmtId_1);
		return L_0;
	}
}
// System.Boolean Excel.Core.OpenXmlFormat.XlsxXf::get_ApplyNumberFormat()
extern "C" bool XlsxXf_get_ApplyNumberFormat_m3483 (XlsxXf_t839 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____applyNumberFormat_2);
		return L_0;
	}
}
// System.Void Excel.Core.OpenXmlFormat.XlsxXf::.ctor(System.Int32,System.Int32,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void XlsxXf__ctor_m3484 (XlsxXf_t839 * __this, int32_t ___id, int32_t ___numFmtId, String_t* ___applyNumberFormat, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	XlsxXf_t839 * G_B2_0 = {0};
	XlsxXf_t839 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	XlsxXf_t839 * G_B3_1 = {0};
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___id;
		__this->____Id_0 = L_0;
		int32_t L_1 = ___numFmtId;
		__this->____numFmtId_1 = L_1;
		String_t* L_2 = ___applyNumberFormat;
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = ___applyNumberFormat;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1295(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral437, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		G_B3_1 = G_B1_0;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0026:
	{
		NullCheck(G_B3_1);
		G_B3_1->____applyNumberFormat_2 = G_B3_0;
		return;
	}
}
// Excel.Core.ReferenceHelper
#include "Excel_Excel_Core_ReferenceHelper.h"
#ifndef _MSC_VER
#else
#endif
// Excel.Core.ReferenceHelper
#include "Excel_Excel_Core_ReferenceHelperMethodDeclarations.h"



// System.Int32[] Excel.Core.ReferenceHelper::ReferenceToColumnAndRow(System.String)
extern TypeInfo* Regex_t355_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1_il2cpp_TypeInfo_var;
extern "C" Int32U5BU5D_t1* ReferenceHelper_ReferenceToColumnAndRow_m3485 (Object_t * __this /* static, unused */, String_t* ___reference, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Regex_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		Int32U5BU5D_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		s_Il2CppMethodIntialized = true;
	}
	Regex_t355 * V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5D_t1* V_7 = {0};
	{
		Regex_t355 * L_0 = (Regex_t355 *)il2cpp_codegen_object_new (Regex_t355_il2cpp_TypeInfo_var);
		Regex__ctor_m1839(L_0, (String_t*) &_stringLiteral438, /*hidden argument*/NULL);
		V_0 = L_0;
		Regex_t355 * L_1 = V_0;
		String_t* L_2 = ___reference;
		NullCheck(L_1);
		Match_t854 * L_3 = Regex_Match_m3552(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GroupCollection_t860 * L_4 = (GroupCollection_t860 *)VirtFuncInvoker0< GroupCollection_t860 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_3);
		NullCheck(L_4);
		Group_t861 * L_5 = GroupCollection_get_Item_m3541(L_4, 1, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = Capture_get_Value_m3542(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = String_ToUpper_m1571(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Regex_t355 * L_8 = V_0;
		String_t* L_9 = ___reference;
		NullCheck(L_8);
		Match_t854 * L_10 = Regex_Match_m3552(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GroupCollection_t860 * L_11 = (GroupCollection_t860 *)VirtFuncInvoker0< GroupCollection_t860 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_10);
		NullCheck(L_11);
		Group_t861 * L_12 = GroupCollection_get_Item_m3541(L_11, 2, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = Capture_get_Value_m3542(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		V_3 = 0;
		V_4 = 1;
		String_t* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1368(L_14, /*hidden argument*/NULL);
		V_5 = ((int32_t)((int32_t)L_15-(int32_t)1));
		goto IL_0075;
	}

IL_0051:
	{
		String_t* L_16 = V_1;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		uint16_t L_18 = String_get_Chars_m1370(L_16, L_17, /*hidden argument*/NULL);
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18-(int32_t)((int32_t)65)))+(int32_t)1));
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		int32_t L_21 = V_6;
		V_3 = ((int32_t)((int32_t)L_19+(int32_t)((int32_t)((int32_t)L_20*(int32_t)L_21))));
		int32_t L_22 = V_4;
		V_4 = ((int32_t)((int32_t)L_22*(int32_t)((int32_t)26)));
		int32_t L_23 = V_5;
		V_5 = ((int32_t)((int32_t)L_23-(int32_t)1));
	}

IL_0075:
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		V_7 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, 2));
		Int32U5BU5D_t1* L_25 = V_7;
		String_t* L_26 = V_2;
		int32_t L_27 = Int32_Parse_m3546(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_25, 0)) = (int32_t)L_27;
		Int32U5BU5D_t1* L_28 = V_7;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_28, 1)) = (int32_t)L_29;
		Int32U5BU5D_t1* L_30 = V_7;
		return L_30;
	}
}
// Excel.Core.ZipWorker
#include "Excel_Excel_Core_ZipWorker.h"
#ifndef _MSC_VER
#else
#endif
// Excel.Core.ZipWorker
#include "Excel_Excel_Core_ZipWorkerMethodDeclarations.h"

// ICSharpCode.SharpZipLib.Zip.ZipFile
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile.h"
// ICSharpCode.SharpZipLib.Zip.ZipEntry
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStream.h"
// System.IO.DirectoryInfo
#include "mscorlib_System_IO_DirectoryInfo.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// ICSharpCode.SharpZipLib.Zip.ZipFile
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFileMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.IO.Directory
#include "mscorlib_System_IO_DirectoryMethodDeclarations.h"
// ICSharpCode.SharpZipLib.Zip.ZipEntry
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntryMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// Excel.Log.LogManager
#include "Excel_Excel_Log_LogManagerMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
struct LogManager_t849;
struct ILog_t846;
struct ZipWorker_t841;
// Excel.Log.LogManager
#include "Excel_Excel_Log_LogManager.h"
struct LogManager_t849;
struct ILog_t846;
struct Object_t;
// Declaration Excel.Log.ILog Excel.Log.LogManager::Log<System.Object>(T)
// Excel.Log.ILog Excel.Log.LogManager::Log<System.Object>(T)
extern "C" Object_t * LogManager_Log_TisObject_t_m3554_gshared (Object_t * __this /* static, unused */, Object_t * ___type, const MethodInfo* method);
#define LogManager_Log_TisObject_t_m3554(__this /* static, unused */, ___type, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))LogManager_Log_TisObject_t_m3554_gshared)(__this /* static, unused */, ___type, method)
// Declaration Excel.Log.ILog Excel.Log.LogManager::Log<Excel.Core.ZipWorker>(T)
// Excel.Log.ILog Excel.Log.LogManager::Log<Excel.Core.ZipWorker>(T)
#define LogManager_Log_TisZipWorker_t841_m3553(__this /* static, unused */, ___type, method) (( Object_t * (*) (Object_t * /* static, unused */, ZipWorker_t841 *, const MethodInfo*))LogManager_Log_TisObject_t_m3554_gshared)(__this /* static, unused */, ___type, method)


// System.Boolean Excel.Core.ZipWorker::get_IsValid()
extern "C" bool ZipWorker_get_IsValid_m3486 (ZipWorker_t841 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isValid_8);
		return L_0;
	}
}
// System.String Excel.Core.ZipWorker::get_ExceptionMessage()
extern "C" String_t* ZipWorker_get_ExceptionMessage_m3487 (ZipWorker_t841 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____exceptionMessage_5);
		return L_0;
	}
}
// System.Void Excel.Core.ZipWorker::.ctor()
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern "C" void ZipWorker__ctor_m3488 (ZipWorker_t841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____format_7 = (String_t*) &_stringLiteral439;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_0 = Path_GetTempPath_m3555(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____tempEnv_4 = L_0;
		return;
	}
}
// System.Boolean Excel.Core.ZipWorker::Extract(System.IO.Stream)
extern TypeInfo* ZipFile_t855_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntry_t856_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t306_il2cpp_TypeInfo_var;
extern "C" bool ZipWorker_Extract_m3489 (ZipWorker_t841 * __this, Stream_t844 * ___fileStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipFile_t855_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1780);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		ZipEntry_t856_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1781);
		Exception_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		s_Il2CppMethodIntialized = true;
	}
	ZipFile_t855 * V_0 = {0};
	Object_t * V_1 = {0};
	ZipEntry_t856 * V_2 = {0};
	Exception_t306 * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t844 * L_0 = ___fileStream;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		ZipWorker_CleanFromTemp_m3495(__this, 0, /*hidden argument*/NULL);
		ZipWorker_NewTempPath_m3497(__this, /*hidden argument*/NULL);
		__this->____isValid_8 = 1;
		V_0 = (ZipFile_t855 *)NULL;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				Stream_t844 * L_1 = ___fileStream;
				ZipFile_t855 * L_2 = (ZipFile_t855 *)il2cpp_codegen_object_new (ZipFile_t855_il2cpp_TypeInfo_var);
				ZipFile__ctor_m3556(L_2, L_1, /*hidden argument*/NULL);
				V_0 = L_2;
				ZipFile_t855 * L_3 = V_0;
				NullCheck(L_3);
				Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator ICSharpCode.SharpZipLib.Zip.ZipFile::GetEnumerator() */, L_3);
				V_1 = L_4;
				goto IL_003f;
			}

IL_002b:
			{
				Object_t * L_5 = V_1;
				NullCheck(L_5);
				Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_5);
				V_2 = ((ZipEntry_t856 *)Castclass(L_6, ZipEntry_t856_il2cpp_TypeInfo_var));
				ZipFile_t855 * L_7 = V_0;
				ZipEntry_t856 * L_8 = V_2;
				ZipWorker_ExtractZipEntry_m3496(__this, L_7, L_8, /*hidden argument*/NULL);
			}

IL_003f:
			{
				Object_t * L_9 = V_1;
				NullCheck(L_9);
				bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_002b;
				}
			}

IL_0047:
			{
				goto IL_0066;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t306 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t306_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0049;
			throw e;
		}

CATCH_0049:
		{ // begin catch(System.Exception)
			V_3 = ((Exception_t306 *)__exception_local);
			__this->____isValid_8 = 0;
			Exception_t306 * L_11 = V_3;
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_11);
			__this->____exceptionMessage_5 = L_12;
			ZipWorker_CleanFromTemp_m3495(__this, 1, /*hidden argument*/NULL);
			goto IL_0066;
		} // end catch (depth: 2)

IL_0066:
		{
			IL2CPP_LEAVE(0x78, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		{
			Stream_t844 * L_13 = ___fileStream;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_13);
			ZipFile_t855 * L_14 = V_0;
			if (!L_14)
			{
				goto IL_0077;
			}
		}

IL_0071:
		{
			ZipFile_t855 * L_15 = V_0;
			NullCheck(L_15);
			ZipFile_Close_m3557(L_15, /*hidden argument*/NULL);
		}

IL_0077:
		{
			IL2CPP_END_FINALLY(104)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0078:
	{
		bool L_16 = (__this->____isValid_8);
		if (L_16)
		{
			goto IL_0082;
		}
	}
	{
		return 0;
	}

IL_0082:
	{
		bool L_17 = ZipWorker_CheckFolderTree_m3498(__this, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.IO.Stream Excel.Core.ZipWorker::GetSharedStringsStream()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern "C" Stream_t844 * ZipWorker_GetSharedStringsStream_m3490 (ZipWorker_t841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->____xlPath_6);
		String_t* L_1 = (__this->____format_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral440, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m3558(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Stream_t844 * L_4 = ZipWorker_GetStream_m3499(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.IO.Stream Excel.Core.ZipWorker::GetStylesStream()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern "C" Stream_t844 * ZipWorker_GetStylesStream_m3491 (ZipWorker_t841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->____xlPath_6);
		String_t* L_1 = (__this->____format_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral441, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m3558(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Stream_t844 * L_4 = ZipWorker_GetStream_m3499(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.IO.Stream Excel.Core.ZipWorker::GetWorkbookStream()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern "C" Stream_t844 * ZipWorker_GetWorkbookStream_m3492 (ZipWorker_t841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->____xlPath_6);
		String_t* L_1 = (__this->____format_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral442, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m3558(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		Stream_t844 * L_4 = ZipWorker_GetStream_m3499(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.IO.Stream Excel.Core.ZipWorker::GetWorksheetStream(System.String)
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern "C" Stream_t844 * ZipWorker_GetWorksheetStream_m3493 (ZipWorker_t841 * __this, String_t* ___sheetPath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___sheetPath;
		NullCheck(L_0);
		bool L_1 = String_StartsWith_m1347(L_0, (String_t*) &_stringLiteral443, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ___sheetPath;
		NullCheck(L_2);
		String_t* L_3 = String_Substring_m3180(L_2, 4, /*hidden argument*/NULL);
		___sheetPath = L_3;
	}

IL_0016:
	{
		String_t* L_4 = (__this->____xlPath_6);
		String_t* L_5 = ___sheetPath;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_6 = Path_Combine_m3558(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Stream_t844 * L_7 = ZipWorker_GetStream_m3499(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.IO.Stream Excel.Core.ZipWorker::GetWorkbookRelsStream()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern "C" Stream_t844 * ZipWorker_GetWorkbookRelsStream_m3494 (ZipWorker_t841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->____xlPath_6);
		String_t* L_1 = (__this->____format_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m1831(NULL /*static, unused*/, (String_t*) &_stringLiteral445, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m3558(NULL /*static, unused*/, (String_t*) &_stringLiteral444, L_2, /*hidden argument*/NULL);
		String_t* L_4 = Path_Combine_m3558(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		Stream_t844 * L_5 = ZipWorker_GetStream_m3499(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Excel.Core.ZipWorker::CleanFromTemp(System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t863_il2cpp_TypeInfo_var;
extern "C" void ZipWorker_CleanFromTemp_m3495 (ZipWorker_t841 * __this, bool ___catchIoError, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IOException_t863_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1782);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->____tempPath_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		__this->____isCleaned_2 = 1;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_2 = (__this->____tempPath_3);
			bool L_3 = Directory_Exists_m3559(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_002e;
			}
		}

IL_0022:
		{
			String_t* L_4 = (__this->____tempPath_3);
			Directory_Delete_m3560(NULL /*static, unused*/, L_4, 1, /*hidden argument*/NULL);
		}

IL_002e:
		{
			goto IL_0038;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t306 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IOException_t863_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0030;
		throw e;
	}

CATCH_0030:
	{ // begin catch(System.IO.IOException)
		{
			bool L_5 = ___catchIoError;
			if (L_5)
			{
				goto IL_0036;
			}
		}

IL_0034:
		{
			il2cpp_codegen_raise_exception(__exception_local);
		}

IL_0036:
		{
			goto IL_0038;
		}
	} // end catch (depth: 1)

IL_0038:
	{
		return;
	}
}
// System.Void Excel.Core.ZipWorker::ExtractZipEntry(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t159_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ZipWorker_ExtractZipEntry_m3496 (ZipWorker_t841 * __this, ZipFile_t855 * ___zipFile, ZipEntry_t856 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		ByteU5BU5D_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	FileStream_t327 * V_2 = {0};
	Stream_t844 * V_3 = {0};
	int32_t V_4 = 0;
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B6_0 = {0};
	{
		ZipEntry_t856 * L_0 = ___entry;
		NullCheck(L_0);
		bool L_1 = ZipEntry_IsCompressionMethodSupported_m3561(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ZipEntry_t856 * L_2 = ___entry;
		NullCheck(L_2);
		String_t* L_3 = ZipEntry_get_Name_m3562(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		return;
	}

IL_0016:
	{
		String_t* L_5 = (__this->____tempPath_3);
		ZipEntry_t856 * L_6 = ___entry;
		NullCheck(L_6);
		String_t* L_7 = ZipEntry_get_Name_m3562(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_8 = Path_Combine_m3558(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		ZipEntry_t856 * L_9 = ___entry;
		NullCheck(L_9);
		bool L_10 = ZipEntry_get_IsDirectory_m3563(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_12 = Path_GetFullPath_m3564(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		String_t* L_13 = Path_GetDirectoryName_m3565(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		G_B6_0 = L_13;
		goto IL_003e;
	}

IL_003d:
	{
		String_t* L_14 = V_0;
		G_B6_0 = L_14;
	}

IL_003e:
	{
		V_1 = G_B6_0;
		String_t* L_15 = V_1;
		bool L_16 = Directory_Exists_m3559(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_17 = V_1;
		Directory_CreateDirectory_m3566(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
	}

IL_004e:
	{
		ZipEntry_t856 * L_18 = ___entry;
		NullCheck(L_18);
		bool L_19 = ZipEntry_get_IsFile_m3567(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		String_t* L_20 = V_0;
		FileStream_t327 * L_21 = File_Create_m1585(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_005e:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t159* L_22 = (__this->___buffer_0);
			if (L_22)
			{
				goto IL_0076;
			}
		}

IL_0066:
		{
			__this->___buffer_0 = ((ByteU5BU5D_t159*)SZArrayNew(ByteU5BU5D_t159_il2cpp_TypeInfo_var, ((int32_t)4096)));
		}

IL_0076:
		{
			ZipFile_t855 * L_23 = ___zipFile;
			ZipEntry_t856 * L_24 = ___entry;
			NullCheck(L_23);
			Stream_t844 * L_25 = ZipFile_GetInputStream_m3568(L_23, L_24, /*hidden argument*/NULL);
			V_3 = L_25;
		}

IL_007e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_008f;
			}

IL_0080:
			{
				FileStream_t327 * L_26 = V_2;
				ByteU5BU5D_t159* L_27 = (__this->___buffer_0);
				int32_t L_28 = V_4;
				NullCheck(L_26);
				VirtActionInvoker3< ByteU5BU5D_t159*, int32_t, int32_t >::Invoke(22 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, L_28);
			}

IL_008f:
			{
				Stream_t844 * L_29 = V_3;
				ByteU5BU5D_t159* L_30 = (__this->___buffer_0);
				ByteU5BU5D_t159* L_31 = (__this->___buffer_0);
				NullCheck(L_31);
				NullCheck(L_29);
				int32_t L_32 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t159*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_29, L_30, 0, (((int32_t)(((Array_t *)L_31)->max_length))));
				int32_t L_33 = L_32;
				V_4 = L_33;
				if ((((int32_t)L_33) > ((int32_t)0)))
				{
					goto IL_0080;
				}
			}

IL_00aa:
			{
				IL2CPP_LEAVE(0xB6, FINALLY_00ac);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t306 *)e.ex;
			goto FINALLY_00ac;
		}

FINALLY_00ac:
		{ // begin finally (depth: 2)
			{
				Stream_t844 * L_34 = V_3;
				if (!L_34)
				{
					goto IL_00b5;
				}
			}

IL_00af:
			{
				Stream_t844 * L_35 = V_3;
				NullCheck(L_35);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_35);
			}

IL_00b5:
			{
				IL2CPP_END_FINALLY(172)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(172)
		{
			IL2CPP_JUMP_TBL(0xB6, IL_00b6)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
		}

IL_00b6:
		{
			FileStream_t327 * L_36 = V_2;
			NullCheck(L_36);
			VirtActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Flush() */, L_36);
			IL2CPP_LEAVE(0xC8, FINALLY_00be);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00be;
	}

FINALLY_00be:
	{ // begin finally (depth: 1)
		{
			FileStream_t327 * L_37 = V_2;
			if (!L_37)
			{
				goto IL_00c7;
			}
		}

IL_00c1:
		{
			FileStream_t327 * L_38 = V_2;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_38);
		}

IL_00c7:
		{
			IL2CPP_END_FINALLY(190)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(190)
	{
		IL2CPP_JUMP_TBL(0xC8, IL_00c8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00c8:
	{
		return;
	}
}
// System.Void Excel.Core.ZipWorker::NewTempPath()
extern TypeInfo* Guid_t713_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t445_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern TypeInfo* LogManager_t849_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* ILog_t846_il2cpp_TypeInfo_var;
extern const MethodInfo* LogManager_Log_TisZipWorker_t841_m3553_MethodInfo_var;
extern "C" void ZipWorker_NewTempPath_m3497 (ZipWorker_t841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1019);
		DateTime_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(901);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		LogManager_t849_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1784);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		ILog_t846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1785);
		LogManager_Log_TisZipWorker_t841_m3553_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483928);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Guid_t713  V_1 = {0};
	DateTime_t445  V_2 = {0};
	int64_t V_3 = 0;
	ObjectU5BU5D_t300* V_4 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t713_il2cpp_TypeInfo_var);
		Guid_t713  L_0 = Guid_NewGuid_m3569(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = Guid_ToString_m3262((&V_1), (String_t*) &_stringLiteral446, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = (__this->____tempEnv_4);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t445_il2cpp_TypeInfo_var);
		DateTime_t445  L_3 = DateTime_get_Now_m3160(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_3;
		int64_t L_4 = DateTime_ToFileTimeUtc_m3570((&V_2), /*hidden argument*/NULL);
		V_3 = L_4;
		String_t* L_5 = Int64_ToString_m3571((&V_3), /*hidden argument*/NULL);
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral447, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_8 = Path_Combine_m3558(NULL /*static, unused*/, L_2, L_7, /*hidden argument*/NULL);
		__this->____tempPath_3 = L_8;
		__this->____isCleaned_2 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(LogManager_t849_il2cpp_TypeInfo_var);
		Object_t * L_9 = LogManager_Log_TisZipWorker_t841_m3553(NULL /*static, unused*/, __this, /*hidden argument*/LogManager_Log_TisZipWorker_t841_m3553_MethodInfo_var);
		V_4 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t300* L_10 = V_4;
		String_t* L_11 = (__this->____tempPath_3);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 0)) = (Object_t *)L_11;
		ObjectU5BU5D_t300* L_12 = V_4;
		NullCheck(L_9);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t300* >::Invoke(1 /* System.Void Excel.Log.ILog::Debug(System.String,System.Object[]) */, ILog_t846_il2cpp_TypeInfo_var, L_9, (String_t*) &_stringLiteral448, L_12);
		String_t* L_13 = (__this->____tempPath_3);
		Directory_CreateDirectory_m3566(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Excel.Core.ZipWorker::CheckFolderTree()
extern TypeInfo* Path_t862_il2cpp_TypeInfo_var;
extern "C" bool ZipWorker_CheckFolderTree_m3498 (ZipWorker_t841 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t862_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1779);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->____tempPath_3);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_Combine_m3558(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral449, /*hidden argument*/NULL);
		__this->____xlPath_6 = L_1;
		String_t* L_2 = (__this->____xlPath_6);
		bool L_3 = Directory_Exists_m3559(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_4 = (__this->____xlPath_6);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_5 = Path_Combine_m3558(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral450, /*hidden argument*/NULL);
		bool L_6 = Directory_Exists_m3559(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_7 = (__this->____xlPath_6);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_8 = Path_Combine_m3558(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral442, /*hidden argument*/NULL);
		bool L_9 = File_Exists_m1583(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_10 = (__this->____xlPath_6);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t862_il2cpp_TypeInfo_var);
		String_t* L_11 = Path_Combine_m3558(NULL /*static, unused*/, L_10, (String_t*) &_stringLiteral441, /*hidden argument*/NULL);
		bool L_12 = File_Exists_m1583(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0067:
	{
		return 0;
	}
}
// System.IO.Stream Excel.Core.ZipWorker::GetStream(System.String)
extern "C" Stream_t844 * ZipWorker_GetStream_m3499 (Object_t * __this /* static, unused */, String_t* ___filePath, const MethodInfo* method)
{
	{
		String_t* L_0 = ___filePath;
		bool L_1 = File_Exists_m1583(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_2 = ___filePath;
		FileStream_t327 * L_3 = File_Open_m1821(NULL /*static, unused*/, L_2, 3, 1, /*hidden argument*/NULL);
		return L_3;
	}

IL_0011:
	{
		return (Stream_t844 *)NULL;
	}
}
// System.Void Excel.Core.ZipWorker::Dispose()
extern "C" void ZipWorker_Dispose_m3500 (ZipWorker_t841 * __this, const MethodInfo* method)
{
	{
		ZipWorker_Dispose_m3501(__this, 1, /*hidden argument*/NULL);
		GC_SuppressFinalize_m3572(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Excel.Core.ZipWorker::Dispose(System.Boolean)
extern "C" void ZipWorker_Dispose_m3501 (ZipWorker_t841 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___disposed_1);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		bool L_1 = ___disposing;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		bool L_2 = (__this->____isCleaned_2);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		ZipWorker_CleanFromTemp_m3495(__this, 0, /*hidden argument*/NULL);
	}

IL_001a:
	{
		__this->___buffer_0 = (ByteU5BU5D_t159*)NULL;
		__this->___disposed_1 = 1;
	}

IL_0028:
	{
		return;
	}
}
// System.Void Excel.Core.ZipWorker::Finalize()
extern "C" void ZipWorker_Finalize_m3502 (ZipWorker_t841 * __this, const MethodInfo* method)
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
		ZipWorker_Dispose_m3501(__this, 0, /*hidden argument*/NULL);
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
// Excel.ExcelReaderFactory
#include "Excel_Excel_ExcelReaderFactory.h"
#ifndef _MSC_VER
#else
#endif
// Excel.ExcelReaderFactory
#include "Excel_Excel_ExcelReaderFactoryMethodDeclarations.h"

// Excel.ExcelOpenXmlReader
#include "Excel_Excel_ExcelOpenXmlReader.h"
// Excel.ExcelOpenXmlReader
#include "Excel_Excel_ExcelOpenXmlReaderMethodDeclarations.h"


// Excel.IExcelDataReader Excel.ExcelReaderFactory::CreateOpenXmlReader(System.IO.Stream)
extern TypeInfo* ExcelOpenXmlReader_t845_il2cpp_TypeInfo_var;
extern TypeInfo* IExcelDataReader_t347_il2cpp_TypeInfo_var;
extern "C" Object_t * ExcelReaderFactory_CreateOpenXmlReader_m1822 (Object_t * __this /* static, unused */, Stream_t844 * ___fileStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcelOpenXmlReader_t845_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1786);
		IExcelDataReader_t347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		ExcelOpenXmlReader_t845 * L_0 = (ExcelOpenXmlReader_t845 *)il2cpp_codegen_object_new (ExcelOpenXmlReader_t845_il2cpp_TypeInfo_var);
		ExcelOpenXmlReader__ctor_m3503(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Stream_t844 * L_2 = ___fileStream;
		NullCheck(L_1);
		InterfaceActionInvoker1< Stream_t844 * >::Invoke(0 /* System.Void Excel.IExcelDataReader::Initialize(System.IO.Stream) */, IExcelDataReader_t347_il2cpp_TypeInfo_var, L_1, L_2);
		Object_t * L_3 = V_0;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// <PrivateImplementationDetails>{10037FEE-F752-4B71-ADAE-B726711CA9CA}/__StaticArrayInitTypeSize=48
#include "Excel_U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2_0.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_8.h"
// System.Collections.Generic.List`1/Enumerator<Excel.Core.OpenXmlFormat.XlsxNumFmt>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_8MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Excel.Core.OpenXmlFormat.XlsxNumFmt>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1MethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Data.DataRowCollection
#include "System_Data_System_Data_DataRowCollectionMethodDeclarations.h"


// System.Void Excel.ExcelOpenXmlReader::.ctor()
extern TypeInfo* Guid_t713_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t154_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3573_MethodInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2D4B71U2DADAEU2DB726711CA9CAU7D_t853____U24U24method0x60001a2U2D1_1_FieldInfo_var;
extern "C" void ExcelOpenXmlReader__ctor_m3503 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1019);
		Int32U5BU5D_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		List_1_t154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		List_1__ctor_m3573_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483929);
		U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2D4B71U2DADAEU2DB726711CA9CAU7D_t853____U24U24method0x60001a2U2D1_1_FieldInfo_var = il2cpp_codegen_field_info_from_index(1766, 1);
		s_Il2CppMethodIntialized = true;
	}
	Guid_t713  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t713_il2cpp_TypeInfo_var);
		Guid_t713  L_0 = Guid_NewGuid_m3569(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		NullCheck(Box(Guid_t713_il2cpp_TypeInfo_var, (&V_0)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, Box(Guid_t713_il2cpp_TypeInfo_var, (&V_0)));
		__this->___instanceId_14 = L_1;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		__this->____isValid_1 = 1;
		__this->____isFirstRead_3 = 1;
		Int32U5BU5D_t1* L_2 = ((Int32U5BU5D_t1*)SZArrayNew(Int32U5BU5D_t1_il2cpp_TypeInfo_var, ((int32_t)12)));
		RuntimeHelpers_InitializeArray_m1809(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, LoadFieldToken(U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2D4B71U2DADAEU2DB726711CA9CAU7D_t853____U24U24method0x60001a2U2D1_1_FieldInfo_var), /*hidden argument*/NULL);
		List_1_t154 * L_3 = (List_1_t154 *)il2cpp_codegen_object_new (List_1_t154_il2cpp_TypeInfo_var);
		List_1__ctor_m3573(L_3, (Object_t*)(Object_t*)L_2, /*hidden argument*/List_1__ctor_m3573_MethodInfo_var);
		__this->____defaultDateTimeStyles_15 = L_3;
		return;
	}
}
// System.Void Excel.ExcelOpenXmlReader::ReadGlobals()
extern TypeInfo* XlsxWorkbook_t837_il2cpp_TypeInfo_var;
extern "C" void ExcelOpenXmlReader_ReadGlobals_m3504 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XlsxWorkbook_t837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1787);
		s_Il2CppMethodIntialized = true;
	}
	{
		ZipWorker_t841 * L_0 = (__this->____zipWorker_7);
		NullCheck(L_0);
		Stream_t844 * L_1 = ZipWorker_GetWorkbookStream_m3492(L_0, /*hidden argument*/NULL);
		ZipWorker_t841 * L_2 = (__this->____zipWorker_7);
		NullCheck(L_2);
		Stream_t844 * L_3 = ZipWorker_GetWorkbookRelsStream_m3494(L_2, /*hidden argument*/NULL);
		ZipWorker_t841 * L_4 = (__this->____zipWorker_7);
		NullCheck(L_4);
		Stream_t844 * L_5 = ZipWorker_GetSharedStringsStream_m3490(L_4, /*hidden argument*/NULL);
		ZipWorker_t841 * L_6 = (__this->____zipWorker_7);
		NullCheck(L_6);
		Stream_t844 * L_7 = ZipWorker_GetStylesStream_m3491(L_6, /*hidden argument*/NULL);
		XlsxWorkbook_t837 * L_8 = (XlsxWorkbook_t837 *)il2cpp_codegen_object_new (XlsxWorkbook_t837_il2cpp_TypeInfo_var);
		XlsxWorkbook__ctor_m3464(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		__this->____workbook_0 = L_8;
		XlsxWorkbook_t837 * L_9 = (__this->____workbook_0);
		NullCheck(L_9);
		XlsxStyles_t835 * L_10 = XlsxWorkbook_get_Styles_m3467(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		List_1_t834 * L_11 = XlsxStyles_get_NumFmts_m3463(L_10, /*hidden argument*/NULL);
		ExcelOpenXmlReader_CheckDateTimeNumFmts_m3505(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Excel.ExcelOpenXmlReader::CheckDateTimeNumFmts(System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt>)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatReader_t827_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t864_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3574_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3575_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3576_MethodInfo_var;
extern "C" void ExcelOpenXmlReader_CheckDateTimeNumFmts_m3505 (ExcelOpenXmlReader_t845 * __this, List_1_t834 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		FormatReader_t827_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1788);
		Enumerator_t864_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1789);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		List_1_GetEnumerator_m3574_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483930);
		Enumerator_get_Current_m3575_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483931);
		Enumerator_MoveNext_m3576_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483932);
		s_Il2CppMethodIntialized = true;
	}
	XlsxNumFmt_t831 * V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	FormatReader_t827 * V_4 = {0};
	FormatReader_t827 * V_5 = {0};
	Enumerator_t864  V_6 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t834 * L_0 = ___list;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxNumFmt>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_t834 * L_2 = ___list;
		NullCheck(L_2);
		Enumerator_t864  L_3 = List_1_GetEnumerator_m3574(L_2, /*hidden argument*/List_1_GetEnumerator_m3574_MethodInfo_var);
		V_6 = L_3;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008d;
		}

IL_0013:
		{
			XlsxNumFmt_t831 * L_4 = Enumerator_get_Current_m3575((&V_6), /*hidden argument*/Enumerator_get_Current_m3575_MethodInfo_var);
			V_0 = L_4;
			XlsxNumFmt_t831 * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = XlsxNumFmt_get_FormatCode_m3458(L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_7 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_008d;
			}
		}

IL_0028:
		{
			XlsxNumFmt_t831 * L_8 = V_0;
			NullCheck(L_8);
			String_t* L_9 = XlsxNumFmt_get_FormatCode_m3458(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			String_t* L_10 = String_ToLower_m1702(L_9, /*hidden argument*/NULL);
			V_1 = L_10;
			goto IL_0053;
		}

IL_0036:
		{
			String_t* L_11 = V_1;
			int32_t L_12 = V_2;
			NullCheck(L_11);
			int32_t L_13 = String_IndexOf_m3179(L_11, ((int32_t)34), ((int32_t)((int32_t)L_12+(int32_t)1)), /*hidden argument*/NULL);
			V_3 = L_13;
			int32_t L_14 = V_3;
			if ((((int32_t)L_14) <= ((int32_t)0)))
			{
				goto IL_0053;
			}
		}

IL_0046:
		{
			String_t* L_15 = V_1;
			int32_t L_16 = V_2;
			int32_t L_17 = V_3;
			int32_t L_18 = V_2;
			NullCheck(L_15);
			String_t* L_19 = String_Remove_m1572(L_15, L_16, ((int32_t)((int32_t)((int32_t)((int32_t)L_17-(int32_t)L_18))+(int32_t)1)), /*hidden argument*/NULL);
			V_1 = L_19;
		}

IL_0053:
		{
			String_t* L_20 = V_1;
			NullCheck(L_20);
			int32_t L_21 = String_IndexOf_m3182(L_20, ((int32_t)34), /*hidden argument*/NULL);
			int32_t L_22 = L_21;
			V_2 = L_22;
			if ((((int32_t)L_22) > ((int32_t)0)))
			{
				goto IL_0036;
			}
		}

IL_0060:
		{
			FormatReader_t827 * L_23 = (FormatReader_t827 *)il2cpp_codegen_object_new (FormatReader_t827_il2cpp_TypeInfo_var);
			FormatReader__ctor_m3434(L_23, /*hidden argument*/NULL);
			V_5 = L_23;
			FormatReader_t827 * L_24 = V_5;
			String_t* L_25 = V_1;
			NullCheck(L_24);
			FormatReader_set_FormatString_m3433(L_24, L_25, /*hidden argument*/NULL);
			FormatReader_t827 * L_26 = V_5;
			V_4 = L_26;
			FormatReader_t827 * L_27 = V_4;
			NullCheck(L_27);
			bool L_28 = FormatReader_IsDateFormatString_m3435(L_27, /*hidden argument*/NULL);
			if (!L_28)
			{
				goto IL_008d;
			}
		}

IL_007c:
		{
			List_1_t154 * L_29 = (__this->____defaultDateTimeStyles_15);
			XlsxNumFmt_t831 * L_30 = V_0;
			NullCheck(L_30);
			int32_t L_31 = XlsxNumFmt_get_Id_m3457(L_30, /*hidden argument*/NULL);
			NullCheck(L_29);
			VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0) */, L_29, L_31);
		}

IL_008d:
		{
			bool L_32 = Enumerator_MoveNext_m3576((&V_6), /*hidden argument*/Enumerator_MoveNext_m3576_MethodInfo_var);
			if (L_32)
			{
				goto IL_0013;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xA9, FINALLY_009b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		NullCheck(Box(Enumerator_t864_il2cpp_TypeInfo_var, (&V_6)));
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, Box(Enumerator_t864_il2cpp_TypeInfo_var, (&V_6)));
		IL2CPP_END_FINALLY(155)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_JUMP_TBL(0xA9, IL_00a9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00a9:
	{
		return;
	}
}
// System.Void Excel.ExcelOpenXmlReader::ReadSheetGlobals(Excel.Core.OpenXmlFormat.XlsxWorksheet)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XlsxDimension_t830_il2cpp_TypeInfo_var;
extern "C" void ExcelOpenXmlReader_ReadSheetGlobals_m3506 (ExcelOpenXmlReader_t845 * __this, XlsxWorksheet_t838 * ___sheet, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		XlsxDimension_t830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1790);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	Int32U5BU5D_t1* V_5 = {0};
	{
		XmlReader_t843 * L_0 = (__this->____xmlReader_8);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		XmlReader_t843 * L_1 = (__this->____xmlReader_8);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(29 /* System.Void System.Xml.XmlReader::Close() */, L_1);
	}

IL_0013:
	{
		Stream_t844 * L_2 = (__this->____sheetStream_9);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Stream_t844 * L_3 = (__this->____sheetStream_9);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_3);
	}

IL_0026:
	{
		ZipWorker_t841 * L_4 = (__this->____zipWorker_7);
		XlsxWorksheet_t838 * L_5 = ___sheet;
		NullCheck(L_5);
		String_t* L_6 = XlsxWorksheet_get_Path_m3479(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Stream_t844 * L_7 = ZipWorker_GetWorksheetStream_m3493(L_4, L_6, /*hidden argument*/NULL);
		__this->____sheetStream_9 = L_7;
		Stream_t844 * L_8 = (__this->____sheetStream_9);
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0046:
	{
		Stream_t844 * L_9 = (__this->____sheetStream_9);
		XmlReader_t843 * L_10 = XmlReader_Create_m3550(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		__this->____xmlReader_8 = L_10;
		V_0 = 0;
		V_1 = 0;
		__this->____namespaceUri_16 = (String_t*)NULL;
		V_2 = 0;
		goto IL_016a;
	}

IL_0069:
	{
		XmlReader_t843 * L_11 = (__this->____xmlReader_8);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_009f;
		}
	}
	{
		XmlReader_t843 * L_13 = (__this->____xmlReader_8);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m1295(NULL /*static, unused*/, L_14, (String_t*) &_stringLiteral451, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009f;
		}
	}
	{
		XmlReader_t843 * L_16 = (__this->____xmlReader_8);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_16);
		__this->____namespaceUri_16 = L_17;
	}

IL_009f:
	{
		XmlReader_t843 * L_18 = (__this->____xmlReader_8);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_18);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00e6;
		}
	}
	{
		XmlReader_t843 * L_20 = (__this->____xmlReader_8);
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m1295(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral452, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00e6;
		}
	}
	{
		XmlReader_t843 * L_23 = (__this->____xmlReader_8);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_23, (String_t*) &_stringLiteral453);
		V_3 = L_24;
		XlsxWorksheet_t838 * L_25 = ___sheet;
		String_t* L_26 = V_3;
		XlsxDimension_t830 * L_27 = (XlsxDimension_t830 *)il2cpp_codegen_object_new (XlsxDimension_t830_il2cpp_TypeInfo_var);
		XlsxDimension__ctor_m3446(L_27, L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		XlsxWorksheet_set_Dimension_m3475(L_25, L_27, /*hidden argument*/NULL);
		goto IL_017a;
	}

IL_00e6:
	{
		XmlReader_t843 * L_28 = (__this->____xmlReader_8);
		NullCheck(L_28);
		int32_t L_29 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_28);
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_010f;
		}
	}
	{
		XmlReader_t843 * L_30 = (__this->____xmlReader_8);
		NullCheck(L_30);
		String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_30);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_32 = String_op_Equality_m1295(NULL /*static, unused*/, L_31, (String_t*) &_stringLiteral454, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_33 = V_0;
		V_0 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_010f:
	{
		XlsxWorksheet_t838 * L_34 = ___sheet;
		NullCheck(L_34);
		XlsxDimension_t830 * L_35 = XlsxWorksheet_get_Dimension_m3474(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_36 = V_1;
		if (L_36)
		{
			goto IL_016a;
		}
	}
	{
		XmlReader_t843 * L_37 = (__this->____xmlReader_8);
		NullCheck(L_37);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_37);
		if ((!(((uint32_t)L_38) == ((uint32_t)1))))
		{
			goto IL_016a;
		}
	}
	{
		XmlReader_t843 * L_39 = (__this->____xmlReader_8);
		NullCheck(L_39);
		String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_39);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_41 = String_op_Equality_m1295(NULL /*static, unused*/, L_40, (String_t*) &_stringLiteral455, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_016a;
		}
	}
	{
		XmlReader_t843 * L_42 = (__this->____xmlReader_8);
		NullCheck(L_42);
		String_t* L_43 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_42, (String_t*) &_stringLiteral357);
		V_4 = L_43;
		String_t* L_44 = V_4;
		if (!L_44)
		{
			goto IL_016a;
		}
	}
	{
		String_t* L_45 = V_4;
		Int32U5BU5D_t1* L_46 = ReferenceHelper_ReferenceToColumnAndRow_m3485(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		V_5 = L_46;
		Int32U5BU5D_t1* L_47 = V_5;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 1);
		int32_t L_48 = 1;
		int32_t L_49 = V_2;
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48))) <= ((int32_t)L_49)))
		{
			goto IL_016a;
		}
	}
	{
		Int32U5BU5D_t1* L_50 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		int32_t L_51 = 1;
		V_2 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_50, L_51));
	}

IL_016a:
	{
		XmlReader_t843 * L_52 = (__this->____xmlReader_8);
		NullCheck(L_52);
		bool L_53 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_52);
		if (L_53)
		{
			goto IL_0069;
		}
	}

IL_017a:
	{
		XlsxWorksheet_t838 * L_54 = ___sheet;
		NullCheck(L_54);
		XlsxDimension_t830 * L_55 = XlsxWorksheet_get_Dimension_m3474(L_54, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_01e0;
		}
	}
	{
		int32_t L_56 = V_1;
		if (L_56)
		{
			goto IL_0187;
		}
	}
	{
		int32_t L_57 = V_2;
		V_1 = L_57;
	}

IL_0187:
	{
		int32_t L_58 = V_0;
		if (!L_58)
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_59 = V_1;
		if (L_59)
		{
			goto IL_0195;
		}
	}

IL_018d:
	{
		XlsxWorksheet_t838 * L_60 = ___sheet;
		NullCheck(L_60);
		XlsxWorksheet_set_IsEmpty_m3473(L_60, 1, /*hidden argument*/NULL);
		return;
	}

IL_0195:
	{
		XlsxWorksheet_t838 * L_61 = ___sheet;
		int32_t L_62 = V_0;
		int32_t L_63 = V_1;
		XlsxDimension_t830 * L_64 = (XlsxDimension_t830 *)il2cpp_codegen_object_new (XlsxDimension_t830_il2cpp_TypeInfo_var);
		XlsxDimension__ctor_m3447(L_64, L_62, L_63, /*hidden argument*/NULL);
		NullCheck(L_61);
		XlsxWorksheet_set_Dimension_m3475(L_61, L_64, /*hidden argument*/NULL);
		XmlReader_t843 * L_65 = (__this->____xmlReader_8);
		NullCheck(L_65);
		VirtActionInvoker0::Invoke(29 /* System.Void System.Xml.XmlReader::Close() */, L_65);
		Stream_t844 * L_66 = (__this->____sheetStream_9);
		NullCheck(L_66);
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_66);
		ZipWorker_t841 * L_67 = (__this->____zipWorker_7);
		XlsxWorksheet_t838 * L_68 = ___sheet;
		NullCheck(L_68);
		String_t* L_69 = XlsxWorksheet_get_Path_m3479(L_68, /*hidden argument*/NULL);
		NullCheck(L_67);
		Stream_t844 * L_70 = ZipWorker_GetWorksheetStream_m3493(L_67, L_69, /*hidden argument*/NULL);
		__this->____sheetStream_9 = L_70;
		Stream_t844 * L_71 = (__this->____sheetStream_9);
		XmlReader_t843 * L_72 = XmlReader_Create_m3550(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		__this->____xmlReader_8 = L_72;
	}

IL_01e0:
	{
		XmlReader_t843 * L_73 = (__this->____xmlReader_8);
		String_t* L_74 = (__this->____namespaceUri_16);
		NullCheck(L_73);
		VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(51 /* System.Boolean System.Xml.XmlReader::ReadToFollowing(System.String,System.String) */, L_73, (String_t*) &_stringLiteral456, L_74);
		XmlReader_t843 * L_75 = (__this->____xmlReader_8);
		NullCheck(L_75);
		bool L_76 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_75);
		if (!L_76)
		{
			goto IL_020b;
		}
	}
	{
		XlsxWorksheet_t838 * L_77 = ___sheet;
		NullCheck(L_77);
		XlsxWorksheet_set_IsEmpty_m3473(L_77, 1, /*hidden argument*/NULL);
	}

IL_020b:
	{
		return;
	}
}
// System.Boolean Excel.ExcelOpenXmlReader::ReadSheetRow(Excel.Core.OpenXmlFormat.XlsxWorksheet)
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t693_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t695_il2cpp_TypeInfo_var;
extern TypeInfo* Helpers_t829_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern "C" bool ExcelOpenXmlReader_ReadSheetRow_m3507 (ExcelOpenXmlReader_t845 * __this, XlsxWorksheet_t838 * ___sheet, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CultureInfo_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(983);
		Double_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(985);
		Helpers_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1767);
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	Object_t * V_8 = {0};
	int32_t V_9 = {0};
	CultureInfo_t693 * V_10 = {0};
	XlsxXf_t839 * V_11 = {0};
	{
		XmlReader_t843 * L_0 = (__this->____xmlReader_8);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_1 = (__this->____emptyRowCount_6);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		XlsxWorksheet_t838 * L_2 = ___sheet;
		NullCheck(L_2);
		int32_t L_3 = XlsxWorksheet_get_ColumnsCount_m3476(L_2, /*hidden argument*/NULL);
		__this->____cellsValues_10 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, L_3));
		int32_t L_4 = (__this->____emptyRowCount_6);
		__this->____emptyRowCount_6 = ((int32_t)((int32_t)L_4-(int32_t)1));
		int32_t L_5 = (__this->____depth_5);
		__this->____depth_5 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return 1;
	}

IL_0041:
	{
		ObjectU5BU5D_t300* L_6 = (__this->____savedCellsValues_11);
		if (!L_6)
		{
			goto IL_006c;
		}
	}
	{
		ObjectU5BU5D_t300* L_7 = (__this->____savedCellsValues_11);
		__this->____cellsValues_10 = L_7;
		__this->____savedCellsValues_11 = (ObjectU5BU5D_t300*)NULL;
		int32_t L_8 = (__this->____depth_5);
		__this->____depth_5 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return 1;
	}

IL_006c:
	{
		XmlReader_t843 * L_9 = (__this->____xmlReader_8);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0091;
		}
	}
	{
		XmlReader_t843 * L_11 = (__this->____xmlReader_8);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m1295(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral454, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00ac;
		}
	}

IL_0091:
	{
		XmlReader_t843 * L_14 = (__this->____xmlReader_8);
		String_t* L_15 = (__this->____namespaceUri_16);
		NullCheck(L_14);
		bool L_16 = (bool)VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(51 /* System.Boolean System.Xml.XmlReader::ReadToFollowing(System.String,System.String) */, L_14, (String_t*) &_stringLiteral454, L_15);
		if (!L_16)
		{
			goto IL_0360;
		}
	}

IL_00ac:
	{
		XlsxWorksheet_t838 * L_17 = ___sheet;
		NullCheck(L_17);
		int32_t L_18 = XlsxWorksheet_get_ColumnsCount_m3476(L_17, /*hidden argument*/NULL);
		__this->____cellsValues_10 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, L_18));
		XmlReader_t843 * L_19 = (__this->____xmlReader_8);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_19, (String_t*) &_stringLiteral357);
		int32_t L_21 = Int32_Parse_m3546(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23 = (__this->____depth_5);
		if ((((int32_t)L_22) == ((int32_t)((int32_t)((int32_t)L_23+(int32_t)1)))))
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_24 = V_0;
		int32_t L_25 = (__this->____depth_5);
		if ((((int32_t)L_24) == ((int32_t)((int32_t)((int32_t)L_25+(int32_t)1)))))
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_26 = V_0;
		int32_t L_27 = (__this->____depth_5);
		__this->____emptyRowCount_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_26-(int32_t)L_27))-(int32_t)1));
	}

IL_00f9:
	{
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_28;
		String_t* L_29 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_29;
		String_t* L_30 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_30;
		V_5 = 0;
		V_6 = 0;
		goto IL_0323;
	}

IL_0119:
	{
		XmlReader_t843 * L_31 = (__this->____xmlReader_8);
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_31);
		if ((((int32_t)L_32) == ((int32_t)2)))
		{
			goto IL_0333;
		}
	}
	{
		XmlReader_t843 * L_33 = (__this->____xmlReader_8);
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_33);
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_01c5;
		}
	}
	{
		V_1 = 0;
		XmlReader_t843 * L_35 = (__this->____xmlReader_8);
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_35);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m1295(NULL /*static, unused*/, L_36, (String_t*) &_stringLiteral455, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0195;
		}
	}
	{
		XmlReader_t843 * L_38 = (__this->____xmlReader_8);
		NullCheck(L_38);
		String_t* L_39 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_38, (String_t*) &_stringLiteral457);
		V_2 = L_39;
		XmlReader_t843 * L_40 = (__this->____xmlReader_8);
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_40, (String_t*) &_stringLiteral430);
		V_3 = L_41;
		XmlReader_t843 * L_42 = (__this->____xmlReader_8);
		NullCheck(L_42);
		String_t* L_43 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_42, (String_t*) &_stringLiteral357);
		V_4 = L_43;
		String_t* L_44 = V_4;
		XlsxDimension_XlsxDim_m3456(NULL /*static, unused*/, L_44, (&V_5), (&V_6), /*hidden argument*/NULL);
		goto IL_01c5;
	}

IL_0195:
	{
		XmlReader_t843 * L_45 = (__this->____xmlReader_8);
		NullCheck(L_45);
		String_t* L_46 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_45);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_47 = String_op_Equality_m1295(NULL /*static, unused*/, L_46, (String_t*) &_stringLiteral458, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_01c3;
		}
	}
	{
		XmlReader_t843 * L_48 = (__this->____xmlReader_8);
		NullCheck(L_48);
		String_t* L_49 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_LocalName() */, L_48);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_op_Equality_m1295(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral430, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01c5;
		}
	}

IL_01c3:
	{
		V_1 = 1;
	}

IL_01c5:
	{
		XmlReader_t843 * L_51 = (__this->____xmlReader_8);
		NullCheck(L_51);
		int32_t L_52 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_51);
		if ((!(((uint32_t)L_52) == ((uint32_t)3))))
		{
			goto IL_0323;
		}
	}
	{
		bool L_53 = V_1;
		if (!L_53)
		{
			goto IL_0323;
		}
	}
	{
		XmlReader_t843 * L_54 = (__this->____xmlReader_8);
		NullCheck(L_54);
		String_t* L_55 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_54);
		V_8 = L_55;
		V_9 = ((int32_t)511);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t693_il2cpp_TypeInfo_var);
		CultureInfo_t693 * L_56 = CultureInfo_get_InvariantCulture_m3234(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_10 = L_56;
		Object_t * L_57 = V_8;
		NullCheck(L_57);
		String_t* L_58 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_57);
		int32_t L_59 = V_9;
		CultureInfo_t693 * L_60 = V_10;
		bool L_61 = Double_TryParse_m3239(NULL /*static, unused*/, L_58, L_59, L_60, (&V_7), /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0214;
		}
	}
	{
		double L_62 = V_7;
		double L_63 = L_62;
		Object_t * L_64 = Box(Double_t695_il2cpp_TypeInfo_var, &L_63);
		V_8 = L_64;
	}

IL_0214:
	{
		String_t* L_65 = V_3;
		if (!L_65)
		{
			goto IL_024c;
		}
	}
	{
		String_t* L_66 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_67 = String_op_Equality_m1295(NULL /*static, unused*/, L_66, (String_t*) &_stringLiteral457, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_024c;
		}
	}
	{
		XlsxWorkbook_t837 * L_68 = (__this->____workbook_0);
		NullCheck(L_68);
		XlsxSST_t832 * L_69 = XlsxWorkbook_get_SST_m3466(L_68, /*hidden argument*/NULL);
		Object_t * L_70 = V_8;
		NullCheck(L_70);
		String_t* L_71 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_70);
		int32_t L_72 = Int32_Parse_m3546(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		NullCheck(L_69);
		String_t* L_73 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_69, L_72);
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t829_il2cpp_TypeInfo_var);
		String_t* L_74 = Helpers_ConvertEscapeChars_m3440(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		V_8 = L_74;
		goto IL_0308;
	}

IL_024c:
	{
		String_t* L_75 = V_3;
		if (!L_75)
		{
			goto IL_026f;
		}
	}
	{
		String_t* L_76 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_77 = String_op_Equality_m1295(NULL /*static, unused*/, L_76, (String_t*) &_stringLiteral459, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_026f;
		}
	}
	{
		Object_t * L_78 = V_8;
		NullCheck(L_78);
		String_t* L_79 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_78);
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t829_il2cpp_TypeInfo_var);
		String_t* L_80 = Helpers_ConvertEscapeChars_m3440(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		V_8 = L_80;
		goto IL_0308;
	}

IL_026f:
	{
		String_t* L_81 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_82 = String_op_Equality_m1295(NULL /*static, unused*/, L_81, (String_t*) &_stringLiteral460, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_029a;
		}
	}
	{
		XmlReader_t843 * L_83 = (__this->____xmlReader_8);
		NullCheck(L_83);
		String_t* L_84 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Xml.XmlReader::get_Value() */, L_83);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_85 = String_op_Equality_m1295(NULL /*static, unused*/, L_84, (String_t*) &_stringLiteral437, /*hidden argument*/NULL);
		bool L_86 = L_85;
		Object_t * L_87 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_86);
		V_8 = L_87;
		goto IL_0308;
	}

IL_029a:
	{
		String_t* L_88 = V_2;
		if (!L_88)
		{
			goto IL_0308;
		}
	}
	{
		XlsxWorkbook_t837 * L_89 = (__this->____workbook_0);
		NullCheck(L_89);
		XlsxStyles_t835 * L_90 = XlsxWorkbook_get_Styles_m3467(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		List_1_t833 * L_91 = XlsxStyles_get_CellXfs_m3462(L_90, /*hidden argument*/NULL);
		String_t* L_92 = V_2;
		int32_t L_93 = Int32_Parse_m3546(NULL /*static, unused*/, L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		XlsxXf_t839 * L_94 = (XlsxXf_t839 *)VirtFuncInvoker1< XlsxXf_t839 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxXf>::get_Item(System.Int32) */, L_91, L_93);
		V_11 = L_94;
		XlsxXf_t839 * L_95 = V_11;
		NullCheck(L_95);
		bool L_96 = XlsxXf_get_ApplyNumberFormat_m3483(L_95, /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_02f4;
		}
	}
	{
		Object_t * L_97 = V_8;
		if (!L_97)
		{
			goto IL_02f4;
		}
	}
	{
		Object_t * L_98 = V_8;
		NullCheck(L_98);
		String_t* L_99 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_98);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_100 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_101 = String_op_Inequality_m1484(NULL /*static, unused*/, L_99, L_100, /*hidden argument*/NULL);
		if (!L_101)
		{
			goto IL_02f4;
		}
	}
	{
		XlsxXf_t839 * L_102 = V_11;
		NullCheck(L_102);
		int32_t L_103 = XlsxXf_get_NumFmtId_m3482(L_102, /*hidden argument*/NULL);
		bool L_104 = ExcelOpenXmlReader_IsDateTimeStyle_m3508(__this, L_103, /*hidden argument*/NULL);
		if (!L_104)
		{
			goto IL_02f4;
		}
	}
	{
		double L_105 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t829_il2cpp_TypeInfo_var);
		Object_t * L_106 = Helpers_ConvertFromOATime_m3441(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		V_8 = L_106;
		goto IL_0308;
	}

IL_02f4:
	{
		XlsxXf_t839 * L_107 = V_11;
		NullCheck(L_107);
		int32_t L_108 = XlsxXf_get_NumFmtId_m3482(L_107, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_108) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_0308;
		}
	}
	{
		Object_t * L_109 = V_8;
		NullCheck(L_109);
		String_t* L_110 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_109);
		V_8 = L_110;
	}

IL_0308:
	{
		int32_t L_111 = V_5;
		ObjectU5BU5D_t300* L_112 = (__this->____cellsValues_10);
		NullCheck(L_112);
		if ((((int32_t)((int32_t)((int32_t)L_111-(int32_t)1))) >= ((int32_t)(((int32_t)(((Array_t *)L_112)->max_length))))))
		{
			goto IL_0323;
		}
	}
	{
		ObjectU5BU5D_t300* L_113 = (__this->____cellsValues_10);
		int32_t L_114 = V_5;
		Object_t * L_115 = V_8;
		NullCheck(L_113);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_113, ((int32_t)((int32_t)L_114-(int32_t)1)));
		ArrayElementTypeCheck (L_113, L_115);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_113, ((int32_t)((int32_t)L_114-(int32_t)1)))) = (Object_t *)L_115;
	}

IL_0323:
	{
		XmlReader_t843 * L_116 = (__this->____xmlReader_8);
		NullCheck(L_116);
		bool L_117 = (bool)VirtFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Xml.XmlReader::Read() */, L_116);
		if (L_117)
		{
			goto IL_0119;
		}
	}

IL_0333:
	{
		int32_t L_118 = (__this->____emptyRowCount_6);
		if ((((int32_t)L_118) <= ((int32_t)0)))
		{
			goto IL_0350;
		}
	}
	{
		ObjectU5BU5D_t300* L_119 = (__this->____cellsValues_10);
		__this->____savedCellsValues_11 = L_119;
		XlsxWorksheet_t838 * L_120 = ___sheet;
		bool L_121 = ExcelOpenXmlReader_ReadSheetRow_m3507(__this, L_120, /*hidden argument*/NULL);
		return L_121;
	}

IL_0350:
	{
		int32_t L_122 = (__this->____depth_5);
		__this->____depth_5 = ((int32_t)((int32_t)L_122+(int32_t)1));
		return 1;
	}

IL_0360:
	{
		XmlReader_t843 * L_123 = (__this->____xmlReader_8);
		NullCheck(L_123);
		VirtActionInvoker0::Invoke(29 /* System.Void System.Xml.XmlReader::Close() */, L_123);
		Stream_t844 * L_124 = (__this->____sheetStream_9);
		if (!L_124)
		{
			goto IL_037e;
		}
	}
	{
		Stream_t844 * L_125 = (__this->____sheetStream_9);
		NullCheck(L_125);
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_125);
	}

IL_037e:
	{
		return 0;
	}
}
// System.Boolean Excel.ExcelOpenXmlReader::IsDateTimeStyle(System.Int32)
extern "C" bool ExcelOpenXmlReader_IsDateTimeStyle_m3508 (ExcelOpenXmlReader_t845 * __this, int32_t ___styleId, const MethodInfo* method)
{
	{
		List_1_t154 * L_0 = (__this->____defaultDateTimeStyles_15);
		int32_t L_1 = ___styleId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(21 /* System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Excel.ExcelOpenXmlReader::Initialize(System.IO.Stream)
extern TypeInfo* ZipWorker_t841_il2cpp_TypeInfo_var;
extern "C" void ExcelOpenXmlReader_Initialize_m3509 (ExcelOpenXmlReader_t845 * __this, Stream_t844 * ___fileStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipWorker_t841_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1783);
		s_Il2CppMethodIntialized = true;
	}
	{
		ZipWorker_t841 * L_0 = (ZipWorker_t841 *)il2cpp_codegen_object_new (ZipWorker_t841_il2cpp_TypeInfo_var);
		ZipWorker__ctor_m3488(L_0, /*hidden argument*/NULL);
		__this->____zipWorker_7 = L_0;
		ZipWorker_t841 * L_1 = (__this->____zipWorker_7);
		Stream_t844 * L_2 = ___fileStream;
		NullCheck(L_1);
		ZipWorker_Extract_m3489(L_1, L_2, /*hidden argument*/NULL);
		ZipWorker_t841 * L_3 = (__this->____zipWorker_7);
		NullCheck(L_3);
		bool L_4 = ZipWorker_get_IsValid_m3486(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		__this->____isValid_1 = 0;
		ZipWorker_t841 * L_5 = (__this->____zipWorker_7);
		NullCheck(L_5);
		String_t* L_6 = ZipWorker_get_ExceptionMessage_m3487(L_5, /*hidden argument*/NULL);
		__this->____exceptionMessage_4 = L_6;
		ExcelOpenXmlReader_Close_m3512(__this, /*hidden argument*/NULL);
		return;
	}

IL_0044:
	{
		ExcelOpenXmlReader_ReadGlobals_m3504(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Data.DataSet Excel.ExcelOpenXmlReader::AsDataSet()
extern "C" DataSet_t346 * ExcelOpenXmlReader_AsDataSet_m3510 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method)
{
	{
		DataSet_t346 * L_0 = ExcelOpenXmlReader_AsDataSet_m3511(__this, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Data.DataSet Excel.ExcelOpenXmlReader::AsDataSet(System.Boolean)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* DataSet_t346_il2cpp_TypeInfo_var;
extern TypeInfo* DataTable_t296_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Helpers_t829_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" DataSet_t346 * ExcelOpenXmlReader_AsDataSet_m3511 (ExcelOpenXmlReader_t845 * __this, bool ___convertOADateTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		DataSet_t346_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1791);
		DataTable_t296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(842);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Helpers_t829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1767);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	DataSet_t346 * V_0 = {0};
	int32_t V_1 = 0;
	DataTable_t296 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		bool L_0 = (__this->____isValid_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (DataSet_t346 *)NULL;
	}

IL_000a:
	{
		DataSet_t346 * L_1 = (DataSet_t346 *)il2cpp_codegen_object_new (DataSet_t346_il2cpp_TypeInfo_var);
		DataSet__ctor_m3577(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0190;
	}

IL_0017:
	{
		XlsxWorkbook_t837 * L_2 = (__this->____workbook_0);
		NullCheck(L_2);
		List_1_t836 * L_3 = XlsxWorkbook_get_Sheets_m3465(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		XlsxWorksheet_t838 * L_5 = (XlsxWorksheet_t838 *)VirtFuncInvoker1< XlsxWorksheet_t838 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>::get_Item(System.Int32) */, L_3, L_4);
		NullCheck(L_5);
		String_t* L_6 = XlsxWorksheet_get_Name_m3477(L_5, /*hidden argument*/NULL);
		DataTable_t296 * L_7 = (DataTable_t296 *)il2cpp_codegen_object_new (DataTable_t296_il2cpp_TypeInfo_var);
		DataTable__ctor_m3578(L_7, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		XlsxWorkbook_t837 * L_8 = (__this->____workbook_0);
		NullCheck(L_8);
		List_1_t836 * L_9 = XlsxWorkbook_get_Sheets_m3465(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		XlsxWorksheet_t838 * L_11 = (XlsxWorksheet_t838 *)VirtFuncInvoker1< XlsxWorksheet_t838 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>::get_Item(System.Int32) */, L_9, L_10);
		ExcelOpenXmlReader_ReadSheetGlobals_m3506(__this, L_11, /*hidden argument*/NULL);
		XlsxWorkbook_t837 * L_12 = (__this->____workbook_0);
		NullCheck(L_12);
		List_1_t836 * L_13 = XlsxWorkbook_get_Sheets_m3465(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		XlsxWorksheet_t838 * L_15 = (XlsxWorksheet_t838 *)VirtFuncInvoker1< XlsxWorksheet_t838 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>::get_Item(System.Int32) */, L_13, L_14);
		NullCheck(L_15);
		XlsxDimension_t830 * L_16 = XlsxWorksheet_get_Dimension_m3474(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_018c;
		}
	}
	{
		__this->____depth_5 = 0;
		__this->____emptyRowCount_6 = 0;
		bool L_17 = (__this->____isFirstRowAsColumnNames_13);
		if (L_17)
		{
			goto IL_00b8;
		}
	}
	{
		V_3 = 0;
		goto IL_009a;
	}

IL_007f:
	{
		DataTable_t296 * L_18 = V_2;
		NullCheck(L_18);
		DataColumnCollection_t350 * L_19 = DataTable_get_Columns_m1826(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		DataColumnCollection_Add_m3540(L_19, (String_t*)NULL, L_20, /*hidden argument*/NULL);
		int32_t L_21 = V_3;
		V_3 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_009a:
	{
		int32_t L_22 = V_3;
		XlsxWorkbook_t837 * L_23 = (__this->____workbook_0);
		NullCheck(L_23);
		List_1_t836 * L_24 = XlsxWorkbook_get_Sheets_m3465(L_23, /*hidden argument*/NULL);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		XlsxWorksheet_t838 * L_26 = (XlsxWorksheet_t838 *)VirtFuncInvoker1< XlsxWorksheet_t838 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>::get_Item(System.Int32) */, L_24, L_25);
		NullCheck(L_26);
		int32_t L_27 = XlsxWorksheet_get_ColumnsCount_m3476(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)L_27)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_0139;
	}

IL_00b8:
	{
		XlsxWorkbook_t837 * L_28 = (__this->____workbook_0);
		NullCheck(L_28);
		List_1_t836 * L_29 = XlsxWorkbook_get_Sheets_m3465(L_28, /*hidden argument*/NULL);
		int32_t L_30 = V_1;
		NullCheck(L_29);
		XlsxWorksheet_t838 * L_31 = (XlsxWorksheet_t838 *)VirtFuncInvoker1< XlsxWorksheet_t838 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>::get_Item(System.Int32) */, L_29, L_30);
		bool L_32 = ExcelOpenXmlReader_ReadSheetRow_m3507(__this, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_018c;
		}
	}
	{
		V_4 = 0;
		goto IL_012d;
	}

IL_00d9:
	{
		ObjectU5BU5D_t300* L_33 = (__this->____cellsValues_10);
		int32_t L_34 = V_4;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		if (!(*(Object_t **)(Object_t **)SZArrayLdElema(L_33, L_35)))
		{
			goto IL_0110;
		}
	}
	{
		ObjectU5BU5D_t300* L_36 = (__this->____cellsValues_10);
		int32_t L_37 = V_4;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = L_37;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_36, L_38)));
		String_t* L_39 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*(Object_t **)(Object_t **)SZArrayLdElema(L_36, L_38)));
		NullCheck(L_39);
		int32_t L_40 = String_get_Length_m1368(L_39, /*hidden argument*/NULL);
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_0110;
		}
	}
	{
		DataTable_t296 * L_41 = V_2;
		ObjectU5BU5D_t300* L_42 = (__this->____cellsValues_10);
		int32_t L_43 = V_4;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		int32_t L_44 = L_43;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_42, L_44)));
		String_t* L_45 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*(Object_t **)(Object_t **)SZArrayLdElema(L_42, L_44)));
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t829_il2cpp_TypeInfo_var);
		Helpers_AddColumnHandleDuplicate_m3443(NULL /*static, unused*/, L_41, L_45, /*hidden argument*/NULL);
		goto IL_0127;
	}

IL_0110:
	{
		DataTable_t296 * L_46 = V_2;
		int32_t L_47 = V_4;
		int32_t L_48 = L_47;
		Object_t * L_49 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_48);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m1248(NULL /*static, unused*/, (String_t*) &_stringLiteral461, L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t829_il2cpp_TypeInfo_var);
		Helpers_AddColumnHandleDuplicate_m3443(NULL /*static, unused*/, L_46, L_50, /*hidden argument*/NULL);
	}

IL_0127:
	{
		int32_t L_51 = V_4;
		V_4 = ((int32_t)((int32_t)L_51+(int32_t)1));
	}

IL_012d:
	{
		int32_t L_52 = V_4;
		ObjectU5BU5D_t300* L_53 = (__this->____cellsValues_10);
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)(((int32_t)(((Array_t *)L_53)->max_length))))))
		{
			goto IL_00d9;
		}
	}

IL_0139:
	{
		DataTable_t296 * L_54 = V_2;
		NullCheck(L_54);
		DataTable_BeginLoadData_m3532(L_54, /*hidden argument*/NULL);
		goto IL_0153;
	}

IL_0141:
	{
		DataTable_t296 * L_55 = V_2;
		NullCheck(L_55);
		DataRowCollection_t349 * L_56 = DataTable_get_Rows_m1825(L_55, /*hidden argument*/NULL);
		ObjectU5BU5D_t300* L_57 = (__this->____cellsValues_10);
		NullCheck(L_56);
		DataRowCollection_Add_m3579(L_56, L_57, /*hidden argument*/NULL);
	}

IL_0153:
	{
		XlsxWorkbook_t837 * L_58 = (__this->____workbook_0);
		NullCheck(L_58);
		List_1_t836 * L_59 = XlsxWorkbook_get_Sheets_m3465(L_58, /*hidden argument*/NULL);
		int32_t L_60 = V_1;
		NullCheck(L_59);
		XlsxWorksheet_t838 * L_61 = (XlsxWorksheet_t838 *)VirtFuncInvoker1< XlsxWorksheet_t838 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>::get_Item(System.Int32) */, L_59, L_60);
		bool L_62 = ExcelOpenXmlReader_ReadSheetRow_m3507(__this, L_61, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_0141;
		}
	}
	{
		DataTable_t296 * L_63 = V_2;
		NullCheck(L_63);
		DataRowCollection_t349 * L_64 = DataTable_get_Rows_m1825(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_65 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_64);
		if ((((int32_t)L_65) <= ((int32_t)0)))
		{
			goto IL_0186;
		}
	}
	{
		DataSet_t346 * L_66 = V_0;
		NullCheck(L_66);
		DataTableCollection_t348 * L_67 = DataSet_get_Tables_m1823(L_66, /*hidden argument*/NULL);
		DataTable_t296 * L_68 = V_2;
		NullCheck(L_67);
		DataTableCollection_Add_m3580(L_67, L_68, /*hidden argument*/NULL);
	}

IL_0186:
	{
		DataTable_t296 * L_69 = V_2;
		NullCheck(L_69);
		DataTable_EndLoadData_m3534(L_69, /*hidden argument*/NULL);
	}

IL_018c:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0190:
	{
		int32_t L_71 = V_1;
		XlsxWorkbook_t837 * L_72 = (__this->____workbook_0);
		NullCheck(L_72);
		List_1_t836 * L_73 = XlsxWorkbook_get_Sheets_m3465(L_72, /*hidden argument*/NULL);
		NullCheck(L_73);
		int32_t L_74 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<Excel.Core.OpenXmlFormat.XlsxWorksheet>::get_Count() */, L_73);
		if ((((int32_t)L_71) < ((int32_t)L_74)))
		{
			goto IL_0017;
		}
	}
	{
		DataSet_t346 * L_75 = V_0;
		NullCheck(L_75);
		DataSet_AcceptChanges_m3581(L_75, /*hidden argument*/NULL);
		DataSet_t346 * L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t829_il2cpp_TypeInfo_var);
		Helpers_FixDataTypes_m3442(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		DataSet_t346 * L_77 = V_0;
		return L_77;
	}
}
// System.Void Excel.ExcelOpenXmlReader::Close()
extern "C" void ExcelOpenXmlReader_Close_m3512 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method)
{
	{
		__this->____isClosed_2 = 1;
		XmlReader_t843 * L_0 = (__this->____xmlReader_8);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		XmlReader_t843 * L_1 = (__this->____xmlReader_8);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(29 /* System.Void System.Xml.XmlReader::Close() */, L_1);
	}

IL_001a:
	{
		Stream_t844 * L_2 = (__this->____sheetStream_9);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Stream_t844 * L_3 = (__this->____sheetStream_9);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_3);
	}

IL_002d:
	{
		ZipWorker_t841 * L_4 = (__this->____zipWorker_7);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		ZipWorker_t841 * L_5 = (__this->____zipWorker_7);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(4 /* System.Void Excel.Core.ZipWorker::Dispose() */, L_5);
	}

IL_0040:
	{
		return;
	}
}
// System.Void Excel.ExcelOpenXmlReader::Dispose()
extern "C" void ExcelOpenXmlReader_Dispose_m3513 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method)
{
	{
		ExcelOpenXmlReader_Dispose_m3514(__this, 1, /*hidden argument*/NULL);
		GC_SuppressFinalize_m3572(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Excel.ExcelOpenXmlReader::Dispose(System.Boolean)
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ExcelOpenXmlReader_Dispose_m3514 (ExcelOpenXmlReader_t845 * __this, bool ___disposing, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___disposed_12);
		if (L_0)
		{
			goto IL_0075;
		}
	}
	{
		bool L_1 = ___disposing;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		XmlReader_t843 * L_2 = (__this->____xmlReader_8);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		XmlReader_t843 * L_3 = (__this->____xmlReader_8);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_3);
	}

IL_001e:
	{
		Stream_t844 * L_4 = (__this->____sheetStream_9);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		Stream_t844 * L_5 = (__this->____sheetStream_9);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(6 /* System.Void System.IO.Stream::Dispose() */, L_5);
	}

IL_0031:
	{
		ZipWorker_t841 * L_6 = (__this->____zipWorker_7);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		ZipWorker_t841 * L_7 = (__this->____zipWorker_7);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(4 /* System.Void Excel.Core.ZipWorker::Dispose() */, L_7);
	}

IL_0044:
	{
		__this->____zipWorker_7 = (ZipWorker_t841 *)NULL;
		__this->____xmlReader_8 = (XmlReader_t843 *)NULL;
		__this->____sheetStream_9 = (Stream_t844 *)NULL;
		__this->____workbook_0 = (XlsxWorkbook_t837 *)NULL;
		__this->____cellsValues_10 = (ObjectU5BU5D_t300*)NULL;
		__this->____savedCellsValues_11 = (ObjectU5BU5D_t300*)NULL;
		__this->___disposed_12 = 1;
	}

IL_0075:
	{
		return;
	}
}
// System.Void Excel.ExcelOpenXmlReader::Finalize()
extern "C" void ExcelOpenXmlReader_Finalize_m3515 (ExcelOpenXmlReader_t845 * __this, const MethodInfo* method)
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
		ExcelOpenXmlReader_Dispose_m3514(__this, 0, /*hidden argument*/NULL);
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
// Excel.Log.Log
#include "Excel_Excel_Log_Log.h"
#ifndef _MSC_VER
#else
#endif
// Excel.Log.Log
#include "Excel_Excel_Log_LogMethodDeclarations.h"

// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"


// Excel.Log.ILog Excel.Log.Log::GetLoggerFor(System.String)
extern TypeInfo* Log_t847_il2cpp_TypeInfo_var;
extern TypeInfo* ILog_t846_il2cpp_TypeInfo_var;
extern "C" Object_t * Log_GetLoggerFor_m3516 (Object_t * __this /* static, unused */, String_t* ___objectName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Log_t847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1792);
		ILog_t846_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1785);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t847_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((Log_t847_StaticFields*)Log_t847_il2cpp_TypeInfo_var->static_fields)->____logger_1;
		V_0 = L_0;
		Object_t * L_1 = ((Log_t847_StaticFields*)Log_t847_il2cpp_TypeInfo_var->static_fields)->____logger_1;
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t847_il2cpp_TypeInfo_var);
		Type_t * L_2 = ((Log_t847_StaticFields*)Log_t847_il2cpp_TypeInfo_var->static_fields)->____logType_0;
		Object_t * L_3 = Activator_CreateInstance_m3582(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = ((Object_t *)IsInst(L_3, ILog_t846_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		Object_t * L_5 = V_0;
		String_t* L_6 = ___objectName;
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Excel.Log.ILog::InitializeFor(System.String) */, ILog_t846_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_0027:
	{
		Object_t * L_7 = V_0;
		return L_7;
	}
}
// System.Void Excel.Log.Log::.cctor()
extern const Il2CppType* NullLog_t850_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Log_t847_il2cpp_TypeInfo_var;
extern "C" void Log__cctor_m3517 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullLog_t850_0_0_0_var = il2cpp_codegen_type_from_index(1793);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Log_t847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1792);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(NullLog_t850_0_0_0_var), /*hidden argument*/NULL);
		((Log_t847_StaticFields*)Log_t847_il2cpp_TypeInfo_var->static_fields)->____logType_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"


// Excel.Log.ILog Excel.Log.LogManager::Log(System.String)
extern TypeInfo* LogManager_t849_il2cpp_TypeInfo_var;
extern TypeInfo* Log_t847_il2cpp_TypeInfo_var;
extern "C" Object_t * LogManager_Log_m3518 (Object_t * __this /* static, unused */, String_t* ___objectName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogManager_t849_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1784);
		Log_t847_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1792);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Object_t *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(LogManager_t849_il2cpp_TypeInfo_var);
		Dictionary_2_t848 * L_0 = ((LogManager_t849_StaticFields*)LogManager_t849_il2cpp_TypeInfo_var->static_fields)->____dictionary_0;
		String_t* L_1 = ___objectName;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogManager_t849_il2cpp_TypeInfo_var);
		Dictionary_2_t848 * L_3 = ((LogManager_t849_StaticFields*)LogManager_t849_il2cpp_TypeInfo_var->static_fields)->____dictionary_0;
		String_t* L_4 = ___objectName;
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::get_Item(!0) */, L_3, L_4);
		V_0 = L_5;
	}

IL_001b:
	{
		Object_t * L_6 = V_0;
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LogManager_t849_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((LogManager_t849_StaticFields*)LogManager_t849_il2cpp_TypeInfo_var->static_fields)->____sync_1;
		Object_t * L_8 = L_7;
		V_1 = L_8;
		Monitor_Enter_m3583(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		String_t* L_9 = ___objectName;
		IL2CPP_RUNTIME_CLASS_INIT(Log_t847_il2cpp_TypeInfo_var);
		Object_t * L_10 = Log_GetLoggerFor_m3516(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(LogManager_t849_il2cpp_TypeInfo_var);
		Dictionary_2_t848 * L_11 = ((LogManager_t849_StaticFields*)LogManager_t849_il2cpp_TypeInfo_var->static_fields)->____dictionary_0;
		String_t* L_12 = ___objectName;
		Object_t * L_13 = V_0;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,Excel.Log.ILog>::Add(!0,!1) */, L_11, L_12, L_13);
		IL2CPP_LEAVE(0x46, FINALLY_003f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		Object_t * L_14 = V_1;
		Monitor_Exit_m3584(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0046:
	{
		Object_t * L_15 = V_0;
		return L_15;
	}
}
// System.Void Excel.Log.LogManager::.cctor()
extern TypeInfo* Dictionary_2_t848_il2cpp_TypeInfo_var;
extern TypeInfo* LogManager_t849_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3585_MethodInfo_var;
extern "C" void LogManager__cctor_m3519 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1794);
		LogManager_t849_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1784);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Dictionary_2__ctor_m3585_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483933);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t848 * L_0 = (Dictionary_2_t848 *)il2cpp_codegen_object_new (Dictionary_2_t848_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3585(L_0, /*hidden argument*/Dictionary_2__ctor_m3585_MethodInfo_var);
		((LogManager_t849_StaticFields*)LogManager_t849_il2cpp_TypeInfo_var->static_fields)->____dictionary_0 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1291(L_1, /*hidden argument*/NULL);
		((LogManager_t849_StaticFields*)LogManager_t849_il2cpp_TypeInfo_var->static_fields)->____sync_1 = L_1;
		return;
	}
}
// Excel.Log.Logger.NullLog
#include "Excel_Excel_Log_Logger_NullLog.h"
#ifndef _MSC_VER
#else
#endif
// Excel.Log.Logger.NullLog
#include "Excel_Excel_Log_Logger_NullLogMethodDeclarations.h"



// System.Void Excel.Log.Logger.NullLog::InitializeFor(System.String)
extern "C" void NullLog_InitializeFor_m3520 (NullLog_t850 * __this, String_t* ___loggerName, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Excel.Log.Logger.NullLog::Debug(System.String,System.Object[])
extern "C" void NullLog_Debug_m3521 (NullLog_t850 * __this, String_t* ___message, ObjectU5BU5D_t300* ___formatting, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Excel.Log.Logger.NullLog::.ctor()
extern "C" void NullLog__ctor_m3522 (NullLog_t850 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>{10037FEE-F752-4B71-ADAE-B726711CA9CA}/__StaticArrayInitTypeSize=20
#include "Excel_U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>{10037FEE-F752-4B71-ADAE-B726711CA9CA}/__StaticArrayInitTypeSize=20
void __StaticArrayInitTypeSizeU3D20_t851_marshal(const __StaticArrayInitTypeSizeU3D20_t851& unmarshaled, __StaticArrayInitTypeSizeU3D20_t851_marshaled& marshaled)
{
}
void __StaticArrayInitTypeSizeU3D20_t851_marshal_back(const __StaticArrayInitTypeSizeU3D20_t851_marshaled& marshaled, __StaticArrayInitTypeSizeU3D20_t851& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>{10037FEE-F752-4B71-ADAE-B726711CA9CA}/__StaticArrayInitTypeSize=20
void __StaticArrayInitTypeSizeU3D20_t851_marshal_cleanup(__StaticArrayInitTypeSizeU3D20_t851_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>{10037FEE-F752-4B71-ADAE-B726711CA9CA}/__StaticArrayInitTypeSize=48
#include "Excel_U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>{10037FEE-F752-4B71-ADAE-B726711CA9CA}/__StaticArrayInitTypeSize=48
void __StaticArrayInitTypeSizeU3D48_t852_marshal(const __StaticArrayInitTypeSizeU3D48_t852& unmarshaled, __StaticArrayInitTypeSizeU3D48_t852_marshaled& marshaled)
{
}
void __StaticArrayInitTypeSizeU3D48_t852_marshal_back(const __StaticArrayInitTypeSizeU3D48_t852_marshaled& marshaled, __StaticArrayInitTypeSizeU3D48_t852& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>{10037FEE-F752-4B71-ADAE-B726711CA9CA}/__StaticArrayInitTypeSize=48
void __StaticArrayInitTypeSizeU3D48_t852_marshal_cleanup(__StaticArrayInitTypeSizeU3D48_t852_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif
