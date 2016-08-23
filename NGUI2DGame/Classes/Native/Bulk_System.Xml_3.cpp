#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Xml.Serialization.XmlIgnoreAttribute
#include "System_Xml_System_Xml_Serialization_XmlIgnoreAttribute.h"
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
// System.Xml.Serialization.XmlIgnoreAttribute
#include "System_Xml_System_Xml_Serialization_XmlIgnoreAttributeMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Xml.Serialization.XmlIgnoreAttribute::.ctor()
extern "C" void XmlIgnoreAttribute__ctor_m9771 (XmlIgnoreAttribute_t1774 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Serialization.XmlNamespaceDeclarationsAttribute
#include "System_Xml_System_Xml_Serialization_XmlNamespaceDeclarations.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlNamespaceDeclarationsAttribute
#include "System_Xml_System_Xml_Serialization_XmlNamespaceDeclarationsMethodDeclarations.h"



// System.Void System.Xml.Serialization.XmlNamespaceDeclarationsAttribute::.ctor()
extern "C" void XmlNamespaceDeclarationsAttribute__ctor_m9772 (XmlNamespaceDeclarationsAttribute_t1775 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Serialization.XmlRootAttribute
#include "System_Xml_System_Xml_Serialization_XmlRootAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlRootAttribute
#include "System_Xml_System_Xml_Serialization_XmlRootAttributeMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"


// System.Void System.Xml.Serialization.XmlRootAttribute::.ctor(System.String)
extern "C" void XmlRootAttribute__ctor_m5313 (XmlRootAttribute_t1184 * __this, String_t* ___elementName, const MethodInfo* method)
{
	{
		__this->___isNullable_1 = 1;
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___elementName;
		__this->___elementName_0 = L_0;
		return;
	}
}
// System.Void System.Xml.Serialization.XmlRootAttribute::set_Namespace(System.String)
extern "C" void XmlRootAttribute_set_Namespace_m9773 (XmlRootAttribute_t1184 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___ns_2 = L_0;
		return;
	}
}
// System.Xml.Serialization.XmlSchemaProviderAttribute
#include "System_Xml_System_Xml_Serialization_XmlSchemaProviderAttribu.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlSchemaProviderAttribute
#include "System_Xml_System_Xml_Serialization_XmlSchemaProviderAttribuMethodDeclarations.h"



// System.Void System.Xml.Serialization.XmlSchemaProviderAttribute::.ctor(System.String)
extern "C" void XmlSchemaProviderAttribute__ctor_m5312 (XmlSchemaProviderAttribute_t1183 * __this, String_t* ___methodName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___methodName;
		__this->____methodName_0 = L_0;
		return;
	}
}
// System.Xml.Serialization.XmlSerializerNamespaces
#include "System_Xml_System_Xml_Serialization_XmlSerializerNamespaces.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlSerializerNamespaces
#include "System_Xml_System_Xml_Serialization_XmlSerializerNamespacesMethodDeclarations.h"

// System.Collections.Specialized.ListDictionary
#include "System_System_Collections_Specialized_ListDictionary.h"
// System.Xml.XmlQualifiedName
#include "System_Xml_System_Xml_XmlQualifiedName.h"
// System.Object
#include "mscorlib_System_Object.h"
#include "System.Xml_ArrayTypes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Specialized.ListDictionary
#include "System_System_Collections_Specialized_ListDictionaryMethodDeclarations.h"
// System.Xml.XmlQualifiedName
#include "System_Xml_System_Xml_XmlQualifiedNameMethodDeclarations.h"


// System.Void System.Xml.Serialization.XmlSerializerNamespaces::.ctor()
extern TypeInfo* ListDictionary_t1113_il2cpp_TypeInfo_var;
extern "C" void XmlSerializerNamespaces__ctor_m9774 (XmlSerializerNamespaces_t1738 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ListDictionary_t1113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2067);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		ListDictionary_t1113 * L_0 = (ListDictionary_t1113 *)il2cpp_codegen_object_new (ListDictionary_t1113_il2cpp_TypeInfo_var);
		ListDictionary__ctor_m5235(L_0, /*hidden argument*/NULL);
		__this->___namespaces_0 = L_0;
		return;
	}
}
// System.Void System.Xml.Serialization.XmlSerializerNamespaces::Add(System.String,System.String)
extern TypeInfo* XmlQualifiedName_t985_il2cpp_TypeInfo_var;
extern "C" void XmlSerializerNamespaces_Add_m9775 (XmlSerializerNamespaces_t1738 * __this, String_t* ___prefix, String_t* ___ns, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlQualifiedName_t985_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1996);
		s_Il2CppMethodIntialized = true;
	}
	XmlQualifiedName_t985 * V_0 = {0};
	{
		String_t* L_0 = ___prefix;
		String_t* L_1 = ___ns;
		XmlQualifiedName_t985 * L_2 = (XmlQualifiedName_t985 *)il2cpp_codegen_object_new (XmlQualifiedName_t985_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m5094(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ListDictionary_t1113 * L_3 = (__this->___namespaces_0);
		XmlQualifiedName_t985 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = XmlQualifiedName_get_Name_m5197(L_4, /*hidden argument*/NULL);
		XmlQualifiedName_t985 * L_6 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(5 /* System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object) */, L_3, L_5, L_6);
		return;
	}
}
// System.Xml.XmlQualifiedName[] System.Xml.Serialization.XmlSerializerNamespaces::ToArray()
extern TypeInfo* XmlQualifiedNameU5BU5D_t1749_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_t793_il2cpp_TypeInfo_var;
extern "C" XmlQualifiedNameU5BU5D_t1749* XmlSerializerNamespaces_ToArray_m9776 (XmlSerializerNamespaces_t1738 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlQualifiedNameU5BU5D_t1749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3421);
		ICollection_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1548);
		s_Il2CppMethodIntialized = true;
	}
	XmlQualifiedNameU5BU5D_t1749* V_0 = {0};
	{
		ListDictionary_t1113 * L_0 = (__this->___namespaces_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Collections.Specialized.ListDictionary::get_Count() */, L_0);
		V_0 = ((XmlQualifiedNameU5BU5D_t1749*)SZArrayNew(XmlQualifiedNameU5BU5D_t1749_il2cpp_TypeInfo_var, L_1));
		ListDictionary_t1113 * L_2 = (__this->___namespaces_0);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Values() */, L_2);
		XmlQualifiedNameU5BU5D_t1749* L_4 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t793_il2cpp_TypeInfo_var, L_3, (Array_t *)(Array_t *)L_4, 0);
		XmlQualifiedNameU5BU5D_t1749* L_5 = V_0;
		return L_5;
	}
}
// System.Xml.Serialization.XmlTextAttribute
#include "System_Xml_System_Xml_Serialization_XmlTextAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Serialization.XmlTextAttribute
#include "System_Xml_System_Xml_Serialization_XmlTextAttributeMethodDeclarations.h"



// System.Void System.Xml.Serialization.XmlTextAttribute::.ctor()
extern "C" void XmlTextAttribute__ctor_m9777 (XmlTextAttribute_t1776 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3176(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XQueryConvert
#include "System_Xml_System_Xml_XQueryConvert.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XQueryConvert
#include "System_Xml_System_Xml_XQueryConvertMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.Xml.XmlConvert
#include "System_Xml_System_Xml_XmlConvertMethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"


// System.Double System.Xml.XQueryConvert::BooleanToDouble(System.Boolean)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" double XQueryConvert_BooleanToDouble_m9778 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m9927(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XQueryConvert::BooleanToInt(System.Boolean)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int32_t XQueryConvert_BooleanToInt_m9779 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m9928(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::BooleanToInteger(System.Boolean)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int64_t XQueryConvert_BooleanToInteger_m9780 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m5107(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::BooleanToString(System.Boolean)
extern "C" String_t* XQueryConvert_BooleanToString_m9781 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral345;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (String_t*) &_stringLiteral346;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.String System.Xml.XQueryConvert::DateTimeToString(System.DateTime)
extern TypeInfo* XmlConvert_t1128_il2cpp_TypeInfo_var;
extern "C" String_t* XQueryConvert_DateTimeToString_m9782 (Object_t * __this /* static, unused */, DateTime_t445  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t445  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1128_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m7950(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XQueryConvert::DecimalToBoolean(System.Decimal)
extern TypeInfo* Decimal_t698_il2cpp_TypeInfo_var;
extern "C" bool XQueryConvert_DecimalToBoolean_m9783 (Object_t * __this /* static, unused */, Decimal_t698  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Decimal_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(991);
		s_Il2CppMethodIntialized = true;
	}
	{
		Decimal_t698  L_0 = ___value;
		Decimal_t698  L_1 = {0};
		Decimal__ctor_m5136(&L_1, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t698_il2cpp_TypeInfo_var);
		bool L_2 = Decimal_op_Inequality_m5210(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Double System.Xml.XQueryConvert::DecimalToDouble(System.Decimal)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" double XQueryConvert_DecimalToDouble_m9784 (Object_t * __this /* static, unused */, Decimal_t698  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		Decimal_t698  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m9929(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XQueryConvert::DecimalToInt(System.Decimal)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int32_t XQueryConvert_DecimalToInt_m9785 (Object_t * __this /* static, unused */, Decimal_t698  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		Decimal_t698  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m9930(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::DecimalToInteger(System.Decimal)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int64_t XQueryConvert_DecimalToInteger_m9786 (Object_t * __this /* static, unused */, Decimal_t698  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		Decimal_t698  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m9931(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::DecimalToString(System.Decimal)
extern TypeInfo* XmlConvert_t1128_il2cpp_TypeInfo_var;
extern "C" String_t* XQueryConvert_DecimalToString_m9787 (Object_t * __this /* static, unused */, Decimal_t698  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	{
		Decimal_t698  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1128_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m5019(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XQueryConvert::DoubleToBoolean(System.Double)
extern "C" bool XQueryConvert_DoubleToBoolean_m9788 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		return ((((int32_t)((((double)L_0) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Xml.XQueryConvert::DoubleToInt(System.Double)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int32_t XQueryConvert_DoubleToInt_m9789 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		double L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m9932(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::DoubleToInteger(System.Double)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int64_t XQueryConvert_DoubleToInteger_m9790 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		double L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m5112(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::DoubleToString(System.Double)
extern TypeInfo* XmlConvert_t1128_il2cpp_TypeInfo_var;
extern "C" String_t* XQueryConvert_DoubleToString_m9791 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	{
		double L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1128_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m5020(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XQueryConvert::FloatToBoolean(System.Single)
extern "C" bool XQueryConvert_FloatToBoolean_m9792 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		return ((((int32_t)((((float)L_0) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Double System.Xml.XQueryConvert::FloatToDouble(System.Single)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" double XQueryConvert_FloatToDouble_m9793 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m9933(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XQueryConvert::FloatToInt(System.Single)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int32_t XQueryConvert_FloatToInt_m9794 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m9934(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::FloatToInteger(System.Single)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int64_t XQueryConvert_FloatToInteger_m9795 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m5111(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::FloatToString(System.Single)
extern TypeInfo* XmlConvert_t1128_il2cpp_TypeInfo_var;
extern "C" String_t* XQueryConvert_FloatToString_m9796 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1128_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m5025(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XQueryConvert::IntegerToBoolean(System.Int64)
extern "C" bool XQueryConvert_IntegerToBoolean_m9797 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		return ((((int32_t)((((int64_t)L_0) == ((int64_t)(((int64_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Double System.Xml.XQueryConvert::IntegerToDouble(System.Int64)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" double XQueryConvert_IntegerToDouble_m9798 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		int64_t L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m9935(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XQueryConvert::IntegerToInt(System.Int64)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" int32_t XQueryConvert_IntegerToInt_m9799 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		int64_t L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m9936(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::IntegerToString(System.Int64)
extern TypeInfo* XmlConvert_t1128_il2cpp_TypeInfo_var;
extern "C" String_t* XQueryConvert_IntegerToString_m9800 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	{
		int64_t L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1128_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m5023(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XQueryConvert::IntToBoolean(System.Int32)
extern "C" bool XQueryConvert_IntToBoolean_m9801 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Double System.Xml.XQueryConvert::IntToDouble(System.Int32)
extern TypeInfo* Convert_t357_il2cpp_TypeInfo_var;
extern "C" double XQueryConvert_IntToDouble_m9802 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t357_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m9937(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.XQueryConvert::IntToString(System.Int32)
extern TypeInfo* XmlConvert_t1128_il2cpp_TypeInfo_var;
extern "C" String_t* XQueryConvert_IntToString_m9803 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1128_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_ToString_m5022(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.XQueryConvert::StringToBoolean(System.String)
extern TypeInfo* XmlConvert_t1128_il2cpp_TypeInfo_var;
extern "C" bool XQueryConvert_StringToBoolean_m9804 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1128_il2cpp_TypeInfo_var);
		bool L_1 = XmlConvert_ToBoolean_m5077(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.DateTime System.Xml.XQueryConvert::StringToDateTime(System.String)
extern TypeInfo* XmlConvert_t1128_il2cpp_TypeInfo_var;
extern "C" DateTime_t445  XQueryConvert_StringToDateTime_m9805 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1128_il2cpp_TypeInfo_var);
		DateTime_t445  L_1 = XmlConvert_ToDateTime_m7945(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double System.Xml.XQueryConvert::StringToDouble(System.String)
extern TypeInfo* XmlConvert_t1128_il2cpp_TypeInfo_var;
extern "C" double XQueryConvert_StringToDouble_m9806 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1128_il2cpp_TypeInfo_var);
		double L_1 = XmlConvert_ToDouble_m5082(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XQueryConvert::StringToInt(System.String)
extern TypeInfo* XmlConvert_t1128_il2cpp_TypeInfo_var;
extern "C" int32_t XQueryConvert_StringToInt_m9807 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1128_il2cpp_TypeInfo_var);
		int32_t L_1 = XmlConvert_ToInt32_m5079(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 System.Xml.XQueryConvert::StringToInteger(System.String)
extern TypeInfo* XmlConvert_t1128_il2cpp_TypeInfo_var;
extern "C" int64_t XQueryConvert_StringToInteger_m9808 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		XmlConvert_t1128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1958);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1128_il2cpp_TypeInfo_var);
		int64_t L_1 = XmlConvert_ToInt64_m5084(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XmlNodeChangedEventHandler
#include "System_Xml_System_Xml_XmlNodeChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.XmlNodeChangedEventHandler
#include "System_Xml_System_Xml_XmlNodeChangedEventHandlerMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Xml.XmlNodeChangedEventArgs
#include "System_Xml_System_Xml_XmlNodeChangedEventArgs.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Xml.XmlNodeChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void XmlNodeChangedEventHandler__ctor_m9809 (XmlNodeChangedEventHandler_t1596 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Xml.XmlNodeChangedEventHandler::Invoke(System.Object,System.Xml.XmlNodeChangedEventArgs)
extern "C" void XmlNodeChangedEventHandler_Invoke_m9810 (XmlNodeChangedEventHandler_t1596 * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t1608 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		XmlNodeChangedEventHandler_Invoke_m9810((XmlNodeChangedEventHandler_t1596 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t1608 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t1608 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, XmlNodeChangedEventArgs_t1608 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_XmlNodeChangedEventHandler_t1596(Il2CppObject* delegate, Object_t * ___sender, XmlNodeChangedEventArgs_t1608 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Xml.XmlNodeChangedEventHandler::BeginInvoke(System.Object,System.Xml.XmlNodeChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * XmlNodeChangedEventHandler_BeginInvoke_m9811 (XmlNodeChangedEventHandler_t1596 * __this, Object_t * ___sender, XmlNodeChangedEventArgs_t1608 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Xml.XmlNodeChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void XmlNodeChangedEventHandler_EndInvoke_m9812 (XmlNodeChangedEventHandler_t1596 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Xml.Schema.ValidationEventHandler
#include "System_Xml_System_Xml_Schema_ValidationEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Schema.ValidationEventHandler
#include "System_Xml_System_Xml_Schema_ValidationEventHandlerMethodDeclarations.h"

// System.Xml.Schema.ValidationEventArgs
#include "System_Xml_System_Xml_Schema_ValidationEventArgs.h"


// System.Void System.Xml.Schema.ValidationEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ValidationEventHandler__ctor_m9813 (ValidationEventHandler_t1144 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Xml.Schema.ValidationEventHandler::Invoke(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" void ValidationEventHandler_Invoke_m9814 (ValidationEventHandler_t1144 * __this, Object_t * ___sender, ValidationEventArgs_t1704 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ValidationEventHandler_Invoke_m9814((ValidationEventHandler_t1144 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, ValidationEventArgs_t1704 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, ValidationEventArgs_t1704 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, ValidationEventArgs_t1704 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ValidationEventHandler_t1144(Il2CppObject* delegate, Object_t * ___sender, ValidationEventArgs_t1704 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Xml.Schema.ValidationEventHandler::BeginInvoke(System.Object,System.Xml.Schema.ValidationEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ValidationEventHandler_BeginInvoke_m9815 (ValidationEventHandler_t1144 * __this, Object_t * ___sender, ValidationEventArgs_t1704 * ___e, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Xml.Schema.ValidationEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ValidationEventHandler_EndInvoke_m9816 (ValidationEventHandler_t1144 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Xml.Schema.XmlValueGetter
#include "System_Xml_System_Xml_Schema_XmlValueGetter.h"
#ifndef _MSC_VER
#else
#endif
// System.Xml.Schema.XmlValueGetter
#include "System_Xml_System_Xml_Schema_XmlValueGetterMethodDeclarations.h"



// System.Void System.Xml.Schema.XmlValueGetter::.ctor(System.Object,System.IntPtr)
extern "C" void XmlValueGetter__ctor_m9817 (XmlValueGetter_t1490 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Xml.Schema.XmlValueGetter::Invoke()
extern "C" Object_t * XmlValueGetter_Invoke_m9818 (XmlValueGetter_t1490 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		XmlValueGetter_Invoke_m9818((XmlValueGetter_t1490 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_XmlValueGetter_t1490(Il2CppObject* delegate)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func();
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	return __return_value_unmarshaled;
}
// System.IAsyncResult System.Xml.Schema.XmlValueGetter::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * XmlValueGetter_BeginInvoke_m9819 (XmlValueGetter_t1490 * __this, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Xml.Schema.XmlValueGetter::EndInvoke(System.IAsyncResult)
extern "C" Object_t * XmlValueGetter_EndInvoke_m9820 (XmlValueGetter_t1490 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t1778_marshal(const U24ArrayTypeU2412_t1778& unmarshaled, U24ArrayTypeU2412_t1778_marshaled& marshaled)
{
}
void U24ArrayTypeU2412_t1778_marshal_back(const U24ArrayTypeU2412_t1778_marshaled& marshaled, U24ArrayTypeU2412_t1778& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t1778_marshal_cleanup(U24ArrayTypeU2412_t1778_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$8
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$8
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$8
void U24ArrayTypeU248_t1779_marshal(const U24ArrayTypeU248_t1779& unmarshaled, U24ArrayTypeU248_t1779_marshaled& marshaled)
{
}
void U24ArrayTypeU248_t1779_marshal_back(const U24ArrayTypeU248_t1779_marshaled& marshaled, U24ArrayTypeU248_t1779& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$8
void U24ArrayTypeU248_t1779_marshal_cleanup(U24ArrayTypeU248_t1779_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_1.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$256
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t1780_marshal(const U24ArrayTypeU24256_t1780& unmarshaled, U24ArrayTypeU24256_t1780_marshaled& marshaled)
{
}
void U24ArrayTypeU24256_t1780_marshal_back(const U24ArrayTypeU24256_t1780_marshaled& marshaled, U24ArrayTypeU24256_t1780& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t1780_marshal_cleanup(U24ArrayTypeU24256_t1780_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1280
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_2.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$1280
#include "System_Xml_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1280
void U24ArrayTypeU241280_t1781_marshal(const U24ArrayTypeU241280_t1781& unmarshaled, U24ArrayTypeU241280_t1781_marshaled& marshaled)
{
}
void U24ArrayTypeU241280_t1781_marshal_back(const U24ArrayTypeU241280_t1781_marshaled& marshaled, U24ArrayTypeU241280_t1781& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1280
void U24ArrayTypeU241280_t1781_marshal_cleanup(U24ArrayTypeU241280_t1781_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "System_Xml_U3CPrivateImplementationDetailsU3E.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>
#include "System_Xml_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
