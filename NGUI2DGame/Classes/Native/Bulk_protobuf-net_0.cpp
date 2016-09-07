#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// ProtoBuf.BufferExtension
struct BufferExtension_t2893926933;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ProtoBuf.Extensible
struct Extensible_t597730409;
// ProtoBuf.IExtension
struct IExtension_t1221360786;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// ProtoBuf.Meta.BasicList
struct BasicList_t2284403912;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// ProtoBuf.Meta.BasicList/Node
struct Node_t76907683;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// ProtoBuf.Meta.MutableList
struct MutableList_t1161363740;
// ProtoBuf.Meta.TypeModel
struct TypeModel_t653695305;
// ProtoBuf.SerializationContext
struct SerializationContext_t3878296411;
// System.Exception
struct Exception_t1927440687;
// ProtoBuf.NetObjectCache
struct NetObjectCache_t2620415644;
// ProtoBuf.ProtoContractAttribute
struct ProtoContractAttribute_t1463874358;
// ProtoBuf.ProtoException
struct ProtoException_t1712273663;
// ProtoBuf.ProtoMemberAttribute
struct ProtoMemberAttribute_t3383080044;
// ProtoBuf.IExtensible
struct IExtensible_t151450440;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "protobufU2Dnet_U3CModuleU3E3783534214.h"
#include "protobufU2Dnet_U3CModuleU3E3783534214MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_BclHelpers3990312086.h"
#include "protobufU2Dnet_ProtoBuf_BclHelpers3990312086MethodDeclarations.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_ArgumentNullException628810857MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307MethodDeclarations.h"
#include "mscorlib_System_TimeSpan3430258949MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_ProtoException1712273663MethodDeclarations.h"
#include "mscorlib_System_Int64909078037.h"
#include "protobufU2Dnet_ProtoBuf_TimeSpanScale977970923.h"
#include "protobufU2Dnet_ProtoBuf_SubItemToken3722101296.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "protobufU2Dnet_ProtoBuf_WireType4172783757.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_ArgumentNullException628810857.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_ProtoException1712273663.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_DateTime693205669MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867MethodDeclarations.h"
#include "mscorlib_System_Int64909078037MethodDeclarations.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_UInt642909196914.h"
#include "mscorlib_System_UInt322149682021.h"
#include "mscorlib_System_Byte3683104436.h"
#include "mscorlib_System_Decimal724701077MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_Guid2533601593MethodDeclarations.h"
#include "mscorlib_System_Int164041245914.h"
#include "protobufU2Dnet_ProtoBuf_BufferExtension2893926933.h"
#include "protobufU2Dnet_ProtoBuf_BufferExtension2893926933MethodDeclarations.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_MemoryStream743994179MethodDeclarations.h"
#include "mscorlib_System_IO_MemoryStream743994179.h"
#include "protobufU2Dnet_ProtoBuf_Helpers2267943139MethodDeclarations.h"
#include "mscorlib_System_IO_Stream3255436806MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_BufferPool710398810.h"
#include "protobufU2Dnet_ProtoBuf_BufferPool710398810MethodDeclarations.h"
#include "mscorlib_System_Threading_Monitor3228523394MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_DataFormat1866125683.h"
#include "protobufU2Dnet_ProtoBuf_DataFormat1866125683MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_Extensible597730409.h"
#include "protobufU2Dnet_ProtoBuf_Extensible597730409MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_Helpers2267943139.h"
#include "System_System_Diagnostics_Debug2273457373MethodDeclarations.h"
#include "mscorlib_System_Diagnostics_Debugger4214909883MethodDeclarations.h"
#include "mscorlib_System_Buffer3497320070MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Single2076509932MethodDeclarations.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "mscorlib_System_Type1303803226MethodDeclarations.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Reflection_Binder3404612058.h"
#include "mscorlib_System_Reflection_ParameterModifier1820634920.h"
#include "mscorlib_System_Double4078015681.h"
#include "mscorlib_System_Double4078015681MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_ProtoTypeCode3296822465.h"
#include "mscorlib_System_TypeCode2536926201.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_Nullable1429764613MethodDeclarations.h"
#include "mscorlib_System_Reflection_ConstructorInfo2851816542.h"
#include "protobufU2Dnet_ProtoBuf_MemberSerializationOptions1047673488.h"
#include "protobufU2Dnet_ProtoBuf_MemberSerializationOptions1047673488MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_Meta_BasicList2284403912.h"
#include "protobufU2Dnet_ProtoBuf_Meta_BasicList2284403912MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_Meta_BasicList_Node76907683MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_Meta_BasicList_Node76907683.h"
#include "protobufU2Dnet_ProtoBuf_Meta_BasicList_NodeEnumera2246148295.h"
#include "protobufU2Dnet_ProtoBuf_Meta_BasicList_NodeEnumera2246148295MethodDeclarations.h"
#include "mscorlib_System_ArgumentOutOfRangeException279959794MethodDeclarations.h"
#include "mscorlib_System_ArgumentOutOfRangeException279959794.h"
#include "mscorlib_System_InvalidOperationException721527559MethodDeclarations.h"
#include "mscorlib_System_InvalidOperationException721527559.h"
#include "mscorlib_System_Array3829468939MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_Meta_MutableList1161363740.h"
#include "protobufU2Dnet_ProtoBuf_Meta_MutableList1161363740MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305MethodDeclarations.h"
#include "System_System_Uri19570940MethodDeclarations.h"
#include "mscorlib_System_NullReferenceException3156209119MethodDeclarations.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_UInt16986882611.h"
#include "mscorlib_System_SByte454417549.h"
#include "mscorlib_System_Char3454481338.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_NullReferenceException3156209119.h"
#include "protobufU2Dnet_ProtoBuf_SerializationContext3878296411.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260MethodDeclarations.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_MethodBase904190842MethodDeclarations.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075MethodDeclarations.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1793819818MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1793819818.h"
#include "mscorlib_System_Activator1850728717MethodDeclarations.h"
#include "mscorlib_System_Int322071877448MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_NetObjectCache2620415644.h"
#include "protobufU2Dnet_ProtoBuf_NetObjectCache2620415644MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3986656710MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g1663937576MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3986656710.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g1663937576.h"
#include "protobufU2Dnet_ProtoBuf_PrefixStyle2069489999.h"
#include "protobufU2Dnet_ProtoBuf_PrefixStyle2069489999MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_ProtoContractAttribute1463874358.h"
#include "protobufU2Dnet_ProtoBuf_ProtoContractAttribute1463874358MethodDeclarations.h"
#include "mscorlib_System_Attribute542643598MethodDeclarations.h"
#include "mscorlib_System_Exception1927440687MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_ProtoMemberAttribute3383080044.h"
#include "protobufU2Dnet_ProtoBuf_ProtoMemberAttribute3383080044MethodDeclarations.h"
#include "mscorlib_System_ArgumentException3259014390MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_SerializationContext3878296411MethodDeclarations.h"
#include "mscorlib_System_ArgumentException3259014390.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3943999495MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3943999495.h"
#include "mscorlib_System_OverflowException1075868493MethodDeclarations.h"
#include "mscorlib_System_OverflowException1075868493.h"
#include "mscorlib_System_Text_UTF8Encoding111055448.h"
#include "mscorlib_System_Text_Encoding663144255MethodDeclarations.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_BitConverter3195628829MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_SubItemToken3722101296MethodDeclarations.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"
#include "mscorlib_System_IO_EndOfStreamException1711658693MethodDeclarations.h"
#include "mscorlib_System_IO_EndOfStreamException1711658693.h"
#include "mscorlib_System_Text_UTF8Encoding111055448MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_ProtoTypeCode3296822465MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_TimeSpanScale977970923MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_WireType4172783757MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ProtoBuf.BclHelpers::WriteTimeSpan(System.TimeSpan,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* TimeSpan_t3430258949_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* WireType_t4172783757_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoException_t1712273663_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3423760790;
extern Il2CppCodeGenString* _stringLiteral1132935371;
extern const uint32_t BclHelpers_WriteTimeSpan_m368752617_MetadataUsageId;
extern "C"  void BclHelpers_WriteTimeSpan_m368752617 (Il2CppObject * __this /* static, unused */, TimeSpan_t3430258949  ___timeSpan0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BclHelpers_WriteTimeSpan_m368752617_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	SubItemToken_t3722101296  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___dest1;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3423760790, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___dest1;
		NullCheck(L_3);
		int32_t L_4 = ProtoWriter_get_WireType_m3798169249(L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		int32_t L_5 = V_4;
		if (((int32_t)((int32_t)L_5-(int32_t)1)) == 0)
		{
			goto IL_0185;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)1)) == 1)
		{
			goto IL_0039;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)1)) == 2)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0195;
	}

IL_0039:
	{
		int64_t L_6 = TimeSpan_get_Ticks_m2285358246((&___timeSpan0), /*hidden argument*/NULL);
		V_0 = L_6;
		TimeSpan_t3430258949  L_7 = ___timeSpan0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t3430258949_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_8 = ((TimeSpan_t3430258949_StaticFields*)TimeSpan_t3430258949_il2cpp_TypeInfo_var->static_fields)->get_MaxValue_0();
		bool L_9 = TimeSpan_op_Equality_m3565136304(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_0060;
		}
	}
	{
		V_0 = (((int64_t)((int64_t)1)));
		V_1 = ((int32_t)15);
		goto IL_013c;
	}

IL_0060:
	{
		TimeSpan_t3430258949  L_11 = ___timeSpan0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t3430258949_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_12 = ((TimeSpan_t3430258949_StaticFields*)TimeSpan_t3430258949_il2cpp_TypeInfo_var->static_fields)->get_MinValue_1();
		bool L_13 = TimeSpan_op_Equality_m3565136304(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_007f;
		}
	}
	{
		V_0 = (((int64_t)((int64_t)(-1))));
		V_1 = ((int32_t)15);
		goto IL_013c;
	}

IL_007f:
	{
		int64_t L_15 = V_0;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_15%(int64_t)((int64_t)864000000000LL)))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_00aa;
		}
	}
	{
		V_1 = 0;
		int64_t L_17 = V_0;
		V_0 = ((int64_t)((int64_t)L_17/(int64_t)((int64_t)864000000000LL)));
		goto IL_013c;
	}

IL_00aa:
	{
		int64_t L_18 = V_0;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_18%(int64_t)((int64_t)36000000000LL)))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_00d2;
		}
	}
	{
		V_1 = 1;
		int64_t L_20 = V_0;
		V_0 = ((int64_t)((int64_t)L_20/(int64_t)((int64_t)36000000000LL)));
		goto IL_013c;
	}

IL_00d2:
	{
		int64_t L_21 = V_0;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_21%(int64_t)(((int64_t)((int64_t)((int32_t)600000000))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_00f4;
		}
	}
	{
		V_1 = 2;
		int64_t L_23 = V_0;
		V_0 = ((int64_t)((int64_t)L_23/(int64_t)(((int64_t)((int64_t)((int32_t)600000000))))));
		goto IL_013c;
	}

IL_00f4:
	{
		int64_t L_24 = V_0;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_24%(int64_t)(((int64_t)((int64_t)((int32_t)10000000))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0116;
		}
	}
	{
		V_1 = 3;
		int64_t L_26 = V_0;
		V_0 = ((int64_t)((int64_t)L_26/(int64_t)(((int64_t)((int64_t)((int32_t)10000000))))));
		goto IL_013c;
	}

IL_0116:
	{
		int64_t L_27 = V_0;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_27%(int64_t)(((int64_t)((int64_t)((int32_t)10000))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (L_28)
		{
			goto IL_0138;
		}
	}
	{
		V_1 = 4;
		int64_t L_29 = V_0;
		V_0 = ((int64_t)((int64_t)L_29/(int64_t)(((int64_t)((int64_t)((int32_t)10000))))));
		goto IL_013c;
	}

IL_0138:
	{
		V_1 = 5;
	}

IL_013c:
	{
		ProtoWriter_t2800220307 * L_30 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		SubItemToken_t3722101296  L_31 = ProtoWriter_StartSubItem_m525685061(NULL /*static, unused*/, NULL, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		int64_t L_32 = V_0;
		V_3 = (bool)((((int64_t)L_32) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_33 = V_3;
		if (L_33)
		{
			goto IL_0160;
		}
	}
	{
		ProtoWriter_t2800220307 * L_34 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, 1, 8, L_34, /*hidden argument*/NULL);
		int64_t L_35 = V_0;
		ProtoWriter_t2800220307 * L_36 = ___dest1;
		ProtoWriter_WriteInt64_m2297047412(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
	}

IL_0160:
	{
		int32_t L_37 = V_1;
		V_3 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_3;
		if (L_38)
		{
			goto IL_017b;
		}
	}
	{
		ProtoWriter_t2800220307 * L_39 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, 2, 0, L_39, /*hidden argument*/NULL);
		int32_t L_40 = V_1;
		ProtoWriter_t2800220307 * L_41 = ___dest1;
		ProtoWriter_WriteInt32_m17565190(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
	}

IL_017b:
	{
		SubItemToken_t3722101296  L_42 = V_2;
		ProtoWriter_t2800220307 * L_43 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_EndSubItem_m3237697851(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_0185:
	{
		int64_t L_44 = TimeSpan_get_Ticks_m2285358246((&___timeSpan0), /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_45 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt64_m2297047412(NULL /*static, unused*/, L_44, L_45, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_0195:
	{
		ProtoWriter_t2800220307 * L_46 = ___dest1;
		NullCheck(L_46);
		int32_t L_47 = ProtoWriter_get_WireType_m3798169249(L_46, /*hidden argument*/NULL);
		int32_t L_48 = L_47;
		Il2CppObject * L_49 = Box(WireType_t4172783757_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_49);
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_51 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1132935371, L_50, /*hidden argument*/NULL);
		ProtoException_t1712273663 * L_52 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_52, L_51, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52);
	}

IL_01b5:
	{
		return;
	}
}
// System.TimeSpan ProtoBuf.BclHelpers::ReadTimeSpan(ProtoBuf.ProtoReader)
extern Il2CppClass* BclHelpers_t3990312086_il2cpp_TypeInfo_var;
extern Il2CppClass* TimeSpan_t3430258949_il2cpp_TypeInfo_var;
extern const uint32_t BclHelpers_ReadTimeSpan_m2955884543_MetadataUsageId;
extern "C"  TimeSpan_t3430258949  BclHelpers_ReadTimeSpan_m2955884543 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___source0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BclHelpers_ReadTimeSpan_m2955884543_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	TimeSpan_t3430258949  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	{
		ProtoReader_t3981212867 * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		int64_t L_1 = BclHelpers_ReadTimeSpanTicks_m1549220641(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		V_2 = (bool)((((int32_t)((((int64_t)L_2) == ((int64_t)((int64_t)std::numeric_limits<int64_t>::min())))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t3430258949_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_4 = ((TimeSpan_t3430258949_StaticFields*)TimeSpan_t3430258949_il2cpp_TypeInfo_var->static_fields)->get_MinValue_1();
		V_1 = L_4;
		goto IL_0047;
	}

IL_0023:
	{
		int64_t L_5 = V_0;
		V_2 = (bool)((((int32_t)((((int64_t)L_5) == ((int64_t)((int64_t)std::numeric_limits<int64_t>::max())))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t3430258949_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_7 = ((TimeSpan_t3430258949_StaticFields*)TimeSpan_t3430258949_il2cpp_TypeInfo_var->static_fields)->get_MaxValue_0();
		V_1 = L_7;
		goto IL_0047;
	}

IL_003e:
	{
		int64_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t3430258949_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_9 = TimeSpan_FromTicks_m827965597(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0047;
	}

IL_0047:
	{
		TimeSpan_t3430258949  L_10 = V_1;
		return L_10;
	}
}
// System.DateTime ProtoBuf.BclHelpers::ReadDateTime(ProtoBuf.ProtoReader)
extern Il2CppClass* BclHelpers_t3990312086_il2cpp_TypeInfo_var;
extern Il2CppClass* DateTime_t693205669_il2cpp_TypeInfo_var;
extern const uint32_t BclHelpers_ReadDateTime_m3483555903_MetadataUsageId;
extern "C"  DateTime_t693205669  BclHelpers_ReadDateTime_m3483555903 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___source0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BclHelpers_ReadDateTime_m3483555903_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	DateTime_t693205669  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	DateTime_t693205669  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		ProtoReader_t3981212867 * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		int64_t L_1 = BclHelpers_ReadTimeSpanTicks_m1549220641(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		V_2 = (bool)((((int32_t)((((int64_t)L_2) == ((int64_t)((int64_t)std::numeric_limits<int64_t>::min())))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_4 = ((DateTime_t693205669_StaticFields*)DateTime_t693205669_il2cpp_TypeInfo_var->static_fields)->get_MinValue_3();
		V_1 = L_4;
		goto IL_004f;
	}

IL_0023:
	{
		int64_t L_5 = V_0;
		V_2 = (bool)((((int32_t)((((int64_t)L_5) == ((int64_t)((int64_t)std::numeric_limits<int64_t>::max())))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_7 = ((DateTime_t693205669_StaticFields*)DateTime_t693205669_il2cpp_TypeInfo_var->static_fields)->get_MaxValue_2();
		V_1 = L_7;
		goto IL_004f;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_8 = ((BclHelpers_t3990312086_StaticFields*)BclHelpers_t3990312086_il2cpp_TypeInfo_var->static_fields)->get_EpochOrigin_0();
		V_3 = L_8;
		int64_t L_9 = V_0;
		DateTime_t693205669  L_10 = DateTime_AddTicks_m3057746860((&V_3), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_004f;
	}

IL_004f:
	{
		DateTime_t693205669  L_11 = V_1;
		return L_11;
	}
}
// System.Void ProtoBuf.BclHelpers::WriteDateTime(System.DateTime,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* DateTime_t693205669_il2cpp_TypeInfo_var;
extern Il2CppClass* TimeSpan_t3430258949_il2cpp_TypeInfo_var;
extern Il2CppClass* BclHelpers_t3990312086_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3423760790;
extern const uint32_t BclHelpers_WriteDateTime_m2943913385_MetadataUsageId;
extern "C"  void BclHelpers_WriteDateTime_m2943913385 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BclHelpers_WriteDateTime_m2943913385_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t3430258949  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___dest1;
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3423760790, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___dest1;
		NullCheck(L_3);
		int32_t L_4 = ProtoWriter_get_WireType_m3798169249(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		if (((int32_t)((int32_t)L_5-(int32_t)2)) == 0)
		{
			goto IL_0030;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)2)) == 1)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0078;
	}

IL_0030:
	{
		DateTime_t693205669  L_6 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_7 = ((DateTime_t693205669_StaticFields*)DateTime_t693205669_il2cpp_TypeInfo_var->static_fields)->get_MaxValue_2();
		bool L_8 = DateTime_op_Equality_m1867073872(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t3430258949_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_10 = ((TimeSpan_t3430258949_StaticFields*)TimeSpan_t3430258949_il2cpp_TypeInfo_var->static_fields)->get_MaxValue_0();
		V_0 = L_10;
		goto IL_0076;
	}

IL_004c:
	{
		DateTime_t693205669  L_11 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_12 = ((DateTime_t693205669_StaticFields*)DateTime_t693205669_il2cpp_TypeInfo_var->static_fields)->get_MinValue_3();
		bool L_13 = DateTime_op_Equality_m1867073872(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t3430258949_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_15 = ((TimeSpan_t3430258949_StaticFields*)TimeSpan_t3430258949_il2cpp_TypeInfo_var->static_fields)->get_MinValue_1();
		V_0 = L_15;
		goto IL_0076;
	}

IL_0068:
	{
		DateTime_t693205669  L_16 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_17 = ((BclHelpers_t3990312086_StaticFields*)BclHelpers_t3990312086_il2cpp_TypeInfo_var->static_fields)->get_EpochOrigin_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_18 = DateTime_op_Subtraction_m3246456251(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
	}

IL_0076:
	{
		goto IL_0086;
	}

IL_0078:
	{
		DateTime_t693205669  L_19 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_20 = ((BclHelpers_t3990312086_StaticFields*)BclHelpers_t3990312086_il2cpp_TypeInfo_var->static_fields)->get_EpochOrigin_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_21 = DateTime_op_Subtraction_m3246456251(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_0086;
	}

IL_0086:
	{
		TimeSpan_t3430258949  L_22 = V_0;
		ProtoWriter_t2800220307 * L_23 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		BclHelpers_WriteTimeSpan_m368752617(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 ProtoBuf.BclHelpers::ReadTimeSpanTicks(ProtoBuf.ProtoReader)
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoException_t1712273663_il2cpp_TypeInfo_var;
extern Il2CppClass* TimeSpanScale_t977970923_il2cpp_TypeInfo_var;
extern Il2CppClass* WireType_t4172783757_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1114962234;
extern Il2CppCodeGenString* _stringLiteral1002029483;
extern Il2CppCodeGenString* _stringLiteral1132935371;
extern const uint32_t BclHelpers_ReadTimeSpanTicks_m1549220641_MetadataUsageId;
extern "C"  int64_t BclHelpers_ReadTimeSpanTicks_m1549220641 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___source0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BclHelpers_ReadTimeSpanTicks_m1549220641_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	SubItemToken_t3722101296  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	int64_t V_9 = 0;
	{
		ProtoReader_t3981212867 * L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1 = ProtoReader_get_WireType_m3607414071(L_0, /*hidden argument*/NULL);
		V_5 = L_1;
		int32_t L_2 = V_5;
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 0)
		{
			goto IL_017f;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 1)
		{
			goto IL_0023;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 2)
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0189;
	}

IL_0023:
	{
		ProtoReader_t3981212867 * L_3 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		SubItemToken_t3722101296  L_4 = ProtoReader_StartSubItem_m1950929655(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		V_2 = 0;
		V_3 = (((int64_t)((int64_t)0)));
		goto IL_006c;
	}

IL_0031:
	{
		int32_t L_5 = V_1;
		V_6 = L_5;
		int32_t L_6 = V_6;
		if (((int32_t)((int32_t)L_6-(int32_t)1)) == 0)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)1)) == 1)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0062;
	}

IL_0048:
	{
		ProtoReader_t3981212867 * L_7 = ___source0;
		NullCheck(L_7);
		int32_t L_8 = ProtoReader_ReadInt32_m3141427562(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		goto IL_006b;
	}

IL_0051:
	{
		ProtoReader_t3981212867 * L_9 = ___source0;
		NullCheck(L_9);
		ProtoReader_Assert_m1327183478(L_9, 8, /*hidden argument*/NULL);
		ProtoReader_t3981212867 * L_10 = ___source0;
		NullCheck(L_10);
		int64_t L_11 = ProtoReader_ReadInt64_m692900778(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		goto IL_006b;
	}

IL_0062:
	{
		ProtoReader_t3981212867 * L_12 = ___source0;
		NullCheck(L_12);
		ProtoReader_SkipField_m3666995751(L_12, /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_006b:
	{
	}

IL_006c:
	{
		ProtoReader_t3981212867 * L_13 = ___source0;
		NullCheck(L_13);
		int32_t L_14 = ProtoReader_ReadFieldHeader_m3404319213(L_13, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		V_1 = L_15;
		V_7 = (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (L_16)
		{
			goto IL_0031;
		}
	}
	{
		SubItemToken_t3722101296  L_17 = V_0;
		ProtoReader_t3981212867 * L_18 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_EndSubItem_m1622745011(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		V_8 = L_19;
		int32_t L_20 = V_8;
		if (L_20 == 0)
		{
			goto IL_00b2;
		}
		if (L_20 == 1)
		{
			goto IL_00c4;
		}
		if (L_20 == 2)
		{
			goto IL_00d6;
		}
		if (L_20 == 3)
		{
			goto IL_00e5;
		}
		if (L_20 == 4)
		{
			goto IL_00f4;
		}
		if (L_20 == 5)
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_21 = V_8;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)15))))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_0164;
	}

IL_00b2:
	{
		int64_t L_22 = V_3;
		V_4 = ((int64_t)((int64_t)L_22*(int64_t)((int64_t)864000000000LL)));
		goto IL_01a9;
	}

IL_00c4:
	{
		int64_t L_23 = V_3;
		V_4 = ((int64_t)((int64_t)L_23*(int64_t)((int64_t)36000000000LL)));
		goto IL_01a9;
	}

IL_00d6:
	{
		int64_t L_24 = V_3;
		V_4 = ((int64_t)((int64_t)L_24*(int64_t)(((int64_t)((int64_t)((int32_t)600000000))))));
		goto IL_01a9;
	}

IL_00e5:
	{
		int64_t L_25 = V_3;
		V_4 = ((int64_t)((int64_t)L_25*(int64_t)(((int64_t)((int64_t)((int32_t)10000000))))));
		goto IL_01a9;
	}

IL_00f4:
	{
		int64_t L_26 = V_3;
		V_4 = ((int64_t)((int64_t)L_26*(int64_t)(((int64_t)((int64_t)((int32_t)10000))))));
		goto IL_01a9;
	}

IL_0103:
	{
		int64_t L_27 = V_3;
		V_4 = L_27;
		goto IL_01a9;
	}

IL_010b:
	{
		int64_t L_28 = V_3;
		V_9 = L_28;
		int64_t L_29 = V_9;
		if ((((int64_t)L_29) > ((int64_t)(((int64_t)((int64_t)1))))))
		{
			goto IL_0131;
		}
	}
	{
		int64_t L_30 = V_9;
		if ((((int64_t)L_30) < ((int64_t)(((int64_t)((int64_t)(-1)))))))
		{
			goto IL_014d;
		}
	}
	{
		int64_t L_31 = V_9;
		if ((((int32_t)((int32_t)((int64_t)((int64_t)L_31-(int64_t)(((int64_t)((int64_t)(-1))))))))) == 0)
		{
			goto IL_0140;
		}
		if ((((int32_t)((int32_t)((int64_t)((int64_t)L_31-(int64_t)(((int64_t)((int64_t)(-1))))))))) == 1)
		{
			goto IL_014d;
		}
		if ((((int32_t)((int32_t)((int64_t)((int64_t)L_31-(int64_t)(((int64_t)((int64_t)(-1))))))))) == 2)
		{
			goto IL_0133;
		}
	}

IL_0131:
	{
		goto IL_014d;
	}

IL_0133:
	{
		V_4 = ((int64_t)std::numeric_limits<int64_t>::max());
		goto IL_01a9;
	}

IL_0140:
	{
		V_4 = ((int64_t)std::numeric_limits<int64_t>::min());
		goto IL_01a9;
	}

IL_014d:
	{
		String_t* L_32 = Int64_ToString_m689375889((&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1114962234, L_32, /*hidden argument*/NULL);
		ProtoException_t1712273663 * L_34 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_34, L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34);
	}

IL_0164:
	{
		int32_t L_35 = V_2;
		int32_t L_36 = L_35;
		Il2CppObject * L_37 = Box(TimeSpanScale_t977970923_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_37);
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1002029483, L_38, /*hidden argument*/NULL);
		ProtoException_t1712273663 * L_40 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40);
	}

IL_017f:
	{
		ProtoReader_t3981212867 * L_41 = ___source0;
		NullCheck(L_41);
		int64_t L_42 = ProtoReader_ReadInt64_m692900778(L_41, /*hidden argument*/NULL);
		V_4 = L_42;
		goto IL_01a9;
	}

IL_0189:
	{
		ProtoReader_t3981212867 * L_43 = ___source0;
		NullCheck(L_43);
		int32_t L_44 = ProtoReader_get_WireType_m3607414071(L_43, /*hidden argument*/NULL);
		int32_t L_45 = L_44;
		Il2CppObject * L_46 = Box(WireType_t4172783757_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_46);
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1132935371, L_47, /*hidden argument*/NULL);
		ProtoException_t1712273663 * L_49 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_49, L_48, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49);
	}

IL_01a9:
	{
		int64_t L_50 = V_4;
		return L_50;
	}
}
// System.Decimal ProtoBuf.BclHelpers::ReadDecimal(ProtoBuf.ProtoReader)
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t BclHelpers_ReadDecimal_m3677017487_MetadataUsageId;
extern "C"  Decimal_t724701077  BclHelpers_ReadDecimal_m3677017487 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___reader0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BclHelpers_ReadDecimal_m3677017487_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	SubItemToken_t3722101296  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	uint8_t V_9 = 0x0;
	Decimal_t724701077  V_10;
	memset(&V_10, 0, sizeof(V_10));
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t G_B12_0 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		V_1 = 0;
		V_2 = 0;
		ProtoReader_t3981212867 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		SubItemToken_t3722101296  L_1 = ProtoReader_StartSubItem_m1950929655(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_4 = L_1;
		goto IL_0052;
	}

IL_0012:
	{
		int32_t L_2 = V_3;
		V_11 = L_2;
		int32_t L_3 = V_11;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_002d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0036;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0048;
	}

IL_002d:
	{
		ProtoReader_t3981212867 * L_4 = ___reader0;
		NullCheck(L_4);
		uint64_t L_5 = ProtoReader_ReadUInt64_m3682925282(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0051;
	}

IL_0036:
	{
		ProtoReader_t3981212867 * L_6 = ___reader0;
		NullCheck(L_6);
		uint32_t L_7 = ProtoReader_ReadUInt32_m164356528(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0051;
	}

IL_003f:
	{
		ProtoReader_t3981212867 * L_8 = ___reader0;
		NullCheck(L_8);
		uint32_t L_9 = ProtoReader_ReadUInt32_m164356528(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		goto IL_0051;
	}

IL_0048:
	{
		ProtoReader_t3981212867 * L_10 = ___reader0;
		NullCheck(L_10);
		ProtoReader_SkipField_m3666995751(L_10, /*hidden argument*/NULL);
		goto IL_0051;
	}

IL_0051:
	{
	}

IL_0052:
	{
		ProtoReader_t3981212867 * L_11 = ___reader0;
		NullCheck(L_11);
		int32_t L_12 = ProtoReader_ReadFieldHeader_m3404319213(L_11, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		V_3 = L_13;
		V_12 = (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
		bool L_14 = V_12;
		if (L_14)
		{
			goto IL_0012;
		}
	}
	{
		SubItemToken_t3722101296  L_15 = V_4;
		ProtoReader_t3981212867 * L_16 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_EndSubItem_m1622745011(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		uint64_t L_17 = V_0;
		if ((!(((uint64_t)L_17) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_007a;
		}
	}
	{
		uint32_t L_18 = V_1;
		G_B12_0 = ((((int32_t)((((int32_t)L_18) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007b;
	}

IL_007a:
	{
		G_B12_0 = 1;
	}

IL_007b:
	{
		V_12 = (bool)G_B12_0;
		bool L_19 = V_12;
		if (L_19)
		{
			goto IL_008c;
		}
	}
	{
		Decimal_t724701077  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Decimal__ctor_m1010012873(&L_20, 0, /*hidden argument*/NULL);
		V_10 = L_20;
		goto IL_00c7;
	}

IL_008c:
	{
		uint64_t L_21 = V_0;
		V_5 = (((int32_t)((int32_t)((int64_t)((int64_t)L_21&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))));
		uint64_t L_22 = V_0;
		V_6 = (((int32_t)((int32_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_22>>((int32_t)32)))&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))));
		uint32_t L_23 = V_1;
		V_7 = L_23;
		uint32_t L_24 = V_2;
		V_8 = (bool)((((int32_t)((int32_t)((int32_t)L_24&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		uint32_t L_25 = V_2;
		V_9 = (((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)510)))>>1)))));
		int32_t L_26 = V_5;
		int32_t L_27 = V_6;
		int32_t L_28 = V_7;
		bool L_29 = V_8;
		uint8_t L_30 = V_9;
		Decimal_t724701077  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Decimal__ctor_m1770144563(&L_31, L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		V_10 = L_31;
		goto IL_00c7;
	}

IL_00c7:
	{
		Decimal_t724701077  L_32 = V_10;
		return L_32;
	}
}
// System.Void ProtoBuf.BclHelpers::WriteDecimal(System.Decimal,ProtoBuf.ProtoWriter)
extern Il2CppClass* Decimal_t724701077_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t BclHelpers_WriteDecimal_m3508364249_MetadataUsageId;
extern "C"  void BclHelpers_WriteDecimal_m3508364249 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BclHelpers_WriteDecimal_m3508364249_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Int32U5BU5D_t3030399641* V_0 = NULL;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	SubItemToken_t3722101296  V_6;
	memset(&V_6, 0, sizeof(V_6));
	bool V_7 = false;
	{
		Decimal_t724701077  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t724701077_il2cpp_TypeInfo_var);
		Int32U5BU5D_t3030399641* L_1 = Decimal_GetBits_m3520401316(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Int32U5BU5D_t3030399641* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		int32_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = ((int64_t)((int64_t)(((int64_t)((int64_t)L_4)))<<(int32_t)((int32_t)32)));
		Int32U5BU5D_t3030399641* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		int32_t L_6 = 0;
		int32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = ((int64_t)((int64_t)(((int64_t)((int64_t)L_7)))&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))));
		uint64_t L_8 = V_1;
		uint64_t L_9 = V_2;
		V_3 = ((int64_t)((int64_t)L_8|(int64_t)L_9));
		Int32U5BU5D_t3030399641* L_10 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		int32_t L_11 = 2;
		int32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		Int32U5BU5D_t3030399641* L_13 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		int32_t L_14 = 3;
		int32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Int32U5BU5D_t3030399641* L_16 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 3);
		int32_t L_17 = 3;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15>>(int32_t)((int32_t)15)))&(int32_t)((int32_t)510)))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_18>>(int32_t)((int32_t)31)))&(int32_t)1))));
		ProtoWriter_t2800220307 * L_19 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		SubItemToken_t3722101296  L_20 = ProtoWriter_StartSubItem_m525685061(NULL /*static, unused*/, NULL, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		uint64_t L_21 = V_3;
		V_7 = (bool)((((int64_t)L_21) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_22 = V_7;
		if (L_22)
		{
			goto IL_005f;
		}
	}
	{
		ProtoWriter_t2800220307 * L_23 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, 1, 0, L_23, /*hidden argument*/NULL);
		uint64_t L_24 = V_3;
		ProtoWriter_t2800220307 * L_25 = ___writer1;
		ProtoWriter_WriteUInt64_m4018111616(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
	}

IL_005f:
	{
		uint32_t L_26 = V_4;
		V_7 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_7;
		if (L_27)
		{
			goto IL_007e;
		}
	}
	{
		ProtoWriter_t2800220307 * L_28 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, 2, 0, L_28, /*hidden argument*/NULL);
		uint32_t L_29 = V_4;
		ProtoWriter_t2800220307 * L_30 = ___writer1;
		ProtoWriter_WriteUInt32_m2195237856(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
	}

IL_007e:
	{
		uint32_t L_31 = V_5;
		V_7 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_7;
		if (L_32)
		{
			goto IL_009d;
		}
	}
	{
		ProtoWriter_t2800220307 * L_33 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, 3, 0, L_33, /*hidden argument*/NULL);
		uint32_t L_34 = V_5;
		ProtoWriter_t2800220307 * L_35 = ___writer1;
		ProtoWriter_WriteUInt32_m2195237856(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
	}

IL_009d:
	{
		SubItemToken_t3722101296  L_36 = V_6;
		ProtoWriter_t2800220307 * L_37 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_EndSubItem_m3237697851(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.BclHelpers::WriteGuid(System.Guid,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* Guid_t2533601593_il2cpp_TypeInfo_var;
extern const uint32_t BclHelpers_WriteGuid_m623077993_MetadataUsageId;
extern "C"  void BclHelpers_WriteGuid_m623077993 (Il2CppObject * __this /* static, unused */, Guid_t2533601593  ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BclHelpers_WriteGuid_m623077993_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	SubItemToken_t3722101296  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	{
		ByteU5BU5D_t3397334013* L_0 = Guid_ToByteArray_m1495052102((&___value0), /*hidden argument*/NULL);
		V_0 = L_0;
		ProtoWriter_t2800220307 * L_1 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		SubItemToken_t3722101296  L_2 = ProtoWriter_StartSubItem_m525685061(NULL /*static, unused*/, NULL, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		Guid_t2533601593  L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t2533601593_il2cpp_TypeInfo_var);
		Guid_t2533601593  L_4 = ((Guid_t2533601593_StaticFields*)Guid_t2533601593_il2cpp_TypeInfo_var->static_fields)->get_Empty_11();
		bool L_5 = Guid_op_Inequality_m1690326339(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_004b;
		}
	}
	{
		ProtoWriter_t2800220307 * L_7 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, 1, 1, L_7, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_8 = V_0;
		ProtoWriter_t2800220307 * L_9 = ___dest1;
		ProtoWriter_WriteBytes_m2971674761(NULL /*static, unused*/, L_8, 0, 8, L_9, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_10 = ___dest1;
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, 2, 1, L_10, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_11 = V_0;
		ProtoWriter_t2800220307 * L_12 = ___dest1;
		ProtoWriter_WriteBytes_m2971674761(NULL /*static, unused*/, L_11, 8, 8, L_12, /*hidden argument*/NULL);
	}

IL_004b:
	{
		SubItemToken_t3722101296  L_13 = V_1;
		ProtoWriter_t2800220307 * L_14 = ___dest1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_EndSubItem_m3237697851(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Guid ProtoBuf.BclHelpers::ReadGuid(ProtoBuf.ProtoReader)
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern Il2CppClass* Guid_t2533601593_il2cpp_TypeInfo_var;
extern const uint32_t BclHelpers_ReadGuid_m620805183_MetadataUsageId;
extern "C"  Guid_t2533601593  BclHelpers_ReadGuid_m620805183 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___source0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BclHelpers_ReadGuid_m620805183_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	SubItemToken_t3722101296  V_3;
	memset(&V_3, 0, sizeof(V_3));
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	Guid_t2533601593  V_8;
	memset(&V_8, 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t G_B11_0 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		V_1 = (((int64_t)((int64_t)0)));
		ProtoReader_t3981212867 * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		SubItemToken_t3722101296  L_1 = ProtoReader_StartSubItem_m1950929655(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_3 = L_1;
		goto IL_0043;
	}

IL_0010:
	{
		int32_t L_2 = V_2;
		V_9 = L_2;
		int32_t L_3 = V_9;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0027;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0039;
	}

IL_0027:
	{
		ProtoReader_t3981212867 * L_4 = ___source0;
		NullCheck(L_4);
		uint64_t L_5 = ProtoReader_ReadUInt64_m3682925282(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0042;
	}

IL_0030:
	{
		ProtoReader_t3981212867 * L_6 = ___source0;
		NullCheck(L_6);
		uint64_t L_7 = ProtoReader_ReadUInt64_m3682925282(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0042;
	}

IL_0039:
	{
		ProtoReader_t3981212867 * L_8 = ___source0;
		NullCheck(L_8);
		ProtoReader_SkipField_m3666995751(L_8, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0042:
	{
	}

IL_0043:
	{
		ProtoReader_t3981212867 * L_9 = ___source0;
		NullCheck(L_9);
		int32_t L_10 = ProtoReader_ReadFieldHeader_m3404319213(L_9, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		V_2 = L_11;
		V_10 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_10;
		if (L_12)
		{
			goto IL_0010;
		}
	}
	{
		SubItemToken_t3722101296  L_13 = V_3;
		ProtoReader_t3981212867 * L_14 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_EndSubItem_m1622745011(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		uint64_t L_15 = V_0;
		if ((!(((uint64_t)L_15) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_006b;
		}
	}
	{
		uint64_t L_16 = V_1;
		G_B11_0 = ((((int32_t)((((int64_t)L_16) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006c;
	}

IL_006b:
	{
		G_B11_0 = 1;
	}

IL_006c:
	{
		V_10 = (bool)G_B11_0;
		bool L_17 = V_10;
		if (L_17)
		{
			goto IL_007c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t2533601593_il2cpp_TypeInfo_var);
		Guid_t2533601593  L_18 = ((Guid_t2533601593_StaticFields*)Guid_t2533601593_il2cpp_TypeInfo_var->static_fields)->get_Empty_11();
		V_8 = L_18;
		goto IL_00ce;
	}

IL_007c:
	{
		uint64_t L_19 = V_0;
		V_4 = (((int32_t)((uint32_t)((int64_t)((uint64_t)L_19>>((int32_t)32))))));
		uint64_t L_20 = V_0;
		V_5 = (((int32_t)((uint32_t)L_20)));
		uint64_t L_21 = V_1;
		V_6 = (((int32_t)((uint32_t)((int64_t)((uint64_t)L_21>>((int32_t)32))))));
		uint64_t L_22 = V_1;
		V_7 = (((int32_t)((uint32_t)L_22)));
		uint32_t L_23 = V_5;
		uint32_t L_24 = V_4;
		uint32_t L_25 = V_4;
		uint32_t L_26 = V_7;
		uint32_t L_27 = V_7;
		uint32_t L_28 = V_7;
		uint32_t L_29 = V_7;
		uint32_t L_30 = V_6;
		uint32_t L_31 = V_6;
		uint32_t L_32 = V_6;
		uint32_t L_33 = V_6;
		Guid_t2533601593  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Guid__ctor_m543169477(&L_34, L_23, (((int16_t)((int16_t)L_24))), (((int16_t)((int16_t)((int32_t)((uint32_t)L_25>>((int32_t)16)))))), (((int32_t)((uint8_t)L_26))), (((int32_t)((uint8_t)((int32_t)((uint32_t)L_27>>8))))), (((int32_t)((uint8_t)((int32_t)((uint32_t)L_28>>((int32_t)16)))))), (((int32_t)((uint8_t)((int32_t)((uint32_t)L_29>>((int32_t)24)))))), (((int32_t)((uint8_t)L_30))), (((int32_t)((uint8_t)((int32_t)((uint32_t)L_31>>8))))), (((int32_t)((uint8_t)((int32_t)((uint32_t)L_32>>((int32_t)16)))))), (((int32_t)((uint8_t)((int32_t)((uint32_t)L_33>>((int32_t)24)))))), /*hidden argument*/NULL);
		V_8 = L_34;
		goto IL_00ce;
	}

IL_00ce:
	{
		Guid_t2533601593  L_35 = V_8;
		return L_35;
	}
}
// System.Void ProtoBuf.BclHelpers::.cctor()
extern Il2CppClass* BclHelpers_t3990312086_il2cpp_TypeInfo_var;
extern const uint32_t BclHelpers__cctor_m3183642318_MetadataUsageId;
extern "C"  void BclHelpers__cctor_m3183642318 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BclHelpers__cctor_m3183642318_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t693205669  L_0;
		memset(&L_0, 0, sizeof(L_0));
		DateTime__ctor_m2857738939(&L_0, ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		((BclHelpers_t3990312086_StaticFields*)BclHelpers_t3990312086_il2cpp_TypeInfo_var->static_fields)->set_EpochOrigin_0(L_0);
		return;
	}
}
// System.IO.Stream ProtoBuf.BufferExtension::ProtoBuf.IExtension.BeginAppend()
extern Il2CppClass* MemoryStream_t743994179_il2cpp_TypeInfo_var;
extern const uint32_t BufferExtension_ProtoBuf_IExtension_BeginAppend_m936675594_MetadataUsageId;
extern "C"  Stream_t3255436806 * BufferExtension_ProtoBuf_IExtension_BeginAppend_m936675594 (BufferExtension_t2893926933 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BufferExtension_ProtoBuf_IExtension_BeginAppend_m936675594_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t3255436806 * V_0 = NULL;
	{
		MemoryStream_t743994179 * L_0 = (MemoryStream_t743994179 *)il2cpp_codegen_object_new(MemoryStream_t743994179_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1043059966(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Stream_t3255436806 * L_1 = V_0;
		return L_1;
	}
}
// System.Void ProtoBuf.BufferExtension::ProtoBuf.IExtension.EndAppend(System.IO.Stream,System.Boolean)
extern Il2CppClass* MemoryStream_t743994179_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t BufferExtension_ProtoBuf_IExtension_EndAppend_m2444413882_MetadataUsageId;
extern "C"  void BufferExtension_ProtoBuf_IExtension_EndAppend_m2444413882 (BufferExtension_t2893926933 * __this, Stream_t3255436806 * ___stream0, bool ___commit1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BufferExtension_ProtoBuf_IExtension_EndAppend_m2444413882_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	MemoryStream_t743994179 * V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_t3397334013* V_3 = NULL;
	Stream_t3255436806 * V_4 = NULL;
	bool V_5 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B4_0 = 0;
	{
		Stream_t3255436806 * L_0 = ___stream0;
		V_4 = L_0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = ___commit1;
			if (!L_1)
			{
				goto IL_0019;
			}
		}

IL_0008:
		{
			Stream_t3255436806 * L_2 = ___stream0;
			NullCheck(L_2);
			int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
			int32_t L_4 = (((int32_t)((int32_t)L_3)));
			V_0 = L_4;
			G_B4_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_001a;
		}

IL_0019:
		{
			G_B4_0 = 1;
		}

IL_001a:
		{
			V_5 = (bool)G_B4_0;
			bool L_5 = V_5;
			if (L_5)
			{
				goto IL_0087;
			}
		}

IL_0021:
		{
			Stream_t3255436806 * L_6 = ___stream0;
			V_1 = ((MemoryStream_t743994179 *)CastclassClass(L_6, MemoryStream_t743994179_il2cpp_TypeInfo_var));
			ByteU5BU5D_t3397334013* L_7 = __this->get_buffer_0();
			V_5 = (bool)((((int32_t)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_7) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_8 = V_5;
			if (L_8)
			{
				goto IL_004b;
			}
		}

IL_003b:
		{
			MemoryStream_t743994179 * L_9 = V_1;
			NullCheck(L_9);
			ByteU5BU5D_t3397334013* L_10 = VirtFuncInvoker0< ByteU5BU5D_t3397334013* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_9);
			__this->set_buffer_0(L_10);
			goto IL_0086;
		}

IL_004b:
		{
			ByteU5BU5D_t3397334013* L_11 = __this->get_buffer_0();
			NullCheck(L_11);
			V_2 = (((int32_t)((int32_t)(((Il2CppArray *)L_11)->max_length))));
			int32_t L_12 = V_2;
			int32_t L_13 = V_0;
			V_3 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_12+(int32_t)L_13))));
			ByteU5BU5D_t3397334013* L_14 = __this->get_buffer_0();
			ByteU5BU5D_t3397334013* L_15 = V_3;
			int32_t L_16 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
			Helpers_BlockCopy_m2741176895(NULL /*static, unused*/, L_14, 0, L_15, 0, L_16, /*hidden argument*/NULL);
			MemoryStream_t743994179 * L_17 = V_1;
			NullCheck(L_17);
			ByteU5BU5D_t3397334013* L_18 = VirtFuncInvoker0< ByteU5BU5D_t3397334013* >::Invoke(29 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_17);
			ByteU5BU5D_t3397334013* L_19 = V_3;
			int32_t L_20 = V_2;
			int32_t L_21 = V_0;
			Helpers_BlockCopy_m2741176895(NULL /*static, unused*/, L_18, 0, L_19, L_20, L_21, /*hidden argument*/NULL);
			ByteU5BU5D_t3397334013* L_22 = V_3;
			__this->set_buffer_0(L_22);
		}

IL_0086:
		{
		}

IL_0087:
		{
			IL2CPP_LEAVE(0x9E, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		{
			Stream_t3255436806 * L_23 = V_4;
			V_5 = (bool)((((Il2CppObject*)(Stream_t3255436806 *)L_23) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_24 = V_5;
			if (L_24)
			{
				goto IL_009d;
			}
		}

IL_0095:
		{
			Stream_t3255436806 * L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_25);
		}

IL_009d:
		{
			IL2CPP_END_FINALLY(138)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_JUMP_TBL(0x9E, IL_009e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_009e:
	{
		return;
	}
}
// System.IO.Stream ProtoBuf.BufferExtension::ProtoBuf.IExtension.BeginQuery()
extern Il2CppClass* MemoryStream_t743994179_il2cpp_TypeInfo_var;
extern Il2CppClass* Stream_t3255436806_il2cpp_TypeInfo_var;
extern const uint32_t BufferExtension_ProtoBuf_IExtension_BeginQuery_m4106445428_MetadataUsageId;
extern "C"  Stream_t3255436806 * BufferExtension_ProtoBuf_IExtension_BeginQuery_m4106445428 (BufferExtension_t2893926933 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BufferExtension_ProtoBuf_IExtension_BeginQuery_m4106445428_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t3255436806 * V_0 = NULL;
	MemoryStream_t743994179 * G_B3_0 = NULL;
	{
		ByteU5BU5D_t3397334013* L_0 = __this->get_buffer_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_1 = __this->get_buffer_0();
		MemoryStream_t743994179 * L_2 = (MemoryStream_t743994179 *)il2cpp_codegen_object_new(MemoryStream_t743994179_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4073175573(L_2, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t3255436806_il2cpp_TypeInfo_var);
		Stream_t3255436806 * L_3 = ((Stream_t3255436806_StaticFields*)Stream_t3255436806_il2cpp_TypeInfo_var->static_fields)->get_Null_1();
		G_B3_0 = ((MemoryStream_t743994179 *)(L_3));
	}

IL_001b:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		Stream_t3255436806 * L_4 = V_0;
		return L_4;
	}
}
// System.Void ProtoBuf.BufferExtension::ProtoBuf.IExtension.EndQuery(System.IO.Stream)
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t BufferExtension_ProtoBuf_IExtension_EndQuery_m2723576651_MetadataUsageId;
extern "C"  void BufferExtension_ProtoBuf_IExtension_EndQuery_m2723576651 (BufferExtension_t2893926933 * __this, Stream_t3255436806 * ___stream0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BufferExtension_ProtoBuf_IExtension_EndQuery_m2723576651_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t3255436806 * V_0 = NULL;
	bool V_1 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t3255436806 * L_0 = ___stream0;
		V_0 = L_0;
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x17, FINALLY_0007);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0007;
	}

FINALLY_0007:
	{ // begin finally (depth: 1)
		{
			Stream_t3255436806 * L_1 = V_0;
			V_1 = (bool)((((Il2CppObject*)(Stream_t3255436806 *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_2 = V_1;
			if (L_2)
			{
				goto IL_0016;
			}
		}

IL_000f:
		{
			Stream_t3255436806 * L_3 = V_0;
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_3);
		}

IL_0016:
		{
			IL2CPP_END_FINALLY(7)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(7)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void ProtoBuf.BufferExtension::.ctor()
extern "C"  void BufferExtension__ctor_m1102001416 (BufferExtension_t2893926933 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] ProtoBuf.BufferPool::GetBuffer()
extern Il2CppClass* BufferPool_t710398810_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern const uint32_t BufferPool_GetBuffer_m3732834373_MetadataUsageId;
extern "C"  ByteU5BU5D_t3397334013* BufferPool_GetBuffer_m3732834373 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BufferPool_GetBuffer_m3732834373_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_t3397334013* V_2 = NULL;
	ObjectU5BU5D_t3614634134* V_3 = NULL;
	bool V_4 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t3614634134* L_0 = ((BufferPool_t710398810_StaticFields*)BufferPool_t710398810_il2cpp_TypeInfo_var->static_fields)->get_pool_0();
		ObjectU5BU5D_t3614634134* L_1 = L_0;
		V_3 = L_1;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, (Il2CppObject *)(Il2CppObject *)L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_003d;
		}

IL_0013:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
			ObjectU5BU5D_t3614634134* L_2 = ((BufferPool_t710398810_StaticFields*)BufferPool_t710398810_il2cpp_TypeInfo_var->static_fields)->get_pool_0();
			int32_t L_3 = V_1;
			NullCheck(L_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
			int32_t L_4 = L_3;
			Il2CppObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			Il2CppObject * L_6 = L_5;
			V_0 = L_6;
			V_4 = (bool)((((Il2CppObject*)(Il2CppObject *)L_6) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_7 = V_4;
			if (L_7)
			{
				goto IL_0038;
			}
		}

IL_0026:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
			ObjectU5BU5D_t3614634134* L_8 = ((BufferPool_t710398810_StaticFields*)BufferPool_t710398810_il2cpp_TypeInfo_var->static_fields)->get_pool_0();
			int32_t L_9 = V_1;
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
			ArrayElementTypeCheck (L_8, NULL);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Il2CppObject *)NULL);
			Il2CppObject * L_10 = V_0;
			V_2 = ((ByteU5BU5D_t3397334013*)Castclass(L_10, ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x66, FINALLY_0050);
		}

IL_0038:
		{
			int32_t L_11 = V_1;
			V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		}

IL_003d:
		{
			int32_t L_12 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
			ObjectU5BU5D_t3614634134* L_13 = ((BufferPool_t710398810_StaticFields*)BufferPool_t710398810_il2cpp_TypeInfo_var->static_fields)->get_pool_0();
			NullCheck(L_13);
			V_4 = (bool)((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_13)->max_length))))))? 1 : 0);
			bool L_14 = V_4;
			if (L_14)
			{
				goto IL_0013;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x58, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		ObjectU5BU5D_t3614634134* L_15 = V_3;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, (Il2CppObject *)(Il2CppObject *)L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0058:
	{
		V_2 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024)));
		goto IL_0066;
	}

IL_0066:
	{
		ByteU5BU5D_t3397334013* L_16 = V_2;
		return L_16;
	}
}
// System.Void ProtoBuf.BufferPool::ResizeAndFlushLeft(System.Byte[]&,System.Int32,System.Int32,System.Int32)
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppClass* BufferPool_t710398810_il2cpp_TypeInfo_var;
extern const uint32_t BufferPool_ResizeAndFlushLeft_m3855590401_MetadataUsageId;
extern "C"  void BufferPool_ResizeAndFlushLeft_m3855590401 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013** ___buffer0, int32_t ___toFitAtLeastBytes1, int32_t ___copyFromIndex2, int32_t ___copyBytes3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BufferPool_ResizeAndFlushLeft_m3855590401_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t3397334013* V_1 = NULL;
	bool V_2 = false;
	{
		ByteU5BU5D_t3397334013** L_0 = ___buffer0;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_DebugAssert_m763024030(NULL /*static, unused*/, (bool)((((int32_t)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)(*((ByteU5BU5D_t3397334013**)L_0))) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_1 = ___toFitAtLeastBytes1;
		ByteU5BU5D_t3397334013** L_2 = ___buffer0;
		NullCheck((*((ByteU5BU5D_t3397334013**)L_2)));
		Helpers_DebugAssert_m763024030(NULL /*static, unused*/, (bool)((((int32_t)L_1) > ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)(*((ByteU5BU5D_t3397334013**)L_2)))->max_length))))))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_3 = ___copyFromIndex2;
		Helpers_DebugAssert_m763024030(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_4 = ___copyBytes3;
		Helpers_DebugAssert_m763024030(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013** L_5 = ___buffer0;
		NullCheck((*((ByteU5BU5D_t3397334013**)L_5)));
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)(*((ByteU5BU5D_t3397334013**)L_5)))->max_length))))*(int32_t)2));
		int32_t L_6 = V_0;
		int32_t L_7 = ___toFitAtLeastBytes1;
		V_2 = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_9 = ___toFitAtLeastBytes1;
		V_0 = L_9;
	}

IL_004a:
	{
		int32_t L_10 = V_0;
		V_1 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)L_10));
		int32_t L_11 = ___copyBytes3;
		V_2 = (bool)((((int32_t)((((int32_t)L_11) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_006a;
		}
	}
	{
		ByteU5BU5D_t3397334013** L_13 = ___buffer0;
		int32_t L_14 = ___copyFromIndex2;
		ByteU5BU5D_t3397334013* L_15 = V_1;
		int32_t L_16 = ___copyBytes3;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_BlockCopy_m2741176895(NULL /*static, unused*/, (*((ByteU5BU5D_t3397334013**)L_13)), L_14, L_15, 0, L_16, /*hidden argument*/NULL);
	}

IL_006a:
	{
		ByteU5BU5D_t3397334013** L_17 = ___buffer0;
		NullCheck((*((ByteU5BU5D_t3397334013**)L_17)));
		V_2 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)(*((ByteU5BU5D_t3397334013**)L_17)))->max_length))))) == ((int32_t)((int32_t)1024)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (L_18)
		{
			goto IL_0085;
		}
	}
	{
		ByteU5BU5D_t3397334013** L_19 = ___buffer0;
		IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
		BufferPool_ReleaseBufferToPool_m2010456868(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
	}

IL_0085:
	{
		ByteU5BU5D_t3397334013** L_20 = ___buffer0;
		ByteU5BU5D_t3397334013* L_21 = V_1;
		*((Il2CppObject **)(L_20)) = (Il2CppObject *)L_21;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_20), (Il2CppObject *)L_21);
		return;
	}
}
// System.Void ProtoBuf.BufferPool::ReleaseBufferToPool(System.Byte[]&)
extern Il2CppClass* BufferPool_t710398810_il2cpp_TypeInfo_var;
extern const uint32_t BufferPool_ReleaseBufferToPool_m2010456868_MetadataUsageId;
extern "C"  void BufferPool_ReleaseBufferToPool_m2010456868 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013** ___buffer0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BufferPool_ReleaseBufferToPool_m2010456868_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ObjectU5BU5D_t3614634134* V_2 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t3397334013** L_0 = ___buffer0;
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)(*((ByteU5BU5D_t3397334013**)L_0))) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0075;
	}

IL_000f:
	{
		ByteU5BU5D_t3397334013** L_2 = ___buffer0;
		NullCheck((*((ByteU5BU5D_t3397334013**)L_2)));
		V_1 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)(*((ByteU5BU5D_t3397334013**)L_2)))->max_length))))) == ((int32_t)((int32_t)1024)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (L_3)
		{
			goto IL_0072;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t3614634134* L_4 = ((BufferPool_t710398810_StaticFields*)BufferPool_t710398810_il2cpp_TypeInfo_var->static_fields)->get_pool_0();
		ObjectU5BU5D_t3614634134* L_5 = L_4;
		V_2 = L_5;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, (Il2CppObject *)(Il2CppObject *)L_5, /*hidden argument*/NULL);
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			V_0 = 0;
			goto IL_0057;
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
			ObjectU5BU5D_t3614634134* L_6 = ((BufferPool_t710398810_StaticFields*)BufferPool_t710398810_il2cpp_TypeInfo_var->static_fields)->get_pool_0();
			int32_t L_7 = V_0;
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
			int32_t L_8 = L_7;
			Il2CppObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			V_1 = (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_9) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_10 = V_1;
			if (L_10)
			{
				goto IL_0052;
			}
		}

IL_0046:
		{
			IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
			ObjectU5BU5D_t3614634134* L_11 = ((BufferPool_t710398810_StaticFields*)BufferPool_t710398810_il2cpp_TypeInfo_var->static_fields)->get_pool_0();
			int32_t L_12 = V_0;
			ByteU5BU5D_t3397334013** L_13 = ___buffer0;
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
			ArrayElementTypeCheck (L_11, (*((ByteU5BU5D_t3397334013**)L_13)));
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Il2CppObject *)(*((ByteU5BU5D_t3397334013**)L_13)));
			goto IL_0065;
		}

IL_0052:
		{
			int32_t L_14 = V_0;
			V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
		}

IL_0057:
		{
			int32_t L_15 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
			ObjectU5BU5D_t3614634134* L_16 = ((BufferPool_t710398810_StaticFields*)BufferPool_t710398810_il2cpp_TypeInfo_var->static_fields)->get_pool_0();
			NullCheck(L_16);
			V_1 = (bool)((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_16)->max_length))))))? 1 : 0);
			bool L_17 = V_1;
			if (L_17)
			{
				goto IL_0034;
			}
		}

IL_0065:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		ObjectU5BU5D_t3614634134* L_18 = V_2;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, (Il2CppObject *)(Il2CppObject *)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x70, IL_0070)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0070:
	{
	}

IL_0072:
	{
		ByteU5BU5D_t3397334013** L_19 = ___buffer0;
		*((Il2CppObject **)(L_19)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_19), (Il2CppObject *)NULL);
	}

IL_0075:
	{
		return;
	}
}
// System.Void ProtoBuf.BufferPool::.cctor()
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* BufferPool_t710398810_il2cpp_TypeInfo_var;
extern const uint32_t BufferPool__cctor_m2501122072_MetadataUsageId;
extern "C"  void BufferPool__cctor_m2501122072 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BufferPool__cctor_m2501122072_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((BufferPool_t710398810_StaticFields*)BufferPool_t710398810_il2cpp_TypeInfo_var->static_fields)->set_pool_0(((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20))));
		return;
	}
}
// ProtoBuf.IExtension ProtoBuf.Extensible::ProtoBuf.IExtensible.GetExtensionObject(System.Boolean)
extern "C"  Il2CppObject * Extensible_ProtoBuf_IExtensible_GetExtensionObject_m861480778 (Extensible_t597730409 * __this, bool ___createIfMissing0, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	{
		bool L_0 = ___createIfMissing0;
		Il2CppObject * L_1 = VirtFuncInvoker1< Il2CppObject *, bool >::Invoke(5 /* ProtoBuf.IExtension ProtoBuf.Extensible::GetExtensionObject(System.Boolean) */, __this, L_0);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Il2CppObject * L_2 = V_0;
		return L_2;
	}
}
// ProtoBuf.IExtension ProtoBuf.Extensible::GetExtensionObject(System.Boolean)
extern "C"  Il2CppObject * Extensible_GetExtensionObject_m2279958903 (Extensible_t597730409 * __this, bool ___createIfMissing0, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	{
		Il2CppObject ** L_0 = __this->get_address_of_extensionObject_0();
		bool L_1 = ___createIfMissing0;
		Il2CppObject * L_2 = Extensible_GetExtensionObject_m873822746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Il2CppObject * L_3 = V_0;
		return L_3;
	}
}
// ProtoBuf.IExtension ProtoBuf.Extensible::GetExtensionObject(ProtoBuf.IExtension&,System.Boolean)
extern Il2CppClass* BufferExtension_t2893926933_il2cpp_TypeInfo_var;
extern const uint32_t Extensible_GetExtensionObject_m873822746_MetadataUsageId;
extern "C"  Il2CppObject * Extensible_GetExtensionObject_m873822746 (Il2CppObject * __this /* static, unused */, Il2CppObject ** ___extensionObject0, bool ___createIfMissing1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Extensible_GetExtensionObject_m873822746_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___createIfMissing1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Il2CppObject ** L_1 = ___extensionObject0;
		G_B3_0 = ((((int32_t)((((Il2CppObject*)(Il2CppObject *)(*((Il2CppObject **)L_1))) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
	}

IL_000f:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Il2CppObject ** L_3 = ___extensionObject0;
		BufferExtension_t2893926933 * L_4 = (BufferExtension_t2893926933 *)il2cpp_codegen_object_new(BufferExtension_t2893926933_il2cpp_TypeInfo_var);
		BufferExtension__ctor_m1102001416(L_4, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_3)) = (Il2CppObject *)L_4;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_3), (Il2CppObject *)L_4);
	}

IL_001d:
	{
		Il2CppObject ** L_5 = ___extensionObject0;
		V_0 = (*((Il2CppObject **)L_5));
		goto IL_0022;
	}

IL_0022:
	{
		Il2CppObject * L_6 = V_0;
		return L_6;
	}
}
// System.Void ProtoBuf.Helpers::DebugWriteLine(System.String)
extern "C"  void Helpers_DebugWriteLine_m1869691518 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message0;
		Debug_WriteLine_m544460363(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.Helpers::DebugAssert(System.Boolean,System.String)
extern "C"  void Helpers_DebugAssert_m3547493310 (Il2CppObject * __this /* static, unused */, bool ___condition0, String_t* ___message1, const MethodInfo* method)
{
	bool V_0 = false;
	{
		bool L_0 = ___condition0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ___message1;
		Debug_Assert_m1466756561(NULL /*static, unused*/, (bool)0, L_2, /*hidden argument*/NULL);
	}

IL_0010:
	{
		return;
	}
}
// System.Void ProtoBuf.Helpers::DebugAssert(System.Boolean)
extern Il2CppClass* Debugger_t4214909883_il2cpp_TypeInfo_var;
extern const uint32_t Helpers_DebugAssert_m763024030_MetadataUsageId;
extern "C"  void Helpers_DebugAssert_m763024030 (Il2CppObject * __this /* static, unused */, bool ___condition0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Helpers_DebugAssert_m763024030_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t4214909883_il2cpp_TypeInfo_var);
		bool L_1 = Debugger_get_IsAttached_m4283985077(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debugger_t4214909883_il2cpp_TypeInfo_var);
		IL2CPP_DEBUG_BREAK();
	}

IL_001a:
	{
		bool L_3 = ___condition0;
		Debug_Assert_m896783707(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.Helpers::BlockCopy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void Helpers_BlockCopy_m2741176895 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___from0, int32_t ___fromIndex1, ByteU5BU5D_t3397334013* ___to2, int32_t ___toIndex3, int32_t ___count4, const MethodInfo* method)
{
	{
		ByteU5BU5D_t3397334013* L_0 = ___from0;
		int32_t L_1 = ___fromIndex1;
		ByteU5BU5D_t3397334013* L_2 = ___to2;
		int32_t L_3 = ___toIndex3;
		int32_t L_4 = ___count4;
		Buffer_BlockCopy_m1586717258(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_0, L_1, (Il2CppArray *)(Il2CppArray *)L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ProtoBuf.Helpers::IsInfinity(System.Single)
extern "C"  bool Helpers_IsInfinity_m517628195 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		float L_0 = ___value0;
		bool L_1 = Single_IsInfinity_m3331110346(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Reflection.MethodInfo ProtoBuf.Helpers::GetInstanceMethod(System.Type,System.String,System.Type[])
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern const uint32_t Helpers_GetInstanceMethod_m2639239390_MetadataUsageId;
extern "C"  MethodInfo_t * Helpers_GetInstanceMethod_m2639239390 (Il2CppObject * __this /* static, unused */, Type_t * ___declaringType0, String_t* ___name1, TypeU5BU5D_t1664964607* ___types2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Helpers_GetInstanceMethod_m2639239390_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	bool V_1 = false;
	{
		TypeU5BU5D_t1664964607* L_0 = ___types2;
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(TypeU5BU5D_t1664964607*)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1664964607* L_2 = ((Helpers_t2267943139_StaticFields*)Helpers_t2267943139_il2cpp_TypeInfo_var->static_fields)->get_EmptyTypes_0();
		___types2 = L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___declaringType0;
		String_t* L_4 = ___name1;
		TypeU5BU5D_t1664964607* L_5 = ___types2;
		NullCheck(L_3);
		MethodInfo_t * L_6 = Type_GetMethod_m1930231379(L_3, L_4, ((int32_t)52), (Binder_t3404612058 *)NULL, L_5, (ParameterModifierU5BU5D_t963192633*)(ParameterModifierU5BU5D_t963192633*)NULL, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean ProtoBuf.Helpers::IsInfinity(System.Double)
extern "C"  bool Helpers_IsInfinity_m1113709690 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		double L_0 = ___value0;
		bool L_1 = Double_IsInfinity_m1190290474(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// ProtoBuf.ProtoTypeCode ProtoBuf.Helpers::GetTypeCode(System.Type)
extern const Il2CppType* TimeSpan_t3430258949_0_0_0_var;
extern const Il2CppType* Guid_t2533601593_0_0_0_var;
extern const Il2CppType* Uri_t19570940_0_0_0_var;
extern const Il2CppType* ByteU5BU5D_t3397334013_0_0_0_var;
extern const Il2CppType* Type_t_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t Helpers_GetTypeCode_m1589684719_MetadataUsageId;
extern "C"  int32_t Helpers_GetTypeCode_m1589684719 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Helpers_GetTypeCode_m1589684719_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_1 = Type_GetTypeCode_m1044483454(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_2 = L_2;
		int32_t L_3 = V_2;
		if (L_3 == 0)
		{
			goto IL_005e;
		}
		if (L_3 == 1)
		{
			goto IL_0065;
		}
		if (L_3 == 2)
		{
			goto IL_0065;
		}
		if (L_3 == 3)
		{
			goto IL_005e;
		}
		if (L_3 == 4)
		{
			goto IL_005e;
		}
		if (L_3 == 5)
		{
			goto IL_005e;
		}
		if (L_3 == 6)
		{
			goto IL_005e;
		}
		if (L_3 == 7)
		{
			goto IL_005e;
		}
		if (L_3 == 8)
		{
			goto IL_005e;
		}
		if (L_3 == 9)
		{
			goto IL_005e;
		}
		if (L_3 == 10)
		{
			goto IL_005e;
		}
		if (L_3 == 11)
		{
			goto IL_005e;
		}
		if (L_3 == 12)
		{
			goto IL_005e;
		}
		if (L_3 == 13)
		{
			goto IL_005e;
		}
		if (L_3 == 14)
		{
			goto IL_005e;
		}
		if (L_3 == 15)
		{
			goto IL_005e;
		}
		if (L_3 == 16)
		{
			goto IL_005e;
		}
		if (L_3 == 17)
		{
			goto IL_0065;
		}
		if (L_3 == 18)
		{
			goto IL_005e;
		}
	}
	{
		goto IL_0065;
	}

IL_005e:
	{
		int32_t L_4 = V_0;
		V_1 = L_4;
		goto IL_00e6;
	}

IL_0065:
	{
		Type_t * L_5 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t3430258949_0_0_0_var), /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(Type_t *)L_5) == ((Il2CppObject*)(Type_t *)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_007e;
		}
	}
	{
		V_1 = ((int32_t)100);
		goto IL_00e6;
	}

IL_007e:
	{
		Type_t * L_8 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Guid_t2533601593_0_0_0_var), /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(Type_t *)L_8) == ((Il2CppObject*)(Type_t *)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_0097;
		}
	}
	{
		V_1 = ((int32_t)102);
		goto IL_00e6;
	}

IL_0097:
	{
		Type_t * L_11 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Uri_t19570940_0_0_0_var), /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(Type_t *)L_11) == ((Il2CppObject*)(Type_t *)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_00b0;
		}
	}
	{
		V_1 = ((int32_t)103);
		goto IL_00e6;
	}

IL_00b0:
	{
		Type_t * L_14 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t3397334013_0_0_0_var), /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(Type_t *)L_14) == ((Il2CppObject*)(Type_t *)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_00c9;
		}
	}
	{
		V_1 = ((int32_t)101);
		goto IL_00e6;
	}

IL_00c9:
	{
		Type_t * L_17 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Type_t_0_0_0_var), /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(Type_t *)L_17) == ((Il2CppObject*)(Type_t *)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_00e2;
		}
	}
	{
		V_1 = ((int32_t)104);
		goto IL_00e6;
	}

IL_00e2:
	{
		V_1 = 1;
		goto IL_00e6;
	}

IL_00e6:
	{
		int32_t L_20 = V_1;
		return L_20;
	}
}
// System.Type ProtoBuf.Helpers::GetUnderlyingType(System.Type)
extern "C"  Type_t * Helpers_GetUnderlyingType_m3443069188 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		Type_t * L_1 = Nullable_GetUnderlyingType_m4057508352(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Type_t * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean ProtoBuf.Helpers::IsEnum(System.Type)
extern "C"  bool Helpers_IsEnum_m3979764206 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsEnum_m313908919(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Reflection.ConstructorInfo ProtoBuf.Helpers::GetConstructor(System.Type,System.Type[],System.Boolean)
extern "C"  ConstructorInfo_t2851816542 * Helpers_GetConstructor_m4003574134 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, TypeU5BU5D_t1664964607* ___parameterTypes1, bool ___nonPublic2, const MethodInfo* method)
{
	ConstructorInfo_t2851816542 * V_0 = NULL;
	Type_t * G_B2_0 = NULL;
	Type_t * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Type_t * G_B3_1 = NULL;
	{
		Type_t * L_0 = ___type0;
		bool L_1 = ___nonPublic2;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = ((int32_t)20);
		G_B3_1 = G_B1_0;
		goto IL_000b;
	}

IL_0009:
	{
		G_B3_0 = ((int32_t)52);
		G_B3_1 = G_B2_0;
	}

IL_000b:
	{
		TypeU5BU5D_t1664964607* L_2 = ___parameterTypes1;
		NullCheck(G_B3_1);
		ConstructorInfo_t2851816542 * L_3 = Type_GetConstructor_m663514781(G_B3_1, G_B3_0, (Binder_t3404612058 *)NULL, L_2, (ParameterModifierU5BU5D_t963192633*)(ParameterModifierU5BU5D_t963192633*)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		ConstructorInfo_t2851816542 * L_4 = V_0;
		return L_4;
	}
}
// System.Void ProtoBuf.Helpers::.cctor()
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern const uint32_t Helpers__cctor_m3355889241_MetadataUsageId;
extern "C"  void Helpers__cctor_m3355889241 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Helpers__cctor_m3355889241_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1664964607* L_0 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->get_EmptyTypes_3();
		((Helpers_t2267943139_StaticFields*)Helpers_t2267943139_il2cpp_TypeInfo_var->static_fields)->set_EmptyTypes_0(L_0);
		return;
	}
}
// System.Void ProtoBuf.Meta.BasicList::CopyTo(System.Array,System.Int32)
extern "C"  void BasicList_CopyTo_m2804699657 (BasicList_t2284403912 * __this, Il2CppArray * ___array0, int32_t ___offset1, const MethodInfo* method)
{
	{
		Node_t76907683 * L_0 = __this->get_head_1();
		Il2CppArray * L_1 = ___array0;
		int32_t L_2 = ___offset1;
		NullCheck(L_0);
		Node_CopyTo_m505089936(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ProtoBuf.Meta.BasicList::Add(System.Object)
extern "C"  int32_t BasicList_Add_m3560539713 (BasicList_t2284403912 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Node_t76907683 * V_1 = NULL;
	{
		Node_t76907683 * L_0 = __this->get_head_1();
		Il2CppObject * L_1 = ___value0;
		NullCheck(L_0);
		Node_t76907683 * L_2 = Node_Append_m2171707825(L_0, L_1, /*hidden argument*/NULL);
		Node_t76907683 * L_3 = L_2;
		V_1 = L_3;
		__this->set_head_1(L_3);
		Node_t76907683 * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = Node_get_Length_m2147497066(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Object ProtoBuf.Meta.BasicList::get_Item(System.Int32)
extern "C"  Il2CppObject * BasicList_get_Item_m3841243466 (BasicList_t2284403912 * __this, int32_t ___index0, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	{
		Node_t76907683 * L_0 = __this->get_head_1();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Il2CppObject * L_2 = Node_get_Item_m3596889835(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Il2CppObject * L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ProtoBuf.Meta.BasicList::get_Count()
extern "C"  int32_t BasicList_get_Count_m2175503842 (BasicList_t2284403912 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Node_t76907683 * L_0 = __this->get_head_1();
		NullCheck(L_0);
		int32_t L_1 = Node_get_Length_m2147497066(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator ProtoBuf.Meta.BasicList::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppClass* NodeEnumerator_t2246148295_il2cpp_TypeInfo_var;
extern const uint32_t BasicList_System_Collections_IEnumerable_GetEnumerator_m3637904049_MetadataUsageId;
extern "C"  Il2CppObject * BasicList_System_Collections_IEnumerable_GetEnumerator_m3637904049 (BasicList_t2284403912 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BasicList_System_Collections_IEnumerable_GetEnumerator_m3637904049_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	{
		Node_t76907683 * L_0 = __this->get_head_1();
		NodeEnumerator_t2246148295  L_1;
		memset(&L_1, 0, sizeof(L_1));
		NodeEnumerator__ctor_m1108820876(&L_1, L_0, /*hidden argument*/NULL);
		NodeEnumerator_t2246148295  L_2 = L_1;
		Il2CppObject * L_3 = Box(NodeEnumerator_t2246148295_il2cpp_TypeInfo_var, &L_2);
		V_0 = (Il2CppObject *)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		Il2CppObject * L_4 = V_0;
		return L_4;
	}
}
// ProtoBuf.Meta.BasicList/NodeEnumerator ProtoBuf.Meta.BasicList::GetEnumerator()
extern "C"  NodeEnumerator_t2246148295  BasicList_GetEnumerator_m2672565182 (BasicList_t2284403912 * __this, const MethodInfo* method)
{
	NodeEnumerator_t2246148295  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Node_t76907683 * L_0 = __this->get_head_1();
		NodeEnumerator_t2246148295  L_1;
		memset(&L_1, 0, sizeof(L_1));
		NodeEnumerator__ctor_m1108820876(&L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		NodeEnumerator_t2246148295  L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ProtoBuf.Meta.BasicList::IndexOfReference(System.Object)
extern "C"  int32_t BasicList_IndexOfReference_m1079522782 (BasicList_t2284403912 * __this, Il2CppObject * ___instance0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Node_t76907683 * L_0 = __this->get_head_1();
		Il2CppObject * L_1 = ___instance0;
		NullCheck(L_0);
		int32_t L_2 = Node_IndexOfReference_m1532277667(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean ProtoBuf.Meta.BasicList::Contains(System.Object)
extern "C"  bool BasicList_Contains_m716322581 (BasicList_t2284403912 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	bool V_1 = false;
	NodeEnumerator_t2246148295  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	{
		NodeEnumerator_t2246148295  L_0 = BasicList_GetEnumerator_m2672565182(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		goto IL_0027;
	}

IL_000b:
	{
		Il2CppObject * L_1 = NodeEnumerator_get_Current_m3609254958((&V_2), /*hidden argument*/NULL);
		V_0 = L_1;
		Il2CppObject * L_2 = V_0;
		Il2CppObject * L_3 = ___value0;
		bool L_4 = Object_Equals_m969736273(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0036;
	}

IL_0026:
	{
	}

IL_0027:
	{
		bool L_6 = NodeEnumerator_MoveNext_m3417523057((&V_2), /*hidden argument*/NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Void ProtoBuf.Meta.BasicList::.ctor()
extern Il2CppClass* BasicList_t2284403912_il2cpp_TypeInfo_var;
extern const uint32_t BasicList__ctor_m2625270794_MetadataUsageId;
extern "C"  void BasicList__ctor_m2625270794 (BasicList_t2284403912 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BasicList__ctor_m2625270794_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BasicList_t2284403912_il2cpp_TypeInfo_var);
		Node_t76907683 * L_0 = ((BasicList_t2284403912_StaticFields*)BasicList_t2284403912_il2cpp_TypeInfo_var->static_fields)->get_nil_0();
		__this->set_head_1(L_0);
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.Meta.BasicList::.cctor()
extern Il2CppClass* Node_t76907683_il2cpp_TypeInfo_var;
extern Il2CppClass* BasicList_t2284403912_il2cpp_TypeInfo_var;
extern const uint32_t BasicList__cctor_m3538342023_MetadataUsageId;
extern "C"  void BasicList__cctor_m3538342023 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BasicList__cctor_m3538342023_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Node_t76907683 * L_0 = (Node_t76907683 *)il2cpp_codegen_object_new(Node_t76907683_il2cpp_TypeInfo_var);
		Node__ctor_m2847360768(L_0, (ObjectU5BU5D_t3614634134*)(ObjectU5BU5D_t3614634134*)NULL, 0, /*hidden argument*/NULL);
		((BasicList_t2284403912_StaticFields*)BasicList_t2284403912_il2cpp_TypeInfo_var->static_fields)->set_nil_0(L_0);
		return;
	}
}
// System.Object ProtoBuf.Meta.BasicList/Node::get_Item(System.Int32)
extern Il2CppClass* ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1460639766;
extern const uint32_t Node_get_Item_m3596889835_MetadataUsageId;
extern "C"  Il2CppObject * Node_get_Item_m3596889835 (Node_t76907683 * __this, int32_t ___index0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Node_get_Item_m3596889835_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->get_length_1();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		ObjectU5BU5D_t3614634134* L_4 = __this->get_data_0();
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		Il2CppObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		goto IL_0030;
	}

IL_0025:
	{
		ArgumentOutOfRangeException_t279959794 * L_8 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_8, _stringLiteral1460639766, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_0030:
	{
		Il2CppObject * L_9 = V_0;
		return L_9;
	}
}
// System.Void ProtoBuf.Meta.BasicList/Node::set_Item(System.Int32,System.Object)
extern Il2CppClass* ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1460639766;
extern const uint32_t Node_set_Item_m4020550262_MetadataUsageId;
extern "C"  void Node_set_Item_m4020550262 (Node_t76907683 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Node_set_Item_m4020550262_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->get_length_1();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		ObjectU5BU5D_t3614634134* L_4 = __this->get_data_0();
		int32_t L_5 = ___index0;
		Il2CppObject * L_6 = ___value1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppObject *)L_6);
		goto IL_0032;
	}

IL_0026:
	{
		ArgumentOutOfRangeException_t279959794 * L_7 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_7, _stringLiteral1460639766, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0032:
	{
		return;
	}
}
// System.Int32 ProtoBuf.Meta.BasicList/Node::get_Length()
extern "C"  int32_t Node_get_Length_m2147497066 (Node_t76907683 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_length_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ProtoBuf.Meta.BasicList/Node::.ctor(System.Object[],System.Int32)
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern const uint32_t Node__ctor_m2847360768_MetadataUsageId;
extern "C"  void Node__ctor_m2847360768 (Node_t76907683 * __this, ObjectU5BU5D_t3614634134* ___data0, int32_t ___length1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Node__ctor_m2847360768_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3614634134* L_0 = ___data0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___length1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}

IL_000e:
	{
		ObjectU5BU5D_t3614634134* L_2 = ___data0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___length1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___length1;
		ObjectU5BU5D_t3614634134* L_5 = ___data0;
		NullCheck(L_5);
		G_B6_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B6_0 = 0;
	}

IL_0021:
	{
		G_B8_0 = G_B6_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B8_0 = 1;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_DebugAssert_m763024030(NULL /*static, unused*/, (bool)G_B8_0, /*hidden argument*/NULL);
		ObjectU5BU5D_t3614634134* L_6 = ___data0;
		__this->set_data_0(L_6);
		int32_t L_7 = ___length1;
		__this->set_length_1(L_7);
		return;
	}
}
// System.Void ProtoBuf.Meta.BasicList/Node::RemoveLastWithMutate()
extern Il2CppClass* InvalidOperationException_t721527559_il2cpp_TypeInfo_var;
extern const uint32_t Node_RemoveLastWithMutate_m4127158557_MetadataUsageId;
extern "C"  void Node_RemoveLastWithMutate_m4127158557 (Node_t76907683 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Node_RemoveLastWithMutate_m4127158557_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_length_1();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t721527559 * L_2 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m102359810(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = __this->get_length_1();
		__this->set_length_1(((int32_t)((int32_t)L_3-(int32_t)1)));
		return;
	}
}
// ProtoBuf.Meta.BasicList/Node ProtoBuf.Meta.BasicList/Node::Append(System.Object)
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Node_t76907683_il2cpp_TypeInfo_var;
extern const uint32_t Node_Append_m2171707825_MetadataUsageId;
extern "C"  Node_t76907683 * Node_Append_m2171707825 (Node_t76907683 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Node_Append_m2171707825_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t3614634134* V_0 = NULL;
	int32_t V_1 = 0;
	Node_t76907683 * V_2 = NULL;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_length_1();
		V_1 = ((int32_t)((int32_t)L_0+(int32_t)1));
		ObjectU5BU5D_t3614634134* L_1 = __this->get_data_0();
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(ObjectU5BU5D_t3614634134*)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10)));
		goto IL_006d;
	}

IL_0026:
	{
		int32_t L_3 = __this->get_length_1();
		ObjectU5BU5D_t3614634134* L_4 = __this->get_data_0();
		NullCheck(L_4);
		V_3 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_4)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_0064;
		}
	}
	{
		ObjectU5BU5D_t3614634134* L_6 = __this->get_data_0();
		NullCheck(L_6);
		V_0 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_6)->max_length))))*(int32_t)2))));
		ObjectU5BU5D_t3614634134* L_7 = __this->get_data_0();
		ObjectU5BU5D_t3614634134* L_8 = V_0;
		int32_t L_9 = __this->get_length_1();
		Array_Copy_m2363740072(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_7, (Il2CppArray *)(Il2CppArray *)L_8, L_9, /*hidden argument*/NULL);
		goto IL_006d;
	}

IL_0064:
	{
		ObjectU5BU5D_t3614634134* L_10 = __this->get_data_0();
		V_0 = L_10;
	}

IL_006d:
	{
		ObjectU5BU5D_t3614634134* L_11 = V_0;
		int32_t L_12 = __this->get_length_1();
		Il2CppObject * L_13 = ___value0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Il2CppObject *)L_13);
		ObjectU5BU5D_t3614634134* L_14 = V_0;
		int32_t L_15 = V_1;
		Node_t76907683 * L_16 = (Node_t76907683 *)il2cpp_codegen_object_new(Node_t76907683_il2cpp_TypeInfo_var);
		Node__ctor_m2847360768(L_16, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_0080;
	}

IL_0080:
	{
		Node_t76907683 * L_17 = V_2;
		return L_17;
	}
}
// System.Int32 ProtoBuf.Meta.BasicList/Node::IndexOfReference(System.Object)
extern "C"  int32_t Node_IndexOfReference_m1532277667 (Node_t76907683 * __this, Il2CppObject * ___instance0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0005:
	{
		Il2CppObject * L_0 = ___instance0;
		ObjectU5BU5D_t3614634134* L_1 = __this->get_data_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		Il2CppObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_0) == ((Il2CppObject*)(Il2CppObject *)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		V_1 = L_6;
		goto IL_0032;
	}

IL_001c:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_length_1();
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		V_1 = (-1);
		goto IL_0032;
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Void ProtoBuf.Meta.BasicList/Node::CopyTo(System.Array,System.Int32)
extern "C"  void Node_CopyTo_m505089936 (Node_t76907683 * __this, Il2CppArray * ___array0, int32_t ___offset1, const MethodInfo* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_length_1();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t3614634134* L_2 = __this->get_data_0();
		Il2CppArray * L_3 = ___array0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = __this->get_length_1();
		Array_Copy_m3808317496(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_2, 0, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void ProtoBuf.Meta.BasicList/Node::Clear()
extern "C"  void Node_Clear_m3354020394 (Node_t76907683 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		ObjectU5BU5D_t3614634134* L_0 = __this->get_data_0();
		V_0 = (bool)((((Il2CppObject*)(ObjectU5BU5D_t3614634134*)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		ObjectU5BU5D_t3614634134* L_2 = __this->get_data_0();
		ObjectU5BU5D_t3614634134* L_3 = __this->get_data_0();
		NullCheck(L_3);
		Array_Clear_m782967417(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_2, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length)))), /*hidden argument*/NULL);
	}

IL_0025:
	{
		__this->set_length_1(0);
		return;
	}
}
// System.Void ProtoBuf.Meta.BasicList/NodeEnumerator::.ctor(ProtoBuf.Meta.BasicList/Node)
extern "C"  void NodeEnumerator__ctor_m1108820876 (NodeEnumerator_t2246148295 * __this, Node_t76907683 * ___node0, const MethodInfo* method)
{
	{
		__this->set_position_0((-1));
		Node_t76907683 * L_0 = ___node0;
		__this->set_node_1(L_0);
		return;
	}
}
extern "C"  void NodeEnumerator__ctor_m1108820876_AdjustorThunk (Il2CppObject * __this, Node_t76907683 * ___node0, const MethodInfo* method)
{
	NodeEnumerator_t2246148295 * _thisAdjusted = reinterpret_cast<NodeEnumerator_t2246148295 *>(__this + 1);
	NodeEnumerator__ctor_m1108820876(_thisAdjusted, ___node0, method);
}
// System.Void ProtoBuf.Meta.BasicList/NodeEnumerator::System.Collections.IEnumerator.Reset()
extern "C"  void NodeEnumerator_System_Collections_IEnumerator_Reset_m584116997 (NodeEnumerator_t2246148295 * __this, const MethodInfo* method)
{
	{
		__this->set_position_0((-1));
		return;
	}
}
extern "C"  void NodeEnumerator_System_Collections_IEnumerator_Reset_m584116997_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	NodeEnumerator_t2246148295 * _thisAdjusted = reinterpret_cast<NodeEnumerator_t2246148295 *>(__this + 1);
	NodeEnumerator_System_Collections_IEnumerator_Reset_m584116997(_thisAdjusted, method);
}
// System.Object ProtoBuf.Meta.BasicList/NodeEnumerator::get_Current()
extern "C"  Il2CppObject * NodeEnumerator_get_Current_m3609254958 (NodeEnumerator_t2246148295 * __this, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	{
		Node_t76907683 * L_0 = __this->get_node_1();
		int32_t L_1 = __this->get_position_0();
		NullCheck(L_0);
		Il2CppObject * L_2 = Node_get_Item_m3596889835(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		Il2CppObject * L_3 = V_0;
		return L_3;
	}
}
extern "C"  Il2CppObject * NodeEnumerator_get_Current_m3609254958_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	NodeEnumerator_t2246148295 * _thisAdjusted = reinterpret_cast<NodeEnumerator_t2246148295 *>(__this + 1);
	return NodeEnumerator_get_Current_m3609254958(_thisAdjusted, method);
}
// System.Boolean ProtoBuf.Meta.BasicList/NodeEnumerator::MoveNext()
extern "C"  bool NodeEnumerator_MoveNext_m3417523057 (NodeEnumerator_t2246148295 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		Node_t76907683 * L_0 = __this->get_node_1();
		NullCheck(L_0);
		int32_t L_1 = Node_get_Length_m2147497066(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_position_0();
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = __this->get_position_0();
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_2 = L_5;
		__this->set_position_0(L_5);
		int32_t L_6 = V_2;
		int32_t L_7 = V_0;
		G_B3_0 = ((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 0;
	}

IL_002d:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
extern "C"  bool NodeEnumerator_MoveNext_m3417523057_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	NodeEnumerator_t2246148295 * _thisAdjusted = reinterpret_cast<NodeEnumerator_t2246148295 *>(__this + 1);
	return NodeEnumerator_MoveNext_m3417523057(_thisAdjusted, method);
}
// Conversion methods for marshalling of: ProtoBuf.Meta.BasicList/NodeEnumerator
extern "C" void NodeEnumerator_t2246148295_marshal_pinvoke(const NodeEnumerator_t2246148295& unmarshaled, NodeEnumerator_t2246148295_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___node_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeEnumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_1Exception);
}
extern "C" void NodeEnumerator_t2246148295_marshal_pinvoke_back(const NodeEnumerator_t2246148295_marshaled_pinvoke& marshaled, NodeEnumerator_t2246148295& unmarshaled)
{
	Il2CppCodeGenException* ___node_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeEnumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_1Exception);
}
// Conversion method for clean up from marshalling of: ProtoBuf.Meta.BasicList/NodeEnumerator
extern "C" void NodeEnumerator_t2246148295_marshal_pinvoke_cleanup(NodeEnumerator_t2246148295_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ProtoBuf.Meta.BasicList/NodeEnumerator
extern "C" void NodeEnumerator_t2246148295_marshal_com(const NodeEnumerator_t2246148295& unmarshaled, NodeEnumerator_t2246148295_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___node_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeEnumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_1Exception);
}
extern "C" void NodeEnumerator_t2246148295_marshal_com_back(const NodeEnumerator_t2246148295_marshaled_com& marshaled, NodeEnumerator_t2246148295& unmarshaled)
{
	Il2CppCodeGenException* ___node_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'node' of type 'NodeEnumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___node_1Exception);
}
// Conversion method for clean up from marshalling of: ProtoBuf.Meta.BasicList/NodeEnumerator
extern "C" void NodeEnumerator_t2246148295_marshal_com_cleanup(NodeEnumerator_t2246148295_marshaled_com& marshaled)
{
}
// System.Object ProtoBuf.Meta.MutableList::get_Item(System.Int32)
extern "C"  Il2CppObject * MutableList_get_Item_m3451580262 (MutableList_t1161363740 * __this, int32_t ___index0, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	{
		Node_t76907683 * L_0 = ((BasicList_t2284403912 *)__this)->get_head_1();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Il2CppObject * L_2 = Node_get_Item_m3596889835(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Il2CppObject * L_3 = V_0;
		return L_3;
	}
}
// System.Void ProtoBuf.Meta.MutableList::set_Item(System.Int32,System.Object)
extern "C"  void MutableList_set_Item_m2517114687 (MutableList_t1161363740 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method)
{
	{
		Node_t76907683 * L_0 = ((BasicList_t2284403912 *)__this)->get_head_1();
		int32_t L_1 = ___index0;
		Il2CppObject * L_2 = ___value1;
		NullCheck(L_0);
		Node_set_Item_m4020550262(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.Meta.MutableList::RemoveLast()
extern "C"  void MutableList_RemoveLast_m3699329708 (MutableList_t1161363740 * __this, const MethodInfo* method)
{
	{
		Node_t76907683 * L_0 = ((BasicList_t2284403912 *)__this)->get_head_1();
		NullCheck(L_0);
		Node_RemoveLastWithMutate_m4127158557(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.Meta.MutableList::Clear()
extern "C"  void MutableList_Clear_m1811999229 (MutableList_t1161363740 * __this, const MethodInfo* method)
{
	{
		Node_t76907683 * L_0 = ((BasicList_t2284403912 *)__this)->get_head_1();
		NullCheck(L_0);
		Node_Clear_m3354020394(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.Meta.MutableList::.ctor()
extern Il2CppClass* BasicList_t2284403912_il2cpp_TypeInfo_var;
extern const uint32_t MutableList__ctor_m2469561734_MetadataUsageId;
extern "C"  void MutableList__ctor_m2469561734 (MutableList_t1161363740 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MutableList__ctor_m2469561734_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BasicList_t2284403912_il2cpp_TypeInfo_var);
		BasicList__ctor_m2625270794(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type ProtoBuf.Meta.TypeModel::MapType(System.Type)
extern "C"  Type_t * TypeModel_MapType_m1376612940 (TypeModel_t653695305 * __this, Type_t * ___type0, const MethodInfo* method)
{
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		Type_t * L_1 = VirtFuncInvoker2< Type_t *, Type_t *, bool >::Invoke(4 /* System.Type ProtoBuf.Meta.TypeModel::MapType(System.Type,System.Boolean) */, __this, L_0, (bool)1);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		return L_2;
	}
}
// System.Type ProtoBuf.Meta.TypeModel::MapType(System.Type,System.Boolean)
extern "C"  Type_t * TypeModel_MapType_m709353863 (TypeModel_t653695305 * __this, Type_t * ___type0, bool ___demand1, const MethodInfo* method)
{
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		Type_t * L_1 = V_0;
		return L_1;
	}
}
// ProtoBuf.WireType ProtoBuf.Meta.TypeModel::GetWireType(ProtoBuf.ProtoTypeCode,ProtoBuf.DataFormat,System.Type&,System.Int32&)
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern const uint32_t TypeModel_GetWireType_m3912993137_MetadataUsageId;
extern "C"  int32_t TypeModel_GetWireType_m3912993137 (TypeModel_t653695305 * __this, int32_t ___code0, int32_t ___format1, Type_t ** ___type2, int32_t* ___modelKey3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_GetWireType_m3912993137_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	{
		int32_t* L_0 = ___modelKey3;
		*((int32_t*)(L_0)) = (int32_t)(-1);
		Type_t ** L_1 = ___type2;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		bool L_2 = Helpers_IsEnum_m3979764206(NULL /*static, unused*/, (*((Type_t **)L_1)), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_4 = ___modelKey3;
		Type_t ** L_5 = ___type2;
		int32_t L_6 = TypeModel_GetKey_m1061342213(__this, L_5, /*hidden argument*/NULL);
		*((int32_t*)(L_4)) = (int32_t)L_6;
		V_0 = 0;
		goto IL_00cb;
	}

IL_0025:
	{
		int32_t L_7 = ___code0;
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 0)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 1)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 2)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 3)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 4)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 5)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 6)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 7)
		{
			goto IL_0096;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 8)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 9)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 10)
		{
			goto IL_00a6;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 11)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 12)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 13)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 14)
		{
			goto IL_00ae;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)3)) == 15)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_9 = V_2;
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)100))) == 0)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)100))) == 1)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)100))) == 2)
		{
			goto IL_00aa;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)((int32_t)100))) == 3)
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_00ae;
	}

IL_008a:
	{
		int32_t L_10 = ___format1;
		if ((((int32_t)L_10) == ((int32_t)3)))
		{
			goto IL_0091;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0092;
	}

IL_0091:
	{
		G_B8_0 = 1;
	}

IL_0092:
	{
		V_0 = G_B8_0;
		goto IL_00cb;
	}

IL_0096:
	{
		int32_t L_11 = ___format1;
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_009d;
		}
	}
	{
		G_B12_0 = 0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B12_0 = 5;
	}

IL_009e:
	{
		V_0 = G_B12_0;
		goto IL_00cb;
	}

IL_00a2:
	{
		V_0 = 1;
		goto IL_00cb;
	}

IL_00a6:
	{
		V_0 = 5;
		goto IL_00cb;
	}

IL_00aa:
	{
		V_0 = 2;
		goto IL_00cb;
	}

IL_00ae:
	{
		int32_t* L_12 = ___modelKey3;
		Type_t ** L_13 = ___type2;
		int32_t L_14 = TypeModel_GetKey_m1061342213(__this, L_13, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		V_3 = L_15;
		*((int32_t*)(L_12)) = (int32_t)L_15;
		int32_t L_16 = V_3;
		V_1 = (bool)((((int32_t)L_16) < ((int32_t)0))? 1 : 0);
		bool L_17 = V_1;
		if (L_17)
		{
			goto IL_00c7;
		}
	}
	{
		V_0 = 2;
		goto IL_00cb;
	}

IL_00c7:
	{
		V_0 = (-1);
		goto IL_00cb;
	}

IL_00cb:
	{
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.Boolean ProtoBuf.Meta.TypeModel::TrySerializeAuxiliaryType(ProtoBuf.ProtoWriter,System.Type,ProtoBuf.DataFormat,System.Int32,System.Object,System.Boolean)
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* Int16_t4041245914_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* Int64_t909078037_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt16_t986882611_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt32_t2149682021_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt64_t2909196914_il2cpp_TypeInfo_var;
extern Il2CppClass* Boolean_t3825574718_il2cpp_TypeInfo_var;
extern Il2CppClass* SByte_t454417549_il2cpp_TypeInfo_var;
extern Il2CppClass* Byte_t3683104436_il2cpp_TypeInfo_var;
extern Il2CppClass* Char_t3454481338_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern Il2CppClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern Il2CppClass* DateTime_t693205669_il2cpp_TypeInfo_var;
extern Il2CppClass* BclHelpers_t3990312086_il2cpp_TypeInfo_var;
extern Il2CppClass* Decimal_t724701077_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppClass* TimeSpan_t3430258949_il2cpp_TypeInfo_var;
extern Il2CppClass* Guid_t2533601593_il2cpp_TypeInfo_var;
extern Il2CppClass* Uri_t19570940_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerable_t2911409499_il2cpp_TypeInfo_var;
extern Il2CppClass* TypeModel_t653695305_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern Il2CppClass* NullReferenceException_t3156209119_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t TypeModel_TrySerializeAuxiliaryType_m1251664969_MetadataUsageId;
extern "C"  bool TypeModel_TrySerializeAuxiliaryType_m1251664969 (TypeModel_t653695305 * __this, ProtoWriter_t2800220307 * ___writer0, Type_t * ___type1, int32_t ___format2, int32_t ___tag3, Il2CppObject * ___value4, bool ___isInsideList5, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_TrySerializeAuxiliaryType_m1251664969_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SubItemToken_t3722101296  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Il2CppObject * V_4 = NULL;
	Il2CppObject * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Il2CppObject * V_10 = NULL;
	Il2CppObject * V_11 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type1;
		V_7 = (bool)((((int32_t)((((Il2CppObject*)(Type_t *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_7;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Il2CppObject * L_2 = ___value4;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m191970594(L_2, /*hidden argument*/NULL);
		___type1 = L_3;
	}

IL_0019:
	{
		Type_t * L_4 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		int32_t L_5 = Helpers_GetTypeCode_m1589684719(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = ___format2;
		int32_t L_8 = TypeModel_GetWireType_m3912993137(__this, L_6, L_7, (&___type1), (&V_1), /*hidden argument*/NULL);
		V_2 = L_8;
		int32_t L_9 = V_1;
		V_7 = (bool)((((int32_t)L_9) < ((int32_t)0))? 1 : 0);
		bool L_10 = V_7;
		if (L_10)
		{
			goto IL_00c9;
		}
	}
	{
		Type_t * L_11 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		bool L_12 = Helpers_IsEnum_m3979764206(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_7;
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_14 = V_1;
		Il2CppObject * L_15 = ___value4;
		ProtoWriter_t2800220307 * L_16 = ___writer0;
		VirtActionInvoker3< int32_t, Il2CppObject *, ProtoWriter_t2800220307 * >::Invoke(6 /* System.Void ProtoBuf.Meta.TypeModel::Serialize(System.Int32,System.Object,ProtoBuf.ProtoWriter) */, __this, L_14, L_15, L_16);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_005e:
	{
		int32_t L_17 = ___tag3;
		int32_t L_18 = V_2;
		ProtoWriter_t2800220307 * L_19 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_2;
		V_8 = L_20;
		int32_t L_21 = V_8;
		if (((int32_t)((int32_t)L_21-(int32_t)(-1))) == 0)
		{
			goto IL_008b;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)(-1))) == 1)
		{
			goto IL_00b6;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)(-1))) == 2)
		{
			goto IL_00b6;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)(-1))) == 3)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_21-(int32_t)(-1))) == 4)
		{
			goto IL_0092;
		}
	}
	{
		goto IL_00b6;
	}

IL_008b:
	{
		ProtoWriter_t2800220307 * L_22 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_23 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23);
	}

IL_0092:
	{
		Il2CppObject * L_24 = ___value4;
		ProtoWriter_t2800220307 * L_25 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		SubItemToken_t3722101296  L_26 = ProtoWriter_StartSubItem_m525685061(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		int32_t L_27 = V_1;
		Il2CppObject * L_28 = ___value4;
		ProtoWriter_t2800220307 * L_29 = ___writer0;
		VirtActionInvoker3< int32_t, Il2CppObject *, ProtoWriter_t2800220307 * >::Invoke(6 /* System.Void ProtoBuf.Meta.TypeModel::Serialize(System.Int32,System.Object,ProtoBuf.ProtoWriter) */, __this, L_27, L_28, L_29);
		SubItemToken_t3722101296  L_30 = V_3;
		ProtoWriter_t2800220307 * L_31 = ___writer0;
		ProtoWriter_EndSubItem_m3237697851(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_00b6:
	{
		int32_t L_32 = V_1;
		Il2CppObject * L_33 = ___value4;
		ProtoWriter_t2800220307 * L_34 = ___writer0;
		VirtActionInvoker3< int32_t, Il2CppObject *, ProtoWriter_t2800220307 * >::Invoke(6 /* System.Void ProtoBuf.Meta.TypeModel::Serialize(System.Int32,System.Object,ProtoBuf.ProtoWriter) */, __this, L_32, L_33, L_34);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_00c9:
	{
		int32_t L_35 = V_2;
		V_7 = (bool)((((int32_t)L_35) == ((int32_t)(-1)))? 1 : 0);
		bool L_36 = V_7;
		if (L_36)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_37 = ___tag3;
		int32_t L_38 = V_2;
		ProtoWriter_t2800220307 * L_39 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, L_37, L_38, L_39, /*hidden argument*/NULL);
	}

IL_00df:
	{
		int32_t L_40 = V_0;
		V_9 = L_40;
		int32_t L_41 = V_9;
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 0)
		{
			goto IL_01ce;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 1)
		{
			goto IL_0210;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 2)
		{
			goto IL_01e4;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 3)
		{
			goto IL_01fa;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 4)
		{
			goto IL_014a;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 5)
		{
			goto IL_018c;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 6)
		{
			goto IL_0160;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 7)
		{
			goto IL_01a2;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 8)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 9)
		{
			goto IL_01b8;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 10)
		{
			goto IL_023c;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 11)
		{
			goto IL_0226;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 12)
		{
			goto IL_0268;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 13)
		{
			goto IL_0252;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 14)
		{
			goto IL_02f1;
		}
		if (((int32_t)((int32_t)L_41-(int32_t)3)) == 15)
		{
			goto IL_027e;
		}
	}
	{
		int32_t L_42 = V_9;
		if (((int32_t)((int32_t)L_42-(int32_t)((int32_t)100))) == 0)
		{
			goto IL_02aa;
		}
		if (((int32_t)((int32_t)L_42-(int32_t)((int32_t)100))) == 1)
		{
			goto IL_0294;
		}
		if (((int32_t)((int32_t)L_42-(int32_t)((int32_t)100))) == 2)
		{
			goto IL_02c0;
		}
		if (((int32_t)((int32_t)L_42-(int32_t)((int32_t)100))) == 3)
		{
			goto IL_02d6;
		}
	}
	{
		goto IL_02f1;
	}

IL_014a:
	{
		Il2CppObject * L_43 = ___value4;
		ProtoWriter_t2800220307 * L_44 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt16_m3038254698(NULL /*static, unused*/, ((*(int16_t*)((int16_t*)UnBox (L_43, Int16_t4041245914_il2cpp_TypeInfo_var)))), L_44, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_0160:
	{
		Il2CppObject * L_45 = ___value4;
		ProtoWriter_t2800220307 * L_46 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt32_m17565190(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox (L_45, Int32_t2071877448_il2cpp_TypeInfo_var)))), L_46, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_0176:
	{
		Il2CppObject * L_47 = ___value4;
		ProtoWriter_t2800220307 * L_48 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt64_m2297047412(NULL /*static, unused*/, ((*(int64_t*)((int64_t*)UnBox (L_47, Int64_t909078037_il2cpp_TypeInfo_var)))), L_48, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_018c:
	{
		Il2CppObject * L_49 = ___value4;
		ProtoWriter_t2800220307 * L_50 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt16_m3925698464(NULL /*static, unused*/, ((*(uint16_t*)((uint16_t*)UnBox (L_49, UInt16_t986882611_il2cpp_TypeInfo_var)))), L_50, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_01a2:
	{
		Il2CppObject * L_51 = ___value4;
		ProtoWriter_t2800220307 * L_52 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt32_m2195237856(NULL /*static, unused*/, ((*(uint32_t*)((uint32_t*)UnBox (L_51, UInt32_t2149682021_il2cpp_TypeInfo_var)))), L_52, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_01b8:
	{
		Il2CppObject * L_53 = ___value4;
		ProtoWriter_t2800220307 * L_54 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt64_m4018111616(NULL /*static, unused*/, ((*(uint64_t*)((uint64_t*)UnBox (L_53, UInt64_t2909196914_il2cpp_TypeInfo_var)))), L_54, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_01ce:
	{
		Il2CppObject * L_55 = ___value4;
		ProtoWriter_t2800220307 * L_56 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteBoolean_m3404534090(NULL /*static, unused*/, ((*(bool*)((bool*)UnBox (L_55, Boolean_t3825574718_il2cpp_TypeInfo_var)))), L_56, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_01e4:
	{
		Il2CppObject * L_57 = ___value4;
		ProtoWriter_t2800220307 * L_58 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteSByte_m2987643684(NULL /*static, unused*/, ((*(int8_t*)((int8_t*)UnBox (L_57, SByte_t454417549_il2cpp_TypeInfo_var)))), L_58, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_01fa:
	{
		Il2CppObject * L_59 = ___value4;
		ProtoWriter_t2800220307 * L_60 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteByte_m2071571808(NULL /*static, unused*/, ((*(uint8_t*)((uint8_t*)UnBox (L_59, Byte_t3683104436_il2cpp_TypeInfo_var)))), L_60, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_0210:
	{
		Il2CppObject * L_61 = ___value4;
		ProtoWriter_t2800220307 * L_62 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt16_m3925698464(NULL /*static, unused*/, ((*(Il2CppChar*)((Il2CppChar*)UnBox (L_61, Char_t3454481338_il2cpp_TypeInfo_var)))), L_62, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_0226:
	{
		Il2CppObject * L_63 = ___value4;
		ProtoWriter_t2800220307 * L_64 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteDouble_m2235324640(NULL /*static, unused*/, ((*(double*)((double*)UnBox (L_63, Double_t4078015681_il2cpp_TypeInfo_var)))), L_64, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_023c:
	{
		Il2CppObject * L_65 = ___value4;
		ProtoWriter_t2800220307 * L_66 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteSingle_m1038482432(NULL /*static, unused*/, ((*(float*)((float*)UnBox (L_65, Single_t2076509932_il2cpp_TypeInfo_var)))), L_66, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_0252:
	{
		Il2CppObject * L_67 = ___value4;
		ProtoWriter_t2800220307 * L_68 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		BclHelpers_WriteDateTime_m2943913385(NULL /*static, unused*/, ((*(DateTime_t693205669 *)((DateTime_t693205669 *)UnBox (L_67, DateTime_t693205669_il2cpp_TypeInfo_var)))), L_68, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_0268:
	{
		Il2CppObject * L_69 = ___value4;
		ProtoWriter_t2800220307 * L_70 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		BclHelpers_WriteDecimal_m3508364249(NULL /*static, unused*/, ((*(Decimal_t724701077 *)((Decimal_t724701077 *)UnBox (L_69, Decimal_t724701077_il2cpp_TypeInfo_var)))), L_70, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_027e:
	{
		Il2CppObject * L_71 = ___value4;
		ProtoWriter_t2800220307 * L_72 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteString_m1753820128(NULL /*static, unused*/, ((String_t*)CastclassSealed(L_71, String_t_il2cpp_TypeInfo_var)), L_72, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_0294:
	{
		Il2CppObject * L_73 = ___value4;
		ProtoWriter_t2800220307 * L_74 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteBytes_m1561538581(NULL /*static, unused*/, ((ByteU5BU5D_t3397334013*)Castclass(L_73, ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var)), L_74, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_02aa:
	{
		Il2CppObject * L_75 = ___value4;
		ProtoWriter_t2800220307 * L_76 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		BclHelpers_WriteTimeSpan_m368752617(NULL /*static, unused*/, ((*(TimeSpan_t3430258949 *)((TimeSpan_t3430258949 *)UnBox (L_75, TimeSpan_t3430258949_il2cpp_TypeInfo_var)))), L_76, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_02c0:
	{
		Il2CppObject * L_77 = ___value4;
		ProtoWriter_t2800220307 * L_78 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		BclHelpers_WriteGuid_m623077993(NULL /*static, unused*/, ((*(Guid_t2533601593 *)((Guid_t2533601593 *)UnBox (L_77, Guid_t2533601593_il2cpp_TypeInfo_var)))), L_78, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_02d6:
	{
		Il2CppObject * L_79 = ___value4;
		NullCheck(((Uri_t19570940 *)CastclassClass(L_79, Uri_t19570940_il2cpp_TypeInfo_var)));
		String_t* L_80 = Uri_get_AbsoluteUri_m656589005(((Uri_t19570940 *)CastclassClass(L_79, Uri_t19570940_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_81 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteString_m1753820128(NULL /*static, unused*/, L_80, L_81, /*hidden argument*/NULL);
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_02f1:
	{
		int32_t L_82 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_DebugAssert_m763024030(NULL /*static, unused*/, (bool)((((int32_t)L_82) == ((int32_t)(-1)))? 1 : 0), /*hidden argument*/NULL);
		Il2CppObject * L_83 = ___value4;
		V_4 = ((Il2CppObject *)IsInst(L_83, IEnumerable_t2911409499_il2cpp_TypeInfo_var));
		Il2CppObject * L_84 = V_4;
		V_7 = (bool)((((Il2CppObject*)(Il2CppObject *)L_84) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_85 = V_7;
		if (L_85)
		{
			goto IL_03a5;
		}
	}
	{
		bool L_86 = ___isInsideList5;
		V_7 = (bool)((((int32_t)L_86) == ((int32_t)0))? 1 : 0);
		bool L_87 = V_7;
		if (L_87)
		{
			goto IL_0324;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_88 = TypeModel_CreateNestedListsNotSupported_m3196710079(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_88);
	}

IL_0324:
	{
		Il2CppObject * L_89 = V_4;
		NullCheck(L_89);
		Il2CppObject * L_90 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t2911409499_il2cpp_TypeInfo_var, L_89);
		V_10 = L_90;
	}

IL_032e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0373;
		}

IL_0330:
		{
			Il2CppObject * L_91 = V_10;
			NullCheck(L_91);
			Il2CppObject * L_92 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_91);
			V_5 = L_92;
			Il2CppObject * L_93 = V_5;
			V_7 = (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_93) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_94 = V_7;
			if (L_94)
			{
				goto IL_034f;
			}
		}

IL_0348:
		{
			NullReferenceException_t3156209119 * L_95 = (NullReferenceException_t3156209119 *)il2cpp_codegen_object_new(NullReferenceException_t3156209119_il2cpp_TypeInfo_var);
			NullReferenceException__ctor_m2202599572(L_95, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_95);
		}

IL_034f:
		{
			ProtoWriter_t2800220307 * L_96 = ___writer0;
			int32_t L_97 = ___format2;
			int32_t L_98 = ___tag3;
			Il2CppObject * L_99 = V_5;
			bool L_100 = TypeModel_TrySerializeAuxiliaryType_m1251664969(__this, L_96, (Type_t *)NULL, L_97, L_98, L_99, (bool)1, /*hidden argument*/NULL);
			V_7 = L_100;
			bool L_101 = V_7;
			if (L_101)
			{
				goto IL_0372;
			}
		}

IL_0363:
		{
			Il2CppObject * L_102 = V_5;
			NullCheck(L_102);
			Type_t * L_103 = Object_GetType_m191970594(L_102, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
			TypeModel_ThrowUnexpectedType_m1777965871(NULL /*static, unused*/, L_103, /*hidden argument*/NULL);
		}

IL_0372:
		{
		}

IL_0373:
		{
			Il2CppObject * L_104 = V_10;
			NullCheck(L_104);
			bool L_105 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_104);
			V_7 = L_105;
			bool L_106 = V_7;
			if (L_106)
			{
				goto IL_0330;
			}
		}

IL_0380:
		{
			IL2CPP_LEAVE(0x39F, FINALLY_0382);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0382;
	}

FINALLY_0382:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_107 = V_10;
			V_11 = ((Il2CppObject *)IsInst(L_107, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			Il2CppObject * L_108 = V_11;
			V_7 = (bool)((((Il2CppObject*)(Il2CppObject *)L_108) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_109 = V_7;
			if (L_109)
			{
				goto IL_039e;
			}
		}

IL_0396:
		{
			Il2CppObject * L_110 = V_11;
			NullCheck(L_110);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_110);
		}

IL_039e:
		{
			IL2CPP_END_FINALLY(898)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(898)
	{
		IL2CPP_JUMP_TBL(0x39F, IL_039f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_039f:
	{
		V_6 = (bool)1;
		goto IL_03aa;
	}

IL_03a5:
	{
		V_6 = (bool)0;
		goto IL_03aa;
	}

IL_03aa:
	{
		bool L_111 = V_6;
		return L_111;
	}
}
// System.Void ProtoBuf.Meta.TypeModel::SerializeCore(ProtoBuf.ProtoWriter,System.Object)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* TypeModel_t653695305_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1803325615;
extern const uint32_t TypeModel_SerializeCore_m1935720492_MetadataUsageId;
extern "C"  void TypeModel_SerializeCore_m1935720492 (TypeModel_t653695305 * __this, ProtoWriter_t2800220307 * ___writer0, Il2CppObject * ___value1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_SerializeCore_m1935720492_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Il2CppObject * L_0 = ___value1;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral1803325615, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		Il2CppObject * L_3 = ___value1;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m191970594(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = TypeModel_GetKey_m1061342213(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_8 = V_1;
		Il2CppObject * L_9 = ___value1;
		ProtoWriter_t2800220307 * L_10 = ___writer0;
		VirtActionInvoker3< int32_t, Il2CppObject *, ProtoWriter_t2800220307 * >::Invoke(6 /* System.Void ProtoBuf.Meta.TypeModel::Serialize(System.Int32,System.Object,ProtoBuf.ProtoWriter) */, __this, L_8, L_9, L_10);
		goto IL_0056;
	}

IL_003d:
	{
		ProtoWriter_t2800220307 * L_11 = ___writer0;
		Type_t * L_12 = V_0;
		Il2CppObject * L_13 = ___value1;
		bool L_14 = TypeModel_TrySerializeAuxiliaryType_m1251664969(__this, L_11, L_12, 0, 1, L_13, (bool)0, /*hidden argument*/NULL);
		V_2 = L_14;
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		Type_t * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		TypeModel_ThrowUnexpectedType_m1777965871(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void ProtoBuf.Meta.TypeModel::Serialize(System.IO.Stream,System.Object)
extern "C"  void TypeModel_Serialize_m806129384 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___dest0, Il2CppObject * ___value1, const MethodInfo* method)
{
	{
		Stream_t3255436806 * L_0 = ___dest0;
		Il2CppObject * L_1 = ___value1;
		TypeModel_Serialize_m12556952(__this, L_0, L_1, (SerializationContext_t3878296411 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.Meta.TypeModel::Serialize(System.IO.Stream,System.Object,ProtoBuf.SerializationContext)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t TypeModel_Serialize_m12556952_MetadataUsageId;
extern "C"  void TypeModel_Serialize_m12556952 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___dest0, Il2CppObject * ___value1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_Serialize_m12556952_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ProtoWriter_t2800220307 * V_0 = NULL;
	bool V_1 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t3255436806 * L_0 = ___dest0;
		SerializationContext_t3878296411 * L_1 = ___context2;
		ProtoWriter_t2800220307 * L_2 = (ProtoWriter_t2800220307 *)il2cpp_codegen_object_new(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter__ctor_m1912157606(L_2, L_0, __this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		ProtoWriter_t2800220307 * L_3 = V_0;
		Il2CppObject * L_4 = ___value1;
		NullCheck(L_3);
		ProtoWriter_SetRootObject_m3939688437(L_3, L_4, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_5 = V_0;
		Il2CppObject * L_6 = ___value1;
		TypeModel_SerializeCore_m1935720492(__this, L_5, L_6, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_7 = V_0;
		NullCheck(L_7);
		ProtoWriter_Close_m1410314238(L_7, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x36, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			ProtoWriter_t2800220307 * L_8 = V_0;
			V_1 = (bool)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_8) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_9 = V_1;
			if (L_9)
			{
				goto IL_0035;
			}
		}

IL_002e:
		{
			ProtoWriter_t2800220307 * L_10 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_10);
		}

IL_0035:
		{
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x36, IL_0036)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0036:
	{
		return;
	}
}
// System.Object ProtoBuf.Meta.TypeModel::Deserialize(System.IO.Stream,System.Object,System.Type)
extern "C"  Il2CppObject * TypeModel_Deserialize_m1350569455 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	{
		Stream_t3255436806 * L_0 = ___source0;
		Il2CppObject * L_1 = ___value1;
		Type_t * L_2 = ___type2;
		Il2CppObject * L_3 = TypeModel_Deserialize_m174549739(__this, L_0, L_1, L_2, (SerializationContext_t3878296411 *)NULL, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		Il2CppObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object ProtoBuf.Meta.TypeModel::Deserialize(System.IO.Stream,System.Object,System.Type,ProtoBuf.SerializationContext)
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t TypeModel_Deserialize_m174549739_MetadataUsageId;
extern "C"  Il2CppObject * TypeModel_Deserialize_m174549739 (TypeModel_t653695305 * __this, Stream_t3255436806 * ___source0, Il2CppObject * ___value1, Type_t * ___type2, SerializationContext_t3878296411 * ___context3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_Deserialize_m174549739_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	ProtoReader_t3981212867 * V_1 = NULL;
	Il2CppObject * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	bool V_4 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Il2CppObject * L_0 = ___value1;
		bool L_1 = TypeModel_PrepareDeserialize_m189880784(__this, L_0, (&___type2), /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (ProtoReader_t3981212867 *)NULL;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Stream_t3255436806 * L_2 = ___source0;
			SerializationContext_t3878296411 * L_3 = ___context3;
			IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
			ProtoReader_t3981212867 * L_4 = ProtoReader_Create_m3545400384(NULL /*static, unused*/, L_2, __this, L_3, (-1), /*hidden argument*/NULL);
			V_1 = L_4;
			Il2CppObject * L_5 = ___value1;
			V_4 = (bool)((((Il2CppObject*)(Il2CppObject *)L_5) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
			bool L_6 = V_4;
			if (L_6)
			{
				goto IL_002b;
			}
		}

IL_0023:
		{
			ProtoReader_t3981212867 * L_7 = V_1;
			Il2CppObject * L_8 = ___value1;
			NullCheck(L_7);
			ProtoReader_SetRootObject_m1427290071(L_7, L_8, /*hidden argument*/NULL);
		}

IL_002b:
		{
			ProtoReader_t3981212867 * L_9 = V_1;
			Type_t * L_10 = ___type2;
			Il2CppObject * L_11 = ___value1;
			bool L_12 = V_0;
			Il2CppObject * L_13 = TypeModel_DeserializeCore_m1231219952(__this, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			ProtoReader_t3981212867 * L_14 = V_1;
			NullCheck(L_14);
			ProtoReader_CheckFullyConsumed_m2201161182(L_14, /*hidden argument*/NULL);
			Il2CppObject * L_15 = V_2;
			V_3 = L_15;
			IL2CPP_LEAVE(0x4B, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		ProtoReader_t3981212867 * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_Recycle_m806072605(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_004b:
	{
		Il2CppObject * L_17 = V_3;
		return L_17;
	}
}
// System.Boolean ProtoBuf.Meta.TypeModel::PrepareDeserialize(System.Object,System.Type&)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1421151742;
extern const uint32_t TypeModel_PrepareDeserialize_m189880784_MetadataUsageId;
extern "C"  bool TypeModel_PrepareDeserialize_m189880784 (TypeModel_t653695305 * __this, Il2CppObject * ___value0, Type_t ** ___type1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_PrepareDeserialize_m189880784_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Type_t * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		Type_t ** L_0 = ___type1;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(Type_t *)(*((Type_t **)L_0))) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		Il2CppObject * L_2 = ___value0;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_2) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t628810857 * L_4 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_4, _stringLiteral1421151742, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0025:
	{
		Type_t ** L_5 = ___type1;
		Il2CppObject * L_6 = ___value0;
		NullCheck(L_6);
		Type_t * L_7 = Object_GetType_m191970594(L_6, /*hidden argument*/NULL);
		Type_t * L_8 = TypeModel_MapType_m1376612940(__this, L_7, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_5)) = (Il2CppObject *)L_8;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_5), (Il2CppObject *)L_8);
	}

IL_0036:
	{
		V_0 = (bool)1;
		Type_t ** L_9 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Type_t * L_10 = Helpers_GetUnderlyingType_m3443069188(NULL /*static, unused*/, (*((Type_t **)L_9)), /*hidden argument*/NULL);
		V_1 = L_10;
		Type_t * L_11 = V_1;
		V_3 = (bool)((((Il2CppObject*)(Type_t *)L_11) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_004f;
		}
	}
	{
		Type_t ** L_13 = ___type1;
		Type_t * L_14 = V_1;
		*((Il2CppObject **)(L_13)) = (Il2CppObject *)L_14;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_13), (Il2CppObject *)L_14);
		V_0 = (bool)0;
	}

IL_004f:
	{
		bool L_15 = V_0;
		V_2 = L_15;
		goto IL_0053;
	}

IL_0053:
	{
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Object ProtoBuf.Meta.TypeModel::DeserializeCore(ProtoBuf.ProtoReader,System.Type,System.Object,System.Boolean)
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern const uint32_t TypeModel_DeserializeCore_m1231219952_MetadataUsageId;
extern "C"  Il2CppObject * TypeModel_DeserializeCore_m1231219952 (TypeModel_t653695305 * __this, ProtoReader_t3981212867 * ___reader0, Type_t * ___type1, Il2CppObject * ___value2, bool ___noAutoCreate3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_DeserializeCore_m1231219952_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Il2CppObject * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = TypeModel_GetKey_m1061342213(__this, (&___type1), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		bool L_3 = Helpers_IsEnum_m3979764206(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = V_0;
		Il2CppObject * L_6 = ___value2;
		ProtoReader_t3981212867 * L_7 = ___reader0;
		Il2CppObject * L_8 = VirtFuncInvoker3< Il2CppObject *, int32_t, Il2CppObject *, ProtoReader_t3981212867 * >::Invoke(7 /* System.Object ProtoBuf.Meta.TypeModel::Deserialize(System.Int32,System.Object,ProtoBuf.ProtoReader) */, __this, L_5, L_6, L_7);
		V_1 = L_8;
		goto IL_003f;
	}

IL_0029:
	{
		ProtoReader_t3981212867 * L_9 = ___reader0;
		Type_t * L_10 = ___type1;
		bool L_11 = ___noAutoCreate3;
		TypeModel_TryDeserializeAuxiliaryType_m1775273591(__this, L_9, 0, 1, L_10, (&___value2), (bool)1, (bool)0, L_11, (bool)0, /*hidden argument*/NULL);
		Il2CppObject * L_12 = ___value2;
		V_1 = L_12;
		goto IL_003f;
	}

IL_003f:
	{
		Il2CppObject * L_13 = V_1;
		return L_13;
	}
}
// System.Reflection.MethodInfo ProtoBuf.Meta.TypeModel::ResolveListAdd(ProtoBuf.Meta.TypeModel,System.Type,System.Type,System.Boolean&)
extern const Il2CppType* IEnumerable_1_t4048664256_0_0_0_var;
extern const Il2CppType* ICollection_1_t1552160836_0_0_0_var;
extern const Il2CppType* Il2CppObject_0_0_0_var;
extern Il2CppClass* TypeModel_t653695305_il2cpp_TypeInfo_var;
extern Il2CppClass* TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral292745765;
extern Il2CppCodeGenString* _stringLiteral1270932124;
extern Il2CppCodeGenString* _stringLiteral998228377;
extern Il2CppCodeGenString* _stringLiteral3981100262;
extern const uint32_t TypeModel_ResolveListAdd_m3738663196_MetadataUsageId;
extern "C"  MethodInfo_t * TypeModel_ResolveListAdd_m3738663196 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___listType1, Type_t * ___itemType2, bool* ___isList3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_ResolveListAdd_m3738663196_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t1664964607* V_1 = NULL;
	MethodInfo_t * V_2 = NULL;
	bool V_3 = false;
	Type_t * V_4 = NULL;
	Type_t * V_5 = NULL;
	MethodInfo_t * V_6 = NULL;
	TypeU5BU5D_t1664964607* V_7 = NULL;
	bool V_8 = false;
	TypeU5BU5D_t1664964607* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B28_0 = 0;
	{
		Type_t * L_0 = ___listType1;
		V_0 = L_0;
		bool* L_1 = ___isList3;
		TypeModel_t653695305 * L_2 = ___model0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		Type_t * L_3 = ((TypeModel_t653695305_StaticFields*)TypeModel_t653695305_il2cpp_TypeInfo_var->static_fields)->get_ilist_0();
		NullCheck(L_2);
		Type_t * L_4 = TypeModel_MapType_m1376612940(L_2, L_3, /*hidden argument*/NULL);
		Type_t * L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_4, L_5);
		*((int8_t*)(L_1)) = (int8_t)L_6;
		V_7 = ((TypeU5BU5D_t1664964607*)SZArrayNew(TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var, (uint32_t)1));
		TypeU5BU5D_t1664964607* L_7 = V_7;
		Type_t * L_8 = ___itemType2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_8);
		TypeU5BU5D_t1664964607* L_9 = V_7;
		V_1 = L_9;
		Type_t * L_10 = V_0;
		TypeU5BU5D_t1664964607* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		MethodInfo_t * L_12 = Helpers_GetInstanceMethod_m2639239390(NULL /*static, unused*/, L_10, _stringLiteral292745765, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		MethodInfo_t * L_13 = V_2;
		V_8 = (bool)((((int32_t)((((Il2CppObject*)(MethodInfo_t *)L_13) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_8;
		if (L_14)
		{
			goto IL_00a8;
		}
	}
	{
		Type_t * L_15 = V_0;
		NullCheck(L_15);
		bool L_16 = Type_get_IsInterface_m3583817465(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0064;
		}
	}
	{
		Type_t * L_17 = V_0;
		TypeModel_t653695305 * L_18 = ___model0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(IEnumerable_1_t4048664256_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		Type_t * L_20 = TypeModel_MapType_m1376612940(L_18, L_19, /*hidden argument*/NULL);
		TypeU5BU5D_t1664964607* L_21 = V_1;
		NullCheck(L_20);
		Type_t * L_22 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1664964607* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_20, L_21);
		G_B4_0 = ((((Il2CppObject*)(Type_t *)L_17) == ((Il2CppObject*)(Type_t *)L_22))? 1 : 0);
		goto IL_0065;
	}

IL_0064:
	{
		G_B4_0 = 0;
	}

IL_0065:
	{
		V_3 = (bool)G_B4_0;
		TypeModel_t653695305 * L_23 = ___model0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_24 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(ICollection_1_t1552160836_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_23);
		Type_t * L_25 = TypeModel_MapType_m1376612940(L_23, L_24, /*hidden argument*/NULL);
		TypeU5BU5D_t1664964607* L_26 = V_1;
		NullCheck(L_25);
		Type_t * L_27 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1664964607* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_25, L_26);
		V_4 = L_27;
		bool L_28 = V_3;
		if (L_28)
		{
			goto IL_008f;
		}
	}
	{
		Type_t * L_29 = V_4;
		Type_t * L_30 = V_0;
		NullCheck(L_29);
		bool L_31 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_29, L_30);
		G_B7_0 = ((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		goto IL_0090;
	}

IL_008f:
	{
		G_B7_0 = 0;
	}

IL_0090:
	{
		V_8 = (bool)G_B7_0;
		bool L_32 = V_8;
		if (L_32)
		{
			goto IL_00a7;
		}
	}
	{
		Type_t * L_33 = V_4;
		TypeU5BU5D_t1664964607* L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		MethodInfo_t * L_35 = Helpers_GetInstanceMethod_m2639239390(NULL /*static, unused*/, L_33, _stringLiteral292745765, L_34, /*hidden argument*/NULL);
		V_2 = L_35;
	}

IL_00a7:
	{
	}

IL_00a8:
	{
		MethodInfo_t * L_36 = V_2;
		V_8 = (bool)((((int32_t)((((Il2CppObject*)(MethodInfo_t *)L_36) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_8;
		if (L_37)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_38 = V_0;
		NullCheck(L_38);
		TypeU5BU5D_t1664964607* L_39 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_38);
		V_9 = L_39;
		V_10 = 0;
		goto IL_0131;
	}

IL_00c7:
	{
		TypeU5BU5D_t1664964607* L_40 = V_9;
		int32_t L_41 = V_10;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = L_41;
		Type_t * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_5 = L_43;
		Type_t * L_44 = V_5;
		NullCheck(L_44);
		String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_44);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_46 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_45, _stringLiteral1270932124, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0106;
		}
	}
	{
		Type_t * L_47 = V_5;
		NullCheck(L_47);
		bool L_48 = VirtFuncInvoker0< bool >::Invoke(83 /* System.Boolean System.Type::get_IsGenericType() */, L_47);
		if (!L_48)
		{
			goto IL_0106;
		}
	}
	{
		Type_t * L_49 = V_5;
		NullCheck(L_49);
		Type_t * L_50 = VirtFuncInvoker0< Type_t * >::Invoke(82 /* System.Type System.Type::GetGenericTypeDefinition() */, L_49);
		NullCheck(L_50);
		String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_50);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_52 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_51, _stringLiteral998228377, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)L_52) == ((int32_t)0))? 1 : 0);
		goto IL_0107;
	}

IL_0106:
	{
		G_B16_0 = 1;
	}

IL_0107:
	{
		V_8 = (bool)G_B16_0;
		bool L_53 = V_8;
		if (L_53)
		{
			goto IL_012a;
		}
	}
	{
		Type_t * L_54 = V_5;
		TypeU5BU5D_t1664964607* L_55 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		MethodInfo_t * L_56 = Helpers_GetInstanceMethod_m2639239390(NULL /*static, unused*/, L_54, _stringLiteral3981100262, L_55, /*hidden argument*/NULL);
		V_2 = L_56;
		MethodInfo_t * L_57 = V_2;
		V_8 = (bool)((((Il2CppObject*)(MethodInfo_t *)L_57) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_58 = V_8;
		if (L_58)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_013f;
	}

IL_0129:
	{
	}

IL_012a:
	{
		int32_t L_59 = V_10;
		V_10 = ((int32_t)((int32_t)L_59+(int32_t)1));
	}

IL_0131:
	{
		int32_t L_60 = V_10;
		TypeU5BU5D_t1664964607* L_61 = V_9;
		NullCheck(L_61);
		V_8 = (bool)((((int32_t)L_60) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_61)->max_length))))))? 1 : 0);
		bool L_62 = V_8;
		if (L_62)
		{
			goto IL_00c7;
		}
	}

IL_013f:
	{
	}

IL_0140:
	{
		MethodInfo_t * L_63 = V_2;
		V_8 = (bool)((((int32_t)((((Il2CppObject*)(MethodInfo_t *)L_63) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_64 = V_8;
		if (L_64)
		{
			goto IL_016f;
		}
	}
	{
		TypeU5BU5D_t1664964607* L_65 = V_1;
		TypeModel_t653695305 * L_66 = ___model0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_67 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Il2CppObject_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_66);
		Type_t * L_68 = TypeModel_MapType_m1376612940(L_66, L_67, /*hidden argument*/NULL);
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 0);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_68);
		Type_t * L_69 = V_0;
		TypeU5BU5D_t1664964607* L_70 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		MethodInfo_t * L_71 = Helpers_GetInstanceMethod_m2639239390(NULL /*static, unused*/, L_69, _stringLiteral292745765, L_70, /*hidden argument*/NULL);
		V_2 = L_71;
	}

IL_016f:
	{
		MethodInfo_t * L_72 = V_2;
		if (L_72)
		{
			goto IL_0179;
		}
	}
	{
		bool* L_73 = ___isList3;
		G_B28_0 = ((((int32_t)(*((int8_t*)L_73))) == ((int32_t)0))? 1 : 0);
		goto IL_017a;
	}

IL_0179:
	{
		G_B28_0 = 1;
	}

IL_017a:
	{
		V_8 = (bool)G_B28_0;
		bool L_74 = V_8;
		if (L_74)
		{
			goto IL_019a;
		}
	}
	{
		TypeModel_t653695305 * L_75 = ___model0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		Type_t * L_76 = ((TypeModel_t653695305_StaticFields*)TypeModel_t653695305_il2cpp_TypeInfo_var->static_fields)->get_ilist_0();
		NullCheck(L_75);
		Type_t * L_77 = TypeModel_MapType_m1376612940(L_75, L_76, /*hidden argument*/NULL);
		TypeU5BU5D_t1664964607* L_78 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		MethodInfo_t * L_79 = Helpers_GetInstanceMethod_m2639239390(NULL /*static, unused*/, L_77, _stringLiteral292745765, L_78, /*hidden argument*/NULL);
		V_2 = L_79;
	}

IL_019a:
	{
		MethodInfo_t * L_80 = V_2;
		V_6 = L_80;
		goto IL_019f;
	}

IL_019f:
	{
		MethodInfo_t * L_81 = V_6;
		return L_81;
	}
}
// System.Type ProtoBuf.Meta.TypeModel::GetListItemType(ProtoBuf.Meta.TypeModel,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* IEnumerable_t2911409499_0_0_0_var;
extern const Il2CppType* Int32_t2071877448_0_0_0_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* BasicList_t2284403912_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* TypeModel_t653695305_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral292745765;
extern Il2CppCodeGenString* _stringLiteral271030637;
extern Il2CppCodeGenString* _stringLiteral580213366;
extern Il2CppCodeGenString* _stringLiteral3168546709;
extern const uint32_t TypeModel_GetListItemType_m2520936192_MetadataUsageId;
extern "C"  Type_t * TypeModel_GetListItemType_m2520936192 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___listType1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_GetListItemType_m2520936192_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	BasicList_t2284403912 * V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	ParameterInfoU5BU5D_t2275869610* V_2 = NULL;
	Type_t * V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	Type_t * V_6 = NULL;
	PropertyInfo_t * V_7 = NULL;
	ParameterInfoU5BU5D_t2275869610* V_8 = NULL;
	Type_t * V_9 = NULL;
	bool V_10 = false;
	MethodInfoU5BU5D_t152480188* V_11 = NULL;
	int32_t V_12 = 0;
	TypeU5BU5D_t1664964607* V_13 = NULL;
	PropertyInfoU5BU5D_t1736152084* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B40_0 = 0;
	{
		Type_t * L_0 = ___listType1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_DebugAssert_m763024030(NULL /*static, unused*/, (bool)((((int32_t)((((Il2CppObject*)(Type_t *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		Type_t * L_1 = ___listType1;
		TypeModel_t653695305 * L_2 = ___model0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		Type_t * L_4 = TypeModel_MapType_m1376612940(L_2, L_3, /*hidden argument*/NULL);
		if ((((Il2CppObject*)(Type_t *)L_1) == ((Il2CppObject*)(Type_t *)L_4)))
		{
			goto IL_0041;
		}
	}
	{
		Type_t * L_5 = ___listType1;
		NullCheck(L_5);
		bool L_6 = Type_get_IsArray_m811277129(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		TypeModel_t653695305 * L_7 = ___model0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(IEnumerable_t2911409499_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		Type_t * L_9 = TypeModel_MapType_m1376612940(L_7, L_8, /*hidden argument*/NULL);
		Type_t * L_10 = ___listType1;
		NullCheck(L_9);
		bool L_11 = VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_9, L_10);
		G_B4_0 = ((int32_t)(L_11));
		goto IL_0042;
	}

IL_0041:
	{
		G_B4_0 = 0;
	}

IL_0042:
	{
		V_10 = (bool)G_B4_0;
		bool L_12 = V_10;
		if (L_12)
		{
			goto IL_0051;
		}
	}
	{
		V_9 = (Type_t *)NULL;
		goto IL_02ac;
	}

IL_0051:
	{
		BasicList_t2284403912 * L_13 = (BasicList_t2284403912 *)il2cpp_codegen_object_new(BasicList_t2284403912_il2cpp_TypeInfo_var);
		BasicList__ctor_m2625270794(L_13, /*hidden argument*/NULL);
		V_0 = L_13;
		Type_t * L_14 = ___listType1;
		NullCheck(L_14);
		MethodInfoU5BU5D_t152480188* L_15 = Type_GetMethods_m2648147339(L_14, /*hidden argument*/NULL);
		V_11 = L_15;
		V_12 = 0;
		goto IL_00cb;
	}

IL_0065:
	{
		MethodInfoU5BU5D_t152480188* L_16 = V_11;
		int32_t L_17 = V_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		MethodInfo_t * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_1 = L_19;
		MethodInfo_t * L_20 = V_1;
		NullCheck(L_20);
		bool L_21 = MethodBase_get_IsStatic_m1015686807(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0089;
		}
	}
	{
		MethodInfo_t * L_22 = V_1;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_23, _stringLiteral292745765, /*hidden argument*/NULL);
		G_B10_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008a;
	}

IL_0089:
	{
		G_B10_0 = 0;
	}

IL_008a:
	{
		V_10 = (bool)G_B10_0;
		bool L_25 = V_10;
		if (L_25)
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00c5;
	}

IL_0093:
	{
		MethodInfo_t * L_26 = V_1;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t2275869610* L_27 = VirtFuncInvoker0< ParameterInfoU5BU5D_t2275869610* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_2 = L_27;
		ParameterInfoU5BU5D_t2275869610* L_28 = V_2;
		NullCheck(L_28);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_28)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_00b2;
		}
	}
	{
		BasicList_t2284403912 * L_29 = V_0;
		ParameterInfoU5BU5D_t2275869610* L_30 = V_2;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 0);
		int32_t L_31 = 0;
		ParameterInfo_t2249040075 * L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		Type_t * L_33 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_32);
		Type_t * L_34 = L_33;
		V_3 = L_34;
		NullCheck(L_29);
		bool L_35 = BasicList_Contains_m716322581(L_29, L_34, /*hidden argument*/NULL);
		G_B15_0 = ((int32_t)(L_35));
		goto IL_00b3;
	}

IL_00b2:
	{
		G_B15_0 = 1;
	}

IL_00b3:
	{
		V_10 = (bool)G_B15_0;
		bool L_36 = V_10;
		if (L_36)
		{
			goto IL_00c4;
		}
	}
	{
		BasicList_t2284403912 * L_37 = V_0;
		Type_t * L_38 = V_3;
		NullCheck(L_37);
		BasicList_Add_m3560539713(L_37, L_38, /*hidden argument*/NULL);
	}

IL_00c4:
	{
	}

IL_00c5:
	{
		int32_t L_39 = V_12;
		V_12 = ((int32_t)((int32_t)L_39+(int32_t)1));
	}

IL_00cb:
	{
		int32_t L_40 = V_12;
		MethodInfoU5BU5D_t152480188* L_41 = V_11;
		NullCheck(L_41);
		V_10 = (bool)((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_41)->max_length))))))? 1 : 0);
		bool L_42 = V_10;
		if (L_42)
		{
			goto IL_0065;
		}
	}
	{
		Type_t * L_43 = ___listType1;
		NullCheck(L_43);
		String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		V_4 = L_44;
		String_t* L_45 = V_4;
		if (!L_45)
		{
			goto IL_010c;
		}
	}
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m4251815737(L_46, _stringLiteral271030637, /*hidden argument*/NULL);
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_0108;
		}
	}
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m4251815737(L_48, _stringLiteral580213366, /*hidden argument*/NULL);
		G_B24_0 = ((((int32_t)((((int32_t)L_49) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0109;
	}

IL_0108:
	{
		G_B24_0 = 1;
	}

IL_0109:
	{
		G_B26_0 = G_B24_0;
		goto IL_010d;
	}

IL_010c:
	{
		G_B26_0 = 0;
	}

IL_010d:
	{
		V_5 = (bool)G_B26_0;
		bool L_50 = V_5;
		V_10 = L_50;
		bool L_51 = V_10;
		if (L_51)
		{
			goto IL_0158;
		}
	}
	{
		TypeModel_t653695305 * L_52 = ___model0;
		BasicList_t2284403912 * L_53 = V_0;
		Type_t * L_54 = ___listType1;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		TypeModel_TestEnumerableListPatterns_m3332789798(NULL /*static, unused*/, L_52, L_53, L_54, /*hidden argument*/NULL);
		Type_t * L_55 = ___listType1;
		NullCheck(L_55);
		TypeU5BU5D_t1664964607* L_56 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_55);
		V_13 = L_56;
		V_12 = 0;
		goto IL_0149;
	}

IL_0130:
	{
		TypeU5BU5D_t1664964607* L_57 = V_13;
		int32_t L_58 = V_12;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		int32_t L_59 = L_58;
		Type_t * L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_6 = L_60;
		TypeModel_t653695305 * L_61 = ___model0;
		BasicList_t2284403912 * L_62 = V_0;
		Type_t * L_63 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		TypeModel_TestEnumerableListPatterns_m3332789798(NULL /*static, unused*/, L_61, L_62, L_63, /*hidden argument*/NULL);
		int32_t L_64 = V_12;
		V_12 = ((int32_t)((int32_t)L_64+(int32_t)1));
	}

IL_0149:
	{
		int32_t L_65 = V_12;
		TypeU5BU5D_t1664964607* L_66 = V_13;
		NullCheck(L_66);
		V_10 = (bool)((((int32_t)L_65) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_66)->max_length))))))? 1 : 0);
		bool L_67 = V_10;
		if (L_67)
		{
			goto IL_0130;
		}
	}
	{
	}

IL_0158:
	{
		Type_t * L_68 = ___listType1;
		NullCheck(L_68);
		PropertyInfoU5BU5D_t1736152084* L_69 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1736152084*, int32_t >::Invoke(57 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_68, ((int32_t)52));
		V_14 = L_69;
		V_12 = 0;
		goto IL_01ee;
	}

IL_016b:
	{
		PropertyInfoU5BU5D_t1736152084* L_70 = V_14;
		int32_t L_71 = V_12;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		int32_t L_72 = L_71;
		PropertyInfo_t * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_7 = L_73;
		PropertyInfo_t * L_74 = V_7;
		NullCheck(L_74);
		String_t* L_75 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_74);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_76 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_75, _stringLiteral3168546709, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_0198;
		}
	}
	{
		BasicList_t2284403912 * L_77 = V_0;
		PropertyInfo_t * L_78 = V_7;
		NullCheck(L_78);
		Type_t * L_79 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_78);
		NullCheck(L_77);
		bool L_80 = BasicList_Contains_m716322581(L_77, L_79, /*hidden argument*/NULL);
		G_B35_0 = ((((int32_t)L_80) == ((int32_t)0))? 1 : 0);
		goto IL_0199;
	}

IL_0198:
	{
		G_B35_0 = 0;
	}

IL_0199:
	{
		V_10 = (bool)G_B35_0;
		bool L_81 = V_10;
		if (L_81)
		{
			goto IL_01a2;
		}
	}
	{
		goto IL_01e8;
	}

IL_01a2:
	{
		PropertyInfo_t * L_82 = V_7;
		NullCheck(L_82);
		ParameterInfoU5BU5D_t2275869610* L_83 = VirtFuncInvoker0< ParameterInfoU5BU5D_t2275869610* >::Invoke(21 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_82);
		V_8 = L_83;
		ParameterInfoU5BU5D_t2275869610* L_84 = V_8;
		NullCheck(L_84);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_84)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_01cf;
		}
	}
	{
		ParameterInfoU5BU5D_t2275869610* L_85 = V_8;
		NullCheck(L_85);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_85, 0);
		int32_t L_86 = 0;
		ParameterInfo_t2249040075 * L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		Type_t * L_88 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_87);
		TypeModel_t653695305 * L_89 = ___model0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_90 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Int32_t2071877448_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_89);
		Type_t * L_91 = TypeModel_MapType_m1376612940(L_89, L_90, /*hidden argument*/NULL);
		G_B40_0 = ((((Il2CppObject*)(Type_t *)L_88) == ((Il2CppObject*)(Type_t *)L_91))? 1 : 0);
		goto IL_01d0;
	}

IL_01cf:
	{
		G_B40_0 = 0;
	}

IL_01d0:
	{
		V_10 = (bool)G_B40_0;
		bool L_92 = V_10;
		if (L_92)
		{
			goto IL_01d9;
		}
	}
	{
		goto IL_01e8;
	}

IL_01d9:
	{
		BasicList_t2284403912 * L_93 = V_0;
		PropertyInfo_t * L_94 = V_7;
		NullCheck(L_94);
		Type_t * L_95 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_94);
		NullCheck(L_93);
		BasicList_Add_m3560539713(L_93, L_95, /*hidden argument*/NULL);
	}

IL_01e8:
	{
		int32_t L_96 = V_12;
		V_12 = ((int32_t)((int32_t)L_96+(int32_t)1));
	}

IL_01ee:
	{
		int32_t L_97 = V_12;
		PropertyInfoU5BU5D_t1736152084* L_98 = V_14;
		NullCheck(L_98);
		V_10 = (bool)((((int32_t)L_97) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_98)->max_length))))))? 1 : 0);
		bool L_99 = V_10;
		if (L_99)
		{
			goto IL_016b;
		}
	}
	{
		BasicList_t2284403912 * L_100 = V_0;
		NullCheck(L_100);
		int32_t L_101 = BasicList_get_Count_m2175503842(L_100, /*hidden argument*/NULL);
		V_15 = L_101;
		int32_t L_102 = V_15;
		if (L_102 == 0)
		{
			goto IL_021f;
		}
		if (L_102 == 1)
		{
			goto IL_0227;
		}
		if (L_102 == 2)
		{
			goto IL_0237;
		}
	}
	{
		goto IL_02a7;
	}

IL_021f:
	{
		V_9 = (Type_t *)NULL;
		goto IL_02ac;
	}

IL_0227:
	{
		BasicList_t2284403912 * L_103 = V_0;
		NullCheck(L_103);
		Il2CppObject * L_104 = BasicList_get_Item_m3841243466(L_103, 0, /*hidden argument*/NULL);
		V_9 = ((Type_t *)CastclassClass(L_104, Type_t_il2cpp_TypeInfo_var));
		goto IL_02ac;
	}

IL_0237:
	{
		TypeModel_t653695305 * L_105 = ___model0;
		BasicList_t2284403912 * L_106 = V_0;
		NullCheck(L_106);
		Il2CppObject * L_107 = BasicList_get_Item_m3841243466(L_106, 0, /*hidden argument*/NULL);
		BasicList_t2284403912 * L_108 = V_0;
		NullCheck(L_108);
		Il2CppObject * L_109 = BasicList_get_Item_m3841243466(L_108, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		bool L_110 = TypeModel_CheckDictionaryAccessors_m3731187808(NULL /*static, unused*/, L_105, ((Type_t *)CastclassClass(L_107, Type_t_il2cpp_TypeInfo_var)), ((Type_t *)CastclassClass(L_109, Type_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_110) == ((int32_t)0))? 1 : 0);
		bool L_111 = V_10;
		if (L_111)
		{
			goto IL_026e;
		}
	}
	{
		BasicList_t2284403912 * L_112 = V_0;
		NullCheck(L_112);
		Il2CppObject * L_113 = BasicList_get_Item_m3841243466(L_112, 0, /*hidden argument*/NULL);
		V_9 = ((Type_t *)CastclassClass(L_113, Type_t_il2cpp_TypeInfo_var));
		goto IL_02ac;
	}

IL_026e:
	{
		TypeModel_t653695305 * L_114 = ___model0;
		BasicList_t2284403912 * L_115 = V_0;
		NullCheck(L_115);
		Il2CppObject * L_116 = BasicList_get_Item_m3841243466(L_115, 1, /*hidden argument*/NULL);
		BasicList_t2284403912 * L_117 = V_0;
		NullCheck(L_117);
		Il2CppObject * L_118 = BasicList_get_Item_m3841243466(L_117, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		bool L_119 = TypeModel_CheckDictionaryAccessors_m3731187808(NULL /*static, unused*/, L_114, ((Type_t *)CastclassClass(L_116, Type_t_il2cpp_TypeInfo_var)), ((Type_t *)CastclassClass(L_118, Type_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_119) == ((int32_t)0))? 1 : 0);
		bool L_120 = V_10;
		if (L_120)
		{
			goto IL_02a5;
		}
	}
	{
		BasicList_t2284403912 * L_121 = V_0;
		NullCheck(L_121);
		Il2CppObject * L_122 = BasicList_get_Item_m3841243466(L_121, 1, /*hidden argument*/NULL);
		V_9 = ((Type_t *)CastclassClass(L_122, Type_t_il2cpp_TypeInfo_var));
		goto IL_02ac;
	}

IL_02a5:
	{
		goto IL_02a7;
	}

IL_02a7:
	{
		V_9 = (Type_t *)NULL;
		goto IL_02ac;
	}

IL_02ac:
	{
		Type_t * L_123 = V_9;
		return L_123;
	}
}
// System.Void ProtoBuf.Meta.TypeModel::TestEnumerableListPatterns(ProtoBuf.Meta.TypeModel,ProtoBuf.Meta.BasicList,System.Type)
extern const Il2CppType* IEnumerable_1_t4048664256_0_0_0_var;
extern const Il2CppType* ICollection_1_t1552160836_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral998228377;
extern const uint32_t TypeModel_TestEnumerableListPatterns_m3332789798_MetadataUsageId;
extern "C"  void TypeModel_TestEnumerableListPatterns_m3332789798 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, BasicList_t2284403912 * ___candidates1, Type_t * ___iType2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_TestEnumerableListPatterns_m3332789798_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t1664964607* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		Type_t * L_0 = ___iType2;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(83 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_007a;
		}
	}
	{
		Type_t * L_3 = ___iType2;
		NullCheck(L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(82 /* System.Type System.Type::GetGenericTypeDefinition() */, L_3);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		TypeModel_t653695305 * L_6 = ___model0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(IEnumerable_1_t4048664256_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		Type_t * L_8 = TypeModel_MapType_m1376612940(L_6, L_7, /*hidden argument*/NULL);
		if ((((Il2CppObject*)(Type_t *)L_5) == ((Il2CppObject*)(Type_t *)L_8)))
		{
			goto IL_0051;
		}
	}
	{
		Type_t * L_9 = V_0;
		TypeModel_t653695305 * L_10 = ___model0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(ICollection_1_t1552160836_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		Type_t * L_12 = TypeModel_MapType_m1376612940(L_10, L_11, /*hidden argument*/NULL);
		if ((((Il2CppObject*)(Type_t *)L_9) == ((Il2CppObject*)(Type_t *)L_12)))
		{
			goto IL_0051;
		}
	}
	{
		Type_t * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_14, _stringLiteral998228377, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_2 = (bool)G_B5_0;
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_0079;
		}
	}
	{
		Type_t * L_17 = ___iType2;
		NullCheck(L_17);
		TypeU5BU5D_t1664964607* L_18 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(79 /* System.Type[] System.Type::GetGenericArguments() */, L_17);
		V_1 = L_18;
		BasicList_t2284403912 * L_19 = ___candidates1;
		TypeU5BU5D_t1664964607* L_20 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		int32_t L_21 = 0;
		Type_t * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		bool L_23 = BasicList_Contains_m716322581(L_19, L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		bool L_24 = V_2;
		if (L_24)
		{
			goto IL_0078;
		}
	}
	{
		BasicList_t2284403912 * L_25 = ___candidates1;
		TypeU5BU5D_t1664964607* L_26 = V_1;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		int32_t L_27 = 0;
		Type_t * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_25);
		BasicList_Add_m3560539713(L_25, L_28, /*hidden argument*/NULL);
	}

IL_0078:
	{
	}

IL_0079:
	{
	}

IL_007a:
	{
		return;
	}
}
// System.Boolean ProtoBuf.Meta.TypeModel::CheckDictionaryAccessors(ProtoBuf.Meta.TypeModel,System.Type,System.Type)
extern const Il2CppType* KeyValuePair_2_t1988958766_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t TypeModel_CheckDictionaryAccessors_m3731187808_MetadataUsageId;
extern "C"  bool TypeModel_CheckDictionaryAccessors_m3731187808 (Il2CppObject * __this /* static, unused */, TypeModel_t653695305 * ___model0, Type_t * ___pair1, Type_t * ___value2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_CheckDictionaryAccessors_m3731187808_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		Type_t * L_0 = ___pair1;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(83 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_2 = ___pair1;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(82 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		TypeModel_t653695305 * L_4 = ___model0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(KeyValuePair_2_t1988958766_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		Type_t * L_6 = TypeModel_MapType_m1376612940(L_4, L_5, /*hidden argument*/NULL);
		if ((!(((Il2CppObject*)(Type_t *)L_3) == ((Il2CppObject*)(Type_t *)L_6))))
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_7 = ___pair1;
		NullCheck(L_7);
		TypeU5BU5D_t1664964607* L_8 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(79 /* System.Type[] System.Type::GetGenericArguments() */, L_7);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		int32_t L_9 = 1;
		Type_t * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Type_t * L_11 = ___value2;
		G_B4_0 = ((((Il2CppObject*)(Type_t *)L_10) == ((Il2CppObject*)(Type_t *)L_11))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B4_0 = 0;
	}

IL_002f:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0033;
	}

IL_0033:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Boolean ProtoBuf.Meta.TypeModel::TryDeserializeList(ProtoBuf.Meta.TypeModel,ProtoBuf.ProtoReader,ProtoBuf.DataFormat,System.Int32,System.Type,System.Type,System.Object&)
extern Il2CppClass* TypeModel_t653695305_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NotSupportedException_t1793819818_il2cpp_TypeInfo_var;
extern Il2CppClass* IList_t3321498491_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* BasicList_t2284403912_il2cpp_TypeInfo_var;
extern Il2CppClass* Il2CppArray_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1444916335;
extern const uint32_t TypeModel_TryDeserializeList_m1593112345_MetadataUsageId;
extern "C"  bool TypeModel_TryDeserializeList_m1593112345 (TypeModel_t653695305 * __this, TypeModel_t653695305 * ___model0, ProtoReader_t3981212867 * ___reader1, int32_t ___format2, int32_t ___tag3, Type_t * ___listType4, Type_t * ___itemType5, Il2CppObject ** ___value6, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_TryDeserializeList_m1593112345_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	MethodInfo_t * V_1 = NULL;
	bool V_2 = false;
	Il2CppObject * V_3 = NULL;
	Il2CppObject * V_4 = NULL;
	ObjectU5BU5D_t3614634134* V_5 = NULL;
	BasicList_t2284403912 * V_6 = NULL;
	Il2CppArray * V_7 = NULL;
	Il2CppArray * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	ObjectU5BU5D_t3614634134* G_B5_0 = NULL;
	BasicList_t2284403912 * G_B8_0 = NULL;
	int32_t G_B12_0 = 0;
	{
		TypeModel_t653695305 * L_0 = ___model0;
		Type_t * L_1 = ___listType4;
		Type_t * L_2 = ___itemType5;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = TypeModel_ResolveListAdd_m3738663196(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		MethodInfo_t * L_4 = V_1;
		V_10 = (bool)((((int32_t)((((Il2CppObject*)(MethodInfo_t *)L_4) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_10;
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		Type_t * L_6 = ___listType4;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1444916335, L_7, /*hidden argument*/NULL);
		NotSupportedException_t1793819818 * L_9 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m836173213(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_0032:
	{
		V_2 = (bool)0;
		V_3 = NULL;
		Il2CppObject ** L_10 = ___value6;
		V_4 = ((Il2CppObject *)IsInst((*((Il2CppObject **)L_10)), IList_t3321498491_il2cpp_TypeInfo_var));
		bool L_11 = V_0;
		if (L_11)
		{
			goto IL_004b;
		}
	}
	{
		G_B5_0 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)1));
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = ((ObjectU5BU5D_t3614634134*)(NULL));
	}

IL_004c:
	{
		V_5 = G_B5_0;
		Type_t * L_12 = ___listType4;
		NullCheck(L_12);
		bool L_13 = Type_get_IsArray_m811277129(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		G_B8_0 = ((BasicList_t2284403912 *)(NULL));
		goto IL_0060;
	}

IL_005b:
	{
		BasicList_t2284403912 * L_14 = (BasicList_t2284403912 *)il2cpp_codegen_object_new(BasicList_t2284403912_il2cpp_TypeInfo_var);
		BasicList__ctor_m2625270794(L_14, /*hidden argument*/NULL);
		G_B8_0 = L_14;
	}

IL_0060:
	{
		V_6 = G_B8_0;
		goto IL_00dd;
	}

IL_0065:
	{
		V_2 = (bool)1;
		Il2CppObject ** L_15 = ___value6;
		if ((*((Il2CppObject **)L_15)))
		{
			goto IL_0077;
		}
	}
	{
		BasicList_t2284403912 * L_16 = V_6;
		G_B12_0 = ((((int32_t)((((Il2CppObject*)(BasicList_t2284403912 *)L_16) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B12_0 = 1;
	}

IL_0078:
	{
		V_10 = (bool)G_B12_0;
		bool L_17 = V_10;
		if (L_17)
		{
			goto IL_0097;
		}
	}
	{
		Il2CppObject ** L_18 = ___value6;
		Type_t * L_19 = ___listType4;
		Type_t * L_20 = ___itemType5;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		Il2CppObject * L_21 = TypeModel_CreateListInstance_m3046607841(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_18)) = (Il2CppObject *)L_21;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_18), (Il2CppObject *)L_21);
		Il2CppObject ** L_22 = ___value6;
		V_4 = ((Il2CppObject *)IsInst((*((Il2CppObject **)L_22)), IList_t3321498491_il2cpp_TypeInfo_var));
	}

IL_0097:
	{
		Il2CppObject * L_23 = V_4;
		V_10 = (bool)((((Il2CppObject*)(Il2CppObject *)L_23) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_24 = V_10;
		if (L_24)
		{
			goto IL_00af;
		}
	}
	{
		Il2CppObject * L_25 = V_4;
		Il2CppObject * L_26 = V_3;
		NullCheck(L_25);
		InterfaceFuncInvoker1< int32_t, Il2CppObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t3321498491_il2cpp_TypeInfo_var, L_25, L_26);
		goto IL_00da;
	}

IL_00af:
	{
		BasicList_t2284403912 * L_27 = V_6;
		V_10 = (bool)((((Il2CppObject*)(BasicList_t2284403912 *)L_27) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_28 = V_10;
		if (L_28)
		{
			goto IL_00c7;
		}
	}
	{
		BasicList_t2284403912 * L_29 = V_6;
		Il2CppObject * L_30 = V_3;
		NullCheck(L_29);
		BasicList_Add_m3560539713(L_29, L_30, /*hidden argument*/NULL);
		goto IL_00da;
	}

IL_00c7:
	{
		ObjectU5BU5D_t3614634134* L_31 = V_5;
		Il2CppObject * L_32 = V_3;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_32);
		MethodInfo_t * L_33 = V_1;
		Il2CppObject ** L_34 = ___value6;
		ObjectU5BU5D_t3614634134* L_35 = V_5;
		NullCheck(L_33);
		MethodBase_Invoke_m1075809207(L_33, (*((Il2CppObject **)L_34)), L_35, /*hidden argument*/NULL);
	}

IL_00da:
	{
		V_3 = NULL;
	}

IL_00dd:
	{
		ProtoReader_t3981212867 * L_36 = ___reader1;
		int32_t L_37 = ___format2;
		int32_t L_38 = ___tag3;
		Type_t * L_39 = ___itemType5;
		bool L_40 = TypeModel_TryDeserializeAuxiliaryType_m1775273591(__this, L_36, L_37, L_38, L_39, (&V_3), (bool)1, (bool)1, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_10 = L_40;
		bool L_41 = V_10;
		if (L_41)
		{
			goto IL_0065;
		}
	}
	{
		BasicList_t2284403912 * L_42 = V_6;
		V_10 = (bool)((((Il2CppObject*)(BasicList_t2284403912 *)L_42) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_43 = V_10;
		if (L_43)
		{
			goto IL_019c;
		}
	}
	{
		Il2CppObject ** L_44 = ___value6;
		V_10 = (bool)((((Il2CppObject*)(Il2CppObject *)(*((Il2CppObject **)L_44))) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_45 = V_10;
		if (L_45)
		{
			goto IL_0179;
		}
	}
	{
		BasicList_t2284403912 * L_46 = V_6;
		NullCheck(L_46);
		int32_t L_47 = BasicList_get_Count_m2175503842(L_46, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)((((int32_t)L_47) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_10;
		if (L_48)
		{
			goto IL_012b;
		}
	}
	{
		goto IL_0176;
	}

IL_012b:
	{
		Il2CppObject ** L_49 = ___value6;
		V_8 = ((Il2CppArray *)CastclassClass((*((Il2CppObject **)L_49)), Il2CppArray_il2cpp_TypeInfo_var));
		Type_t * L_50 = ___itemType5;
		Il2CppArray * L_51 = V_8;
		NullCheck(L_51);
		int32_t L_52 = Array_get_Length_m1498215565(L_51, /*hidden argument*/NULL);
		BasicList_t2284403912 * L_53 = V_6;
		NullCheck(L_53);
		int32_t L_54 = BasicList_get_Count_m2175503842(L_53, /*hidden argument*/NULL);
		Il2CppArray * L_55 = Array_CreateInstance_m138919384(NULL /*static, unused*/, L_50, ((int32_t)((int32_t)L_52+(int32_t)L_54)), /*hidden argument*/NULL);
		V_7 = L_55;
		Il2CppArray * L_56 = V_8;
		Il2CppArray * L_57 = V_7;
		Il2CppArray * L_58 = V_8;
		NullCheck(L_58);
		int32_t L_59 = Array_get_Length_m1498215565(L_58, /*hidden argument*/NULL);
		Array_Copy_m2363740072(NULL /*static, unused*/, L_56, L_57, L_59, /*hidden argument*/NULL);
		BasicList_t2284403912 * L_60 = V_6;
		Il2CppArray * L_61 = V_7;
		Il2CppArray * L_62 = V_8;
		NullCheck(L_62);
		int32_t L_63 = Array_get_Length_m1498215565(L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		BasicList_CopyTo_m2804699657(L_60, L_61, L_63, /*hidden argument*/NULL);
		Il2CppObject ** L_64 = ___value6;
		Il2CppArray * L_65 = V_7;
		*((Il2CppObject **)(L_64)) = (Il2CppObject *)L_65;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_64), (Il2CppObject *)L_65);
	}

IL_0176:
	{
		goto IL_019b;
	}

IL_0179:
	{
		Type_t * L_66 = ___itemType5;
		BasicList_t2284403912 * L_67 = V_6;
		NullCheck(L_67);
		int32_t L_68 = BasicList_get_Count_m2175503842(L_67, /*hidden argument*/NULL);
		Il2CppArray * L_69 = Array_CreateInstance_m138919384(NULL /*static, unused*/, L_66, L_68, /*hidden argument*/NULL);
		V_7 = L_69;
		BasicList_t2284403912 * L_70 = V_6;
		Il2CppArray * L_71 = V_7;
		NullCheck(L_70);
		BasicList_CopyTo_m2804699657(L_70, L_71, 0, /*hidden argument*/NULL);
		Il2CppObject ** L_72 = ___value6;
		Il2CppArray * L_73 = V_7;
		*((Il2CppObject **)(L_72)) = (Il2CppObject *)L_73;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_72), (Il2CppObject *)L_73);
	}

IL_019b:
	{
	}

IL_019c:
	{
		bool L_74 = V_2;
		V_9 = L_74;
		goto IL_01a1;
	}

IL_01a1:
	{
		bool L_75 = V_9;
		return L_75;
	}
}
// System.Object ProtoBuf.Meta.TypeModel::CreateListInstance(System.Type,System.Type)
extern const Il2CppType* IDictionary_2_t3502329323_0_0_0_var;
extern const Il2CppType* Dictionary_2_t2276497324_0_0_0_var;
extern const Il2CppType* IDictionary_t596158605_0_0_0_var;
extern const Il2CppType* Hashtable_t909839986_0_0_0_var;
extern const Il2CppType* List_1_t1169184319_0_0_0_var;
extern const Il2CppType* ArrayList_t4252133567_0_0_0_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3674672482;
extern const uint32_t TypeModel_CreateListInstance_m3046607841_MetadataUsageId;
extern "C"  Il2CppObject * TypeModel_CreateListInstance_m3046607841 (Il2CppObject * __this /* static, unused */, Type_t * ___listType0, Type_t * ___itemType1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_CreateListInstance_m3046607841_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	TypeU5BU5D_t1664964607* V_3 = NULL;
	Il2CppObject * V_4 = NULL;
	bool V_5 = false;
	TypeU5BU5D_t1664964607* V_6 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B20_0 = 0;
	{
		Type_t * L_0 = ___listType0;
		V_0 = L_0;
		Type_t * L_1 = ___listType0;
		NullCheck(L_1);
		bool L_2 = Type_get_IsArray_m811277129(L_1, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_5;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_4 = ___itemType1;
		Il2CppArray * L_5 = Array_CreateInstance_m138919384(NULL /*static, unused*/, L_4, 0, /*hidden argument*/NULL);
		V_4 = L_5;
		goto IL_0139;
	}

IL_0021:
	{
		Type_t * L_6 = ___listType0;
		NullCheck(L_6);
		bool L_7 = Type_get_IsClass_m2968663946(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		Type_t * L_8 = ___listType0;
		NullCheck(L_8);
		bool L_9 = Type_get_IsAbstract_m2532060002(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0045;
		}
	}
	{
		Type_t * L_10 = ___listType0;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1664964607* L_11 = ((Helpers_t2267943139_StaticFields*)Helpers_t2267943139_il2cpp_TypeInfo_var->static_fields)->get_EmptyTypes_0();
		ConstructorInfo_t2851816542 * L_12 = Helpers_GetConstructor_m4003574134(NULL /*static, unused*/, L_10, L_11, (bool)1, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)((((Il2CppObject*)(ConstructorInfo_t2851816542 *)L_12) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B6_0 = 0;
	}

IL_0046:
	{
		V_5 = (bool)G_B6_0;
		bool L_13 = V_5;
		if (L_13)
		{
			goto IL_012f;
		}
	}
	{
		V_2 = (bool)0;
		Type_t * L_14 = ___listType0;
		NullCheck(L_14);
		bool L_15 = Type_get_IsInterface_m3583817465(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0075;
		}
	}
	{
		Type_t * L_16 = ___listType0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_16);
		String_t* L_18 = L_17;
		V_1 = L_18;
		if (!L_18)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = String_IndexOf_m4251815737(L_19, _stringLiteral3674672482, /*hidden argument*/NULL);
		G_B11_0 = ((((int32_t)L_20) < ((int32_t)0))? 1 : 0);
		goto IL_0076;
	}

IL_0075:
	{
		G_B11_0 = 1;
	}

IL_0076:
	{
		V_5 = (bool)G_B11_0;
		bool L_21 = V_5;
		if (L_21)
		{
			goto IL_00ee;
		}
	}
	{
		Type_t * L_22 = ___listType0;
		NullCheck(L_22);
		bool L_23 = VirtFuncInvoker0< bool >::Invoke(83 /* System.Boolean System.Type::get_IsGenericType() */, L_22);
		if (!L_23)
		{
			goto IL_009d;
		}
	}
	{
		Type_t * L_24 = ___listType0;
		NullCheck(L_24);
		Type_t * L_25 = VirtFuncInvoker0< Type_t * >::Invoke(82 /* System.Type System.Type::GetGenericTypeDefinition() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(IDictionary_2_t3502329323_0_0_0_var), /*hidden argument*/NULL);
		G_B15_0 = ((((int32_t)((((Il2CppObject*)(Type_t *)L_25) == ((Il2CppObject*)(Type_t *)L_26))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B15_0 = 1;
	}

IL_009e:
	{
		V_5 = (bool)G_B15_0;
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_00c1;
		}
	}
	{
		Type_t * L_28 = ___listType0;
		NullCheck(L_28);
		TypeU5BU5D_t1664964607* L_29 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(79 /* System.Type[] System.Type::GetGenericArguments() */, L_28);
		V_3 = L_29;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Dictionary_2_t2276497324_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1664964607* L_31 = V_3;
		NullCheck(L_30);
		Type_t * L_32 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1664964607* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_30, L_31);
		V_0 = L_32;
		V_2 = (bool)1;
	}

IL_00c1:
	{
		bool L_33 = V_2;
		if (L_33)
		{
			goto IL_00d6;
		}
	}
	{
		Type_t * L_34 = ___listType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_35 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(IDictionary_t596158605_0_0_0_var), /*hidden argument*/NULL);
		G_B20_0 = ((((int32_t)((((Il2CppObject*)(Type_t *)L_34) == ((Il2CppObject*)(Type_t *)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B20_0 = 1;
	}

IL_00d7:
	{
		V_5 = (bool)G_B20_0;
		bool L_36 = V_5;
		if (L_36)
		{
			goto IL_00ed;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(Hashtable_t909839986_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_37;
		V_2 = (bool)1;
	}

IL_00ed:
	{
	}

IL_00ee:
	{
		bool L_38 = V_2;
		V_5 = L_38;
		bool L_39 = V_5;
		if (L_39)
		{
			goto IL_0118;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(List_1_t1169184319_0_0_0_var), /*hidden argument*/NULL);
		V_6 = ((TypeU5BU5D_t1664964607*)SZArrayNew(TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var, (uint32_t)1));
		TypeU5BU5D_t1664964607* L_41 = V_6;
		Type_t * L_42 = ___itemType1;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_42);
		TypeU5BU5D_t1664964607* L_43 = V_6;
		NullCheck(L_40);
		Type_t * L_44 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1664964607* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_40, L_43);
		V_0 = L_44;
		V_2 = (bool)1;
	}

IL_0118:
	{
		bool L_45 = V_2;
		V_5 = L_45;
		bool L_46 = V_5;
		if (L_46)
		{
			goto IL_012e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_47 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(ArrayList_t4252133567_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_47;
		V_2 = (bool)1;
	}

IL_012e:
	{
	}

IL_012f:
	{
		Type_t * L_48 = V_0;
		Il2CppObject * L_49 = Activator_CreateInstance_m383294261(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		V_4 = L_49;
		goto IL_0139;
	}

IL_0139:
	{
		Il2CppObject * L_50 = V_4;
		return L_50;
	}
}
// System.Boolean ProtoBuf.Meta.TypeModel::TryDeserializeAuxiliaryType(ProtoBuf.ProtoReader,ProtoBuf.DataFormat,System.Int32,System.Type,System.Object&,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern const Il2CppType* ByteU5BU5D_t3397334013_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* TypeModel_t653695305_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* InvalidOperationException_t721527559_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern Il2CppClass* Int16_t4041245914_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* Int64_t909078037_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt16_t986882611_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt32_t2149682021_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt64_t2909196914_il2cpp_TypeInfo_var;
extern Il2CppClass* Boolean_t3825574718_il2cpp_TypeInfo_var;
extern Il2CppClass* SByte_t454417549_il2cpp_TypeInfo_var;
extern Il2CppClass* Byte_t3683104436_il2cpp_TypeInfo_var;
extern Il2CppClass* Char_t3454481338_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern Il2CppClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern Il2CppClass* BclHelpers_t3990312086_il2cpp_TypeInfo_var;
extern Il2CppClass* DateTime_t693205669_il2cpp_TypeInfo_var;
extern Il2CppClass* Decimal_t724701077_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppClass* TimeSpan_t3430258949_il2cpp_TypeInfo_var;
extern Il2CppClass* Guid_t2533601593_il2cpp_TypeInfo_var;
extern Il2CppClass* Uri_t19570940_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1421151742;
extern Il2CppCodeGenString* _stringLiteral3190108254;
extern Il2CppCodeGenString* _stringLiteral3374500893;
extern const uint32_t TypeModel_TryDeserializeAuxiliaryType_m1775273591_MetadataUsageId;
extern "C"  bool TypeModel_TryDeserializeAuxiliaryType_m1775273591 (TypeModel_t653695305 * __this, ProtoReader_t3981212867 * ___reader0, int32_t ___format1, int32_t ___tag2, Type_t * ___type3, Il2CppObject ** ___value4, bool ___skipOtherFields5, bool ___asListItem6, bool ___autoCreate7, bool ___insideList8, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_TryDeserializeAuxiliaryType_m1775273591_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	SubItemToken_t3722101296  V_6;
	memset(&V_6, 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B65_0 = 0;
	{
		Type_t * L_0 = ___type3;
		V_8 = (bool)((((int32_t)((((Il2CppObject*)(Type_t *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_8;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral1421151742, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_001a:
	{
		V_0 = (Type_t *)NULL;
		Type_t * L_3 = ___type3;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		int32_t L_4 = Helpers_GetTypeCode_m1589684719(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = ___format1;
		int32_t L_7 = TypeModel_GetWireType_m3912993137(__this, L_5, L_6, (&___type3), (&V_2), /*hidden argument*/NULL);
		V_3 = L_7;
		V_4 = (bool)0;
		int32_t L_8 = V_3;
		V_8 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_8;
		if (L_9)
		{
			goto IL_00e5;
		}
	}
	{
		Type_t * L_10 = ___type3;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		Type_t * L_11 = TypeModel_GetListItemType_m2520936192(NULL /*static, unused*/, __this, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		Type_t * L_12 = V_0;
		if (L_12)
		{
			goto IL_0074;
		}
	}
	{
		Type_t * L_13 = ___type3;
		NullCheck(L_13);
		bool L_14 = Type_get_IsArray_m811277129(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		Type_t * L_15 = ___type3;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(43 /* System.Int32 System.Type::GetArrayRank() */, L_15);
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0074;
		}
	}
	{
		Type_t * L_17 = ___type3;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t3397334013_0_0_0_var), /*hidden argument*/NULL);
		G_B8_0 = ((((Il2CppObject*)(Type_t *)L_17) == ((Il2CppObject*)(Type_t *)L_18))? 1 : 0);
		goto IL_0075;
	}

IL_0074:
	{
		G_B8_0 = 1;
	}

IL_0075:
	{
		V_8 = (bool)G_B8_0;
		bool L_19 = V_8;
		if (L_19)
		{
			goto IL_0086;
		}
	}
	{
		Type_t * L_20 = ___type3;
		NullCheck(L_20);
		Type_t * L_21 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_20);
		V_0 = L_21;
	}

IL_0086:
	{
		Type_t * L_22 = V_0;
		V_8 = (bool)((((Il2CppObject*)(Type_t *)L_22) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_23 = V_8;
		if (L_23)
		{
			goto IL_00dc;
		}
	}
	{
		bool L_24 = ___insideList8;
		V_8 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_00a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_26 = TypeModel_CreateNestedListsNotSupported_m3196710079(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26);
	}

IL_00a2:
	{
		ProtoReader_t3981212867 * L_27 = ___reader0;
		int32_t L_28 = ___format1;
		int32_t L_29 = ___tag2;
		Type_t * L_30 = ___type3;
		Type_t * L_31 = V_0;
		Il2CppObject ** L_32 = ___value4;
		bool L_33 = TypeModel_TryDeserializeList_m1593112345(__this, __this, L_27, L_28, L_29, L_30, L_31, L_32, /*hidden argument*/NULL);
		V_4 = L_33;
		bool L_34 = V_4;
		if (L_34)
		{
			goto IL_00be;
		}
	}
	{
		bool L_35 = ___autoCreate7;
		G_B16_0 = ((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		goto IL_00bf;
	}

IL_00be:
	{
		G_B16_0 = 1;
	}

IL_00bf:
	{
		V_8 = (bool)G_B16_0;
		bool L_36 = V_8;
		if (L_36)
		{
			goto IL_00d3;
		}
	}
	{
		Il2CppObject ** L_37 = ___value4;
		Type_t * L_38 = ___type3;
		Type_t * L_39 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		Il2CppObject * L_40 = TypeModel_CreateListInstance_m3046607841(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_37)) = (Il2CppObject *)L_40;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_37), (Il2CppObject *)L_40);
	}

IL_00d3:
	{
		bool L_41 = V_4;
		V_7 = L_41;
		goto IL_03ca;
	}

IL_00dc:
	{
		Type_t * L_42 = ___type3;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		TypeModel_ThrowUnexpectedType_m1777965871(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		goto IL_0383;
	}

IL_00ea:
	{
		bool L_43 = V_4;
		if (!L_43)
		{
			goto IL_00f6;
		}
	}
	{
		bool L_44 = ___asListItem6;
		G_B24_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_00f7;
	}

IL_00f6:
	{
		G_B24_0 = 1;
	}

IL_00f7:
	{
		V_8 = (bool)G_B24_0;
		bool L_45 = V_8;
		if (L_45)
		{
			goto IL_0103;
		}
	}
	{
		goto IL_038b;
	}

IL_0103:
	{
		ProtoReader_t3981212867 * L_46 = ___reader0;
		NullCheck(L_46);
		int32_t L_47 = ProtoReader_ReadFieldHeader_m3404319213(L_46, /*hidden argument*/NULL);
		V_5 = L_47;
		int32_t L_48 = V_5;
		V_8 = (bool)((((int32_t)L_48) > ((int32_t)0))? 1 : 0);
		bool L_49 = V_8;
		if (L_49)
		{
			goto IL_011b;
		}
	}
	{
		goto IL_038b;
	}

IL_011b:
	{
		int32_t L_50 = V_5;
		int32_t L_51 = ___tag2;
		V_8 = (bool)((((int32_t)L_50) == ((int32_t)L_51))? 1 : 0);
		bool L_52 = V_8;
		if (L_52)
		{
			goto IL_0168;
		}
	}
	{
		bool L_53 = ___skipOtherFields5;
		V_8 = (bool)((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_8;
		if (L_54)
		{
			goto IL_013f;
		}
	}
	{
		ProtoReader_t3981212867 * L_55 = ___reader0;
		NullCheck(L_55);
		ProtoReader_SkipField_m3666995751(L_55, /*hidden argument*/NULL);
		goto IL_0383;
	}

IL_013f:
	{
		String_t* L_56 = Int32_ToString_m2960866144((&___tag2), /*hidden argument*/NULL);
		String_t* L_57 = Int32_ToString_m2960866144((&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m1561703559(NULL /*static, unused*/, _stringLiteral3190108254, L_56, _stringLiteral3374500893, L_57, /*hidden argument*/NULL);
		InvalidOperationException_t721527559 * L_59 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_59, L_58, /*hidden argument*/NULL);
		ProtoReader_t3981212867 * L_60 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_61 = ProtoReader_AddErrorData_m129176144(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61);
	}

IL_0168:
	{
		V_4 = (bool)1;
		ProtoReader_t3981212867 * L_62 = ___reader0;
		int32_t L_63 = V_3;
		NullCheck(L_62);
		ProtoReader_Hint_m4267750087(L_62, L_63, /*hidden argument*/NULL);
		int32_t L_64 = V_2;
		V_8 = (bool)((((int32_t)L_64) < ((int32_t)0))? 1 : 0);
		bool L_65 = V_8;
		if (L_65)
		{
			goto IL_01cb;
		}
	}
	{
		int32_t L_66 = V_3;
		V_9 = L_66;
		int32_t L_67 = V_9;
		if (((int32_t)((int32_t)L_67-(int32_t)2)) == 0)
		{
			goto IL_0194;
		}
		if (((int32_t)((int32_t)L_67-(int32_t)2)) == 1)
		{
			goto IL_0194;
		}
	}
	{
		goto IL_01b8;
	}

IL_0194:
	{
		ProtoReader_t3981212867 * L_68 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		SubItemToken_t3722101296  L_69 = ProtoReader_StartSubItem_m1950929655(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		V_6 = L_69;
		Il2CppObject ** L_70 = ___value4;
		int32_t L_71 = V_2;
		Il2CppObject ** L_72 = ___value4;
		ProtoReader_t3981212867 * L_73 = ___reader0;
		Il2CppObject * L_74 = VirtFuncInvoker3< Il2CppObject *, int32_t, Il2CppObject *, ProtoReader_t3981212867 * >::Invoke(7 /* System.Object ProtoBuf.Meta.TypeModel::Deserialize(System.Int32,System.Object,ProtoBuf.ProtoReader) */, __this, L_71, (*((Il2CppObject **)L_72)), L_73);
		*((Il2CppObject **)(L_70)) = (Il2CppObject *)L_74;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_70), (Il2CppObject *)L_74);
		SubItemToken_t3722101296  L_75 = V_6;
		ProtoReader_t3981212867 * L_76 = ___reader0;
		ProtoReader_EndSubItem_m1622745011(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/NULL);
		goto IL_0383;
	}

IL_01b8:
	{
		Il2CppObject ** L_77 = ___value4;
		int32_t L_78 = V_2;
		Il2CppObject ** L_79 = ___value4;
		ProtoReader_t3981212867 * L_80 = ___reader0;
		Il2CppObject * L_81 = VirtFuncInvoker3< Il2CppObject *, int32_t, Il2CppObject *, ProtoReader_t3981212867 * >::Invoke(7 /* System.Object ProtoBuf.Meta.TypeModel::Deserialize(System.Int32,System.Object,ProtoBuf.ProtoReader) */, __this, L_78, (*((Il2CppObject **)L_79)), L_80);
		*((Il2CppObject **)(L_77)) = (Il2CppObject *)L_81;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_77), (Il2CppObject *)L_81);
		goto IL_0383;
	}

IL_01cb:
	{
		int32_t L_82 = V_1;
		V_10 = L_82;
		int32_t L_83 = V_10;
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 0)
		{
			goto IL_02a8;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 1)
		{
			goto IL_02e1;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 2)
		{
			goto IL_02bb;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 3)
		{
			goto IL_02ce;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 4)
		{
			goto IL_0236;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 5)
		{
			goto IL_026f;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 6)
		{
			goto IL_0249;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 7)
		{
			goto IL_0282;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 8)
		{
			goto IL_025c;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 9)
		{
			goto IL_0295;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 10)
		{
			goto IL_0304;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 11)
		{
			goto IL_02f4;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 12)
		{
			goto IL_0324;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 13)
		{
			goto IL_0314;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 14)
		{
			goto IL_0382;
		}
		if (((int32_t)((int32_t)L_83-(int32_t)3)) == 15)
		{
			goto IL_0334;
		}
	}
	{
		int32_t L_84 = V_10;
		if (((int32_t)((int32_t)L_84-(int32_t)((int32_t)100))) == 0)
		{
			goto IL_0352;
		}
		if (((int32_t)((int32_t)L_84-(int32_t)((int32_t)100))) == 1)
		{
			goto IL_033f;
		}
		if (((int32_t)((int32_t)L_84-(int32_t)((int32_t)100))) == 2)
		{
			goto IL_0362;
		}
		if (((int32_t)((int32_t)L_84-(int32_t)((int32_t)100))) == 3)
		{
			goto IL_0372;
		}
	}
	{
		goto IL_0382;
	}

IL_0236:
	{
		Il2CppObject ** L_85 = ___value4;
		ProtoReader_t3981212867 * L_86 = ___reader0;
		NullCheck(L_86);
		int16_t L_87 = ProtoReader_ReadInt16_m90490090(L_86, /*hidden argument*/NULL);
		int16_t L_88 = L_87;
		Il2CppObject * L_89 = Box(Int16_t4041245914_il2cpp_TypeInfo_var, &L_88);
		*((Il2CppObject **)(L_85)) = (Il2CppObject *)L_89;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_85), (Il2CppObject *)L_89);
		goto IL_0383;
	}

IL_0249:
	{
		Il2CppObject ** L_90 = ___value4;
		ProtoReader_t3981212867 * L_91 = ___reader0;
		NullCheck(L_91);
		int32_t L_92 = ProtoReader_ReadInt32_m3141427562(L_91, /*hidden argument*/NULL);
		int32_t L_93 = L_92;
		Il2CppObject * L_94 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_93);
		*((Il2CppObject **)(L_90)) = (Il2CppObject *)L_94;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_90), (Il2CppObject *)L_94);
		goto IL_0383;
	}

IL_025c:
	{
		Il2CppObject ** L_95 = ___value4;
		ProtoReader_t3981212867 * L_96 = ___reader0;
		NullCheck(L_96);
		int64_t L_97 = ProtoReader_ReadInt64_m692900778(L_96, /*hidden argument*/NULL);
		int64_t L_98 = L_97;
		Il2CppObject * L_99 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_98);
		*((Il2CppObject **)(L_95)) = (Il2CppObject *)L_99;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_95), (Il2CppObject *)L_99);
		goto IL_0383;
	}

IL_026f:
	{
		Il2CppObject ** L_100 = ___value4;
		ProtoReader_t3981212867 * L_101 = ___reader0;
		NullCheck(L_101);
		uint16_t L_102 = ProtoReader_ReadUInt16_m753475648(L_101, /*hidden argument*/NULL);
		uint16_t L_103 = L_102;
		Il2CppObject * L_104 = Box(UInt16_t986882611_il2cpp_TypeInfo_var, &L_103);
		*((Il2CppObject **)(L_100)) = (Il2CppObject *)L_104;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_100), (Il2CppObject *)L_104);
		goto IL_0383;
	}

IL_0282:
	{
		Il2CppObject ** L_105 = ___value4;
		ProtoReader_t3981212867 * L_106 = ___reader0;
		NullCheck(L_106);
		uint32_t L_107 = ProtoReader_ReadUInt32_m164356528(L_106, /*hidden argument*/NULL);
		uint32_t L_108 = L_107;
		Il2CppObject * L_109 = Box(UInt32_t2149682021_il2cpp_TypeInfo_var, &L_108);
		*((Il2CppObject **)(L_105)) = (Il2CppObject *)L_109;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_105), (Il2CppObject *)L_109);
		goto IL_0383;
	}

IL_0295:
	{
		Il2CppObject ** L_110 = ___value4;
		ProtoReader_t3981212867 * L_111 = ___reader0;
		NullCheck(L_111);
		uint64_t L_112 = ProtoReader_ReadUInt64_m3682925282(L_111, /*hidden argument*/NULL);
		uint64_t L_113 = L_112;
		Il2CppObject * L_114 = Box(UInt64_t2909196914_il2cpp_TypeInfo_var, &L_113);
		*((Il2CppObject **)(L_110)) = (Il2CppObject *)L_114;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_110), (Il2CppObject *)L_114);
		goto IL_0383;
	}

IL_02a8:
	{
		Il2CppObject ** L_115 = ___value4;
		ProtoReader_t3981212867 * L_116 = ___reader0;
		NullCheck(L_116);
		bool L_117 = ProtoReader_ReadBoolean_m1199369898(L_116, /*hidden argument*/NULL);
		bool L_118 = L_117;
		Il2CppObject * L_119 = Box(Boolean_t3825574718_il2cpp_TypeInfo_var, &L_118);
		*((Il2CppObject **)(L_115)) = (Il2CppObject *)L_119;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_115), (Il2CppObject *)L_119);
		goto IL_0383;
	}

IL_02bb:
	{
		Il2CppObject ** L_120 = ___value4;
		ProtoReader_t3981212867 * L_121 = ___reader0;
		NullCheck(L_121);
		int8_t L_122 = ProtoReader_ReadSByte_m2510620266(L_121, /*hidden argument*/NULL);
		int8_t L_123 = L_122;
		Il2CppObject * L_124 = Box(SByte_t454417549_il2cpp_TypeInfo_var, &L_123);
		*((Il2CppObject **)(L_120)) = (Il2CppObject *)L_124;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_120), (Il2CppObject *)L_124);
		goto IL_0383;
	}

IL_02ce:
	{
		Il2CppObject ** L_125 = ___value4;
		ProtoReader_t3981212867 * L_126 = ___reader0;
		NullCheck(L_126);
		uint8_t L_127 = ProtoReader_ReadByte_m1928697362(L_126, /*hidden argument*/NULL);
		uint8_t L_128 = L_127;
		Il2CppObject * L_129 = Box(Byte_t3683104436_il2cpp_TypeInfo_var, &L_128);
		*((Il2CppObject **)(L_125)) = (Il2CppObject *)L_129;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_125), (Il2CppObject *)L_129);
		goto IL_0383;
	}

IL_02e1:
	{
		Il2CppObject ** L_130 = ___value4;
		ProtoReader_t3981212867 * L_131 = ___reader0;
		NullCheck(L_131);
		uint16_t L_132 = ProtoReader_ReadUInt16_m753475648(L_131, /*hidden argument*/NULL);
		Il2CppChar L_133 = ((Il2CppChar)L_132);
		Il2CppObject * L_134 = Box(Char_t3454481338_il2cpp_TypeInfo_var, &L_133);
		*((Il2CppObject **)(L_130)) = (Il2CppObject *)L_134;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_130), (Il2CppObject *)L_134);
		goto IL_0383;
	}

IL_02f4:
	{
		Il2CppObject ** L_135 = ___value4;
		ProtoReader_t3981212867 * L_136 = ___reader0;
		NullCheck(L_136);
		double L_137 = ProtoReader_ReadDouble_m3134621416(L_136, /*hidden argument*/NULL);
		double L_138 = L_137;
		Il2CppObject * L_139 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_138);
		*((Il2CppObject **)(L_135)) = (Il2CppObject *)L_139;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_135), (Il2CppObject *)L_139);
		goto IL_0383;
	}

IL_0304:
	{
		Il2CppObject ** L_140 = ___value4;
		ProtoReader_t3981212867 * L_141 = ___reader0;
		NullCheck(L_141);
		float L_142 = ProtoReader_ReadSingle_m1700471570(L_141, /*hidden argument*/NULL);
		float L_143 = L_142;
		Il2CppObject * L_144 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_143);
		*((Il2CppObject **)(L_140)) = (Il2CppObject *)L_144;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_140), (Il2CppObject *)L_144);
		goto IL_0383;
	}

IL_0314:
	{
		Il2CppObject ** L_145 = ___value4;
		ProtoReader_t3981212867 * L_146 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_147 = BclHelpers_ReadDateTime_m3483555903(NULL /*static, unused*/, L_146, /*hidden argument*/NULL);
		DateTime_t693205669  L_148 = L_147;
		Il2CppObject * L_149 = Box(DateTime_t693205669_il2cpp_TypeInfo_var, &L_148);
		*((Il2CppObject **)(L_145)) = (Il2CppObject *)L_149;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_145), (Il2CppObject *)L_149);
		goto IL_0383;
	}

IL_0324:
	{
		Il2CppObject ** L_150 = ___value4;
		ProtoReader_t3981212867 * L_151 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		Decimal_t724701077  L_152 = BclHelpers_ReadDecimal_m3677017487(NULL /*static, unused*/, L_151, /*hidden argument*/NULL);
		Decimal_t724701077  L_153 = L_152;
		Il2CppObject * L_154 = Box(Decimal_t724701077_il2cpp_TypeInfo_var, &L_153);
		*((Il2CppObject **)(L_150)) = (Il2CppObject *)L_154;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_150), (Il2CppObject *)L_154);
		goto IL_0383;
	}

IL_0334:
	{
		Il2CppObject ** L_155 = ___value4;
		ProtoReader_t3981212867 * L_156 = ___reader0;
		NullCheck(L_156);
		String_t* L_157 = ProtoReader_ReadString_m1117385000(L_156, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_155)) = (Il2CppObject *)L_157;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_155), (Il2CppObject *)L_157);
		goto IL_0383;
	}

IL_033f:
	{
		Il2CppObject ** L_158 = ___value4;
		Il2CppObject ** L_159 = ___value4;
		ProtoReader_t3981212867 * L_160 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_161 = ProtoReader_AppendBytes_m3236146482(NULL /*static, unused*/, ((ByteU5BU5D_t3397334013*)Castclass((*((Il2CppObject **)L_159)), ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var)), L_160, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_158)) = (Il2CppObject *)L_161;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_158), (Il2CppObject *)L_161);
		goto IL_0383;
	}

IL_0352:
	{
		Il2CppObject ** L_162 = ___value4;
		ProtoReader_t3981212867 * L_163 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_164 = BclHelpers_ReadTimeSpan_m2955884543(NULL /*static, unused*/, L_163, /*hidden argument*/NULL);
		TimeSpan_t3430258949  L_165 = L_164;
		Il2CppObject * L_166 = Box(TimeSpan_t3430258949_il2cpp_TypeInfo_var, &L_165);
		*((Il2CppObject **)(L_162)) = (Il2CppObject *)L_166;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_162), (Il2CppObject *)L_166);
		goto IL_0383;
	}

IL_0362:
	{
		Il2CppObject ** L_167 = ___value4;
		ProtoReader_t3981212867 * L_168 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(BclHelpers_t3990312086_il2cpp_TypeInfo_var);
		Guid_t2533601593  L_169 = BclHelpers_ReadGuid_m620805183(NULL /*static, unused*/, L_168, /*hidden argument*/NULL);
		Guid_t2533601593  L_170 = L_169;
		Il2CppObject * L_171 = Box(Guid_t2533601593_il2cpp_TypeInfo_var, &L_170);
		*((Il2CppObject **)(L_167)) = (Il2CppObject *)L_171;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_167), (Il2CppObject *)L_171);
		goto IL_0383;
	}

IL_0372:
	{
		Il2CppObject ** L_172 = ___value4;
		ProtoReader_t3981212867 * L_173 = ___reader0;
		NullCheck(L_173);
		String_t* L_174 = ProtoReader_ReadString_m1117385000(L_173, /*hidden argument*/NULL);
		Uri_t19570940 * L_175 = (Uri_t19570940 *)il2cpp_codegen_object_new(Uri_t19570940_il2cpp_TypeInfo_var);
		Uri__ctor_m1248212436(L_175, L_174, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_172)) = (Il2CppObject *)L_175;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_172), (Il2CppObject *)L_175);
		goto IL_0383;
	}

IL_0382:
	{
	}

IL_0383:
	{
		V_8 = (bool)1;
		goto IL_00ea;
	}

IL_038b:
	{
		bool L_176 = V_4;
		if (L_176)
		{
			goto IL_039a;
		}
	}
	{
		bool L_177 = ___asListItem6;
		if (L_177)
		{
			goto IL_039a;
		}
	}
	{
		bool L_178 = ___autoCreate7;
		G_B65_0 = ((((int32_t)L_178) == ((int32_t)0))? 1 : 0);
		goto IL_039b;
	}

IL_039a:
	{
		G_B65_0 = 1;
	}

IL_039b:
	{
		V_8 = (bool)G_B65_0;
		bool L_179 = V_8;
		if (L_179)
		{
			goto IL_03c4;
		}
	}
	{
		Type_t * L_180 = ___type3;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_181 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		V_8 = (bool)((((Il2CppObject*)(Type_t *)L_180) == ((Il2CppObject*)(Type_t *)L_181))? 1 : 0);
		bool L_182 = V_8;
		if (L_182)
		{
			goto IL_03c3;
		}
	}
	{
		Il2CppObject ** L_183 = ___value4;
		Type_t * L_184 = ___type3;
		Il2CppObject * L_185 = Activator_CreateInstance_m383294261(NULL /*static, unused*/, L_184, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_183)) = (Il2CppObject *)L_185;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_183), (Il2CppObject *)L_185);
	}

IL_03c3:
	{
	}

IL_03c4:
	{
		bool L_186 = V_4;
		V_7 = L_186;
		goto IL_03ca;
	}

IL_03ca:
	{
		bool L_187 = V_7;
		return L_187;
	}
}
// System.Type ProtoBuf.Meta.TypeModel::ResolveProxies(System.Type)
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4198849617;
extern Il2CppCodeGenString* _stringLiteral3281240713;
extern Il2CppCodeGenString* _stringLiteral4046417568;
extern Il2CppCodeGenString* _stringLiteral5289739;
extern const uint32_t TypeModel_ResolveProxies_m3138091170_MetadataUsageId;
extern "C"  Type_t * TypeModel_ResolveProxies_m3138091170 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_ResolveProxies_m3138091170_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	String_t* V_1 = NULL;
	TypeU5BU5D_t1664964607* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t * V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	int32_t G_B9_0 = 0;
	{
		Type_t * L_0 = ___type0;
		V_5 = (bool)((((int32_t)((((Il2CppObject*)(Type_t *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_4 = (Type_t *)NULL;
		goto IL_00d8;
	}

IL_0016:
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(85 /* System.Boolean System.Type::get_IsGenericParameter() */, L_2);
		V_5 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_5;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		V_4 = (Type_t *)NULL;
		goto IL_00d8;
	}

IL_002d:
	{
		Type_t * L_5 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Type_t * L_6 = Helpers_GetUnderlyingType_m3443069188(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Type_t * L_7 = V_0;
		V_5 = (bool)((((Il2CppObject*)(Type_t *)L_7) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_8 = V_5;
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		Type_t * L_9 = V_0;
		V_4 = L_9;
		goto IL_00d8;
	}

IL_0046:
	{
		Type_t * L_10 = ___type0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_10);
		V_1 = L_11;
		String_t* L_12 = V_1;
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = String_StartsWith_m1841920685(L_13, _stringLiteral4198849617, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_5 = (bool)G_B9_0;
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_0072;
		}
	}
	{
		Type_t * L_16 = ___type0;
		NullCheck(L_16);
		Type_t * L_17 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_16);
		V_4 = L_17;
		goto IL_00d8;
	}

IL_0072:
	{
		Type_t * L_18 = ___type0;
		NullCheck(L_18);
		TypeU5BU5D_t1664964607* L_19 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_18);
		V_2 = L_19;
		V_3 = 0;
		goto IL_00c7;
	}

IL_007d:
	{
		TypeU5BU5D_t1664964607* L_20 = V_2;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		Type_t * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_23);
		V_6 = L_24;
		String_t* L_25 = V_6;
		if (!L_25)
		{
			goto IL_00c2;
		}
	}
	{
		String_t* L_26 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_26, _stringLiteral3281240713, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_28 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_28, _stringLiteral4046417568, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_30 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_30, _stringLiteral5289739, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_00c2;
	}

IL_00b8:
	{
		Type_t * L_32 = ___type0;
		NullCheck(L_32);
		Type_t * L_33 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_32);
		V_4 = L_33;
		goto IL_00d8;
	}

IL_00c2:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00c7:
	{
		int32_t L_35 = V_3;
		TypeU5BU5D_t1664964607* L_36 = V_2;
		NullCheck(L_36);
		V_5 = (bool)((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_36)->max_length))))))? 1 : 0);
		bool L_37 = V_5;
		if (L_37)
		{
			goto IL_007d;
		}
	}
	{
		V_4 = (Type_t *)NULL;
		goto IL_00d8;
	}

IL_00d8:
	{
		Type_t * L_38 = V_4;
		return L_38;
	}
}
// System.Int32 ProtoBuf.Meta.TypeModel::GetKey(System.Type&)
extern Il2CppClass* TypeModel_t653695305_il2cpp_TypeInfo_var;
extern const uint32_t TypeModel_GetKey_m1061342213_MetadataUsageId;
extern "C"  int32_t TypeModel_GetKey_m1061342213 (TypeModel_t653695305 * __this, Type_t ** ___type0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_GetKey_m1061342213_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		Type_t ** L_0 = ___type0;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(Type_t *)(*((Type_t **)L_0))) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		V_2 = (-1);
		goto IL_0049;
	}

IL_0011:
	{
		Type_t ** L_2 = ___type0;
		int32_t L_3 = VirtFuncInvoker1< int32_t, Type_t * >::Invoke(5 /* System.Int32 ProtoBuf.Meta.TypeModel::GetKeyImpl(System.Type) */, __this, (*((Type_t **)L_2)));
		V_0 = L_3;
		int32_t L_4 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		Type_t ** L_6 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		Type_t * L_7 = TypeModel_ResolveProxies_m3138091170(NULL /*static, unused*/, (*((Type_t **)L_6)), /*hidden argument*/NULL);
		V_1 = L_7;
		Type_t * L_8 = V_1;
		V_3 = (bool)((((Il2CppObject*)(Type_t *)L_8) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0044;
		}
	}
	{
		Type_t ** L_10 = ___type0;
		Type_t * L_11 = V_1;
		*((Il2CppObject **)(L_10)) = (Il2CppObject *)L_11;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_10), (Il2CppObject *)L_11);
		Type_t ** L_12 = ___type0;
		int32_t L_13 = VirtFuncInvoker1< int32_t, Type_t * >::Invoke(5 /* System.Int32 ProtoBuf.Meta.TypeModel::GetKeyImpl(System.Type) */, __this, (*((Type_t **)L_12)));
		V_0 = L_13;
	}

IL_0044:
	{
	}

IL_0045:
	{
		int32_t L_14 = V_0;
		V_2 = L_14;
		goto IL_0049;
	}

IL_0049:
	{
		int32_t L_15 = V_2;
		return L_15;
	}
}
// System.Void ProtoBuf.Meta.TypeModel::ThrowUnexpectedSubtype(System.Type,System.Type)
extern Il2CppClass* TypeModel_t653695305_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* InvalidOperationException_t721527559_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3200123540;
extern const uint32_t TypeModel_ThrowUnexpectedSubtype_m1437867326_MetadataUsageId;
extern "C"  void TypeModel_ThrowUnexpectedSubtype_m1437867326 (Il2CppObject * __this /* static, unused */, Type_t * ___expected0, Type_t * ___actual1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_ThrowUnexpectedSubtype_m1437867326_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0 = ___expected0;
		Type_t * L_1 = ___actual1;
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		Type_t * L_2 = TypeModel_ResolveProxies_m3138091170(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((Il2CppObject*)(Type_t *)L_0) == ((Il2CppObject*)(Type_t *)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_4 = ___actual1;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral3200123540, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t721527559 * L_7 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0025:
	{
		return;
	}
}
// System.Void ProtoBuf.Meta.TypeModel::ThrowUnexpectedType(System.Type)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* InvalidOperationException_t721527559_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2846478389;
extern Il2CppCodeGenString* _stringLiteral3398140844;
extern Il2CppCodeGenString* _stringLiteral4281105450;
extern Il2CppCodeGenString* _stringLiteral2721385581;
extern const uint32_t TypeModel_ThrowUnexpectedType_m1777965871_MetadataUsageId;
extern "C"  void TypeModel_ThrowUnexpectedType_m1777965871 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_ThrowUnexpectedType_m1777965871_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	bool V_2 = false;
	String_t* G_B3_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		Type_t * L_0 = ___type0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Type_t * L_1 = ___type0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		G_B3_0 = L_2;
		goto IL_0011;
	}

IL_000c:
	{
		G_B3_0 = _stringLiteral2846478389;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		Type_t * L_3 = ___type0;
		V_2 = (bool)((((Il2CppObject*)(Type_t *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (L_4)
		{
			goto IL_0061;
		}
	}
	{
		Type_t * L_5 = ___type0;
		NullCheck(L_5);
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_5);
		V_1 = L_6;
		Type_t * L_7 = V_1;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		Type_t * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(83 /* System.Boolean System.Type::get_IsGenericType() */, L_8);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		Type_t * L_10 = V_1;
		NullCheck(L_10);
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(82 /* System.Type System.Type::GetGenericTypeDefinition() */, L_10);
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_12, _stringLiteral3398140844, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B8_0 = 1;
	}

IL_0049:
	{
		V_2 = (bool)G_B8_0;
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral4281105450, L_15, /*hidden argument*/NULL);
		InvalidOperationException_t721527559 * L_17 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_0060:
	{
	}

IL_0061:
	{
		String_t* L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral2721385581, L_18, /*hidden argument*/NULL);
		InvalidOperationException_t721527559 * L_20 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20);
	}
}
// System.Exception ProtoBuf.Meta.TypeModel::CreateNestedListsNotSupported()
extern Il2CppClass* NotSupportedException_t1793819818_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral430681259;
extern const uint32_t TypeModel_CreateNestedListsNotSupported_m3196710079_MetadataUsageId;
extern "C"  Exception_t1927440687 * TypeModel_CreateNestedListsNotSupported_m3196710079 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel_CreateNestedListsNotSupported_m3196710079_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t1927440687 * V_0 = NULL;
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m836173213(L_0, _stringLiteral430681259, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		Exception_t1927440687 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean ProtoBuf.Meta.TypeModel::get_ForwardsOnly()
extern "C"  bool TypeModel_get_ForwardsOnly_m2769872662 (TypeModel_t653695305 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_forwardsOnly_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void ProtoBuf.Meta.TypeModel::.ctor()
extern "C"  void TypeModel__ctor_m3606578987 (TypeModel_t653695305 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.Meta.TypeModel::.cctor()
extern const Il2CppType* IList_t3321498491_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* TypeModel_t653695305_il2cpp_TypeInfo_var;
extern const uint32_t TypeModel__cctor_m1485232826_MetadataUsageId;
extern "C"  void TypeModel__cctor_m1485232826 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeModel__cctor_m1485232826_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(IList_t3321498491_0_0_0_var), /*hidden argument*/NULL);
		((TypeModel_t653695305_StaticFields*)TypeModel_t653695305_il2cpp_TypeInfo_var->static_fields)->set_ilist_0(L_0);
		return;
	}
}
// ProtoBuf.Meta.MutableList ProtoBuf.NetObjectCache::get_List()
extern Il2CppClass* MutableList_t1161363740_il2cpp_TypeInfo_var;
extern const uint32_t NetObjectCache_get_List_m1684470523_MetadataUsageId;
extern "C"  MutableList_t1161363740 * NetObjectCache_get_List_m1684470523 (NetObjectCache_t2620415644 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetObjectCache_get_List_m1684470523_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	MutableList_t1161363740 * V_0 = NULL;
	bool V_1 = false;
	{
		MutableList_t1161363740 * L_0 = __this->get_underlyingList_0();
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(MutableList_t1161363740 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		MutableList_t1161363740 * L_2 = (MutableList_t1161363740 *)il2cpp_codegen_object_new(MutableList_t1161363740_il2cpp_TypeInfo_var);
		MutableList__ctor_m2469561734(L_2, /*hidden argument*/NULL);
		__this->set_underlyingList_0(L_2);
	}

IL_001c:
	{
		MutableList_t1161363740 * L_3 = __this->get_underlyingList_0();
		V_0 = L_3;
		goto IL_0025;
	}

IL_0025:
	{
		MutableList_t1161363740 * L_4 = V_0;
		return L_4;
	}
}
// System.Void ProtoBuf.NetObjectCache::SetKeyedObject(System.Int32,System.Object)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoException_t1712273663_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1803325615;
extern Il2CppCodeGenString* _stringLiteral637423531;
extern Il2CppCodeGenString* _stringLiteral226269568;
extern Il2CppCodeGenString* _stringLiteral3987486317;
extern const uint32_t NetObjectCache_SetKeyedObject_m2545017919_MetadataUsageId;
extern "C"  void NetObjectCache_SetKeyedObject_m2545017919 (NetObjectCache_t2620415644 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetObjectCache_SetKeyedObject_m2545017919_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	MutableList_t1161363740 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___key0;
		int32_t L_1 = L_0;
		___key0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		V_2 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_0056;
		}
	}
	{
		Il2CppObject * L_3 = ___value1;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t628810857 * L_5 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_5, _stringLiteral1803325615, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0028:
	{
		Il2CppObject * L_6 = __this->get_rootObject_1();
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		Il2CppObject * L_7 = __this->get_rootObject_1();
		Il2CppObject * L_8 = ___value1;
		G_B6_0 = ((((Il2CppObject*)(Il2CppObject *)L_7) == ((Il2CppObject*)(Il2CppObject *)L_8))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B6_0 = 1;
	}

IL_003c:
	{
		V_2 = (bool)G_B6_0;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_004c;
		}
	}
	{
		ProtoException_t1712273663 * L_10 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_10, _stringLiteral637423531, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_004c:
	{
		Il2CppObject * L_11 = ___value1;
		__this->set_rootObject_1(L_11);
		goto IL_00c4;
	}

IL_0056:
	{
		MutableList_t1161363740 * L_12 = NetObjectCache_get_List_m1684470523(__this, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = ___key0;
		MutableList_t1161363740 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = BasicList_get_Count_m2175503842(L_14, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_00a9;
		}
	}
	{
		MutableList_t1161363740 * L_17 = V_0;
		int32_t L_18 = ___key0;
		NullCheck(L_17);
		Il2CppObject * L_19 = MutableList_get_Item_m3451580262(L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		Il2CppObject * L_20 = V_1;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_20) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_008f;
		}
	}
	{
		MutableList_t1161363740 * L_22 = V_0;
		int32_t L_23 = ___key0;
		Il2CppObject * L_24 = ___value1;
		NullCheck(L_22);
		MutableList_set_Item_m2517114687(L_22, L_23, L_24, /*hidden argument*/NULL);
		goto IL_00a6;
	}

IL_008f:
	{
		Il2CppObject * L_25 = V_1;
		Il2CppObject * L_26 = ___value1;
		bool L_27 = Object_ReferenceEquals_m3900584722(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		bool L_28 = V_2;
		if (L_28)
		{
			goto IL_00a6;
		}
	}
	{
		ProtoException_t1712273663 * L_29 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_29, _stringLiteral226269568, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29);
	}

IL_00a6:
	{
		goto IL_00c3;
	}

IL_00a9:
	{
		int32_t L_30 = ___key0;
		MutableList_t1161363740 * L_31 = V_0;
		Il2CppObject * L_32 = ___value1;
		NullCheck(L_31);
		int32_t L_33 = BasicList_Add_m3560539713(L_31, L_32, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_30) == ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_2;
		if (L_34)
		{
			goto IL_00c3;
		}
	}
	{
		ProtoException_t1712273663 * L_35 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_35, _stringLiteral3987486317, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35);
	}

IL_00c3:
	{
	}

IL_00c4:
	{
		return;
	}
}
// System.Void ProtoBuf.NetObjectCache::RegisterTrappedObject(System.Object)
extern "C"  void NetObjectCache_RegisterTrappedObject_m1238540065 (NetObjectCache_t2620415644 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Il2CppObject * L_0 = __this->get_rootObject_1();
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Il2CppObject * L_2 = ___value0;
		__this->set_rootObject_1(L_2);
		goto IL_007e;
	}

IL_001c:
	{
		MutableList_t1161363740 * L_3 = __this->get_underlyingList_0();
		V_1 = (bool)((((Il2CppObject*)(MutableList_t1161363740 *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_5 = __this->get_trapStartIndex_2();
		V_0 = L_5;
		goto IL_006a;
	}

IL_0034:
	{
		int32_t L_6 = V_0;
		__this->set_trapStartIndex_2(((int32_t)((int32_t)L_6+(int32_t)1)));
		MutableList_t1161363740 * L_7 = __this->get_underlyingList_0();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Il2CppObject * L_9 = MutableList_get_Item_m3451580262(L_7, L_8, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_9) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0065;
		}
	}
	{
		MutableList_t1161363740 * L_11 = __this->get_underlyingList_0();
		int32_t L_12 = V_0;
		Il2CppObject * L_13 = ___value0;
		NullCheck(L_11);
		MutableList_set_Item_m2517114687(L_11, L_12, L_13, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_0065:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_15 = V_0;
		MutableList_t1161363740 * L_16 = __this->get_underlyingList_0();
		NullCheck(L_16);
		int32_t L_17 = BasicList_get_Count_m2175503842(L_16, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_1;
		if (L_18)
		{
			goto IL_0034;
		}
	}

IL_007c:
	{
	}

IL_007d:
	{
	}

IL_007e:
	{
		return;
	}
}
// System.Void ProtoBuf.NetObjectCache::Clear()
extern const MethodInfo* Dictionary_2_Clear_m464345723_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Clear_m931018591_MethodInfo_var;
extern const uint32_t NetObjectCache_Clear_m2607687186_MetadataUsageId;
extern "C"  void NetObjectCache_Clear_m2607687186 (NetObjectCache_t2620415644 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetObjectCache_Clear_m2607687186_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		__this->set_trapStartIndex_2(0);
		__this->set_rootObject_1(NULL);
		MutableList_t1161363740 * L_0 = __this->get_underlyingList_0();
		V_0 = (bool)((((Il2CppObject*)(MutableList_t1161363740 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		MutableList_t1161363740 * L_2 = __this->get_underlyingList_0();
		NullCheck(L_2);
		MutableList_Clear_m1811999229(L_2, /*hidden argument*/NULL);
	}

IL_0028:
	{
		Dictionary_2_t3986656710 * L_3 = __this->get_stringKeys_3();
		V_0 = (bool)((((Il2CppObject*)(Dictionary_2_t3986656710 *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		Dictionary_2_t3986656710 * L_5 = __this->get_stringKeys_3();
		NullCheck(L_5);
		Dictionary_2_Clear_m464345723(L_5, /*hidden argument*/Dictionary_2_Clear_m464345723_MethodInfo_var);
	}

IL_0041:
	{
		Dictionary_2_t1663937576 * L_6 = __this->get_objectKeys_4();
		V_0 = (bool)((((Il2CppObject*)(Dictionary_2_t1663937576 *)L_6) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_005a;
		}
	}
	{
		Dictionary_2_t1663937576 * L_8 = __this->get_objectKeys_4();
		NullCheck(L_8);
		Dictionary_2_Clear_m931018591(L_8, /*hidden argument*/Dictionary_2_Clear_m931018591_MethodInfo_var);
	}

IL_005a:
	{
		return;
	}
}
// System.Void ProtoBuf.NetObjectCache::.ctor()
extern "C"  void NetObjectCache__ctor_m25650673 (NetObjectCache_t2620415644 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoContractAttribute::set_Name(System.String)
extern "C"  void ProtoContractAttribute_set_Name_m1618994343 (ProtoContractAttribute_t1463874358 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_name_0(L_0);
		return;
	}
}
// System.Void ProtoBuf.ProtoContractAttribute::.ctor()
extern "C"  void ProtoContractAttribute__ctor_m2271018827 (ProtoContractAttribute_t1463874358 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1730479323(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoException::.ctor(System.String)
extern "C"  void ProtoException__ctor_m2708038802 (ProtoException_t1712273663 * __this, String_t* ___message0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message0;
		Exception__ctor_m485833136(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ProtoBuf.ProtoMemberAttribute::CompareTo(System.Object)
extern Il2CppClass* ProtoMemberAttribute_t3383080044_il2cpp_TypeInfo_var;
extern const uint32_t ProtoMemberAttribute_CompareTo_m3402258201_MetadataUsageId;
extern "C"  int32_t ProtoMemberAttribute_CompareTo_m3402258201 (ProtoMemberAttribute_t3383080044 * __this, Il2CppObject * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoMemberAttribute_CompareTo_m3402258201_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Il2CppObject * L_0 = ___other0;
		int32_t L_1 = ProtoMemberAttribute_CompareTo_m1157203190(__this, ((ProtoMemberAttribute_t3383080044 *)IsInstClass(L_0, ProtoMemberAttribute_t3383080044_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ProtoBuf.ProtoMemberAttribute::CompareTo(ProtoBuf.ProtoMemberAttribute)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t ProtoMemberAttribute_CompareTo_m1157203190_MetadataUsageId;
extern "C"  int32_t ProtoMemberAttribute_CompareTo_m1157203190 (ProtoMemberAttribute_t3383080044 * __this, ProtoMemberAttribute_t3383080044 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoMemberAttribute_CompareTo_m1157203190_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		ProtoMemberAttribute_t3383080044 * L_0 = ___other0;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(ProtoMemberAttribute_t3383080044 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = (-1);
		goto IL_0052;
	}

IL_0010:
	{
		ProtoMemberAttribute_t3383080044 * L_2 = ___other0;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(ProtoMemberAttribute_t3383080044 *)__this) == ((Il2CppObject*)(ProtoMemberAttribute_t3383080044 *)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_1 = 0;
		goto IL_0052;
	}

IL_001f:
	{
		int32_t* L_4 = __this->get_address_of_tag_2();
		ProtoMemberAttribute_t3383080044 * L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_tag_2();
		int32_t L_7 = Int32_CompareTo_m3808534558(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_10 = __this->get_name_0();
		ProtoMemberAttribute_t3383080044 * L_11 = ___other0;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_name_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_13 = String_CompareOrdinal_m3421681586(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_004e:
	{
		int32_t L_14 = V_0;
		V_1 = L_14;
		goto IL_0052;
	}

IL_0052:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.Void ProtoBuf.ProtoMemberAttribute::.ctor(System.Int32)
extern "C"  void ProtoMemberAttribute__ctor_m502052624 (ProtoMemberAttribute_t3383080044 * __this, int32_t ___tag0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___tag0;
		ProtoMemberAttribute__ctor_m4032798387(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoMemberAttribute::.ctor(System.Int32,System.Boolean)
extern Il2CppClass* ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral696029674;
extern const uint32_t ProtoMemberAttribute__ctor_m4032798387_MetadataUsageId;
extern "C"  void ProtoMemberAttribute__ctor_m4032798387 (ProtoMemberAttribute_t3383080044 * __this, int32_t ___tag0, bool ___forced1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoMemberAttribute__ctor_m4032798387_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Attribute__ctor_m1730479323(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___tag0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = ___forced1;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentOutOfRangeException_t279959794 * L_3 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_3, _stringLiteral696029674, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0020:
	{
		int32_t L_4 = ___tag0;
		__this->set_tag_2(L_4);
		return;
	}
}
// System.Void ProtoBuf.ProtoMemberAttribute::set_Name(System.String)
extern "C"  void ProtoMemberAttribute_set_Name_m1769784129 (ProtoMemberAttribute_t3383080044 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_name_0(L_0);
		return;
	}
}
// System.Void ProtoBuf.ProtoMemberAttribute::set_DataFormat(ProtoBuf.DataFormat)
extern "C"  void ProtoMemberAttribute_set_DataFormat_m1155103013 (ProtoMemberAttribute_t3383080044 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_dataFormat_1(L_0);
		return;
	}
}
// System.Void ProtoBuf.ProtoMemberAttribute::set_IsRequired(System.Boolean)
extern "C"  void ProtoMemberAttribute_set_IsRequired_m3899844508 (ProtoMemberAttribute_t3383080044 * __this, bool ___value0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		bool L_0 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = __this->get_options_3();
		__this->set_options_3(((int32_t)((int32_t)L_2|(int32_t)2)));
		goto IL_0028;
	}

IL_0019:
	{
		int32_t L_3 = __this->get_options_3();
		__this->set_options_3(((int32_t)((int32_t)L_3&(int32_t)((int32_t)-3))));
	}

IL_0028:
	{
		return;
	}
}
// ProtoBuf.WireType ProtoBuf.ProtoReader::get_WireType()
extern "C"  int32_t ProtoReader_get_WireType_m3607414071 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_wireType_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ProtoBuf.ProtoReader::.ctor(System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext,System.Int32)
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader__ctor_m2342701527_MetadataUsageId;
extern "C"  void ProtoReader__ctor_m2342701527 (ProtoReader_t3981212867 * __this, Stream_t3255436806 * ___source0, TypeModel_t653695305 * ___model1, SerializationContext_t3878296411 * ___context2, int32_t ___length3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader__ctor_m2342701527_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		Stream_t3255436806 * L_0 = ___source0;
		TypeModel_t653695305 * L_1 = ___model1;
		SerializationContext_t3878296411 * L_2 = ___context2;
		int32_t L_3 = ___length3;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_Init_m890523795(NULL /*static, unused*/, __this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoReader::Init(ProtoBuf.ProtoReader,System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext,System.Int32)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern Il2CppClass* BufferPool_t710398810_il2cpp_TypeInfo_var;
extern Il2CppClass* SerializationContext_t3878296411_il2cpp_TypeInfo_var;
extern Il2CppClass* NetObjectCache_t2620415644_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4211174801;
extern Il2CppCodeGenString* _stringLiteral3122096237;
extern const uint32_t ProtoReader_Init_m890523795_MetadataUsageId;
extern "C"  void ProtoReader_Init_m890523795 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___reader0, Stream_t3255436806 * ___source1, TypeModel_t653695305 * ___model2, SerializationContext_t3878296411 * ___context3, int32_t ___length4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_Init_m890523795_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	ProtoReader_t3981212867 * G_B6_0 = NULL;
	ProtoReader_t3981212867 * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ProtoReader_t3981212867 * G_B7_1 = NULL;
	{
		Stream_t3255436806 * L_0 = ___source1;
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(Stream_t3255436806 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral4211174801, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		Stream_t3255436806 * L_3 = ___source1;
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		V_1 = L_4;
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t3259014390 * L_6 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m544251339(L_6, _stringLiteral3122096237, _stringLiteral4211174801, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0031:
	{
		ProtoReader_t3981212867 * L_7 = ___reader0;
		Stream_t3255436806 * L_8 = ___source1;
		NullCheck(L_7);
		L_7->set_source_0(L_8);
		ProtoReader_t3981212867 * L_9 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_10 = BufferPool_GetBuffer_m3732834373(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_ioBuffer_1(L_10);
		ProtoReader_t3981212867 * L_11 = ___reader0;
		TypeModel_t653695305 * L_12 = ___model2;
		NullCheck(L_11);
		L_11->set_model_2(L_12);
		int32_t L_13 = ___length4;
		V_0 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		ProtoReader_t3981212867 * L_14 = ___reader0;
		bool L_15 = V_0;
		NullCheck(L_14);
		L_14->set_isFixedLength_11(L_15);
		ProtoReader_t3981212867 * L_16 = ___reader0;
		bool L_17 = V_0;
		G_B5_0 = L_16;
		if (L_17)
		{
			G_B6_0 = L_16;
			goto IL_0061;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_0063;
	}

IL_0061:
	{
		int32_t L_18 = ___length4;
		G_B7_0 = L_18;
		G_B7_1 = G_B6_0;
	}

IL_0063:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_dataRemaining_5(G_B7_0);
		SerializationContext_t3878296411 * L_19 = ___context3;
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(SerializationContext_t3878296411 *)L_19) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SerializationContext_t3878296411_il2cpp_TypeInfo_var);
		SerializationContext_t3878296411 * L_21 = SerializationContext_get_Default_m3829835231(NULL /*static, unused*/, /*hidden argument*/NULL);
		___context3 = L_21;
		goto IL_0088;
	}

IL_007f:
	{
		SerializationContext_t3878296411 * L_22 = ___context3;
		NullCheck(L_22);
		SerializationContext_Freeze_m1525726585(L_22, /*hidden argument*/NULL);
	}

IL_0088:
	{
		ProtoReader_t3981212867 * L_23 = ___reader0;
		SerializationContext_t3878296411 * L_24 = ___context3;
		NullCheck(L_23);
		L_23->set_context_15(L_24);
		ProtoReader_t3981212867 * L_25 = ___reader0;
		ProtoReader_t3981212867 * L_26 = ___reader0;
		ProtoReader_t3981212867 * L_27 = ___reader0;
		ProtoReader_t3981212867 * L_28 = ___reader0;
		ProtoReader_t3981212867 * L_29 = ___reader0;
		int32_t L_30 = 0;
		V_2 = L_30;
		NullCheck(L_29);
		L_29->set_ioIndex_6(L_30);
		int32_t L_31 = V_2;
		int32_t L_32 = L_31;
		V_2 = L_32;
		NullCheck(L_28);
		L_28->set_fieldNumber_3(L_32);
		int32_t L_33 = V_2;
		int32_t L_34 = L_33;
		V_2 = L_34;
		NullCheck(L_27);
		L_27->set_depth_4(L_34);
		int32_t L_35 = V_2;
		int32_t L_36 = L_35;
		V_2 = L_36;
		NullCheck(L_26);
		L_26->set_available_8(L_36);
		int32_t L_37 = V_2;
		NullCheck(L_25);
		L_25->set_position_7(L_37);
		ProtoReader_t3981212867 * L_38 = ___reader0;
		NullCheck(L_38);
		L_38->set_blockEnd_9(((int32_t)2147483647LL));
		ProtoReader_t3981212867 * L_39 = ___reader0;
		NullCheck(L_39);
		L_39->set_internStrings_12((bool)1);
		ProtoReader_t3981212867 * L_40 = ___reader0;
		NullCheck(L_40);
		L_40->set_wireType_10((-1));
		ProtoReader_t3981212867 * L_41 = ___reader0;
		NullCheck(L_41);
		L_41->set_trapCount_14(1);
		ProtoReader_t3981212867 * L_42 = ___reader0;
		NullCheck(L_42);
		NetObjectCache_t2620415644 * L_43 = L_42->get_netCache_13();
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(NetObjectCache_t2620415644 *)L_43) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_1;
		if (L_44)
		{
			goto IL_00f5;
		}
	}
	{
		ProtoReader_t3981212867 * L_45 = ___reader0;
		NetObjectCache_t2620415644 * L_46 = (NetObjectCache_t2620415644 *)il2cpp_codegen_object_new(NetObjectCache_t2620415644_il2cpp_TypeInfo_var);
		NetObjectCache__ctor_m25650673(L_46, /*hidden argument*/NULL);
		NullCheck(L_45);
		L_45->set_netCache_13(L_46);
	}

IL_00f5:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoReader::Dispose()
extern Il2CppClass* BufferPool_t710398810_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_Clear_m939246206_MethodInfo_var;
extern const uint32_t ProtoReader_Dispose_m2692653075_MetadataUsageId;
extern "C"  void ProtoReader_Dispose_m2692653075 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_Dispose_m2692653075_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		__this->set_source_0((Stream_t3255436806 *)NULL);
		__this->set_model_2((TypeModel_t653695305 *)NULL);
		ByteU5BU5D_t3397334013** L_0 = __this->get_address_of_ioBuffer_1();
		IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
		BufferPool_ReleaseBufferToPool_m2010456868(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Dictionary_2_t3943999495 * L_1 = __this->get_stringInterner_16();
		V_0 = (bool)((((Il2CppObject*)(Dictionary_2_t3943999495 *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t3943999495 * L_3 = __this->get_stringInterner_16();
		NullCheck(L_3);
		Dictionary_2_Clear_m939246206(L_3, /*hidden argument*/Dictionary_2_Clear_m939246206_MethodInfo_var);
	}

IL_0034:
	{
		NetObjectCache_t2620415644 * L_4 = __this->get_netCache_13();
		V_0 = (bool)((((Il2CppObject*)(NetObjectCache_t2620415644 *)L_4) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_004d;
		}
	}
	{
		NetObjectCache_t2620415644 * L_6 = __this->get_netCache_13();
		NullCheck(L_6);
		NetObjectCache_Clear_m2607687186(L_6, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}
}
// System.Int32 ProtoBuf.ProtoReader::TryReadUInt32VariantWithoutMoving(System.Boolean,System.UInt32&)
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern Il2CppClass* OverflowException_t1075868493_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_TryReadUInt32VariantWithoutMoving_m2359963158_MetadataUsageId;
extern "C"  int32_t ProtoReader_TryReadUInt32VariantWithoutMoving_m2359963158 (ProtoReader_t3981212867 * __this, bool ___trimNegative0, uint32_t* ___value1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_TryReadUInt32VariantWithoutMoving_m2359963158_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B31_0 = 0;
	{
		int32_t L_0 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)((int32_t)10)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		ProtoReader_Ensure_m3820397798(__this, ((int32_t)10), (bool)0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		int32_t L_2 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		uint32_t* L_4 = ___value1;
		*((int32_t*)(L_4)) = (int32_t)0;
		V_2 = 0;
		goto IL_0217;
	}

IL_0037:
	{
		int32_t L_5 = __this->get_ioIndex_6();
		V_0 = L_5;
		uint32_t* L_6 = ___value1;
		ByteU5BU5D_t3397334013* L_7 = __this->get_ioBuffer_1();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_9);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*((int32_t*)(L_6)) = (int32_t)L_11;
		uint32_t* L_12 = ___value1;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)(*((uint32_t*)L_12))&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		V_2 = 1;
		goto IL_0217;
	}

IL_0065:
	{
		uint32_t* L_14 = ___value1;
		uint32_t* L_15 = L_14;
		*((int32_t*)(L_15)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_15))&(int32_t)((int32_t)127)));
		int32_t L_16 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_0083;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_18 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18);
	}

IL_0083:
	{
		ByteU5BU5D_t3397334013* L_19 = __this->get_ioBuffer_1();
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_21);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_1 = L_23;
		uint32_t* L_24 = ___value1;
		uint32_t* L_25 = L_24;
		uint32_t L_26 = V_1;
		*((int32_t*)(L_25)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_25))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_26&(int32_t)((int32_t)127)))<<(int32_t)7))));
		uint32_t L_27 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (L_28)
		{
			goto IL_00b3;
		}
	}
	{
		V_2 = 2;
		goto IL_0217;
	}

IL_00b3:
	{
		int32_t L_29 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_29) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00ca;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_31 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31);
	}

IL_00ca:
	{
		ByteU5BU5D_t3397334013* L_32 = __this->get_ioBuffer_1();
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		V_0 = ((int32_t)((int32_t)L_34+(int32_t)1));
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_34);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_1 = L_36;
		uint32_t* L_37 = ___value1;
		uint32_t* L_38 = L_37;
		uint32_t L_39 = V_1;
		*((int32_t*)(L_38)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_38))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)14)))));
		uint32_t L_40 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_40&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_3;
		if (L_41)
		{
			goto IL_00fb;
		}
	}
	{
		V_2 = 3;
		goto IL_0217;
	}

IL_00fb:
	{
		int32_t L_42 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_42) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (L_43)
		{
			goto IL_0112;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_44 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44);
	}

IL_0112:
	{
		ByteU5BU5D_t3397334013* L_45 = __this->get_ioBuffer_1();
		int32_t L_46 = V_0;
		int32_t L_47 = L_46;
		V_0 = ((int32_t)((int32_t)L_47+(int32_t)1));
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_47);
		int32_t L_48 = L_47;
		uint8_t L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_1 = L_49;
		uint32_t* L_50 = ___value1;
		uint32_t* L_51 = L_50;
		uint32_t L_52 = V_1;
		*((int32_t*)(L_51)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_51))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_52&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)21)))));
		uint32_t L_53 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_3;
		if (L_54)
		{
			goto IL_0143;
		}
	}
	{
		V_2 = 4;
		goto IL_0217;
	}

IL_0143:
	{
		int32_t L_55 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_55) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_3;
		if (L_56)
		{
			goto IL_015a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_57 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57);
	}

IL_015a:
	{
		ByteU5BU5D_t3397334013* L_58 = __this->get_ioBuffer_1();
		int32_t L_59 = V_0;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = L_59;
		uint8_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_1 = L_61;
		uint32_t* L_62 = ___value1;
		uint32_t* L_63 = L_62;
		uint32_t L_64 = V_1;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_63))|(int32_t)((int32_t)((int32_t)L_64<<(int32_t)((int32_t)28)))));
		uint32_t L_65 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_65&(int32_t)((int32_t)240)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_3;
		if (L_66)
		{
			goto IL_0184;
		}
	}
	{
		V_2 = 5;
		goto IL_0217;
	}

IL_0184:
	{
		bool L_67 = ___trimNegative0;
		if (!L_67)
		{
			goto IL_01ff;
		}
	}
	{
		uint32_t L_68 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_68&(int32_t)((int32_t)240)))) == ((uint32_t)((int32_t)240)))))
		{
			goto IL_01ff;
		}
	}
	{
		int32_t L_69 = __this->get_available_8();
		if ((((int32_t)L_69) < ((int32_t)((int32_t)10))))
		{
			goto IL_01ff;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_70 = __this->get_ioBuffer_1();
		int32_t L_71 = V_0;
		int32_t L_72 = ((int32_t)((int32_t)L_71+(int32_t)1));
		V_0 = L_72;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_72);
		int32_t L_73 = L_72;
		uint8_t L_74 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_01ff;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_75 = __this->get_ioBuffer_1();
		int32_t L_76 = V_0;
		int32_t L_77 = ((int32_t)((int32_t)L_76+(int32_t)1));
		V_0 = L_77;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, L_77);
		int32_t L_78 = L_77;
		uint8_t L_79 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		if ((!(((uint32_t)L_79) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_01ff;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_80 = __this->get_ioBuffer_1();
		int32_t L_81 = V_0;
		int32_t L_82 = ((int32_t)((int32_t)L_81+(int32_t)1));
		V_0 = L_82;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, L_82);
		int32_t L_83 = L_82;
		uint8_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_01ff;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_85 = __this->get_ioBuffer_1();
		int32_t L_86 = V_0;
		int32_t L_87 = ((int32_t)((int32_t)L_86+(int32_t)1));
		V_0 = L_87;
		NullCheck(L_85);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_85, L_87);
		int32_t L_88 = L_87;
		uint8_t L_89 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_01ff;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_90 = __this->get_ioBuffer_1();
		int32_t L_91 = V_0;
		int32_t L_92 = ((int32_t)((int32_t)L_91+(int32_t)1));
		V_0 = L_92;
		NullCheck(L_90);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_90, L_92);
		int32_t L_93 = L_92;
		uint8_t L_94 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		G_B31_0 = ((((int32_t)((((int32_t)L_94) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0200;
	}

IL_01ff:
	{
		G_B31_0 = 1;
	}

IL_0200:
	{
		V_3 = (bool)G_B31_0;
		bool L_95 = V_3;
		if (L_95)
		{
			goto IL_020b;
		}
	}
	{
		V_2 = ((int32_t)10);
		goto IL_0217;
	}

IL_020b:
	{
		OverflowException_t1075868493 * L_96 = (OverflowException_t1075868493 *)il2cpp_codegen_object_new(OverflowException_t1075868493_il2cpp_TypeInfo_var);
		OverflowException__ctor_m2564269836(L_96, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_97 = ProtoReader_AddErrorData_m129176144(NULL /*static, unused*/, L_96, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_97);
	}

IL_0217:
	{
		int32_t L_98 = V_2;
		return L_98;
	}
}
// System.UInt32 ProtoBuf.ProtoReader::ReadUInt32Variant(System.Boolean)
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_ReadUInt32Variant_m4006296578_MetadataUsageId;
extern "C"  uint32_t ProtoReader_ReadUInt32Variant_m4006296578 (ProtoReader_t3981212867 * __this, bool ___trimNegative0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_ReadUInt32Variant_m4006296578_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	{
		bool L_0 = ___trimNegative0;
		int32_t L_1 = ProtoReader_TryReadUInt32VariantWithoutMoving_m2359963158(__this, L_0, (&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (L_3)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_4 = __this->get_ioIndex_6();
		int32_t L_5 = V_1;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_4+(int32_t)L_5)));
		int32_t L_6 = __this->get_available_8();
		int32_t L_7 = V_1;
		__this->set_available_8(((int32_t)((int32_t)L_6-(int32_t)L_7)));
		int32_t L_8 = __this->get_position_7();
		int32_t L_9 = V_1;
		__this->set_position_7(((int32_t)((int32_t)L_8+(int32_t)L_9)));
		uint32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_004c;
	}

IL_0045:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_11 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}

IL_004c:
	{
		uint32_t L_12 = V_2;
		return L_12;
	}
}
// System.Boolean ProtoBuf.ProtoReader::TryReadUInt32Variant(System.UInt32&)
extern "C"  bool ProtoReader_TryReadUInt32Variant_m2525409099 (ProtoReader_t3981212867 * __this, uint32_t* ___value0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		uint32_t* L_0 = ___value0;
		int32_t L_1 = ProtoReader_TryReadUInt32VariantWithoutMoving_m2359963158(__this, (bool)0, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_4 = __this->get_ioIndex_6();
		int32_t L_5 = V_0;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_4+(int32_t)L_5)));
		int32_t L_6 = __this->get_available_8();
		int32_t L_7 = V_0;
		__this->set_available_8(((int32_t)((int32_t)L_6-(int32_t)L_7)));
		int32_t L_8 = __this->get_position_7();
		int32_t L_9 = V_0;
		__this->set_position_7(((int32_t)((int32_t)L_8+(int32_t)L_9)));
		V_1 = (bool)1;
		goto IL_0048;
	}

IL_0044:
	{
		V_1 = (bool)0;
		goto IL_0048;
	}

IL_0048:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
// System.UInt32 ProtoBuf.ProtoReader::ReadUInt32()
extern "C"  uint32_t ProtoReader_ReadUInt32_m164356528 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_wireType_10();
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (L_1 == 0)
		{
			goto IL_001f;
		}
		if (L_1 == 1)
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_00e4;
	}

IL_001f:
	{
		uint32_t L_3 = ProtoReader_ReadUInt32Variant_m4006296578(__this, (bool)0, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_00eb;
	}

IL_002c:
	{
		int32_t L_4 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		ProtoReader_Ensure_m3820397798(__this, 4, (bool)1, /*hidden argument*/NULL);
	}

IL_0045:
	{
		int32_t L_6 = __this->get_position_7();
		__this->set_position_7(((int32_t)((int32_t)L_6+(int32_t)4)));
		int32_t L_7 = __this->get_available_8();
		__this->set_available_8(((int32_t)((int32_t)L_7-(int32_t)4)));
		ByteU5BU5D_t3397334013* L_8 = __this->get_ioBuffer_1();
		int32_t L_9 = __this->get_ioIndex_6();
		int32_t L_10 = L_9;
		V_4 = L_10;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_10+(int32_t)1)));
		int32_t L_11 = V_4;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_11);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_t3397334013* L_14 = __this->get_ioBuffer_1();
		int32_t L_15 = __this->get_ioIndex_6();
		int32_t L_16 = L_15;
		V_4 = L_16;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = V_4;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_17);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_t3397334013* L_20 = __this->get_ioBuffer_1();
		int32_t L_21 = __this->get_ioIndex_6();
		int32_t L_22 = L_21;
		V_4 = L_22;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_22+(int32_t)1)));
		int32_t L_23 = V_4;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_23);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ByteU5BU5D_t3397334013* L_26 = __this->get_ioBuffer_1();
		int32_t L_27 = __this->get_ioIndex_6();
		int32_t L_28 = L_27;
		V_4 = L_28;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_28+(int32_t)1)));
		int32_t L_29 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_29);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)((int32_t)L_19<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_25<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_31<<(int32_t)((int32_t)24)))));
		goto IL_00eb;
	}

IL_00d7:
	{
		uint64_t L_32 = ProtoReader_ReadUInt64_m3682925282(__this, /*hidden argument*/NULL);
		V_0 = L_32;
		uint64_t L_33 = V_0;
		if ((uint64_t)(L_33) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_1 = (((uint32_t)((uint32_t)L_33)));
		goto IL_00eb;
	}

IL_00e4:
	{
		Exception_t1927440687 * L_34 = ProtoReader_CreateWireTypeException_m126645285(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34);
	}

IL_00eb:
	{
		uint32_t L_35 = V_1;
		return L_35;
	}
}
// System.Void ProtoBuf.ProtoReader::Ensure(System.Int32,System.Boolean)
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* BufferPool_t710398810_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2665897584;
extern const uint32_t ProtoReader_Ensure_m3820397798_MetadataUsageId;
extern "C"  void ProtoReader_Ensure_m3820397798 (ProtoReader_t3981212867 * __this, int32_t ___count0, bool ___strict1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_Ensure_m3820397798_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B16_0 = 0;
	int32_t G_B20_0 = 0;
	{
		int32_t L_0 = __this->get_available_8();
		int32_t L_1 = ___count0;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_DebugAssert_m3547493310(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2665897584, /*hidden argument*/NULL);
		int32_t L_2 = ___count0;
		ByteU5BU5D_t3397334013* L_3 = __this->get_ioBuffer_1();
		NullCheck(L_3);
		V_3 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (L_4)
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_t3397334013** L_5 = __this->get_address_of_ioBuffer_1();
		int32_t L_6 = ___count0;
		int32_t L_7 = __this->get_ioIndex_6();
		int32_t L_8 = __this->get_available_8();
		IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
		BufferPool_ResizeAndFlushLeft_m3855590401(NULL /*static, unused*/, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->set_ioIndex_6(0);
		goto IL_008c;
	}

IL_004e:
	{
		int32_t L_9 = __this->get_ioIndex_6();
		int32_t L_10 = ___count0;
		ByteU5BU5D_t3397334013* L_11 = __this->get_ioBuffer_1();
		NullCheck(L_11);
		V_3 = (bool)((((int32_t)((int32_t)((int32_t)L_9+(int32_t)L_10))) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_11)->max_length))))))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_008c;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_13 = __this->get_ioBuffer_1();
		int32_t L_14 = __this->get_ioIndex_6();
		ByteU5BU5D_t3397334013* L_15 = __this->get_ioBuffer_1();
		int32_t L_16 = __this->get_available_8();
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_BlockCopy_m2741176895(NULL /*static, unused*/, L_13, L_14, L_15, 0, L_16, /*hidden argument*/NULL);
		__this->set_ioIndex_6(0);
	}

IL_008c:
	{
		int32_t L_17 = ___count0;
		int32_t L_18 = __this->get_available_8();
		___count0 = ((int32_t)((int32_t)L_17-(int32_t)L_18));
		int32_t L_19 = __this->get_ioIndex_6();
		int32_t L_20 = __this->get_available_8();
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)L_20));
		ByteU5BU5D_t3397334013* L_21 = __this->get_ioBuffer_1();
		NullCheck(L_21);
		int32_t L_22 = V_0;
		V_2 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_21)->max_length))))-(int32_t)L_22));
		bool L_23 = __this->get_isFixedLength_11();
		V_3 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_25 = __this->get_dataRemaining_5();
		int32_t L_26 = V_2;
		V_3 = (bool)((((int32_t)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_28 = __this->get_dataRemaining_5();
		V_2 = L_28;
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		goto IL_0111;
	}

IL_00d7:
	{
		int32_t L_29 = __this->get_available_8();
		int32_t L_30 = V_1;
		__this->set_available_8(((int32_t)((int32_t)L_29+(int32_t)L_30)));
		int32_t L_31 = ___count0;
		int32_t L_32 = V_1;
		___count0 = ((int32_t)((int32_t)L_31-(int32_t)L_32));
		int32_t L_33 = V_2;
		int32_t L_34 = V_1;
		V_2 = ((int32_t)((int32_t)L_33-(int32_t)L_34));
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		V_0 = ((int32_t)((int32_t)L_35+(int32_t)L_36));
		bool L_37 = __this->get_isFixedLength_11();
		V_3 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_3;
		if (L_38)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_39 = __this->get_dataRemaining_5();
		int32_t L_40 = V_1;
		__this->set_dataRemaining_5(((int32_t)((int32_t)L_39-(int32_t)L_40)));
	}

IL_0110:
	{
	}

IL_0111:
	{
		int32_t L_41 = ___count0;
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_42 = V_2;
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_0133;
		}
	}
	{
		Stream_t3255436806 * L_43 = __this->get_source_0();
		ByteU5BU5D_t3397334013* L_44 = __this->get_ioBuffer_1();
		int32_t L_45 = V_0;
		int32_t L_46 = V_2;
		NullCheck(L_43);
		int32_t L_47 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_43, L_44, L_45, L_46);
		int32_t L_48 = L_47;
		V_1 = L_48;
		G_B16_0 = ((((int32_t)L_48) > ((int32_t)0))? 1 : 0);
		goto IL_0134;
	}

IL_0133:
	{
		G_B16_0 = 0;
	}

IL_0134:
	{
		V_3 = (bool)G_B16_0;
		bool L_49 = V_3;
		if (L_49)
		{
			goto IL_00d7;
		}
	}
	{
		bool L_50 = ___strict1;
		if (!L_50)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_51 = ___count0;
		G_B20_0 = ((((int32_t)((((int32_t)L_51) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B20_0 = 1;
	}

IL_0146:
	{
		V_3 = (bool)G_B20_0;
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0153;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_53 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53);
	}

IL_0153:
	{
		return;
	}
}
// System.Int16 ProtoBuf.ProtoReader::ReadInt16()
extern "C"  int16_t ProtoReader_ReadInt16_m90490090 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	int16_t V_0 = 0;
	{
		int32_t L_0 = ProtoReader_ReadInt32_m3141427562(__this, /*hidden argument*/NULL);
		if ((int64_t)(L_0) > 32767LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_0 = (((int16_t)((int16_t)L_0)));
		goto IL_000c;
	}

IL_000c:
	{
		int16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 ProtoBuf.ProtoReader::ReadUInt16()
extern "C"  uint16_t ProtoReader_ReadUInt16_m753475648 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	uint16_t V_0 = 0;
	{
		uint32_t L_0 = ProtoReader_ReadUInt32_m164356528(__this, /*hidden argument*/NULL);
		if ((uint64_t)(L_0) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_0 = (((uint16_t)((uint16_t)L_0)));
		goto IL_000c;
	}

IL_000c:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte ProtoBuf.ProtoReader::ReadByte()
extern "C"  uint8_t ProtoReader_ReadByte_m1928697362 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	uint8_t V_0 = 0x0;
	{
		uint32_t L_0 = ProtoReader_ReadUInt32_m164356528(__this, /*hidden argument*/NULL);
		if ((uint64_t)(L_0) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_0 = (((uint8_t)((uint8_t)L_0)));
		goto IL_000c;
	}

IL_000c:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.SByte ProtoBuf.ProtoReader::ReadSByte()
extern "C"  int8_t ProtoReader_ReadSByte_m2510620266 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	int8_t V_0 = 0x0;
	{
		int32_t L_0 = ProtoReader_ReadInt32_m3141427562(__this, /*hidden argument*/NULL);
		if ((int64_t)(L_0) > 127LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_0 = (((int8_t)((int8_t)L_0)));
		goto IL_000c;
	}

IL_000c:
	{
		int8_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ProtoBuf.ProtoReader::ReadInt32()
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_ReadInt32_m3141427562_MetadataUsageId;
extern "C"  int32_t ProtoReader_ReadInt32_m3141427562 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_ReadInt32_m3141427562_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_wireType_10();
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (L_1 == 0)
		{
			goto IL_0026;
		}
		if (L_1 == 1)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_00eb;
		}
	}
	{
		goto IL_00fa;
	}

IL_0026:
	{
		uint32_t L_4 = ProtoReader_ReadUInt32Variant_m4006296578(__this, (bool)1, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0101;
	}

IL_0033:
	{
		int32_t L_5 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		ProtoReader_Ensure_m3820397798(__this, 4, (bool)1, /*hidden argument*/NULL);
	}

IL_004c:
	{
		int32_t L_7 = __this->get_position_7();
		__this->set_position_7(((int32_t)((int32_t)L_7+(int32_t)4)));
		int32_t L_8 = __this->get_available_8();
		__this->set_available_8(((int32_t)((int32_t)L_8-(int32_t)4)));
		ByteU5BU5D_t3397334013* L_9 = __this->get_ioBuffer_1();
		int32_t L_10 = __this->get_ioIndex_6();
		int32_t L_11 = L_10;
		V_4 = L_11;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = V_4;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_12);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_t3397334013* L_15 = __this->get_ioBuffer_1();
		int32_t L_16 = __this->get_ioIndex_6();
		int32_t L_17 = L_16;
		V_4 = L_17;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_17+(int32_t)1)));
		int32_t L_18 = V_4;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_18);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_t3397334013* L_21 = __this->get_ioBuffer_1();
		int32_t L_22 = __this->get_ioIndex_6();
		int32_t L_23 = L_22;
		V_4 = L_23;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_23+(int32_t)1)));
		int32_t L_24 = V_4;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_24);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_t3397334013* L_27 = __this->get_ioBuffer_1();
		int32_t L_28 = __this->get_ioIndex_6();
		int32_t L_29 = L_28;
		V_4 = L_29;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_29+(int32_t)1)));
		int32_t L_30 = V_4;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_30);
		int32_t L_31 = L_30;
		uint8_t L_32 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_26<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_32<<(int32_t)((int32_t)24)))));
		goto IL_0101;
	}

IL_00de:
	{
		int64_t L_33 = ProtoReader_ReadInt64_m692900778(__this, /*hidden argument*/NULL);
		V_0 = L_33;
		int64_t L_34 = V_0;
		if ((int64_t)(L_34) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_1 = (((int32_t)((int32_t)L_34)));
		goto IL_0101;
	}

IL_00eb:
	{
		uint32_t L_35 = ProtoReader_ReadUInt32Variant_m4006296578(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		int32_t L_36 = ProtoReader_Zag_m2927009202(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		V_1 = L_36;
		goto IL_0101;
	}

IL_00fa:
	{
		Exception_t1927440687 * L_37 = ProtoReader_CreateWireTypeException_m126645285(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37);
	}

IL_0101:
	{
		int32_t L_38 = V_1;
		return L_38;
	}
}
// System.Int32 ProtoBuf.ProtoReader::Zag(System.UInt32)
extern "C"  int32_t ProtoReader_Zag_m2927009202 (Il2CppObject * __this /* static, unused */, uint32_t ___ziggedValue0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = ___ziggedValue0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)((-((int32_t)((int32_t)L_1&(int32_t)1))))^(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)1))&(int32_t)((int32_t)2147483647LL)))));
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Int64 ProtoBuf.ProtoReader::Zag(System.UInt64)
extern "C"  int64_t ProtoReader_Zag_m1701089650 (Il2CppObject * __this /* static, unused */, uint64_t ___ziggedValue0, const MethodInfo* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		uint64_t L_0 = ___ziggedValue0;
		V_0 = L_0;
		int64_t L_1 = V_0;
		int64_t L_2 = V_0;
		V_1 = ((int64_t)((int64_t)((-((int64_t)((int64_t)L_1&(int64_t)(((int64_t)((int64_t)1)))))))^(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_2>>(int32_t)1))&(int64_t)((int64_t)std::numeric_limits<int64_t>::max())))));
		goto IL_0019;
	}

IL_0019:
	{
		int64_t L_3 = V_1;
		return L_3;
	}
}
// System.Int64 ProtoBuf.ProtoReader::ReadInt64()
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_ReadInt64_m692900778_MetadataUsageId;
extern "C"  int64_t ProtoReader_ReadInt64_m692900778 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_ReadInt64_m692900778_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_wireType_10();
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_0026;
		}
		if (L_1 == 1)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_015a;
		}
	}
	{
		goto IL_0168;
	}

IL_0026:
	{
		uint64_t L_4 = ProtoReader_ReadUInt64Variant_m1591632565(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_016f;
	}

IL_0032:
	{
		int32_t L_5 = ProtoReader_ReadInt32_m3141427562(__this, /*hidden argument*/NULL);
		V_0 = (((int64_t)((int64_t)L_5)));
		goto IL_016f;
	}

IL_003f:
	{
		int32_t L_6 = __this->get_available_8();
		V_2 = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0058;
		}
	}
	{
		ProtoReader_Ensure_m3820397798(__this, 8, (bool)1, /*hidden argument*/NULL);
	}

IL_0058:
	{
		int32_t L_8 = __this->get_position_7();
		__this->set_position_7(((int32_t)((int32_t)L_8+(int32_t)8)));
		int32_t L_9 = __this->get_available_8();
		__this->set_available_8(((int32_t)((int32_t)L_9-(int32_t)8)));
		ByteU5BU5D_t3397334013* L_10 = __this->get_ioBuffer_1();
		int32_t L_11 = __this->get_ioIndex_6();
		int32_t L_12 = L_11;
		V_3 = L_12;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_12+(int32_t)1)));
		int32_t L_13 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_13);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_t3397334013* L_16 = __this->get_ioBuffer_1();
		int32_t L_17 = __this->get_ioIndex_6();
		int32_t L_18 = L_17;
		V_3 = L_18;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_18+(int32_t)1)));
		int32_t L_19 = V_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_19);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_t3397334013* L_22 = __this->get_ioBuffer_1();
		int32_t L_23 = __this->get_ioIndex_6();
		int32_t L_24 = L_23;
		V_3 = L_24;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_24+(int32_t)1)));
		int32_t L_25 = V_3;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_25);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_t3397334013* L_28 = __this->get_ioBuffer_1();
		int32_t L_29 = __this->get_ioIndex_6();
		int32_t L_30 = L_29;
		V_3 = L_30;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_30+(int32_t)1)));
		int32_t L_31 = V_3;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_31);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		ByteU5BU5D_t3397334013* L_34 = __this->get_ioBuffer_1();
		int32_t L_35 = __this->get_ioIndex_6();
		int32_t L_36 = L_35;
		V_3 = L_36;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_36+(int32_t)1)));
		int32_t L_37 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_37);
		int32_t L_38 = L_37;
		uint8_t L_39 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		ByteU5BU5D_t3397334013* L_40 = __this->get_ioBuffer_1();
		int32_t L_41 = __this->get_ioIndex_6();
		int32_t L_42 = L_41;
		V_3 = L_42;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_42+(int32_t)1)));
		int32_t L_43 = V_3;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_43);
		int32_t L_44 = L_43;
		uint8_t L_45 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_t3397334013* L_46 = __this->get_ioBuffer_1();
		int32_t L_47 = __this->get_ioIndex_6();
		int32_t L_48 = L_47;
		V_3 = L_48;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_48+(int32_t)1)));
		int32_t L_49 = V_3;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_49);
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		ByteU5BU5D_t3397334013* L_52 = __this->get_ioBuffer_1();
		int32_t L_53 = __this->get_ioIndex_6();
		int32_t L_54 = L_53;
		V_3 = L_54;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_54+(int32_t)1)));
		int32_t L_55 = V_3;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_55);
		int32_t L_56 = L_55;
		uint8_t L_57 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_15)))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_21)))<<(int32_t)8))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_27)))<<(int32_t)((int32_t)16)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_33)))<<(int32_t)((int32_t)24)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_39)))<<(int32_t)((int32_t)32)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_45)))<<(int32_t)((int32_t)40)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_51)))<<(int32_t)((int32_t)48)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_57)))<<(int32_t)((int32_t)56)))));
		goto IL_016f;
	}

IL_015a:
	{
		uint64_t L_58 = ProtoReader_ReadUInt64Variant_m1591632565(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		int64_t L_59 = ProtoReader_Zag_m1701089650(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		V_0 = L_59;
		goto IL_016f;
	}

IL_0168:
	{
		Exception_t1927440687 * L_60 = ProtoReader_CreateWireTypeException_m126645285(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60);
	}

IL_016f:
	{
		int64_t L_61 = V_0;
		return L_61;
	}
}
// System.Int32 ProtoBuf.ProtoReader::TryReadUInt64VariantWithoutMoving(System.UInt64&)
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern Il2CppClass* OverflowException_t1075868493_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_TryReadUInt64VariantWithoutMoving_m518594925_MetadataUsageId;
extern "C"  int32_t ProtoReader_TryReadUInt64VariantWithoutMoving_m518594925 (ProtoReader_t3981212867 * __this, uint64_t* ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_TryReadUInt64VariantWithoutMoving_m518594925_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)((int32_t)10)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		ProtoReader_Ensure_m3820397798(__this, ((int32_t)10), (bool)0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		int32_t L_2 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		uint64_t* L_4 = ___value0;
		*((int64_t*)(L_4)) = (int64_t)(((int64_t)((int64_t)0)));
		V_2 = 0;
		goto IL_0317;
	}

IL_0038:
	{
		int32_t L_5 = __this->get_ioIndex_6();
		V_0 = L_5;
		uint64_t* L_6 = ___value0;
		ByteU5BU5D_t3397334013* L_7 = __this->get_ioBuffer_1();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_9);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*((int64_t*)(L_6)) = (int64_t)(((int64_t)((uint64_t)L_11)));
		uint64_t* L_12 = ___value0;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)(*((int64_t*)L_12))&(int64_t)(((int64_t)((int64_t)((int32_t)128))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0069;
		}
	}
	{
		V_2 = 1;
		goto IL_0317;
	}

IL_0069:
	{
		uint64_t* L_14 = ___value0;
		uint64_t* L_15 = L_14;
		*((int64_t*)(L_15)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_15))&(int64_t)(((int64_t)((int64_t)((int32_t)127))))));
		int32_t L_16 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_0088;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_18 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18);
	}

IL_0088:
	{
		ByteU5BU5D_t3397334013* L_19 = __this->get_ioBuffer_1();
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_21);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_1 = (((int64_t)((uint64_t)L_23)));
		uint64_t* L_24 = ___value0;
		uint64_t* L_25 = L_24;
		uint64_t L_26 = V_1;
		*((int64_t*)(L_25)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_25))|(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_26&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))<<(int32_t)7))));
		uint64_t L_27 = V_1;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_27&(int64_t)(((int64_t)((int64_t)((int32_t)128))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (L_28)
		{
			goto IL_00bc;
		}
	}
	{
		V_2 = 2;
		goto IL_0317;
	}

IL_00bc:
	{
		int32_t L_29 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_29) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00d3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_31 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31);
	}

IL_00d3:
	{
		ByteU5BU5D_t3397334013* L_32 = __this->get_ioBuffer_1();
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		V_0 = ((int32_t)((int32_t)L_34+(int32_t)1));
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_34);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_1 = (((int64_t)((uint64_t)L_36)));
		uint64_t* L_37 = ___value0;
		uint64_t* L_38 = L_37;
		uint64_t L_39 = V_1;
		*((int64_t*)(L_38)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_38))|(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_39&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))<<(int32_t)((int32_t)14)))));
		uint64_t L_40 = V_1;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_40&(int64_t)(((int64_t)((int64_t)((int32_t)128))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_3;
		if (L_41)
		{
			goto IL_0108;
		}
	}
	{
		V_2 = 3;
		goto IL_0317;
	}

IL_0108:
	{
		int32_t L_42 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_42) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (L_43)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_44 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44);
	}

IL_011f:
	{
		ByteU5BU5D_t3397334013* L_45 = __this->get_ioBuffer_1();
		int32_t L_46 = V_0;
		int32_t L_47 = L_46;
		V_0 = ((int32_t)((int32_t)L_47+(int32_t)1));
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_47);
		int32_t L_48 = L_47;
		uint8_t L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_1 = (((int64_t)((uint64_t)L_49)));
		uint64_t* L_50 = ___value0;
		uint64_t* L_51 = L_50;
		uint64_t L_52 = V_1;
		*((int64_t*)(L_51)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_51))|(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_52&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))<<(int32_t)((int32_t)21)))));
		uint64_t L_53 = V_1;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_53&(int64_t)(((int64_t)((int64_t)((int32_t)128))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_3;
		if (L_54)
		{
			goto IL_0154;
		}
	}
	{
		V_2 = 4;
		goto IL_0317;
	}

IL_0154:
	{
		int32_t L_55 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_55) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_3;
		if (L_56)
		{
			goto IL_016b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_57 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57);
	}

IL_016b:
	{
		ByteU5BU5D_t3397334013* L_58 = __this->get_ioBuffer_1();
		int32_t L_59 = V_0;
		int32_t L_60 = L_59;
		V_0 = ((int32_t)((int32_t)L_60+(int32_t)1));
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_60);
		int32_t L_61 = L_60;
		uint8_t L_62 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_1 = (((int64_t)((uint64_t)L_62)));
		uint64_t* L_63 = ___value0;
		uint64_t* L_64 = L_63;
		uint64_t L_65 = V_1;
		*((int64_t*)(L_64)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_64))|(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_65&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))<<(int32_t)((int32_t)28)))));
		uint64_t L_66 = V_1;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_66&(int64_t)(((int64_t)((int64_t)((int32_t)128))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_67 = V_3;
		if (L_67)
		{
			goto IL_01a0;
		}
	}
	{
		V_2 = 5;
		goto IL_0317;
	}

IL_01a0:
	{
		int32_t L_68 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_68) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_69 = V_3;
		if (L_69)
		{
			goto IL_01b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_70 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_70);
	}

IL_01b7:
	{
		ByteU5BU5D_t3397334013* L_71 = __this->get_ioBuffer_1();
		int32_t L_72 = V_0;
		int32_t L_73 = L_72;
		V_0 = ((int32_t)((int32_t)L_73+(int32_t)1));
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_73);
		int32_t L_74 = L_73;
		uint8_t L_75 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_1 = (((int64_t)((uint64_t)L_75)));
		uint64_t* L_76 = ___value0;
		uint64_t* L_77 = L_76;
		uint64_t L_78 = V_1;
		*((int64_t*)(L_77)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_77))|(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_78&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))<<(int32_t)((int32_t)35)))));
		uint64_t L_79 = V_1;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_79&(int64_t)(((int64_t)((int64_t)((int32_t)128))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_3;
		if (L_80)
		{
			goto IL_01ec;
		}
	}
	{
		V_2 = 6;
		goto IL_0317;
	}

IL_01ec:
	{
		int32_t L_81 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_81) == ((int32_t)6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_3;
		if (L_82)
		{
			goto IL_0203;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_83 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83);
	}

IL_0203:
	{
		ByteU5BU5D_t3397334013* L_84 = __this->get_ioBuffer_1();
		int32_t L_85 = V_0;
		int32_t L_86 = L_85;
		V_0 = ((int32_t)((int32_t)L_86+(int32_t)1));
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, L_86);
		int32_t L_87 = L_86;
		uint8_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_1 = (((int64_t)((uint64_t)L_88)));
		uint64_t* L_89 = ___value0;
		uint64_t* L_90 = L_89;
		uint64_t L_91 = V_1;
		*((int64_t*)(L_90)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_90))|(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_91&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))<<(int32_t)((int32_t)42)))));
		uint64_t L_92 = V_1;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_92&(int64_t)(((int64_t)((int64_t)((int32_t)128))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_93 = V_3;
		if (L_93)
		{
			goto IL_0238;
		}
	}
	{
		V_2 = 7;
		goto IL_0317;
	}

IL_0238:
	{
		int32_t L_94 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_94) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_95 = V_3;
		if (L_95)
		{
			goto IL_024f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_96 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_96);
	}

IL_024f:
	{
		ByteU5BU5D_t3397334013* L_97 = __this->get_ioBuffer_1();
		int32_t L_98 = V_0;
		int32_t L_99 = L_98;
		V_0 = ((int32_t)((int32_t)L_99+(int32_t)1));
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, L_99);
		int32_t L_100 = L_99;
		uint8_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_1 = (((int64_t)((uint64_t)L_101)));
		uint64_t* L_102 = ___value0;
		uint64_t* L_103 = L_102;
		uint64_t L_104 = V_1;
		*((int64_t*)(L_103)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_103))|(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_104&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))<<(int32_t)((int32_t)49)))));
		uint64_t L_105 = V_1;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_105&(int64_t)(((int64_t)((int64_t)((int32_t)128))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_106 = V_3;
		if (L_106)
		{
			goto IL_0284;
		}
	}
	{
		V_2 = 8;
		goto IL_0317;
	}

IL_0284:
	{
		int32_t L_107 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_107) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_3;
		if (L_108)
		{
			goto IL_029b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_109 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_109);
	}

IL_029b:
	{
		ByteU5BU5D_t3397334013* L_110 = __this->get_ioBuffer_1();
		int32_t L_111 = V_0;
		int32_t L_112 = L_111;
		V_0 = ((int32_t)((int32_t)L_112+(int32_t)1));
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, L_112);
		int32_t L_113 = L_112;
		uint8_t L_114 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_1 = (((int64_t)((uint64_t)L_114)));
		uint64_t* L_115 = ___value0;
		uint64_t* L_116 = L_115;
		uint64_t L_117 = V_1;
		*((int64_t*)(L_116)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_116))|(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_117&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))<<(int32_t)((int32_t)56)))));
		uint64_t L_118 = V_1;
		V_3 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_118&(int64_t)(((int64_t)((int64_t)((int32_t)128))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_119 = V_3;
		if (L_119)
		{
			goto IL_02ce;
		}
	}
	{
		V_2 = ((int32_t)9);
		goto IL_0317;
	}

IL_02ce:
	{
		int32_t L_120 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_120) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_121 = V_3;
		if (L_121)
		{
			goto IL_02e6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_122 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_122);
	}

IL_02e6:
	{
		ByteU5BU5D_t3397334013* L_123 = __this->get_ioBuffer_1();
		int32_t L_124 = V_0;
		NullCheck(L_123);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_123, L_124);
		int32_t L_125 = L_124;
		uint8_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		V_1 = (((int64_t)((uint64_t)L_126)));
		uint64_t* L_127 = ___value0;
		uint64_t* L_128 = L_127;
		uint64_t L_129 = V_1;
		*((int64_t*)(L_128)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_128))|(int64_t)((int64_t)((int64_t)L_129<<(int32_t)((int32_t)63)))));
		uint64_t L_130 = V_1;
		V_3 = (bool)((((int64_t)((int64_t)((int64_t)L_130&(int64_t)(((int64_t)((int64_t)((int32_t)-2))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_131 = V_3;
		if (L_131)
		{
			goto IL_0312;
		}
	}
	{
		OverflowException_t1075868493 * L_132 = (OverflowException_t1075868493 *)il2cpp_codegen_object_new(OverflowException_t1075868493_il2cpp_TypeInfo_var);
		OverflowException__ctor_m2564269836(L_132, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_133 = ProtoReader_AddErrorData_m129176144(NULL /*static, unused*/, L_132, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_133);
	}

IL_0312:
	{
		V_2 = ((int32_t)10);
		goto IL_0317;
	}

IL_0317:
	{
		int32_t L_134 = V_2;
		return L_134;
	}
}
// System.UInt64 ProtoBuf.ProtoReader::ReadUInt64Variant()
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_ReadUInt64Variant_m1591632565_MetadataUsageId;
extern "C"  uint64_t ProtoReader_ReadUInt64Variant_m1591632565 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_ReadUInt64Variant_m1591632565_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	{
		int32_t L_0 = ProtoReader_TryReadUInt64VariantWithoutMoving_m518594925(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (L_2)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_3 = __this->get_ioIndex_6();
		int32_t L_4 = V_1;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_3+(int32_t)L_4)));
		int32_t L_5 = __this->get_available_8();
		int32_t L_6 = V_1;
		__this->set_available_8(((int32_t)((int32_t)L_5-(int32_t)L_6)));
		int32_t L_7 = __this->get_position_7();
		int32_t L_8 = V_1;
		__this->set_position_7(((int32_t)((int32_t)L_7+(int32_t)L_8)));
		uint64_t L_9 = V_0;
		V_2 = L_9;
		goto IL_004b;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_10 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_004b:
	{
		uint64_t L_11 = V_2;
		return L_11;
	}
}
// System.String ProtoBuf.ProtoReader::Intern(System.String)
extern Il2CppClass* Dictionary_2_t3943999495_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2056970961_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Add_m2773471257_MethodInfo_var;
extern const MethodInfo* Dictionary_2_TryGetValue_m2637990824_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral371857150;
extern const uint32_t ProtoReader_Intern_m2746628073_MetadataUsageId;
extern "C"  String_t* ProtoReader_Intern_m2746628073 (ProtoReader_t3981212867 * __this, String_t* ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_Intern_m2746628073_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		String_t* L_0 = ___value0;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(String_t*)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		V_1 = (String_t*)NULL;
		goto IL_0085;
	}

IL_0010:
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1606060069(L_2, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		V_1 = _stringLiteral371857150;
		goto IL_0085;
	}

IL_0028:
	{
		Dictionary_2_t3943999495 * L_5 = __this->get_stringInterner_16();
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(Dictionary_2_t3943999495 *)L_5) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		Dictionary_2_t3943999495 * L_7 = (Dictionary_2_t3943999495 *)il2cpp_codegen_object_new(Dictionary_2_t3943999495_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2056970961(L_7, /*hidden argument*/Dictionary_2__ctor_m2056970961_MethodInfo_var);
		__this->set_stringInterner_16(L_7);
		Dictionary_2_t3943999495 * L_8 = __this->get_stringInterner_16();
		String_t* L_9 = ___value0;
		String_t* L_10 = ___value0;
		NullCheck(L_8);
		Dictionary_2_Add_m2773471257(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m2773471257_MethodInfo_var);
		goto IL_0081;
	}

IL_0055:
	{
		Dictionary_2_t3943999495 * L_11 = __this->get_stringInterner_16();
		String_t* L_12 = ___value0;
		NullCheck(L_11);
		bool L_13 = Dictionary_2_TryGetValue_m2637990824(L_11, L_12, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2637990824_MethodInfo_var);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_15 = V_0;
		___value0 = L_15;
		goto IL_0081;
	}

IL_0071:
	{
		Dictionary_2_t3943999495 * L_16 = __this->get_stringInterner_16();
		String_t* L_17 = ___value0;
		String_t* L_18 = ___value0;
		NullCheck(L_16);
		Dictionary_2_Add_m2773471257(L_16, L_17, L_18, /*hidden argument*/Dictionary_2_Add_m2773471257_MethodInfo_var);
	}

IL_0081:
	{
		String_t* L_19 = ___value0;
		V_1 = L_19;
		goto IL_0085;
	}

IL_0085:
	{
		String_t* L_20 = V_1;
		return L_20;
	}
}
// System.String ProtoBuf.ProtoReader::ReadString()
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral371857150;
extern const uint32_t ProtoReader_ReadString_m1117385000_MetadataUsageId;
extern "C"  String_t* ProtoReader_ReadString_m1117385000 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_ReadString_m1117385000_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_wireType_10();
		V_3 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_00a6;
		}
	}
	{
		uint32_t L_2 = ProtoReader_ReadUInt32Variant_m4006296578(__this, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		V_2 = _stringLiteral371857150;
		goto IL_00ad;
	}

IL_0030:
	{
		int32_t L_5 = __this->get_available_8();
		int32_t L_6 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = V_0;
		ProtoReader_Ensure_m3820397798(__this, L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		UTF8Encoding_t111055448 * L_9 = ((ProtoReader_t3981212867_StaticFields*)ProtoReader_t3981212867_il2cpp_TypeInfo_var->static_fields)->get_encoding_17();
		ByteU5BU5D_t3397334013* L_10 = __this->get_ioBuffer_1();
		int32_t L_11 = __this->get_ioIndex_6();
		int32_t L_12 = V_0;
		NullCheck(L_9);
		String_t* L_13 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, L_11, L_12);
		V_1 = L_13;
		bool L_14 = __this->get_internStrings_12();
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0078;
		}
	}
	{
		String_t* L_16 = V_1;
		String_t* L_17 = ProtoReader_Intern_m2746628073(__this, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
	}

IL_0078:
	{
		int32_t L_18 = __this->get_available_8();
		int32_t L_19 = V_0;
		__this->set_available_8(((int32_t)((int32_t)L_18-(int32_t)L_19)));
		int32_t L_20 = __this->get_position_7();
		int32_t L_21 = V_0;
		__this->set_position_7(((int32_t)((int32_t)L_20+(int32_t)L_21)));
		int32_t L_22 = __this->get_ioIndex_6();
		int32_t L_23 = V_0;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_22+(int32_t)L_23)));
		String_t* L_24 = V_1;
		V_2 = L_24;
		goto IL_00ad;
	}

IL_00a6:
	{
		Exception_t1927440687 * L_25 = ProtoReader_CreateWireTypeException_m126645285(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25);
	}

IL_00ad:
	{
		String_t* L_26 = V_2;
		return L_26;
	}
}
// System.Exception ProtoBuf.ProtoReader::CreateWireTypeException()
extern Il2CppCodeGenString* _stringLiteral277818230;
extern const uint32_t ProtoReader_CreateWireTypeException_m126645285_MetadataUsageId;
extern "C"  Exception_t1927440687 * ProtoReader_CreateWireTypeException_m126645285 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_CreateWireTypeException_m126645285_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t1927440687 * V_0 = NULL;
	{
		Exception_t1927440687 * L_0 = ProtoReader_CreateException_m4218353480(__this, _stringLiteral277818230, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000f;
	}

IL_000f:
	{
		Exception_t1927440687 * L_1 = V_0;
		return L_1;
	}
}
// System.Exception ProtoBuf.ProtoReader::CreateException(System.String)
extern Il2CppClass* ProtoException_t1712273663_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_CreateException_m4218353480_MetadataUsageId;
extern "C"  Exception_t1927440687 * ProtoReader_CreateException_m4218353480 (ProtoReader_t3981212867 * __this, String_t* ___message0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_CreateException_m4218353480_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t1927440687 * V_0 = NULL;
	{
		String_t* L_0 = ___message0;
		ProtoException_t1712273663 * L_1 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_2 = ProtoReader_AddErrorData_m129176144(NULL /*static, unused*/, L_1, __this, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Exception_t1927440687 * L_3 = V_0;
		return L_3;
	}
}
// System.Double ProtoBuf.ProtoReader::ReadDouble()
extern Il2CppClass* BitConverter_t3195628829_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_ReadDouble_m3134621416_MetadataUsageId;
extern "C"  double ProtoReader_ReadDouble_m3134621416 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_ReadDouble_m3134621416_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_wireType_10();
		V_2 = L_0;
		int32_t L_1 = V_2;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0032;
	}

IL_0012:
	{
		float L_3 = ProtoReader_ReadSingle_m1700471570(__this, /*hidden argument*/NULL);
		V_1 = (((double)((double)L_3)));
		goto IL_0039;
	}

IL_001c:
	{
		int64_t L_4 = ProtoReader_ReadInt64_m692900778(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int64_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3195628829_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_6 = BitConverter_GetBytes_m2282078441(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		double L_7 = BitConverter_ToDouble_m4124699541(NULL /*static, unused*/, L_6, 0, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0039;
	}

IL_0032:
	{
		Exception_t1927440687 * L_8 = ProtoReader_CreateWireTypeException_m126645285(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_0039:
	{
		double L_9 = V_1;
		return L_9;
	}
}
// System.Void ProtoBuf.ProtoReader::EndSubItem(ProtoBuf.SubItemToken,ProtoBuf.ProtoReader)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral51169761;
extern Il2CppCodeGenString* _stringLiteral1601805951;
extern Il2CppCodeGenString* _stringLiteral1855088423;
extern Il2CppCodeGenString* _stringLiteral1737587677;
extern Il2CppCodeGenString* _stringLiteral1721841084;
extern const uint32_t ProtoReader_EndSubItem_m1622745011_MetadataUsageId;
extern "C"  void ProtoReader_EndSubItem_m1622745011 (Il2CppObject * __this /* static, unused */, SubItemToken_t3722101296  ___token0, ProtoReader_t3981212867 * ___reader1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_EndSubItem_m1622745011_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B14_0 = 0;
	{
		ProtoReader_t3981212867 * L_0 = ___reader1;
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(ProtoReader_t3981212867 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral51169761, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = (&___token0)->get_value_0();
		V_0 = L_3;
		ProtoReader_t3981212867 * L_4 = ___reader1;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_wireType_10();
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0076;
	}

IL_002c:
	{
		int32_t L_7 = V_0;
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_t3259014390 * L_9 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_9, _stringLiteral1601805951, /*hidden argument*/NULL);
		ProtoReader_t3981212867 * L_10 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_11 = ProtoReader_AddErrorData_m129176144(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}

IL_0045:
	{
		int32_t L_12 = V_0;
		ProtoReader_t3981212867 * L_13 = ___reader1;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_fieldNumber_3();
		V_1 = (bool)((((int32_t)((-L_12))) == ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_005f;
		}
	}
	{
		ProtoReader_t3981212867 * L_16 = ___reader1;
		NullCheck(L_16);
		Exception_t1927440687 * L_17 = ProtoReader_CreateException_m4218353480(L_16, _stringLiteral1855088423, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_005f:
	{
		ProtoReader_t3981212867 * L_18 = ___reader1;
		NullCheck(L_18);
		L_18->set_wireType_10((-1));
		ProtoReader_t3981212867 * L_19 = ___reader1;
		ProtoReader_t3981212867 * L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_depth_4();
		NullCheck(L_20);
		L_20->set_depth_4(((int32_t)((int32_t)L_21-(int32_t)1)));
		goto IL_00d9;
	}

IL_0076:
	{
		int32_t L_22 = V_0;
		ProtoReader_t3981212867 * L_23 = ___reader1;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_position_7();
		V_1 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_0092;
		}
	}
	{
		ProtoReader_t3981212867 * L_26 = ___reader1;
		NullCheck(L_26);
		Exception_t1927440687 * L_27 = ProtoReader_CreateException_m4218353480(L_26, _stringLiteral1737587677, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27);
	}

IL_0092:
	{
		ProtoReader_t3981212867 * L_28 = ___reader1;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_blockEnd_9();
		ProtoReader_t3981212867 * L_30 = ___reader1;
		NullCheck(L_30);
		int32_t L_31 = L_30->get_position_7();
		if ((((int32_t)L_29) == ((int32_t)L_31)))
		{
			goto IL_00af;
		}
	}
	{
		ProtoReader_t3981212867 * L_32 = ___reader1;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_blockEnd_9();
		G_B14_0 = ((((int32_t)L_33) == ((int32_t)((int32_t)2147483647LL)))? 1 : 0);
		goto IL_00b0;
	}

IL_00af:
	{
		G_B14_0 = 1;
	}

IL_00b0:
	{
		V_1 = (bool)G_B14_0;
		bool L_34 = V_1;
		if (L_34)
		{
			goto IL_00c2;
		}
	}
	{
		ProtoReader_t3981212867 * L_35 = ___reader1;
		NullCheck(L_35);
		Exception_t1927440687 * L_36 = ProtoReader_CreateException_m4218353480(L_35, _stringLiteral1721841084, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36);
	}

IL_00c2:
	{
		ProtoReader_t3981212867 * L_37 = ___reader1;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		L_37->set_blockEnd_9(L_38);
		ProtoReader_t3981212867 * L_39 = ___reader1;
		ProtoReader_t3981212867 * L_40 = L_39;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_depth_4();
		NullCheck(L_40);
		L_40->set_depth_4(((int32_t)((int32_t)L_41-(int32_t)1)));
		goto IL_00d9;
	}

IL_00d9:
	{
		return;
	}
}
// ProtoBuf.SubItemToken ProtoBuf.ProtoReader::StartSubItem(ProtoBuf.ProtoReader)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* InvalidOperationException_t721527559_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral51169761;
extern const uint32_t ProtoReader_StartSubItem_m1950929655_MetadataUsageId;
extern "C"  SubItemToken_t3722101296  ProtoReader_StartSubItem_m1950929655 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___reader0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_StartSubItem_m1950929655_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SubItemToken_t3722101296  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		ProtoReader_t3981212867 * L_0 = ___reader0;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(ProtoReader_t3981212867 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral51169761, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoReader_t3981212867 * L_3 = ___reader0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_10();
		V_4 = L_4;
		int32_t L_5 = V_4;
		if (((int32_t)((int32_t)L_5-(int32_t)2)) == 0)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)2)) == 1)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00a1;
	}

IL_0032:
	{
		ProtoReader_t3981212867 * L_6 = ___reader0;
		NullCheck(L_6);
		L_6->set_wireType_10((-1));
		ProtoReader_t3981212867 * L_7 = ___reader0;
		ProtoReader_t3981212867 * L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_depth_4();
		NullCheck(L_8);
		L_8->set_depth_4(((int32_t)((int32_t)L_9+(int32_t)1)));
		ProtoReader_t3981212867 * L_10 = ___reader0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_fieldNumber_3();
		SubItemToken_t3722101296  L_12;
		memset(&L_12, 0, sizeof(L_12));
		SubItemToken__ctor_m1189156554(&L_12, ((-L_11)), /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_00a8;
	}

IL_0056:
	{
		ProtoReader_t3981212867 * L_13 = ___reader0;
		NullCheck(L_13);
		uint32_t L_14 = ProtoReader_ReadUInt32Variant_m4006296578(L_13, (bool)0, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0075;
		}
	}
	{
		InvalidOperationException_t721527559 * L_17 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m102359810(L_17, /*hidden argument*/NULL);
		ProtoReader_t3981212867 * L_18 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_19 = ProtoReader_AddErrorData_m129176144(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19);
	}

IL_0075:
	{
		ProtoReader_t3981212867 * L_20 = ___reader0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_blockEnd_9();
		V_1 = L_21;
		ProtoReader_t3981212867 * L_22 = ___reader0;
		ProtoReader_t3981212867 * L_23 = ___reader0;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_position_7();
		int32_t L_25 = V_0;
		NullCheck(L_22);
		L_22->set_blockEnd_9(((int32_t)((int32_t)L_24+(int32_t)L_25)));
		ProtoReader_t3981212867 * L_26 = ___reader0;
		ProtoReader_t3981212867 * L_27 = L_26;
		NullCheck(L_27);
		int32_t L_28 = L_27->get_depth_4();
		NullCheck(L_27);
		L_27->set_depth_4(((int32_t)((int32_t)L_28+(int32_t)1)));
		int32_t L_29 = V_1;
		SubItemToken_t3722101296  L_30;
		memset(&L_30, 0, sizeof(L_30));
		SubItemToken__ctor_m1189156554(&L_30, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		goto IL_00a8;
	}

IL_00a1:
	{
		ProtoReader_t3981212867 * L_31 = ___reader0;
		NullCheck(L_31);
		Exception_t1927440687 * L_32 = ProtoReader_CreateWireTypeException_m126645285(L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32);
	}

IL_00a8:
	{
		SubItemToken_t3722101296  L_33 = V_2;
		return L_33;
	}
}
// System.Int32 ProtoBuf.ProtoReader::ReadFieldHeader()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoException_t1712273663_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3250610095;
extern Il2CppCodeGenString* _stringLiteral2728214387;
extern const uint32_t ProtoReader_ReadFieldHeader_m3404319213_MetadataUsageId;
extern "C"  int32_t ProtoReader_ReadFieldHeader_m3404319213 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_ReadFieldHeader_m3404319213_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_blockEnd_9();
		int32_t L_1 = __this->get_position_7();
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = __this->get_wireType_10();
		G_B3_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		V_1 = 0;
		goto IL_00c4;
	}

IL_002b:
	{
		bool L_4 = ProtoReader_TryReadUInt32Variant_m2525409099(__this, (&V_0), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_007b;
		}
	}
	{
		uint32_t L_6 = V_0;
		__this->set_wireType_10(((int32_t)((int32_t)L_6&(int32_t)7)));
		uint32_t L_7 = V_0;
		__this->set_fieldNumber_3(((int32_t)((uint32_t)L_7>>3)));
		int32_t L_8 = __this->get_fieldNumber_3();
		V_2 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0078;
		}
	}
	{
		int32_t* L_10 = __this->get_address_of_fieldNumber_3();
		String_t* L_11 = Int32_ToString_m2960866144(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral3250610095, L_11, /*hidden argument*/NULL);
		ProtoException_t1712273663 * L_13 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13);
	}

IL_0078:
	{
		goto IL_008b;
	}

IL_007b:
	{
		__this->set_wireType_10((-1));
		__this->set_fieldNumber_3(0);
	}

IL_008b:
	{
		int32_t L_14 = __this->get_wireType_10();
		V_2 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_16 = __this->get_depth_4();
		V_2 = (bool)((((int32_t)((((int32_t)L_16) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_00b0;
		}
	}
	{
		V_1 = 0;
		goto IL_00c4;
	}

IL_00b0:
	{
		ProtoException_t1712273663 * L_18 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_18, _stringLiteral2728214387, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18);
	}

IL_00bb:
	{
		int32_t L_19 = __this->get_fieldNumber_3();
		V_1 = L_19;
		goto IL_00c4;
	}

IL_00c4:
	{
		int32_t L_20 = V_1;
		return L_20;
	}
}
// System.Void ProtoBuf.ProtoReader::Hint(ProtoBuf.WireType)
extern "C"  void ProtoReader_Hint_m4267750087 (ProtoReader_t3981212867 * __this, int32_t ___wireType0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_wireType_10();
		int32_t L_1 = ___wireType0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0030;
	}

IL_0015:
	{
		int32_t L_3 = ___wireType0;
		int32_t L_4 = __this->get_wireType_10();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)7))) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_6 = ___wireType0;
		__this->set_wireType_10(L_6);
	}

IL_0030:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoReader::Assert(ProtoBuf.WireType)
extern "C"  void ProtoReader_Assert_m1327183478 (ProtoReader_t3981212867 * __this, int32_t ___wireType0, const MethodInfo* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_wireType_10();
		int32_t L_1 = ___wireType0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_003a;
	}

IL_0015:
	{
		int32_t L_3 = ___wireType0;
		int32_t L_4 = __this->get_wireType_10();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)7))) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = ___wireType0;
		__this->set_wireType_10(L_6);
		goto IL_003a;
	}

IL_0032:
	{
		Exception_t1927440687 * L_7 = ProtoReader_CreateWireTypeException_m126645285(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_003a:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoReader::SkipField()
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_SkipField_m3666995751_MetadataUsageId;
extern "C"  void ProtoReader_SkipField_m3666995751 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_SkipField_m3666995751_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t G_B22_0 = 0;
	{
		int32_t L_0 = __this->get_wireType_10();
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)(-1))) == 0)
		{
			goto IL_01f6;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)(-1))) == 1)
		{
			goto IL_0184;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)(-1))) == 2)
		{
			goto IL_0085;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)(-1))) == 3)
		{
			goto IL_00cd;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)(-1))) == 4)
		{
			goto IL_018d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)(-1))) == 5)
		{
			goto IL_01f6;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)(-1))) == 6)
		{
			goto IL_003d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)(-1))) == 7)
		{
			goto IL_01f6;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)(-1))) == 8)
		{
			goto IL_01f6;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)(-1))) == 9)
		{
			goto IL_0184;
		}
	}
	{
		goto IL_01f6;
	}

IL_003d:
	{
		int32_t L_2 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (L_3)
		{
			goto IL_0056;
		}
	}
	{
		ProtoReader_Ensure_m3820397798(__this, 4, (bool)1, /*hidden argument*/NULL);
	}

IL_0056:
	{
		int32_t L_4 = __this->get_available_8();
		__this->set_available_8(((int32_t)((int32_t)L_4-(int32_t)4)));
		int32_t L_5 = __this->get_ioIndex_6();
		__this->set_ioIndex_6(((int32_t)((int32_t)L_5+(int32_t)4)));
		int32_t L_6 = __this->get_position_7();
		__this->set_position_7(((int32_t)((int32_t)L_6+(int32_t)4)));
		goto IL_01fd;
	}

IL_0085:
	{
		int32_t L_7 = __this->get_available_8();
		V_3 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (L_8)
		{
			goto IL_009e;
		}
	}
	{
		ProtoReader_Ensure_m3820397798(__this, 8, (bool)1, /*hidden argument*/NULL);
	}

IL_009e:
	{
		int32_t L_9 = __this->get_available_8();
		__this->set_available_8(((int32_t)((int32_t)L_9-(int32_t)8)));
		int32_t L_10 = __this->get_ioIndex_6();
		__this->set_ioIndex_6(((int32_t)((int32_t)L_10+(int32_t)8)));
		int32_t L_11 = __this->get_position_7();
		__this->set_position_7(((int32_t)((int32_t)L_11+(int32_t)8)));
		goto IL_01fd;
	}

IL_00cd:
	{
		uint32_t L_12 = ProtoReader_ReadUInt32Variant_m4006296578(__this, (bool)0, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		int32_t L_14 = __this->get_available_8();
		V_3 = (bool)((((int32_t)L_13) > ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_16 = __this->get_available_8();
		int32_t L_17 = V_0;
		__this->set_available_8(((int32_t)((int32_t)L_16-(int32_t)L_17)));
		int32_t L_18 = __this->get_ioIndex_6();
		int32_t L_19 = V_0;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_18+(int32_t)L_19)));
		int32_t L_20 = __this->get_position_7();
		int32_t L_21 = V_0;
		__this->set_position_7(((int32_t)((int32_t)L_20+(int32_t)L_21)));
		goto IL_01fd;
	}

IL_0112:
	{
		int32_t L_22 = __this->get_position_7();
		int32_t L_23 = V_0;
		__this->set_position_7(((int32_t)((int32_t)L_22+(int32_t)L_23)));
		int32_t L_24 = V_0;
		int32_t L_25 = __this->get_available_8();
		V_0 = ((int32_t)((int32_t)L_24-(int32_t)L_25));
		int32_t L_26 = 0;
		V_4 = L_26;
		__this->set_available_8(L_26);
		int32_t L_27 = V_4;
		__this->set_ioIndex_6(L_27);
		bool L_28 = __this->get_isFixedLength_11();
		V_3 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_3;
		if (L_29)
		{
			goto IL_016f;
		}
	}
	{
		int32_t L_30 = V_0;
		int32_t L_31 = __this->get_dataRemaining_5();
		V_3 = (bool)((((int32_t)((((int32_t)L_30) > ((int32_t)L_31))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_3;
		if (L_32)
		{
			goto IL_0160;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_33 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33);
	}

IL_0160:
	{
		int32_t L_34 = __this->get_dataRemaining_5();
		int32_t L_35 = V_0;
		__this->set_dataRemaining_5(((int32_t)((int32_t)L_34-(int32_t)L_35)));
	}

IL_016f:
	{
		Stream_t3255436806 * L_36 = __this->get_source_0();
		int32_t L_37 = V_0;
		ByteU5BU5D_t3397334013* L_38 = __this->get_ioBuffer_1();
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_Seek_m3046802941(NULL /*static, unused*/, L_36, L_37, L_38, /*hidden argument*/NULL);
		goto IL_01fd;
	}

IL_0184:
	{
		ProtoReader_ReadUInt64Variant_m1591632565(__this, /*hidden argument*/NULL);
		goto IL_01fd;
	}

IL_018d:
	{
		int32_t L_39 = __this->get_fieldNumber_3();
		V_1 = L_39;
		int32_t L_40 = __this->get_depth_4();
		__this->set_depth_4(((int32_t)((int32_t)L_40+(int32_t)1)));
		goto IL_01ad;
	}

IL_01a4:
	{
		ProtoReader_SkipField_m3666995751(__this, /*hidden argument*/NULL);
	}

IL_01ad:
	{
		int32_t L_41 = ProtoReader_ReadFieldHeader_m3404319213(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_41) > ((int32_t)0))? 1 : 0);
		bool L_42 = V_3;
		if (L_42)
		{
			goto IL_01a4;
		}
	}
	{
		int32_t L_43 = __this->get_depth_4();
		__this->set_depth_4(((int32_t)((int32_t)L_43-(int32_t)1)));
		int32_t L_44 = __this->get_wireType_10();
		if ((!(((uint32_t)L_44) == ((uint32_t)4))))
		{
			goto IL_01df;
		}
	}
	{
		int32_t L_45 = __this->get_fieldNumber_3();
		int32_t L_46 = V_1;
		G_B22_0 = ((((int32_t)((((int32_t)L_45) == ((int32_t)L_46))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01e0;
	}

IL_01df:
	{
		G_B22_0 = 1;
	}

IL_01e0:
	{
		V_3 = (bool)G_B22_0;
		bool L_47 = V_3;
		if (L_47)
		{
			goto IL_01ef;
		}
	}
	{
		__this->set_wireType_10((-1));
		goto IL_01fd;
	}

IL_01ef:
	{
		Exception_t1927440687 * L_48 = ProtoReader_CreateWireTypeException_m126645285(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48);
	}

IL_01f6:
	{
		Exception_t1927440687 * L_49 = ProtoReader_CreateWireTypeException_m126645285(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49);
	}

IL_01fd:
	{
		return;
	}
}
// System.UInt64 ProtoBuf.ProtoReader::ReadUInt64()
extern "C"  uint64_t ProtoReader_ReadUInt64_m3682925282 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_wireType_10();
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_001f;
		}
		if (L_1 == 1)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0153;
	}

IL_001f:
	{
		uint64_t L_3 = ProtoReader_ReadUInt64Variant_m1591632565(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_015a;
	}

IL_002b:
	{
		uint32_t L_4 = ProtoReader_ReadUInt32_m164356528(__this, /*hidden argument*/NULL);
		V_0 = (((int64_t)((uint64_t)L_4)));
		goto IL_015a;
	}

IL_0038:
	{
		int32_t L_5 = __this->get_available_8();
		V_2 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_0051;
		}
	}
	{
		ProtoReader_Ensure_m3820397798(__this, 8, (bool)1, /*hidden argument*/NULL);
	}

IL_0051:
	{
		int32_t L_7 = __this->get_position_7();
		__this->set_position_7(((int32_t)((int32_t)L_7+(int32_t)8)));
		int32_t L_8 = __this->get_available_8();
		__this->set_available_8(((int32_t)((int32_t)L_8-(int32_t)8)));
		ByteU5BU5D_t3397334013* L_9 = __this->get_ioBuffer_1();
		int32_t L_10 = __this->get_ioIndex_6();
		int32_t L_11 = L_10;
		V_3 = L_11;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_12);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_t3397334013* L_15 = __this->get_ioBuffer_1();
		int32_t L_16 = __this->get_ioIndex_6();
		int32_t L_17 = L_16;
		V_3 = L_17;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_17+(int32_t)1)));
		int32_t L_18 = V_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_18);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_t3397334013* L_21 = __this->get_ioBuffer_1();
		int32_t L_22 = __this->get_ioIndex_6();
		int32_t L_23 = L_22;
		V_3 = L_23;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_23+(int32_t)1)));
		int32_t L_24 = V_3;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_24);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_t3397334013* L_27 = __this->get_ioBuffer_1();
		int32_t L_28 = __this->get_ioIndex_6();
		int32_t L_29 = L_28;
		V_3 = L_29;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_29+(int32_t)1)));
		int32_t L_30 = V_3;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_30);
		int32_t L_31 = L_30;
		uint8_t L_32 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		ByteU5BU5D_t3397334013* L_33 = __this->get_ioBuffer_1();
		int32_t L_34 = __this->get_ioIndex_6();
		int32_t L_35 = L_34;
		V_3 = L_35;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = V_3;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_36);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_t3397334013* L_39 = __this->get_ioBuffer_1();
		int32_t L_40 = __this->get_ioIndex_6();
		int32_t L_41 = L_40;
		V_3 = L_41;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_41+(int32_t)1)));
		int32_t L_42 = V_3;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_42);
		int32_t L_43 = L_42;
		uint8_t L_44 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ByteU5BU5D_t3397334013* L_45 = __this->get_ioBuffer_1();
		int32_t L_46 = __this->get_ioIndex_6();
		int32_t L_47 = L_46;
		V_3 = L_47;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_47+(int32_t)1)));
		int32_t L_48 = V_3;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_48);
		int32_t L_49 = L_48;
		uint8_t L_50 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_t3397334013* L_51 = __this->get_ioBuffer_1();
		int32_t L_52 = __this->get_ioIndex_6();
		int32_t L_53 = L_52;
		V_3 = L_53;
		__this->set_ioIndex_6(((int32_t)((int32_t)L_53+(int32_t)1)));
		int32_t L_54 = V_3;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_54);
		int32_t L_55 = L_54;
		uint8_t L_56 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_14)))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_20)))<<(int32_t)8))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_26)))<<(int32_t)((int32_t)16)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_32)))<<(int32_t)((int32_t)24)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_38)))<<(int32_t)((int32_t)32)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_44)))<<(int32_t)((int32_t)40)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_50)))<<(int32_t)((int32_t)48)))))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_56)))<<(int32_t)((int32_t)56)))));
		goto IL_015a;
	}

IL_0153:
	{
		Exception_t1927440687 * L_57 = ProtoReader_CreateWireTypeException_m126645285(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57);
	}

IL_015a:
	{
		uint64_t L_58 = V_0;
		return L_58;
	}
}
// System.Single ProtoBuf.ProtoReader::ReadSingle()
extern Il2CppClass* BitConverter_t3195628829_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* OverflowException_t1075868493_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_ReadSingle_m1700471570_MetadataUsageId;
extern "C"  float ProtoReader_ReadSingle_m1700471570 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_ReadSingle_m1700471570_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = __this->get_wireType_10();
		V_4 = L_0;
		int32_t L_1 = V_4;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = V_4;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0060;
	}

IL_0015:
	{
		int32_t L_3 = ProtoReader_ReadInt32_m3141427562(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3195628829_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_5 = BitConverter_GetBytes_m1300847478(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		float L_6 = BitConverter_ToSingle_m159411893(NULL /*static, unused*/, L_5, 0, /*hidden argument*/NULL);
		V_3 = L_6;
		goto IL_0067;
	}

IL_002c:
	{
		double L_7 = ProtoReader_ReadDouble_m3134621416(__this, /*hidden argument*/NULL);
		V_1 = L_7;
		double L_8 = V_1;
		V_2 = (((float)((float)L_8)));
		float L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		bool L_10 = Helpers_IsInfinity_m517628195(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		double L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		bool L_12 = Helpers_IsInfinity_m1113709690(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 1;
	}

IL_0048:
	{
		V_5 = (bool)G_B7_0;
		bool L_13 = V_5;
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		OverflowException_t1075868493 * L_14 = (OverflowException_t1075868493 *)il2cpp_codegen_object_new(OverflowException_t1075868493_il2cpp_TypeInfo_var);
		OverflowException__ctor_m2564269836(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_15 = ProtoReader_AddErrorData_m129176144(NULL /*static, unused*/, L_14, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15);
	}

IL_005c:
	{
		float L_16 = V_2;
		V_3 = L_16;
		goto IL_0067;
	}

IL_0060:
	{
		Exception_t1927440687 * L_17 = ProtoReader_CreateWireTypeException_m126645285(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_0067:
	{
		float L_18 = V_3;
		return L_18;
	}
}
// System.Boolean ProtoBuf.ProtoReader::ReadBoolean()
extern Il2CppCodeGenString* _stringLiteral3414739536;
extern const uint32_t ProtoReader_ReadBoolean_m1199369898_MetadataUsageId;
extern "C"  bool ProtoReader_ReadBoolean_m1199369898 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_ReadBoolean_m1199369898_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ProtoReader_ReadUInt32_m164356528(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		uint32_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_0018;
		}
		if (L_1 == 1)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0020;
	}

IL_0018:
	{
		V_0 = (bool)0;
		goto IL_002c;
	}

IL_001c:
	{
		V_0 = (bool)1;
		goto IL_002c;
	}

IL_0020:
	{
		Exception_t1927440687 * L_2 = ProtoReader_CreateException_m4218353480(__this, _stringLiteral3414739536, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_002c:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] ProtoBuf.ProtoReader::AppendBytes(System.Byte[],ProtoBuf.ProtoReader)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral51169761;
extern const uint32_t ProtoReader_AppendBytes_m3236146482_MetadataUsageId;
extern "C"  ByteU5BU5D_t3397334013* ProtoReader_AppendBytes_m3236146482 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, ProtoReader_t3981212867 * ___reader1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_AppendBytes_m3236146482_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_t3397334013* V_2 = NULL;
	int32_t V_3 = 0;
	ByteU5BU5D_t3397334013* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	ByteU5BU5D_t3397334013* G_B8_0 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B21_0 = 0;
	{
		ProtoReader_t3981212867 * L_0 = ___reader1;
		V_5 = (bool)((((int32_t)((((Il2CppObject*)(ProtoReader_t3981212867 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral51169761, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0019:
	{
		ProtoReader_t3981212867 * L_3 = ___reader1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_10();
		V_6 = L_4;
		int32_t L_5 = V_6;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_018b;
	}

IL_002b:
	{
		ProtoReader_t3981212867 * L_6 = ___reader1;
		NullCheck(L_6);
		uint32_t L_7 = ProtoReader_ReadUInt32Variant_m4006296578(L_6, (bool)0, /*hidden argument*/NULL);
		V_0 = L_7;
		ProtoReader_t3981212867 * L_8 = ___reader1;
		NullCheck(L_8);
		L_8->set_wireType_10((-1));
		int32_t L_9 = V_0;
		V_5 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_11 = ___value0;
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_12 = ___value0;
		G_B8_0 = L_12;
		goto IL_0052;
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_13 = ((ProtoReader_t3981212867_StaticFields*)ProtoReader_t3981212867_il2cpp_TypeInfo_var->static_fields)->get_EmptyBlob_18();
		G_B8_0 = L_13;
	}

IL_0052:
	{
		V_4 = G_B8_0;
		goto IL_0192;
	}

IL_005a:
	{
		ByteU5BU5D_t3397334013* L_14 = ___value0;
		if (!L_14)
		{
			goto IL_0068;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_15 = ___value0;
		NullCheck(L_15);
		G_B12_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_15)->max_length))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B12_0 = 0;
	}

IL_0069:
	{
		V_5 = (bool)G_B12_0;
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_007e;
		}
	}
	{
		V_1 = 0;
		int32_t L_17 = V_0;
		___value0 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)L_17));
		goto IL_009f;
	}

IL_007e:
	{
		ByteU5BU5D_t3397334013* L_18 = ___value0;
		NullCheck(L_18);
		V_1 = (((int32_t)((int32_t)(((Il2CppArray *)L_18)->max_length))));
		ByteU5BU5D_t3397334013* L_19 = ___value0;
		NullCheck(L_19);
		int32_t L_20 = V_0;
		V_2 = ((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_19)->max_length))))+(int32_t)L_20))));
		ByteU5BU5D_t3397334013* L_21 = ___value0;
		ByteU5BU5D_t3397334013* L_22 = V_2;
		ByteU5BU5D_t3397334013* L_23 = ___value0;
		NullCheck(L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_BlockCopy_m2741176895(NULL /*static, unused*/, L_21, 0, L_22, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_23)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_24 = V_2;
		___value0 = L_24;
	}

IL_009f:
	{
		ProtoReader_t3981212867 * L_25 = ___reader1;
		ProtoReader_t3981212867 * L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_position_7();
		int32_t L_28 = V_0;
		NullCheck(L_26);
		L_26->set_position_7(((int32_t)((int32_t)L_27+(int32_t)L_28)));
		goto IL_0134;
	}

IL_00b2:
	{
		ProtoReader_t3981212867 * L_29 = ___reader1;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_available_8();
		V_5 = (bool)((((int32_t)((((int32_t)L_30) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0105;
		}
	}
	{
		ProtoReader_t3981212867 * L_32 = ___reader1;
		NullCheck(L_32);
		ByteU5BU5D_t3397334013* L_33 = L_32->get_ioBuffer_1();
		ProtoReader_t3981212867 * L_34 = ___reader1;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_ioIndex_6();
		ByteU5BU5D_t3397334013* L_36 = ___value0;
		int32_t L_37 = V_1;
		ProtoReader_t3981212867 * L_38 = ___reader1;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_available_8();
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_BlockCopy_m2741176895(NULL /*static, unused*/, L_33, L_35, L_36, L_37, L_39, /*hidden argument*/NULL);
		int32_t L_40 = V_0;
		ProtoReader_t3981212867 * L_41 = ___reader1;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_available_8();
		V_0 = ((int32_t)((int32_t)L_40-(int32_t)L_42));
		int32_t L_43 = V_1;
		ProtoReader_t3981212867 * L_44 = ___reader1;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_available_8();
		V_1 = ((int32_t)((int32_t)L_43+(int32_t)L_45));
		ProtoReader_t3981212867 * L_46 = ___reader1;
		ProtoReader_t3981212867 * L_47 = ___reader1;
		int32_t L_48 = 0;
		V_7 = L_48;
		NullCheck(L_47);
		L_47->set_available_8(L_48);
		int32_t L_49 = V_7;
		NullCheck(L_46);
		L_46->set_ioIndex_6(L_49);
	}

IL_0105:
	{
		int32_t L_50 = V_0;
		ProtoReader_t3981212867 * L_51 = ___reader1;
		NullCheck(L_51);
		ByteU5BU5D_t3397334013* L_52 = L_51->get_ioBuffer_1();
		NullCheck(L_52);
		if ((((int32_t)L_50) > ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_52)->max_length)))))))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_53 = V_0;
		G_B21_0 = L_53;
		goto IL_011b;
	}

IL_0113:
	{
		ProtoReader_t3981212867 * L_54 = ___reader1;
		NullCheck(L_54);
		ByteU5BU5D_t3397334013* L_55 = L_54->get_ioBuffer_1();
		NullCheck(L_55);
		G_B21_0 = (((int32_t)((int32_t)(((Il2CppArray *)L_55)->max_length))));
	}

IL_011b:
	{
		V_3 = G_B21_0;
		int32_t L_56 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_56) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_57 = V_5;
		if (L_57)
		{
			goto IL_0133;
		}
	}
	{
		ProtoReader_t3981212867 * L_58 = ___reader1;
		int32_t L_59 = V_3;
		NullCheck(L_58);
		ProtoReader_Ensure_m3820397798(L_58, L_59, (bool)1, /*hidden argument*/NULL);
	}

IL_0133:
	{
	}

IL_0134:
	{
		int32_t L_60 = V_0;
		ProtoReader_t3981212867 * L_61 = ___reader1;
		NullCheck(L_61);
		int32_t L_62 = L_61->get_available_8();
		V_5 = (bool)((((int32_t)L_60) > ((int32_t)L_62))? 1 : 0);
		bool L_63 = V_5;
		if (L_63)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_64 = V_0;
		V_5 = (bool)((((int32_t)((((int32_t)L_64) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_65 = V_5;
		if (L_65)
		{
			goto IL_0186;
		}
	}
	{
		ProtoReader_t3981212867 * L_66 = ___reader1;
		NullCheck(L_66);
		ByteU5BU5D_t3397334013* L_67 = L_66->get_ioBuffer_1();
		ProtoReader_t3981212867 * L_68 = ___reader1;
		NullCheck(L_68);
		int32_t L_69 = L_68->get_ioIndex_6();
		ByteU5BU5D_t3397334013* L_70 = ___value0;
		int32_t L_71 = V_1;
		int32_t L_72 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_BlockCopy_m2741176895(NULL /*static, unused*/, L_67, L_69, L_70, L_71, L_72, /*hidden argument*/NULL);
		ProtoReader_t3981212867 * L_73 = ___reader1;
		ProtoReader_t3981212867 * L_74 = L_73;
		NullCheck(L_74);
		int32_t L_75 = L_74->get_ioIndex_6();
		int32_t L_76 = V_0;
		NullCheck(L_74);
		L_74->set_ioIndex_6(((int32_t)((int32_t)L_75+(int32_t)L_76)));
		ProtoReader_t3981212867 * L_77 = ___reader1;
		ProtoReader_t3981212867 * L_78 = L_77;
		NullCheck(L_78);
		int32_t L_79 = L_78->get_available_8();
		int32_t L_80 = V_0;
		NullCheck(L_78);
		L_78->set_available_8(((int32_t)((int32_t)L_79-(int32_t)L_80)));
	}

IL_0186:
	{
		ByteU5BU5D_t3397334013* L_81 = ___value0;
		V_4 = L_81;
		goto IL_0192;
	}

IL_018b:
	{
		ProtoReader_t3981212867 * L_82 = ___reader1;
		NullCheck(L_82);
		Exception_t1927440687 * L_83 = ProtoReader_CreateWireTypeException_m126645285(L_82, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83);
	}

IL_0192:
	{
		ByteU5BU5D_t3397334013* L_84 = V_4;
		return L_84;
	}
}
// System.Void ProtoBuf.ProtoReader::Seek(System.IO.Stream,System.Int32,System.Byte[])
extern Il2CppClass* BufferPool_t710398810_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_Seek_m3046802941_MetadataUsageId;
extern "C"  void ProtoReader_Seek_m3046802941 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, int32_t ___count1, ByteU5BU5D_t3397334013* ___buffer2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_Seek_m3046802941_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B28_0 = 0;
	{
		Stream_t3255436806 * L_0 = ___source0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		Stream_t3255436806 * L_3 = ___source0;
		int32_t L_4 = ___count1;
		NullCheck(L_3);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_3, (((int64_t)((int64_t)L_4))), 1);
		___count1 = 0;
		goto IL_00db;
	}

IL_0022:
	{
		ByteU5BU5D_t3397334013* L_5 = ___buffer2;
		V_1 = (bool)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_5) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0034;
	}

IL_002d:
	{
		int32_t L_7 = ___count1;
		int32_t L_8 = V_0;
		___count1 = ((int32_t)((int32_t)L_7-(int32_t)L_8));
	}

IL_0034:
	{
		int32_t L_9 = ___count1;
		ByteU5BU5D_t3397334013* L_10 = ___buffer2;
		NullCheck(L_10);
		if ((((int32_t)L_9) <= ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_10)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		Stream_t3255436806 * L_11 = ___source0;
		ByteU5BU5D_t3397334013* L_12 = ___buffer2;
		ByteU5BU5D_t3397334013* L_13 = ___buffer2;
		NullCheck(L_13);
		NullCheck(L_11);
		int32_t L_14 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_13)->max_length)))));
		int32_t L_15 = L_14;
		V_0 = L_15;
		G_B8_0 = ((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B8_0 = 0;
	}

IL_004d:
	{
		V_1 = (bool)G_B8_0;
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_005b;
	}

IL_0054:
	{
		int32_t L_17 = ___count1;
		int32_t L_18 = V_0;
		___count1 = ((int32_t)((int32_t)L_17-(int32_t)L_18));
	}

IL_005b:
	{
		int32_t L_19 = ___count1;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		Stream_t3255436806 * L_20 = ___source0;
		ByteU5BU5D_t3397334013* L_21 = ___buffer2;
		int32_t L_22 = ___count1;
		NullCheck(L_20);
		int32_t L_23 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, L_22);
		int32_t L_24 = L_23;
		V_0 = L_24;
		G_B14_0 = ((((int32_t)L_24) > ((int32_t)0))? 1 : 0);
		goto IL_0070;
	}

IL_006f:
	{
		G_B14_0 = 0;
	}

IL_0070:
	{
		V_1 = (bool)G_B14_0;
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_0054;
		}
	}
	{
		goto IL_00db;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_26 = BufferPool_GetBuffer_m3732834373(NULL /*static, unused*/, /*hidden argument*/NULL);
		___buffer2 = L_26;
	}

IL_0080:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008a;
		}

IL_0083:
		{
			int32_t L_27 = ___count1;
			int32_t L_28 = V_0;
			___count1 = ((int32_t)((int32_t)L_27-(int32_t)L_28));
		}

IL_008a:
		{
			int32_t L_29 = ___count1;
			ByteU5BU5D_t3397334013* L_30 = ___buffer2;
			NullCheck(L_30);
			if ((((int32_t)L_29) <= ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_30)->max_length)))))))
			{
				goto IL_00a2;
			}
		}

IL_0090:
		{
			Stream_t3255436806 * L_31 = ___source0;
			ByteU5BU5D_t3397334013* L_32 = ___buffer2;
			ByteU5BU5D_t3397334013* L_33 = ___buffer2;
			NullCheck(L_33);
			NullCheck(L_31);
			int32_t L_34 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_31, L_32, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_33)->max_length)))));
			int32_t L_35 = L_34;
			V_0 = L_35;
			G_B22_0 = ((((int32_t)L_35) > ((int32_t)0))? 1 : 0);
			goto IL_00a3;
		}

IL_00a2:
		{
			G_B22_0 = 0;
		}

IL_00a3:
		{
			V_1 = (bool)G_B22_0;
			bool L_36 = V_1;
			if (L_36)
			{
				goto IL_0083;
			}
		}

IL_00a8:
		{
			goto IL_00b1;
		}

IL_00aa:
		{
			int32_t L_37 = ___count1;
			int32_t L_38 = V_0;
			___count1 = ((int32_t)((int32_t)L_37-(int32_t)L_38));
		}

IL_00b1:
		{
			int32_t L_39 = ___count1;
			if ((((int32_t)L_39) <= ((int32_t)0)))
			{
				goto IL_00c5;
			}
		}

IL_00b5:
		{
			Stream_t3255436806 * L_40 = ___source0;
			ByteU5BU5D_t3397334013* L_41 = ___buffer2;
			int32_t L_42 = ___count1;
			NullCheck(L_40);
			int32_t L_43 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, L_42);
			int32_t L_44 = L_43;
			V_0 = L_44;
			G_B28_0 = ((((int32_t)L_44) > ((int32_t)0))? 1 : 0);
			goto IL_00c6;
		}

IL_00c5:
		{
			G_B28_0 = 0;
		}

IL_00c6:
		{
			V_1 = (bool)G_B28_0;
			bool L_45 = V_1;
			if (L_45)
			{
				goto IL_00aa;
			}
		}

IL_00cb:
		{
			IL2CPP_LEAVE(0xD9, FINALLY_00ce);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_00ce;
	}

FINALLY_00ce:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
		BufferPool_ReleaseBufferToPool_m2010456868(NULL /*static, unused*/, (&___buffer2), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(206)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(206)
	{
		IL2CPP_JUMP_TBL(0xD9, IL_00d9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_00d9:
	{
	}

IL_00db:
	{
		int32_t L_46 = ___count1;
		V_1 = (bool)((((int32_t)((((int32_t)L_46) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_1;
		if (L_47)
		{
			goto IL_00ed;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_48 = ProtoReader_EoF_m737192749(NULL /*static, unused*/, (ProtoReader_t3981212867 *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48);
	}

IL_00ed:
	{
		return;
	}
}
// System.Exception ProtoBuf.ProtoReader::AddErrorData(System.Exception,ProtoBuf.ProtoReader)
extern Il2CppClass* IDictionary_t596158605_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* WireType_t4172783757_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral309495051;
extern Il2CppCodeGenString* _stringLiteral3772557061;
extern const uint32_t ProtoReader_AddErrorData_m129176144_MetadataUsageId;
extern "C"  Exception_t1927440687 * ProtoReader_AddErrorData_m129176144 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___exception0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_AddErrorData_m129176144_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t1927440687 * V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t3614634134* V_2 = NULL;
	int32_t G_B4_0 = 0;
	{
		Exception_t1927440687 * L_0 = ___exception0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ProtoReader_t3981212867 * L_1 = ___source1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t1927440687 * L_2 = ___exception0;
		NullCheck(L_2);
		Il2CppObject * L_3 = VirtFuncInvoker0< Il2CppObject * >::Invoke(9 /* System.Collections.IDictionary System.Exception::get_Data() */, L_2);
		NullCheck(L_3);
		bool L_4 = InterfaceFuncInvoker1< bool, Il2CppObject * >::Invoke(6 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t596158605_il2cpp_TypeInfo_var, L_3, _stringLiteral309495051);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
	}

IL_001a:
	{
		V_1 = (bool)G_B4_0;
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_007c;
		}
	}
	{
		Exception_t1927440687 * L_6 = ___exception0;
		NullCheck(L_6);
		Il2CppObject * L_7 = VirtFuncInvoker0< Il2CppObject * >::Invoke(9 /* System.Collections.IDictionary System.Exception::get_Data() */, L_6);
		V_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ObjectU5BU5D_t3614634134* L_8 = V_2;
		ProtoReader_t3981212867 * L_9 = ___source1;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_fieldNumber_3();
		int32_t L_11 = L_10;
		Il2CppObject * L_12 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_12);
		ObjectU5BU5D_t3614634134* L_13 = V_2;
		ProtoReader_t3981212867 * L_14 = ___source1;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_wireType_10();
		int32_t L_16 = L_15;
		Il2CppObject * L_17 = Box(WireType_t4172783757_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_17);
		ObjectU5BU5D_t3614634134* L_18 = V_2;
		ProtoReader_t3981212867 * L_19 = ___source1;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_position_7();
		int32_t L_21 = L_20;
		Il2CppObject * L_22 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 2);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)L_22);
		ObjectU5BU5D_t3614634134* L_23 = V_2;
		ProtoReader_t3981212867 * L_24 = ___source1;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_depth_4();
		int32_t L_26 = L_25;
		Il2CppObject * L_27 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 3);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_27);
		ObjectU5BU5D_t3614634134* L_28 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Format_m1263743648(NULL /*static, unused*/, _stringLiteral3772557061, L_28, /*hidden argument*/NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< Il2CppObject *, Il2CppObject * >::Invoke(4 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t596158605_il2cpp_TypeInfo_var, L_7, _stringLiteral309495051, L_29);
	}

IL_007c:
	{
		Exception_t1927440687 * L_30 = ___exception0;
		V_0 = L_30;
		goto IL_0080;
	}

IL_0080:
	{
		Exception_t1927440687 * L_31 = V_0;
		return L_31;
	}
}
// System.Exception ProtoBuf.ProtoReader::EoF(ProtoBuf.ProtoReader)
extern Il2CppClass* EndOfStreamException_t1711658693_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_EoF_m737192749_MetadataUsageId;
extern "C"  Exception_t1927440687 * ProtoReader_EoF_m737192749 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___source0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_EoF_m737192749_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t1927440687 * V_0 = NULL;
	{
		EndOfStreamException_t1711658693 * L_0 = (EndOfStreamException_t1711658693 *)il2cpp_codegen_object_new(EndOfStreamException_t1711658693_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_m2877696588(L_0, /*hidden argument*/NULL);
		ProtoReader_t3981212867 * L_1 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_2 = ProtoReader_AddErrorData_m129176144(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		Exception_t1927440687 * L_3 = V_0;
		return L_3;
	}
}
// System.Void ProtoBuf.ProtoReader::AppendExtensionData(ProtoBuf.IExtensible)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* IExtensible_t151450440_il2cpp_TypeInfo_var;
extern Il2CppClass* IExtension_t1221360786_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3919307841;
extern const uint32_t ProtoReader_AppendExtensionData_m1414497106_MetadataUsageId;
extern "C"  void ProtoReader_AppendExtensionData_m1414497106 (ProtoReader_t3981212867 * __this, Il2CppObject * ___instance0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_AppendExtensionData_m1414497106_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	bool V_1 = false;
	Stream_t3255436806 * V_2 = NULL;
	ProtoWriter_t2800220307 * V_3 = NULL;
	bool V_4 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Il2CppObject * L_0 = ___instance0;
		V_4 = (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3919307841, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0019:
	{
		Il2CppObject * L_3 = ___instance0;
		NullCheck(L_3);
		Il2CppObject * L_4 = InterfaceFuncInvoker1< Il2CppObject *, bool >::Invoke(0 /* ProtoBuf.IExtension ProtoBuf.IExtensible::GetExtensionObject(System.Boolean) */, IExtensible_t151450440_il2cpp_TypeInfo_var, L_3, (bool)1);
		V_0 = L_4;
		V_1 = (bool)0;
		Il2CppObject * L_5 = V_0;
		NullCheck(L_5);
		Stream_t3255436806 * L_6 = InterfaceFuncInvoker0< Stream_t3255436806 * >::Invoke(0 /* System.IO.Stream ProtoBuf.IExtension::BeginAppend() */, IExtension_t1221360786_il2cpp_TypeInfo_var, L_5);
		V_2 = L_6;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			Stream_t3255436806 * L_7 = V_2;
			TypeModel_t653695305 * L_8 = __this->get_model_2();
			ProtoWriter_t2800220307 * L_9 = (ProtoWriter_t2800220307 *)il2cpp_codegen_object_new(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
			ProtoWriter__ctor_m1912157606(L_9, L_7, L_8, (SerializationContext_t3878296411 *)NULL, /*hidden argument*/NULL);
			V_3 = L_9;
		}

IL_0039:
		try
		{ // begin try (depth: 2)
			ProtoWriter_t2800220307 * L_10 = V_3;
			ProtoReader_AppendExtensionField_m2858884753(__this, L_10, /*hidden argument*/NULL);
			ProtoWriter_t2800220307 * L_11 = V_3;
			NullCheck(L_11);
			ProtoWriter_Close_m1410314238(L_11, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x5E, FINALLY_004c);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
			goto FINALLY_004c;
		}

FINALLY_004c:
		{ // begin finally (depth: 2)
			{
				ProtoWriter_t2800220307 * L_12 = V_3;
				V_4 = (bool)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_12) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
				bool L_13 = V_4;
				if (L_13)
				{
					goto IL_005d;
				}
			}

IL_0056:
			{
				ProtoWriter_t2800220307 * L_14 = V_3;
				NullCheck(L_14);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_14);
			}

IL_005d:
			{
				IL2CPP_END_FINALLY(76)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(76)
		{
			IL2CPP_JUMP_TBL(0x5E, IL_005e)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
		}

IL_005e:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x70, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		Il2CppObject * L_15 = V_0;
		Stream_t3255436806 * L_16 = V_2;
		bool L_17 = V_1;
		NullCheck(L_15);
		InterfaceActionInvoker2< Stream_t3255436806 *, bool >::Invoke(1 /* System.Void ProtoBuf.IExtension::EndAppend(System.IO.Stream,System.Boolean) */, IExtension_t1221360786_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x70, IL_0070)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0070:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoReader::AppendExtensionField(ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_AppendExtensionField_m2858884753_MetadataUsageId;
extern "C"  void ProtoReader_AppendExtensionField_m2858884753 (ProtoReader_t3981212867 * __this, ProtoWriter_t2800220307 * ___writer0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_AppendExtensionField_m2858884753_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	SubItemToken_t3722101296  V_0;
	memset(&V_0, 0, sizeof(V_0));
	SubItemToken_t3722101296  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_fieldNumber_3();
		int32_t L_1 = __this->get_wireType_10();
		ProtoWriter_t2800220307 * L_2 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_wireType_10();
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (((int32_t)((int32_t)L_4-(int32_t)(-1))) == 0)
		{
			goto IL_00b5;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)(-1))) == 1)
		{
			goto IL_005c;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)(-1))) == 2)
		{
			goto IL_005c;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)(-1))) == 3)
		{
			goto IL_006b;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)(-1))) == 4)
		{
			goto IL_007b;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)(-1))) == 5)
		{
			goto IL_00b5;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)(-1))) == 6)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)(-1))) == 7)
		{
			goto IL_00b5;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)(-1))) == 8)
		{
			goto IL_00b5;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)(-1))) == 9)
		{
			goto IL_005c;
		}
	}
	{
		goto IL_00b5;
	}

IL_004d:
	{
		int32_t L_5 = ProtoReader_ReadInt32_m3141427562(__this, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_6 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt32_m17565190(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_005c:
	{
		int64_t L_7 = ProtoReader_ReadInt64_m692900778(__this, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_8 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt64_m2297047412(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_006b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_9 = ProtoReader_AppendBytes_m3236146482(NULL /*static, unused*/, (ByteU5BU5D_t3397334013*)(ByteU5BU5D_t3397334013*)NULL, __this, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_10 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteBytes_m1561538581(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_007b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		SubItemToken_t3722101296  L_11 = ProtoReader_StartSubItem_m1950929655(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_11;
		ProtoWriter_t2800220307 * L_12 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		SubItemToken_t3722101296  L_13 = ProtoWriter_StartSubItem_m525685061(NULL /*static, unused*/, NULL, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		goto IL_0096;
	}

IL_008c:
	{
		ProtoWriter_t2800220307 * L_14 = ___writer0;
		ProtoReader_AppendExtensionField_m2858884753(__this, L_14, /*hidden argument*/NULL);
	}

IL_0096:
	{
		int32_t L_15 = ProtoReader_ReadFieldHeader_m3404319213(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_008c;
		}
	}
	{
		SubItemToken_t3722101296  L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_EndSubItem_m1622745011(NULL /*static, unused*/, L_17, __this, /*hidden argument*/NULL);
		SubItemToken_t3722101296  L_18 = V_1;
		ProtoWriter_t2800220307 * L_19 = ___writer0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_EndSubItem_m3237697851(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_00b5:
	{
		Exception_t1927440687 * L_20 = ProtoReader_CreateWireTypeException_m126645285(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20);
	}

IL_00bc:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoReader::SetRootObject(System.Object)
extern "C"  void ProtoReader_SetRootObject_m1427290071 (ProtoReader_t3981212867 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		NetObjectCache_t2620415644 * L_0 = __this->get_netCache_13();
		Il2CppObject * L_1 = ___value0;
		NullCheck(L_0);
		NetObjectCache_SetKeyedObject_m2545017919(L_0, 0, L_1, /*hidden argument*/NULL);
		uint32_t L_2 = __this->get_trapCount_14();
		__this->set_trapCount_14(((int32_t)((int32_t)L_2-(int32_t)1)));
		return;
	}
}
// System.Void ProtoBuf.ProtoReader::NoteObject(System.Object,ProtoBuf.ProtoReader)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral51169761;
extern const uint32_t ProtoReader_NoteObject_m694014777_MetadataUsageId;
extern "C"  void ProtoReader_NoteObject_m694014777 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___reader1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_NoteObject_m694014777_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		ProtoReader_t3981212867 * L_0 = ___reader1;
		V_0 = (bool)((((int32_t)((((Il2CppObject*)(ProtoReader_t3981212867 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral51169761, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoReader_t3981212867 * L_3 = ___reader1;
		NullCheck(L_3);
		uint32_t L_4 = L_3->get_trapCount_14();
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		ProtoReader_t3981212867 * L_6 = ___reader1;
		NullCheck(L_6);
		NetObjectCache_t2620415644 * L_7 = L_6->get_netCache_13();
		Il2CppObject * L_8 = ___value0;
		NullCheck(L_7);
		NetObjectCache_RegisterTrappedObject_m1238540065(L_7, L_8, /*hidden argument*/NULL);
		ProtoReader_t3981212867 * L_9 = ___reader1;
		ProtoReader_t3981212867 * L_10 = L_9;
		NullCheck(L_10);
		uint32_t L_11 = L_10->get_trapCount_14();
		NullCheck(L_10);
		L_10->set_trapCount_14(((int32_t)((int32_t)L_11-(int32_t)1)));
	}

IL_0041:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoReader::CheckFullyConsumed()
extern Il2CppClass* ProtoException_t1712273663_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4137744066;
extern Il2CppCodeGenString* _stringLiteral109391843;
extern const uint32_t ProtoReader_CheckFullyConsumed_m2201161182_MetadataUsageId;
extern "C"  void ProtoReader_CheckFullyConsumed_m2201161182 (ProtoReader_t3981212867 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_CheckFullyConsumed_m2201161182_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->get_isFixedLength_11();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_2 = __this->get_dataRemaining_5();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ProtoException_t1712273663 * L_4 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_4, _stringLiteral4137744066, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0027:
	{
		goto IL_0044;
	}

IL_002a:
	{
		int32_t L_5 = __this->get_available_8();
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		ProtoException_t1712273663 * L_7 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_7, _stringLiteral109391843, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0043:
	{
	}

IL_0044:
	{
		return;
	}
}
// ProtoBuf.ProtoReader ProtoBuf.ProtoReader::Create(System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext,System.Int32)
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_Create_m3545400384_MetadataUsageId;
extern "C"  ProtoReader_t3981212867 * ProtoReader_Create_m3545400384 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, TypeModel_t653695305 * ___model1, SerializationContext_t3878296411 * ___context2, int32_t ___len3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_Create_m3545400384_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ProtoReader_t3981212867 * V_0 = NULL;
	ProtoReader_t3981212867 * V_1 = NULL;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_t3981212867 * L_0 = ProtoReader_GetRecycled_m1845474918(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		ProtoReader_t3981212867 * L_1 = V_0;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(ProtoReader_t3981212867 *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Stream_t3255436806 * L_3 = ___source0;
		TypeModel_t653695305 * L_4 = ___model1;
		SerializationContext_t3878296411 * L_5 = ___context2;
		int32_t L_6 = ___len3;
		ProtoReader_t3981212867 * L_7 = (ProtoReader_t3981212867 *)il2cpp_codegen_object_new(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader__ctor_m2342701527(L_7, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_002e;
	}

IL_001f:
	{
		ProtoReader_t3981212867 * L_8 = V_0;
		Stream_t3255436806 * L_9 = ___source0;
		TypeModel_t653695305 * L_10 = ___model1;
		SerializationContext_t3878296411 * L_11 = ___context2;
		int32_t L_12 = ___len3;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_Init_m890523795(NULL /*static, unused*/, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		ProtoReader_t3981212867 * L_13 = V_0;
		V_1 = L_13;
		goto IL_002e;
	}

IL_002e:
	{
		ProtoReader_t3981212867 * L_14 = V_1;
		return L_14;
	}
}
// ProtoBuf.ProtoReader ProtoBuf.ProtoReader::GetRecycled()
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_GetRecycled_m1845474918_MetadataUsageId;
extern "C"  ProtoReader_t3981212867 * ProtoReader_GetRecycled_m1845474918 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_GetRecycled_m1845474918_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ProtoReader_t3981212867 * V_0 = NULL;
	ProtoReader_t3981212867 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_t3981212867 * L_0 = ((ProtoReader_t3981212867_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ProtoReader_t3981212867_il2cpp_TypeInfo_var))->get_lastReader_19();
		V_0 = L_0;
		((ProtoReader_t3981212867_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ProtoReader_t3981212867_il2cpp_TypeInfo_var))->set_lastReader_19((ProtoReader_t3981212867 *)NULL);
		ProtoReader_t3981212867 * L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		ProtoReader_t3981212867 * L_2 = V_1;
		return L_2;
	}
}
// System.Void ProtoBuf.ProtoReader::Recycle(ProtoBuf.ProtoReader)
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader_Recycle_m806072605_MetadataUsageId;
extern "C"  void ProtoReader_Recycle_m806072605 (Il2CppObject * __this /* static, unused */, ProtoReader_t3981212867 * ___reader0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader_Recycle_m806072605_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		ProtoReader_t3981212867 * L_0 = ___reader0;
		V_0 = (bool)((((Il2CppObject*)(ProtoReader_t3981212867 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ProtoReader_t3981212867 * L_2 = ___reader0;
		NullCheck(L_2);
		ProtoReader_Dispose_m2692653075(L_2, /*hidden argument*/NULL);
		ProtoReader_t3981212867 * L_3 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		((ProtoReader_t3981212867_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ProtoReader_t3981212867_il2cpp_TypeInfo_var))->set_lastReader_19(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoReader::.cctor()
extern Il2CppClass* UTF8Encoding_t111055448_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var;
extern const uint32_t ProtoReader__cctor_m2255369843_MetadataUsageId;
extern "C"  void ProtoReader__cctor_m2255369843 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoReader__cctor_m2255369843_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		UTF8Encoding_t111055448 * L_0 = (UTF8Encoding_t111055448 *)il2cpp_codegen_object_new(UTF8Encoding_t111055448_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m100325490(L_0, /*hidden argument*/NULL);
		((ProtoReader_t3981212867_StaticFields*)ProtoReader_t3981212867_il2cpp_TypeInfo_var->static_fields)->set_encoding_17(L_0);
		((ProtoReader_t3981212867_StaticFields*)ProtoReader_t3981212867_il2cpp_TypeInfo_var->static_fields)->set_EmptyBlob_18(((ByteU5BU5D_t3397334013*)SZArrayNew(ByteU5BU5D_t3397334013_il2cpp_TypeInfo_var, (uint32_t)0)));
		return;
	}
}
// ProtoBuf.NetObjectCache ProtoBuf.ProtoWriter::get_NetCache()
extern "C"  NetObjectCache_t2620415644 * ProtoWriter_get_NetCache_m1655229476 (ProtoWriter_t2800220307 * __this, const MethodInfo* method)
{
	NetObjectCache_t2620415644 * V_0 = NULL;
	{
		NetObjectCache_t2620415644 * L_0 = __this->get_netCache_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		NetObjectCache_t2620415644 * L_1 = V_0;
		return L_1;
	}
}
// ProtoBuf.WireType ProtoBuf.ProtoWriter::get_WireType()
extern "C"  int32_t ProtoWriter_get_WireType_m3798169249 (ProtoWriter_t2800220307 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_wireType_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteFieldHeader(System.Int32,ProtoBuf.WireType,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* StringU5BU5D_t1642385972_il2cpp_TypeInfo_var;
extern Il2CppClass* WireType_t4172783757_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* InvalidOperationException_t721527559_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern Il2CppCodeGenString* _stringLiteral4028185333;
extern Il2CppCodeGenString* _stringLiteral3491758216;
extern Il2CppCodeGenString* _stringLiteral3196674305;
extern Il2CppCodeGenString* _stringLiteral294532645;
extern Il2CppCodeGenString* _stringLiteral3455797467;
extern Il2CppCodeGenString* _stringLiteral1428573517;
extern Il2CppCodeGenString* _stringLiteral71523562;
extern Il2CppCodeGenString* _stringLiteral3755681347;
extern Il2CppCodeGenString* _stringLiteral2351834376;
extern const uint32_t ProtoWriter_WriteFieldHeader_m3628644031_MetadataUsageId;
extern "C"  void ProtoWriter_WriteFieldHeader_m3628644031 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, int32_t ___wireType1, ProtoWriter_t2800220307 * ___writer2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteFieldHeader_m3628644031_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	StringU5BU5D_t1642385972* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer2;
		V_0 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_5();
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0070;
		}
	}
	{
		V_1 = ((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)5));
		StringU5BU5D_t1642385972* L_6 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, _stringLiteral4028185333);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4028185333);
		StringU5BU5D_t1642385972* L_7 = V_1;
		int32_t L_8 = ___wireType1;
		int32_t L_9 = L_8;
		Il2CppObject * L_10 = Box(WireType_t4172783757_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_11);
		StringU5BU5D_t1642385972* L_12 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, _stringLiteral3491758216);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3491758216);
		StringU5BU5D_t1642385972* L_13 = V_1;
		ProtoWriter_t2800220307 * L_14 = ___writer2;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_wireType_5();
		int32_t L_16 = L_15;
		Il2CppObject * L_17 = Box(WireType_t4172783757_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, L_18);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_18);
		StringU5BU5D_t1642385972* L_19 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 4);
		ArrayElementTypeCheck (L_19, _stringLiteral3196674305);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3196674305);
		StringU5BU5D_t1642385972* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m626692867(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		InvalidOperationException_t721527559 * L_22 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_22, L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22);
	}

IL_0070:
	{
		int32_t L_23 = ___fieldNumber0;
		V_0 = (bool)((((int32_t)((((int32_t)L_23) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_0086;
		}
	}
	{
		ArgumentOutOfRangeException_t279959794 * L_25 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_25, _stringLiteral294532645, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25);
	}

IL_0086:
	{
		int32_t L_26 = ___wireType1;
		V_2 = L_26;
		int32_t L_27 = V_2;
		if (((int32_t)((int32_t)L_27-(int32_t)(-1))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)(-1))) == 1)
		{
			goto IL_00ba;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)(-1))) == 2)
		{
			goto IL_00ba;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)(-1))) == 3)
		{
			goto IL_00ba;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)(-1))) == 4)
		{
			goto IL_00ba;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)(-1))) == 5)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)(-1))) == 6)
		{
			goto IL_00ba;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)(-1))) == 7)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)(-1))) == 8)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_27-(int32_t)(-1))) == 9)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00bc;
	}

IL_00ba:
	{
		goto IL_00dc;
	}

IL_00bc:
	{
		int32_t L_28 = ___wireType1;
		int32_t L_29 = L_28;
		Il2CppObject * L_30 = Box(WireType_t4172783757_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral3455797467, L_31, /*hidden argument*/NULL);
		ArgumentException_t3259014390 * L_33 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m544251339(L_33, L_32, _stringLiteral1428573517, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33);
	}

IL_00dc:
	{
		ProtoWriter_t2800220307 * L_34 = ___writer2;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_packedFieldNumber_13();
		V_0 = (bool)((((int32_t)((((int32_t)L_35) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_0;
		if (L_36)
		{
			goto IL_010a;
		}
	}
	{
		ProtoWriter_t2800220307 * L_37 = ___writer2;
		int32_t L_38 = ___fieldNumber0;
		NullCheck(L_37);
		L_37->set_fieldNumber_3(L_38);
		ProtoWriter_t2800220307 * L_39 = ___writer2;
		int32_t L_40 = ___wireType1;
		NullCheck(L_39);
		L_39->set_wireType_5(L_40);
		int32_t L_41 = ___fieldNumber0;
		int32_t L_42 = ___wireType1;
		ProtoWriter_t2800220307 * L_43 = ___writer2;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteHeaderCore_m1677694102(NULL /*static, unused*/, L_41, L_42, L_43, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_010a:
	{
		ProtoWriter_t2800220307 * L_44 = ___writer2;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_packedFieldNumber_13();
		int32_t L_46 = ___fieldNumber0;
		V_0 = (bool)((((int32_t)((((int32_t)L_45) == ((int32_t)L_46))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_0;
		if (L_47)
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_48 = ___wireType1;
		V_2 = L_48;
		int32_t L_49 = V_2;
		if (L_49 == 0)
		{
			goto IL_0135;
		}
		if (L_49 == 1)
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) == ((int32_t)5)))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) == ((int32_t)8)))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0137;
	}

IL_0135:
	{
		goto IL_0152;
	}

IL_0137:
	{
		int32_t L_52 = ___wireType1;
		int32_t L_53 = L_52;
		Il2CppObject * L_54 = Box(WireType_t4172783757_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_54);
		String_t* L_55 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_54);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_56 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral71523562, L_55, /*hidden argument*/NULL);
		InvalidOperationException_t721527559 * L_57 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_57, L_56, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57);
	}

IL_0152:
	{
		ProtoWriter_t2800220307 * L_58 = ___writer2;
		int32_t L_59 = ___fieldNumber0;
		NullCheck(L_58);
		L_58->set_fieldNumber_3(L_59);
		ProtoWriter_t2800220307 * L_60 = ___writer2;
		int32_t L_61 = ___wireType1;
		NullCheck(L_60);
		L_60->set_wireType_5(L_61);
		goto IL_018b;
	}

IL_0163:
	{
		ProtoWriter_t2800220307 * L_62 = ___writer2;
		NullCheck(L_62);
		int32_t* L_63 = L_62->get_address_of_packedFieldNumber_13();
		String_t* L_64 = Int32_ToString_m2960866144(L_63, /*hidden argument*/NULL);
		String_t* L_65 = Int32_ToString_m2960866144((&___fieldNumber0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_66 = String_Concat_m1561703559(NULL /*static, unused*/, _stringLiteral3755681347, L_64, _stringLiteral2351834376, L_65, /*hidden argument*/NULL);
		InvalidOperationException_t721527559 * L_67 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_67, L_66, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_67);
	}

IL_018b:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteHeaderCore(System.Int32,ProtoBuf.WireType,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_WriteHeaderCore_m1677694102_MetadataUsageId;
extern "C"  void ProtoWriter_WriteHeaderCore_m1677694102 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, int32_t ___wireType1, ProtoWriter_t2800220307 * ___writer2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteHeaderCore_m1677694102_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___fieldNumber0;
		int32_t L_1 = ___wireType1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)3))|(int32_t)((int32_t)((int32_t)L_1&(int32_t)7))));
		uint32_t L_2 = V_0;
		ProtoWriter_t2800220307 * L_3 = ___writer2;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt32Variant_m3352513463(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteBytes(System.Byte[],ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2619694;
extern const uint32_t ProtoWriter_WriteBytes_m1561538581_MetadataUsageId;
extern "C"  void ProtoWriter_WriteBytes_m1561538581 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteBytes_m1561538581_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_t3397334013* L_0 = ___data0;
		V_0 = (bool)((((int32_t)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral2619694, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ByteU5BU5D_t3397334013* L_3 = ___data0;
		ByteU5BU5D_t3397334013* L_4 = ___data0;
		NullCheck(L_4);
		ProtoWriter_t2800220307 * L_5 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteBytes_m2971674761(NULL /*static, unused*/, L_3, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_4)->max_length)))), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteBytes(System.Byte[],System.Int32,System.Int32,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2619694;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern Il2CppCodeGenString* _stringLiteral3438791774;
extern const uint32_t ProtoWriter_WriteBytes_m2971674761_MetadataUsageId;
extern "C"  void ProtoWriter_WriteBytes_m2971674761 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t ___offset1, int32_t ___length2, ProtoWriter_t2800220307 * ___writer3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteBytes_m2971674761_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B17_0 = 0;
	{
		ByteU5BU5D_t3397334013* L_0 = ___data0;
		V_0 = (bool)((((int32_t)((((Il2CppObject*)(ByteU5BU5D_t3397334013*)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral2619694, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer3;
		V_0 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentNullException_t628810857 * L_5 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_5, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_002d:
	{
		ProtoWriter_t2800220307 * L_6 = ___writer3;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_wireType_5();
		V_1 = L_7;
		int32_t L_8 = V_1;
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 0)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 1)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 2)
		{
			goto IL_00df;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 3)
		{
			goto IL_00df;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)1)) == 4)
		{
			goto IL_0055;
		}
	}
	{
		goto IL_00df;
	}

IL_0055:
	{
		int32_t L_9 = ___length2;
		V_0 = (bool)((((int32_t)L_9) == ((int32_t)4))? 1 : 0);
		bool L_10 = V_0;
		if (L_10)
		{
			goto IL_0068;
		}
	}
	{
		ArgumentException_t3259014390 * L_11 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_11, _stringLiteral3438791774, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}

IL_0068:
	{
		goto IL_00e6;
	}

IL_006a:
	{
		int32_t L_12 = ___length2;
		V_0 = (bool)((((int32_t)L_12) == ((int32_t)8))? 1 : 0);
		bool L_13 = V_0;
		if (L_13)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t3259014390 * L_14 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_14, _stringLiteral3438791774, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_007d:
	{
		goto IL_00e6;
	}

IL_007f:
	{
		int32_t L_15 = ___length2;
		ProtoWriter_t2800220307 * L_16 = ___writer3;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt32Variant_m3352513463(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_17 = ___writer3;
		NullCheck(L_17);
		L_17->set_wireType_5((-1));
		int32_t L_18 = ___length2;
		V_0 = (bool)((((int32_t)((((int32_t)L_18) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_009b;
		}
	}
	{
		goto IL_010b;
	}

IL_009b:
	{
		ProtoWriter_t2800220307 * L_20 = ___writer3;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_flushLock_4();
		if (L_21)
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_22 = ___length2;
		ProtoWriter_t2800220307 * L_23 = ___writer3;
		NullCheck(L_23);
		ByteU5BU5D_t3397334013* L_24 = L_23->get_ioBuffer_9();
		NullCheck(L_24);
		G_B17_0 = ((((int32_t)L_22) > ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_24)->max_length))))))? 1 : 0);
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B17_0 = 0;
	}

IL_00b1:
	{
		V_0 = (bool)G_B17_0;
		bool L_25 = V_0;
		if (L_25)
		{
			goto IL_00b9;
		}
	}
	{
		goto IL_00e6;
	}

IL_00b9:
	{
		ProtoWriter_t2800220307 * L_26 = ___writer3;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_Flush_m3423533880(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_27 = ___writer3;
		NullCheck(L_27);
		Stream_t3255436806 * L_28 = L_27->get_dest_0();
		ByteU5BU5D_t3397334013* L_29 = ___data0;
		int32_t L_30 = ___offset1;
		int32_t L_31 = ___length2;
		NullCheck(L_28);
		VirtActionInvoker3< ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(22 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, L_30, L_31);
		ProtoWriter_t2800220307 * L_32 = ___writer3;
		ProtoWriter_t2800220307 * L_33 = L_32;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_position_11();
		int32_t L_35 = ___length2;
		NullCheck(L_33);
		L_33->set_position_11(((int32_t)((int32_t)L_34+(int32_t)L_35)));
		goto IL_010b;
	}

IL_00df:
	{
		ProtoWriter_t2800220307 * L_36 = ___writer3;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_37 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37);
	}

IL_00e6:
	{
		int32_t L_38 = ___length2;
		ProtoWriter_t2800220307 * L_39 = ___writer3;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_40 = ___data0;
		int32_t L_41 = ___offset1;
		ProtoWriter_t2800220307 * L_42 = ___writer3;
		NullCheck(L_42);
		ByteU5BU5D_t3397334013* L_43 = L_42->get_ioBuffer_9();
		ProtoWriter_t2800220307 * L_44 = ___writer3;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_ioIndex_10();
		int32_t L_46 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_BlockCopy_m2741176895(NULL /*static, unused*/, L_40, L_41, L_43, L_45, L_46, /*hidden argument*/NULL);
		int32_t L_47 = ___length2;
		ProtoWriter_t2800220307 * L_48 = ___writer3;
		ProtoWriter_IncrementedAndReset_m4048663141(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
	}

IL_010b:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::CopyRawFromStream(System.IO.Stream,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_CopyRawFromStream_m314537070_MetadataUsageId;
extern "C"  void ProtoWriter_CopyRawFromStream_m314537070 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___source0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_CopyRawFromStream_m314537070_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		NullCheck(L_0);
		ByteU5BU5D_t3397334013* L_1 = L_0->get_ioBuffer_9();
		V_0 = L_1;
		ByteU5BU5D_t3397334013* L_2 = V_0;
		NullCheck(L_2);
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_ioIndex_10();
		V_1 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_2)->max_length))))-(int32_t)L_4));
		V_2 = 1;
		goto IL_0039;
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_5 = ___writer1;
		ProtoWriter_t2800220307 * L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_ioIndex_10();
		int32_t L_8 = V_2;
		NullCheck(L_6);
		L_6->set_ioIndex_10(((int32_t)((int32_t)L_7+(int32_t)L_8)));
		ProtoWriter_t2800220307 * L_9 = ___writer1;
		ProtoWriter_t2800220307 * L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_position_11();
		int32_t L_12 = V_2;
		NullCheck(L_10);
		L_10->set_position_11(((int32_t)((int32_t)L_11+(int32_t)L_12)));
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		V_1 = ((int32_t)((int32_t)L_13-(int32_t)L_14));
	}

IL_0039:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Stream_t3255436806 * L_16 = ___source0;
		ByteU5BU5D_t3397334013* L_17 = V_0;
		ProtoWriter_t2800220307 * L_18 = ___writer1;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_ioIndex_10();
		int32_t L_20 = V_1;
		NullCheck(L_16);
		int32_t L_21 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_16, L_17, L_19, L_20);
		int32_t L_22 = L_21;
		V_2 = L_22;
		G_B5_0 = ((((int32_t)L_22) > ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
	}

IL_0053:
	{
		V_3 = (bool)G_B5_0;
		bool L_23 = V_3;
		if (L_23)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_24 = V_2;
		V_3 = (bool)((((int32_t)L_24) > ((int32_t)0))? 1 : 0);
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0111;
	}

IL_0065:
	{
		ProtoWriter_t2800220307 * L_26 = ___writer1;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_flushLock_4();
		V_3 = (bool)((((int32_t)((((int32_t)L_27) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (L_28)
		{
			goto IL_00b5;
		}
	}
	{
		ProtoWriter_t2800220307 * L_29 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_Flush_m3423533880(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		goto IL_009e;
	}

IL_007f:
	{
		ProtoWriter_t2800220307 * L_30 = ___writer1;
		NullCheck(L_30);
		Stream_t3255436806 * L_31 = L_30->get_dest_0();
		ByteU5BU5D_t3397334013* L_32 = V_0;
		int32_t L_33 = V_2;
		NullCheck(L_31);
		VirtActionInvoker3< ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(22 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_31, L_32, 0, L_33);
		ProtoWriter_t2800220307 * L_34 = ___writer1;
		ProtoWriter_t2800220307 * L_35 = L_34;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_position_11();
		int32_t L_37 = V_2;
		NullCheck(L_35);
		L_35->set_position_11(((int32_t)((int32_t)L_36+(int32_t)L_37)));
	}

IL_009e:
	{
		Stream_t3255436806 * L_38 = ___source0;
		ByteU5BU5D_t3397334013* L_39 = V_0;
		ByteU5BU5D_t3397334013* L_40 = V_0;
		NullCheck(L_40);
		NullCheck(L_38);
		int32_t L_41 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_38, L_39, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_40)->max_length)))));
		int32_t L_42 = L_41;
		V_2 = L_42;
		V_3 = (bool)((((int32_t)L_42) > ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (L_43)
		{
			goto IL_007f;
		}
	}
	{
		goto IL_0111;
	}

IL_00b5:
	{
	}

IL_00b6:
	{
		ProtoWriter_t2800220307 * L_44 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, ((int32_t)128), L_44, /*hidden argument*/NULL);
		Stream_t3255436806 * L_45 = ___source0;
		ProtoWriter_t2800220307 * L_46 = ___writer1;
		NullCheck(L_46);
		ByteU5BU5D_t3397334013* L_47 = L_46->get_ioBuffer_9();
		ProtoWriter_t2800220307 * L_48 = ___writer1;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_ioIndex_10();
		ProtoWriter_t2800220307 * L_50 = ___writer1;
		NullCheck(L_50);
		ByteU5BU5D_t3397334013* L_51 = L_50->get_ioBuffer_9();
		NullCheck(L_51);
		ProtoWriter_t2800220307 * L_52 = ___writer1;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_ioIndex_10();
		NullCheck(L_45);
		int32_t L_54 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(18 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_45, L_47, L_49, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_51)->max_length))))-(int32_t)L_53)));
		int32_t L_55 = L_54;
		V_2 = L_55;
		V_3 = (bool)((((int32_t)L_55) > ((int32_t)0))? 1 : 0);
		bool L_56 = V_3;
		if (L_56)
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0110;
	}

IL_00ef:
	{
		ProtoWriter_t2800220307 * L_57 = ___writer1;
		ProtoWriter_t2800220307 * L_58 = L_57;
		NullCheck(L_58);
		int32_t L_59 = L_58->get_position_11();
		int32_t L_60 = V_2;
		NullCheck(L_58);
		L_58->set_position_11(((int32_t)((int32_t)L_59+(int32_t)L_60)));
		ProtoWriter_t2800220307 * L_61 = ___writer1;
		ProtoWriter_t2800220307 * L_62 = L_61;
		NullCheck(L_62);
		int32_t L_63 = L_62->get_ioIndex_10();
		int32_t L_64 = V_2;
		NullCheck(L_62);
		L_62->set_ioIndex_10(((int32_t)((int32_t)L_63+(int32_t)L_64)));
		V_3 = (bool)1;
		goto IL_00b6;
	}

IL_0110:
	{
	}

IL_0111:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::IncrementedAndReset(System.Int32,ProtoBuf.ProtoWriter)
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_IncrementedAndReset_m4048663141_MetadataUsageId;
extern "C"  void ProtoWriter_IncrementedAndReset_m4048663141 (Il2CppObject * __this /* static, unused */, int32_t ___length0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_IncrementedAndReset_m4048663141_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___length0;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_DebugAssert_m763024030(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_1 = ___writer1;
		ProtoWriter_t2800220307 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_ioIndex_10();
		int32_t L_4 = ___length0;
		NullCheck(L_2);
		L_2->set_ioIndex_10(((int32_t)((int32_t)L_3+(int32_t)L_4)));
		ProtoWriter_t2800220307 * L_5 = ___writer1;
		ProtoWriter_t2800220307 * L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_position_11();
		int32_t L_8 = ___length0;
		NullCheck(L_6);
		L_6->set_position_11(((int32_t)((int32_t)L_7+(int32_t)L_8)));
		ProtoWriter_t2800220307 * L_9 = ___writer1;
		NullCheck(L_9);
		L_9->set_wireType_5((-1));
		return;
	}
}
// ProtoBuf.SubItemToken ProtoBuf.ProtoWriter::StartSubItem(System.Object,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_StartSubItem_m525685061_MetadataUsageId;
extern "C"  SubItemToken_t3722101296  ProtoWriter_StartSubItem_m525685061 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_StartSubItem_m525685061_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	SubItemToken_t3722101296  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Il2CppObject * L_0 = ___instance0;
		ProtoWriter_t2800220307 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		SubItemToken_t3722101296  L_2 = ProtoWriter_StartSubItem_m2579908328(NULL /*static, unused*/, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		SubItemToken_t3722101296  L_3 = V_0;
		return L_3;
	}
}
// System.Void ProtoBuf.ProtoWriter::CheckRecursionStackAndPush(System.Object)
extern Il2CppClass* MutableList_t1161363740_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoException_t1712273663_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral165324900;
extern Il2CppCodeGenString* _stringLiteral1918490365;
extern Il2CppCodeGenString* _stringLiteral814833912;
extern Il2CppCodeGenString* _stringLiteral2665389707;
extern const uint32_t ProtoWriter_CheckRecursionStackAndPush_m1446911685_MetadataUsageId;
extern "C"  void ProtoWriter_CheckRecursionStackAndPush_m1446911685 (ProtoWriter_t2800220307 * __this, Il2CppObject * ___instance0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_CheckRecursionStackAndPush_m1446911685_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Il2CppObject * V_1 = NULL;
	bool V_2 = false;
	NodeEnumerator_t2246148295  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t G_B5_0 = 0;
	String_t* G_B10_0 = NULL;
	String_t* G_B15_0 = NULL;
	{
		MutableList_t1161363740 * L_0 = __this->get_recursionStack_7();
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(MutableList_t1161363740 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		MutableList_t1161363740 * L_2 = (MutableList_t1161363740 *)il2cpp_codegen_object_new(MutableList_t1161363740_il2cpp_TypeInfo_var);
		MutableList__ctor_m2469561734(L_2, /*hidden argument*/NULL);
		__this->set_recursionStack_7(L_2);
		goto IL_00d1;
	}

IL_0023:
	{
		Il2CppObject * L_3 = ___instance0;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		MutableList_t1161363740 * L_4 = __this->get_recursionStack_7();
		Il2CppObject * L_5 = ___instance0;
		NullCheck(L_4);
		int32_t L_6 = BasicList_IndexOfReference_m1079522782(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		V_0 = L_7;
		G_B5_0 = ((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B5_0 = 1;
	}

IL_003a:
	{
		V_2 = (bool)G_B5_0;
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_00d1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_DebugWriteLine_m1869691518(NULL /*static, unused*/, _stringLiteral165324900, /*hidden argument*/NULL);
		MutableList_t1161363740 * L_9 = __this->get_recursionStack_7();
		NullCheck(L_9);
		NodeEnumerator_t2246148295  L_10 = BasicList_GetEnumerator_m2672565182(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_007e;
	}

IL_005d:
	{
		Il2CppObject * L_11 = NodeEnumerator_get_Current_m3609254958((&V_3), /*hidden argument*/NULL);
		V_1 = L_11;
		Il2CppObject * L_12 = V_1;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppObject * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		G_B10_0 = L_14;
		goto IL_0076;
	}

IL_0071:
	{
		G_B10_0 = _stringLiteral1918490365;
	}

IL_0076:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_DebugWriteLine_m1869691518(NULL /*static, unused*/, G_B10_0, /*hidden argument*/NULL);
	}

IL_007e:
	{
		bool L_15 = NodeEnumerator_MoveNext_m3417523057((&V_3), /*hidden argument*/NULL);
		V_2 = L_15;
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_005d;
		}
	}
	{
		Il2CppObject * L_17 = ___instance0;
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		Il2CppObject * L_18 = ___instance0;
		NullCheck(L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		G_B15_0 = L_19;
		goto IL_0099;
	}

IL_0094:
	{
		G_B15_0 = _stringLiteral1918490365;
	}

IL_0099:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_DebugWriteLine_m1869691518(NULL /*static, unused*/, G_B15_0, /*hidden argument*/NULL);
		MutableList_t1161363740 * L_20 = __this->get_recursionStack_7();
		NullCheck(L_20);
		int32_t L_21 = BasicList_get_Count_m2175503842(L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		V_4 = ((int32_t)((int32_t)L_21-(int32_t)L_22));
		String_t* L_23 = Int32_ToString_m2960866144((&V_4), /*hidden argument*/NULL);
		Il2CppObject * L_24 = ___instance0;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m1561703559(NULL /*static, unused*/, _stringLiteral814833912, L_23, _stringLiteral2665389707, L_25, /*hidden argument*/NULL);
		ProtoException_t1712273663 * L_27 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_27, L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27);
	}

IL_00d1:
	{
		MutableList_t1161363740 * L_28 = __this->get_recursionStack_7();
		Il2CppObject * L_29 = ___instance0;
		NullCheck(L_28);
		BasicList_Add_m3560539713(L_28, L_29, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::PopRecursionStack()
extern "C"  void ProtoWriter_PopRecursionStack_m3912783387 (ProtoWriter_t2800220307 * __this, const MethodInfo* method)
{
	{
		MutableList_t1161363740 * L_0 = __this->get_recursionStack_7();
		NullCheck(L_0);
		MutableList_RemoveLast_m3699329708(L_0, /*hidden argument*/NULL);
		return;
	}
}
// ProtoBuf.SubItemToken ProtoBuf.ProtoWriter::StartSubItem(System.Object,ProtoBuf.ProtoWriter,System.Boolean)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* InvalidOperationException_t721527559_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoException_t1712273663_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern Il2CppCodeGenString* _stringLiteral386927508;
extern Il2CppCodeGenString* _stringLiteral737725079;
extern const uint32_t ProtoWriter_StartSubItem_m2579908328_MetadataUsageId;
extern "C"  SubItemToken_t3722101296  ProtoWriter_StartSubItem_m2579908328 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, ProtoWriter_t2800220307 * ___writer1, bool ___allowFixed2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_StartSubItem_m2579908328_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	SubItemToken_t3722101296  V_0;
	memset(&V_0, 0, sizeof(V_0));
	SubItemToken_t3722101296  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B12_0 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		ProtoWriter_t2800220307 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_depth_6();
		int32_t L_6 = ((int32_t)((int32_t)L_5+(int32_t)1));
		V_3 = L_6;
		NullCheck(L_4);
		L_4->set_depth_6(L_6);
		int32_t L_7 = V_3;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		ProtoWriter_t2800220307 * L_9 = ___writer1;
		Il2CppObject * L_10 = ___instance0;
		NullCheck(L_9);
		ProtoWriter_CheckRecursionStackAndPush_m1446911685(L_9, L_10, /*hidden argument*/NULL);
	}

IL_003d:
	{
		ProtoWriter_t2800220307 * L_11 = ___writer1;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_packedFieldNumber_13();
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0055;
		}
	}
	{
		InvalidOperationException_t721527559 * L_14 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_14, _stringLiteral386927508, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_0055:
	{
		ProtoWriter_t2800220307 * L_15 = ___writer1;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_wireType_5();
		V_4 = L_16;
		int32_t L_17 = V_4;
		if (((int32_t)((int32_t)L_17-(int32_t)2)) == 0)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)2)) == 1)
		{
			goto IL_007b;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)2)) == 2)
		{
			goto IL_0141;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)2)) == 3)
		{
			goto IL_0103;
		}
	}
	{
		goto IL_0141;
	}

IL_007b:
	{
		ProtoWriter_t2800220307 * L_18 = ___writer1;
		NullCheck(L_18);
		L_18->set_wireType_5((-1));
		ProtoWriter_t2800220307 * L_19 = ___writer1;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_fieldNumber_3();
		SubItemToken_t3722101296  L_21;
		memset(&L_21, 0, sizeof(L_21));
		SubItemToken__ctor_m1189156554(&L_21, ((-L_20)), /*hidden argument*/NULL);
		V_1 = L_21;
		goto IL_0148;
	}

IL_0094:
	{
		ProtoWriter_t2800220307 * L_22 = ___writer1;
		NullCheck(L_22);
		TypeModel_t653695305 * L_23 = L_22->get_model_1();
		if (!L_23)
		{
			goto IL_00ac;
		}
	}
	{
		ProtoWriter_t2800220307 * L_24 = ___writer1;
		NullCheck(L_24);
		TypeModel_t653695305 * L_25 = L_24->get_model_1();
		NullCheck(L_25);
		bool L_26 = TypeModel_get_ForwardsOnly_m2769872662(L_25, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B12_0 = 1;
	}

IL_00ad:
	{
		V_2 = (bool)G_B12_0;
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_00be;
		}
	}
	{
		ProtoException_t1712273663 * L_28 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_28, _stringLiteral737725079, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28);
	}

IL_00be:
	{
		ProtoWriter_t2800220307 * L_29 = ___writer1;
		NullCheck(L_29);
		L_29->set_wireType_5((-1));
		ProtoWriter_t2800220307 * L_30 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, ((int32_t)32), L_30, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_31 = ___writer1;
		ProtoWriter_t2800220307 * L_32 = L_31;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_flushLock_4();
		NullCheck(L_32);
		L_32->set_flushLock_4(((int32_t)((int32_t)L_33+(int32_t)1)));
		ProtoWriter_t2800220307 * L_34 = ___writer1;
		ProtoWriter_t2800220307 * L_35 = L_34;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_position_11();
		NullCheck(L_35);
		L_35->set_position_11(((int32_t)((int32_t)L_36+(int32_t)1)));
		ProtoWriter_t2800220307 * L_37 = ___writer1;
		ProtoWriter_t2800220307 * L_38 = L_37;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_ioIndex_10();
		int32_t L_40 = L_39;
		V_3 = L_40;
		NullCheck(L_38);
		L_38->set_ioIndex_10(((int32_t)((int32_t)L_40+(int32_t)1)));
		int32_t L_41 = V_3;
		SubItemToken_t3722101296  L_42;
		memset(&L_42, 0, sizeof(L_42));
		SubItemToken__ctor_m1189156554(&L_42, L_41, /*hidden argument*/NULL);
		V_1 = L_42;
		goto IL_0148;
	}

IL_0103:
	{
		bool L_43 = ___allowFixed2;
		V_2 = L_43;
		bool L_44 = V_2;
		if (L_44)
		{
			goto IL_0110;
		}
	}
	{
		ProtoWriter_t2800220307 * L_45 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_46 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46);
	}

IL_0110:
	{
		ProtoWriter_t2800220307 * L_47 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, ((int32_t)32), L_47, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_48 = ___writer1;
		ProtoWriter_t2800220307 * L_49 = L_48;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_flushLock_4();
		NullCheck(L_49);
		L_49->set_flushLock_4(((int32_t)((int32_t)L_50+(int32_t)1)));
		ProtoWriter_t2800220307 * L_51 = ___writer1;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_ioIndex_10();
		SubItemToken__ctor_m1189156554((&V_0), L_52, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_53 = ___writer1;
		ProtoWriter_IncrementedAndReset_m4048663141(NULL /*static, unused*/, 4, L_53, /*hidden argument*/NULL);
		SubItemToken_t3722101296  L_54 = V_0;
		V_1 = L_54;
		goto IL_0148;
	}

IL_0141:
	{
		ProtoWriter_t2800220307 * L_55 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_56 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56);
	}

IL_0148:
	{
		SubItemToken_t3722101296  L_57 = V_1;
		return L_57;
	}
}
// System.Void ProtoBuf.ProtoWriter::EndSubItem(ProtoBuf.SubItemToken,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_EndSubItem_m3237697851_MetadataUsageId;
extern "C"  void ProtoWriter_EndSubItem_m3237697851 (Il2CppObject * __this /* static, unused */, SubItemToken_t3722101296  ___token0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_EndSubItem_m3237697851_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SubItemToken_t3722101296  L_0 = ___token0;
		ProtoWriter_t2800220307 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_EndSubItem_m3267128801(NULL /*static, unused*/, L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::EndSubItem(ProtoBuf.SubItemToken,ProtoBuf.ProtoWriter,ProtoBuf.PrefixStyle)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern Il2CppCodeGenString* _stringLiteral627234459;
extern const uint32_t ProtoWriter_EndSubItem_m3267128801_MetadataUsageId;
extern "C"  void ProtoWriter_EndSubItem_m3267128801 (Il2CppObject * __this /* static, unused */, SubItemToken_t3722101296  ___token0, ProtoWriter_t2800220307 * ___writer1, int32_t ___style2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_EndSubItem_m3267128801_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_t3397334013* V_2 = NULL;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	ByteU5BU5D_t3397334013* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t G_B27_0 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		V_7 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_7;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0019:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_5();
		V_7 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		bool L_5 = V_7;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		ProtoWriter_t2800220307 * L_6 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_7 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0030:
	{
		int32_t L_8 = (&___token0)->get_value_0();
		V_0 = L_8;
		ProtoWriter_t2800220307 * L_9 = ___writer1;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_depth_6();
		V_7 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		bool L_11 = V_7;
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		ProtoWriter_t2800220307 * L_12 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_13 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13);
	}

IL_004e:
	{
		ProtoWriter_t2800220307 * L_14 = ___writer1;
		ProtoWriter_t2800220307 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_depth_6();
		int32_t L_17 = L_16;
		V_8 = L_17;
		NullCheck(L_15);
		L_15->set_depth_6(((int32_t)((int32_t)L_17-(int32_t)1)));
		int32_t L_18 = V_8;
		V_7 = (bool)((((int32_t)((((int32_t)L_18) > ((int32_t)((int32_t)25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_7;
		if (L_19)
		{
			goto IL_0077;
		}
	}
	{
		ProtoWriter_t2800220307 * L_20 = ___writer1;
		NullCheck(L_20);
		ProtoWriter_PopRecursionStack_m3912783387(L_20, /*hidden argument*/NULL);
	}

IL_0077:
	{
		ProtoWriter_t2800220307 * L_21 = ___writer1;
		NullCheck(L_21);
		L_21->set_packedFieldNumber_13(0);
		int32_t L_22 = V_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_7;
		if (L_23)
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_24 = V_0;
		ProtoWriter_t2800220307 * L_25 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteHeaderCore_m1677694102(NULL /*static, unused*/, ((-L_24)), 4, L_25, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_26 = ___writer1;
		NullCheck(L_26);
		L_26->set_wireType_5((-1));
		goto IL_0239;
	}

IL_00a2:
	{
		int32_t L_27 = ___style2;
		V_9 = L_27;
		int32_t L_28 = V_9;
		if (((int32_t)((int32_t)L_28-(int32_t)1)) == 0)
		{
			goto IL_0125;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)1)) == 1)
		{
			goto IL_00bf;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)1)) == 2)
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_01f9;
	}

IL_00bf:
	{
		ProtoWriter_t2800220307 * L_29 = ___writer1;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_ioIndex_10();
		int32_t L_31 = V_0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30-(int32_t)L_31))-(int32_t)4));
		int32_t L_32 = V_1;
		ProtoWriter_t2800220307 * L_33 = ___writer1;
		NullCheck(L_33);
		ByteU5BU5D_t3397334013* L_34 = L_33->get_ioBuffer_9();
		int32_t L_35 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt32ToBuffer_m4178419997(NULL /*static, unused*/, L_32, L_34, L_35, /*hidden argument*/NULL);
		goto IL_0204;
	}

IL_00dd:
	{
		ProtoWriter_t2800220307 * L_36 = ___writer1;
		NullCheck(L_36);
		int32_t L_37 = L_36->get_ioIndex_10();
		int32_t L_38 = V_0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_37-(int32_t)L_38))-(int32_t)4));
		ProtoWriter_t2800220307 * L_39 = ___writer1;
		NullCheck(L_39);
		ByteU5BU5D_t3397334013* L_40 = L_39->get_ioBuffer_9();
		V_2 = L_40;
		int32_t L_41 = V_1;
		ByteU5BU5D_t3397334013* L_42 = V_2;
		int32_t L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt32ToBuffer_m4178419997(NULL /*static, unused*/, L_41, L_42, L_43, /*hidden argument*/NULL);
		ByteU5BU5D_t3397334013* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		uint8_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_3 = L_47;
		ByteU5BU5D_t3397334013* L_48 = V_2;
		int32_t L_49 = V_0;
		ByteU5BU5D_t3397334013* L_50 = V_2;
		int32_t L_51 = V_0;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, ((int32_t)((int32_t)L_51+(int32_t)3)));
		int32_t L_52 = ((int32_t)((int32_t)L_51+(int32_t)3));
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)L_53);
		ByteU5BU5D_t3397334013* L_54 = V_2;
		int32_t L_55 = V_0;
		uint8_t L_56 = V_3;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)L_55+(int32_t)3)));
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_55+(int32_t)3))), (uint8_t)L_56);
		ByteU5BU5D_t3397334013* L_57 = V_2;
		int32_t L_58 = V_0;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)L_58+(int32_t)1)));
		int32_t L_59 = ((int32_t)((int32_t)L_58+(int32_t)1));
		uint8_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_3 = L_60;
		ByteU5BU5D_t3397334013* L_61 = V_2;
		int32_t L_62 = V_0;
		ByteU5BU5D_t3397334013* L_63 = V_2;
		int32_t L_64 = V_0;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, ((int32_t)((int32_t)L_64+(int32_t)2)));
		int32_t L_65 = ((int32_t)((int32_t)L_64+(int32_t)2));
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, ((int32_t)((int32_t)L_62+(int32_t)1)));
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_62+(int32_t)1))), (uint8_t)L_66);
		ByteU5BU5D_t3397334013* L_67 = V_2;
		int32_t L_68 = V_0;
		uint8_t L_69 = V_3;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, ((int32_t)((int32_t)L_68+(int32_t)2)));
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_68+(int32_t)2))), (uint8_t)L_69);
		goto IL_0204;
	}

IL_0125:
	{
		ProtoWriter_t2800220307 * L_70 = ___writer1;
		NullCheck(L_70);
		int32_t L_71 = L_70->get_ioIndex_10();
		int32_t L_72 = V_0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_71-(int32_t)L_72))-(int32_t)1));
		V_4 = 0;
		int32_t L_73 = V_1;
		V_5 = L_73;
		goto IL_013e;
	}

IL_0138:
	{
		int32_t L_74 = V_4;
		V_4 = ((int32_t)((int32_t)L_74+(int32_t)1));
	}

IL_013e:
	{
		uint32_t L_75 = V_5;
		int32_t L_76 = ((int32_t)((uint32_t)L_75>>7));
		V_5 = L_76;
		V_7 = (bool)((((int32_t)((((int32_t)L_76) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_77 = V_7;
		if (L_77)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_78 = V_4;
		V_7 = (bool)((((int32_t)((((int32_t)L_78) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_79 = V_7;
		if (L_79)
		{
			goto IL_0173;
		}
	}
	{
		ProtoWriter_t2800220307 * L_80 = ___writer1;
		NullCheck(L_80);
		ByteU5BU5D_t3397334013* L_81 = L_80->get_ioBuffer_9();
		int32_t L_82 = V_0;
		int32_t L_83 = V_1;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, L_82);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_83&(int32_t)((int32_t)127)))))));
		goto IL_01f7;
	}

IL_0173:
	{
		int32_t L_84 = V_4;
		ProtoWriter_t2800220307 * L_85 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, L_84, L_85, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_86 = ___writer1;
		NullCheck(L_86);
		ByteU5BU5D_t3397334013* L_87 = L_86->get_ioBuffer_9();
		V_6 = L_87;
		ByteU5BU5D_t3397334013* L_88 = V_6;
		int32_t L_89 = V_0;
		ByteU5BU5D_t3397334013* L_90 = V_6;
		int32_t L_91 = V_0;
		int32_t L_92 = V_4;
		int32_t L_93 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_BlockCopy_m2741176895(NULL /*static, unused*/, L_88, ((int32_t)((int32_t)L_89+(int32_t)1)), L_90, ((int32_t)((int32_t)((int32_t)((int32_t)L_91+(int32_t)1))+(int32_t)L_92)), L_93, /*hidden argument*/NULL);
		int32_t L_94 = V_1;
		V_5 = L_94;
	}

IL_019c:
	{
		ByteU5BU5D_t3397334013* L_95 = V_6;
		int32_t L_96 = V_0;
		int32_t L_97 = L_96;
		V_0 = ((int32_t)((int32_t)L_97+(int32_t)1));
		uint32_t L_98 = V_5;
		NullCheck(L_95);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_95, L_97);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_98&(int32_t)((int32_t)127)))|(int32_t)((int32_t)128)))))));
		uint32_t L_99 = V_5;
		int32_t L_100 = ((int32_t)((uint32_t)L_99>>7));
		V_5 = L_100;
		V_7 = (bool)((((int32_t)((((int32_t)L_100) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_101 = V_7;
		if (L_101)
		{
			goto IL_019c;
		}
	}
	{
		ByteU5BU5D_t3397334013* L_102 = V_6;
		int32_t L_103 = V_0;
		ByteU5BU5D_t3397334013* L_104 = V_6;
		int32_t L_105 = V_0;
		NullCheck(L_104);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_104, ((int32_t)((int32_t)L_105-(int32_t)1)));
		int32_t L_106 = ((int32_t)((int32_t)L_105-(int32_t)1));
		uint8_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, ((int32_t)((int32_t)L_103-(int32_t)1)));
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_103-(int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_107&(int32_t)((int32_t)-129)))))));
		ProtoWriter_t2800220307 * L_108 = ___writer1;
		ProtoWriter_t2800220307 * L_109 = L_108;
		NullCheck(L_109);
		int32_t L_110 = L_109->get_position_11();
		int32_t L_111 = V_4;
		NullCheck(L_109);
		L_109->set_position_11(((int32_t)((int32_t)L_110+(int32_t)L_111)));
		ProtoWriter_t2800220307 * L_112 = ___writer1;
		ProtoWriter_t2800220307 * L_113 = L_112;
		NullCheck(L_113);
		int32_t L_114 = L_113->get_ioIndex_10();
		int32_t L_115 = V_4;
		NullCheck(L_113);
		L_113->set_ioIndex_10(((int32_t)((int32_t)L_114+(int32_t)L_115)));
	}

IL_01f7:
	{
		goto IL_0204;
	}

IL_01f9:
	{
		ArgumentOutOfRangeException_t279959794 * L_116 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1595007065(L_116, _stringLiteral627234459, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_116);
	}

IL_0204:
	{
		ProtoWriter_t2800220307 * L_117 = ___writer1;
		ProtoWriter_t2800220307 * L_118 = L_117;
		NullCheck(L_118);
		int32_t L_119 = L_118->get_flushLock_4();
		int32_t L_120 = ((int32_t)((int32_t)L_119-(int32_t)1));
		V_8 = L_120;
		NullCheck(L_118);
		L_118->set_flushLock_4(L_120);
		int32_t L_121 = V_8;
		if (L_121)
		{
			goto IL_0228;
		}
	}
	{
		ProtoWriter_t2800220307 * L_122 = ___writer1;
		NullCheck(L_122);
		int32_t L_123 = L_122->get_ioIndex_10();
		G_B27_0 = ((((int32_t)L_123) < ((int32_t)((int32_t)1024)))? 1 : 0);
		goto IL_0229;
	}

IL_0228:
	{
		G_B27_0 = 1;
	}

IL_0229:
	{
		V_7 = (bool)G_B27_0;
		bool L_124 = V_7;
		if (L_124)
		{
			goto IL_0239;
		}
	}
	{
		ProtoWriter_t2800220307 * L_125 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_Flush_m3423533880(NULL /*static, unused*/, L_125, /*hidden argument*/NULL);
	}

IL_0239:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::.ctor(System.IO.Stream,ProtoBuf.Meta.TypeModel,ProtoBuf.SerializationContext)
extern Il2CppClass* NetObjectCache_t2620415644_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern Il2CppClass* BufferPool_t710398810_il2cpp_TypeInfo_var;
extern Il2CppClass* SerializationContext_t3878296411_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3423760790;
extern Il2CppCodeGenString* _stringLiteral2146576591;
extern const uint32_t ProtoWriter__ctor_m1912157606_MetadataUsageId;
extern "C"  void ProtoWriter__ctor_m1912157606 (ProtoWriter_t2800220307 * __this, Stream_t3255436806 * ___dest0, TypeModel_t653695305 * ___model1, SerializationContext_t3878296411 * ___context2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter__ctor_m1912157606_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		NetObjectCache_t2620415644 * L_0 = (NetObjectCache_t2620415644 *)il2cpp_codegen_object_new(NetObjectCache_t2620415644_il2cpp_TypeInfo_var);
		NetObjectCache__ctor_m25650673(L_0, /*hidden argument*/NULL);
		__this->set_netCache_2(L_0);
		__this->set_depth_6(0);
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		Stream_t3255436806 * L_1 = ___dest0;
		V_0 = (bool)((((int32_t)((((Il2CppObject*)(Stream_t3255436806 *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentNullException_t628810857 * L_3 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_3, _stringLiteral3423760790, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0030:
	{
		Stream_t3255436806 * L_4 = ___dest0;
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_4);
		V_0 = L_5;
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		ArgumentException_t3259014390 * L_7 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m544251339(L_7, _stringLiteral2146576591, _stringLiteral3423760790, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_004a:
	{
		Stream_t3255436806 * L_8 = ___dest0;
		__this->set_dest_0(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_9 = BufferPool_GetBuffer_m3732834373(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_ioBuffer_9(L_9);
		TypeModel_t653695305 * L_10 = ___model1;
		__this->set_model_1(L_10);
		__this->set_wireType_5((-1));
		SerializationContext_t3878296411 * L_11 = ___context2;
		V_0 = (bool)((((int32_t)((((Il2CppObject*)(SerializationContext_t3878296411 *)L_11) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_0;
		if (L_12)
		{
			goto IL_0080;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SerializationContext_t3878296411_il2cpp_TypeInfo_var);
		SerializationContext_t3878296411 * L_13 = SerializationContext_get_Default_m3829835231(NULL /*static, unused*/, /*hidden argument*/NULL);
		___context2 = L_13;
		goto IL_0089;
	}

IL_0080:
	{
		SerializationContext_t3878296411 * L_14 = ___context2;
		NullCheck(L_14);
		SerializationContext_Freeze_m1525726585(L_14, /*hidden argument*/NULL);
	}

IL_0089:
	{
		SerializationContext_t3878296411 * L_15 = ___context2;
		__this->set_context_8(L_15);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::System.IDisposable.Dispose()
extern "C"  void ProtoWriter_System_IDisposable_Dispose_m702749149 (ProtoWriter_t2800220307 * __this, const MethodInfo* method)
{
	{
		ProtoWriter_Dispose_m3129385301(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::Dispose()
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* BufferPool_t710398810_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_Dispose_m3129385301_MetadataUsageId;
extern "C"  void ProtoWriter_Dispose_m3129385301 (ProtoWriter_t2800220307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_Dispose_m3129385301_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		Stream_t3255436806 * L_0 = __this->get_dest_0();
		V_0 = (bool)((((Il2CppObject*)(Stream_t3255436806 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_Flush_m3423533880(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->set_dest_0((Stream_t3255436806 *)NULL);
	}

IL_001e:
	{
		__this->set_model_1((TypeModel_t653695305 *)NULL);
		ByteU5BU5D_t3397334013** L_2 = __this->get_address_of_ioBuffer_9();
		IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
		BufferPool_ReleaseBufferToPool_m2010456868(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::DemandSpace(System.Int32,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* BufferPool_t710398810_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_DemandSpace_m1534116038_MetadataUsageId;
extern "C"  void ProtoWriter_DemandSpace_m1534116038 (Il2CppObject * __this /* static, unused */, int32_t ___required0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_DemandSpace_m1534116038_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		NullCheck(L_0);
		ByteU5BU5D_t3397334013* L_1 = L_0->get_ioBuffer_9();
		NullCheck(L_1);
		ProtoWriter_t2800220307 * L_2 = ___writer1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_ioIndex_10();
		int32_t L_4 = ___required0;
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length))))-(int32_t)L_3))) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0068;
		}
	}
	{
		ProtoWriter_t2800220307 * L_6 = ___writer1;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_flushLock_4();
		V_0 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		ProtoWriter_t2800220307 * L_9 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_Flush_m3423533880(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_10 = ___writer1;
		NullCheck(L_10);
		ByteU5BU5D_t3397334013* L_11 = L_10->get_ioBuffer_9();
		NullCheck(L_11);
		ProtoWriter_t2800220307 * L_12 = ___writer1;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_ioIndex_10();
		int32_t L_14 = ___required0;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_11)->max_length))))-(int32_t)L_13))) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_0;
		if (L_15)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0068;
	}

IL_004b:
	{
	}

IL_004c:
	{
		ProtoWriter_t2800220307 * L_16 = ___writer1;
		NullCheck(L_16);
		ByteU5BU5D_t3397334013** L_17 = L_16->get_address_of_ioBuffer_9();
		int32_t L_18 = ___required0;
		ProtoWriter_t2800220307 * L_19 = ___writer1;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_ioIndex_10();
		ProtoWriter_t2800220307 * L_21 = ___writer1;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_ioIndex_10();
		IL2CPP_RUNTIME_CLASS_INIT(BufferPool_t710398810_il2cpp_TypeInfo_var);
		BufferPool_ResizeAndFlushLeft_m3855590401(NULL /*static, unused*/, L_17, ((int32_t)((int32_t)L_18+(int32_t)L_20)), 0, L_22, /*hidden argument*/NULL);
	}

IL_0068:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::Close()
extern Il2CppClass* InvalidOperationException_t721527559_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral379022273;
extern const uint32_t ProtoWriter_Close_m1410314238_MetadataUsageId;
extern "C"  void ProtoWriter_Close_m1410314238 (ProtoWriter_t2800220307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_Close_m1410314238_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_depth_6();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->get_flushLock_4();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		InvalidOperationException_t721527559 * L_3 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_3, _stringLiteral379022273, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0025:
	{
		ProtoWriter_Dispose_m3129385301(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::Flush(ProtoBuf.ProtoWriter)
extern "C"  void ProtoWriter_Flush_m3423533880 (Il2CppObject * __this /* static, unused */, ProtoWriter_t2800220307 * ___writer0, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_flushLock_4();
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ProtoWriter_t2800220307 * L_2 = ___writer0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_ioIndex_10();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		ProtoWriter_t2800220307 * L_5 = ___writer0;
		NullCheck(L_5);
		Stream_t3255436806 * L_6 = L_5->get_dest_0();
		ProtoWriter_t2800220307 * L_7 = ___writer0;
		NullCheck(L_7);
		ByteU5BU5D_t3397334013* L_8 = L_7->get_ioBuffer_9();
		ProtoWriter_t2800220307 * L_9 = ___writer0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_ioIndex_10();
		NullCheck(L_6);
		VirtActionInvoker3< ByteU5BU5D_t3397334013*, int32_t, int32_t >::Invoke(22 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_6, L_8, 0, L_10);
		ProtoWriter_t2800220307 * L_11 = ___writer0;
		NullCheck(L_11);
		L_11->set_ioIndex_10(0);
	}

IL_003c:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteUInt32Variant(System.UInt32,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_WriteUInt32Variant_m3352513463_MetadataUsageId;
extern "C"  void ProtoWriter_WriteUInt32Variant_m3352513463 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteUInt32Variant_m3352513463_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, 5, L_0, /*hidden argument*/NULL);
		V_0 = 0;
	}

IL_000b:
	{
		ProtoWriter_t2800220307 * L_1 = ___writer1;
		NullCheck(L_1);
		ByteU5BU5D_t3397334013* L_2 = L_1->get_ioBuffer_9();
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		ProtoWriter_t2800220307 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_ioIndex_10();
		int32_t L_6 = L_5;
		V_1 = L_6;
		NullCheck(L_4);
		L_4->set_ioIndex_10(((int32_t)((int32_t)L_6+(int32_t)1)));
		int32_t L_7 = V_1;
		uint32_t L_8 = ___value0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_7);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)127)))|(int32_t)((int32_t)128)))))));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
		uint32_t L_10 = ___value0;
		int32_t L_11 = ((int32_t)((uint32_t)L_10>>7));
		___value0 = L_11;
		V_2 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_000b;
		}
	}
	{
		ProtoWriter_t2800220307 * L_13 = ___writer1;
		NullCheck(L_13);
		ByteU5BU5D_t3397334013* L_14 = L_13->get_ioBuffer_9();
		ProtoWriter_t2800220307 * L_15 = ___writer1;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_ioIndex_10();
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_16-(int32_t)1)));
		uint8_t* L_17 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_16-(int32_t)1)))));
		(*(uint8_t*)L_17) = (((int32_t)((uint8_t)((int32_t)((int32_t)(*(uint8_t*)L_17)&(int32_t)((int32_t)127))))));
		ProtoWriter_t2800220307 * L_18 = ___writer1;
		ProtoWriter_t2800220307 * L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_position_11();
		int32_t L_21 = V_0;
		NullCheck(L_19);
		L_19->set_position_11(((int32_t)((int32_t)L_20+(int32_t)L_21)));
		return;
	}
}
// System.UInt32 ProtoBuf.ProtoWriter::Zig(System.Int32)
extern "C"  uint32_t ProtoWriter_Zig_m1566203146 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___value0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)1))^(int32_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)31)))));
		goto IL_000c;
	}

IL_000c:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// System.UInt64 ProtoBuf.ProtoWriter::Zig(System.Int64)
extern "C"  uint64_t ProtoWriter_Zig_m316332600 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		int64_t L_0 = ___value0;
		int64_t L_1 = ___value0;
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_0<<(int32_t)1))^(int64_t)((int64_t)((int64_t)L_1>>(int32_t)((int32_t)63)))));
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_2 = V_0;
		return L_2;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteUInt64Variant(System.UInt64,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_WriteUInt64Variant_m857837563_MetadataUsageId;
extern "C"  void ProtoWriter_WriteUInt64Variant_m857837563 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteUInt64Variant_m857837563_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, ((int32_t)10), L_0, /*hidden argument*/NULL);
		V_0 = 0;
	}

IL_000c:
	{
		ProtoWriter_t2800220307 * L_1 = ___writer1;
		NullCheck(L_1);
		ByteU5BU5D_t3397334013* L_2 = L_1->get_ioBuffer_9();
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		ProtoWriter_t2800220307 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_ioIndex_10();
		int32_t L_6 = L_5;
		V_1 = L_6;
		NullCheck(L_4);
		L_4->set_ioIndex_10(((int32_t)((int32_t)L_6+(int32_t)1)));
		int32_t L_7 = V_1;
		uint64_t L_8 = ___value0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_7);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_8&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))|(int64_t)(((int64_t)((int64_t)((int32_t)128))))))))));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
		uint64_t L_10 = ___value0;
		int64_t L_11 = ((int64_t)((uint64_t)L_10>>7));
		___value0 = L_11;
		V_2 = (bool)((((int32_t)((((int64_t)L_11) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		ProtoWriter_t2800220307 * L_13 = ___writer1;
		NullCheck(L_13);
		ByteU5BU5D_t3397334013* L_14 = L_13->get_ioBuffer_9();
		ProtoWriter_t2800220307 * L_15 = ___writer1;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_ioIndex_10();
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_16-(int32_t)1)));
		uint8_t* L_17 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_16-(int32_t)1)))));
		(*(uint8_t*)L_17) = (((int32_t)((uint8_t)((int32_t)((int32_t)(*(uint8_t*)L_17)&(int32_t)((int32_t)127))))));
		ProtoWriter_t2800220307 * L_18 = ___writer1;
		ProtoWriter_t2800220307 * L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_position_11();
		int32_t L_21 = V_0;
		NullCheck(L_19);
		L_19->set_position_11(((int32_t)((int32_t)L_20+(int32_t)L_21)));
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteString(System.String,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern Il2CppCodeGenString* _stringLiteral1803325615;
extern const uint32_t ProtoWriter_WriteString_m1753820128_MetadataUsageId;
extern "C"  void ProtoWriter_WriteString_m1753820128 (Il2CppObject * __this /* static, unused */, String_t* ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteString_m1753820128_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_5();
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		ProtoWriter_t2800220307 * L_6 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_7 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_002b:
	{
		String_t* L_8 = ___value0;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(String_t*)L_8) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0041;
		}
	}
	{
		ArgumentNullException_t628810857 * L_10 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_10, _stringLiteral1803325615, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_0041:
	{
		String_t* L_11 = ___value0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m1606060069(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0065;
		}
	}
	{
		ProtoWriter_t2800220307 * L_15 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt32Variant_m3352513463(NULL /*static, unused*/, 0, L_15, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_16 = ___writer1;
		NullCheck(L_16);
		L_16->set_wireType_5((-1));
		goto IL_00b2;
	}

IL_0065:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		UTF8Encoding_t111055448 * L_17 = ((ProtoWriter_t2800220307_StaticFields*)ProtoWriter_t2800220307_il2cpp_TypeInfo_var->static_fields)->get_encoding_12();
		String_t* L_18 = ___value0;
		NullCheck(L_17);
		int32_t L_19 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(6 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_17, L_18);
		V_1 = L_19;
		int32_t L_20 = V_1;
		ProtoWriter_t2800220307 * L_21 = ___writer1;
		ProtoWriter_WriteUInt32Variant_m3352513463(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_1;
		ProtoWriter_t2800220307 * L_23 = ___writer1;
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		UTF8Encoding_t111055448 * L_24 = ((ProtoWriter_t2800220307_StaticFields*)ProtoWriter_t2800220307_il2cpp_TypeInfo_var->static_fields)->get_encoding_12();
		String_t* L_25 = ___value0;
		String_t* L_26 = ___value0;
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_m1606060069(L_26, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_28 = ___writer1;
		NullCheck(L_28);
		ByteU5BU5D_t3397334013* L_29 = L_28->get_ioBuffer_9();
		ProtoWriter_t2800220307 * L_30 = ___writer1;
		NullCheck(L_30);
		int32_t L_31 = L_30->get_ioIndex_10();
		NullCheck(L_24);
		int32_t L_32 = VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_t3397334013*, int32_t >::Invoke(9 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_24, L_25, 0, L_27, L_29, L_31);
		V_2 = L_32;
		int32_t L_33 = V_1;
		int32_t L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		Helpers_DebugAssert_m763024030(NULL /*static, unused*/, (bool)((((int32_t)L_33) == ((int32_t)L_34))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_35 = V_2;
		ProtoWriter_t2800220307 * L_36 = ___writer1;
		ProtoWriter_IncrementedAndReset_m4048663141(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteUInt64(System.UInt64,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern const uint32_t ProtoWriter_WriteUInt64_m4018111616_MetadataUsageId;
extern "C"  void ProtoWriter_WriteUInt64_m4018111616 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteUInt64_m4018111616_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		V_0 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_5();
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5 == 0)
		{
			goto IL_003c;
		}
		if (L_5 == 1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_004d;
		}
	}
	{
		goto IL_005a;
	}

IL_0032:
	{
		uint64_t L_7 = ___value0;
		ProtoWriter_t2800220307 * L_8 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt64_m2297047412(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_003c:
	{
		uint64_t L_9 = ___value0;
		ProtoWriter_t2800220307 * L_10 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt64Variant_m857837563(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_11 = ___writer1;
		NullCheck(L_11);
		L_11->set_wireType_5((-1));
		goto IL_0061;
	}

IL_004d:
	{
		uint64_t L_12 = ___value0;
		if ((uint64_t)(L_12) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		ProtoWriter_t2800220307 * L_13 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt32_m2195237856(NULL /*static, unused*/, (((uint32_t)((uint32_t)L_12))), L_13, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_005a:
	{
		ProtoWriter_t2800220307 * L_14 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_15 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15);
	}

IL_0061:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteInt64(System.Int64,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern const uint32_t ProtoWriter_WriteInt64_m2297047412_MetadataUsageId;
extern "C"  void ProtoWriter_WriteInt64_m2297047412 (Il2CppObject * __this /* static, unused */, int64_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteInt64_m2297047412_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_5();
		V_3 = L_4;
		int32_t L_5 = V_3;
		if (L_5 == 0)
		{
			goto IL_00c2;
		}
		if (L_5 == 1)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = V_3;
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_019f;
		}
	}
	{
		int32_t L_7 = V_3;
		if ((((int32_t)L_7) == ((int32_t)8)))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_01ac;
	}

IL_003c:
	{
		ProtoWriter_t2800220307 * L_8 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, 8, L_8, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_9 = ___writer1;
		NullCheck(L_9);
		ByteU5BU5D_t3397334013* L_10 = L_9->get_ioBuffer_9();
		V_0 = L_10;
		ProtoWriter_t2800220307 * L_11 = ___writer1;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_ioIndex_10();
		V_1 = L_12;
		ByteU5BU5D_t3397334013* L_13 = V_0;
		int32_t L_14 = V_1;
		int64_t L_15 = ___value0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)(((int32_t)((uint8_t)L_15))));
		ByteU5BU5D_t3397334013* L_16 = V_0;
		int32_t L_17 = V_1;
		int64_t L_18 = ___value0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)((int32_t)L_17+(int32_t)1)));
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_17+(int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_18>>(int32_t)8))))));
		ByteU5BU5D_t3397334013* L_19 = V_0;
		int32_t L_20 = V_1;
		int64_t L_21 = ___value0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)((int32_t)L_20+(int32_t)2)));
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_20+(int32_t)2))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_21>>(int32_t)((int32_t)16)))))));
		ByteU5BU5D_t3397334013* L_22 = V_0;
		int32_t L_23 = V_1;
		int64_t L_24 = ___value0;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, ((int32_t)((int32_t)L_23+(int32_t)3)));
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_23+(int32_t)3))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_24>>(int32_t)((int32_t)24)))))));
		ByteU5BU5D_t3397334013* L_25 = V_0;
		int32_t L_26 = V_1;
		int64_t L_27 = ___value0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)((int32_t)L_26+(int32_t)4)));
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_26+(int32_t)4))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_27>>(int32_t)((int32_t)32)))))));
		ByteU5BU5D_t3397334013* L_28 = V_0;
		int32_t L_29 = V_1;
		int64_t L_30 = ___value0;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29+(int32_t)5)));
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_29+(int32_t)5))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_30>>(int32_t)((int32_t)40)))))));
		ByteU5BU5D_t3397334013* L_31 = V_0;
		int32_t L_32 = V_1;
		int64_t L_33 = ___value0;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)((int32_t)L_32+(int32_t)6)));
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_32+(int32_t)6))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_33>>(int32_t)((int32_t)48)))))));
		ByteU5BU5D_t3397334013* L_34 = V_0;
		int32_t L_35 = V_1;
		int64_t L_36 = ___value0;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)7)));
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_35+(int32_t)7))), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_36>>(int32_t)((int32_t)56)))))));
		ProtoWriter_t2800220307 * L_37 = ___writer1;
		ProtoWriter_IncrementedAndReset_m4048663141(NULL /*static, unused*/, 8, L_37, /*hidden argument*/NULL);
		goto IL_01b3;
	}

IL_00a9:
	{
		int64_t L_38 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		uint64_t L_39 = ProtoWriter_Zig_m316332600(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_40 = ___writer1;
		ProtoWriter_WriteUInt64Variant_m857837563(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_41 = ___writer1;
		NullCheck(L_41);
		L_41->set_wireType_5((-1));
		goto IL_01b3;
	}

IL_00c2:
	{
		int64_t L_42 = ___value0;
		V_2 = (bool)((((int64_t)L_42) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_43 = V_2;
		if (L_43)
		{
			goto IL_00e1;
		}
	}
	{
		int64_t L_44 = ___value0;
		ProtoWriter_t2800220307 * L_45 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt64Variant_m857837563(NULL /*static, unused*/, L_44, L_45, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_46 = ___writer1;
		NullCheck(L_46);
		L_46->set_wireType_5((-1));
		goto IL_019d;
	}

IL_00e1:
	{
		ProtoWriter_t2800220307 * L_47 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, ((int32_t)10), L_47, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_48 = ___writer1;
		NullCheck(L_48);
		ByteU5BU5D_t3397334013* L_49 = L_48->get_ioBuffer_9();
		V_0 = L_49;
		ProtoWriter_t2800220307 * L_50 = ___writer1;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_ioIndex_10();
		V_1 = L_51;
		ByteU5BU5D_t3397334013* L_52 = V_0;
		int32_t L_53 = V_1;
		int64_t L_54 = ___value0;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_54|(int64_t)(((int64_t)((int64_t)((int32_t)128))))))))));
		ByteU5BU5D_t3397334013* L_55 = V_0;
		int32_t L_56 = V_1;
		int64_t L_57 = ___value0;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, ((int32_t)((int32_t)L_56+(int32_t)1)));
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_56+(int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_57>>(int32_t)7)))))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_58 = V_0;
		int32_t L_59 = V_1;
		int64_t L_60 = ___value0;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, ((int32_t)((int32_t)L_59+(int32_t)2)));
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_59+(int32_t)2))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_60>>(int32_t)((int32_t)14))))))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_61 = V_0;
		int32_t L_62 = V_1;
		int64_t L_63 = ___value0;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, ((int32_t)((int32_t)L_62+(int32_t)3)));
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_62+(int32_t)3))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_63>>(int32_t)((int32_t)21))))))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_64 = V_0;
		int32_t L_65 = V_1;
		int64_t L_66 = ___value0;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, ((int32_t)((int32_t)L_65+(int32_t)4)));
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_65+(int32_t)4))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_66>>(int32_t)((int32_t)28))))))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_67 = V_0;
		int32_t L_68 = V_1;
		int64_t L_69 = ___value0;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, ((int32_t)((int32_t)L_68+(int32_t)5)));
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_68+(int32_t)5))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_69>>(int32_t)((int32_t)35))))))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_70 = V_0;
		int32_t L_71 = V_1;
		int64_t L_72 = ___value0;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, ((int32_t)((int32_t)L_71+(int32_t)6)));
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_71+(int32_t)6))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_72>>(int32_t)((int32_t)42))))))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_73 = V_0;
		int32_t L_74 = V_1;
		int64_t L_75 = ___value0;
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, ((int32_t)((int32_t)L_74+(int32_t)7)));
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_74+(int32_t)7))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_75>>(int32_t)((int32_t)49))))))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_76 = V_0;
		int32_t L_77 = V_1;
		int64_t L_78 = ___value0;
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, ((int32_t)((int32_t)L_77+(int32_t)8)));
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_77+(int32_t)8))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)L_78>>(int32_t)((int32_t)56))))))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_79 = V_0;
		int32_t L_80 = V_1;
		NullCheck(L_79);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_79, ((int32_t)((int32_t)L_80+(int32_t)((int32_t)9))));
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_80+(int32_t)((int32_t)9)))), (uint8_t)1);
		ProtoWriter_t2800220307 * L_81 = ___writer1;
		ProtoWriter_IncrementedAndReset_m4048663141(NULL /*static, unused*/, ((int32_t)10), L_81, /*hidden argument*/NULL);
	}

IL_019d:
	{
		goto IL_01b3;
	}

IL_019f:
	{
		int64_t L_82 = ___value0;
		if ((int64_t)(L_82) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		ProtoWriter_t2800220307 * L_83 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt32_m17565190(NULL /*static, unused*/, (((int32_t)((int32_t)L_82))), L_83, /*hidden argument*/NULL);
		goto IL_01b3;
	}

IL_01ac:
	{
		ProtoWriter_t2800220307 * L_84 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_85 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_85);
	}

IL_01b3:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteUInt32(System.UInt32,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern const uint32_t ProtoWriter_WriteUInt32_m2195237856_MetadataUsageId;
extern "C"  void ProtoWriter_WriteUInt32_m2195237856 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteUInt32_m2195237856_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		V_0 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_5();
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5 == 0)
		{
			goto IL_0047;
		}
		if (L_5 == 1)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0058;
	}

IL_0032:
	{
		uint32_t L_7 = ___value0;
		ProtoWriter_t2800220307 * L_8 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt32_m17565190(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		goto IL_005f;
	}

IL_003c:
	{
		uint32_t L_9 = ___value0;
		ProtoWriter_t2800220307 * L_10 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt64_m2297047412(NULL /*static, unused*/, (((int64_t)((int64_t)(((int32_t)((int32_t)L_9)))))), L_10, /*hidden argument*/NULL);
		goto IL_005f;
	}

IL_0047:
	{
		uint32_t L_11 = ___value0;
		ProtoWriter_t2800220307 * L_12 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt32Variant_m3352513463(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_13 = ___writer1;
		NullCheck(L_13);
		L_13->set_wireType_5((-1));
		goto IL_005f;
	}

IL_0058:
	{
		ProtoWriter_t2800220307 * L_14 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_15 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15);
	}

IL_005f:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteInt16(System.Int16,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_WriteInt16_m3038254698_MetadataUsageId;
extern "C"  void ProtoWriter_WriteInt16_m3038254698 (Il2CppObject * __this /* static, unused */, int16_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteInt16_m3038254698_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int16_t L_0 = ___value0;
		ProtoWriter_t2800220307 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt32_m17565190(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteUInt16(System.UInt16,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_WriteUInt16_m3925698464_MetadataUsageId;
extern "C"  void ProtoWriter_WriteUInt16_m3925698464 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteUInt16_m3925698464_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___value0;
		ProtoWriter_t2800220307 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt32_m2195237856(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteByte(System.Byte,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_WriteByte_m2071571808_MetadataUsageId;
extern "C"  void ProtoWriter_WriteByte_m2071571808 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteByte_m2071571808_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint8_t L_0 = ___value0;
		ProtoWriter_t2800220307 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt32_m2195237856(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteSByte(System.SByte,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_WriteSByte_m2987643684_MetadataUsageId;
extern "C"  void ProtoWriter_WriteSByte_m2987643684 (Il2CppObject * __this /* static, unused */, int8_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteSByte_m2987643684_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int8_t L_0 = ___value0;
		ProtoWriter_t2800220307 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt32_m17565190(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteInt32ToBuffer(System.Int32,System.Byte[],System.Int32)
extern "C"  void ProtoWriter_WriteInt32ToBuffer_m4178419997 (Il2CppObject * __this /* static, unused */, int32_t ___value0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___index2, const MethodInfo* method)
{
	{
		ByteU5BU5D_t3397334013* L_0 = ___buffer1;
		int32_t L_1 = ___index2;
		int32_t L_2 = ___value0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)(((int32_t)((uint8_t)L_2))));
		ByteU5BU5D_t3397334013* L_3 = ___buffer1;
		int32_t L_4 = ___index2;
		int32_t L_5 = ___value0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)));
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_4+(int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))))));
		ByteU5BU5D_t3397334013* L_6 = ___buffer1;
		int32_t L_7 = ___index2;
		int32_t L_8 = ___value0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)2)));
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_7+(int32_t)2))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_8>>(int32_t)((int32_t)16)))))));
		ByteU5BU5D_t3397334013* L_9 = ___buffer1;
		int32_t L_10 = ___index2;
		int32_t L_11 = ___value0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)3)));
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_10+(int32_t)3))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)24)))))));
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteInt32(System.Int32,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern const uint32_t ProtoWriter_WriteInt32_m17565190_MetadataUsageId;
extern "C"  void ProtoWriter_WriteInt32_m17565190 (Il2CppObject * __this /* static, unused */, int32_t ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteInt32_m17565190_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t3397334013* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_5();
		V_3 = L_4;
		int32_t L_5 = V_3;
		if (L_5 == 0)
		{
			goto IL_00e6;
		}
		if (L_5 == 1)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_6 = V_3;
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = V_3;
		if ((((int32_t)L_7) == ((int32_t)8)))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01a1;
	}

IL_003c:
	{
		ProtoWriter_t2800220307 * L_8 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, 4, L_8, /*hidden argument*/NULL);
		int32_t L_9 = ___value0;
		ProtoWriter_t2800220307 * L_10 = ___writer1;
		NullCheck(L_10);
		ByteU5BU5D_t3397334013* L_11 = L_10->get_ioBuffer_9();
		ProtoWriter_t2800220307 * L_12 = ___writer1;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_ioIndex_10();
		ProtoWriter_WriteInt32ToBuffer_m4178419997(NULL /*static, unused*/, L_9, L_11, L_13, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_14 = ___writer1;
		ProtoWriter_IncrementedAndReset_m4048663141(NULL /*static, unused*/, 4, L_14, /*hidden argument*/NULL);
		goto IL_01a8;
	}

IL_0064:
	{
		ProtoWriter_t2800220307 * L_15 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, 8, L_15, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_16 = ___writer1;
		NullCheck(L_16);
		ByteU5BU5D_t3397334013* L_17 = L_16->get_ioBuffer_9();
		V_0 = L_17;
		ProtoWriter_t2800220307 * L_18 = ___writer1;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_ioIndex_10();
		V_1 = L_19;
		ByteU5BU5D_t3397334013* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = ___value0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)(((int32_t)((uint8_t)L_22))));
		ByteU5BU5D_t3397334013* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = ___value0;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)((int32_t)L_24+(int32_t)1)));
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_24+(int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_25>>(int32_t)8))))));
		ByteU5BU5D_t3397334013* L_26 = V_0;
		int32_t L_27 = V_1;
		int32_t L_28 = ___value0;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)((int32_t)L_27+(int32_t)2)));
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_27+(int32_t)2))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_28>>(int32_t)((int32_t)16)))))));
		ByteU5BU5D_t3397334013* L_29 = V_0;
		int32_t L_30 = V_1;
		int32_t L_31 = ___value0;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)((int32_t)L_30+(int32_t)3)));
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_30+(int32_t)3))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_31>>(int32_t)((int32_t)24)))))));
		ByteU5BU5D_t3397334013* L_32 = V_0;
		int32_t L_33 = V_1;
		ByteU5BU5D_t3397334013* L_34 = V_0;
		int32_t L_35 = V_1;
		ByteU5BU5D_t3397334013* L_36 = V_0;
		int32_t L_37 = V_1;
		ByteU5BU5D_t3397334013* L_38 = V_0;
		int32_t L_39 = V_1;
		int32_t L_40 = 0;
		V_4 = L_40;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)((int32_t)L_39+(int32_t)7)));
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_39+(int32_t)7))), (uint8_t)L_40);
		uint8_t L_41 = V_4;
		uint8_t L_42 = L_41;
		V_4 = L_42;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)((int32_t)L_37+(int32_t)6)));
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_37+(int32_t)6))), (uint8_t)L_42);
		uint8_t L_43 = V_4;
		uint8_t L_44 = L_43;
		V_4 = L_44;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)5)));
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_35+(int32_t)5))), (uint8_t)L_44);
		uint8_t L_45 = V_4;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)((int32_t)L_33+(int32_t)4)));
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_33+(int32_t)4))), (uint8_t)L_45);
		ProtoWriter_t2800220307 * L_46 = ___writer1;
		ProtoWriter_IncrementedAndReset_m4048663141(NULL /*static, unused*/, 8, L_46, /*hidden argument*/NULL);
		goto IL_01a8;
	}

IL_00cd:
	{
		int32_t L_47 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		uint32_t L_48 = ProtoWriter_Zig_m1566203146(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_49 = ___writer1;
		ProtoWriter_WriteUInt32Variant_m3352513463(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_50 = ___writer1;
		NullCheck(L_50);
		L_50->set_wireType_5((-1));
		goto IL_01a8;
	}

IL_00e6:
	{
		int32_t L_51 = ___value0;
		V_2 = (bool)((((int32_t)L_51) < ((int32_t)0))? 1 : 0);
		bool L_52 = V_2;
		if (L_52)
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_53 = ___value0;
		ProtoWriter_t2800220307 * L_54 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt32Variant_m3352513463(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_55 = ___writer1;
		NullCheck(L_55);
		L_55->set_wireType_5((-1));
		goto IL_019f;
	}

IL_0104:
	{
		ProtoWriter_t2800220307 * L_56 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_DemandSpace_m1534116038(NULL /*static, unused*/, ((int32_t)10), L_56, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_57 = ___writer1;
		NullCheck(L_57);
		ByteU5BU5D_t3397334013* L_58 = L_57->get_ioBuffer_9();
		V_0 = L_58;
		ProtoWriter_t2800220307 * L_59 = ___writer1;
		NullCheck(L_59);
		int32_t L_60 = L_59->get_ioIndex_10();
		V_1 = L_60;
		ByteU5BU5D_t3397334013* L_61 = V_0;
		int32_t L_62 = V_1;
		int32_t L_63 = ___value0;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_63|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_64 = V_0;
		int32_t L_65 = V_1;
		int32_t L_66 = ___value0;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, ((int32_t)((int32_t)L_65+(int32_t)1)));
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_65+(int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_66>>(int32_t)7))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_67 = V_0;
		int32_t L_68 = V_1;
		int32_t L_69 = ___value0;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, ((int32_t)((int32_t)L_68+(int32_t)2)));
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_68+(int32_t)2))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_69>>(int32_t)((int32_t)14)))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_70 = V_0;
		int32_t L_71 = V_1;
		int32_t L_72 = ___value0;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, ((int32_t)((int32_t)L_71+(int32_t)3)));
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_71+(int32_t)3))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_72>>(int32_t)((int32_t)21)))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_73 = V_0;
		int32_t L_74 = V_1;
		int32_t L_75 = ___value0;
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, ((int32_t)((int32_t)L_74+(int32_t)4)));
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_74+(int32_t)4))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_75>>(int32_t)((int32_t)28)))|(int32_t)((int32_t)128)))))));
		ByteU5BU5D_t3397334013* L_76 = V_0;
		int32_t L_77 = V_1;
		ByteU5BU5D_t3397334013* L_78 = V_0;
		int32_t L_79 = V_1;
		ByteU5BU5D_t3397334013* L_80 = V_0;
		int32_t L_81 = V_1;
		ByteU5BU5D_t3397334013* L_82 = V_0;
		int32_t L_83 = V_1;
		int32_t L_84 = ((int32_t)255);
		V_4 = L_84;
		NullCheck(L_82);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_82, ((int32_t)((int32_t)L_83+(int32_t)8)));
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_83+(int32_t)8))), (uint8_t)L_84);
		uint8_t L_85 = V_4;
		uint8_t L_86 = L_85;
		V_4 = L_86;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, ((int32_t)((int32_t)L_81+(int32_t)7)));
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_81+(int32_t)7))), (uint8_t)L_86);
		uint8_t L_87 = V_4;
		uint8_t L_88 = L_87;
		V_4 = L_88;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, ((int32_t)((int32_t)L_79+(int32_t)6)));
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_79+(int32_t)6))), (uint8_t)L_88);
		uint8_t L_89 = V_4;
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, ((int32_t)((int32_t)L_77+(int32_t)5)));
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_77+(int32_t)5))), (uint8_t)L_89);
		ByteU5BU5D_t3397334013* L_90 = V_0;
		int32_t L_91 = V_1;
		NullCheck(L_90);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_90, ((int32_t)((int32_t)L_91+(int32_t)((int32_t)9))));
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_91+(int32_t)((int32_t)9)))), (uint8_t)1);
		ProtoWriter_t2800220307 * L_92 = ___writer1;
		ProtoWriter_IncrementedAndReset_m4048663141(NULL /*static, unused*/, ((int32_t)10), L_92, /*hidden argument*/NULL);
	}

IL_019f:
	{
		goto IL_01a8;
	}

IL_01a1:
	{
		ProtoWriter_t2800220307 * L_93 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_94 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_93, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94);
	}

IL_01a8:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteDouble(System.Double,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* Helpers_t2267943139_il2cpp_TypeInfo_var;
extern Il2CppClass* OverflowException_t1075868493_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* BitConverter_t3195628829_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern const uint32_t ProtoWriter_WriteDouble_m2235324640_MetadataUsageId;
extern "C"  void ProtoWriter_WriteDouble_m2235324640 (Il2CppObject * __this /* static, unused */, double ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteDouble_m2235324640_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_5();
		V_2 = L_4;
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0067;
	}

IL_0028:
	{
		double L_7 = ___value0;
		V_0 = (((float)((float)L_7)));
		float L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		bool L_9 = Helpers_IsInfinity_m517628195(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		double L_10 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Helpers_t2267943139_il2cpp_TypeInfo_var);
		bool L_11 = Helpers_IsInfinity_m1113709690(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_11));
		goto IL_003c;
	}

IL_003b:
	{
		G_B8_0 = 1;
	}

IL_003c:
	{
		V_1 = (bool)G_B8_0;
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_0048;
		}
	}
	{
		OverflowException_t1075868493 * L_13 = (OverflowException_t1075868493 *)il2cpp_codegen_object_new(OverflowException_t1075868493_il2cpp_TypeInfo_var);
		OverflowException__ctor_m2564269836(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13);
	}

IL_0048:
	{
		float L_14 = V_0;
		ProtoWriter_t2800220307 * L_15 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteSingle_m1038482432(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_0052:
	{
		double L_16 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3195628829_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_17 = BitConverter_GetBytes_m4115681617(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		int64_t L_18 = BitConverter_ToInt64_m1329623425(NULL /*static, unused*/, L_17, 0, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_19 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt64_m2297047412(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_0067:
	{
		ProtoWriter_t2800220307 * L_20 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_21 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21);
	}

IL_006e:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteSingle(System.Single,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* BitConverter_t3195628829_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern const uint32_t ProtoWriter_WriteSingle_m1038482432_MetadataUsageId;
extern "C"  void ProtoWriter_WriteSingle_m1038482432 (Il2CppObject * __this /* static, unused */, float ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteSingle_m1038482432_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer1;
		V_0 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_5();
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0048;
	}

IL_0028:
	{
		float L_7 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3195628829_il2cpp_TypeInfo_var);
		ByteU5BU5D_t3397334013* L_8 = BitConverter_GetBytes_m4095372044(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		int32_t L_9 = BitConverter_ToInt32_m2742027961(NULL /*static, unused*/, L_8, 0, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_10 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteInt32_m17565190(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_003d:
	{
		float L_11 = ___value0;
		ProtoWriter_t2800220307 * L_12 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteDouble_m2235324640(NULL /*static, unused*/, (((double)((double)L_11))), L_12, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0048:
	{
		ProtoWriter_t2800220307 * L_13 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_14 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_004f:
	{
		return;
	}
}
// System.Exception ProtoBuf.ProtoWriter::CreateException(ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* WireType_t4172783757_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoException_t1712273663_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern Il2CppCodeGenString* _stringLiteral1949110272;
extern Il2CppCodeGenString* _stringLiteral1419650210;
extern const uint32_t ProtoWriter_CreateException_m2995793590_MetadataUsageId;
extern "C"  Exception_t1927440687 * ProtoWriter_CreateException_m2995793590 (Il2CppObject * __this /* static, unused */, ProtoWriter_t2800220307 * ___writer0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_CreateException_m2995793590_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t1927440687 * V_0 = NULL;
	bool V_1 = false;
	{
		ProtoWriter_t2800220307 * L_0 = ___writer0;
		V_1 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_wireType_5();
		int32_t L_5 = L_4;
		Il2CppObject * L_6 = Box(WireType_t4172783757_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		ProtoWriter_t2800220307 * L_8 = ___writer0;
		NullCheck(L_8);
		int32_t* L_9 = L_8->get_address_of_position_11();
		String_t* L_10 = Int32_ToString_m2960866144(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m1561703559(NULL /*static, unused*/, _stringLiteral1949110272, L_7, _stringLiteral1419650210, L_10, /*hidden argument*/NULL);
		ProtoException_t1712273663 * L_12 = (ProtoException_t1712273663 *)il2cpp_codegen_object_new(ProtoException_t1712273663_il2cpp_TypeInfo_var);
		ProtoException__ctor_m2708038802(L_12, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0049;
	}

IL_0049:
	{
		Exception_t1927440687 * L_13 = V_0;
		return L_13;
	}
}
// System.Void ProtoBuf.ProtoWriter::WriteBoolean(System.Boolean,ProtoBuf.ProtoWriter)
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter_WriteBoolean_m3404534090_MetadataUsageId;
extern "C"  void ProtoWriter_WriteBoolean_m3404534090 (Il2CppObject * __this /* static, unused */, bool ___value0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_WriteBoolean_m3404534090_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___value0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
	}

IL_0008:
	{
		ProtoWriter_t2800220307 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteUInt32_m2195237856(NULL /*static, unused*/, G_B3_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::AppendExtensionData(ProtoBuf.IExtensible,ProtoBuf.ProtoWriter)
extern Il2CppClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppClass* IExtensible_t151450440_il2cpp_TypeInfo_var;
extern Il2CppClass* IExtension_t1221360786_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3919307841;
extern Il2CppCodeGenString* _stringLiteral3496454067;
extern const uint32_t ProtoWriter_AppendExtensionData_m2081479740_MetadataUsageId;
extern "C"  void ProtoWriter_AppendExtensionData_m2081479740 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___instance0, ProtoWriter_t2800220307 * ___writer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter_AppendExtensionData_m2081479740_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Stream_t3255436806 * V_1 = NULL;
	bool V_2 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Il2CppObject * L_0 = ___instance0;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral3919307841, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		ProtoWriter_t2800220307 * L_3 = ___writer1;
		V_2 = (bool)((((int32_t)((((Il2CppObject*)(ProtoWriter_t2800220307 *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentNullException_t628810857 * L_5 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_5, _stringLiteral3496454067, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_002d:
	{
		ProtoWriter_t2800220307 * L_6 = ___writer1;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_wireType_5();
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)(-1)))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0041;
		}
	}
	{
		ProtoWriter_t2800220307 * L_9 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		Exception_t1927440687 * L_10 = ProtoWriter_CreateException_m2995793590(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_0041:
	{
		Il2CppObject * L_11 = ___instance0;
		NullCheck(L_11);
		Il2CppObject * L_12 = InterfaceFuncInvoker1< Il2CppObject *, bool >::Invoke(0 /* ProtoBuf.IExtension ProtoBuf.IExtensible::GetExtensionObject(System.Boolean) */, IExtensible_t151450440_il2cpp_TypeInfo_var, L_11, (bool)0);
		V_0 = L_12;
		Il2CppObject * L_13 = V_0;
		V_2 = (bool)((((Il2CppObject*)(Il2CppObject *)L_13) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0072;
		}
	}
	{
		Il2CppObject * L_15 = V_0;
		NullCheck(L_15);
		Stream_t3255436806 * L_16 = InterfaceFuncInvoker0< Stream_t3255436806 * >::Invoke(2 /* System.IO.Stream ProtoBuf.IExtension::BeginQuery() */, IExtension_t1221360786_il2cpp_TypeInfo_var, L_15);
		V_1 = L_16;
	}

IL_0059:
	try
	{ // begin try (depth: 1)
		Stream_t3255436806 * L_17 = V_1;
		ProtoWriter_t2800220307 * L_18 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_CopyRawFromStream_m314537070(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x70, FINALLY_0065);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		Il2CppObject * L_19 = V_0;
		Stream_t3255436806 * L_20 = V_1;
		NullCheck(L_19);
		InterfaceActionInvoker1< Stream_t3255436806 * >::Invoke(3 /* System.Void ProtoBuf.IExtension::EndQuery(System.IO.Stream) */, IExtension_t1221360786_il2cpp_TypeInfo_var, L_19, L_20);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x70, IL_0070)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0070:
	{
	}

IL_0072:
	{
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::SetRootObject(System.Object)
extern "C"  void ProtoWriter_SetRootObject_m3939688437 (ProtoWriter_t2800220307 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		NetObjectCache_t2620415644 * L_0 = ProtoWriter_get_NetCache_m1655229476(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = ___value0;
		NullCheck(L_0);
		NetObjectCache_SetKeyedObject_m2545017919(L_0, 0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.ProtoWriter::.cctor()
extern Il2CppClass* UTF8Encoding_t111055448_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern const uint32_t ProtoWriter__cctor_m3703003289_MetadataUsageId;
extern "C"  void ProtoWriter__cctor_m3703003289 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtoWriter__cctor_m3703003289_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		UTF8Encoding_t111055448 * L_0 = (UTF8Encoding_t111055448 *)il2cpp_codegen_object_new(UTF8Encoding_t111055448_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m100325490(L_0, /*hidden argument*/NULL);
		((ProtoWriter_t2800220307_StaticFields*)ProtoWriter_t2800220307_il2cpp_TypeInfo_var->static_fields)->set_encoding_12(L_0);
		return;
	}
}
// System.Void ProtoBuf.SerializationContext::Freeze()
extern "C"  void SerializationContext_Freeze_m1525726585 (SerializationContext_t3878296411 * __this, const MethodInfo* method)
{
	{
		__this->set_frozen_0((bool)1);
		return;
	}
}
// System.Void ProtoBuf.SerializationContext::.cctor()
extern Il2CppClass* SerializationContext_t3878296411_il2cpp_TypeInfo_var;
extern const uint32_t SerializationContext__cctor_m3895470525_MetadataUsageId;
extern "C"  void SerializationContext__cctor_m3895470525 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SerializationContext__cctor_m3895470525_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationContext_t3878296411 * L_0 = (SerializationContext_t3878296411 *)il2cpp_codegen_object_new(SerializationContext_t3878296411_il2cpp_TypeInfo_var);
		SerializationContext__ctor_m1851559248(L_0, /*hidden argument*/NULL);
		((SerializationContext_t3878296411_StaticFields*)SerializationContext_t3878296411_il2cpp_TypeInfo_var->static_fields)->set_default_1(L_0);
		SerializationContext_t3878296411 * L_1 = ((SerializationContext_t3878296411_StaticFields*)SerializationContext_t3878296411_il2cpp_TypeInfo_var->static_fields)->get_default_1();
		NullCheck(L_1);
		SerializationContext_Freeze_m1525726585(L_1, /*hidden argument*/NULL);
		return;
	}
}
// ProtoBuf.SerializationContext ProtoBuf.SerializationContext::get_Default()
extern Il2CppClass* SerializationContext_t3878296411_il2cpp_TypeInfo_var;
extern const uint32_t SerializationContext_get_Default_m3829835231_MetadataUsageId;
extern "C"  SerializationContext_t3878296411 * SerializationContext_get_Default_m3829835231 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SerializationContext_get_Default_m3829835231_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	SerializationContext_t3878296411 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SerializationContext_t3878296411_il2cpp_TypeInfo_var);
		SerializationContext_t3878296411 * L_0 = ((SerializationContext_t3878296411_StaticFields*)SerializationContext_t3878296411_il2cpp_TypeInfo_var->static_fields)->get_default_1();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		SerializationContext_t3878296411 * L_1 = V_0;
		return L_1;
	}
}
// System.Void ProtoBuf.SerializationContext::.ctor()
extern "C"  void SerializationContext__ctor_m1851559248 (SerializationContext_t3878296411 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProtoBuf.SubItemToken::.ctor(System.Int32)
extern "C"  void SubItemToken__ctor_m1189156554 (SubItemToken_t3722101296 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_0(L_0);
		return;
	}
}
extern "C"  void SubItemToken__ctor_m1189156554_AdjustorThunk (Il2CppObject * __this, int32_t ___value0, const MethodInfo* method)
{
	SubItemToken_t3722101296 * _thisAdjusted = reinterpret_cast<SubItemToken_t3722101296 *>(__this + 1);
	SubItemToken__ctor_m1189156554(_thisAdjusted, ___value0, method);
}
// Conversion methods for marshalling of: ProtoBuf.SubItemToken
extern "C" void SubItemToken_t3722101296_marshal_pinvoke(const SubItemToken_t3722101296& unmarshaled, SubItemToken_t3722101296_marshaled_pinvoke& marshaled)
{
	marshaled.___value_0 = unmarshaled.get_value_0();
}
extern "C" void SubItemToken_t3722101296_marshal_pinvoke_back(const SubItemToken_t3722101296_marshaled_pinvoke& marshaled, SubItemToken_t3722101296& unmarshaled)
{
	int32_t unmarshaled_value_temp_0 = 0;
	unmarshaled_value_temp_0 = marshaled.___value_0;
	unmarshaled.set_value_0(unmarshaled_value_temp_0);
}
// Conversion method for clean up from marshalling of: ProtoBuf.SubItemToken
extern "C" void SubItemToken_t3722101296_marshal_pinvoke_cleanup(SubItemToken_t3722101296_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ProtoBuf.SubItemToken
extern "C" void SubItemToken_t3722101296_marshal_com(const SubItemToken_t3722101296& unmarshaled, SubItemToken_t3722101296_marshaled_com& marshaled)
{
	marshaled.___value_0 = unmarshaled.get_value_0();
}
extern "C" void SubItemToken_t3722101296_marshal_com_back(const SubItemToken_t3722101296_marshaled_com& marshaled, SubItemToken_t3722101296& unmarshaled)
{
	int32_t unmarshaled_value_temp_0 = 0;
	unmarshaled_value_temp_0 = marshaled.___value_0;
	unmarshaled.set_value_0(unmarshaled_value_temp_0);
}
// Conversion method for clean up from marshalling of: ProtoBuf.SubItemToken
extern "C" void SubItemToken_t3722101296_marshal_com_cleanup(SubItemToken_t3722101296_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
