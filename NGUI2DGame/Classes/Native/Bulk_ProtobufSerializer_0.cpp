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

// NGUI2DGame.PlayerData
struct PlayerData_t4175080041;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// com.TonyTang.ProtobufSerializer
struct ProtobufSerializer_t806432981;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "ProtobufSerializer_U3CModuleU3E3783534214.h"
#include "ProtobufSerializer_U3CModuleU3E3783534214MethodDeclarations.h"
#include "ProtobufSerializer_com_TonyTang_ProtobufSerializer806432981.h"
#include "ProtobufSerializer_com_TonyTang_ProtobufSerializer806432981MethodDeclarations.h"
#include "PlayerData_NGUI2DGame_PlayerData4175080041.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_Type1303803226MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_Meta_TypeModel653695305MethodDeclarations.h"
#include "PlayerData_NGUI2DGame_PlayerData4175080041MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307MethodDeclarations.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_RuntimeTypeHandle2330101084.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "protobufU2Dnet_ProtoBuf_WireType4172783757.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_ArrayTypes.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void com.TonyTang.ProtobufSerializer::Write(NGUI2DGame.PlayerData,ProtoBuf.ProtoWriter)
extern const Il2CppType* PlayerData_t4175080041_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* TypeModel_t653695305_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoWriter_t2800220307_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral371857150;
extern const uint32_t ProtobufSerializer_Write_m1076883231_MetadataUsageId;
extern "C"  void ProtobufSerializer_Write_m1076883231 (Il2CppObject * __this /* static, unused */, PlayerData_t4175080041 * p0, ProtoWriter_t2800220307 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtobufSerializer_Write_m1076883231_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		PlayerData_t4175080041 * L_0 = p0;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m191970594(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(PlayerData_t4175080041_0_0_0_var), /*hidden argument*/NULL);
		if ((((Il2CppObject*)(Type_t *)L_1) == ((Il2CppObject*)(Type_t *)L_2)))
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(PlayerData_t4175080041_0_0_0_var), /*hidden argument*/NULL);
		PlayerData_t4175080041 * L_4 = p0;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m191970594(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		TypeModel_ThrowUnexpectedSubtype_m1437867326(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		PlayerData_t4175080041 * L_6 = p0;
		NullCheck(L_6);
		String_t* L_7 = PlayerData_get_SceneName_m336014273(L_6, /*hidden argument*/NULL);
		String_t* L_8 = L_7;
		G_B3_0 = L_8;
		if (L_8)
		{
			G_B4_0 = L_8;
			goto IL_0036;
		}
	}
	{
		goto IL_0057;
	}

IL_0036:
	{
		String_t* L_9 = G_B4_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_9, _stringLiteral371857150, /*hidden argument*/NULL);
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_0056;
		}
	}
	{
		ProtoWriter_t2800220307 * L_11 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, 1, 2, L_11, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_12 = p1;
		ProtoWriter_WriteString_m1753820128(NULL /*static, unused*/, G_B5_0, L_12, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0056:
	{
	}

IL_0057:
	{
		PlayerData_t4175080041 * L_13 = p0;
		NullCheck(L_13);
		int32_t L_14 = PlayerData_get_Scores_m3776302840(L_13, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		G_B8_0 = L_15;
		if (!L_15)
		{
			G_B9_0 = L_15;
			goto IL_0073;
		}
	}
	{
		ProtoWriter_t2800220307 * L_16 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, 2, 0, L_16, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_17 = p1;
		ProtoWriter_WriteInt32_m17565190(NULL /*static, unused*/, G_B8_0, L_17, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0073:
	{
	}

IL_0074:
	{
		PlayerData_t4175080041 * L_18 = p0;
		NullCheck(L_18);
		int32_t L_19 = PlayerData_get_SpeedLevel_m1263896524(L_18, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		G_B11_0 = L_20;
		if (!L_20)
		{
			G_B12_0 = L_20;
			goto IL_0090;
		}
	}
	{
		ProtoWriter_t2800220307 * L_21 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_WriteFieldHeader_m3628644031(NULL /*static, unused*/, 3, 0, L_21, /*hidden argument*/NULL);
		ProtoWriter_t2800220307 * L_22 = p1;
		ProtoWriter_WriteInt32_m17565190(NULL /*static, unused*/, G_B11_0, L_22, /*hidden argument*/NULL);
		goto IL_0091;
	}

IL_0090:
	{
	}

IL_0091:
	{
		PlayerData_t4175080041 * L_23 = p0;
		ProtoWriter_t2800220307 * L_24 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoWriter_t2800220307_il2cpp_TypeInfo_var);
		ProtoWriter_AppendExtensionData_m2081479740(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		return;
	}
}
// NGUI2DGame.PlayerData com.TonyTang.ProtobufSerializer::Read(NGUI2DGame.PlayerData,ProtoBuf.ProtoReader)
extern Il2CppClass* PlayerData_t4175080041_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtoReader_t3981212867_il2cpp_TypeInfo_var;
extern const uint32_t ProtobufSerializer_Read_m4138305145_MetadataUsageId;
extern "C"  PlayerData_t4175080041 * ProtobufSerializer_Read_m4138305145 (Il2CppObject * __this /* static, unused */, PlayerData_t4175080041 * p0, ProtoReader_t3981212867 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtobufSerializer_Read_m4138305145_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		goto IL_00b3;
	}

IL_0005:
	{
		int32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0038;
	}

IL_000e:
	{
		PlayerData_t4175080041 * L_1 = p0;
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		PlayerData_t4175080041 * L_2 = (PlayerData_t4175080041 *)il2cpp_codegen_object_new(PlayerData_t4175080041_il2cpp_TypeInfo_var);
		PlayerData__ctor_m1179622856(L_2, /*hidden argument*/NULL);
		PlayerData_t4175080041 * L_3 = L_2;
		ProtoReader_t3981212867 * L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_NoteObject_m694014777(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		p0 = L_3;
	}

IL_0022:
	{
		ProtoReader_t3981212867 * L_5 = p1;
		NullCheck(L_5);
		String_t* L_6 = ProtoReader_ReadString_m1117385000(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		PlayerData_t4175080041 * L_8 = p0;
		String_t* L_9 = V_1;
		NullCheck(L_8);
		PlayerData_set_SceneName_m1862411122(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0033:
	{
		goto IL_00b3;
	}

IL_0038:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0068;
	}

IL_0041:
	{
		PlayerData_t4175080041 * L_11 = p0;
		if (L_11)
		{
			goto IL_0055;
		}
	}
	{
		PlayerData_t4175080041 * L_12 = (PlayerData_t4175080041 *)il2cpp_codegen_object_new(PlayerData_t4175080041_il2cpp_TypeInfo_var);
		PlayerData__ctor_m1179622856(L_12, /*hidden argument*/NULL);
		PlayerData_t4175080041 * L_13 = L_12;
		ProtoReader_t3981212867 * L_14 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_NoteObject_m694014777(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		p0 = L_13;
	}

IL_0055:
	{
		ProtoReader_t3981212867 * L_15 = p1;
		NullCheck(L_15);
		int32_t L_16 = ProtoReader_ReadInt32_m3141427562(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		PlayerData_t4175080041 * L_17 = p0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		PlayerData_set_Scores_m1537090011(L_17, L_18, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_0068:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)3)))
		{
			goto IL_0071;
		}
	}
	{
		goto IL_0098;
	}

IL_0071:
	{
		PlayerData_t4175080041 * L_20 = p0;
		if (L_20)
		{
			goto IL_0085;
		}
	}
	{
		PlayerData_t4175080041 * L_21 = (PlayerData_t4175080041 *)il2cpp_codegen_object_new(PlayerData_t4175080041_il2cpp_TypeInfo_var);
		PlayerData__ctor_m1179622856(L_21, /*hidden argument*/NULL);
		PlayerData_t4175080041 * L_22 = L_21;
		ProtoReader_t3981212867 * L_23 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_NoteObject_m694014777(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		p0 = L_22;
	}

IL_0085:
	{
		ProtoReader_t3981212867 * L_24 = p1;
		NullCheck(L_24);
		int32_t L_25 = ProtoReader_ReadInt32_m3141427562(L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		PlayerData_t4175080041 * L_26 = p0;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		PlayerData_set_SpeedLevel_m1029139341(L_26, L_27, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_0098:
	{
		PlayerData_t4175080041 * L_28 = p0;
		if (L_28)
		{
			goto IL_00ac;
		}
	}
	{
		PlayerData_t4175080041 * L_29 = (PlayerData_t4175080041 *)il2cpp_codegen_object_new(PlayerData_t4175080041_il2cpp_TypeInfo_var);
		PlayerData__ctor_m1179622856(L_29, /*hidden argument*/NULL);
		PlayerData_t4175080041 * L_30 = L_29;
		ProtoReader_t3981212867 * L_31 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_NoteObject_m694014777(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		p0 = L_30;
	}

IL_00ac:
	{
		ProtoReader_t3981212867 * L_32 = p1;
		PlayerData_t4175080041 * L_33 = p0;
		NullCheck(L_32);
		ProtoReader_AppendExtensionData_m1414497106(L_32, L_33, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		ProtoReader_t3981212867 * L_34 = p1;
		NullCheck(L_34);
		int32_t L_35 = ProtoReader_ReadFieldHeader_m3404319213(L_34, /*hidden argument*/NULL);
		int32_t L_36 = L_35;
		V_0 = L_36;
		if ((((int32_t)L_36) > ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		PlayerData_t4175080041 * L_37 = p0;
		if (L_37)
		{
			goto IL_00d5;
		}
	}
	{
		PlayerData_t4175080041 * L_38 = (PlayerData_t4175080041 *)il2cpp_codegen_object_new(PlayerData_t4175080041_il2cpp_TypeInfo_var);
		PlayerData__ctor_m1179622856(L_38, /*hidden argument*/NULL);
		PlayerData_t4175080041 * L_39 = L_38;
		ProtoReader_t3981212867 * L_40 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(ProtoReader_t3981212867_il2cpp_TypeInfo_var);
		ProtoReader_NoteObject_m694014777(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		p0 = L_39;
	}

IL_00d5:
	{
		PlayerData_t4175080041 * L_41 = p0;
		return L_41;
	}
}
// System.Int32 com.TonyTang.ProtobufSerializer::GetKeyImpl(System.Type)
extern Il2CppClass* ProtobufSerializer_t806432981_il2cpp_TypeInfo_var;
extern Il2CppClass* IList_t3321498491_il2cpp_TypeInfo_var;
extern const uint32_t ProtobufSerializer_GetKeyImpl_m1998698764_MetadataUsageId;
extern "C"  int32_t ProtobufSerializer_GetKeyImpl_m1998698764 (ProtobufSerializer_t806432981 * __this, Type_t * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtobufSerializer_GetKeyImpl_m1998698764_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtobufSerializer_t806432981_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1664964607* L_0 = ((ProtobufSerializer_t806432981_StaticFields*)ProtobufSerializer_t806432981_il2cpp_TypeInfo_var->static_fields)->get_knownTypes_2();
		Type_t * L_1 = p0;
		NullCheck((Il2CppObject *)(Il2CppObject *)L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, Il2CppObject * >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_t3321498491_il2cpp_TypeInfo_var, (Il2CppObject *)(Il2CppObject *)L_0, L_1);
		return L_2;
	}
}
// System.Void com.TonyTang.ProtobufSerializer::Serialize(System.Int32,System.Object,ProtoBuf.ProtoWriter)
extern Il2CppClass* PlayerData_t4175080041_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtobufSerializer_t806432981_il2cpp_TypeInfo_var;
extern const uint32_t ProtobufSerializer_Serialize_m3140456311_MetadataUsageId;
extern "C"  void ProtobufSerializer_Serialize_m3140456311 (ProtobufSerializer_t806432981 * __this, int32_t p0, Il2CppObject * p1, ProtoWriter_t2800220307 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtobufSerializer_Serialize_m3140456311_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		if (L_0 == 0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Il2CppObject * L_1 = p1;
		ProtoWriter_t2800220307 * L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(ProtobufSerializer_t806432981_il2cpp_TypeInfo_var);
		ProtobufSerializer_Write_m1076883231(NULL /*static, unused*/, ((PlayerData_t4175080041 *)CastclassClass(L_1, PlayerData_t4175080041_il2cpp_TypeInfo_var)), L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object com.TonyTang.ProtobufSerializer::Deserialize(System.Int32,System.Object,ProtoBuf.ProtoReader)
extern Il2CppClass* PlayerData_t4175080041_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtobufSerializer_t806432981_il2cpp_TypeInfo_var;
extern const uint32_t ProtobufSerializer_Deserialize_m1501623389_MetadataUsageId;
extern "C"  Il2CppObject * ProtobufSerializer_Deserialize_m1501623389 (ProtobufSerializer_t806432981 * __this, int32_t p0, Il2CppObject * p1, ProtoReader_t3981212867 * p2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtobufSerializer_Deserialize_m1501623389_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		if (L_0 == 0)
		{
			goto IL_000c;
		}
	}
	{
		return NULL;
	}

IL_000c:
	{
		Il2CppObject * L_1 = p1;
		ProtoReader_t3981212867 * L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(ProtobufSerializer_t806432981_il2cpp_TypeInfo_var);
		PlayerData_t4175080041 * L_3 = ProtobufSerializer_Read_m4138305145(NULL /*static, unused*/, ((PlayerData_t4175080041 *)CastclassClass(L_1, PlayerData_t4175080041_il2cpp_TypeInfo_var)), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void com.TonyTang.ProtobufSerializer::.ctor()
extern Il2CppClass* TypeModel_t653695305_il2cpp_TypeInfo_var;
extern const uint32_t ProtobufSerializer__ctor_m1313999628_MetadataUsageId;
extern "C"  void ProtobufSerializer__ctor_m1313999628 (ProtobufSerializer_t806432981 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtobufSerializer__ctor_m1313999628_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeModel_t653695305_il2cpp_TypeInfo_var);
		TypeModel__ctor_m3606578987(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void com.TonyTang.ProtobufSerializer::.cctor()
extern const Il2CppType* PlayerData_t4175080041_0_0_0_var;
extern Il2CppClass* TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ProtobufSerializer_t806432981_il2cpp_TypeInfo_var;
extern const uint32_t ProtobufSerializer__cctor_m3780495501_MetadataUsageId;
extern "C"  void ProtobufSerializer__cctor_m3780495501 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ProtobufSerializer__cctor_m3780495501_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeU5BU5D_t1664964607* L_0 = ((TypeU5BU5D_t1664964607*)SZArrayNew(TypeU5BU5D_t1664964607_il2cpp_TypeInfo_var, (uint32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, LoadTypeToken(PlayerData_t4175080041_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_1);
		((ProtobufSerializer_t806432981_StaticFields*)ProtobufSerializer_t806432981_il2cpp_TypeInfo_var->static_fields)->set_knownTypes_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
