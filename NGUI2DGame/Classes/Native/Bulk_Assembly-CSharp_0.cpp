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
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
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
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// EquipItems
#include "AssemblyU2DCSharp_EquipItems.h"
#ifndef _MSC_VER
#else
#endif
// EquipItems
#include "AssemblyU2DCSharp_EquipItemsMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// InvEquipment
#include "AssemblyU2DCSharp_InvEquipment.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// InvBaseItem
#include "AssemblyU2DCSharp_InvBaseItem.h"
// InvGameItem
#include "AssemblyU2DCSharp_InvGameItem.h"
#include "mscorlib_ArrayTypes.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// InvGameItem/Quality
#include "AssemblyU2DCSharp_InvGameItem_Quality.h"
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// InvDatabase
#include "AssemblyU2DCSharp_InvDatabaseMethodDeclarations.h"
// InvGameItem
#include "AssemblyU2DCSharp_InvGameItemMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// NGUITools
#include "AssemblyU2DCSharp_NGUIToolsMethodDeclarations.h"
// InvEquipment
#include "AssemblyU2DCSharp_InvEquipmentMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
struct Component_t107;
struct InvEquipment_t4;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t107;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m1241_gshared (Component_t107 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m1241(__this, method) (( Object_t * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<InvEquipment>()
// !!0 UnityEngine.Component::GetComponent<InvEquipment>()
#define Component_GetComponent_TisInvEquipment_t4_m1240(__this, method) (( InvEquipment_t4 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)
struct GameObject_t17;
struct InvEquipment_t4;
struct GameObject_t17;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m1243_gshared (GameObject_t17 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m1243(__this, method) (( Object_t * (*) (GameObject_t17 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1243_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<InvEquipment>()
// !!0 UnityEngine.GameObject::AddComponent<InvEquipment>()
#define GameObject_AddComponent_TisInvEquipment_t4_m1242(__this, method) (( InvEquipment_t4 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1243_gshared)(__this, method)


// System.Void EquipItems::.ctor()
extern "C" void EquipItems__ctor_m0 (EquipItems_t2 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EquipItems::Start()
extern TypeInfo* InvDatabase_t28_il2cpp_TypeInfo_var;
extern TypeInfo* InvGameItem_t16_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisInvEquipment_t4_m1240_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisInvEquipment_t4_m1242_MethodInfo_var;
extern "C" void EquipItems_Start_m1 (EquipItems_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvDatabase_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		InvGameItem_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Component_GetComponent_TisInvEquipment_t4_m1240_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		GameObject_AddComponent_TisInvEquipment_t4_m1242_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	InvEquipment_t4 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	InvBaseItem_t24 * V_5 = {0};
	InvGameItem_t16 * V_6 = {0};
	{
		Int32U5BU5D_t1* L_0 = (__this->___itemIDs_2);
		if (!L_0)
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t1* L_1 = (__this->___itemIDs_2);
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		InvEquipment_t4 * L_2 = Component_GetComponent_TisInvEquipment_t4_m1240(__this, /*hidden argument*/Component_GetComponent_TisInvEquipment_t4_m1240_MethodInfo_var);
		V_0 = L_2;
		InvEquipment_t4 * L_3 = V_0;
		bool L_4 = Object_op_Equality_m1245(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t17 * L_5 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		InvEquipment_t4 * L_6 = GameObject_AddComponent_TisInvEquipment_t4_m1242(L_5, /*hidden argument*/GameObject_AddComponent_TisInvEquipment_t4_m1242_MethodInfo_var);
		V_0 = L_6;
	}

IL_0038:
	{
		V_1 = ((int32_t)12);
		V_2 = 0;
		Int32U5BU5D_t1* L_7 = (__this->___itemIDs_2);
		NullCheck(L_7);
		V_3 = (((int32_t)(((Array_t *)L_7)->max_length)));
		goto IL_00c0;
	}

IL_004b:
	{
		Int32U5BU5D_t1* L_8 = (__this->___itemIDs_2);
		int32_t L_9 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_4 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		InvBaseItem_t24 * L_12 = InvDatabase_FindByID_m39(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		InvBaseItem_t24 * L_13 = V_5;
		if (!L_13)
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_14 = V_4;
		InvBaseItem_t24 * L_15 = V_5;
		InvGameItem_t16 * L_16 = (InvGameItem_t16 *)il2cpp_codegen_object_new (InvGameItem_t16_il2cpp_TypeInfo_var);
		InvGameItem__ctor_m52(L_16, L_14, L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		InvGameItem_t16 * L_17 = V_6;
		int32_t L_18 = V_1;
		int32_t L_19 = Random_Range_m1247(NULL /*static, unused*/, 0, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->___quality_1 = L_19;
		InvGameItem_t16 * L_20 = V_6;
		InvBaseItem_t24 * L_21 = V_5;
		NullCheck(L_21);
		int32_t L_22 = (L_21->___minItemLevel_4);
		InvBaseItem_t24 * L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = (L_23->___maxItemLevel_5);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		int32_t L_25 = NGUITools_RandomRange_m556(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->___itemLevel_2 = L_25;
		InvEquipment_t4 * L_26 = V_0;
		InvGameItem_t16 * L_27 = V_6;
		NullCheck(L_26);
		InvEquipment_Equip_m45(L_26, L_27, /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_00a6:
	{
		int32_t L_28 = V_4;
		int32_t L_29 = L_28;
		Object_t * L_30 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_29);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Concat_m1248(NULL /*static, unused*/, (String_t*) &_stringLiteral1, L_30, /*hidden argument*/NULL);
		Debug_LogWarning_m1249(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_004b;
		}
	}

IL_00c7:
	{
		Object_Destroy_m1250(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// EquipRandomItem
#include "AssemblyU2DCSharp_EquipRandomItem.h"
#ifndef _MSC_VER
#else
#endif
// EquipRandomItem
#include "AssemblyU2DCSharp_EquipRandomItemMethodDeclarations.h"

// System.Collections.Generic.List`1<InvBaseItem>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
#include "Assembly-CSharp_ArrayTypes.h"
// InvDatabase
#include "AssemblyU2DCSharp_InvDatabase.h"
// System.Collections.Generic.List`1<InvBaseItem>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"


// System.Void EquipRandomItem::.ctor()
extern "C" void EquipRandomItem__ctor_m2 (EquipRandomItem_t5 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EquipRandomItem::OnClick()
extern TypeInfo* InvDatabase_t28_il2cpp_TypeInfo_var;
extern TypeInfo* InvGameItem_t16_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void EquipRandomItem_OnClick_m3 (EquipRandomItem_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvDatabase_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		InvGameItem_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t27 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	InvBaseItem_t24 * V_3 = {0};
	InvGameItem_t16 * V_4 = {0};
	{
		InvEquipment_t4 * L_0 = (__this->___equipment_2);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		InvDatabaseU5BU5D_t26* L_2 = InvDatabase_get_list_m34(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		NullCheck((*(InvDatabase_t28 **)(InvDatabase_t28 **)SZArrayLdElema(L_2, L_3)));
		List_1_t27 * L_4 = ((*(InvDatabase_t28 **)(InvDatabase_t28 **)SZArrayLdElema(L_2, L_3))->___items_5);
		V_0 = L_4;
		List_1_t27 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<InvBaseItem>::get_Count() */, L_5);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		return;
	}

IL_002b:
	{
		V_1 = ((int32_t)12);
		List_1_t27 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<InvBaseItem>::get_Count() */, L_7);
		int32_t L_9 = Random_Range_m1247(NULL /*static, unused*/, 0, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		List_1_t27 * L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		InvBaseItem_t24 * L_12 = (InvBaseItem_t24 *)VirtFuncInvoker1< InvBaseItem_t24 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<InvBaseItem>::get_Item(System.Int32) */, L_10, L_11);
		V_3 = L_12;
		int32_t L_13 = V_2;
		InvBaseItem_t24 * L_14 = V_3;
		InvGameItem_t16 * L_15 = (InvGameItem_t16 *)il2cpp_codegen_object_new (InvGameItem_t16_il2cpp_TypeInfo_var);
		InvGameItem__ctor_m52(L_15, L_13, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		InvGameItem_t16 * L_16 = V_4;
		int32_t L_17 = V_1;
		int32_t L_18 = Random_Range_m1247(NULL /*static, unused*/, 0, L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->___quality_1 = L_18;
		InvGameItem_t16 * L_19 = V_4;
		InvBaseItem_t24 * L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21 = (L_20->___minItemLevel_4);
		InvBaseItem_t24 * L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___maxItemLevel_5);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		int32_t L_24 = NGUITools_RandomRange_m556(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->___itemLevel_2 = L_24;
		InvEquipment_t4 * L_25 = (__this->___equipment_2);
		InvGameItem_t16 * L_26 = V_4;
		NullCheck(L_25);
		InvEquipment_Equip_m45(L_25, L_26, /*hidden argument*/NULL);
		return;
	}
}
// UICursor
#include "AssemblyU2DCSharp_UICursor.h"
#ifndef _MSC_VER
#else
#endif
// UICursor
#include "AssemblyU2DCSharp_UICursorMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UISprite
#include "AssemblyU2DCSharp_UISprite.h"
// UIAtlas
#include "AssemblyU2DCSharp_UIAtlas.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// UISprite
#include "AssemblyU2DCSharp_UISpriteMethodDeclarations.h"
// UIWidget
#include "AssemblyU2DCSharp_UIWidgetMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// NGUIMath
#include "AssemblyU2DCSharp_NGUIMathMethodDeclarations.h"
struct Component_t107;
struct UISprite_t9;
struct Component_t107;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" Object_t * Component_GetComponentInChildren_TisObject_t_m1252_gshared (Component_t107 * __this, const MethodInfo* method);
#define Component_GetComponentInChildren_TisObject_t_m1252(__this, method) (( Object_t * (*) (Component_t107 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m1252_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UISprite>()
// !!0 UnityEngine.Component::GetComponentInChildren<UISprite>()
#define Component_GetComponentInChildren_TisUISprite_t9_m1251(__this, method) (( UISprite_t9 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m1252_gshared)(__this, method)


// System.Void UICursor::.ctor()
extern "C" void UICursor__ctor_m4 (UICursor_t6 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UICursor::Awake()
extern TypeInfo* UICursor_t6_il2cpp_TypeInfo_var;
extern "C" void UICursor_Awake_m5 (UICursor_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICursor_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		((UICursor_t6_StaticFields*)UICursor_t6_il2cpp_TypeInfo_var->static_fields)->___mInstance_2 = __this;
		return;
	}
}
// System.Void UICursor::OnDestroy()
extern TypeInfo* UICursor_t6_il2cpp_TypeInfo_var;
extern "C" void UICursor_OnDestroy_m6 (UICursor_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICursor_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		((UICursor_t6_StaticFields*)UICursor_t6_il2cpp_TypeInfo_var->static_fields)->___mInstance_2 = (UICursor_t6 *)NULL;
		return;
	}
}
// System.Void UICursor::Start()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisUISprite_t9_m1251_MethodInfo_var;
extern "C" void UICursor_Start_m7 (UICursor_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Component_GetComponentInChildren_TisUISprite_t9_m1251_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_4 = L_0;
		UISprite_t9 * L_1 = Component_GetComponentInChildren_TisUISprite_t9_m1251(__this, /*hidden argument*/Component_GetComponentInChildren_TisUISprite_t9_m1251_MethodInfo_var);
		__this->___mSprite_5 = L_1;
		UISprite_t9 * L_2 = (__this->___mSprite_5);
		NullCheck(L_2);
		UIAtlas_t10 * L_3 = UISprite_get_atlas_m1061(L_2, /*hidden argument*/NULL);
		__this->___mAtlas_6 = L_3;
		UISprite_t9 * L_4 = (__this->___mSprite_5);
		NullCheck(L_4);
		String_t* L_5 = UISprite_get_spriteName_m1063(L_4, /*hidden argument*/NULL);
		__this->___mSpriteName_7 = L_5;
		UISprite_t9 * L_6 = (__this->___mSprite_5);
		NullCheck(L_6);
		UIWidget_set_depth_m680(L_6, ((int32_t)100), /*hidden argument*/NULL);
		Camera_t7 * L_7 = (__this->___uiCamera_3);
		bool L_8 = Object_op_Equality_m1245(NULL /*static, unused*/, L_7, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		GameObject_t17 * L_9 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = GameObject_get_layer_m1254(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		Camera_t7 * L_11 = NGUITools_FindCameraForLayer_m562(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		__this->___uiCamera_3 = L_11;
	}

IL_006e:
	{
		return;
	}
}
// System.Void UICursor::Update()
extern TypeInfo* Input_t298_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void UICursor_Update_m8 (UICursor_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t48  V_0 = {0};
	{
		UISprite_t9 * L_0 = (__this->___mSprite_5);
		NullCheck(L_0);
		UIAtlas_t10 * L_1 = UISprite_get_atlas_m1061(L_0, /*hidden argument*/NULL);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0103;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t298_il2cpp_TypeInfo_var);
		Vector3_t48  L_3 = Input_get_mousePosition_m1256(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		Camera_t7 * L_4 = (__this->___uiCamera_3);
		bool L_5 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_4, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00b3;
		}
	}
	{
		float L_6 = ((&V_0)->___x_1);
		int32_t L_7 = Screen_get_width_m1257(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Clamp01_m1258(NULL /*static, unused*/, ((float)((float)L_6/(float)(((float)L_7)))), /*hidden argument*/NULL);
		(&V_0)->___x_1 = L_8;
		float L_9 = ((&V_0)->___y_2);
		int32_t L_10 = Screen_get_height_m1259(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = Mathf_Clamp01_m1258(NULL /*static, unused*/, ((float)((float)L_9/(float)(((float)L_10)))), /*hidden argument*/NULL);
		(&V_0)->___y_2 = L_11;
		Transform_t8 * L_12 = (__this->___mTrans_4);
		Camera_t7 * L_13 = (__this->___uiCamera_3);
		Vector3_t48  L_14 = V_0;
		NullCheck(L_13);
		Vector3_t48  L_15 = Camera_ViewportToWorldPoint_m1260(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_m1261(L_12, L_15, /*hidden argument*/NULL);
		Camera_t7 * L_16 = (__this->___uiCamera_3);
		NullCheck(L_16);
		bool L_17 = Camera_get_orthographic_m1262(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ae;
		}
	}
	{
		Transform_t8 * L_18 = (__this->___mTrans_4);
		Transform_t8 * L_19 = (__this->___mTrans_4);
		NullCheck(L_19);
		Vector3_t48  L_20 = Transform_get_localPosition_m1263(L_19, /*hidden argument*/NULL);
		Transform_t8 * L_21 = (__this->___mTrans_4);
		NullCheck(L_21);
		Vector3_t48  L_22 = Transform_get_localScale_m1264(L_21, /*hidden argument*/NULL);
		Vector3_t48  L_23 = NGUIMath_ApplyHalfPixelOffset_m529(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localPosition_m1265(L_18, L_23, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		goto IL_0103;
	}

IL_00b3:
	{
		Vector3_t48 * L_24 = (&V_0);
		float L_25 = (L_24->___x_1);
		int32_t L_26 = Screen_get_width_m1257(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_24->___x_1 = ((float)((float)L_25-(float)((float)((float)(((float)L_26))*(float)(0.5f)))));
		Vector3_t48 * L_27 = (&V_0);
		float L_28 = (L_27->___y_2);
		int32_t L_29 = Screen_get_height_m1259(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_27->___y_2 = ((float)((float)L_28-(float)((float)((float)(((float)L_29))*(float)(0.5f)))));
		Transform_t8 * L_30 = (__this->___mTrans_4);
		Vector3_t48  L_31 = V_0;
		Transform_t8 * L_32 = (__this->___mTrans_4);
		NullCheck(L_32);
		Vector3_t48  L_33 = Transform_get_localScale_m1264(L_32, /*hidden argument*/NULL);
		Vector3_t48  L_34 = NGUIMath_ApplyHalfPixelOffset_m529(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_m1265(L_30, L_34, /*hidden argument*/NULL);
	}

IL_0103:
	{
		return;
	}
}
// System.Void UICursor::Clear()
extern TypeInfo* UICursor_t6_il2cpp_TypeInfo_var;
extern "C" void UICursor_Clear_m9 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICursor_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		UICursor_t6 * L_0 = ((UICursor_t6_StaticFields*)UICursor_t6_il2cpp_TypeInfo_var->static_fields)->___mInstance_2;
		NullCheck(L_0);
		UIAtlas_t10 * L_1 = (L_0->___mAtlas_6);
		UICursor_t6 * L_2 = ((UICursor_t6_StaticFields*)UICursor_t6_il2cpp_TypeInfo_var->static_fields)->___mInstance_2;
		NullCheck(L_2);
		String_t* L_3 = (L_2->___mSpriteName_7);
		UICursor_Set_m10(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UICursor::Set(UIAtlas,System.String)
extern TypeInfo* UICursor_t6_il2cpp_TypeInfo_var;
extern "C" void UICursor_Set_m10 (Object_t * __this /* static, unused */, UIAtlas_t10 * ___atlas, String_t* ___sprite, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICursor_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		UICursor_t6 * L_0 = ((UICursor_t6_StaticFields*)UICursor_t6_il2cpp_TypeInfo_var->static_fields)->___mInstance_2;
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		UICursor_t6 * L_2 = ((UICursor_t6_StaticFields*)UICursor_t6_il2cpp_TypeInfo_var->static_fields)->___mInstance_2;
		NullCheck(L_2);
		UISprite_t9 * L_3 = (L_2->___mSprite_5);
		UIAtlas_t10 * L_4 = ___atlas;
		NullCheck(L_3);
		UISprite_set_atlas_m1062(L_3, L_4, /*hidden argument*/NULL);
		UICursor_t6 * L_5 = ((UICursor_t6_StaticFields*)UICursor_t6_il2cpp_TypeInfo_var->static_fields)->___mInstance_2;
		NullCheck(L_5);
		UISprite_t9 * L_6 = (L_5->___mSprite_5);
		String_t* L_7 = ___sprite;
		NullCheck(L_6);
		UISprite_set_spriteName_m1064(L_6, L_7, /*hidden argument*/NULL);
		UICursor_t6 * L_8 = ((UICursor_t6_StaticFields*)UICursor_t6_il2cpp_TypeInfo_var->static_fields)->___mInstance_2;
		NullCheck(L_8);
		UISprite_t9 * L_9 = (L_8->___mSprite_5);
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(13 /* System.Void UISprite::MakePixelPerfect() */, L_9);
		UICursor_t6 * L_10 = ((UICursor_t6_StaticFields*)UICursor_t6_il2cpp_TypeInfo_var->static_fields)->___mInstance_2;
		NullCheck(L_10);
		UICursor_Update_m8(L_10, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// UIEquipmentSlot
#include "AssemblyU2DCSharp_UIEquipmentSlot.h"
#ifndef _MSC_VER
#else
#endif
// UIEquipmentSlot
#include "AssemblyU2DCSharp_UIEquipmentSlotMethodDeclarations.h"

// InvBaseItem/Slot
#include "AssemblyU2DCSharp_InvBaseItem_Slot.h"
// UIItemSlot
#include "AssemblyU2DCSharp_UIItemSlotMethodDeclarations.h"


// System.Void UIEquipmentSlot::.ctor()
extern "C" void UIEquipmentSlot__ctor_m11 (UIEquipmentSlot_t11 * __this, const MethodInfo* method)
{
	{
		UIItemSlot__ctor_m14(__this, /*hidden argument*/NULL);
		return;
	}
}
// InvGameItem UIEquipmentSlot::get_observedItem()
extern "C" InvGameItem_t16 * UIEquipmentSlot_get_observedItem_m12 (UIEquipmentSlot_t11 * __this, const MethodInfo* method)
{
	InvGameItem_t16 * G_B3_0 = {0};
	{
		InvEquipment_t4 * L_0 = (__this->___equipment_11);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		InvEquipment_t4 * L_2 = (__this->___equipment_11);
		int32_t L_3 = (__this->___slot_12);
		NullCheck(L_2);
		InvGameItem_t16 * L_4 = InvEquipment_GetItem_m50(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = ((InvGameItem_t16 *)(NULL));
	}

IL_0028:
	{
		return G_B3_0;
	}
}
// InvGameItem UIEquipmentSlot::Replace(InvGameItem)
extern "C" InvGameItem_t16 * UIEquipmentSlot_Replace_m13 (UIEquipmentSlot_t11 * __this, InvGameItem_t16 * ___item, const MethodInfo* method)
{
	InvGameItem_t16 * G_B3_0 = {0};
	{
		InvEquipment_t4 * L_0 = (__this->___equipment_11);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		InvEquipment_t4 * L_2 = (__this->___equipment_11);
		int32_t L_3 = (__this->___slot_12);
		InvGameItem_t16 * L_4 = ___item;
		NullCheck(L_2);
		InvGameItem_t16 * L_5 = InvEquipment_Replace_m44(L_2, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_0029;
	}

IL_0028:
	{
		InvGameItem_t16 * L_6 = ___item;
		G_B3_0 = L_6;
	}

IL_0029:
	{
		return G_B3_0;
	}
}
// UIItemSlot
#include "AssemblyU2DCSharp_UIItemSlot.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<InvStat>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// InvStat
#include "AssemblyU2DCSharp_InvStat.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// InvStat/Modifier
#include "AssemblyU2DCSharp_InvStat_Modifier.h"
// InvStat/Identifier
#include "AssemblyU2DCSharp_InvStat_Identifier.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UICamera
#include "AssemblyU2DCSharp_UICamera.h"
// UICamera/MouseOrTouch
#include "AssemblyU2DCSharp_UICamera_MouseOrTouch.h"
// UICamera/ClickNotification
#include "AssemblyU2DCSharp_UICamera_ClickNotification.h"
// UILabel
#include "AssemblyU2DCSharp_UILabel.h"
// UIWidget
#include "AssemblyU2DCSharp_UIWidget.h"
// System.Collections.Generic.List`1<InvStat>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// UITooltip
#include "AssemblyU2DCSharp_UITooltipMethodDeclarations.h"
// UICamera
#include "AssemblyU2DCSharp_UICameraMethodDeclarations.h"
// UILabel
#include "AssemblyU2DCSharp_UILabelMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"


// System.Void UIItemSlot::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void UIItemSlot__ctor_m14 (UIItemSlot_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___mText_9 = L_0;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// InvGameItem UIItemSlot::get_observedItem()
// InvGameItem UIItemSlot::Replace(InvGameItem)
// System.Void UIItemSlot::OnTooltip(System.Boolean)
extern TypeInfo* StringU5BU5D_t258_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* Slot_t22_il2cpp_TypeInfo_var;
extern TypeInfo* Identifier_t32_il2cpp_TypeInfo_var;
extern "C" void UIItemSlot_OnTooltip_m15 (UIItemSlot_t12 * __this, bool ___show, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Slot_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Identifier_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	InvGameItem_t16 * V_0 = {0};
	InvBaseItem_t24 * V_1 = {0};
	String_t* V_2 = {0};
	List_1_t23 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	InvStat_t34 * V_6 = {0};
	String_t* V_7 = {0};
	InvGameItem_t16 * G_B3_0 = {0};
	{
		bool L_0 = ___show;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvGameItem_t16 * L_1 = (__this->___mItem_8);
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = ((InvGameItem_t16 *)(NULL));
	}

IL_0012:
	{
		V_0 = G_B3_0;
		InvGameItem_t16 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_018a;
		}
	}
	{
		InvGameItem_t16 * L_3 = V_0;
		NullCheck(L_3);
		InvBaseItem_t24 * L_4 = InvGameItem_get_baseItem_m54(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		InvBaseItem_t24 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_018a;
		}
	}
	{
		StringU5BU5D_t258* L_6 = ((StringU5BU5D_t258*)SZArrayNew(StringU5BU5D_t258_il2cpp_TypeInfo_var, 5));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral2);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 0)) = (String_t*)(String_t*) &_stringLiteral2;
		StringU5BU5D_t258* L_7 = L_6;
		InvGameItem_t16 * L_8 = V_0;
		NullCheck(L_8);
		Color_t25  L_9 = InvGameItem_get_color_m57(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		String_t* L_10 = NGUITools_EncodeColor_m559(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		ArrayElementTypeCheck (L_7, L_10);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 1)) = (String_t*)L_10;
		StringU5BU5D_t258* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral3);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, 2)) = (String_t*)(String_t*) &_stringLiteral3;
		StringU5BU5D_t258* L_12 = L_11;
		InvGameItem_t16 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = InvGameItem_get_name_m55(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_14);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 3)) = (String_t*)L_14;
		StringU5BU5D_t258* L_15 = L_12;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral4);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m1266(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		String_t* L_17 = V_2;
		V_7 = L_17;
		ObjectU5BU5D_t300* L_18 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 5));
		String_t* L_19 = V_7;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		ArrayElementTypeCheck (L_18, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 0)) = (Object_t *)L_19;
		ObjectU5BU5D_t300* L_20 = L_18;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		ArrayElementTypeCheck (L_20, (String_t*) &_stringLiteral5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 1)) = (Object_t *)(String_t*) &_stringLiteral5;
		ObjectU5BU5D_t300* L_21 = L_20;
		InvGameItem_t16 * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___itemLevel_2);
		int32_t L_24 = L_23;
		Object_t * L_25 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 2);
		ArrayElementTypeCheck (L_21, L_25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 2)) = (Object_t *)L_25;
		ObjectU5BU5D_t300* L_26 = L_21;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 3);
		ArrayElementTypeCheck (L_26, (String_t*) &_stringLiteral6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 3)) = (Object_t *)(String_t*) &_stringLiteral6;
		ObjectU5BU5D_t300* L_27 = L_26;
		InvBaseItem_t24 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = (L_28->___slot_3);
		int32_t L_30 = L_29;
		Object_t * L_31 = Box(Slot_t22_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 4);
		ArrayElementTypeCheck (L_27, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, 4)) = (Object_t *)L_31;
		String_t* L_32 = String_Concat_m1267(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		V_2 = L_32;
		InvGameItem_t16 * L_33 = V_0;
		NullCheck(L_33);
		List_1_t23 * L_34 = InvGameItem_CalculateStats_m58(L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		V_4 = 0;
		List_1_t23 * L_35 = V_3;
		NullCheck(L_35);
		int32_t L_36 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<InvStat>::get_Count() */, L_35);
		V_5 = L_36;
		goto IL_0158;
	}

IL_00b8:
	{
		List_1_t23 * L_37 = V_3;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		InvStat_t34 * L_39 = (InvStat_t34 *)VirtFuncInvoker1< InvStat_t34 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<InvStat>::get_Item(System.Int32) */, L_37, L_38);
		V_6 = L_39;
		InvStat_t34 * L_40 = V_6;
		NullCheck(L_40);
		int32_t L_41 = (L_40->___amount_2);
		if (L_41)
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_0152;
	}

IL_00d3:
	{
		InvStat_t34 * L_42 = V_6;
		NullCheck(L_42);
		int32_t L_43 = (L_42->___amount_2);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00fd;
		}
	}
	{
		String_t* L_44 = V_2;
		InvStat_t34 * L_45 = V_6;
		NullCheck(L_45);
		int32_t L_46 = (L_45->___amount_2);
		int32_t L_47 = L_46;
		Object_t * L_48 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_47);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Concat_m1268(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral7, L_48, /*hidden argument*/NULL);
		V_2 = L_49;
		goto IL_0115;
	}

IL_00fd:
	{
		String_t* L_50 = V_2;
		InvStat_t34 * L_51 = V_6;
		NullCheck(L_51);
		int32_t L_52 = (L_51->___amount_2);
		int32_t L_53 = L_52;
		Object_t * L_54 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_53);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m1268(NULL /*static, unused*/, L_50, (String_t*) &_stringLiteral8, L_54, /*hidden argument*/NULL);
		V_2 = L_55;
	}

IL_0115:
	{
		InvStat_t34 * L_56 = V_6;
		NullCheck(L_56);
		int32_t L_57 = (L_56->___modifier_1);
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_012e;
		}
	}
	{
		String_t* L_58 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = String_Concat_m1269(NULL /*static, unused*/, L_58, (String_t*) &_stringLiteral9, /*hidden argument*/NULL);
		V_2 = L_59;
	}

IL_012e:
	{
		String_t* L_60 = V_2;
		InvStat_t34 * L_61 = V_6;
		NullCheck(L_61);
		int32_t L_62 = (L_61->___id_0);
		int32_t L_63 = L_62;
		Object_t * L_64 = Box(Identifier_t32_il2cpp_TypeInfo_var, &L_63);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_65 = String_Concat_m1268(NULL /*static, unused*/, L_60, (String_t*) &_stringLiteral6, L_64, /*hidden argument*/NULL);
		V_2 = L_65;
		String_t* L_66 = V_2;
		String_t* L_67 = String_Concat_m1269(NULL /*static, unused*/, L_66, (String_t*) &_stringLiteral10, /*hidden argument*/NULL);
		V_2 = L_67;
	}

IL_0152:
	{
		int32_t L_68 = V_4;
		V_4 = ((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_0158:
	{
		int32_t L_69 = V_4;
		int32_t L_70 = V_5;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_00b8;
		}
	}
	{
		InvBaseItem_t24 * L_71 = V_1;
		NullCheck(L_71);
		String_t* L_72 = (L_71->___description_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_73 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		if (L_73)
		{
			goto IL_0183;
		}
	}
	{
		String_t* L_74 = V_2;
		InvBaseItem_t24 * L_75 = V_1;
		NullCheck(L_75);
		String_t* L_76 = (L_75->___description_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_77 = String_Concat_m1271(NULL /*static, unused*/, L_74, (String_t*) &_stringLiteral11, L_76, /*hidden argument*/NULL);
		V_2 = L_77;
	}

IL_0183:
	{
		String_t* L_78 = V_2;
		UITooltip_ShowText_m1142(NULL /*static, unused*/, L_78, /*hidden argument*/NULL);
		return;
	}

IL_018a:
	{
		UITooltip_ShowText_m1142(NULL /*static, unused*/, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIItemSlot::OnClick()
extern TypeInfo* UIItemSlot_t12_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIItemSlot_OnClick_m16 (UIItemSlot_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIItemSlot_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvGameItem_t16 * L_0 = ((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UIItemSlot_OnDrop_m18(__this, (GameObject_t17 *)NULL, /*hidden argument*/NULL);
		goto IL_0049;
	}

IL_0016:
	{
		InvGameItem_t16 * L_1 = (__this->___mItem_8);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		InvGameItem_t16 * L_2 = (InvGameItem_t16 *)VirtFuncInvoker1< InvGameItem_t16 *, InvGameItem_t16 * >::Invoke(5 /* InvGameItem UIItemSlot::Replace(InvGameItem) */, __this, (InvGameItem_t16 *)NULL);
		((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10 = L_2;
		InvGameItem_t16 * L_3 = ((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10;
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		AudioClip_t15 * L_4 = (__this->___grabSound_5);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_PlaySound_m551(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0043:
	{
		UIItemSlot_UpdateCursor_m19(__this, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Void UIItemSlot::OnDrag(UnityEngine.Vector2)
extern TypeInfo* UIItemSlot_t12_il2cpp_TypeInfo_var;
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIItemSlot_OnDrag_m17 (UIItemSlot_t12 * __this, Vector2_t55  ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIItemSlot_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvGameItem_t16 * L_0 = ((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10;
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		InvGameItem_t16 * L_1 = (__this->___mItem_8);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		MouseOrTouch_t216 * L_2 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_2);
		L_2->___clickNotification_8 = 2;
		InvGameItem_t16 * L_3 = (InvGameItem_t16 *)VirtFuncInvoker1< InvGameItem_t16 *, InvGameItem_t16 * >::Invoke(5 /* InvGameItem UIItemSlot::Replace(InvGameItem) */, __this, (InvGameItem_t16 *)NULL);
		((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10 = L_3;
		AudioClip_t15 * L_4 = (__this->___grabSound_5);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_PlaySound_m551(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		UIItemSlot_UpdateCursor_m19(__this, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UIItemSlot::OnDrop(UnityEngine.GameObject)
extern TypeInfo* UIItemSlot_t12_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIItemSlot_OnDrop_m18 (UIItemSlot_t12 * __this, GameObject_t17 * ___go, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIItemSlot_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	InvGameItem_t16 * V_0 = {0};
	{
		InvGameItem_t16 * L_0 = ((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10;
		InvGameItem_t16 * L_1 = (InvGameItem_t16 *)VirtFuncInvoker1< InvGameItem_t16 *, InvGameItem_t16 * >::Invoke(5 /* InvGameItem UIItemSlot::Replace(InvGameItem) */, __this, L_0);
		V_0 = L_1;
		InvGameItem_t16 * L_2 = ((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10;
		InvGameItem_t16 * L_3 = V_0;
		if ((!(((Object_t*)(InvGameItem_t16 *)L_2) == ((Object_t*)(InvGameItem_t16 *)L_3))))
		{
			goto IL_0028;
		}
	}
	{
		AudioClip_t15 * L_4 = (__this->___errorSound_7);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_PlaySound_m551(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_004b;
	}

IL_0028:
	{
		InvGameItem_t16 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		AudioClip_t15 * L_6 = (__this->___grabSound_5);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_PlaySound_m551(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_004b;
	}

IL_003f:
	{
		AudioClip_t15 * L_7 = (__this->___placeSound_6);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_PlaySound_m551(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_004b:
	{
		InvGameItem_t16 * L_8 = V_0;
		((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10 = L_8;
		UIItemSlot_UpdateCursor_m19(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIItemSlot::UpdateCursor()
extern TypeInfo* UIItemSlot_t12_il2cpp_TypeInfo_var;
extern "C" void UIItemSlot_UpdateCursor_m19 (UIItemSlot_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIItemSlot_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvGameItem_t16 * L_0 = ((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		InvGameItem_t16 * L_1 = ((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10;
		NullCheck(L_1);
		InvBaseItem_t24 * L_2 = InvGameItem_get_baseItem_m54(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		InvGameItem_t16 * L_3 = ((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10;
		NullCheck(L_3);
		InvBaseItem_t24 * L_4 = InvGameItem_get_baseItem_m54(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		UIAtlas_t10 * L_5 = (L_4->___iconAtlas_9);
		InvGameItem_t16 * L_6 = ((UIItemSlot_t12_StaticFields*)UIItemSlot_t12_il2cpp_TypeInfo_var->static_fields)->___mDraggedItem_10;
		NullCheck(L_6);
		InvBaseItem_t24 * L_7 = InvGameItem_get_baseItem_m54(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (L_7->___iconName_10);
		UICursor_Set_m10(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		goto IL_0046;
	}

IL_0041:
	{
		UICursor_Clear_m9(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void UIItemSlot::Update()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void UIItemSlot_Update_m20 (UIItemSlot_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	InvGameItem_t16 * V_0 = {0};
	InvBaseItem_t24 * V_1 = {0};
	String_t* V_2 = {0};
	InvBaseItem_t24 * G_B4_0 = {0};
	String_t* G_B8_0 = {0};
	UILabel_t14 * G_B12_0 = {0};
	UILabel_t14 * G_B11_0 = {0};
	String_t* G_B13_0 = {0};
	UILabel_t14 * G_B13_1 = {0};
	UIWidget_t13 * G_B22_0 = {0};
	UIWidget_t13 * G_B21_0 = {0};
	Color_t25  G_B23_0 = {0};
	UIWidget_t13 * G_B23_1 = {0};
	{
		InvGameItem_t16 * L_0 = (InvGameItem_t16 *)VirtFuncInvoker0< InvGameItem_t16 * >::Invoke(4 /* InvGameItem UIItemSlot::get_observedItem() */, __this);
		V_0 = L_0;
		InvGameItem_t16 * L_1 = (__this->___mItem_8);
		InvGameItem_t16 * L_2 = V_0;
		if ((((Object_t*)(InvGameItem_t16 *)L_1) == ((Object_t*)(InvGameItem_t16 *)L_2)))
		{
			goto IL_0133;
		}
	}
	{
		InvGameItem_t16 * L_3 = V_0;
		__this->___mItem_8 = L_3;
		InvGameItem_t16 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		InvGameItem_t16 * L_5 = V_0;
		NullCheck(L_5);
		InvBaseItem_t24 * L_6 = InvGameItem_get_baseItem_m54(L_5, /*hidden argument*/NULL);
		G_B4_0 = L_6;
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = ((InvBaseItem_t24 *)(NULL));
	}

IL_002c:
	{
		V_1 = G_B4_0;
		UILabel_t14 * L_7 = (__this->___label_4);
		bool L_8 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_7, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_008f;
		}
	}
	{
		InvGameItem_t16 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		InvGameItem_t16 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = InvGameItem_get_name_m55(L_10, /*hidden argument*/NULL);
		G_B8_0 = L_11;
		goto IL_0050;
	}

IL_004f:
	{
		G_B8_0 = ((String_t*)(NULL));
	}

IL_0050:
	{
		V_2 = G_B8_0;
		String_t* L_12 = (__this->___mText_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		UILabel_t14 * L_14 = (__this->___label_4);
		NullCheck(L_14);
		String_t* L_15 = UILabel_get_text_m955(L_14, /*hidden argument*/NULL);
		__this->___mText_9 = L_15;
	}

IL_0072:
	{
		UILabel_t14 * L_16 = (__this->___label_4);
		String_t* L_17 = V_2;
		G_B11_0 = L_16;
		if (!L_17)
		{
			G_B12_0 = L_16;
			goto IL_0084;
		}
	}
	{
		String_t* L_18 = V_2;
		G_B13_0 = L_18;
		G_B13_1 = G_B11_0;
		goto IL_008a;
	}

IL_0084:
	{
		String_t* L_19 = (__this->___mText_9);
		G_B13_0 = L_19;
		G_B13_1 = G_B12_0;
	}

IL_008a:
	{
		NullCheck(G_B13_1);
		UILabel_set_text_m956(G_B13_1, G_B13_0, /*hidden argument*/NULL);
	}

IL_008f:
	{
		UISprite_t9 * L_20 = (__this->___icon_2);
		bool L_21 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_20, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0101;
		}
	}
	{
		InvBaseItem_t24 * L_22 = V_1;
		if (!L_22)
		{
			goto IL_00b7;
		}
	}
	{
		InvBaseItem_t24 * L_23 = V_1;
		NullCheck(L_23);
		UIAtlas_t10 * L_24 = (L_23->___iconAtlas_9);
		bool L_25 = Object_op_Equality_m1245(NULL /*static, unused*/, L_24, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c8;
		}
	}

IL_00b7:
	{
		UISprite_t9 * L_26 = (__this->___icon_2);
		NullCheck(L_26);
		Behaviour_set_enabled_m1272(L_26, 0, /*hidden argument*/NULL);
		goto IL_0101;
	}

IL_00c8:
	{
		UISprite_t9 * L_27 = (__this->___icon_2);
		InvBaseItem_t24 * L_28 = V_1;
		NullCheck(L_28);
		UIAtlas_t10 * L_29 = (L_28->___iconAtlas_9);
		NullCheck(L_27);
		UISprite_set_atlas_m1062(L_27, L_29, /*hidden argument*/NULL);
		UISprite_t9 * L_30 = (__this->___icon_2);
		InvBaseItem_t24 * L_31 = V_1;
		NullCheck(L_31);
		String_t* L_32 = (L_31->___iconName_10);
		NullCheck(L_30);
		UISprite_set_spriteName_m1064(L_30, L_32, /*hidden argument*/NULL);
		UISprite_t9 * L_33 = (__this->___icon_2);
		NullCheck(L_33);
		Behaviour_set_enabled_m1272(L_33, 1, /*hidden argument*/NULL);
		UISprite_t9 * L_34 = (__this->___icon_2);
		NullCheck(L_34);
		VirtActionInvoker0::Invoke(13 /* System.Void UISprite::MakePixelPerfect() */, L_34);
	}

IL_0101:
	{
		UIWidget_t13 * L_35 = (__this->___background_3);
		bool L_36 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_35, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0133;
		}
	}
	{
		UIWidget_t13 * L_37 = (__this->___background_3);
		InvGameItem_t16 * L_38 = V_0;
		G_B21_0 = L_37;
		if (!L_38)
		{
			G_B22_0 = L_37;
			goto IL_0129;
		}
	}
	{
		InvGameItem_t16 * L_39 = V_0;
		NullCheck(L_39);
		Color_t25  L_40 = InvGameItem_get_color_m57(L_39, /*hidden argument*/NULL);
		G_B23_0 = L_40;
		G_B23_1 = G_B21_0;
		goto IL_012e;
	}

IL_0129:
	{
		Color_t25  L_41 = Color_get_white_m1273(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B23_0 = L_41;
		G_B23_1 = G_B22_0;
	}

IL_012e:
	{
		NullCheck(G_B23_1);
		UIWidget_set_color_m673(G_B23_1, G_B23_0, /*hidden argument*/NULL);
	}

IL_0133:
	{
		return;
	}
}
// UIItemStorage
#include "AssemblyU2DCSharp_UIItemStorage.h"
#ifndef _MSC_VER
#else
#endif
// UIItemStorage
#include "AssemblyU2DCSharp_UIItemStorageMethodDeclarations.h"

// System.Collections.Generic.List`1<InvGameItem>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UIStorageSlot
#include "AssemblyU2DCSharp_UIStorageSlot.h"
// System.Collections.Generic.List`1<InvGameItem>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
struct GameObject_t17;
struct UIStorageSlot_t20;
struct GameObject_t17;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m1275_gshared (GameObject_t17 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m1275(__this, method) (( Object_t * (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m1275_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UIStorageSlot>()
// !!0 UnityEngine.GameObject::GetComponent<UIStorageSlot>()
#define GameObject_GetComponent_TisUIStorageSlot_t20_m1274(__this, method) (( UIStorageSlot_t20 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m1275_gshared)(__this, method)


// System.Void UIItemStorage::.ctor()
extern TypeInfo* List_1_t18_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1276_MethodInfo_var;
extern "C" void UIItemStorage__ctor_m21 (UIItemStorage_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		List_1__ctor_m1276_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___maxItemCount_2 = 8;
		__this->___maxRows_3 = 4;
		__this->___maxColumns_4 = 4;
		__this->___spacing_7 = ((int32_t)128);
		__this->___padding_8 = ((int32_t)10);
		List_1_t18 * L_0 = (List_1_t18 *)il2cpp_codegen_object_new (List_1_t18_il2cpp_TypeInfo_var);
		List_1__ctor_m1276(L_0, /*hidden argument*/List_1__ctor_m1276_MethodInfo_var);
		__this->___mItems_9 = L_0;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<InvGameItem> UIItemStorage::get_items()
extern "C" List_1_t18 * UIItemStorage_get_items_m22 (UIItemStorage_t19 * __this, const MethodInfo* method)
{
	{
		goto IL_0011;
	}

IL_0005:
	{
		List_1_t18 * L_0 = (__this->___mItems_9);
		NullCheck(L_0);
		VirtActionInvoker1< InvGameItem_t16 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<InvGameItem>::Add(!0) */, L_0, (InvGameItem_t16 *)NULL);
	}

IL_0011:
	{
		List_1_t18 * L_1 = (__this->___mItems_9);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<InvGameItem>::get_Count() */, L_1);
		int32_t L_3 = (__this->___maxItemCount_2);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0005;
		}
	}
	{
		List_1_t18 * L_4 = (__this->___mItems_9);
		return L_4;
	}
}
// InvGameItem UIItemStorage::GetItem(System.Int32)
extern "C" InvGameItem_t16 * UIItemStorage_GetItem_m23 (UIItemStorage_t19 * __this, int32_t ___slot, const MethodInfo* method)
{
	InvGameItem_t16 * G_B3_0 = {0};
	{
		int32_t L_0 = ___slot;
		List_1_t18 * L_1 = UIItemStorage_get_items_m22(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<InvGameItem>::get_Count() */, L_1);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		List_1_t18 * L_3 = (__this->___mItems_9);
		int32_t L_4 = ___slot;
		NullCheck(L_3);
		InvGameItem_t16 * L_5 = (InvGameItem_t16 *)VirtFuncInvoker1< InvGameItem_t16 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<InvGameItem>::get_Item(System.Int32) */, L_3, L_4);
		G_B3_0 = L_5;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((InvGameItem_t16 *)(NULL));
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// InvGameItem UIItemStorage::Replace(System.Int32,InvGameItem)
extern "C" InvGameItem_t16 * UIItemStorage_Replace_m24 (UIItemStorage_t19 * __this, int32_t ___slot, InvGameItem_t16 * ___item, const MethodInfo* method)
{
	InvGameItem_t16 * V_0 = {0};
	{
		int32_t L_0 = ___slot;
		int32_t L_1 = (__this->___maxItemCount_2);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0028;
		}
	}
	{
		List_1_t18 * L_2 = UIItemStorage_get_items_m22(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___slot;
		NullCheck(L_2);
		InvGameItem_t16 * L_4 = (InvGameItem_t16 *)VirtFuncInvoker1< InvGameItem_t16 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<InvGameItem>::get_Item(System.Int32) */, L_2, L_3);
		V_0 = L_4;
		List_1_t18 * L_5 = (__this->___mItems_9);
		int32_t L_6 = ___slot;
		InvGameItem_t16 * L_7 = ___item;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, InvGameItem_t16 * >::Invoke(29 /* System.Void System.Collections.Generic.List`1<InvGameItem>::set_Item(System.Int32,!0) */, L_5, L_6, L_7);
		InvGameItem_t16 * L_8 = V_0;
		return L_8;
	}

IL_0028:
	{
		InvGameItem_t16 * L_9 = ___item;
		return L_9;
	}
}
// System.Void UIItemStorage::Start()
extern TypeInfo* Bounds_t113_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisUIStorageSlot_t20_m1274_MethodInfo_var;
extern "C" void UIItemStorage_Start_m25 (UIItemStorage_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Bounds_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		GameObject_GetComponent_TisUIStorageSlot_t20_m1274_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Bounds_t113  V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GameObject_t17 * V_4 = {0};
	Transform_t8 * V_5 = {0};
	UIStorageSlot_t20 * V_6 = {0};
	{
		GameObject_t17 * L_0 = (__this->___template_5);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0172;
		}
	}
	{
		V_0 = 0;
		Initobj (Bounds_t113_il2cpp_TypeInfo_var, (&V_1));
		V_2 = 0;
		goto IL_013e;
	}

IL_0022:
	{
		V_3 = 0;
		goto IL_012e;
	}

IL_0029:
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		GameObject_t17 * L_3 = (__this->___template_5);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		GameObject_t17 * L_4 = NGUITools_AddChild_m565(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		GameObject_t17 * L_5 = V_4;
		NullCheck(L_5);
		Transform_t8 * L_6 = GameObject_get_transform_m1277(L_5, /*hidden argument*/NULL);
		V_5 = L_6;
		Transform_t8 * L_7 = V_5;
		int32_t L_8 = (__this->___padding_8);
		int32_t L_9 = V_3;
		int32_t L_10 = (__this->___spacing_7);
		int32_t L_11 = (__this->___padding_8);
		int32_t L_12 = V_2;
		int32_t L_13 = (__this->___spacing_7);
		Vector3_t48  L_14 = {0};
		Vector3__ctor_m1278(&L_14, ((float)((float)(((float)L_8))+(float)((float)((float)((float)((float)(((float)L_9))+(float)(0.5f)))*(float)(((float)L_10)))))), ((float)((float)(((float)((-L_11))))-(float)((float)((float)((float)((float)(((float)L_12))+(float)(0.5f)))*(float)(((float)L_13)))))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m1265(L_7, L_14, /*hidden argument*/NULL);
		GameObject_t17 * L_15 = V_4;
		NullCheck(L_15);
		UIStorageSlot_t20 * L_16 = GameObject_GetComponent_TisUIStorageSlot_t20_m1274(L_15, /*hidden argument*/GameObject_GetComponent_TisUIStorageSlot_t20_m1274_MethodInfo_var);
		V_6 = L_16;
		UIStorageSlot_t20 * L_17 = V_6;
		bool L_18 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_17, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		UIStorageSlot_t20 * L_19 = V_6;
		NullCheck(L_19);
		L_19->___storage_11 = __this;
		UIStorageSlot_t20 * L_20 = V_6;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->___slot_12 = L_21;
	}

IL_00ad:
	{
		int32_t L_22 = (__this->___padding_8);
		int32_t L_23 = V_3;
		int32_t L_24 = (__this->___spacing_7);
		int32_t L_25 = (__this->___padding_8);
		int32_t L_26 = V_2;
		int32_t L_27 = (__this->___spacing_7);
		Vector3_t48  L_28 = {0};
		Vector3__ctor_m1278(&L_28, ((float)((float)((float)((float)(((float)L_22))*(float)(2.0f)))+(float)(((float)((int32_t)((int32_t)((int32_t)((int32_t)L_23+(int32_t)1))*(int32_t)L_24)))))), ((float)((float)((float)((float)(((float)((-L_25))))*(float)(2.0f)))-(float)(((float)((int32_t)((int32_t)((int32_t)((int32_t)L_26+(int32_t)1))*(int32_t)L_27)))))), (0.0f), /*hidden argument*/NULL);
		Bounds_Encapsulate_m1279((&V_1), L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)1));
		V_0 = L_30;
		int32_t L_31 = (__this->___maxItemCount_2);
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_012a;
		}
	}
	{
		UIWidget_t13 * L_32 = (__this->___background_6);
		bool L_33 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_32, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0129;
		}
	}
	{
		UIWidget_t13 * L_34 = (__this->___background_6);
		NullCheck(L_34);
		Transform_t8 * L_35 = Component_get_transform_m1253(L_34, /*hidden argument*/NULL);
		Vector3_t48  L_36 = Bounds_get_size_m1280((&V_1), /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localScale_m1281(L_35, L_36, /*hidden argument*/NULL);
	}

IL_0129:
	{
		return;
	}

IL_012a:
	{
		int32_t L_37 = V_3;
		V_3 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_012e:
	{
		int32_t L_38 = V_3;
		int32_t L_39 = (__this->___maxColumns_4);
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_013e:
	{
		int32_t L_41 = V_2;
		int32_t L_42 = (__this->___maxRows_3);
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0022;
		}
	}
	{
		UIWidget_t13 * L_43 = (__this->___background_6);
		bool L_44 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_43, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0172;
		}
	}
	{
		UIWidget_t13 * L_45 = (__this->___background_6);
		NullCheck(L_45);
		Transform_t8 * L_46 = Component_get_transform_m1253(L_45, /*hidden argument*/NULL);
		Vector3_t48  L_47 = Bounds_get_size_m1280((&V_1), /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_localScale_m1281(L_46, L_47, /*hidden argument*/NULL);
	}

IL_0172:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UIStorageSlot
#include "AssemblyU2DCSharp_UIStorageSlotMethodDeclarations.h"



// System.Void UIStorageSlot::.ctor()
extern "C" void UIStorageSlot__ctor_m26 (UIStorageSlot_t20 * __this, const MethodInfo* method)
{
	{
		UIItemSlot__ctor_m14(__this, /*hidden argument*/NULL);
		return;
	}
}
// InvGameItem UIStorageSlot::get_observedItem()
extern "C" InvGameItem_t16 * UIStorageSlot_get_observedItem_m27 (UIStorageSlot_t20 * __this, const MethodInfo* method)
{
	InvGameItem_t16 * G_B3_0 = {0};
	{
		UIItemStorage_t19 * L_0 = (__this->___storage_11);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		UIItemStorage_t19 * L_2 = (__this->___storage_11);
		int32_t L_3 = (__this->___slot_12);
		NullCheck(L_2);
		InvGameItem_t16 * L_4 = UIItemStorage_GetItem_m23(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = ((InvGameItem_t16 *)(NULL));
	}

IL_0028:
	{
		return G_B3_0;
	}
}
// InvGameItem UIStorageSlot::Replace(InvGameItem)
extern "C" InvGameItem_t16 * UIStorageSlot_Replace_m28 (UIStorageSlot_t20 * __this, InvGameItem_t16 * ___item, const MethodInfo* method)
{
	InvGameItem_t16 * G_B3_0 = {0};
	{
		UIItemStorage_t19 * L_0 = (__this->___storage_11);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		UIItemStorage_t19 * L_2 = (__this->___storage_11);
		int32_t L_3 = (__this->___slot_12);
		InvGameItem_t16 * L_4 = ___item;
		NullCheck(L_2);
		InvGameItem_t16 * L_5 = UIItemStorage_Replace_m24(L_2, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_0029;
	}

IL_0028:
	{
		InvGameItem_t16 * L_6 = ___item;
		G_B3_0 = L_6;
	}

IL_0029:
	{
		return G_B3_0;
	}
}
// InvAttachmentPoint
#include "AssemblyU2DCSharp_InvAttachmentPoint.h"
#ifndef _MSC_VER
#else
#endif
// InvAttachmentPoint
#include "AssemblyU2DCSharp_InvAttachmentPointMethodDeclarations.h"

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"


// System.Void InvAttachmentPoint::.ctor()
extern "C" void InvAttachmentPoint__ctor_m29 (InvAttachmentPoint_t21 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject InvAttachmentPoint::Attach(UnityEngine.GameObject)
extern TypeInfo* GameObject_t17_il2cpp_TypeInfo_var;
extern "C" GameObject_t17 * InvAttachmentPoint_Attach_m30 (InvAttachmentPoint_t21 * __this, GameObject_t17 * ___prefab, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t8 * V_0 = {0};
	Transform_t8 * V_1 = {0};
	{
		GameObject_t17 * L_0 = (__this->___mPrefab_3);
		GameObject_t17 * L_1 = ___prefab;
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00a2;
		}
	}
	{
		GameObject_t17 * L_3 = ___prefab;
		__this->___mPrefab_3 = L_3;
		GameObject_t17 * L_4 = (__this->___mChild_4);
		bool L_5 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_4, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		GameObject_t17 * L_6 = (__this->___mChild_4);
		Object_Destroy_m1250(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0034:
	{
		GameObject_t17 * L_7 = (__this->___mPrefab_3);
		bool L_8 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_7, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00a2;
		}
	}
	{
		Transform_t8 * L_9 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		GameObject_t17 * L_10 = (__this->___mPrefab_3);
		Transform_t8 * L_11 = V_0;
		NullCheck(L_11);
		Vector3_t48  L_12 = Transform_get_position_m1282(L_11, /*hidden argument*/NULL);
		Transform_t8 * L_13 = V_0;
		NullCheck(L_13);
		Quaternion_t50  L_14 = Transform_get_rotation_m1283(L_13, /*hidden argument*/NULL);
		Object_t69 * L_15 = Object_Instantiate_m1284(NULL /*static, unused*/, L_10, L_12, L_14, /*hidden argument*/NULL);
		__this->___mChild_4 = ((GameObject_t17 *)IsInst(L_15, GameObject_t17_il2cpp_TypeInfo_var));
		GameObject_t17 * L_16 = (__this->___mChild_4);
		NullCheck(L_16);
		Transform_t8 * L_17 = GameObject_get_transform_m1277(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Transform_t8 * L_18 = V_1;
		Transform_t8 * L_19 = V_0;
		NullCheck(L_18);
		Transform_set_parent_m1285(L_18, L_19, /*hidden argument*/NULL);
		Transform_t8 * L_20 = V_1;
		Vector3_t48  L_21 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_m1265(L_20, L_21, /*hidden argument*/NULL);
		Transform_t8 * L_22 = V_1;
		Quaternion_t50  L_23 = Quaternion_get_identity_m1287(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localRotation_m1288(L_22, L_23, /*hidden argument*/NULL);
		Transform_t8 * L_24 = V_1;
		Vector3_t48  L_25 = Vector3_get_one_m1289(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localScale_m1281(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		GameObject_t17 * L_26 = (__this->___mChild_4);
		return L_26;
	}
}
#ifndef _MSC_VER
#else
#endif
// InvBaseItem/Slot
#include "AssemblyU2DCSharp_InvBaseItem_SlotMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// InvBaseItem
#include "AssemblyU2DCSharp_InvBaseItemMethodDeclarations.h"

// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void InvBaseItem::.ctor()
extern TypeInfo* List_1_t23_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1290_MethodInfo_var;
extern "C" void InvBaseItem__ctor_m31 (InvBaseItem_t24 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		List_1__ctor_m1290_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___minItemLevel_4 = 1;
		__this->___maxItemLevel_5 = ((int32_t)50);
		List_1_t23 * L_0 = (List_1_t23 *)il2cpp_codegen_object_new (List_1_t23_il2cpp_TypeInfo_var);
		List_1__ctor_m1290(L_0, /*hidden argument*/List_1__ctor_m1290_MethodInfo_var);
		__this->___stats_6 = L_0;
		Color_t25  L_1 = Color_get_white_m1273(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___color_8 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___iconName_10 = L_2;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

struct NGUITools_t167;
struct InvDatabaseU5BU5D_t26;
// NGUITools
#include "AssemblyU2DCSharp_NGUITools.h"
struct NGUITools_t167;
struct ObjectU5BU5D_t300;
// Declaration !!0[] NGUITools::FindActive<System.Object>()
// !!0[] NGUITools::FindActive<System.Object>()
extern "C" ObjectU5BU5D_t300* NGUITools_FindActive_TisObject_t_m1293_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define NGUITools_FindActive_TisObject_t_m1293(__this /* static, unused */, method) (( ObjectU5BU5D_t300* (*) (Object_t * /* static, unused */, const MethodInfo*))NGUITools_FindActive_TisObject_t_m1293_gshared)(__this /* static, unused */, method)
// Declaration !!0[] NGUITools::FindActive<InvDatabase>()
// !!0[] NGUITools::FindActive<InvDatabase>()
#define NGUITools_FindActive_TisInvDatabase_t28_m1292(__this /* static, unused */, method) (( InvDatabaseU5BU5D_t26* (*) (Object_t * /* static, unused */, const MethodInfo*))NGUITools_FindActive_TisObject_t_m1293_gshared)(__this /* static, unused */, method)


// System.Void InvDatabase::.ctor()
extern TypeInfo* List_1_t27_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1294_MethodInfo_var;
extern "C" void InvDatabase__ctor_m32 (InvDatabase_t28 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		List_1__ctor_m1294_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t27 * L_0 = (List_1_t27 *)il2cpp_codegen_object_new (List_1_t27_il2cpp_TypeInfo_var);
		List_1__ctor_m1294(L_0, /*hidden argument*/List_1__ctor_m1294_MethodInfo_var);
		__this->___items_5 = L_0;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InvDatabase::.cctor()
extern TypeInfo* InvDatabase_t28_il2cpp_TypeInfo_var;
extern "C" void InvDatabase__cctor_m33 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvDatabase_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		((InvDatabase_t28_StaticFields*)InvDatabase_t28_il2cpp_TypeInfo_var->static_fields)->___mIsDirty_3 = 1;
		return;
	}
}
// InvDatabase[] InvDatabase::get_list()
extern TypeInfo* InvDatabase_t28_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* NGUITools_FindActive_TisInvDatabase_t28_m1292_MethodInfo_var;
extern "C" InvDatabaseU5BU5D_t26* InvDatabase_get_list_m34 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvDatabase_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		NGUITools_FindActive_TisInvDatabase_t28_m1292_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		bool L_0 = ((InvDatabase_t28_StaticFields*)InvDatabase_t28_il2cpp_TypeInfo_var->static_fields)->___mIsDirty_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		((InvDatabase_t28_StaticFields*)InvDatabase_t28_il2cpp_TypeInfo_var->static_fields)->___mIsDirty_3 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		InvDatabaseU5BU5D_t26* L_1 = NGUITools_FindActive_TisInvDatabase_t28_m1292(NULL /*static, unused*/, /*hidden argument*/NGUITools_FindActive_TisInvDatabase_t28_m1292_MethodInfo_var);
		((InvDatabase_t28_StaticFields*)InvDatabase_t28_il2cpp_TypeInfo_var->static_fields)->___mList_2 = L_1;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		InvDatabaseU5BU5D_t26* L_2 = ((InvDatabase_t28_StaticFields*)InvDatabase_t28_il2cpp_TypeInfo_var->static_fields)->___mList_2;
		return L_2;
	}
}
// System.Void InvDatabase::OnEnable()
extern TypeInfo* InvDatabase_t28_il2cpp_TypeInfo_var;
extern "C" void InvDatabase_OnEnable_m35 (InvDatabase_t28 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvDatabase_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		((InvDatabase_t28_StaticFields*)InvDatabase_t28_il2cpp_TypeInfo_var->static_fields)->___mIsDirty_3 = 1;
		return;
	}
}
// System.Void InvDatabase::OnDisable()
extern TypeInfo* InvDatabase_t28_il2cpp_TypeInfo_var;
extern "C" void InvDatabase_OnDisable_m36 (InvDatabase_t28 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvDatabase_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		((InvDatabase_t28_StaticFields*)InvDatabase_t28_il2cpp_TypeInfo_var->static_fields)->___mIsDirty_3 = 1;
		return;
	}
}
// InvBaseItem InvDatabase::GetItem(System.Int32)
extern "C" InvBaseItem_t24 * InvDatabase_GetItem_m37 (InvDatabase_t28 * __this, int32_t ___id16, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InvBaseItem_t24 * V_2 = {0};
	{
		V_0 = 0;
		List_1_t27 * L_0 = (__this->___items_5);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<InvBaseItem>::get_Count() */, L_0);
		V_1 = L_1;
		goto IL_0032;
	}

IL_0013:
	{
		List_1_t27 * L_2 = (__this->___items_5);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		InvBaseItem_t24 * L_4 = (InvBaseItem_t24 *)VirtFuncInvoker1< InvBaseItem_t24 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<InvBaseItem>::get_Item(System.Int32) */, L_2, L_3);
		V_2 = L_4;
		InvBaseItem_t24 * L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___id16_0);
		int32_t L_7 = ___id16;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		InvBaseItem_t24 * L_8 = V_2;
		return L_8;
	}

IL_002e:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		return (InvBaseItem_t24 *)NULL;
	}
}
// InvDatabase InvDatabase::GetDatabase(System.Int32)
extern TypeInfo* InvDatabase_t28_il2cpp_TypeInfo_var;
extern "C" InvDatabase_t28 * InvDatabase_GetDatabase_m38 (Object_t * __this /* static, unused */, int32_t ___dbID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvDatabase_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InvDatabase_t28 * V_2 = {0};
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		InvDatabaseU5BU5D_t26* L_0 = InvDatabase_get_list_m34(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		V_1 = (((int32_t)(((Array_t *)L_0)->max_length)));
		goto IL_0029;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		InvDatabaseU5BU5D_t26* L_1 = InvDatabase_get_list_m34(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (*(InvDatabase_t28 **)(InvDatabase_t28 **)SZArrayLdElema(L_1, L_3));
		InvDatabase_t28 * L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5 = (L_4->___databaseID_4);
		int32_t L_6 = ___dbID;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		InvDatabase_t28 * L_7 = V_2;
		return L_7;
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0029:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000f;
		}
	}
	{
		return (InvDatabase_t28 *)NULL;
	}
}
// InvBaseItem InvDatabase::FindByID(System.Int32)
extern TypeInfo* InvDatabase_t28_il2cpp_TypeInfo_var;
extern "C" InvBaseItem_t24 * InvDatabase_FindByID_m39 (Object_t * __this /* static, unused */, int32_t ___id32, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvDatabase_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	InvDatabase_t28 * V_0 = {0};
	InvBaseItem_t24 * G_B3_0 = {0};
	{
		int32_t L_0 = ___id32;
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		InvDatabase_t28 * L_1 = InvDatabase_GetDatabase_m38(NULL /*static, unused*/, ((int32_t)((int32_t)L_0>>(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		V_0 = L_1;
		InvDatabase_t28 * L_2 = V_0;
		bool L_3 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		InvDatabase_t28 * L_4 = V_0;
		int32_t L_5 = ___id32;
		NullCheck(L_4);
		InvBaseItem_t24 * L_6 = InvDatabase_GetItem_m37(L_4, ((int32_t)((int32_t)L_5&(int32_t)((int32_t)65535))), /*hidden argument*/NULL);
		G_B3_0 = L_6;
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = ((InvBaseItem_t24 *)(NULL));
	}

IL_0029:
	{
		return G_B3_0;
	}
}
// InvBaseItem InvDatabase::FindByName(System.String)
extern TypeInfo* InvDatabase_t28_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" InvBaseItem_t24 * InvDatabase_FindByName_m40 (Object_t * __this /* static, unused */, String_t* ___exact, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvDatabase_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InvDatabase_t28 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	InvBaseItem_t24 * V_5 = {0};
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		InvDatabaseU5BU5D_t26* L_0 = InvDatabase_get_list_m34(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		V_1 = (((int32_t)(((Array_t *)L_0)->max_length)));
		goto IL_005e;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		InvDatabaseU5BU5D_t26* L_1 = InvDatabase_get_list_m34(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (*(InvDatabase_t28 **)(InvDatabase_t28 **)SZArrayLdElema(L_1, L_3));
		V_3 = 0;
		InvDatabase_t28 * L_4 = V_2;
		NullCheck(L_4);
		List_1_t27 * L_5 = (L_4->___items_5);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<InvBaseItem>::get_Count() */, L_5);
		V_4 = L_6;
		goto IL_0052;
	}

IL_002b:
	{
		InvDatabase_t28 * L_7 = V_2;
		NullCheck(L_7);
		List_1_t27 * L_8 = (L_7->___items_5);
		int32_t L_9 = V_3;
		NullCheck(L_8);
		InvBaseItem_t24 * L_10 = (InvBaseItem_t24 *)VirtFuncInvoker1< InvBaseItem_t24 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<InvBaseItem>::get_Item(System.Int32) */, L_8, L_9);
		V_5 = L_10;
		InvBaseItem_t24 * L_11 = V_5;
		NullCheck(L_11);
		String_t* L_12 = (L_11->___name_1);
		String_t* L_13 = ___exact;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m1295(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_004e;
		}
	}
	{
		InvBaseItem_t24 * L_15 = V_5;
		return L_15;
	}

IL_004e:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0052:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_4;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_000f;
		}
	}
	{
		return (InvBaseItem_t24 *)NULL;
	}
}
// System.Int32 InvDatabase::FindItemID(InvBaseItem)
extern TypeInfo* InvDatabase_t28_il2cpp_TypeInfo_var;
extern "C" int32_t InvDatabase_FindItemID_m41 (Object_t * __this /* static, unused */, InvBaseItem_t24 * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvDatabase_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InvDatabase_t28 * V_2 = {0};
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		InvDatabaseU5BU5D_t26* L_0 = InvDatabase_get_list_m34(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		V_1 = (((int32_t)(((Array_t *)L_0)->max_length)));
		goto IL_003d;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		InvDatabaseU5BU5D_t26* L_1 = InvDatabase_get_list_m34(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (*(InvDatabase_t28 **)(InvDatabase_t28 **)SZArrayLdElema(L_1, L_3));
		InvDatabase_t28 * L_4 = V_2;
		NullCheck(L_4);
		List_1_t27 * L_5 = (L_4->___items_5);
		InvBaseItem_t24 * L_6 = ___item;
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, InvBaseItem_t24 * >::Invoke(21 /* System.Boolean System.Collections.Generic.List`1<InvBaseItem>::Contains(!0) */, L_5, L_6);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		InvDatabase_t28 * L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = (L_8->___databaseID_4);
		InvBaseItem_t24 * L_10 = ___item;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___id16_0);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_9<<(int32_t)((int32_t)16)))|(int32_t)L_11));
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
struct Component_t107;
struct InvAttachmentPointU5BU5D_t30;
struct Component_t107;
struct ObjectU5BU5D_t300;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t300* Component_GetComponentsInChildren_TisObject_t_m1297_gshared (Component_t107 * __this, const MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m1297(__this, method) (( ObjectU5BU5D_t300* (*) (Component_t107 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m1297_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<InvAttachmentPoint>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<InvAttachmentPoint>()
#define Component_GetComponentsInChildren_TisInvAttachmentPoint_t21_m1296(__this, method) (( InvAttachmentPointU5BU5D_t30* (*) (Component_t107 *, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m1297_gshared)(__this, method)
struct GameObject_t17;
struct Renderer_t301;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t301_m1298(__this, method) (( Renderer_t301 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m1275_gshared)(__this, method)


// System.Void InvEquipment::.ctor()
extern "C" void InvEquipment__ctor_m42 (InvEquipment_t4 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// InvGameItem[] InvEquipment::get_equippedItems()
extern "C" InvGameItemU5BU5D_t29* InvEquipment_get_equippedItems_m43 (InvEquipment_t4 * __this, const MethodInfo* method)
{
	{
		InvGameItemU5BU5D_t29* L_0 = (__this->___mItems_2);
		return L_0;
	}
}
// InvGameItem InvEquipment::Replace(InvBaseItem/Slot,InvGameItem)
extern TypeInfo* InvGameItemU5BU5D_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisInvAttachmentPoint_t21_m1296_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t301_m1298_MethodInfo_var;
extern "C" InvGameItem_t16 * InvEquipment_Replace_m44 (InvEquipment_t4 * __this, int32_t ___slot, InvGameItem_t16 * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvGameItemU5BU5D_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Component_GetComponentsInChildren_TisInvAttachmentPoint_t21_m1296_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		GameObject_GetComponent_TisRenderer_t301_m1298_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		s_Il2CppMethodIntialized = true;
	}
	InvBaseItem_t24 * V_0 = {0};
	int32_t V_1 = 0;
	InvGameItem_t16 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	InvAttachmentPoint_t21 * V_5 = {0};
	GameObject_t17 * V_6 = {0};
	Renderer_t301 * V_7 = {0};
	InvBaseItem_t24 * G_B3_0 = {0};
	InvAttachmentPoint_t21 * G_B15_0 = {0};
	InvAttachmentPoint_t21 * G_B14_0 = {0};
	GameObject_t17 * G_B16_0 = {0};
	InvAttachmentPoint_t21 * G_B16_1 = {0};
	{
		InvGameItem_t16 * L_0 = ___item;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvGameItem_t16 * L_1 = ___item;
		NullCheck(L_1);
		InvBaseItem_t24 * L_2 = InvGameItem_get_baseItem_m54(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = ((InvBaseItem_t24 *)(NULL));
	}

IL_0012:
	{
		V_0 = G_B3_0;
		int32_t L_3 = ___slot;
		if (!L_3)
		{
			goto IL_00ff;
		}
	}
	{
		InvBaseItem_t24 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		InvBaseItem_t24 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___slot_3);
		int32_t L_7 = ___slot;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_002d;
		}
	}
	{
		InvGameItem_t16 * L_8 = ___item;
		return L_8;
	}

IL_002d:
	{
		InvGameItemU5BU5D_t29* L_9 = (__this->___mItems_2);
		if (L_9)
		{
			goto IL_0046;
		}
	}
	{
		V_1 = 8;
		int32_t L_10 = V_1;
		__this->___mItems_2 = ((InvGameItemU5BU5D_t29*)SZArrayNew(InvGameItemU5BU5D_t29_il2cpp_TypeInfo_var, L_10));
	}

IL_0046:
	{
		InvGameItemU5BU5D_t29* L_11 = (__this->___mItems_2);
		int32_t L_12 = ___slot;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)((int32_t)L_12-(int32_t)1)));
		int32_t L_13 = ((int32_t)((int32_t)L_12-(int32_t)1));
		V_2 = (*(InvGameItem_t16 **)(InvGameItem_t16 **)SZArrayLdElema(L_11, L_13));
		InvGameItemU5BU5D_t29* L_14 = (__this->___mItems_2);
		int32_t L_15 = ___slot;
		InvGameItem_t16 * L_16 = ___item;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_15-(int32_t)1)));
		ArrayElementTypeCheck (L_14, L_16);
		*((InvGameItem_t16 **)(InvGameItem_t16 **)SZArrayLdElema(L_14, ((int32_t)((int32_t)L_15-(int32_t)1)))) = (InvGameItem_t16 *)L_16;
		InvAttachmentPointU5BU5D_t30* L_17 = (__this->___mAttachments_3);
		if (L_17)
		{
			goto IL_0073;
		}
	}
	{
		InvAttachmentPointU5BU5D_t30* L_18 = Component_GetComponentsInChildren_TisInvAttachmentPoint_t21_m1296(__this, /*hidden argument*/Component_GetComponentsInChildren_TisInvAttachmentPoint_t21_m1296_MethodInfo_var);
		__this->___mAttachments_3 = L_18;
	}

IL_0073:
	{
		V_3 = 0;
		InvAttachmentPointU5BU5D_t30* L_19 = (__this->___mAttachments_3);
		NullCheck(L_19);
		V_4 = (((int32_t)(((Array_t *)L_19)->max_length)));
		goto IL_00f5;
	}

IL_0084:
	{
		InvAttachmentPointU5BU5D_t30* L_20 = (__this->___mAttachments_3);
		int32_t L_21 = V_3;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_5 = (*(InvAttachmentPoint_t21 **)(InvAttachmentPoint_t21 **)SZArrayLdElema(L_20, L_22));
		InvAttachmentPoint_t21 * L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = (L_23->___slot_2);
		int32_t L_25 = ___slot;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00f1;
		}
	}
	{
		InvAttachmentPoint_t21 * L_26 = V_5;
		InvBaseItem_t24 * L_27 = V_0;
		G_B14_0 = L_26;
		if (!L_27)
		{
			G_B15_0 = L_26;
			goto IL_00ae;
		}
	}
	{
		InvBaseItem_t24 * L_28 = V_0;
		NullCheck(L_28);
		GameObject_t17 * L_29 = (L_28->___attachment_7);
		G_B16_0 = L_29;
		G_B16_1 = G_B14_0;
		goto IL_00af;
	}

IL_00ae:
	{
		G_B16_0 = ((GameObject_t17 *)(NULL));
		G_B16_1 = G_B15_0;
	}

IL_00af:
	{
		NullCheck(G_B16_1);
		GameObject_t17 * L_30 = InvAttachmentPoint_Attach_m30(G_B16_1, G_B16_0, /*hidden argument*/NULL);
		V_6 = L_30;
		InvBaseItem_t24 * L_31 = V_0;
		if (!L_31)
		{
			goto IL_00f1;
		}
	}
	{
		GameObject_t17 * L_32 = V_6;
		bool L_33 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_32, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00f1;
		}
	}
	{
		GameObject_t17 * L_34 = V_6;
		NullCheck(L_34);
		Renderer_t301 * L_35 = GameObject_GetComponent_TisRenderer_t301_m1298(L_34, /*hidden argument*/GameObject_GetComponent_TisRenderer_t301_m1298_MethodInfo_var);
		V_7 = L_35;
		Renderer_t301 * L_36 = V_7;
		bool L_37 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_36, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00f1;
		}
	}
	{
		Renderer_t301 * L_38 = V_7;
		NullCheck(L_38);
		Material_t170 * L_39 = Renderer_get_material_m1299(L_38, /*hidden argument*/NULL);
		InvBaseItem_t24 * L_40 = V_0;
		NullCheck(L_40);
		Color_t25  L_41 = (L_40->___color_8);
		NullCheck(L_39);
		Material_set_color_m1300(L_39, L_41, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		int32_t L_42 = V_3;
		V_3 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_00f5:
	{
		int32_t L_43 = V_3;
		int32_t L_44 = V_4;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0084;
		}
	}
	{
		InvGameItem_t16 * L_45 = V_2;
		return L_45;
	}

IL_00ff:
	{
		InvGameItem_t16 * L_46 = ___item;
		if (!L_46)
		{
			goto IL_011f;
		}
	}
	{
		InvGameItem_t16 * L_47 = ___item;
		NullCheck(L_47);
		String_t* L_48 = InvGameItem_get_name_m55(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Concat_m1271(NULL /*static, unused*/, (String_t*) &_stringLiteral12, L_48, (String_t*) &_stringLiteral13, /*hidden argument*/NULL);
		Debug_LogWarning_m1249(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
	}

IL_011f:
	{
		InvGameItem_t16 * L_50 = ___item;
		return L_50;
	}
}
// InvGameItem InvEquipment::Equip(InvGameItem)
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" InvGameItem_t16 * InvEquipment_Equip_m45 (InvEquipment_t4 * __this, InvGameItem_t16 * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	InvBaseItem_t24 * V_0 = {0};
	{
		InvGameItem_t16 * L_0 = ___item;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		InvGameItem_t16 * L_1 = ___item;
		NullCheck(L_1);
		InvBaseItem_t24 * L_2 = InvGameItem_get_baseItem_m54(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		InvBaseItem_t24 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		InvBaseItem_t24 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (L_4->___slot_3);
		InvGameItem_t16 * L_6 = ___item;
		InvGameItem_t16 * L_7 = InvEquipment_Replace_m44(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0021:
	{
		InvGameItem_t16 * L_8 = ___item;
		NullCheck(L_8);
		int32_t L_9 = InvGameItem_get_baseItemID_m53(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1248(NULL /*static, unused*/, (String_t*) &_stringLiteral1, L_11, /*hidden argument*/NULL);
		Debug_LogWarning_m1249(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_003b:
	{
		InvGameItem_t16 * L_13 = ___item;
		return L_13;
	}
}
// InvGameItem InvEquipment::Unequip(InvGameItem)
extern "C" InvGameItem_t16 * InvEquipment_Unequip_m46 (InvEquipment_t4 * __this, InvGameItem_t16 * ___item, const MethodInfo* method)
{
	InvBaseItem_t24 * V_0 = {0};
	{
		InvGameItem_t16 * L_0 = ___item;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		InvGameItem_t16 * L_1 = ___item;
		NullCheck(L_1);
		InvBaseItem_t24 * L_2 = InvGameItem_get_baseItem_m54(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		InvBaseItem_t24 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		InvBaseItem_t24 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (L_4->___slot_3);
		InvGameItem_t16 * L_6 = InvEquipment_Replace_m44(__this, L_5, (InvGameItem_t16 *)NULL, /*hidden argument*/NULL);
		return L_6;
	}

IL_0021:
	{
		InvGameItem_t16 * L_7 = ___item;
		return L_7;
	}
}
// InvGameItem InvEquipment::Unequip(InvBaseItem/Slot)
extern "C" InvGameItem_t16 * InvEquipment_Unequip_m47 (InvEquipment_t4 * __this, int32_t ___slot, const MethodInfo* method)
{
	{
		int32_t L_0 = ___slot;
		InvGameItem_t16 * L_1 = InvEquipment_Replace_m44(__this, L_0, (InvGameItem_t16 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean InvEquipment::HasEquipped(InvGameItem)
extern "C" bool InvEquipment_HasEquipped_m48 (InvEquipment_t4 * __this, InvGameItem_t16 * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		InvGameItemU5BU5D_t29* L_0 = (__this->___mItems_2);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		V_0 = 0;
		InvGameItemU5BU5D_t29* L_1 = (__this->___mItems_2);
		NullCheck(L_1);
		V_1 = (((int32_t)(((Array_t *)L_1)->max_length)));
		goto IL_002f;
	}

IL_001b:
	{
		InvGameItemU5BU5D_t29* L_2 = (__this->___mItems_2);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		InvGameItem_t16 * L_5 = ___item;
		if ((!(((Object_t*)(InvGameItem_t16 *)(*(InvGameItem_t16 **)(InvGameItem_t16 **)SZArrayLdElema(L_2, L_4))) == ((Object_t*)(InvGameItem_t16 *)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_001b;
		}
	}

IL_0036:
	{
		return 0;
	}
}
// System.Boolean InvEquipment::HasEquipped(InvBaseItem/Slot)
extern "C" bool InvEquipment_HasEquipped_m49 (InvEquipment_t4 * __this, int32_t ___slot, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InvBaseItem_t24 * V_2 = {0};
	{
		InvGameItemU5BU5D_t29* L_0 = (__this->___mItems_2);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		V_0 = 0;
		InvGameItemU5BU5D_t29* L_1 = (__this->___mItems_2);
		NullCheck(L_1);
		V_1 = (((int32_t)(((Array_t *)L_1)->max_length)));
		goto IL_0041;
	}

IL_001b:
	{
		InvGameItemU5BU5D_t29* L_2 = (__this->___mItems_2);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((*(InvGameItem_t16 **)(InvGameItem_t16 **)SZArrayLdElema(L_2, L_4)));
		InvBaseItem_t24 * L_5 = InvGameItem_get_baseItem_m54((*(InvGameItem_t16 **)(InvGameItem_t16 **)SZArrayLdElema(L_2, L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		InvBaseItem_t24 * L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		InvBaseItem_t24 * L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8 = (L_7->___slot_3);
		int32_t L_9 = ___slot;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003d;
		}
	}
	{
		return 1;
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}

IL_0048:
	{
		return 0;
	}
}
// InvGameItem InvEquipment::GetItem(InvBaseItem/Slot)
extern "C" InvGameItem_t16 * InvEquipment_GetItem_m50 (InvEquipment_t4 * __this, int32_t ___slot, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___slot;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = ___slot;
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		InvGameItemU5BU5D_t29* L_2 = (__this->___mItems_2);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = V_0;
		InvGameItemU5BU5D_t29* L_4 = (__this->___mItems_2);
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		InvGameItemU5BU5D_t29* L_5 = (__this->___mItems_2);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		return (*(InvGameItem_t16 **)(InvGameItem_t16 **)SZArrayLdElema(L_5, L_7));
	}

IL_002c:
	{
		return (InvGameItem_t16 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
// InvGameItem/Quality
#include "AssemblyU2DCSharp_InvGameItem_QualityMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Enum
#include "mscorlib_System_Enum.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Comparison`1<InvStat>
#include "mscorlib_System_Comparison_1_gen.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// InvStat
#include "AssemblyU2DCSharp_InvStatMethodDeclarations.h"
// System.Comparison`1<InvStat>
#include "mscorlib_System_Comparison_1_genMethodDeclarations.h"


// System.Void InvGameItem::.ctor(System.Int32)
extern "C" void InvGameItem__ctor_m51 (InvGameItem_t16 * __this, int32_t ___id, const MethodInfo* method)
{
	{
		__this->___quality_1 = 4;
		__this->___itemLevel_2 = 1;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___id;
		__this->___mBaseItemID_0 = L_0;
		return;
	}
}
// System.Void InvGameItem::.ctor(System.Int32,InvBaseItem)
extern "C" void InvGameItem__ctor_m52 (InvGameItem_t16 * __this, int32_t ___id, InvBaseItem_t24 * ___bi, const MethodInfo* method)
{
	{
		__this->___quality_1 = 4;
		__this->___itemLevel_2 = 1;
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___id;
		__this->___mBaseItemID_0 = L_0;
		InvBaseItem_t24 * L_1 = ___bi;
		__this->___mBaseItem_3 = L_1;
		return;
	}
}
// System.Int32 InvGameItem::get_baseItemID()
extern "C" int32_t InvGameItem_get_baseItemID_m53 (InvGameItem_t16 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mBaseItemID_0);
		return L_0;
	}
}
// InvBaseItem InvGameItem::get_baseItem()
extern TypeInfo* InvDatabase_t28_il2cpp_TypeInfo_var;
extern "C" InvBaseItem_t24 * InvGameItem_get_baseItem_m54 (InvGameItem_t16 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvDatabase_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvBaseItem_t24 * L_0 = (__this->___mBaseItem_3);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = InvGameItem_get_baseItemID_m53(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InvDatabase_t28_il2cpp_TypeInfo_var);
		InvBaseItem_t24 * L_2 = InvDatabase_FindByID_m39(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___mBaseItem_3 = L_2;
	}

IL_001c:
	{
		InvBaseItem_t24 * L_3 = (__this->___mBaseItem_3);
		return L_3;
	}
}
// System.String InvGameItem::get_name()
extern TypeInfo* Quality_t31_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* InvGameItem_get_name_m55 (InvGameItem_t16 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Quality_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvBaseItem_t24 * L_0 = InvGameItem_get_baseItem_m54(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000d:
	{
		int32_t L_1 = (__this->___quality_1);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Quality_t31_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_3);
		InvBaseItem_t24 * L_5 = InvGameItem_get_baseItem_m54(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = (L_5->___name_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1271(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral6, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Single InvGameItem::get_statMultiplier()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" float InvGameItem_get_statMultiplier_m56 (InvGameItem_t16 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = {0};
	{
		V_0 = (0.0f);
		int32_t L_0 = (__this->___quality_1);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (L_1 == 0)
		{
			goto IL_0053;
		}
		if (L_1 == 1)
		{
			goto IL_0048;
		}
		if (L_1 == 2)
		{
			goto IL_005e;
		}
		if (L_1 == 3)
		{
			goto IL_0069;
		}
		if (L_1 == 4)
		{
			goto IL_0074;
		}
		if (L_1 == 5)
		{
			goto IL_007f;
		}
		if (L_1 == 6)
		{
			goto IL_008a;
		}
		if (L_1 == 7)
		{
			goto IL_0095;
		}
		if (L_1 == 8)
		{
			goto IL_00a0;
		}
		if (L_1 == 9)
		{
			goto IL_00ab;
		}
		if (L_1 == 10)
		{
			goto IL_00b6;
		}
		if (L_1 == 11)
		{
			goto IL_00c1;
		}
	}
	{
		goto IL_00cc;
	}

IL_0048:
	{
		V_0 = (-1.0f);
		goto IL_00cc;
	}

IL_0053:
	{
		V_0 = (0.0f);
		goto IL_00cc;
	}

IL_005e:
	{
		V_0 = (0.25f);
		goto IL_00cc;
	}

IL_0069:
	{
		V_0 = (0.9f);
		goto IL_00cc;
	}

IL_0074:
	{
		V_0 = (1.0f);
		goto IL_00cc;
	}

IL_007f:
	{
		V_0 = (1.1f);
		goto IL_00cc;
	}

IL_008a:
	{
		V_0 = (1.25f);
		goto IL_00cc;
	}

IL_0095:
	{
		V_0 = (1.5f);
		goto IL_00cc;
	}

IL_00a0:
	{
		V_0 = (1.75f);
		goto IL_00cc;
	}

IL_00ab:
	{
		V_0 = (2.0f);
		goto IL_00cc;
	}

IL_00b6:
	{
		V_0 = (2.5f);
		goto IL_00cc;
	}

IL_00c1:
	{
		V_0 = (3.0f);
		goto IL_00cc;
	}

IL_00cc:
	{
		int32_t L_2 = (__this->___itemLevel_2);
		V_1 = ((float)((float)(((float)L_2))/(float)(50.0f)));
		float L_3 = V_0;
		float L_4 = V_1;
		float L_5 = V_1;
		float L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Lerp_m1301(NULL /*static, unused*/, L_4, ((float)((float)L_5*(float)L_6)), (0.5f), /*hidden argument*/NULL);
		V_0 = ((float)((float)L_3*(float)L_7));
		float L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Color InvGameItem::get_color()
extern "C" Color_t25  InvGameItem_get_color_m57 (InvGameItem_t16 * __this, const MethodInfo* method)
{
	Color_t25  V_0 = {0};
	int32_t V_1 = {0};
	{
		Color_t25  L_0 = Color_get_white_m1273(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = (__this->___quality_1);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2 == 0)
		{
			goto IL_0053;
		}
		if (L_2 == 1)
		{
			goto IL_0048;
		}
		if (L_2 == 2)
		{
			goto IL_006e;
		}
		if (L_2 == 3)
		{
			goto IL_0089;
		}
		if (L_2 == 4)
		{
			goto IL_00a4;
		}
		if (L_2 == 5)
		{
			goto IL_00bf;
		}
		if (L_2 == 6)
		{
			goto IL_00cf;
		}
		if (L_2 == 7)
		{
			goto IL_00df;
		}
		if (L_2 == 8)
		{
			goto IL_00ef;
		}
		if (L_2 == 9)
		{
			goto IL_00ff;
		}
		if (L_2 == 10)
		{
			goto IL_010f;
		}
		if (L_2 == 11)
		{
			goto IL_011f;
		}
	}
	{
		goto IL_012f;
	}

IL_0048:
	{
		Color_t25  L_3 = Color_get_red_m1302(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_012f;
	}

IL_0053:
	{
		Color__ctor_m1303((&V_0), (0.4f), (0.2f), (0.2f), /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_006e:
	{
		Color__ctor_m1303((&V_0), (0.4f), (0.4f), (0.4f), /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_0089:
	{
		Color__ctor_m1303((&V_0), (0.7f), (0.7f), (0.7f), /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_00a4:
	{
		Color__ctor_m1303((&V_0), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_00bf:
	{
		Color_t25  L_4 = NGUIMath_HexToColor_m523(NULL /*static, unused*/, ((int32_t)-520110337), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_012f;
	}

IL_00cf:
	{
		Color_t25  L_5 = NGUIMath_HexToColor_m523(NULL /*static, unused*/, ((int32_t)-1814607361), /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_012f;
	}

IL_00df:
	{
		Color_t25  L_6 = NGUIMath_HexToColor_m523(NULL /*static, unused*/, ((int32_t)1325334783), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_012f;
	}

IL_00ef:
	{
		Color_t25  L_7 = NGUIMath_HexToColor_m523(NULL /*static, unused*/, ((int32_t)12255231), /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_012f;
	}

IL_00ff:
	{
		Color_t25  L_8 = NGUIMath_HexToColor_m523(NULL /*static, unused*/, ((int32_t)1937178111), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_012f;
	}

IL_010f:
	{
		Color_t25  L_9 = NGUIMath_HexToColor_m523(NULL /*static, unused*/, ((int32_t)-1778319361), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_012f;
	}

IL_011f:
	{
		Color_t25  L_10 = NGUIMath_HexToColor_m523(NULL /*static, unused*/, ((int32_t)-7339777), /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_012f;
	}

IL_012f:
	{
		Color_t25  L_11 = V_0;
		return L_11;
	}
}
// System.Collections.Generic.List`1<InvStat> InvGameItem::CalculateStats()
extern TypeInfo* List_1_t23_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern TypeInfo* InvStat_t34_il2cpp_TypeInfo_var;
extern TypeInfo* Comparison_1_t302_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1290_MethodInfo_var;
extern const MethodInfo* InvStat_CompareArmor_m62_MethodInfo_var;
extern const MethodInfo* Comparison_1__ctor_m1305_MethodInfo_var;
extern const MethodInfo* List_1_Sort_m1306_MethodInfo_var;
extern "C" List_1_t23 * InvGameItem_CalculateStats_m58 (InvGameItem_t16 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t23_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		InvStat_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Comparison_1_t302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		List_1__ctor_m1290_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		InvStat_CompareArmor_m62_MethodInfo_var = il2cpp_codegen_method_info_from_index(11);
		Comparison_1__ctor_m1305_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		List_1_Sort_m1306_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483661);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t23 * V_0 = {0};
	float V_1 = 0.0f;
	List_1_t23 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	InvStat_t34 * V_5 = {0};
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	InvStat_t34 * V_10 = {0};
	InvStat_t34 * V_11 = {0};
	{
		List_1_t23 * L_0 = (List_1_t23 *)il2cpp_codegen_object_new (List_1_t23_il2cpp_TypeInfo_var);
		List_1__ctor_m1290(L_0, /*hidden argument*/List_1__ctor_m1290_MethodInfo_var);
		V_0 = L_0;
		InvBaseItem_t24 * L_1 = InvGameItem_get_baseItem_m54(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_011c;
		}
	}
	{
		float L_2 = InvGameItem_get_statMultiplier_m56(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		InvBaseItem_t24 * L_3 = InvGameItem_get_baseItem_m54(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_t23 * L_4 = (L_3->___stats_6);
		V_2 = L_4;
		V_3 = 0;
		List_1_t23 * L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<InvStat>::get_Count() */, L_5);
		V_4 = L_6;
		goto IL_0102;
	}

IL_0033:
	{
		List_1_t23 * L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		InvStat_t34 * L_9 = (InvStat_t34 *)VirtFuncInvoker1< InvStat_t34 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<InvStat>::get_Item(System.Int32) */, L_7, L_8);
		V_5 = L_9;
		float L_10 = V_1;
		InvStat_t34 * L_11 = V_5;
		NullCheck(L_11);
		int32_t L_12 = (L_11->___amount_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		int32_t L_13 = Mathf_RoundToInt_m1304(NULL /*static, unused*/, ((float)((float)L_10*(float)(((float)L_12)))), /*hidden argument*/NULL);
		V_6 = L_13;
		int32_t L_14 = V_6;
		if (L_14)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_00fe;
	}

IL_0059:
	{
		V_7 = 0;
		V_8 = 0;
		List_1_t23 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<InvStat>::get_Count() */, L_15);
		V_9 = L_16;
		goto IL_00ba;
	}

IL_006c:
	{
		List_1_t23 * L_17 = V_0;
		int32_t L_18 = V_8;
		NullCheck(L_17);
		InvStat_t34 * L_19 = (InvStat_t34 *)VirtFuncInvoker1< InvStat_t34 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<InvStat>::get_Item(System.Int32) */, L_17, L_18);
		V_10 = L_19;
		InvStat_t34 * L_20 = V_10;
		NullCheck(L_20);
		int32_t L_21 = (L_20->___id_0);
		InvStat_t34 * L_22 = V_5;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___id_0);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_00b4;
		}
	}
	{
		InvStat_t34 * L_24 = V_10;
		NullCheck(L_24);
		int32_t L_25 = (L_24->___modifier_1);
		InvStat_t34 * L_26 = V_5;
		NullCheck(L_26);
		int32_t L_27 = (L_26->___modifier_1);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_00b4;
		}
	}
	{
		InvStat_t34 * L_28 = V_10;
		InvStat_t34 * L_29 = L_28;
		NullCheck(L_29);
		int32_t L_30 = (L_29->___amount_2);
		int32_t L_31 = V_6;
		NullCheck(L_29);
		L_29->___amount_2 = ((int32_t)((int32_t)L_30+(int32_t)L_31));
		V_7 = 1;
		goto IL_00c3;
	}

IL_00b4:
	{
		int32_t L_32 = V_8;
		V_8 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00ba:
	{
		int32_t L_33 = V_8;
		int32_t L_34 = V_9;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_006c;
		}
	}

IL_00c3:
	{
		bool L_35 = V_7;
		if (L_35)
		{
			goto IL_00fe;
		}
	}
	{
		InvStat_t34 * L_36 = (InvStat_t34 *)il2cpp_codegen_object_new (InvStat_t34_il2cpp_TypeInfo_var);
		InvStat__ctor_m59(L_36, /*hidden argument*/NULL);
		V_11 = L_36;
		InvStat_t34 * L_37 = V_11;
		InvStat_t34 * L_38 = V_5;
		NullCheck(L_38);
		int32_t L_39 = (L_38->___id_0);
		NullCheck(L_37);
		L_37->___id_0 = L_39;
		InvStat_t34 * L_40 = V_11;
		int32_t L_41 = V_6;
		NullCheck(L_40);
		L_40->___amount_2 = L_41;
		InvStat_t34 * L_42 = V_11;
		InvStat_t34 * L_43 = V_5;
		NullCheck(L_43);
		int32_t L_44 = (L_43->___modifier_1);
		NullCheck(L_42);
		L_42->___modifier_1 = L_44;
		List_1_t23 * L_45 = V_0;
		InvStat_t34 * L_46 = V_11;
		NullCheck(L_45);
		VirtActionInvoker1< InvStat_t34 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<InvStat>::Add(!0) */, L_45, L_46);
	}

IL_00fe:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)((int32_t)L_47+(int32_t)1));
	}

IL_0102:
	{
		int32_t L_48 = V_3;
		int32_t L_49 = V_4;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0033;
		}
	}
	{
		List_1_t23 * L_50 = V_0;
		IntPtr_t L_51 = { (void*)InvStat_CompareArmor_m62_MethodInfo_var };
		Comparison_1_t302 * L_52 = (Comparison_1_t302 *)il2cpp_codegen_object_new (Comparison_1_t302_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m1305(L_52, NULL, L_51, /*hidden argument*/Comparison_1__ctor_m1305_MethodInfo_var);
		NullCheck(L_50);
		List_1_Sort_m1306(L_50, L_52, /*hidden argument*/List_1_Sort_m1306_MethodInfo_var);
	}

IL_011c:
	{
		List_1_t23 * L_53 = V_0;
		return L_53;
	}
}
#ifndef _MSC_VER
#else
#endif
// InvStat/Identifier
#include "AssemblyU2DCSharp_InvStat_IdentifierMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// InvStat/Modifier
#include "AssemblyU2DCSharp_InvStat_ModifierMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void InvStat::.ctor()
extern "C" void InvStat__ctor_m59 (InvStat_t34 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String InvStat::GetName(InvStat/Identifier)
extern TypeInfo* Identifier_t32_il2cpp_TypeInfo_var;
extern "C" String_t* InvStat_GetName_m60 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Identifier_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___i;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Identifier_t32_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		return L_3;
	}
}
// System.String InvStat::GetDescription(InvStat/Identifier)
extern "C" String_t* InvStat_GetDescription_m61 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___i;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0031;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
		if (L_1 == 2)
		{
			goto IL_003d;
		}
		if (L_1 == 3)
		{
			goto IL_0043;
		}
		if (L_1 == 4)
		{
			goto IL_0049;
		}
		if (L_1 == 5)
		{
			goto IL_004f;
		}
		if (L_1 == 6)
		{
			goto IL_0055;
		}
		if (L_1 == 7)
		{
			goto IL_005b;
		}
		if (L_1 == 8)
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0067;
	}

IL_0031:
	{
		return (String_t*) &_stringLiteral14;
	}

IL_0037:
	{
		return (String_t*) &_stringLiteral15;
	}

IL_003d:
	{
		return (String_t*) &_stringLiteral16;
	}

IL_0043:
	{
		return (String_t*) &_stringLiteral17;
	}

IL_0049:
	{
		return (String_t*) &_stringLiteral18;
	}

IL_004f:
	{
		return (String_t*) &_stringLiteral19;
	}

IL_0055:
	{
		return (String_t*) &_stringLiteral20;
	}

IL_005b:
	{
		return (String_t*) &_stringLiteral21;
	}

IL_0061:
	{
		return (String_t*) &_stringLiteral22;
	}

IL_0067:
	{
		return (String_t*)NULL;
	}
}
// System.Int32 InvStat::CompareArmor(InvStat,InvStat)
extern "C" int32_t InvStat_CompareArmor_m62 (Object_t * __this /* static, unused */, InvStat_t34 * ___a, InvStat_t34 * ___b, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		InvStat_t34 * L_0 = ___a;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___id_0);
		V_0 = L_1;
		InvStat_t34 * L_2 = ___b;
		NullCheck(L_2);
		int32_t L_3 = (L_2->___id_0);
		V_1 = L_3;
		InvStat_t34 * L_4 = ___a;
		NullCheck(L_4);
		int32_t L_5 = (L_4->___id_0);
		if ((!(((uint32_t)L_5) == ((uint32_t)6))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6-(int32_t)((int32_t)10000)));
		goto IL_003b;
	}

IL_0027:
	{
		InvStat_t34 * L_7 = ___a;
		NullCheck(L_7);
		int32_t L_8 = (L_7->___id_0);
		if ((!(((uint32_t)L_8) == ((uint32_t)4))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)5000)));
	}

IL_003b:
	{
		InvStat_t34 * L_10 = ___b;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___id_0);
		if ((!(((uint32_t)L_11) == ((uint32_t)6))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12-(int32_t)((int32_t)10000)));
		goto IL_0068;
	}

IL_0054:
	{
		InvStat_t34 * L_13 = ___b;
		NullCheck(L_13);
		int32_t L_14 = (L_13->___id_0);
		if ((!(((uint32_t)L_14) == ((uint32_t)4))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15-(int32_t)((int32_t)5000)));
	}

IL_0068:
	{
		InvStat_t34 * L_16 = ___a;
		NullCheck(L_16);
		int32_t L_17 = (L_16->___amount_2);
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)((int32_t)1000)));
	}

IL_007c:
	{
		InvStat_t34 * L_19 = ___b;
		NullCheck(L_19);
		int32_t L_20 = (L_19->___amount_2);
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)((int32_t)L_21+(int32_t)((int32_t)1000)));
	}

IL_0090:
	{
		InvStat_t34 * L_22 = ___a;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___modifier_1);
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24+(int32_t)((int32_t)100)));
	}

IL_00a1:
	{
		InvStat_t34 * L_25 = ___b;
		NullCheck(L_25);
		int32_t L_26 = (L_25->___modifier_1);
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)((int32_t)100)));
	}

IL_00b2:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_00bb;
		}
	}
	{
		return (-1);
	}

IL_00bb:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c4;
		}
	}
	{
		return 1;
	}

IL_00c4:
	{
		return 0;
	}
}
// System.Int32 InvStat::CompareWeapon(InvStat,InvStat)
extern "C" int32_t InvStat_CompareWeapon_m63 (Object_t * __this /* static, unused */, InvStat_t34 * ___a, InvStat_t34 * ___b, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		InvStat_t34 * L_0 = ___a;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___id_0);
		V_0 = L_1;
		InvStat_t34 * L_2 = ___b;
		NullCheck(L_2);
		int32_t L_3 = (L_2->___id_0);
		V_1 = L_3;
		InvStat_t34 * L_4 = ___a;
		NullCheck(L_4);
		int32_t L_5 = (L_4->___id_0);
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6-(int32_t)((int32_t)10000)));
		goto IL_003b;
	}

IL_0027:
	{
		InvStat_t34 * L_7 = ___a;
		NullCheck(L_7);
		int32_t L_8 = (L_7->___id_0);
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)5000)));
	}

IL_003b:
	{
		InvStat_t34 * L_10 = ___b;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___id_0);
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12-(int32_t)((int32_t)10000)));
		goto IL_0068;
	}

IL_0054:
	{
		InvStat_t34 * L_13 = ___b;
		NullCheck(L_13);
		int32_t L_14 = (L_13->___id_0);
		if ((!(((uint32_t)L_14) == ((uint32_t)6))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15-(int32_t)((int32_t)5000)));
	}

IL_0068:
	{
		InvStat_t34 * L_16 = ___a;
		NullCheck(L_16);
		int32_t L_17 = (L_16->___amount_2);
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)((int32_t)1000)));
	}

IL_007c:
	{
		InvStat_t34 * L_19 = ___b;
		NullCheck(L_19);
		int32_t L_20 = (L_19->___amount_2);
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)((int32_t)L_21+(int32_t)((int32_t)1000)));
	}

IL_0090:
	{
		InvStat_t34 * L_22 = ___a;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___modifier_1);
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24+(int32_t)((int32_t)100)));
	}

IL_00a1:
	{
		InvStat_t34 * L_25 = ___b;
		NullCheck(L_25);
		int32_t L_26 = (L_25->___modifier_1);
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)((int32_t)100)));
	}

IL_00b2:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_00bb;
		}
	}
	{
		return (-1);
	}

IL_00bb:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c4;
		}
	}
	{
		return 1;
	}

IL_00c4:
	{
		return 0;
	}
}
// ChatInput
#include "AssemblyU2DCSharp_ChatInput.h"
#ifndef _MSC_VER
#else
#endif
// ChatInput
#include "AssemblyU2DCSharp_ChatInputMethodDeclarations.h"

// UIInput
#include "AssemblyU2DCSharp_UIInput.h"
// UITextList
#include "AssemblyU2DCSharp_UITextList.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UITextList
#include "AssemblyU2DCSharp_UITextListMethodDeclarations.h"
// UIInput
#include "AssemblyU2DCSharp_UIInputMethodDeclarations.h"
struct Component_t107;
struct UIInput_t36;
// Declaration !!0 UnityEngine.Component::GetComponent<UIInput>()
// !!0 UnityEngine.Component::GetComponent<UIInput>()
#define Component_GetComponent_TisUIInput_t36_m1307(__this, method) (( UIInput_t36 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void ChatInput::.ctor()
extern "C" void ChatInput__ctor_m64 (ChatInput_t37 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChatInput::Start()
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t297_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUIInput_t36_m1307_MethodInfo_var;
extern "C" void ChatInput_Start_m65 (ChatInput_t37 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Int32_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Component_GetComponent_TisUIInput_t36_m1307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t300* G_B5_1 = {0};
	ObjectU5BU5D_t300* G_B5_2 = {0};
	UITextList_t35 * G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t300* G_B4_1 = {0};
	ObjectU5BU5D_t300* G_B4_2 = {0};
	UITextList_t35 * G_B4_3 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t300* G_B6_2 = {0};
	ObjectU5BU5D_t300* G_B6_3 = {0};
	UITextList_t35 * G_B6_4 = {0};
	{
		UIInput_t36 * L_0 = Component_GetComponent_TisUIInput_t36_m1307(__this, /*hidden argument*/Component_GetComponent_TisUIInput_t36_m1307_MethodInfo_var);
		__this->___mInput_4 = L_0;
		bool L_1 = (__this->___fillWithDummyData_3);
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		UITextList_t35 * L_2 = (__this->___textList_2);
		bool L_3 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0084;
		}
	}
	{
		V_0 = 0;
		goto IL_007c;
	}

IL_002f:
	{
		UITextList_t35 * L_4 = (__this->___textList_2);
		ObjectU5BU5D_t300* L_5 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 4));
		int32_t L_6 = V_0;
		G_B4_0 = 0;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = L_4;
		if (((int32_t)((int32_t)L_6%(int32_t)2)))
		{
			G_B5_0 = 0;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = L_4;
			goto IL_004f;
		}
	}
	{
		G_B6_0 = (String_t*) &_stringLiteral23;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0054;
	}

IL_004f:
	{
		G_B6_0 = (String_t*) &_stringLiteral24;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0054:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)G_B6_0;
		ObjectU5BU5D_t300* L_7 = G_B6_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 1)) = (Object_t *)(String_t*) &_stringLiteral25;
		ObjectU5BU5D_t300* L_8 = L_7;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t297_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t300* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)(String_t*) &_stringLiteral10;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1267(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck(G_B6_4);
		UITextList_Add_m1112(G_B6_4, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)30))))
		{
			goto IL_002f;
		}
	}

IL_0084:
	{
		return;
	}
}
// System.Void ChatInput::Update()
extern TypeInfo* Input_t298_il2cpp_TypeInfo_var;
extern "C" void ChatInput_Update_m66 (ChatInput_t37 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t298_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyUp_m1308(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		bool L_1 = (__this->___mIgnoreNextEnter_5);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		UIInput_t36 * L_2 = (__this->___mInput_4);
		NullCheck(L_2);
		bool L_3 = UIInput_get_selected_m930(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		UIInput_t36 * L_4 = (__this->___mInput_4);
		NullCheck(L_4);
		UIInput_set_selected_m931(L_4, 1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		__this->___mIgnoreNextEnter_5 = 0;
	}

IL_003a:
	{
		return;
	}
}
// System.Void ChatInput::OnSubmit()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ChatInput_OnSubmit_m67 (ChatInput_t37 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		UITextList_t35 * L_0 = (__this->___textList_2);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0055;
		}
	}
	{
		UIInput_t36 * L_2 = (__this->___mInput_4);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UIInput::get_text() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		String_t* L_4 = NGUITools_StripSymbols_m561(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		UITextList_t35 * L_7 = (__this->___textList_2);
		String_t* L_8 = V_0;
		NullCheck(L_7);
		UITextList_Add_m1112(L_7, L_8, /*hidden argument*/NULL);
		UIInput_t36 * L_9 = (__this->___mInput_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UIInput::set_text(System.String) */, L_9, L_10);
		UIInput_t36 * L_11 = (__this->___mInput_4);
		NullCheck(L_11);
		UIInput_set_selected_m931(L_11, 0, /*hidden argument*/NULL);
	}

IL_0055:
	{
		__this->___mIgnoreNextEnter_5 = 1;
		return;
	}
}
// DownloadTexture/<Start>c__Iterator0
#include "AssemblyU2DCSharp_DownloadTexture_U3CStartU3Ec__Iterator0.h"
#ifndef _MSC_VER
#else
#endif
// DownloadTexture/<Start>c__Iterator0
#include "AssemblyU2DCSharp_DownloadTexture_U3CStartU3Ec__Iterator0MethodDeclarations.h"

// DownloadTexture
#include "AssemblyU2DCSharp_DownloadTexture.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UITexture
#include "AssemblyU2DCSharp_UITexture.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
// UITexture
#include "AssemblyU2DCSharp_UITextureMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
struct Component_t107;
struct UITexture_t39;
// Declaration !!0 UnityEngine.Component::GetComponent<UITexture>()
// !!0 UnityEngine.Component::GetComponent<UITexture>()
#define Component_GetComponent_TisUITexture_t39_m1309(__this, method) (( UITexture_t39 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void DownloadTexture/<Start>c__Iterator0::.ctor()
extern "C" void U3CStartU3Ec__Iterator0__ctor_m68 (U3CStartU3Ec__Iterator0_t41 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object DownloadTexture/<Start>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m69 (U3CStartU3Ec__Iterator0_t41 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object DownloadTexture/<Start>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m70 (U3CStartU3Ec__Iterator0_t41 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean DownloadTexture/<Start>c__Iterator0::MoveNext()
extern TypeInfo* WWW_t38_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUITexture_t39_m1309_MethodInfo_var;
extern "C" bool U3CStartU3Ec__Iterator0_MoveNext_m71 (U3CStartU3Ec__Iterator0_t41 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Component_GetComponent_TisUITexture_t39_m1309_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483663);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_00bf;
	}

IL_0021:
	{
		DownloadTexture_t40 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		String_t* L_3 = (L_2->___url_2);
		WWW_t38 * L_4 = (WWW_t38 *)il2cpp_codegen_object_new (WWW_t38_il2cpp_TypeInfo_var);
		WWW__ctor_m1310(L_4, L_3, /*hidden argument*/NULL);
		__this->___U3CwwwU3E__0_0 = L_4;
		WWW_t38 * L_5 = (__this->___U3CwwwU3E__0_0);
		__this->___U24current_3 = L_5;
		__this->___U24PC_2 = 1;
		goto IL_00c1;
	}

IL_004f:
	{
		DownloadTexture_t40 * L_6 = (__this->___U3CU3Ef__this_4);
		WWW_t38 * L_7 = (__this->___U3CwwwU3E__0_0);
		NullCheck(L_7);
		Texture2D_t42 * L_8 = WWW_get_texture_m1311(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->___mTex_3 = L_8;
		DownloadTexture_t40 * L_9 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_9);
		Texture2D_t42 * L_10 = (L_9->___mTex_3);
		bool L_11 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_10, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00ad;
		}
	}
	{
		DownloadTexture_t40 * L_12 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_12);
		UITexture_t39 * L_13 = Component_GetComponent_TisUITexture_t39_m1309(L_12, /*hidden argument*/Component_GetComponent_TisUITexture_t39_m1309_MethodInfo_var);
		__this->___U3CutU3E__1_1 = L_13;
		UITexture_t39 * L_14 = (__this->___U3CutU3E__1_1);
		DownloadTexture_t40 * L_15 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_15);
		Texture2D_t42 * L_16 = (L_15->___mTex_3);
		NullCheck(L_14);
		VirtActionInvoker1< Texture_t263 * >::Invoke(7 /* System.Void UITexture::set_mainTexture(UnityEngine.Texture) */, L_14, L_16);
		UITexture_t39 * L_17 = (__this->___U3CutU3E__1_1);
		NullCheck(L_17);
		VirtActionInvoker0::Invoke(13 /* System.Void UITexture::MakePixelPerfect() */, L_17);
	}

IL_00ad:
	{
		WWW_t38 * L_18 = (__this->___U3CwwwU3E__0_0);
		NullCheck(L_18);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.WWW::Dispose() */, L_18);
		__this->___U24PC_2 = (-1);
	}

IL_00bf:
	{
		return 0;
	}

IL_00c1:
	{
		return 1;
	}
	// Dead block : IL_00c3: ldloc.1
}
// System.Void DownloadTexture/<Start>c__Iterator0::Dispose()
extern "C" void U3CStartU3Ec__Iterator0_Dispose_m72 (U3CStartU3Ec__Iterator0_t41 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_2 = (-1);
		return;
	}
}
// System.Void DownloadTexture/<Start>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__Iterator0_Reset_m73 (U3CStartU3Ec__Iterator0_t41 * __this, const MethodInfo* method)
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
#ifndef _MSC_VER
#else
#endif
// DownloadTexture
#include "AssemblyU2DCSharp_DownloadTextureMethodDeclarations.h"



// System.Void DownloadTexture::.ctor()
extern "C" void DownloadTexture__ctor_m74 (DownloadTexture_t40 * __this, const MethodInfo* method)
{
	{
		__this->___url_2 = (String_t*) &_stringLiteral26;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator DownloadTexture::Start()
extern TypeInfo* U3CStartU3Ec__Iterator0_t41_il2cpp_TypeInfo_var;
extern "C" Object_t * DownloadTexture_Start_m75 (DownloadTexture_t40 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartU3Ec__Iterator0_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(34);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartU3Ec__Iterator0_t41 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator0_t41 * L_0 = (U3CStartU3Ec__Iterator0_t41 *)il2cpp_codegen_object_new (U3CStartU3Ec__Iterator0_t41_il2cpp_TypeInfo_var);
		U3CStartU3Ec__Iterator0__ctor_m68(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator0_t41 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CStartU3Ec__Iterator0_t41 * L_2 = V_0;
		return L_2;
	}
}
// System.Void DownloadTexture::OnDestroy()
extern "C" void DownloadTexture_OnDestroy_m76 (DownloadTexture_t40 * __this, const MethodInfo* method)
{
	{
		Texture2D_t42 * L_0 = (__this->___mTex_3);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Texture2D_t42 * L_2 = (__this->___mTex_3);
		Object_Destroy_m1250(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// DragDropContainer
#include "AssemblyU2DCSharp_DragDropContainer.h"
#ifndef _MSC_VER
#else
#endif
// DragDropContainer
#include "AssemblyU2DCSharp_DragDropContainerMethodDeclarations.h"



// System.Void DragDropContainer::.ctor()
extern "C" void DragDropContainer__ctor_m77 (DragDropContainer_t43 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// DragDropItem
#include "AssemblyU2DCSharp_DragDropItem.h"
#ifndef _MSC_VER
#else
#endif
// DragDropItem
#include "AssemblyU2DCSharp_DragDropItemMethodDeclarations.h"

// UITable
#include "AssemblyU2DCSharp_UITable.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// DragDropRoot
#include "AssemblyU2DCSharp_DragDropRoot.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// DragDropRoot
#include "AssemblyU2DCSharp_DragDropRootMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
struct NGUITools_t167;
struct UITable_t145;
struct GameObject_t17;
struct NGUITools_t167;
struct Object_t;
struct GameObject_t17;
// Declaration !!0 NGUITools::FindInParents<System.Object>(UnityEngine.GameObject)
// !!0 NGUITools::FindInParents<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * NGUITools_FindInParents_TisObject_t_m1314_gshared (Object_t * __this /* static, unused */, GameObject_t17 * p0, const MethodInfo* method);
#define NGUITools_FindInParents_TisObject_t_m1314(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t17 *, const MethodInfo*))NGUITools_FindInParents_TisObject_t_m1314_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 NGUITools::FindInParents<UITable>(UnityEngine.GameObject)
// !!0 NGUITools::FindInParents<UITable>(UnityEngine.GameObject)
#define NGUITools_FindInParents_TisUITable_t145_m1313(__this /* static, unused */, p0, method) (( UITable_t145 * (*) (Object_t * /* static, unused */, GameObject_t17 *, const MethodInfo*))NGUITools_FindInParents_TisObject_t_m1314_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t17;
struct DragDropContainer_t43;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DragDropContainer>()
// !!0 UnityEngine.GameObject::GetComponent<DragDropContainer>()
#define GameObject_GetComponent_TisDragDropContainer_t43_m1315(__this, method) (( DragDropContainer_t43 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m1275_gshared)(__this, method)
struct Component_t107;
struct Collider_t304;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
#define Component_GetComponent_TisCollider_t304_m1316(__this, method) (( Collider_t304 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void DragDropItem::.ctor()
extern "C" void DragDropItem__ctor_m78 (DragDropItem_t44 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragDropItem::UpdateTable()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* NGUITools_FindInParents_TisUITable_t145_m1313_MethodInfo_var;
extern "C" void DragDropItem_UpdateTable_m79 (DragDropItem_t44 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		NGUITools_FindInParents_TisUITable_t145_m1313_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483664);
		s_Il2CppMethodIntialized = true;
	}
	UITable_t145 * V_0 = {0};
	{
		GameObject_t17 * L_0 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		UITable_t145 * L_1 = NGUITools_FindInParents_TisUITable_t145_m1313(NULL /*static, unused*/, L_0, /*hidden argument*/NGUITools_FindInParents_TisUITable_t145_m1313_MethodInfo_var);
		V_0 = L_1;
		UITable_t145 * L_2 = V_0;
		bool L_3 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		UITable_t145 * L_4 = V_0;
		NullCheck(L_4);
		L_4->___repositionNow_7 = 1;
	}

IL_001f:
	{
		return;
	}
}
// System.Void DragDropItem::Drop()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDragDropContainer_t43_m1315_MethodInfo_var;
extern "C" void DragDropItem_Drop_m80 (DragDropItem_t44 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		GameObject_GetComponent_TisDragDropContainer_t43_m1315_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483665);
		s_Il2CppMethodIntialized = true;
	}
	Collider_t304 * V_0 = {0};
	DragDropContainer_t43 * V_1 = {0};
	Vector3_t48  V_2 = {0};
	DragDropContainer_t43 * G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Collider_t304 * L_0 = RaycastHit_get_collider_m1317((&((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___lastHit_28), /*hidden argument*/NULL);
		V_0 = L_0;
		Collider_t304 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Collider_t304 * L_3 = V_0;
		NullCheck(L_3);
		GameObject_t17 * L_4 = Component_get_gameObject_m1246(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		DragDropContainer_t43 * L_5 = GameObject_GetComponent_TisDragDropContainer_t43_m1315(L_4, /*hidden argument*/GameObject_GetComponent_TisDragDropContainer_t43_m1315_MethodInfo_var);
		G_B3_0 = L_5;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = ((DragDropContainer_t43 *)(NULL));
	}

IL_0028:
	{
		V_1 = G_B3_0;
		DragDropContainer_t43 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_6, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006f;
		}
	}
	{
		Transform_t8 * L_8 = (__this->___mTrans_3);
		DragDropContainer_t43 * L_9 = V_1;
		NullCheck(L_9);
		Transform_t8 * L_10 = Component_get_transform_m1253(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_parent_m1285(L_8, L_10, /*hidden argument*/NULL);
		Transform_t8 * L_11 = (__this->___mTrans_3);
		NullCheck(L_11);
		Vector3_t48  L_12 = Transform_get_localPosition_m1263(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		(&V_2)->___z_3 = (0.0f);
		Transform_t8 * L_13 = (__this->___mTrans_3);
		Vector3_t48  L_14 = V_2;
		NullCheck(L_13);
		Transform_set_localPosition_m1265(L_13, L_14, /*hidden argument*/NULL);
		goto IL_0080;
	}

IL_006f:
	{
		Transform_t8 * L_15 = (__this->___mTrans_3);
		Transform_t8 * L_16 = (__this->___mParent_6);
		NullCheck(L_15);
		Transform_set_parent_m1285(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0080:
	{
		DragDropItem_UpdateTable_m79(__this, /*hidden argument*/NULL);
		GameObject_t17 * L_17 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_MarkParentAsChanged_m586(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragDropItem::Awake()
extern "C" void DragDropItem_Awake_m81 (DragDropItem_t44 * __this, const MethodInfo* method)
{
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_3 = L_0;
		return;
	}
}
// System.Void DragDropItem::OnDrag(UnityEngine.Vector2)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern TypeInfo* DragDropRoot_t45_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void DragDropItem_OnDrag_m82 (DragDropItem_t44 * __this, Vector2_t55  ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		DragDropRoot_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t48  V_0 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		int32_t L_1 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouchID_31;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)-2))))
		{
			goto IL_009a;
		}
	}
	{
		bool L_2 = (__this->___mIsDragging_4);
		if (L_2)
		{
			goto IL_007e;
		}
	}
	{
		__this->___mIsDragging_4 = 1;
		Transform_t8 * L_3 = (__this->___mTrans_3);
		NullCheck(L_3);
		Transform_t8 * L_4 = Transform_get_parent_m1319(L_3, /*hidden argument*/NULL);
		__this->___mParent_6 = L_4;
		Transform_t8 * L_5 = (__this->___mTrans_3);
		Transform_t8 * L_6 = ((DragDropRoot_t45_StaticFields*)DragDropRoot_t45_il2cpp_TypeInfo_var->static_fields)->___root_2;
		NullCheck(L_5);
		Transform_set_parent_m1285(L_5, L_6, /*hidden argument*/NULL);
		Transform_t8 * L_7 = (__this->___mTrans_3);
		NullCheck(L_7);
		Vector3_t48  L_8 = Transform_get_localPosition_m1263(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		(&V_0)->___z_3 = (0.0f);
		Transform_t8 * L_9 = (__this->___mTrans_3);
		Vector3_t48  L_10 = V_0;
		NullCheck(L_9);
		Transform_set_localPosition_m1265(L_9, L_10, /*hidden argument*/NULL);
		GameObject_t17 * L_11 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_MarkParentAsChanged_m586(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_007e:
	{
		Transform_t8 * L_12 = (__this->___mTrans_3);
		Transform_t8 * L_13 = L_12;
		NullCheck(L_13);
		Vector3_t48  L_14 = Transform_get_localPosition_m1263(L_13, /*hidden argument*/NULL);
		Vector2_t55  L_15 = ___delta;
		Vector3_t48  L_16 = Vector2_op_Implicit_m1320(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		Vector3_t48  L_17 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localPosition_m1265(L_13, L_17, /*hidden argument*/NULL);
	}

IL_009a:
	{
		return;
	}
}
// System.Void DragDropItem::OnPress(System.Boolean)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var;
extern "C" void DragDropItem_OnPress_m83 (DragDropItem_t44 * __this, bool ___isPressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		s_Il2CppMethodIntialized = true;
	}
	Collider_t304 * V_0 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0084;
		}
	}
	{
		bool L_1 = ___isPressed;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_t219 * L_2 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___current_29;
		NullCheck(L_2);
		bool L_3 = (L_2->___stickyPress_8);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		__this->___mSticky_5 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_t219 * L_4 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___current_29;
		NullCheck(L_4);
		L_4->___stickyPress_8 = 1;
	}

IL_0032:
	{
		goto IL_0054;
	}

IL_0037:
	{
		bool L_5 = (__this->___mSticky_5);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		__this->___mSticky_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_t219 * L_6 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___current_29;
		NullCheck(L_6);
		L_6->___stickyPress_8 = 0;
	}

IL_0054:
	{
		__this->___mIsDragging_4 = 0;
		Collider_t304 * L_7 = Component_GetComponent_TisCollider_t304_m1316(__this, /*hidden argument*/Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var);
		V_0 = L_7;
		Collider_t304 * L_8 = V_0;
		bool L_9 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_8, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		Collider_t304 * L_10 = V_0;
		bool L_11 = ___isPressed;
		NullCheck(L_10);
		Collider_set_enabled_m1322(L_10, ((((int32_t)L_11) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0078:
	{
		bool L_12 = ___isPressed;
		if (L_12)
		{
			goto IL_0084;
		}
	}
	{
		DragDropItem_Drop_m80(__this, /*hidden argument*/NULL);
	}

IL_0084:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void DragDropRoot::.ctor()
extern "C" void DragDropRoot__ctor_m84 (DragDropRoot_t45 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragDropRoot::Awake()
extern TypeInfo* DragDropRoot_t45_il2cpp_TypeInfo_var;
extern "C" void DragDropRoot_Awake_m85 (DragDropRoot_t45 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DragDropRoot_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		((DragDropRoot_t45_StaticFields*)DragDropRoot_t45_il2cpp_TypeInfo_var->static_fields)->___root_2 = L_0;
		return;
	}
}
// DragDropSurface
#include "AssemblyU2DCSharp_DragDropSurface.h"
#ifndef _MSC_VER
#else
#endif
// DragDropSurface
#include "AssemblyU2DCSharp_DragDropSurfaceMethodDeclarations.h"

struct GameObject_t17;
struct DragDropItem_t44;
// Declaration !!0 UnityEngine.GameObject::GetComponent<DragDropItem>()
// !!0 UnityEngine.GameObject::GetComponent<DragDropItem>()
#define GameObject_GetComponent_TisDragDropItem_t44_m1323(__this, method) (( DragDropItem_t44 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m1275_gshared)(__this, method)


// System.Void DragDropSurface::.ctor()
extern "C" void DragDropSurface__ctor_m86 (DragDropSurface_t46 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DragDropSurface::OnDrop(UnityEngine.GameObject)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisDragDropItem_t44_m1323_MethodInfo_var;
extern "C" void DragDropSurface_OnDrop_m87 (DragDropSurface_t46 * __this, GameObject_t17 * ___go, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		GameObject_GetComponent_TisDragDropItem_t44_m1323_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483667);
		s_Il2CppMethodIntialized = true;
	}
	DragDropItem_t44 * V_0 = {0};
	GameObject_t17 * V_1 = {0};
	Transform_t8 * V_2 = {0};
	{
		GameObject_t17 * L_0 = ___go;
		NullCheck(L_0);
		DragDropItem_t44 * L_1 = GameObject_GetComponent_TisDragDropItem_t44_m1323(L_0, /*hidden argument*/GameObject_GetComponent_TisDragDropItem_t44_m1323_MethodInfo_var);
		V_0 = L_1;
		DragDropItem_t44 * L_2 = V_0;
		bool L_3 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007b;
		}
	}
	{
		GameObject_t17 * L_4 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		DragDropItem_t44 * L_5 = V_0;
		NullCheck(L_5);
		GameObject_t17 * L_6 = (L_5->___prefab_2);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		GameObject_t17 * L_7 = NGUITools_AddChild_m565(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		GameObject_t17 * L_8 = V_1;
		NullCheck(L_8);
		Transform_t8 * L_9 = GameObject_get_transform_m1277(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Transform_t8 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Vector3_t48  L_11 = RaycastHit_get_point_m1324((&((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___lastHit_28), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m1261(L_10, L_11, /*hidden argument*/NULL);
		bool L_12 = (__this->___rotatePlacedObject_2);
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		Transform_t8 * L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Vector3_t48  L_14 = RaycastHit_get_normal_m1325((&((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___lastHit_28), /*hidden argument*/NULL);
		Quaternion_t50  L_15 = Quaternion_LookRotation_m1326(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Quaternion_t50  L_16 = Quaternion_Euler_m1327(NULL /*static, unused*/, (90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t50  L_17 = Quaternion_op_Multiply_m1328(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_rotation_m1329(L_13, L_17, /*hidden argument*/NULL);
	}

IL_0075:
	{
		GameObject_t17 * L_18 = ___go;
		Object_Destroy_m1250(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// LagPosition
#include "AssemblyU2DCSharp_LagPosition.h"
#ifndef _MSC_VER
#else
#endif
// LagPosition
#include "AssemblyU2DCSharp_LagPositionMethodDeclarations.h"

// UpdateManager/OnUpdate
#include "AssemblyU2DCSharp_UpdateManager_OnUpdate.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UpdateManager/OnUpdate
#include "AssemblyU2DCSharp_UpdateManager_OnUpdateMethodDeclarations.h"
// UpdateManager
#include "AssemblyU2DCSharp_UpdateManagerMethodDeclarations.h"


// System.Void LagPosition::.ctor()
extern "C" void LagPosition__ctor_m88 (LagPosition_t47 * __this, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = {0};
		Vector3__ctor_m1278(&L_0, (10.0f), (10.0f), (10.0f), /*hidden argument*/NULL);
		__this->___speed_3 = L_0;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LagPosition::Start()
extern TypeInfo* OnUpdate_t67_il2cpp_TypeInfo_var;
extern const MethodInfo* LagPosition_CoroutineUpdate_m91_MethodInfo_var;
extern "C" void LagPosition_Start_m89 (LagPosition_t47 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnUpdate_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		LagPosition_CoroutineUpdate_m91_MethodInfo_var = il2cpp_codegen_method_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_5 = L_0;
		Transform_t8 * L_1 = (__this->___mTrans_5);
		NullCheck(L_1);
		Vector3_t48  L_2 = Transform_get_localPosition_m1263(L_1, /*hidden argument*/NULL);
		__this->___mRelative_6 = L_2;
		bool L_3 = (__this->___ignoreTimeScale_4);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_4 = (__this->___updateOrder_2);
		IntPtr_t L_5 = { (void*)LagPosition_CoroutineUpdate_m91_MethodInfo_var };
		OnUpdate_t67 * L_6 = (OnUpdate_t67 *)il2cpp_codegen_object_new (OnUpdate_t67_il2cpp_TypeInfo_var);
		OnUpdate__ctor_m122(L_6, __this, L_5, /*hidden argument*/NULL);
		UpdateManager_AddCoroutine_m145(NULL /*static, unused*/, __this, L_4, L_6, /*hidden argument*/NULL);
		goto IL_005d;
	}

IL_0045:
	{
		int32_t L_7 = (__this->___updateOrder_2);
		IntPtr_t L_8 = { (void*)LagPosition_CoroutineUpdate_m91_MethodInfo_var };
		OnUpdate_t67 * L_9 = (OnUpdate_t67 *)il2cpp_codegen_object_new (OnUpdate_t67_il2cpp_TypeInfo_var);
		OnUpdate__ctor_m122(L_9, __this, L_8, /*hidden argument*/NULL);
		UpdateManager_AddLateUpdate_m144(NULL /*static, unused*/, __this, L_7, L_9, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void LagPosition::OnEnable()
extern "C" void LagPosition_OnEnable_m90 (LagPosition_t47 * __this, const MethodInfo* method)
{
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_5 = L_0;
		Transform_t8 * L_1 = (__this->___mTrans_5);
		NullCheck(L_1);
		Vector3_t48  L_2 = Transform_get_position_m1282(L_1, /*hidden argument*/NULL);
		__this->___mAbsolute_7 = L_2;
		return;
	}
}
// System.Void LagPosition::CoroutineUpdate(System.Single)
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void LagPosition_CoroutineUpdate_m91 (LagPosition_t47 * __this, float ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t8 * V_0 = {0};
	Vector3_t48  V_1 = {0};
	{
		Transform_t8 * L_0 = (__this->___mTrans_5);
		NullCheck(L_0);
		Transform_t8 * L_1 = Transform_get_parent_m1319(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_t8 * L_2 = V_0;
		bool L_3 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00e2;
		}
	}
	{
		Transform_t8 * L_4 = V_0;
		NullCheck(L_4);
		Vector3_t48  L_5 = Transform_get_position_m1282(L_4, /*hidden argument*/NULL);
		Transform_t8 * L_6 = V_0;
		NullCheck(L_6);
		Quaternion_t50  L_7 = Transform_get_rotation_m1283(L_6, /*hidden argument*/NULL);
		Vector3_t48  L_8 = (__this->___mRelative_6);
		Vector3_t48  L_9 = Quaternion_op_Multiply_m1330(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Vector3_t48  L_10 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_5, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector3_t48 * L_11 = &(__this->___mAbsolute_7);
		Vector3_t48 * L_12 = &(__this->___mAbsolute_7);
		float L_13 = (L_12->___x_1);
		float L_14 = ((&V_1)->___x_1);
		float L_15 = ___delta;
		Vector3_t48 * L_16 = &(__this->___speed_3);
		float L_17 = (L_16->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_18 = Mathf_Clamp01_m1258(NULL /*static, unused*/, ((float)((float)L_15*(float)L_17)), /*hidden argument*/NULL);
		float L_19 = Mathf_Lerp_m1301(NULL /*static, unused*/, L_13, L_14, L_18, /*hidden argument*/NULL);
		L_11->___x_1 = L_19;
		Vector3_t48 * L_20 = &(__this->___mAbsolute_7);
		Vector3_t48 * L_21 = &(__this->___mAbsolute_7);
		float L_22 = (L_21->___y_2);
		float L_23 = ((&V_1)->___y_2);
		float L_24 = ___delta;
		Vector3_t48 * L_25 = &(__this->___speed_3);
		float L_26 = (L_25->___y_2);
		float L_27 = Mathf_Clamp01_m1258(NULL /*static, unused*/, ((float)((float)L_24*(float)L_26)), /*hidden argument*/NULL);
		float L_28 = Mathf_Lerp_m1301(NULL /*static, unused*/, L_22, L_23, L_27, /*hidden argument*/NULL);
		L_20->___y_2 = L_28;
		Vector3_t48 * L_29 = &(__this->___mAbsolute_7);
		Vector3_t48 * L_30 = &(__this->___mAbsolute_7);
		float L_31 = (L_30->___z_3);
		float L_32 = ((&V_1)->___z_3);
		float L_33 = ___delta;
		Vector3_t48 * L_34 = &(__this->___speed_3);
		float L_35 = (L_34->___z_3);
		float L_36 = Mathf_Clamp01_m1258(NULL /*static, unused*/, ((float)((float)L_33*(float)L_35)), /*hidden argument*/NULL);
		float L_37 = Mathf_Lerp_m1301(NULL /*static, unused*/, L_31, L_32, L_36, /*hidden argument*/NULL);
		L_29->___z_3 = L_37;
		Transform_t8 * L_38 = (__this->___mTrans_5);
		Vector3_t48  L_39 = (__this->___mAbsolute_7);
		NullCheck(L_38);
		Transform_set_position_m1261(L_38, L_39, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		return;
	}
}
// LagRotation
#include "AssemblyU2DCSharp_LagRotation.h"
#ifndef _MSC_VER
#else
#endif
// LagRotation
#include "AssemblyU2DCSharp_LagRotationMethodDeclarations.h"



// System.Void LagRotation::.ctor()
extern "C" void LagRotation__ctor_m92 (LagRotation_t49 * __this, const MethodInfo* method)
{
	{
		__this->___speed_3 = (10.0f);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LagRotation::Start()
extern TypeInfo* OnUpdate_t67_il2cpp_TypeInfo_var;
extern const MethodInfo* LagRotation_CoroutineUpdate_m94_MethodInfo_var;
extern "C" void LagRotation_Start_m93 (LagRotation_t49 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnUpdate_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		LagRotation_CoroutineUpdate_m94_MethodInfo_var = il2cpp_codegen_method_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_5 = L_0;
		Transform_t8 * L_1 = (__this->___mTrans_5);
		NullCheck(L_1);
		Quaternion_t50  L_2 = Transform_get_localRotation_m1331(L_1, /*hidden argument*/NULL);
		__this->___mRelative_6 = L_2;
		Transform_t8 * L_3 = (__this->___mTrans_5);
		NullCheck(L_3);
		Quaternion_t50  L_4 = Transform_get_rotation_m1283(L_3, /*hidden argument*/NULL);
		__this->___mAbsolute_7 = L_4;
		bool L_5 = (__this->___ignoreTimeScale_4);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_6 = (__this->___updateOrder_2);
		IntPtr_t L_7 = { (void*)LagRotation_CoroutineUpdate_m94_MethodInfo_var };
		OnUpdate_t67 * L_8 = (OnUpdate_t67 *)il2cpp_codegen_object_new (OnUpdate_t67_il2cpp_TypeInfo_var);
		OnUpdate__ctor_m122(L_8, __this, L_7, /*hidden argument*/NULL);
		UpdateManager_AddCoroutine_m145(NULL /*static, unused*/, __this, L_6, L_8, /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_0056:
	{
		int32_t L_9 = (__this->___updateOrder_2);
		IntPtr_t L_10 = { (void*)LagRotation_CoroutineUpdate_m94_MethodInfo_var };
		OnUpdate_t67 * L_11 = (OnUpdate_t67 *)il2cpp_codegen_object_new (OnUpdate_t67_il2cpp_TypeInfo_var);
		OnUpdate__ctor_m122(L_11, __this, L_10, /*hidden argument*/NULL);
		UpdateManager_AddLateUpdate_m144(NULL /*static, unused*/, __this, L_9, L_11, /*hidden argument*/NULL);
	}

IL_006e:
	{
		return;
	}
}
// System.Void LagRotation::CoroutineUpdate(System.Single)
extern "C" void LagRotation_CoroutineUpdate_m94 (LagRotation_t49 * __this, float ___delta, const MethodInfo* method)
{
	Transform_t8 * V_0 = {0};
	{
		Transform_t8 * L_0 = (__this->___mTrans_5);
		NullCheck(L_0);
		Transform_t8 * L_1 = Transform_get_parent_m1319(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_t8 * L_2 = V_0;
		bool L_3 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		Quaternion_t50  L_4 = (__this->___mAbsolute_7);
		Transform_t8 * L_5 = V_0;
		NullCheck(L_5);
		Quaternion_t50  L_6 = Transform_get_rotation_m1283(L_5, /*hidden argument*/NULL);
		Quaternion_t50  L_7 = (__this->___mRelative_6);
		Quaternion_t50  L_8 = Quaternion_op_Multiply_m1328(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		float L_9 = ___delta;
		float L_10 = (__this->___speed_3);
		Quaternion_t50  L_11 = Quaternion_Slerp_m1332(NULL /*static, unused*/, L_4, L_8, ((float)((float)L_9*(float)L_10)), /*hidden argument*/NULL);
		__this->___mAbsolute_7 = L_11;
		Transform_t8 * L_12 = (__this->___mTrans_5);
		Quaternion_t50  L_13 = (__this->___mAbsolute_7);
		NullCheck(L_12);
		Transform_set_rotation_m1329(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// LoadLevelOnClick
#include "AssemblyU2DCSharp_LoadLevelOnClick.h"
#ifndef _MSC_VER
#else
#endif
// LoadLevelOnClick
#include "AssemblyU2DCSharp_LoadLevelOnClickMethodDeclarations.h"

// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"


// System.Void LoadLevelOnClick::.ctor()
extern "C" void LoadLevelOnClick__ctor_m95 (LoadLevelOnClick_t51 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoadLevelOnClick::OnClick()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void LoadLevelOnClick_OnClick_m96 (LoadLevelOnClick_t51 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___levelName_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = (__this->___levelName_2);
		Application_LoadLevel_m1333(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// LookAtTarget
#include "AssemblyU2DCSharp_LookAtTarget.h"
#ifndef _MSC_VER
#else
#endif
// LookAtTarget
#include "AssemblyU2DCSharp_LookAtTargetMethodDeclarations.h"

// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"


// System.Void LookAtTarget::.ctor()
extern "C" void LookAtTarget__ctor_m97 (LookAtTarget_t52 * __this, const MethodInfo* method)
{
	{
		__this->___speed_4 = (8.0f);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LookAtTarget::Start()
extern "C" void LookAtTarget_Start_m98 (LookAtTarget_t52 * __this, const MethodInfo* method)
{
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_5 = L_0;
		return;
	}
}
// System.Void LookAtTarget::LateUpdate()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void LookAtTarget_LateUpdate_m99 (LookAtTarget_t52 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t48  V_0 = {0};
	float V_1 = 0.0f;
	Quaternion_t50  V_2 = {0};
	{
		Transform_t8 * L_0 = (__this->___target_3);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		Transform_t8 * L_2 = (__this->___target_3);
		NullCheck(L_2);
		Vector3_t48  L_3 = Transform_get_position_m1282(L_2, /*hidden argument*/NULL);
		Transform_t8 * L_4 = (__this->___mTrans_5);
		NullCheck(L_4);
		Vector3_t48  L_5 = Transform_get_position_m1282(L_4, /*hidden argument*/NULL);
		Vector3_t48  L_6 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = Vector3_get_magnitude_m1335((&V_0), /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = V_1;
		if ((!(((float)L_8) > ((float)(0.001f)))))
		{
			goto IL_0074;
		}
	}
	{
		Vector3_t48  L_9 = V_0;
		Quaternion_t50  L_10 = Quaternion_LookRotation_m1326(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		Transform_t8 * L_11 = (__this->___mTrans_5);
		Transform_t8 * L_12 = (__this->___mTrans_5);
		NullCheck(L_12);
		Quaternion_t50  L_13 = Transform_get_rotation_m1283(L_12, /*hidden argument*/NULL);
		Quaternion_t50  L_14 = V_2;
		float L_15 = (__this->___speed_4);
		float L_16 = Time_get_deltaTime_m1336(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_17 = Mathf_Clamp01_m1258(NULL /*static, unused*/, ((float)((float)L_15*(float)L_16)), /*hidden argument*/NULL);
		Quaternion_t50  L_18 = Quaternion_Slerp_m1332(NULL /*static, unused*/, L_13, L_14, L_17, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_rotation_m1329(L_11, L_18, /*hidden argument*/NULL);
	}

IL_0074:
	{
		return;
	}
}
// PanWithMouse
#include "AssemblyU2DCSharp_PanWithMouse.h"
#ifndef _MSC_VER
#else
#endif
// PanWithMouse
#include "AssemblyU2DCSharp_PanWithMouseMethodDeclarations.h"

// IgnoreTimeScale
#include "AssemblyU2DCSharp_IgnoreTimeScaleMethodDeclarations.h"


// System.Void PanWithMouse::.ctor()
extern "C" void PanWithMouse__ctor_m100 (PanWithMouse_t53 * __this, const MethodInfo* method)
{
	{
		Vector2_t55  L_0 = {0};
		Vector2__ctor_m1337(&L_0, (5.0f), (3.0f), /*hidden argument*/NULL);
		__this->___degrees_7 = L_0;
		__this->___range_8 = (1.0f);
		Vector2_t55  L_1 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mRot_11 = L_1;
		IgnoreTimeScale__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PanWithMouse::Start()
extern "C" void PanWithMouse_Start_m101 (PanWithMouse_t53 * __this, const MethodInfo* method)
{
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_9 = L_0;
		Transform_t8 * L_1 = (__this->___mTrans_9);
		NullCheck(L_1);
		Quaternion_t50  L_2 = Transform_get_localRotation_m1331(L_1, /*hidden argument*/NULL);
		__this->___mStart_10 = L_2;
		return;
	}
}
// System.Void PanWithMouse::Update()
extern TypeInfo* Input_t298_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void PanWithMouse_Update_m102 (PanWithMouse_t53 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t48  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		float L_0 = IgnoreTimeScale_UpdateRealTimeDelta_m495(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t298_il2cpp_TypeInfo_var);
		Vector3_t48  L_1 = Input_get_mousePosition_m1256(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = Screen_get_width_m1257(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = ((float)((float)(((float)L_2))*(float)(0.5f)));
		int32_t L_3 = Screen_get_height_m1259(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = ((float)((float)(((float)L_3))*(float)(0.5f)));
		float L_4 = (__this->___range_8);
		if ((!(((float)L_4) < ((float)(0.1f)))))
		{
			goto IL_0042;
		}
	}
	{
		__this->___range_8 = (0.1f);
	}

IL_0042:
	{
		float L_5 = ((&V_1)->___x_1);
		float L_6 = V_2;
		float L_7 = V_2;
		float L_8 = (__this->___range_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Clamp_m1339(NULL /*static, unused*/, ((float)((float)((float)((float)((float)((float)L_5-(float)L_6))/(float)L_7))/(float)L_8)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_4 = L_9;
		float L_10 = ((&V_1)->___y_2);
		float L_11 = V_3;
		float L_12 = V_3;
		float L_13 = (__this->___range_8);
		float L_14 = Mathf_Clamp_m1339(NULL /*static, unused*/, ((float)((float)((float)((float)((float)((float)L_10-(float)L_11))/(float)L_12))/(float)L_13)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_5 = L_14;
		Vector2_t55  L_15 = (__this->___mRot_11);
		float L_16 = V_4;
		float L_17 = V_5;
		Vector2_t55  L_18 = {0};
		Vector2__ctor_m1337(&L_18, L_16, L_17, /*hidden argument*/NULL);
		float L_19 = V_0;
		Vector2_t55  L_20 = Vector2_Lerp_m1340(NULL /*static, unused*/, L_15, L_18, ((float)((float)L_19*(float)(5.0f))), /*hidden argument*/NULL);
		__this->___mRot_11 = L_20;
		Transform_t8 * L_21 = (__this->___mTrans_9);
		Quaternion_t50  L_22 = (__this->___mStart_10);
		Vector2_t55 * L_23 = &(__this->___mRot_11);
		float L_24 = (L_23->___y_2);
		Vector2_t55 * L_25 = &(__this->___degrees_7);
		float L_26 = (L_25->___y_2);
		Vector2_t55 * L_27 = &(__this->___mRot_11);
		float L_28 = (L_27->___x_1);
		Vector2_t55 * L_29 = &(__this->___degrees_7);
		float L_30 = (L_29->___x_1);
		Quaternion_t50  L_31 = Quaternion_Euler_m1327(NULL /*static, unused*/, ((float)((float)((-L_24))*(float)L_26)), ((float)((float)L_28*(float)L_30)), (0.0f), /*hidden argument*/NULL);
		Quaternion_t50  L_32 = Quaternion_op_Multiply_m1328(NULL /*static, unused*/, L_22, L_31, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localRotation_m1288(L_21, L_32, /*hidden argument*/NULL);
		return;
	}
}
// PlayIdleAnimations
#include "AssemblyU2DCSharp_PlayIdleAnimations.h"
#ifndef _MSC_VER
#else
#endif
// PlayIdleAnimations
#include "AssemblyU2DCSharp_PlayIdleAnimationsMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.AnimationClip>
#include "mscorlib_System_Collections_Generic_List_1_gen_2.h"
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_Animation.h"
// UnityEngine.AnimationClip
#include "UnityEngine_UnityEngine_AnimationClip.h"
// System.Collections.Generic.List`1<UnityEngine.AnimationClip>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"
// UnityEngine.AnimationClip
#include "UnityEngine_UnityEngine_AnimationClipMethodDeclarations.h"
struct Component_t107;
struct Animation_t56;
// Declaration !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Animation>()
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Animation>()
#define Component_GetComponentInChildren_TisAnimation_t56_m1341(__this, method) (( Animation_t56 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m1252_gshared)(__this, method)


// System.Void PlayIdleAnimations::.ctor()
extern TypeInfo* List_1_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1342_MethodInfo_var;
extern "C" void PlayIdleAnimations__ctor_m103 (PlayIdleAnimations_t59 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		List_1__ctor_m1342_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483670);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t58 * L_0 = (List_1_t58 *)il2cpp_codegen_object_new (List_1_t58_il2cpp_TypeInfo_var);
		List_1__ctor_m1342(L_0, /*hidden argument*/List_1__ctor_m1342_MethodInfo_var);
		__this->___mBreaks_4 = L_0;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayIdleAnimations::Start()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* AnimationState_t305_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisAnimation_t56_m1341_MethodInfo_var;
extern "C" void PlayIdleAnimations_Start_m104 (PlayIdleAnimations_t59 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		AnimationState_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Component_GetComponentInChildren_TisAnimation_t56_m1341_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483671);
		s_Il2CppMethodIntialized = true;
	}
	AnimationState_t305 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Animation_t56 * L_0 = Component_GetComponentInChildren_TisAnimation_t56_m1341(__this, /*hidden argument*/Component_GetComponentInChildren_TisAnimation_t56_m1341_MethodInfo_var);
		__this->___mAnim_2 = L_0;
		Animation_t56 * L_1 = (__this->___mAnim_2);
		bool L_2 = Object_op_Equality_m1245(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		GameObject_t17 * L_3 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		String_t* L_4 = NGUITools_GetHierarchy_m557(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m1269(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral27, /*hidden argument*/NULL);
		Debug_LogWarning_m1249(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Object_Destroy_m1250(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		goto IL_0112;
	}

IL_0042:
	{
		Animation_t56 * L_6 = (__this->___mAnim_2);
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator() */, L_6);
		V_1 = L_7;
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00da;
		}

IL_0053:
		{
			Object_t * L_8 = V_1;
			NullCheck(L_8);
			Object_t * L_9 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_8);
			V_0 = ((AnimationState_t305 *)Castclass(L_9, AnimationState_t305_il2cpp_TypeInfo_var));
			AnimationState_t305 * L_10 = V_0;
			NullCheck(L_10);
			AnimationClip_t57 * L_11 = AnimationState_get_clip_m1343(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = Object_get_name_m1344(L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_13 = String_op_Equality_m1295(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral28, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_00a8;
			}
		}

IL_0079:
		{
			AnimationState_t305 * L_14 = V_0;
			NullCheck(L_14);
			AnimationState_set_layer_m1345(L_14, 0, /*hidden argument*/NULL);
			AnimationState_t305 * L_15 = V_0;
			NullCheck(L_15);
			AnimationClip_t57 * L_16 = AnimationState_get_clip_m1343(L_15, /*hidden argument*/NULL);
			__this->___mIdle_3 = L_16;
			Animation_t56 * L_17 = (__this->___mAnim_2);
			AnimationClip_t57 * L_18 = (__this->___mIdle_3);
			NullCheck(L_18);
			String_t* L_19 = Object_get_name_m1344(L_18, /*hidden argument*/NULL);
			NullCheck(L_17);
			Animation_Play_m1346(L_17, L_19, /*hidden argument*/NULL);
			goto IL_00da;
		}

IL_00a8:
		{
			AnimationState_t305 * L_20 = V_0;
			NullCheck(L_20);
			AnimationClip_t57 * L_21 = AnimationState_get_clip_m1343(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			String_t* L_22 = Object_get_name_m1344(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			bool L_23 = String_StartsWith_m1347(L_22, (String_t*) &_stringLiteral28, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00da;
			}
		}

IL_00c2:
		{
			AnimationState_t305 * L_24 = V_0;
			NullCheck(L_24);
			AnimationState_set_layer_m1345(L_24, 1, /*hidden argument*/NULL);
			List_1_t58 * L_25 = (__this->___mBreaks_4);
			AnimationState_t305 * L_26 = V_0;
			NullCheck(L_26);
			AnimationClip_t57 * L_27 = AnimationState_get_clip_m1343(L_26, /*hidden argument*/NULL);
			NullCheck(L_25);
			VirtActionInvoker1< AnimationClip_t57 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.AnimationClip>::Add(!0) */, L_25, L_27);
		}

IL_00da:
		{
			Object_t * L_28 = V_1;
			NullCheck(L_28);
			bool L_29 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_28);
			if (L_29)
			{
				goto IL_0053;
			}
		}

IL_00e5:
		{
			IL2CPP_LEAVE(0xFC, FINALLY_00ea);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00ea;
	}

FINALLY_00ea:
	{ // begin finally (depth: 1)
		{
			Object_t * L_30 = V_1;
			V_2 = ((Object_t *)IsInst(L_30, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_31 = V_2;
			if (L_31)
			{
				goto IL_00f5;
			}
		}

IL_00f4:
		{
			IL2CPP_END_FINALLY(234)
		}

IL_00f5:
		{
			Object_t * L_32 = V_2;
			NullCheck(L_32);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_32);
			IL2CPP_END_FINALLY(234)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(234)
	{
		IL2CPP_JUMP_TBL(0xFC, IL_00fc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00fc:
	{
		List_1_t58 * L_33 = (__this->___mBreaks_4);
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.AnimationClip>::get_Count() */, L_33);
		if (L_34)
		{
			goto IL_0112;
		}
	}
	{
		Object_Destroy_m1250(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0112:
	{
		return;
	}
}
// System.Void PlayIdleAnimations::Update()
extern "C" void PlayIdleAnimations_Update_m105 (PlayIdleAnimations_t59 * __this, const MethodInfo* method)
{
	AnimationClip_t57 * V_0 = {0};
	int32_t V_1 = 0;
	AnimationClip_t57 * V_2 = {0};
	{
		float L_0 = (__this->___mNextBreak_5);
		float L_1 = Time_get_time_m1348(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_00e4;
		}
	}
	{
		List_1_t58 * L_2 = (__this->___mBreaks_4);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.AnimationClip>::get_Count() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0066;
		}
	}
	{
		List_1_t58 * L_4 = (__this->___mBreaks_4);
		NullCheck(L_4);
		AnimationClip_t57 * L_5 = (AnimationClip_t57 *)VirtFuncInvoker1< AnimationClip_t57 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.AnimationClip>::get_Item(System.Int32) */, L_4, 0);
		V_0 = L_5;
		float L_6 = Time_get_time_m1348(NULL /*static, unused*/, /*hidden argument*/NULL);
		AnimationClip_t57 * L_7 = V_0;
		NullCheck(L_7);
		float L_8 = AnimationClip_get_length_m1349(L_7, /*hidden argument*/NULL);
		float L_9 = Random_Range_m1350(NULL /*static, unused*/, (5.0f), (15.0f), /*hidden argument*/NULL);
		__this->___mNextBreak_5 = ((float)((float)((float)((float)L_6+(float)L_8))+(float)L_9));
		Animation_t56 * L_10 = (__this->___mAnim_2);
		AnimationClip_t57 * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = Object_get_name_m1344(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Animation_CrossFade_m1351(L_10, L_12, /*hidden argument*/NULL);
		goto IL_00e4;
	}

IL_0066:
	{
		List_1_t58 * L_13 = (__this->___mBreaks_4);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.AnimationClip>::get_Count() */, L_13);
		int32_t L_15 = Random_Range_m1247(NULL /*static, unused*/, 0, ((int32_t)((int32_t)L_14-(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = (__this->___mLastIndex_6);
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_1;
		List_1_t58 * L_20 = (__this->___mBreaks_4);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.AnimationClip>::get_Count() */, L_20);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_009d;
		}
	}
	{
		V_1 = 0;
	}

IL_009d:
	{
		int32_t L_22 = V_1;
		__this->___mLastIndex_6 = L_22;
		List_1_t58 * L_23 = (__this->___mBreaks_4);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		AnimationClip_t57 * L_25 = (AnimationClip_t57 *)VirtFuncInvoker1< AnimationClip_t57 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.AnimationClip>::get_Item(System.Int32) */, L_23, L_24);
		V_2 = L_25;
		float L_26 = Time_get_time_m1348(NULL /*static, unused*/, /*hidden argument*/NULL);
		AnimationClip_t57 * L_27 = V_2;
		NullCheck(L_27);
		float L_28 = AnimationClip_get_length_m1349(L_27, /*hidden argument*/NULL);
		float L_29 = Random_Range_m1350(NULL /*static, unused*/, (2.0f), (8.0f), /*hidden argument*/NULL);
		__this->___mNextBreak_5 = ((float)((float)((float)((float)L_26+(float)L_28))+(float)L_29));
		Animation_t56 * L_30 = (__this->___mAnim_2);
		AnimationClip_t57 * L_31 = V_2;
		NullCheck(L_31);
		String_t* L_32 = Object_get_name_m1344(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		Animation_CrossFade_m1351(L_30, L_32, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		return;
	}
}
// SetColorOnSelection
#include "AssemblyU2DCSharp_SetColorOnSelection.h"
#ifndef _MSC_VER
#else
#endif
// SetColorOnSelection
#include "AssemblyU2DCSharp_SetColorOnSelectionMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
struct Component_t107;
struct UIWidget_t13;
// Declaration !!0 UnityEngine.Component::GetComponent<UIWidget>()
// !!0 UnityEngine.Component::GetComponent<UIWidget>()
#define Component_GetComponent_TisUIWidget_t13_m1352(__this, method) (( UIWidget_t13 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void SetColorOnSelection::.ctor()
extern "C" void SetColorOnSelection__ctor_m106 (SetColorOnSelection_t61 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SetColorOnSelection::OnSelectionChange(System.String)
extern TypeInfo* SetColorOnSelection_t61_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t60_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUIWidget_t13_m1352_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1353_MethodInfo_var;
extern "C" void SetColorOnSelection_OnSelectionChange_m107 (SetColorOnSelection_t61 * __this, String_t* ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SetColorOnSelection_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		Dictionary_2_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(49);
		Component_GetComponent_TisUIWidget_t13_m1352_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483672);
		Dictionary_2__ctor_m1353_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483673);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t60 * V_1 = {0};
	int32_t V_2 = 0;
	{
		UIWidget_t13 * L_0 = (__this->___mWidget_2);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UIWidget_t13 * L_2 = Component_GetComponent_TisUIWidget_t13_m1352(__this, /*hidden argument*/Component_GetComponent_TisUIWidget_t13_m1352_MethodInfo_var);
		__this->___mWidget_2 = L_2;
	}

IL_001d:
	{
		String_t* L_3 = ___val;
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_015c;
		}
	}
	{
		Dictionary_2_t60 * L_5 = ((SetColorOnSelection_t61_StaticFields*)SetColorOnSelection_t61_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_3;
		if (L_5)
		{
			goto IL_0090;
		}
	}
	{
		Dictionary_2_t60 * L_6 = (Dictionary_2_t60 *)il2cpp_codegen_object_new (Dictionary_2_t60_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1353(L_6, 7, /*hidden argument*/Dictionary_2__ctor_m1353_MethodInfo_var);
		V_1 = L_6;
		Dictionary_2_t60 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, (String_t*) &_stringLiteral29, 0);
		Dictionary_2_t60 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, (String_t*) &_stringLiteral30, 1);
		Dictionary_2_t60 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, (String_t*) &_stringLiteral31, 2);
		Dictionary_2_t60 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, (String_t*) &_stringLiteral32, 3);
		Dictionary_2_t60 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_11, (String_t*) &_stringLiteral33, 4);
		Dictionary_2_t60 * L_12 = V_1;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, (String_t*) &_stringLiteral34, 5);
		Dictionary_2_t60 * L_13 = V_1;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, (String_t*) &_stringLiteral35, 6);
		Dictionary_2_t60 * L_14 = V_1;
		((SetColorOnSelection_t61_StaticFields*)SetColorOnSelection_t61_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_3 = L_14;
	}

IL_0090:
	{
		Dictionary_2_t60 * L_15 = ((SetColorOnSelection_t61_StaticFields*)SetColorOnSelection_t61_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_3;
		String_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_15, L_16, (&V_2));
		if (!L_17)
		{
			goto IL_015c;
		}
	}
	{
		int32_t L_18 = V_2;
		if (L_18 == 0)
		{
			goto IL_00c9;
		}
		if (L_18 == 1)
		{
			goto IL_00de;
		}
		if (L_18 == 2)
		{
			goto IL_00f3;
		}
		if (L_18 == 3)
		{
			goto IL_0108;
		}
		if (L_18 == 4)
		{
			goto IL_011d;
		}
		if (L_18 == 5)
		{
			goto IL_0132;
		}
		if (L_18 == 6)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_015c;
	}

IL_00c9:
	{
		UIWidget_t13 * L_19 = (__this->___mWidget_2);
		Color_t25  L_20 = Color_get_white_m1273(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		UIWidget_set_color_m673(L_19, L_20, /*hidden argument*/NULL);
		goto IL_015c;
	}

IL_00de:
	{
		UIWidget_t13 * L_21 = (__this->___mWidget_2);
		Color_t25  L_22 = Color_get_red_m1302(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		UIWidget_set_color_m673(L_21, L_22, /*hidden argument*/NULL);
		goto IL_015c;
	}

IL_00f3:
	{
		UIWidget_t13 * L_23 = (__this->___mWidget_2);
		Color_t25  L_24 = Color_get_green_m1354(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_23);
		UIWidget_set_color_m673(L_23, L_24, /*hidden argument*/NULL);
		goto IL_015c;
	}

IL_0108:
	{
		UIWidget_t13 * L_25 = (__this->___mWidget_2);
		Color_t25  L_26 = Color_get_blue_m1355(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		UIWidget_set_color_m673(L_25, L_26, /*hidden argument*/NULL);
		goto IL_015c;
	}

IL_011d:
	{
		UIWidget_t13 * L_27 = (__this->___mWidget_2);
		Color_t25  L_28 = Color_get_yellow_m1356(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_27);
		UIWidget_set_color_m673(L_27, L_28, /*hidden argument*/NULL);
		goto IL_015c;
	}

IL_0132:
	{
		UIWidget_t13 * L_29 = (__this->___mWidget_2);
		Color_t25  L_30 = Color_get_cyan_m1357(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		UIWidget_set_color_m673(L_29, L_30, /*hidden argument*/NULL);
		goto IL_015c;
	}

IL_0147:
	{
		UIWidget_t13 * L_31 = (__this->___mWidget_2);
		Color_t25  L_32 = Color_get_magenta_m1358(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		UIWidget_set_color_m673(L_31, L_32, /*hidden argument*/NULL);
		goto IL_015c;
	}

IL_015c:
	{
		return;
	}
}
// ShaderQuality
#include "AssemblyU2DCSharp_ShaderQuality.h"
#ifndef _MSC_VER
#else
#endif
// ShaderQuality
#include "AssemblyU2DCSharp_ShaderQualityMethodDeclarations.h"

// UnityEngine.QualitySettings
#include "UnityEngine_UnityEngine_QualitySettingsMethodDeclarations.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"


// System.Void ShaderQuality::.ctor()
extern "C" void ShaderQuality__ctor_m108 (ShaderQuality_t62 * __this, const MethodInfo* method)
{
	{
		__this->___mCurrent_2 = ((int32_t)600);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShaderQuality::Update()
extern "C" void ShaderQuality_Update_m109 (ShaderQuality_t62 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = QualitySettings_GetQualityLevel_m1359(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)((int32_t)100)));
		int32_t L_1 = (__this->___mCurrent_2);
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = V_0;
		__this->___mCurrent_2 = L_3;
		int32_t L_4 = (__this->___mCurrent_2);
		Shader_set_globalMaximumLOD_m1360(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// Spin
#include "AssemblyU2DCSharp_Spin.h"
#ifndef _MSC_VER
#else
#endif
// Spin
#include "AssemblyU2DCSharp_SpinMethodDeclarations.h"

// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
struct Component_t107;
struct Rigidbody_t63;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t63_m1361(__this, method) (( Rigidbody_t63 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void Spin::.ctor()
extern "C" void Spin__ctor_m110 (Spin_t64 * __this, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = {0};
		Vector3__ctor_m1278(&L_0, (0.0f), (0.1f), (0.0f), /*hidden argument*/NULL);
		__this->___rotationsPerSecond_2 = L_0;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spin::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t63_m1361_MethodInfo_var;
extern "C" void Spin_Start_m111 (Spin_t64 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody_t63_m1361_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483674);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_4 = L_0;
		Rigidbody_t63 * L_1 = Component_GetComponent_TisRigidbody_t63_m1361(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t63_m1361_MethodInfo_var);
		__this->___mRb_3 = L_1;
		return;
	}
}
// System.Void Spin::Update()
extern "C" void Spin_Update_m112 (Spin_t64 * __this, const MethodInfo* method)
{
	{
		Rigidbody_t63 * L_0 = (__this->___mRb_3);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		float L_2 = Time_get_deltaTime_m1336(NULL /*static, unused*/, /*hidden argument*/NULL);
		Spin_ApplyDelta_m114(__this, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Spin::FixedUpdate()
extern "C" void Spin_FixedUpdate_m113 (Spin_t64 * __this, const MethodInfo* method)
{
	{
		Rigidbody_t63 * L_0 = (__this->___mRb_3);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		float L_2 = Time_get_deltaTime_m1336(NULL /*static, unused*/, /*hidden argument*/NULL);
		Spin_ApplyDelta_m114(__this, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Spin::ApplyDelta(System.Single)
extern "C" void Spin_ApplyDelta_m114 (Spin_t64 * __this, float ___delta, const MethodInfo* method)
{
	Quaternion_t50  V_0 = {0};
	{
		float L_0 = ___delta;
		___delta = ((float)((float)L_0*(float)(360.0f)));
		Vector3_t48  L_1 = (__this->___rotationsPerSecond_2);
		float L_2 = ___delta;
		Vector3_t48  L_3 = Vector3_op_Multiply_m1362(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Quaternion_t50  L_4 = Quaternion_Euler_m1363(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Rigidbody_t63 * L_5 = (__this->___mRb_3);
		bool L_6 = Object_op_Equality_m1245(NULL /*static, unused*/, L_5, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Transform_t8 * L_7 = (__this->___mTrans_4);
		Transform_t8 * L_8 = (__this->___mTrans_4);
		NullCheck(L_8);
		Quaternion_t50  L_9 = Transform_get_rotation_m1283(L_8, /*hidden argument*/NULL);
		Quaternion_t50  L_10 = V_0;
		Quaternion_t50  L_11 = Quaternion_op_Multiply_m1328(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m1329(L_7, L_11, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_004d:
	{
		Rigidbody_t63 * L_12 = (__this->___mRb_3);
		Rigidbody_t63 * L_13 = (__this->___mRb_3);
		NullCheck(L_13);
		Quaternion_t50  L_14 = Rigidbody_get_rotation_m1364(L_13, /*hidden argument*/NULL);
		Quaternion_t50  L_15 = V_0;
		Quaternion_t50  L_16 = Quaternion_op_Multiply_m1328(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody_MoveRotation_m1365(L_12, L_16, /*hidden argument*/NULL);
	}

IL_0069:
	{
		return;
	}
}
// SpinWithMouse
#include "AssemblyU2DCSharp_SpinWithMouse.h"
#ifndef _MSC_VER
#else
#endif
// SpinWithMouse
#include "AssemblyU2DCSharp_SpinWithMouseMethodDeclarations.h"



// System.Void SpinWithMouse::.ctor()
extern "C" void SpinWithMouse__ctor_m115 (SpinWithMouse_t65 * __this, const MethodInfo* method)
{
	{
		__this->___speed_3 = (1.0f);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpinWithMouse::Start()
extern "C" void SpinWithMouse_Start_m116 (SpinWithMouse_t65 * __this, const MethodInfo* method)
{
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_4 = L_0;
		return;
	}
}
// System.Void SpinWithMouse::OnDrag(UnityEngine.Vector2)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void SpinWithMouse_OnDrag_m117 (SpinWithMouse_t65 * __this, Vector2_t55  ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		MouseOrTouch_t216 * L_0 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_0);
		L_0->___clickNotification_8 = 0;
		Transform_t8 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		Transform_t8 * L_3 = (__this->___target_2);
		float L_4 = ((&___delta)->___x_1);
		float L_5 = (__this->___speed_3);
		Quaternion_t50  L_6 = Quaternion_Euler_m1327(NULL /*static, unused*/, (0.0f), ((float)((float)((float)((float)(-0.5f)*(float)L_4))*(float)L_5)), (0.0f), /*hidden argument*/NULL);
		Transform_t8 * L_7 = (__this->___target_2);
		NullCheck(L_7);
		Quaternion_t50  L_8 = Transform_get_localRotation_m1331(L_7, /*hidden argument*/NULL);
		Quaternion_t50  L_9 = Quaternion_op_Multiply_m1328(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localRotation_m1288(L_3, L_9, /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_005f:
	{
		Transform_t8 * L_10 = (__this->___mTrans_4);
		float L_11 = ((&___delta)->___x_1);
		float L_12 = (__this->___speed_3);
		Quaternion_t50  L_13 = Quaternion_Euler_m1327(NULL /*static, unused*/, (0.0f), ((float)((float)((float)((float)(-0.5f)*(float)L_11))*(float)L_12)), (0.0f), /*hidden argument*/NULL);
		Transform_t8 * L_14 = (__this->___mTrans_4);
		NullCheck(L_14);
		Quaternion_t50  L_15 = Transform_get_localRotation_m1331(L_14, /*hidden argument*/NULL);
		Quaternion_t50  L_16 = Quaternion_op_Multiply_m1328(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localRotation_m1288(L_10, L_16, /*hidden argument*/NULL);
	}

IL_009d:
	{
		return;
	}
}
// TypewriterEffect
#include "AssemblyU2DCSharp_TypewriterEffect.h"
#ifndef _MSC_VER
#else
#endif
// TypewriterEffect
#include "AssemblyU2DCSharp_TypewriterEffectMethodDeclarations.h"

// System.Char
#include "mscorlib_System_Char.h"
// UIFont/SymbolStyle
#include "AssemblyU2DCSharp_UIFont_SymbolStyle.h"
// UIFont
#include "AssemblyU2DCSharp_UIFont.h"
// UIFont
#include "AssemblyU2DCSharp_UIFontMethodDeclarations.h"
struct Component_t107;
struct UILabel_t14;
// Declaration !!0 UnityEngine.Component::GetComponent<UILabel>()
// !!0 UnityEngine.Component::GetComponent<UILabel>()
#define Component_GetComponent_TisUILabel_t14_m1366(__this, method) (( UILabel_t14 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void TypewriterEffect::.ctor()
extern "C" void TypewriterEffect__ctor_m118 (TypewriterEffect_t66 * __this, const MethodInfo* method)
{
	{
		__this->___charsPerSecond_2 = ((int32_t)40);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TypewriterEffect::Update()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUILabel_t14_m1366_MethodInfo_var;
extern "C" void TypewriterEffect_Update_m119 (TypewriterEffect_t66 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Component_GetComponent_TisUILabel_t14_m1366_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483675);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t55  V_0 = {0};
	float V_1 = 0.0f;
	uint16_t V_2 = 0x0;
	int32_t V_3 = 0;
	{
		UILabel_t14 * L_0 = (__this->___mLabel_3);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00a2;
		}
	}
	{
		UILabel_t14 * L_2 = Component_GetComponent_TisUILabel_t14_m1366(__this, /*hidden argument*/Component_GetComponent_TisUILabel_t14_m1366_MethodInfo_var);
		__this->___mLabel_3 = L_2;
		UILabel_t14 * L_3 = (__this->___mLabel_3);
		NullCheck(L_3);
		UILabel_set_supportEncoding_m958(L_3, 0, /*hidden argument*/NULL);
		UILabel_t14 * L_4 = (__this->___mLabel_3);
		NullCheck(L_4);
		UILabel_set_symbolStyle_m960(L_4, 0, /*hidden argument*/NULL);
		UILabel_t14 * L_5 = (__this->___mLabel_3);
		NullCheck(L_5);
		Transform_t8 * L_6 = UIWidget_get_cachedTransform_m683(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t48  L_7 = Transform_get_localScale_m1264(L_6, /*hidden argument*/NULL);
		Vector2_t55  L_8 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		UILabel_t14 * L_9 = (__this->___mLabel_3);
		NullCheck(L_9);
		UIFont_t128 * L_10 = UILabel_get_font_m953(L_9, /*hidden argument*/NULL);
		UILabel_t14 * L_11 = (__this->___mLabel_3);
		NullCheck(L_11);
		String_t* L_12 = UILabel_get_text_m955(L_11, /*hidden argument*/NULL);
		String_t** L_13 = &(__this->___mText_4);
		UILabel_t14 * L_14 = (__this->___mLabel_3);
		NullCheck(L_14);
		int32_t L_15 = UILabel_get_lineWidth_m961(L_14, /*hidden argument*/NULL);
		float L_16 = ((&V_0)->___x_1);
		UILabel_t14 * L_17 = (__this->___mLabel_3);
		NullCheck(L_17);
		int32_t L_18 = UILabel_get_lineHeight_m963(L_17, /*hidden argument*/NULL);
		float L_19 = ((&V_0)->___y_2);
		UILabel_t14 * L_20 = (__this->___mLabel_3);
		NullCheck(L_20);
		int32_t L_21 = UILabel_get_maxLineCount_m967(L_20, /*hidden argument*/NULL);
		NullCheck(L_10);
		UIFont_WrapText_m908(L_10, L_12, L_13, ((float)((float)(((float)L_15))/(float)L_16)), ((float)((float)(((float)L_18))/(float)L_19)), L_21, 0, 0, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		int32_t L_22 = (__this->___mOffset_5);
		String_t* L_23 = (__this->___mText_4);
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m1368(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_22) >= ((int32_t)L_24)))
		{
			goto IL_015c;
		}
	}
	{
		float L_25 = (__this->___mNextChar_6);
		float L_26 = Time_get_time_m1348(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_25) <= ((float)L_26))))
		{
			goto IL_0157;
		}
	}
	{
		int32_t L_27 = (__this->___charsPerSecond_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		int32_t L_28 = Mathf_Max_m1369(NULL /*static, unused*/, 1, L_27, /*hidden argument*/NULL);
		__this->___charsPerSecond_2 = L_28;
		int32_t L_29 = (__this->___charsPerSecond_2);
		V_1 = ((float)((float)(1.0f)/(float)(((float)L_29))));
		String_t* L_30 = (__this->___mText_4);
		int32_t L_31 = (__this->___mOffset_5);
		NullCheck(L_30);
		uint16_t L_32 = String_get_Chars_m1370(L_30, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		uint16_t L_33 = V_2;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)46))))
		{
			goto IL_011a;
		}
	}
	{
		uint16_t L_34 = V_2;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)10))))
		{
			goto IL_011a;
		}
	}
	{
		uint16_t L_35 = V_2;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)33))))
		{
			goto IL_011a;
		}
	}
	{
		uint16_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0122;
		}
	}

IL_011a:
	{
		float L_37 = V_1;
		V_1 = ((float)((float)L_37*(float)(4.0f)));
	}

IL_0122:
	{
		float L_38 = Time_get_time_m1348(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_39 = V_1;
		__this->___mNextChar_6 = ((float)((float)L_38+(float)L_39));
		UILabel_t14 * L_40 = (__this->___mLabel_3);
		String_t* L_41 = (__this->___mText_4);
		int32_t L_42 = (__this->___mOffset_5);
		int32_t L_43 = ((int32_t)((int32_t)L_42+(int32_t)1));
		V_3 = L_43;
		__this->___mOffset_5 = L_43;
		int32_t L_44 = V_3;
		NullCheck(L_41);
		String_t* L_45 = String_Substring_m1371(L_41, 0, L_44, /*hidden argument*/NULL);
		NullCheck(L_40);
		UILabel_set_text_m956(L_40, L_45, /*hidden argument*/NULL);
	}

IL_0157:
	{
		goto IL_0162;
	}

IL_015c:
	{
		Object_Destroy_m1250(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0162:
	{
		return;
	}
}
// UpdateManager/UpdateEntry
#include "AssemblyU2DCSharp_UpdateManager_UpdateEntry.h"
#ifndef _MSC_VER
#else
#endif
// UpdateManager/UpdateEntry
#include "AssemblyU2DCSharp_UpdateManager_UpdateEntryMethodDeclarations.h"



// System.Void UpdateManager/UpdateEntry::.ctor()
extern "C" void UpdateEntry__ctor_m120 (UpdateEntry_t68 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// UpdateManager/DestroyEntry
#include "AssemblyU2DCSharp_UpdateManager_DestroyEntry.h"
#ifndef _MSC_VER
#else
#endif
// UpdateManager/DestroyEntry
#include "AssemblyU2DCSharp_UpdateManager_DestroyEntryMethodDeclarations.h"



// System.Void UpdateManager/DestroyEntry::.ctor()
extern "C" void DestroyEntry__ctor_m121 (DestroyEntry_t70 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UpdateManager/OnUpdate::.ctor(System.Object,System.IntPtr)
extern "C" void OnUpdate__ctor_m122 (OnUpdate_t67 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UpdateManager/OnUpdate::Invoke(System.Single)
extern "C" void OnUpdate_Invoke_m123 (OnUpdate_t67 * __this, float ___delta, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnUpdate_Invoke_m123((OnUpdate_t67 *)__this->___prev_9,___delta, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, float ___delta, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___delta,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, float ___delta, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___delta,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_OnUpdate_t67(Il2CppObject* delegate, float ___delta)
{
	typedef void (STDCALL *native_function_ptr_type)(float);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___delta' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___delta);

	// Marshaling cleanup of parameter '___delta' native representation

}
// System.IAsyncResult UpdateManager/OnUpdate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern TypeInfo* Single_t308_il2cpp_TypeInfo_var;
extern "C" Object_t * OnUpdate_BeginInvoke_m124 (OnUpdate_t67 * __this, float ___delta, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t308_il2cpp_TypeInfo_var, &___delta);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UpdateManager/OnUpdate::EndInvoke(System.IAsyncResult)
extern "C" void OnUpdate_EndInvoke_m125 (OnUpdate_t67 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UpdateManager/<CoroutineFunction>c__Iterator1
#include "AssemblyU2DCSharp_UpdateManager_U3CCoroutineFunctionU3Ec__It.h"
#ifndef _MSC_VER
#else
#endif
// UpdateManager/<CoroutineFunction>c__Iterator1
#include "AssemblyU2DCSharp_UpdateManager_U3CCoroutineFunctionU3Ec__ItMethodDeclarations.h"

// UpdateManager
#include "AssemblyU2DCSharp_UpdateManager.h"


// System.Void UpdateManager/<CoroutineFunction>c__Iterator1::.ctor()
extern "C" void U3CCoroutineFunctionU3Ec__Iterator1__ctor_m126 (U3CCoroutineFunctionU3Ec__Iterator1_t75 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1291(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UpdateManager/<CoroutineFunction>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CCoroutineFunctionU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m127 (U3CCoroutineFunctionU3Ec__Iterator1_t75 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object UpdateManager/<CoroutineFunction>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCoroutineFunctionU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m128 (U3CCoroutineFunctionU3Ec__Iterator1_t75 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean UpdateManager/<CoroutineFunction>c__Iterator1::MoveNext()
extern "C" bool U3CCoroutineFunctionU3Ec__Iterator1_MoveNext_m129 (U3CCoroutineFunctionU3Ec__Iterator1_t75 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0064;
	}

IL_0021:
	{
		goto IL_0053;
	}

IL_0026:
	{
		UpdateManager_t74 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		bool L_3 = UpdateManager_CoroutineUpdate_m140(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		__this->___U24current_1 = NULL;
		__this->___U24PC_0 = 1;
		goto IL_0066;
	}

IL_0049:
	{
		goto IL_0053;
	}

IL_004e:
	{
		goto IL_005d;
	}

IL_0053:
	{
		bool L_4 = Application_get_isPlaying_m1372(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}

IL_005d:
	{
		__this->___U24PC_0 = (-1);
	}

IL_0064:
	{
		return 0;
	}

IL_0066:
	{
		return 1;
	}
	// Dead block : IL_0068: ldloc.1
}
// System.Void UpdateManager/<CoroutineFunction>c__Iterator1::Dispose()
extern "C" void U3CCoroutineFunctionU3Ec__Iterator1_Dispose_m130 (U3CCoroutineFunctionU3Ec__Iterator1_t75 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void UpdateManager/<CoroutineFunction>c__Iterator1::Reset()
extern TypeInfo* NotSupportedException_t303_il2cpp_TypeInfo_var;
extern "C" void U3CCoroutineFunctionU3Ec__Iterator1_Reset_m131 (U3CCoroutineFunctionU3Ec__Iterator1_t75 * __this, const MethodInfo* method)
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
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<UpdateManager/UpdateEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
// BetterList`1<UpdateManager/DestroyEntry>
#include "AssemblyU2DCSharp_BetterList_1_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// System.MulticastDelegate
#include "mscorlib_System_MulticastDelegate.h"
// System.Comparison`1<UpdateManager/UpdateEntry>
#include "mscorlib_System_Comparison_1_gen_0.h"
// System.Collections.Generic.List`1<UpdateManager/UpdateEntry>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
// BetterList`1<UpdateManager/DestroyEntry>
#include "AssemblyU2DCSharp_BetterList_1_genMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.MulticastDelegate
#include "mscorlib_System_MulticastDelegateMethodDeclarations.h"
// System.Comparison`1<UpdateManager/UpdateEntry>
#include "mscorlib_System_Comparison_1_gen_0MethodDeclarations.h"
struct GameObject_t17;
struct UpdateManager_t74;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UpdateManager>()
// !!0 UnityEngine.GameObject::AddComponent<UpdateManager>()
#define GameObject_AddComponent_TisUpdateManager_t74_m1373(__this, method) (( UpdateManager_t74 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1243_gshared)(__this, method)


// System.Void UpdateManager::.ctor()
extern TypeInfo* List_1_t76_il2cpp_TypeInfo_var;
extern TypeInfo* BetterList_1_t77_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1374_MethodInfo_var;
extern const MethodInfo* BetterList_1__ctor_m1375_MethodInfo_var;
extern "C" void UpdateManager__ctor_m132 (UpdateManager_t74 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		BetterList_1_t77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(56);
		List_1__ctor_m1374_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483676);
		BetterList_1__ctor_m1375_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483677);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t76 * L_0 = (List_1_t76 *)il2cpp_codegen_object_new (List_1_t76_il2cpp_TypeInfo_var);
		List_1__ctor_m1374(L_0, /*hidden argument*/List_1__ctor_m1374_MethodInfo_var);
		__this->___mOnUpdate_3 = L_0;
		List_1_t76 * L_1 = (List_1_t76 *)il2cpp_codegen_object_new (List_1_t76_il2cpp_TypeInfo_var);
		List_1__ctor_m1374(L_1, /*hidden argument*/List_1__ctor_m1374_MethodInfo_var);
		__this->___mOnLate_4 = L_1;
		List_1_t76 * L_2 = (List_1_t76 *)il2cpp_codegen_object_new (List_1_t76_il2cpp_TypeInfo_var);
		List_1__ctor_m1374(L_2, /*hidden argument*/List_1__ctor_m1374_MethodInfo_var);
		__this->___mOnCoro_5 = L_2;
		BetterList_1_t77 * L_3 = (BetterList_1_t77 *)il2cpp_codegen_object_new (BetterList_1_t77_il2cpp_TypeInfo_var);
		BetterList_1__ctor_m1375(L_3, /*hidden argument*/BetterList_1__ctor_m1375_MethodInfo_var);
		__this->___mDest_6 = L_3;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UpdateManager::Compare(UpdateManager/UpdateEntry,UpdateManager/UpdateEntry)
extern "C" int32_t UpdateManager_Compare_m133 (Object_t * __this /* static, unused */, UpdateEntry_t68 * ___a, UpdateEntry_t68 * ___b, const MethodInfo* method)
{
	{
		UpdateEntry_t68 * L_0 = ___a;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___index_0);
		UpdateEntry_t68 * L_2 = ___b;
		NullCheck(L_2);
		int32_t L_3 = (L_2->___index_0);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}
	{
		return 1;
	}

IL_0013:
	{
		UpdateEntry_t68 * L_4 = ___a;
		NullCheck(L_4);
		int32_t L_5 = (L_4->___index_0);
		UpdateEntry_t68 * L_6 = ___b;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___index_0);
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_0026;
		}
	}
	{
		return (-1);
	}

IL_0026:
	{
		return 0;
	}
}
// System.Void UpdateManager::CreateInstance()
extern const Il2CppType* UpdateManager_t74_0_0_0_var;
extern TypeInfo* UpdateManager_t74_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t17_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisUpdateManager_t74_m1373_MethodInfo_var;
extern "C" void UpdateManager_CreateInstance_m134 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UpdateManager_t74_0_0_0_var = il2cpp_codegen_type_from_index(57);
		UpdateManager_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		GameObject_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		GameObject_AddComponent_TisUpdateManager_t74_m1373_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t17 * V_0 = {0};
	{
		UpdateManager_t74 * L_0 = ((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2;
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UpdateManager_t74_0_0_0_var), /*hidden argument*/NULL);
		Object_t69 * L_3 = Object_FindObjectOfType_m1377(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2 = ((UpdateManager_t74 *)IsInst(L_3, UpdateManager_t74_il2cpp_TypeInfo_var));
		UpdateManager_t74 * L_4 = ((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2;
		bool L_5 = Object_op_Equality_m1245(NULL /*static, unused*/, L_4, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		bool L_6 = Application_get_isPlaying_m1372(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		GameObject_t17 * L_7 = (GameObject_t17 *)il2cpp_codegen_object_new (GameObject_t17_il2cpp_TypeInfo_var);
		GameObject__ctor_m1378(L_7, (String_t*) &_stringLiteral36, /*hidden argument*/NULL);
		V_0 = L_7;
		GameObject_t17 * L_8 = V_0;
		Object_DontDestroyOnLoad_m1379(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		GameObject_t17 * L_9 = V_0;
		NullCheck(L_9);
		UpdateManager_t74 * L_10 = GameObject_AddComponent_TisUpdateManager_t74_m1373(L_9, /*hidden argument*/GameObject_AddComponent_TisUpdateManager_t74_m1373_MethodInfo_var);
		((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2 = L_10;
	}

IL_005f:
	{
		return;
	}
}
// System.Void UpdateManager::UpdateList(System.Collections.Generic.List`1<UpdateManager/UpdateEntry>,System.Single)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UpdateManager_UpdateList_m135 (UpdateManager_t74 * __this, List_1_t76 * ___list, float ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	UpdateEntry_t68 * V_1 = {0};
	{
		List_1_t76 * L_0 = ___list;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::get_Count() */, L_0);
		V_0 = L_1;
		goto IL_0076;
	}

IL_000c:
	{
		List_1_t76 * L_2 = ___list;
		int32_t L_3 = V_0;
		int32_t L_4 = ((int32_t)((int32_t)L_3-(int32_t)1));
		V_0 = L_4;
		NullCheck(L_2);
		UpdateEntry_t68 * L_5 = (UpdateEntry_t68 *)VirtFuncInvoker1< UpdateEntry_t68 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::get_Item(System.Int32) */, L_2, L_4);
		V_1 = L_5;
		UpdateEntry_t68 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = (L_6->___isMonoBehaviour_3);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		UpdateEntry_t68 * L_8 = V_1;
		NullCheck(L_8);
		MonoBehaviour_t3 * L_9 = (L_8->___mb_2);
		bool L_10 = Object_op_Equality_m1245(NULL /*static, unused*/, L_9, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0040;
		}
	}
	{
		List_1_t76 * L_11 = ___list;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::RemoveAt(System.Int32) */, L_11, L_12);
		goto IL_0076;
	}

IL_0040:
	{
		UpdateEntry_t68 * L_13 = V_1;
		NullCheck(L_13);
		MonoBehaviour_t3 * L_14 = (L_13->___mb_2);
		NullCheck(L_14);
		bool L_15 = Behaviour_get_enabled_m1318(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		UpdateEntry_t68 * L_16 = V_1;
		NullCheck(L_16);
		MonoBehaviour_t3 * L_17 = (L_16->___mb_2);
		NullCheck(L_17);
		GameObject_t17 * L_18 = Component_get_gameObject_m1246(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_19 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_006a;
		}
	}

IL_0065:
	{
		goto IL_0076;
	}

IL_006a:
	{
		UpdateEntry_t68 * L_20 = V_1;
		NullCheck(L_20);
		OnUpdate_t67 * L_21 = (L_20->___func_1);
		float L_22 = ___delta;
		NullCheck(L_21);
		VirtActionInvoker1< float >::Invoke(11 /* System.Void UpdateManager/OnUpdate::Invoke(System.Single) */, L_21, L_22);
	}

IL_0076:
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void UpdateManager::Start()
extern "C" void UpdateManager_Start_m136 (UpdateManager_t74 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Application_get_isPlaying_m1372(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = Time_get_realtimeSinceStartup_m1380(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mTime_7 = L_1;
		Object_t * L_2 = UpdateManager_CoroutineFunction_m141(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m1381(__this, L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UpdateManager::OnApplicationQuit()
extern "C" void UpdateManager_OnApplicationQuit_m137 (UpdateManager_t74 * __this, const MethodInfo* method)
{
	{
		GameObject_t17 * L_0 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		Object_DestroyImmediate_m1382(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateManager::Update()
extern TypeInfo* UpdateManager_t74_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UpdateManager_Update_m138 (UpdateManager_t74 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UpdateManager_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		UpdateManager_t74 * L_0 = ((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2;
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_Destroy_m569(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0020:
	{
		List_1_t76 * L_3 = (__this->___mOnUpdate_3);
		float L_4 = Time_get_deltaTime_m1336(NULL /*static, unused*/, /*hidden argument*/NULL);
		UpdateManager_UpdateList_m135(__this, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UpdateManager::LateUpdate()
extern "C" void UpdateManager_LateUpdate_m139 (UpdateManager_t74 * __this, const MethodInfo* method)
{
	{
		List_1_t76 * L_0 = (__this->___mOnLate_4);
		float L_1 = Time_get_deltaTime_m1336(NULL /*static, unused*/, /*hidden argument*/NULL);
		UpdateManager_UpdateList_m135(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = Application_get_isPlaying_m1372(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		UpdateManager_CoroutineUpdate_m140(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Boolean UpdateManager::CoroutineUpdate()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* BetterList_1_RemoveAt_m1383_MethodInfo_var;
extern "C" bool UpdateManager_CoroutineUpdate_m140 (UpdateManager_t74 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		BetterList_1_RemoveAt_m1383_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	int32_t V_3 = 0;
	DestroyEntry_t70 * V_4 = {0};
	{
		float L_0 = Time_get_realtimeSinceStartup_m1380(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = (__this->___mTime_7);
		V_1 = ((float)((float)L_1-(float)L_2));
		float L_3 = V_1;
		if ((!(((float)L_3) < ((float)(0.001f)))))
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		float L_4 = V_0;
		__this->___mTime_7 = L_4;
		List_1_t76 * L_5 = (__this->___mOnCoro_5);
		float L_6 = V_1;
		UpdateManager_UpdateList_m135(__this, L_5, L_6, /*hidden argument*/NULL);
		bool L_7 = Application_get_isPlaying_m1372(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_7;
		BetterList_1_t77 * L_8 = (__this->___mDest_6);
		NullCheck(L_8);
		int32_t L_9 = (L_8->___size_1);
		V_3 = L_9;
		goto IL_00a4;
	}

IL_0047:
	{
		BetterList_1_t77 * L_10 = (__this->___mDest_6);
		NullCheck(L_10);
		DestroyEntryU5BU5D_t309* L_11 = (L_10->___buffer_0);
		int32_t L_12 = V_3;
		int32_t L_13 = ((int32_t)((int32_t)L_12-(int32_t)1));
		V_3 = L_13;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
		int32_t L_14 = L_13;
		V_4 = (*(DestroyEntry_t70 **)(DestroyEntry_t70 **)SZArrayLdElema(L_11, L_14));
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0072;
		}
	}
	{
		DestroyEntry_t70 * L_16 = V_4;
		NullCheck(L_16);
		float L_17 = (L_16->___time_1);
		float L_18 = (__this->___mTime_7);
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_00a4;
		}
	}

IL_0072:
	{
		DestroyEntry_t70 * L_19 = V_4;
		NullCheck(L_19);
		Object_t69 * L_20 = (L_19->___obj_0);
		bool L_21 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_20, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0098;
		}
	}
	{
		DestroyEntry_t70 * L_22 = V_4;
		NullCheck(L_22);
		Object_t69 * L_23 = (L_22->___obj_0);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_Destroy_m569(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		DestroyEntry_t70 * L_24 = V_4;
		NullCheck(L_24);
		L_24->___obj_0 = (Object_t69 *)NULL;
	}

IL_0098:
	{
		BetterList_1_t77 * L_25 = (__this->___mDest_6);
		int32_t L_26 = V_3;
		NullCheck(L_25);
		BetterList_1_RemoveAt_m1383(L_25, L_26, /*hidden argument*/BetterList_1_RemoveAt_m1383_MethodInfo_var);
	}

IL_00a4:
	{
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) > ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		List_1_t76 * L_28 = (__this->___mOnUpdate_3);
		NullCheck(L_28);
		int32_t L_29 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::get_Count() */, L_28);
		if (L_29)
		{
			goto IL_00f8;
		}
	}
	{
		List_1_t76 * L_30 = (__this->___mOnLate_4);
		NullCheck(L_30);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::get_Count() */, L_30);
		if (L_31)
		{
			goto IL_00f8;
		}
	}
	{
		List_1_t76 * L_32 = (__this->___mOnCoro_5);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::get_Count() */, L_32);
		if (L_33)
		{
			goto IL_00f8;
		}
	}
	{
		BetterList_1_t77 * L_34 = (__this->___mDest_6);
		NullCheck(L_34);
		int32_t L_35 = (L_34->___size_1);
		if (L_35)
		{
			goto IL_00f8;
		}
	}
	{
		GameObject_t17 * L_36 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_Destroy_m569(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		return 0;
	}

IL_00f8:
	{
		return 1;
	}
}
// System.Collections.IEnumerator UpdateManager::CoroutineFunction()
extern TypeInfo* U3CCoroutineFunctionU3Ec__Iterator1_t75_il2cpp_TypeInfo_var;
extern "C" Object_t * UpdateManager_CoroutineFunction_m141 (UpdateManager_t74 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CCoroutineFunctionU3Ec__Iterator1_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		s_Il2CppMethodIntialized = true;
	}
	U3CCoroutineFunctionU3Ec__Iterator1_t75 * V_0 = {0};
	{
		U3CCoroutineFunctionU3Ec__Iterator1_t75 * L_0 = (U3CCoroutineFunctionU3Ec__Iterator1_t75 *)il2cpp_codegen_object_new (U3CCoroutineFunctionU3Ec__Iterator1_t75_il2cpp_TypeInfo_var);
		U3CCoroutineFunctionU3Ec__Iterator1__ctor_m126(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCoroutineFunctionU3Ec__Iterator1_t75 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CCoroutineFunctionU3Ec__Iterator1_t75 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UpdateManager::Add(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate,System.Collections.Generic.List`1<UpdateManager/UpdateEntry>)
extern TypeInfo* UpdateEntry_t68_il2cpp_TypeInfo_var;
extern TypeInfo* Comparison_1_t310_il2cpp_TypeInfo_var;
extern const MethodInfo* UpdateManager_Compare_m133_MethodInfo_var;
extern const MethodInfo* Comparison_1__ctor_m1385_MethodInfo_var;
extern const MethodInfo* List_1_Sort_m1386_MethodInfo_var;
extern "C" void UpdateManager_Add_m142 (UpdateManager_t74 * __this, MonoBehaviour_t3 * ___mb, int32_t ___updateOrder, OnUpdate_t67 * ___func, List_1_t76 * ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UpdateEntry_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(53);
		Comparison_1_t310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		UpdateManager_Compare_m133_MethodInfo_var = il2cpp_codegen_method_info_from_index(32);
		Comparison_1__ctor_m1385_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		List_1_Sort_m1386_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UpdateEntry_t68 * V_2 = {0};
	UpdateEntry_t68 * V_3 = {0};
	{
		V_0 = 0;
		List_1_t76 * L_0 = ___list;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::get_Count() */, L_0);
		V_1 = L_1;
		goto IL_002e;
	}

IL_000f:
	{
		List_1_t76 * L_2 = ___list;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		UpdateEntry_t68 * L_4 = (UpdateEntry_t68 *)VirtFuncInvoker1< UpdateEntry_t68 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::get_Item(System.Int32) */, L_2, L_3);
		V_2 = L_4;
		UpdateEntry_t68 * L_5 = V_2;
		NullCheck(L_5);
		OnUpdate_t67 * L_6 = (L_5->___func_1);
		OnUpdate_t67 * L_7 = ___func;
		bool L_8 = MulticastDelegate_op_Equality_m1384(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000f;
		}
	}
	{
		UpdateEntry_t68 * L_12 = (UpdateEntry_t68 *)il2cpp_codegen_object_new (UpdateEntry_t68_il2cpp_TypeInfo_var);
		UpdateEntry__ctor_m120(L_12, /*hidden argument*/NULL);
		V_3 = L_12;
		UpdateEntry_t68 * L_13 = V_3;
		int32_t L_14 = ___updateOrder;
		NullCheck(L_13);
		L_13->___index_0 = L_14;
		UpdateEntry_t68 * L_15 = V_3;
		OnUpdate_t67 * L_16 = ___func;
		NullCheck(L_15);
		L_15->___func_1 = L_16;
		UpdateEntry_t68 * L_17 = V_3;
		MonoBehaviour_t3 * L_18 = ___mb;
		NullCheck(L_17);
		L_17->___mb_2 = L_18;
		UpdateEntry_t68 * L_19 = V_3;
		MonoBehaviour_t3 * L_20 = ___mb;
		bool L_21 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_20, (Object_t69 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->___isMonoBehaviour_3 = L_21;
		List_1_t76 * L_22 = ___list;
		UpdateEntry_t68 * L_23 = V_3;
		NullCheck(L_22);
		VirtActionInvoker1< UpdateEntry_t68 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UpdateManager/UpdateEntry>::Add(!0) */, L_22, L_23);
		int32_t L_24 = ___updateOrder;
		if (!L_24)
		{
			goto IL_007e;
		}
	}
	{
		List_1_t76 * L_25 = ___list;
		IntPtr_t L_26 = { (void*)UpdateManager_Compare_m133_MethodInfo_var };
		Comparison_1_t310 * L_27 = (Comparison_1_t310 *)il2cpp_codegen_object_new (Comparison_1_t310_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m1385(L_27, NULL, L_26, /*hidden argument*/Comparison_1__ctor_m1385_MethodInfo_var);
		NullCheck(L_25);
		List_1_Sort_m1386(L_25, L_27, /*hidden argument*/List_1_Sort_m1386_MethodInfo_var);
	}

IL_007e:
	{
		return;
	}
}
// System.Void UpdateManager::AddUpdate(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
extern TypeInfo* UpdateManager_t74_il2cpp_TypeInfo_var;
extern "C" void UpdateManager_AddUpdate_m143 (Object_t * __this /* static, unused */, MonoBehaviour_t3 * ___mb, int32_t ___updateOrder, OnUpdate_t67 * ___func, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UpdateManager_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		UpdateManager_CreateInstance_m134(NULL /*static, unused*/, /*hidden argument*/NULL);
		UpdateManager_t74 * L_0 = ((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2;
		MonoBehaviour_t3 * L_1 = ___mb;
		int32_t L_2 = ___updateOrder;
		OnUpdate_t67 * L_3 = ___func;
		UpdateManager_t74 * L_4 = ((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2;
		NullCheck(L_4);
		List_1_t76 * L_5 = (L_4->___mOnUpdate_3);
		NullCheck(L_0);
		UpdateManager_Add_m142(L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateManager::AddLateUpdate(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
extern TypeInfo* UpdateManager_t74_il2cpp_TypeInfo_var;
extern "C" void UpdateManager_AddLateUpdate_m144 (Object_t * __this /* static, unused */, MonoBehaviour_t3 * ___mb, int32_t ___updateOrder, OnUpdate_t67 * ___func, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UpdateManager_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		UpdateManager_CreateInstance_m134(NULL /*static, unused*/, /*hidden argument*/NULL);
		UpdateManager_t74 * L_0 = ((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2;
		MonoBehaviour_t3 * L_1 = ___mb;
		int32_t L_2 = ___updateOrder;
		OnUpdate_t67 * L_3 = ___func;
		UpdateManager_t74 * L_4 = ((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2;
		NullCheck(L_4);
		List_1_t76 * L_5 = (L_4->___mOnLate_4);
		NullCheck(L_0);
		UpdateManager_Add_m142(L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateManager::AddCoroutine(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
extern TypeInfo* UpdateManager_t74_il2cpp_TypeInfo_var;
extern "C" void UpdateManager_AddCoroutine_m145 (Object_t * __this /* static, unused */, MonoBehaviour_t3 * ___mb, int32_t ___updateOrder, OnUpdate_t67 * ___func, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UpdateManager_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		UpdateManager_CreateInstance_m134(NULL /*static, unused*/, /*hidden argument*/NULL);
		UpdateManager_t74 * L_0 = ((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2;
		MonoBehaviour_t3 * L_1 = ___mb;
		int32_t L_2 = ___updateOrder;
		OnUpdate_t67 * L_3 = ___func;
		UpdateManager_t74 * L_4 = ((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2;
		NullCheck(L_4);
		List_1_t76 * L_5 = (L_4->___mOnCoro_5);
		NullCheck(L_0);
		UpdateManager_Add_m142(L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UpdateManager::AddDestroy(UnityEngine.Object,System.Single)
extern TypeInfo* DestroyEntry_t70_il2cpp_TypeInfo_var;
extern TypeInfo* UpdateManager_t74_il2cpp_TypeInfo_var;
extern const MethodInfo* BetterList_1_Add_m1387_MethodInfo_var;
extern "C" void UpdateManager_AddDestroy_m146 (Object_t * __this /* static, unused */, Object_t69 * ___obj, float ___delay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DestroyEntry_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		UpdateManager_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		BetterList_1_Add_m1387_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		s_Il2CppMethodIntialized = true;
	}
	DestroyEntry_t70 * V_0 = {0};
	{
		Object_t69 * L_0 = ___obj;
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = Application_get_isPlaying_m1372(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		float L_3 = ___delay;
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		UpdateManager_CreateInstance_m134(NULL /*static, unused*/, /*hidden argument*/NULL);
		DestroyEntry_t70 * L_4 = (DestroyEntry_t70 *)il2cpp_codegen_object_new (DestroyEntry_t70_il2cpp_TypeInfo_var);
		DestroyEntry__ctor_m121(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		DestroyEntry_t70 * L_5 = V_0;
		Object_t69 * L_6 = ___obj;
		NullCheck(L_5);
		L_5->___obj_0 = L_6;
		DestroyEntry_t70 * L_7 = V_0;
		float L_8 = Time_get_realtimeSinceStartup_m1380(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = ___delay;
		NullCheck(L_7);
		L_7->___time_1 = ((float)((float)L_8+(float)L_9));
		UpdateManager_t74 * L_10 = ((UpdateManager_t74_StaticFields*)UpdateManager_t74_il2cpp_TypeInfo_var->static_fields)->___mInst_2;
		NullCheck(L_10);
		BetterList_1_t77 * L_11 = (L_10->___mDest_6);
		DestroyEntry_t70 * L_12 = V_0;
		NullCheck(L_11);
		BetterList_1_Add_m1387(L_11, L_12, /*hidden argument*/BetterList_1_Add_m1387_MethodInfo_var);
		goto IL_005c;
	}

IL_0056:
	{
		Object_t69 * L_13 = ___obj;
		Object_Destroy_m1250(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_005c:
	{
		goto IL_0067;
	}

IL_0061:
	{
		Object_t69 * L_14 = ___obj;
		Object_DestroyImmediate_m1382(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// WindowAutoYaw
#include "AssemblyU2DCSharp_WindowAutoYaw.h"
#ifndef _MSC_VER
#else
#endif
// WindowAutoYaw
#include "AssemblyU2DCSharp_WindowAutoYawMethodDeclarations.h"



// System.Void WindowAutoYaw::.ctor()
extern "C" void WindowAutoYaw__ctor_m147 (WindowAutoYaw_t78 * __this, const MethodInfo* method)
{
	{
		__this->___yawAmount_4 = (20.0f);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindowAutoYaw::OnDisable()
extern "C" void WindowAutoYaw_OnDisable_m148 (WindowAutoYaw_t78 * __this, const MethodInfo* method)
{
	{
		Transform_t8 * L_0 = (__this->___mTrans_5);
		Quaternion_t50  L_1 = Quaternion_get_identity_m1287(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localRotation_m1288(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindowAutoYaw::Start()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* OnUpdate_t67_il2cpp_TypeInfo_var;
extern const MethodInfo* WindowAutoYaw_CoroutineUpdate_m150_MethodInfo_var;
extern "C" void WindowAutoYaw_Start_m149 (WindowAutoYaw_t78 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		OnUpdate_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		WindowAutoYaw_CoroutineUpdate_m150_MethodInfo_var = il2cpp_codegen_method_info_from_index(36);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t7 * L_0 = (__this->___uiCamera_3);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameObject_get_layer_m1254(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		Camera_t7 * L_4 = NGUITools_FindCameraForLayer_m562(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->___uiCamera_3 = L_4;
	}

IL_0027:
	{
		Transform_t8 * L_5 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_5 = L_5;
		int32_t L_6 = (__this->___updateOrder_2);
		IntPtr_t L_7 = { (void*)WindowAutoYaw_CoroutineUpdate_m150_MethodInfo_var };
		OnUpdate_t67 * L_8 = (OnUpdate_t67 *)il2cpp_codegen_object_new (OnUpdate_t67_il2cpp_TypeInfo_var);
		OnUpdate__ctor_m122(L_8, __this, L_7, /*hidden argument*/NULL);
		UpdateManager_AddCoroutine_m145(NULL /*static, unused*/, __this, L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindowAutoYaw::CoroutineUpdate(System.Single)
extern "C" void WindowAutoYaw_CoroutineUpdate_m150 (WindowAutoYaw_t78 * __this, float ___delta, const MethodInfo* method)
{
	Vector3_t48  V_0 = {0};
	{
		Camera_t7 * L_0 = (__this->___uiCamera_3);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		Camera_t7 * L_2 = (__this->___uiCamera_3);
		Transform_t8 * L_3 = (__this->___mTrans_5);
		NullCheck(L_3);
		Vector3_t48  L_4 = Transform_get_position_m1282(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t48  L_5 = Camera_WorldToViewportPoint_m1388(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Transform_t8 * L_6 = (__this->___mTrans_5);
		float L_7 = ((&V_0)->___x_1);
		float L_8 = (__this->___yawAmount_4);
		Quaternion_t50  L_9 = Quaternion_Euler_m1327(NULL /*static, unused*/, (0.0f), ((float)((float)((float)((float)((float)((float)L_7*(float)(2.0f)))-(float)(1.0f)))*(float)L_8)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localRotation_m1288(L_6, L_9, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return;
	}
}
// WindowDragTilt
#include "AssemblyU2DCSharp_WindowDragTilt.h"
#ifndef _MSC_VER
#else
#endif
// WindowDragTilt
#include "AssemblyU2DCSharp_WindowDragTiltMethodDeclarations.h"



// System.Void WindowDragTilt::.ctor()
extern "C" void WindowDragTilt__ctor_m151 (WindowDragTilt_t79 * __this, const MethodInfo* method)
{
	{
		__this->___degrees_3 = (30.0f);
		__this->___mInit_7 = 1;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindowDragTilt::Start()
extern TypeInfo* OnUpdate_t67_il2cpp_TypeInfo_var;
extern const MethodInfo* WindowDragTilt_CoroutineUpdate_m154_MethodInfo_var;
extern "C" void WindowDragTilt_Start_m152 (WindowDragTilt_t79 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnUpdate_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(40);
		WindowDragTilt_CoroutineUpdate_m154_MethodInfo_var = il2cpp_codegen_method_info_from_index(37);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___updateOrder_2);
		IntPtr_t L_1 = { (void*)WindowDragTilt_CoroutineUpdate_m154_MethodInfo_var };
		OnUpdate_t67 * L_2 = (OnUpdate_t67 *)il2cpp_codegen_object_new (OnUpdate_t67_il2cpp_TypeInfo_var);
		OnUpdate__ctor_m122(L_2, __this, L_1, /*hidden argument*/NULL);
		UpdateManager_AddCoroutine_m145(NULL /*static, unused*/, __this, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindowDragTilt::OnEnable()
extern "C" void WindowDragTilt_OnEnable_m153 (WindowDragTilt_t79 * __this, const MethodInfo* method)
{
	{
		__this->___mInit_7 = 1;
		return;
	}
}
// System.Void WindowDragTilt::CoroutineUpdate(System.Single)
extern "C" void WindowDragTilt_CoroutineUpdate_m154 (WindowDragTilt_t79 * __this, float ___delta, const MethodInfo* method)
{
	Vector3_t48  V_0 = {0};
	{
		bool L_0 = (__this->___mInit_7);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		__this->___mInit_7 = 0;
		Transform_t8 * L_1 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_5 = L_1;
		Transform_t8 * L_2 = (__this->___mTrans_5);
		NullCheck(L_2);
		Vector3_t48  L_3 = Transform_get_position_m1282(L_2, /*hidden argument*/NULL);
		__this->___mLastPos_4 = L_3;
	}

IL_002f:
	{
		Transform_t8 * L_4 = (__this->___mTrans_5);
		NullCheck(L_4);
		Vector3_t48  L_5 = Transform_get_position_m1282(L_4, /*hidden argument*/NULL);
		Vector3_t48  L_6 = (__this->___mLastPos_4);
		Vector3_t48  L_7 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Transform_t8 * L_8 = (__this->___mTrans_5);
		NullCheck(L_8);
		Vector3_t48  L_9 = Transform_get_position_m1282(L_8, /*hidden argument*/NULL);
		__this->___mLastPos_4 = L_9;
		float L_10 = (__this->___mAngle_6);
		float L_11 = ((&V_0)->___x_1);
		float L_12 = (__this->___degrees_3);
		__this->___mAngle_6 = ((float)((float)L_10+(float)((float)((float)L_11*(float)L_12))));
		float L_13 = (__this->___mAngle_6);
		float L_14 = ___delta;
		float L_15 = NGUIMath_SpringLerp_m539(NULL /*static, unused*/, L_13, (0.0f), (20.0f), L_14, /*hidden argument*/NULL);
		__this->___mAngle_6 = L_15;
		Transform_t8 * L_16 = (__this->___mTrans_5);
		float L_17 = (__this->___mAngle_6);
		Quaternion_t50  L_18 = Quaternion_Euler_m1327(NULL /*static, unused*/, (0.0f), (0.0f), ((-L_17)), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localRotation_m1288(L_16, L_18, /*hidden argument*/NULL);
		return;
	}
}
// LanguageSelection
#include "AssemblyU2DCSharp_LanguageSelection.h"
#ifndef _MSC_VER
#else
#endif
// LanguageSelection
#include "AssemblyU2DCSharp_LanguageSelectionMethodDeclarations.h"

// UIPopupList
#include "AssemblyU2DCSharp_UIPopupList.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
// Localization
#include "AssemblyU2DCSharp_Localization.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
// Localization
#include "AssemblyU2DCSharp_LocalizationMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_4MethodDeclarations.h"
// UIPopupList
#include "AssemblyU2DCSharp_UIPopupListMethodDeclarations.h"
struct Component_t107;
struct UIPopupList_t80;
// Declaration !!0 UnityEngine.Component::GetComponent<UIPopupList>()
// !!0 UnityEngine.Component::GetComponent<UIPopupList>()
#define Component_GetComponent_TisUIPopupList_t80_m1389(__this, method) (( UIPopupList_t80 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void LanguageSelection::.ctor()
extern "C" void LanguageSelection__ctor_m155 (LanguageSelection_t81 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LanguageSelection::Start()
extern const MethodInfo* Component_GetComponent_TisUIPopupList_t80_m1389_MethodInfo_var;
extern "C" void LanguageSelection_Start_m156 (LanguageSelection_t81 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisUIPopupList_t80_m1389_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		s_Il2CppMethodIntialized = true;
	}
	{
		UIPopupList_t80 * L_0 = Component_GetComponent_TisUIPopupList_t80_m1389(__this, /*hidden argument*/Component_GetComponent_TisUIPopupList_t80_m1389_MethodInfo_var);
		__this->___mList_2 = L_0;
		LanguageSelection_UpdateList_m157(__this, /*hidden argument*/NULL);
		UIPopupList_t80 * L_1 = (__this->___mList_2);
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___eventReceiver_18 = L_2;
		UIPopupList_t80 * L_3 = (__this->___mList_2);
		NullCheck(L_3);
		L_3->___functionName_19 = (String_t*) &_stringLiteral37;
		return;
	}
}
// System.Void LanguageSelection::UpdateList()
extern "C" void LanguageSelection_UpdateList_m157 (LanguageSelection_t81 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextAsset_t289 * V_2 = {0};
	{
		Localization_t161 * L_0 = Localization_get_instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00a4;
		}
	}
	{
		Localization_t161 * L_2 = Localization_get_instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		TextAssetU5BU5D_t162* L_3 = (L_2->___languages_4);
		if (!L_3)
		{
			goto IL_00a4;
		}
	}
	{
		Localization_t161 * L_4 = Localization_get_instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		TextAssetU5BU5D_t162* L_5 = (L_4->___languages_4);
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		UIPopupList_t80 * L_6 = (__this->___mList_2);
		NullCheck(L_6);
		List_1_t129 * L_7 = (L_6->___items_10);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(20 /* System.Void System.Collections.Generic.List`1<System.String>::Clear() */, L_7);
		V_0 = 0;
		Localization_t161 * L_8 = Localization_get_instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		TextAssetU5BU5D_t162* L_9 = (L_8->___languages_4);
		NullCheck(L_9);
		V_1 = (((int32_t)(((Array_t *)L_9)->max_length)));
		goto IL_0088;
	}

IL_0055:
	{
		Localization_t161 * L_10 = Localization_get_instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		TextAssetU5BU5D_t162* L_11 = (L_10->___languages_4);
		int32_t L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		V_2 = (*(TextAsset_t289 **)(TextAsset_t289 **)SZArrayLdElema(L_11, L_13));
		TextAsset_t289 * L_14 = V_2;
		bool L_15 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_14, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0084;
		}
	}
	{
		UIPopupList_t80 * L_16 = (__this->___mList_2);
		NullCheck(L_16);
		List_1_t129 * L_17 = (L_16->___items_10);
		TextAsset_t289 * L_18 = V_2;
		NullCheck(L_18);
		String_t* L_19 = Object_get_name_m1344(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_17, L_19);
	}

IL_0084:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0088:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0055;
		}
	}
	{
		UIPopupList_t80 * L_23 = (__this->___mList_2);
		Localization_t161 * L_24 = Localization_get_instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		String_t* L_25 = Localization_get_currentLanguage_m499(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		UIPopupList_set_selection_m347(L_23, L_25, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		return;
	}
}
// System.Void LanguageSelection::OnLanguageSelection(System.String)
extern "C" void LanguageSelection_OnLanguageSelection_m158 (LanguageSelection_t81 * __this, String_t* ___language, const MethodInfo* method)
{
	{
		Localization_t161 * L_0 = Localization_get_instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Localization_t161 * L_2 = Localization_get_instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = ___language;
		NullCheck(L_2);
		Localization_set_currentLanguage_m500(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// UIButton
#include "AssemblyU2DCSharp_UIButton.h"
#ifndef _MSC_VER
#else
#endif
// UIButton
#include "AssemblyU2DCSharp_UIButtonMethodDeclarations.h"

// UIButtonColor
#include "AssemblyU2DCSharp_UIButtonColor.h"
// TweenColor
#include "AssemblyU2DCSharp_TweenColor.h"
// UIButtonColor
#include "AssemblyU2DCSharp_UIButtonColorMethodDeclarations.h"
// TweenColor
#include "AssemblyU2DCSharp_TweenColorMethodDeclarations.h"


// System.Void UIButton::.ctor()
extern "C" void UIButton__ctor_m159 (UIButton_t82 * __this, const MethodInfo* method)
{
	{
		Color_t25  L_0 = Color_get_grey_m1390(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___disabledColor_9 = L_0;
		UIButtonColor__ctor_m168(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIButton::OnEnable()
extern "C" void UIButton_OnEnable_m160 (UIButton_t82 * __this, const MethodInfo* method)
{
	{
		bool L_0 = UIButton_get_isEnabled_m163(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		UIButtonColor_OnEnable_m172(__this, /*hidden argument*/NULL);
		goto IL_001e;
	}

IL_0016:
	{
		UIButton_UpdateColor_m165(__this, 0, 1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UIButton::OnHover(System.Boolean)
extern "C" void UIButton_OnHover_m161 (UIButton_t82 * __this, bool ___isOver, const MethodInfo* method)
{
	{
		bool L_0 = UIButton_get_isEnabled_m163(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = ___isOver;
		UIButtonColor_OnHover_m176(__this, L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UIButton::OnPress(System.Boolean)
extern "C" void UIButton_OnPress_m162 (UIButton_t82 * __this, bool ___isPressed, const MethodInfo* method)
{
	{
		bool L_0 = UIButton_get_isEnabled_m163(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = ___isPressed;
		UIButtonColor_OnPress_m175(__this, L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean UIButton::get_isEnabled()
extern const MethodInfo* Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var;
extern "C" bool UIButton_get_isEnabled_m163 (UIButton_t82 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		s_Il2CppMethodIntialized = true;
	}
	Collider_t304 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Collider_t304 * L_0 = Component_GetComponent_TisCollider_t304_m1316(__this, /*hidden argument*/Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var);
		V_0 = L_0;
		Collider_t304 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m1391(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Collider_t304 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Collider_get_enabled_m1392(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Void UIButton::set_isEnabled(System.Boolean)
extern const MethodInfo* Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var;
extern "C" void UIButton_set_isEnabled_m164 (UIButton_t82 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		s_Il2CppMethodIntialized = true;
	}
	Collider_t304 * V_0 = {0};
	{
		Collider_t304 * L_0 = Component_GetComponent_TisCollider_t304_m1316(__this, /*hidden argument*/Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var);
		V_0 = L_0;
		Collider_t304 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m1391(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Collider_t304 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Collider_get_enabled_m1392(L_3, /*hidden argument*/NULL);
		bool L_5 = ___value;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002e;
		}
	}
	{
		Collider_t304 * L_6 = V_0;
		bool L_7 = ___value;
		NullCheck(L_6);
		Collider_set_enabled_m1322(L_6, L_7, /*hidden argument*/NULL);
		bool L_8 = ___value;
		UIButton_UpdateColor_m165(__this, L_8, 0, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void UIButton::UpdateColor(System.Boolean,System.Boolean)
extern "C" void UIButton_UpdateColor_m165 (UIButton_t82 * __this, bool ___shouldBeEnabled, bool ___immediate, const MethodInfo* method)
{
	Color_t25  V_0 = {0};
	TweenColor_t199 * V_1 = {0};
	Color_t25  G_B6_0 = {0};
	{
		GameObject_t17 * L_0 = (((UIButtonColor_t83 *)__this)->___tweenTarget_2);
		bool L_1 = Object_op_Implicit_m1391(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		bool L_2 = (((UIButtonColor_t83 *)__this)->___mStarted_7);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		((UIButtonColor_t83 *)__this)->___mStarted_7 = 1;
		UIButtonColor_Init_m174(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		bool L_3 = ___shouldBeEnabled;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		Color_t25  L_4 = UIButtonColor_get_defaultColor_m169(__this, /*hidden argument*/NULL);
		G_B6_0 = L_4;
		goto IL_003f;
	}

IL_0039:
	{
		Color_t25  L_5 = (__this->___disabledColor_9);
		G_B6_0 = L_5;
	}

IL_003f:
	{
		V_0 = G_B6_0;
		GameObject_t17 * L_6 = (((UIButtonColor_t83 *)__this)->___tweenTarget_2);
		Color_t25  L_7 = V_0;
		TweenColor_t199 * L_8 = TweenColor_Begin_m740(NULL /*static, unused*/, L_6, (0.15f), L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		bool L_9 = ___immediate;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		TweenColor_t199 * L_10 = V_1;
		Color_t25  L_11 = V_0;
		NullCheck(L_10);
		TweenColor_set_color_m737(L_10, L_11, /*hidden argument*/NULL);
		TweenColor_t199 * L_12 = V_1;
		NullCheck(L_12);
		Behaviour_set_enabled_m1272(L_12, 0, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// UIButtonActivate
#include "AssemblyU2DCSharp_UIButtonActivate.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonActivate
#include "AssemblyU2DCSharp_UIButtonActivateMethodDeclarations.h"



// System.Void UIButtonActivate::.ctor()
extern "C" void UIButtonActivate__ctor_m166 (UIButtonActivate_t84 * __this, const MethodInfo* method)
{
	{
		__this->___state_3 = 1;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIButtonActivate::OnClick()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIButtonActivate_OnClick_m167 (UIButtonActivate_t84 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t17 * L_0 = (__this->___target_2);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t17 * L_2 = (__this->___target_2);
		bool L_3 = (__this->___state_3);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_SetActive_m576(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Light
#include "UnityEngine_UnityEngine_Light.h"
// UnityEngine.Light
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"
struct GameObject_t17;
struct TweenColor_t199;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TweenColor>()
// !!0 UnityEngine.GameObject::GetComponent<TweenColor>()
#define GameObject_GetComponent_TisTweenColor_t199_m1393(__this, method) (( TweenColor_t199 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m1275_gshared)(__this, method)
struct GameObject_t17;
struct UIWidget_t13;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UIWidget>()
// !!0 UnityEngine.GameObject::GetComponent<UIWidget>()
#define GameObject_GetComponent_TisUIWidget_t13_m1394(__this, method) (( UIWidget_t13 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m1275_gshared)(__this, method)
struct GameObject_t17;
struct Light_t198;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
#define GameObject_GetComponent_TisLight_t198_m1395(__this, method) (( Light_t198 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m1275_gshared)(__this, method)


// System.Void UIButtonColor::.ctor()
extern "C" void UIButtonColor__ctor_m168 (UIButtonColor_t83 * __this, const MethodInfo* method)
{
	{
		Color_t25  L_0 = {0};
		Color__ctor_m1396(&L_0, (0.6f), (1.0f), (0.2f), (1.0f), /*hidden argument*/NULL);
		__this->___hover_3 = L_0;
		Color_t25  L_1 = Color_get_grey_m1390(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pressed_4 = L_1;
		__this->___duration_5 = (0.2f);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color UIButtonColor::get_defaultColor()
extern "C" Color_t25  UIButtonColor_get_defaultColor_m169 (UIButtonColor_t83 * __this, const MethodInfo* method)
{
	{
		UIButtonColor_Start_m171(__this, /*hidden argument*/NULL);
		Color_t25  L_0 = (__this->___mColor_6);
		return L_0;
	}
}
// System.Void UIButtonColor::set_defaultColor(UnityEngine.Color)
extern "C" void UIButtonColor_set_defaultColor_m170 (UIButtonColor_t83 * __this, Color_t25  ___value, const MethodInfo* method)
{
	{
		UIButtonColor_Start_m171(__this, /*hidden argument*/NULL);
		Color_t25  L_0 = ___value;
		__this->___mColor_6 = L_0;
		return;
	}
}
// System.Void UIButtonColor::Start()
extern "C" void UIButtonColor_Start_m171 (UIButtonColor_t83 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___mStarted_7);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		UIButtonColor_Init_m174(__this, /*hidden argument*/NULL);
		__this->___mStarted_7 = 1;
	}

IL_0018:
	{
		return;
	}
}
// System.Void UIButtonColor::OnEnable()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonColor_OnEnable_m172 (UIButtonColor_t83 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___mStarted_7);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___mHighlighted_8);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_3 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void UIButtonColor::OnHover(System.Boolean) */, __this, L_3);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UIButtonColor::OnDisable()
extern const MethodInfo* GameObject_GetComponent_TisTweenColor_t199_m1393_MethodInfo_var;
extern "C" void UIButtonColor_OnDisable_m173 (UIButtonColor_t83 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisTweenColor_t199_m1393_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		s_Il2CppMethodIntialized = true;
	}
	TweenColor_t199 * V_0 = {0};
	{
		bool L_0 = (__this->___mStarted_7);
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___tweenTarget_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___tweenTarget_2);
		NullCheck(L_3);
		TweenColor_t199 * L_4 = GameObject_GetComponent_TisTweenColor_t199_m1393(L_3, /*hidden argument*/GameObject_GetComponent_TisTweenColor_t199_m1393_MethodInfo_var);
		V_0 = L_4;
		TweenColor_t199 * L_5 = V_0;
		bool L_6 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_5, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		TweenColor_t199 * L_7 = V_0;
		Color_t25  L_8 = (__this->___mColor_6);
		NullCheck(L_7);
		TweenColor_set_color_m737(L_7, L_8, /*hidden argument*/NULL);
		TweenColor_t199 * L_9 = V_0;
		NullCheck(L_9);
		Behaviour_set_enabled_m1272(L_9, 0, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void UIButtonColor::Init()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisUIWidget_t13_m1394_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t301_m1298_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisLight_t198_m1395_MethodInfo_var;
extern "C" void UIButtonColor_Init_m174 (UIButtonColor_t83 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		GameObject_GetComponent_TisUIWidget_t13_m1394_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		GameObject_GetComponent_TisRenderer_t301_m1298_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		GameObject_GetComponent_TisLight_t198_m1395_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	UIWidget_t13 * V_0 = {0};
	Renderer_t301 * V_1 = {0};
	Light_t198 * V_2 = {0};
	{
		GameObject_t17 * L_0 = (__this->___tweenTarget_2);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		__this->___tweenTarget_2 = L_2;
	}

IL_001d:
	{
		GameObject_t17 * L_3 = (__this->___tweenTarget_2);
		NullCheck(L_3);
		UIWidget_t13 * L_4 = GameObject_GetComponent_TisUIWidget_t13_m1394(L_3, /*hidden argument*/GameObject_GetComponent_TisUIWidget_t13_m1394_MethodInfo_var);
		V_0 = L_4;
		UIWidget_t13 * L_5 = V_0;
		bool L_6 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_5, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		UIWidget_t13 * L_7 = V_0;
		NullCheck(L_7);
		Color_t25  L_8 = UIWidget_get_color_m672(L_7, /*hidden argument*/NULL);
		__this->___mColor_6 = L_8;
		goto IL_00bf;
	}

IL_0046:
	{
		GameObject_t17 * L_9 = (__this->___tweenTarget_2);
		NullCheck(L_9);
		Renderer_t301 * L_10 = GameObject_GetComponent_TisRenderer_t301_m1298(L_9, /*hidden argument*/GameObject_GetComponent_TisRenderer_t301_m1298_MethodInfo_var);
		V_1 = L_10;
		Renderer_t301 * L_11 = V_1;
		bool L_12 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_11, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		Renderer_t301 * L_13 = V_1;
		NullCheck(L_13);
		Material_t170 * L_14 = Renderer_get_material_m1299(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Color_t25  L_15 = Material_get_color_m1397(L_14, /*hidden argument*/NULL);
		__this->___mColor_6 = L_15;
		goto IL_00bf;
	}

IL_0074:
	{
		GameObject_t17 * L_16 = (__this->___tweenTarget_2);
		NullCheck(L_16);
		Light_t198 * L_17 = GameObject_GetComponent_TisLight_t198_m1395(L_16, /*hidden argument*/GameObject_GetComponent_TisLight_t198_m1395_MethodInfo_var);
		V_2 = L_17;
		Light_t198 * L_18 = V_2;
		bool L_19 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_18, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009d;
		}
	}
	{
		Light_t198 * L_20 = V_2;
		NullCheck(L_20);
		Color_t25  L_21 = Light_get_color_m1398(L_20, /*hidden argument*/NULL);
		__this->___mColor_6 = L_21;
		goto IL_00bf;
	}

IL_009d:
	{
		GameObject_t17 * L_22 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		String_t* L_23 = NGUITools_GetHierarchy_m557(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m1269(NULL /*static, unused*/, L_23, (String_t*) &_stringLiteral38, /*hidden argument*/NULL);
		Debug_LogWarning_m1399(NULL /*static, unused*/, L_24, __this, /*hidden argument*/NULL);
		Behaviour_set_enabled_m1272(__this, 0, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		VirtActionInvoker0::Invoke(4 /* System.Void UIButtonColor::OnEnable() */, __this);
		return;
	}
}
// System.Void UIButtonColor::OnPress(System.Boolean)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonColor_OnPress_m175 (UIButtonColor_t83 * __this, bool ___isPressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	float G_B5_0 = 0.0f;
	GameObject_t17 * G_B5_1 = {0};
	float G_B4_0 = 0.0f;
	GameObject_t17 * G_B4_1 = {0};
	Color_t25  G_B8_0 = {0};
	float G_B8_1 = 0.0f;
	GameObject_t17 * G_B8_2 = {0};
	float G_B7_0 = 0.0f;
	GameObject_t17 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	GameObject_t17 * G_B6_1 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0060;
		}
	}
	{
		bool L_1 = (__this->___mStarted_7);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		UIButtonColor_Start_m171(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		GameObject_t17 * L_2 = (__this->___tweenTarget_2);
		float L_3 = (__this->___duration_5);
		bool L_4 = ___isPressed;
		G_B4_0 = L_3;
		G_B4_1 = L_2;
		if (!L_4)
		{
			G_B5_0 = L_3;
			G_B5_1 = L_2;
			goto IL_0039;
		}
	}
	{
		Color_t25  L_5 = (__this->___pressed_4);
		G_B8_0 = L_5;
		G_B8_1 = G_B4_0;
		G_B8_2 = G_B4_1;
		goto IL_005a;
	}

IL_0039:
	{
		GameObject_t17 * L_6 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_7 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			goto IL_0054;
		}
	}
	{
		Color_t25  L_8 = (__this->___hover_3);
		G_B8_0 = L_8;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_005a;
	}

IL_0054:
	{
		Color_t25  L_9 = (__this->___mColor_6);
		G_B8_0 = L_9;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_005a:
	{
		TweenColor_Begin_m740(NULL /*static, unused*/, G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void UIButtonColor::OnHover(System.Boolean)
extern "C" void UIButtonColor_OnHover_m176 (UIButtonColor_t83 * __this, bool ___isOver, const MethodInfo* method)
{
	float G_B5_0 = 0.0f;
	GameObject_t17 * G_B5_1 = {0};
	float G_B4_0 = 0.0f;
	GameObject_t17 * G_B4_1 = {0};
	Color_t25  G_B6_0 = {0};
	float G_B6_1 = 0.0f;
	GameObject_t17 * G_B6_2 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		bool L_1 = (__this->___mStarted_7);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		UIButtonColor_Start_m171(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		GameObject_t17 * L_2 = (__this->___tweenTarget_2);
		float L_3 = (__this->___duration_5);
		bool L_4 = ___isOver;
		G_B4_0 = L_3;
		G_B4_1 = L_2;
		if (!L_4)
		{
			G_B5_0 = L_3;
			G_B5_1 = L_2;
			goto IL_0039;
		}
	}
	{
		Color_t25  L_5 = (__this->___hover_3);
		G_B6_0 = L_5;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_003f;
	}

IL_0039:
	{
		Color_t25  L_6 = (__this->___mColor_6);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_003f:
	{
		TweenColor_Begin_m740(NULL /*static, unused*/, G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		bool L_7 = ___isOver;
		__this->___mHighlighted_8 = L_7;
	}

IL_004c:
	{
		return;
	}
}
// UIButtonKeyBinding
#include "AssemblyU2DCSharp_UIButtonKeyBinding.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonKeyBinding
#include "AssemblyU2DCSharp_UIButtonKeyBindingMethodDeclarations.h"

// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"


// System.Void UIButtonKeyBinding::.ctor()
extern "C" void UIButtonKeyBinding__ctor_m177 (UIButtonKeyBinding_t85 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIButtonKeyBinding::Update()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t298_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern "C" void UIButtonKeyBinding_Update_m178 (UIButtonKeyBinding_t85 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Input_t298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_0 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___inputHasFocus_33;
		if (L_0)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_1 = (__this->___keyCode_2);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		int32_t L_2 = (__this->___keyCode_2);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t298_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1400(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		bool L_4 = 1;
		Object_t * L_5 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_4);
		Component_SendMessage_m1401(__this, (String_t*) &_stringLiteral39, L_5, 1, /*hidden argument*/NULL);
	}

IL_0038:
	{
		int32_t L_6 = (__this->___keyCode_2);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t298_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetKeyUp_m1308(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		bool L_8 = 0;
		Object_t * L_9 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_8);
		Component_SendMessage_m1401(__this, (String_t*) &_stringLiteral39, L_9, 1, /*hidden argument*/NULL);
		Component_SendMessage_m1402(__this, (String_t*) &_stringLiteral40, 1, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// UIButtonKeys
#include "AssemblyU2DCSharp_UIButtonKeys.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonKeys
#include "AssemblyU2DCSharp_UIButtonKeysMethodDeclarations.h"



// System.Void UIButtonKeys::.ctor()
extern "C" void UIButtonKeys__ctor_m179 (UIButtonKeys_t86 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIButtonKeys::OnEnable()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern "C" void UIButtonKeys_OnEnable_m180 (UIButtonKeys_t86 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___startsSelected_2);
		if (!L_0)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		GameObject_t17 * L_1 = UICamera_get_selectedObject_m833(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Object_op_Equality_m1245(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		GameObject_t17 * L_3 = UICamera_get_selectedObject_m833(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_4 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t17 * L_5 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_003a:
	{
		GameObject_t17 * L_6 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		bool L_7 = 1;
		Object_t * L_8 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_Notify_m849(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral41, L_8, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UIButtonKeys::OnKey(UnityEngine.KeyCode)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t298_il2cpp_TypeInfo_var;
extern "C" void UIButtonKeys_OnKey_m181 (UIButtonKeys_t86 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Input_t298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_022c;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_022c;
		}
	}
	{
		int32_t L_3 = ___key;
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)273))) == 0)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)273))) == 1)
		{
			goto IL_00b8;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)273))) == 2)
		{
			goto IL_006c;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)273))) == 3)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)9))))
		{
			goto IL_00de;
		}
	}
	{
		goto IL_022c;
	}

IL_0046:
	{
		UIButtonKeys_t86 * L_6 = (__this->___selectOnLeft_6);
		bool L_7 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_6, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		UIButtonKeys_t86 * L_8 = (__this->___selectOnLeft_6);
		NullCheck(L_8);
		GameObject_t17 * L_9 = Component_get_gameObject_m1246(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_0067:
	{
		goto IL_022c;
	}

IL_006c:
	{
		UIButtonKeys_t86 * L_10 = (__this->___selectOnRight_7);
		bool L_11 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_10, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008d;
		}
	}
	{
		UIButtonKeys_t86 * L_12 = (__this->___selectOnRight_7);
		NullCheck(L_12);
		GameObject_t17 * L_13 = Component_get_gameObject_m1246(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_008d:
	{
		goto IL_022c;
	}

IL_0092:
	{
		UIButtonKeys_t86 * L_14 = (__this->___selectOnUp_4);
		bool L_15 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_14, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00b3;
		}
	}
	{
		UIButtonKeys_t86 * L_16 = (__this->___selectOnUp_4);
		NullCheck(L_16);
		GameObject_t17 * L_17 = Component_get_gameObject_m1246(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		goto IL_022c;
	}

IL_00b8:
	{
		UIButtonKeys_t86 * L_18 = (__this->___selectOnDown_5);
		bool L_19 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_18, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00d9;
		}
	}
	{
		UIButtonKeys_t86 * L_20 = (__this->___selectOnDown_5);
		NullCheck(L_20);
		GameObject_t17 * L_21 = Component_get_gameObject_m1246(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		goto IL_022c;
	}

IL_00de:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t298_il2cpp_TypeInfo_var);
		bool L_22 = Input_GetKey_m1403(NULL /*static, unused*/, ((int32_t)304), /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t298_il2cpp_TypeInfo_var);
		bool L_23 = Input_GetKey_m1403(NULL /*static, unused*/, ((int32_t)303), /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0194;
		}
	}

IL_00fc:
	{
		UIButtonKeys_t86 * L_24 = (__this->___selectOnLeft_6);
		bool L_25 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_24, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0122;
		}
	}
	{
		UIButtonKeys_t86 * L_26 = (__this->___selectOnLeft_6);
		NullCheck(L_26);
		GameObject_t17 * L_27 = Component_get_gameObject_m1246(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		goto IL_018f;
	}

IL_0122:
	{
		UIButtonKeys_t86 * L_28 = (__this->___selectOnUp_4);
		bool L_29 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_28, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0148;
		}
	}
	{
		UIButtonKeys_t86 * L_30 = (__this->___selectOnUp_4);
		NullCheck(L_30);
		GameObject_t17 * L_31 = Component_get_gameObject_m1246(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		goto IL_018f;
	}

IL_0148:
	{
		UIButtonKeys_t86 * L_32 = (__this->___selectOnDown_5);
		bool L_33 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_32, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_016e;
		}
	}
	{
		UIButtonKeys_t86 * L_34 = (__this->___selectOnDown_5);
		NullCheck(L_34);
		GameObject_t17 * L_35 = Component_get_gameObject_m1246(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		goto IL_018f;
	}

IL_016e:
	{
		UIButtonKeys_t86 * L_36 = (__this->___selectOnRight_7);
		bool L_37 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_36, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_018f;
		}
	}
	{
		UIButtonKeys_t86 * L_38 = (__this->___selectOnRight_7);
		NullCheck(L_38);
		GameObject_t17 * L_39 = Component_get_gameObject_m1246(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
	}

IL_018f:
	{
		goto IL_0227;
	}

IL_0194:
	{
		UIButtonKeys_t86 * L_40 = (__this->___selectOnRight_7);
		bool L_41 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_40, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_01ba;
		}
	}
	{
		UIButtonKeys_t86 * L_42 = (__this->___selectOnRight_7);
		NullCheck(L_42);
		GameObject_t17 * L_43 = Component_get_gameObject_m1246(L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		goto IL_0227;
	}

IL_01ba:
	{
		UIButtonKeys_t86 * L_44 = (__this->___selectOnDown_5);
		bool L_45 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_44, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01e0;
		}
	}
	{
		UIButtonKeys_t86 * L_46 = (__this->___selectOnDown_5);
		NullCheck(L_46);
		GameObject_t17 * L_47 = Component_get_gameObject_m1246(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		goto IL_0227;
	}

IL_01e0:
	{
		UIButtonKeys_t86 * L_48 = (__this->___selectOnUp_4);
		bool L_49 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_48, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0206;
		}
	}
	{
		UIButtonKeys_t86 * L_50 = (__this->___selectOnUp_4);
		NullCheck(L_50);
		GameObject_t17 * L_51 = Component_get_gameObject_m1246(L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		goto IL_0227;
	}

IL_0206:
	{
		UIButtonKeys_t86 * L_52 = (__this->___selectOnLeft_6);
		bool L_53 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_52, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0227;
		}
	}
	{
		UIButtonKeys_t86 * L_54 = (__this->___selectOnLeft_6);
		NullCheck(L_54);
		GameObject_t17 * L_55 = Component_get_gameObject_m1246(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
	}

IL_0227:
	{
		goto IL_022c;
	}

IL_022c:
	{
		return;
	}
}
// System.Void UIButtonKeys::OnClick()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonKeys_OnClick_m182 (UIButtonKeys_t86 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		UIButtonKeys_t86 * L_1 = (__this->___selectOnClick_3);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		UIButtonKeys_t86 * L_3 = (__this->___selectOnClick_3);
		NullCheck(L_3);
		GameObject_t17 * L_4 = Component_get_gameObject_m1246(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// UIButtonMessage/Trigger
#include "AssemblyU2DCSharp_UIButtonMessage_Trigger.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonMessage/Trigger
#include "AssemblyU2DCSharp_UIButtonMessage_TriggerMethodDeclarations.h"



// UIButtonMessage
#include "AssemblyU2DCSharp_UIButtonMessage.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonMessage
#include "AssemblyU2DCSharp_UIButtonMessageMethodDeclarations.h"

struct GameObject_t17;
struct TransformU5BU5D_t312;
struct GameObject_t17;
struct ObjectU5BU5D_t300;
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t300* GameObject_GetComponentsInChildren_TisObject_t_m1405_gshared (GameObject_t17 * __this, const MethodInfo* method);
#define GameObject_GetComponentsInChildren_TisObject_t_m1405(__this, method) (( ObjectU5BU5D_t300* (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m1405_gshared)(__this, method)
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Transform>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Transform>()
#define GameObject_GetComponentsInChildren_TisTransform_t8_m1404(__this, method) (( TransformU5BU5D_t312* (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m1405_gshared)(__this, method)


// System.Void UIButtonMessage::.ctor()
extern "C" void UIButtonMessage__ctor_m183 (UIButtonMessage_t88 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIButtonMessage::Start()
extern "C" void UIButtonMessage_Start_m184 (UIButtonMessage_t88 * __this, const MethodInfo* method)
{
	{
		__this->___mStarted_6 = 1;
		return;
	}
}
// System.Void UIButtonMessage::OnEnable()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonMessage_OnEnable_m185 (UIButtonMessage_t88 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___mStarted_6);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___mHighlighted_7);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_3 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		UIButtonMessage_OnHover_m186(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UIButtonMessage::OnHover(System.Boolean)
extern "C" void UIButtonMessage_OnHover_m186 (UIButtonMessage_t88 * __this, bool ___isOver, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		bool L_1 = ___isOver;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_4);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}

IL_001d:
	{
		bool L_3 = ___isOver;
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = (__this->___trigger_4);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		UIButtonMessage_Send_m190(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		bool L_5 = ___isOver;
		__this->___mHighlighted_7 = L_5;
	}

IL_003c:
	{
		return;
	}
}
// System.Void UIButtonMessage::OnPress(System.Boolean)
extern "C" void UIButtonMessage_OnPress_m187 (UIButtonMessage_t88 * __this, bool ___isPressed, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		bool L_1 = ___isPressed;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_4);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_002f;
		}
	}

IL_001d:
	{
		bool L_3 = ___isPressed;
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = (__this->___trigger_4);
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		UIButtonMessage_Send_m190(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void UIButtonMessage::OnClick()
extern "C" void UIButtonMessage_OnClick_m188 (UIButtonMessage_t88 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		UIButtonMessage_Send_m190(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UIButtonMessage::OnDoubleClick()
extern "C" void UIButtonMessage_OnDoubleClick_m189 (UIButtonMessage_t88 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_001d;
		}
	}
	{
		UIButtonMessage_Send_m190(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UIButtonMessage::Send()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponentsInChildren_TisTransform_t8_m1404_MethodInfo_var;
extern "C" void UIButtonMessage_Send_m190 (UIButtonMessage_t88 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		GameObject_GetComponentsInChildren_TisTransform_t8_m1404_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		s_Il2CppMethodIntialized = true;
	}
	TransformU5BU5D_t312* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Transform_t8 * V_3 = {0};
	{
		String_t* L_0 = (__this->___functionName_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		GameObject_t17 * L_2 = (__this->___target_2);
		bool L_3 = Object_op_Equality_m1245(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t17 * L_4 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		__this->___target_2 = L_4;
	}

IL_002e:
	{
		bool L_5 = (__this->___includeChildren_5);
		if (!L_5)
		{
			goto IL_007c;
		}
	}
	{
		GameObject_t17 * L_6 = (__this->___target_2);
		NullCheck(L_6);
		TransformU5BU5D_t312* L_7 = GameObject_GetComponentsInChildren_TisTransform_t8_m1404(L_6, /*hidden argument*/GameObject_GetComponentsInChildren_TisTransform_t8_m1404_MethodInfo_var);
		V_0 = L_7;
		V_1 = 0;
		TransformU5BU5D_t312* L_8 = V_0;
		NullCheck(L_8);
		V_2 = (((int32_t)(((Array_t *)L_8)->max_length)));
		goto IL_0070;
	}

IL_0050:
	{
		TransformU5BU5D_t312* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_3 = (*(Transform_t8 **)(Transform_t8 **)SZArrayLdElema(L_9, L_11));
		Transform_t8 * L_12 = V_3;
		NullCheck(L_12);
		GameObject_t17 * L_13 = Component_get_gameObject_m1246(L_12, /*hidden argument*/NULL);
		String_t* L_14 = (__this->___functionName_3);
		GameObject_t17 * L_15 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SendMessage_m1406(L_13, L_14, L_15, 1, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0070:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0050;
		}
	}
	{
		goto IL_0094;
	}

IL_007c:
	{
		GameObject_t17 * L_19 = (__this->___target_2);
		String_t* L_20 = (__this->___functionName_3);
		GameObject_t17 * L_21 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SendMessage_m1406(L_19, L_20, L_21, 1, /*hidden argument*/NULL);
	}

IL_0094:
	{
		return;
	}
}
// UIButtonOffset
#include "AssemblyU2DCSharp_UIButtonOffset.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonOffset
#include "AssemblyU2DCSharp_UIButtonOffsetMethodDeclarations.h"

// TweenPosition
#include "AssemblyU2DCSharp_TweenPosition.h"
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// UITweener/Method
#include "AssemblyU2DCSharp_UITweener_Method.h"
// TweenPosition
#include "AssemblyU2DCSharp_TweenPositionMethodDeclarations.h"
struct Component_t107;
struct TweenPosition_t202;
// Declaration !!0 UnityEngine.Component::GetComponent<TweenPosition>()
// !!0 UnityEngine.Component::GetComponent<TweenPosition>()
#define Component_GetComponent_TisTweenPosition_t202_m1407(__this, method) (( TweenPosition_t202 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void UIButtonOffset::.ctor()
extern "C" void UIButtonOffset__ctor_m191 (UIButtonOffset_t89 * __this, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___hover_3 = L_0;
		Vector3_t48  L_1 = {0};
		Vector3__ctor_m1408(&L_1, (2.0f), (-2.0f), /*hidden argument*/NULL);
		__this->___pressed_4 = L_1;
		__this->___duration_5 = (0.2f);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIButtonOffset::Start()
extern "C" void UIButtonOffset_Start_m192 (UIButtonOffset_t89 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___mStarted_7);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		__this->___mStarted_7 = 1;
		Transform_t8 * L_1 = (__this->___tweenTarget_2);
		bool L_2 = Object_op_Equality_m1245(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Transform_t8 * L_3 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___tweenTarget_2 = L_3;
	}

IL_002f:
	{
		Transform_t8 * L_4 = (__this->___tweenTarget_2);
		NullCheck(L_4);
		Vector3_t48  L_5 = Transform_get_localPosition_m1263(L_4, /*hidden argument*/NULL);
		__this->___mPos_6 = L_5;
	}

IL_0040:
	{
		return;
	}
}
// System.Void UIButtonOffset::OnEnable()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonOffset_OnEnable_m193 (UIButtonOffset_t89 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___mStarted_7);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___mHighlighted_8);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_3 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		UIButtonOffset_OnHover_m196(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UIButtonOffset::OnDisable()
extern const MethodInfo* Component_GetComponent_TisTweenPosition_t202_m1407_MethodInfo_var;
extern "C" void UIButtonOffset_OnDisable_m194 (UIButtonOffset_t89 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisTweenPosition_t202_m1407_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		s_Il2CppMethodIntialized = true;
	}
	TweenPosition_t202 * V_0 = {0};
	{
		bool L_0 = (__this->___mStarted_7);
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		Transform_t8 * L_1 = (__this->___tweenTarget_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Transform_t8 * L_3 = (__this->___tweenTarget_2);
		NullCheck(L_3);
		TweenPosition_t202 * L_4 = Component_GetComponent_TisTweenPosition_t202_m1407(L_3, /*hidden argument*/Component_GetComponent_TisTweenPosition_t202_m1407_MethodInfo_var);
		V_0 = L_4;
		TweenPosition_t202 * L_5 = V_0;
		bool L_6 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_5, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		TweenPosition_t202 * L_7 = V_0;
		Vector3_t48  L_8 = (__this->___mPos_6);
		NullCheck(L_7);
		TweenPosition_set_position_m756(L_7, L_8, /*hidden argument*/NULL);
		TweenPosition_t202 * L_9 = V_0;
		NullCheck(L_9);
		Behaviour_set_enabled_m1272(L_9, 0, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void UIButtonOffset::OnPress(System.Boolean)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonOffset_OnPress_m195 (UIButtonOffset_t89 * __this, bool ___isPressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	float G_B5_0 = 0.0f;
	GameObject_t17 * G_B5_1 = {0};
	float G_B4_0 = 0.0f;
	GameObject_t17 * G_B4_1 = {0};
	Vector3_t48  G_B8_0 = {0};
	float G_B8_1 = 0.0f;
	GameObject_t17 * G_B8_2 = {0};
	float G_B7_0 = 0.0f;
	GameObject_t17 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	GameObject_t17 * G_B6_1 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		bool L_1 = (__this->___mStarted_7);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		UIButtonOffset_Start_m192(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Transform_t8 * L_2 = (__this->___tweenTarget_2);
		NullCheck(L_2);
		GameObject_t17 * L_3 = Component_get_gameObject_m1246(L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___duration_5);
		bool L_5 = ___isPressed;
		G_B4_0 = L_4;
		G_B4_1 = L_3;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = L_3;
			goto IL_0049;
		}
	}
	{
		Vector3_t48  L_6 = (__this->___mPos_6);
		Vector3_t48  L_7 = (__this->___pressed_4);
		Vector3_t48  L_8 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B4_0;
		G_B8_2 = G_B4_1;
		goto IL_0075;
	}

IL_0049:
	{
		GameObject_t17 * L_9 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_10 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		if (!L_10)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			goto IL_006f;
		}
	}
	{
		Vector3_t48  L_11 = (__this->___mPos_6);
		Vector3_t48  L_12 = (__this->___hover_3);
		Vector3_t48  L_13 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		G_B8_0 = L_13;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0075;
	}

IL_006f:
	{
		Vector3_t48  L_14 = (__this->___mPos_6);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0075:
	{
		TweenPosition_t202 * L_15 = TweenPosition_Begin_m758(NULL /*static, unused*/, G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/NULL);
		NullCheck(L_15);
		((UITweener_t197 *)L_15)->___method_8 = 3;
	}

IL_0080:
	{
		return;
	}
}
// System.Void UIButtonOffset::OnHover(System.Boolean)
extern "C" void UIButtonOffset_OnHover_m196 (UIButtonOffset_t89 * __this, bool ___isOver, const MethodInfo* method)
{
	float G_B5_0 = 0.0f;
	GameObject_t17 * G_B5_1 = {0};
	float G_B4_0 = 0.0f;
	GameObject_t17 * G_B4_1 = {0};
	Vector3_t48  G_B6_0 = {0};
	float G_B6_1 = 0.0f;
	GameObject_t17 * G_B6_2 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		bool L_1 = (__this->___mStarted_7);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		UIButtonOffset_Start_m192(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Transform_t8 * L_2 = (__this->___tweenTarget_2);
		NullCheck(L_2);
		GameObject_t17 * L_3 = Component_get_gameObject_m1246(L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___duration_5);
		bool L_5 = ___isOver;
		G_B4_0 = L_4;
		G_B4_1 = L_3;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = L_3;
			goto IL_0049;
		}
	}
	{
		Vector3_t48  L_6 = (__this->___mPos_6);
		Vector3_t48  L_7 = (__this->___hover_3);
		Vector3_t48  L_8 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_004f;
	}

IL_0049:
	{
		Vector3_t48  L_9 = (__this->___mPos_6);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_004f:
	{
		TweenPosition_t202 * L_10 = TweenPosition_Begin_m758(NULL /*static, unused*/, G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		NullCheck(L_10);
		((UITweener_t197 *)L_10)->___method_8 = 3;
		bool L_11 = ___isOver;
		__this->___mHighlighted_8 = L_11;
	}

IL_0061:
	{
		return;
	}
}
// UIButtonPlayAnimation
#include "AssemblyU2DCSharp_UIButtonPlayAnimation.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonPlayAnimation
#include "AssemblyU2DCSharp_UIButtonPlayAnimationMethodDeclarations.h"

// AnimationOrTween.Direction
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
// AnimationOrTween.Trigger
#include "AssemblyU2DCSharp_AnimationOrTween_Trigger.h"
// ActiveAnimation
#include "AssemblyU2DCSharp_ActiveAnimation.h"
// AnimationOrTween.EnableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition.h"
// AnimationOrTween.DisableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition.h"
// ActiveAnimation/OnFinished
#include "AssemblyU2DCSharp_ActiveAnimation_OnFinished.h"
// ActiveAnimation
#include "AssemblyU2DCSharp_ActiveAnimationMethodDeclarations.h"


// System.Void UIButtonPlayAnimation::.ctor()
extern "C" void UIButtonPlayAnimation__ctor_m197 (UIButtonPlayAnimation_t91 * __this, const MethodInfo* method)
{
	{
		__this->___playDirection_5 = 1;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIButtonPlayAnimation::Start()
extern "C" void UIButtonPlayAnimation_Start_m198 (UIButtonPlayAnimation_t91 * __this, const MethodInfo* method)
{
	{
		__this->___mStarted_13 = 1;
		return;
	}
}
// System.Void UIButtonPlayAnimation::OnEnable()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonPlayAnimation_OnEnable_m199 (UIButtonPlayAnimation_t91 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___mStarted_13);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___mHighlighted_14);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_3 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		UIButtonPlayAnimation_OnHover_m200(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UIButtonPlayAnimation::OnHover(System.Boolean)
extern "C" void UIButtonPlayAnimation_OnHover_m200 (UIButtonPlayAnimation_t91 * __this, bool ___isOver, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_4);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_3 = ___isOver;
		if (L_3)
		{
			goto IL_003b;
		}
	}

IL_0029:
	{
		int32_t L_4 = (__this->___trigger_4);
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0042;
		}
	}
	{
		bool L_5 = ___isOver;
		if (L_5)
		{
			goto IL_0042;
		}
	}

IL_003b:
	{
		bool L_6 = ___isOver;
		UIButtonPlayAnimation_Play_m206(__this, L_6, /*hidden argument*/NULL);
	}

IL_0042:
	{
		bool L_7 = ___isOver;
		__this->___mHighlighted_14 = L_7;
	}

IL_0049:
	{
		return;
	}
}
// System.Void UIButtonPlayAnimation::OnPress(System.Boolean)
extern "C" void UIButtonPlayAnimation_OnPress_m201 (UIButtonPlayAnimation_t91 * __this, bool ___isPressed, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_4);
		if ((!(((uint32_t)L_2) == ((uint32_t)5))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_3 = ___isPressed;
		if (L_3)
		{
			goto IL_003b;
		}
	}

IL_0029:
	{
		int32_t L_4 = (__this->___trigger_4);
		if ((!(((uint32_t)L_4) == ((uint32_t)6))))
		{
			goto IL_0042;
		}
	}
	{
		bool L_5 = ___isPressed;
		if (L_5)
		{
			goto IL_0042;
		}
	}

IL_003b:
	{
		bool L_6 = ___isPressed;
		UIButtonPlayAnimation_Play_m206(__this, L_6, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UIButtonPlayAnimation::OnClick()
extern "C" void UIButtonPlayAnimation_OnClick_m202 (UIButtonPlayAnimation_t91 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		UIButtonPlayAnimation_Play_m206(__this, 1, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UIButtonPlayAnimation::OnDoubleClick()
extern "C" void UIButtonPlayAnimation_OnDoubleClick_m203 (UIButtonPlayAnimation_t91 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_001f;
		}
	}
	{
		UIButtonPlayAnimation_Play_m206(__this, 1, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UIButtonPlayAnimation::OnSelect(System.Boolean)
extern "C" void UIButtonPlayAnimation_OnSelect_m204 (UIButtonPlayAnimation_t91 * __this, bool ___isSelected, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_4);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_002b;
		}
	}
	{
		bool L_3 = ___isSelected;
		if (L_3)
		{
			goto IL_003e;
		}
	}

IL_002b:
	{
		int32_t L_4 = (__this->___trigger_4);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0045;
		}
	}
	{
		bool L_5 = ___isSelected;
		if (L_5)
		{
			goto IL_0045;
		}
	}

IL_003e:
	{
		UIButtonPlayAnimation_Play_m206(__this, 1, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void UIButtonPlayAnimation::OnActivate(System.Boolean)
extern "C" void UIButtonPlayAnimation_OnActivate_m205 (UIButtonPlayAnimation_t91 * __this, bool ___isActive, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if ((((int32_t)L_1) == ((int32_t)7)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_4);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_3 = ___isActive;
		if (L_3)
		{
			goto IL_003c;
		}
	}

IL_0029:
	{
		int32_t L_4 = (__this->___trigger_4);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_5 = ___isActive;
		if (L_5)
		{
			goto IL_0043;
		}
	}

IL_003c:
	{
		bool L_6 = ___isActive;
		UIButtonPlayAnimation_Play_m206(__this, L_6, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UIButtonPlayAnimation::Play(System.Boolean)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisAnimation_t56_m1341_MethodInfo_var;
extern "C" void UIButtonPlayAnimation_Play_m206 (UIButtonPlayAnimation_t91 * __this, bool ___forward, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Component_GetComponentInChildren_TisAnimation_t56_m1341_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483671);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	ActiveAnimation_t146 * V_2 = {0};
	int32_t G_B9_0 = 0;
	{
		Animation_t56 * L_0 = (__this->___target_2);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Animation_t56 * L_2 = Component_GetComponentInChildren_TisAnimation_t56_m1341(__this, /*hidden argument*/Component_GetComponentInChildren_TisAnimation_t56_m1341_MethodInfo_var);
		__this->___target_2 = L_2;
	}

IL_001d:
	{
		Animation_t56 * L_3 = (__this->___target_2);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00fd;
		}
	}
	{
		bool L_5 = (__this->___clearSelection_7);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		GameObject_t17 * L_6 = UICamera_get_selectedObject_m833(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t17 * L_7 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		bool L_8 = Object_op_Equality_m1245(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_set_selectedObject_m834(NULL /*static, unused*/, (GameObject_t17 *)NULL, /*hidden argument*/NULL);
	}

IL_0054:
	{
		int32_t L_9 = (__this->___playDirection_5);
		V_0 = ((-L_9));
		bool L_10 = ___forward;
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_11 = (__this->___playDirection_5);
		G_B9_0 = ((int32_t)(L_11));
		goto IL_006e;
	}

IL_006d:
	{
		int32_t L_12 = V_0;
		G_B9_0 = L_12;
	}

IL_006e:
	{
		V_1 = G_B9_0;
		Animation_t56 * L_13 = (__this->___target_2);
		String_t* L_14 = (__this->___clipName_3);
		int32_t L_15 = V_1;
		int32_t L_16 = (__this->___ifDisabledOnPlay_8);
		int32_t L_17 = (__this->___disableWhenFinished_9);
		ActiveAnimation_t146 * L_18 = ActiveAnimation_Play_m451(NULL /*static, unused*/, L_13, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		ActiveAnimation_t146 * L_19 = V_2;
		bool L_20 = Object_op_Equality_m1245(NULL /*static, unused*/, L_19, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_009b;
		}
	}
	{
		return;
	}

IL_009b:
	{
		bool L_21 = (__this->___resetOnPlay_6);
		if (!L_21)
		{
			goto IL_00ac;
		}
	}
	{
		ActiveAnimation_t146 * L_22 = V_2;
		NullCheck(L_22);
		ActiveAnimation_Reset_m448(L_22, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		ActiveAnimation_t146 * L_23 = V_2;
		OnFinished_t90 * L_24 = (__this->___onFinished_12);
		NullCheck(L_23);
		L_23->___onFinished_7 = L_24;
		GameObject_t17 * L_25 = (__this->___eventReceiver_10);
		bool L_26 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_25, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00f6;
		}
	}
	{
		String_t* L_27 = (__this->___callWhenFinished_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00f6;
		}
	}
	{
		ActiveAnimation_t146 * L_29 = V_2;
		GameObject_t17 * L_30 = (__this->___eventReceiver_10);
		NullCheck(L_29);
		L_29->___eventReceiver_8 = L_30;
		ActiveAnimation_t146 * L_31 = V_2;
		String_t* L_32 = (__this->___callWhenFinished_11);
		NullCheck(L_31);
		L_31->___callWhenFinished_9 = L_32;
		goto IL_00fd;
	}

IL_00f6:
	{
		ActiveAnimation_t146 * L_33 = V_2;
		NullCheck(L_33);
		L_33->___eventReceiver_8 = (GameObject_t17 *)NULL;
	}

IL_00fd:
	{
		return;
	}
}
// UIButtonRotation
#include "AssemblyU2DCSharp_UIButtonRotation.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonRotation
#include "AssemblyU2DCSharp_UIButtonRotationMethodDeclarations.h"

// TweenRotation
#include "AssemblyU2DCSharp_TweenRotation.h"
// TweenRotation
#include "AssemblyU2DCSharp_TweenRotationMethodDeclarations.h"
struct Component_t107;
struct TweenRotation_t203;
// Declaration !!0 UnityEngine.Component::GetComponent<TweenRotation>()
// !!0 UnityEngine.Component::GetComponent<TweenRotation>()
#define Component_GetComponent_TisTweenRotation_t203_m1409(__this, method) (( TweenRotation_t203 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void UIButtonRotation::.ctor()
extern "C" void UIButtonRotation__ctor_m207 (UIButtonRotation_t92 * __this, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___hover_3 = L_0;
		Vector3_t48  L_1 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___pressed_4 = L_1;
		__this->___duration_5 = (0.2f);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIButtonRotation::Start()
extern "C" void UIButtonRotation_Start_m208 (UIButtonRotation_t92 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___mStarted_7);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		__this->___mStarted_7 = 1;
		Transform_t8 * L_1 = (__this->___tweenTarget_2);
		bool L_2 = Object_op_Equality_m1245(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Transform_t8 * L_3 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___tweenTarget_2 = L_3;
	}

IL_002f:
	{
		Transform_t8 * L_4 = (__this->___tweenTarget_2);
		NullCheck(L_4);
		Quaternion_t50  L_5 = Transform_get_localRotation_m1331(L_4, /*hidden argument*/NULL);
		__this->___mRot_6 = L_5;
	}

IL_0040:
	{
		return;
	}
}
// System.Void UIButtonRotation::OnEnable()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonRotation_OnEnable_m209 (UIButtonRotation_t92 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___mStarted_7);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___mHighlighted_8);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_3 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		UIButtonRotation_OnHover_m212(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UIButtonRotation::OnDisable()
extern const MethodInfo* Component_GetComponent_TisTweenRotation_t203_m1409_MethodInfo_var;
extern "C" void UIButtonRotation_OnDisable_m210 (UIButtonRotation_t92 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisTweenRotation_t203_m1409_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		s_Il2CppMethodIntialized = true;
	}
	TweenRotation_t203 * V_0 = {0};
	{
		bool L_0 = (__this->___mStarted_7);
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		Transform_t8 * L_1 = (__this->___tweenTarget_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Transform_t8 * L_3 = (__this->___tweenTarget_2);
		NullCheck(L_3);
		TweenRotation_t203 * L_4 = Component_GetComponent_TisTweenRotation_t203_m1409(L_3, /*hidden argument*/Component_GetComponent_TisTweenRotation_t203_m1409_MethodInfo_var);
		V_0 = L_4;
		TweenRotation_t203 * L_5 = V_0;
		bool L_6 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_5, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		TweenRotation_t203 * L_7 = V_0;
		Quaternion_t50  L_8 = (__this->___mRot_6);
		NullCheck(L_7);
		TweenRotation_set_rotation_m762(L_7, L_8, /*hidden argument*/NULL);
		TweenRotation_t203 * L_9 = V_0;
		NullCheck(L_9);
		Behaviour_set_enabled_m1272(L_9, 0, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void UIButtonRotation::OnPress(System.Boolean)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonRotation_OnPress_m211 (UIButtonRotation_t92 * __this, bool ___isPressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	float G_B5_0 = 0.0f;
	GameObject_t17 * G_B5_1 = {0};
	float G_B4_0 = 0.0f;
	GameObject_t17 * G_B4_1 = {0};
	Quaternion_t50  G_B8_0 = {0};
	float G_B8_1 = 0.0f;
	GameObject_t17 * G_B8_2 = {0};
	float G_B7_0 = 0.0f;
	GameObject_t17 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	GameObject_t17 * G_B6_1 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_008a;
		}
	}
	{
		bool L_1 = (__this->___mStarted_7);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		UIButtonRotation_Start_m208(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Transform_t8 * L_2 = (__this->___tweenTarget_2);
		NullCheck(L_2);
		GameObject_t17 * L_3 = Component_get_gameObject_m1246(L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___duration_5);
		bool L_5 = ___isPressed;
		G_B4_0 = L_4;
		G_B4_1 = L_3;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = L_3;
			goto IL_004e;
		}
	}
	{
		Quaternion_t50  L_6 = (__this->___mRot_6);
		Vector3_t48  L_7 = (__this->___pressed_4);
		Quaternion_t50  L_8 = Quaternion_Euler_m1363(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Quaternion_t50  L_9 = Quaternion_op_Multiply_m1328(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B4_0;
		G_B8_2 = G_B4_1;
		goto IL_007f;
	}

IL_004e:
	{
		GameObject_t17 * L_10 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_11 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		if (!L_11)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			goto IL_0079;
		}
	}
	{
		Quaternion_t50  L_12 = (__this->___mRot_6);
		Vector3_t48  L_13 = (__this->___hover_3);
		Quaternion_t50  L_14 = Quaternion_Euler_m1363(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Quaternion_t50  L_15 = Quaternion_op_Multiply_m1328(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		G_B8_0 = L_15;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_007f;
	}

IL_0079:
	{
		Quaternion_t50  L_16 = (__this->___mRot_6);
		G_B8_0 = L_16;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_007f:
	{
		TweenRotation_t203 * L_17 = TweenRotation_Begin_m764(NULL /*static, unused*/, G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/NULL);
		NullCheck(L_17);
		((UITweener_t197 *)L_17)->___method_8 = 3;
	}

IL_008a:
	{
		return;
	}
}
// System.Void UIButtonRotation::OnHover(System.Boolean)
extern "C" void UIButtonRotation_OnHover_m212 (UIButtonRotation_t92 * __this, bool ___isOver, const MethodInfo* method)
{
	float G_B5_0 = 0.0f;
	GameObject_t17 * G_B5_1 = {0};
	float G_B4_0 = 0.0f;
	GameObject_t17 * G_B4_1 = {0};
	Quaternion_t50  G_B6_0 = {0};
	float G_B6_1 = 0.0f;
	GameObject_t17 * G_B6_2 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		bool L_1 = (__this->___mStarted_7);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		UIButtonRotation_Start_m208(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Transform_t8 * L_2 = (__this->___tweenTarget_2);
		NullCheck(L_2);
		GameObject_t17 * L_3 = Component_get_gameObject_m1246(L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___duration_5);
		bool L_5 = ___isOver;
		G_B4_0 = L_4;
		G_B4_1 = L_3;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = L_3;
			goto IL_004e;
		}
	}
	{
		Quaternion_t50  L_6 = (__this->___mRot_6);
		Vector3_t48  L_7 = (__this->___hover_3);
		Quaternion_t50  L_8 = Quaternion_Euler_m1363(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Quaternion_t50  L_9 = Quaternion_op_Multiply_m1328(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0054;
	}

IL_004e:
	{
		Quaternion_t50  L_10 = (__this->___mRot_6);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0054:
	{
		TweenRotation_t203 * L_11 = TweenRotation_Begin_m764(NULL /*static, unused*/, G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		NullCheck(L_11);
		((UITweener_t197 *)L_11)->___method_8 = 3;
		bool L_12 = ___isOver;
		__this->___mHighlighted_8 = L_12;
	}

IL_0066:
	{
		return;
	}
}
// UIButtonScale
#include "AssemblyU2DCSharp_UIButtonScale.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonScale
#include "AssemblyU2DCSharp_UIButtonScaleMethodDeclarations.h"

// TweenScale
#include "AssemblyU2DCSharp_TweenScale.h"
// TweenScale
#include "AssemblyU2DCSharp_TweenScaleMethodDeclarations.h"
struct Component_t107;
struct TweenScale_t204;
// Declaration !!0 UnityEngine.Component::GetComponent<TweenScale>()
// !!0 UnityEngine.Component::GetComponent<TweenScale>()
#define Component_GetComponent_TisTweenScale_t204_m1410(__this, method) (( TweenScale_t204 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void UIButtonScale::.ctor()
extern "C" void UIButtonScale__ctor_m213 (UIButtonScale_t93 * __this, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = {0};
		Vector3__ctor_m1278(&L_0, (1.1f), (1.1f), (1.1f), /*hidden argument*/NULL);
		__this->___hover_3 = L_0;
		Vector3_t48  L_1 = {0};
		Vector3__ctor_m1278(&L_1, (1.05f), (1.05f), (1.05f), /*hidden argument*/NULL);
		__this->___pressed_4 = L_1;
		__this->___duration_5 = (0.2f);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIButtonScale::Start()
extern "C" void UIButtonScale_Start_m214 (UIButtonScale_t93 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___mStarted_7);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		__this->___mStarted_7 = 1;
		Transform_t8 * L_1 = (__this->___tweenTarget_2);
		bool L_2 = Object_op_Equality_m1245(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Transform_t8 * L_3 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___tweenTarget_2 = L_3;
	}

IL_002f:
	{
		Transform_t8 * L_4 = (__this->___tweenTarget_2);
		NullCheck(L_4);
		Vector3_t48  L_5 = Transform_get_localScale_m1264(L_4, /*hidden argument*/NULL);
		__this->___mScale_6 = L_5;
	}

IL_0040:
	{
		return;
	}
}
// System.Void UIButtonScale::OnEnable()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonScale_OnEnable_m215 (UIButtonScale_t93 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___mStarted_7);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___mHighlighted_8);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_3 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		UIButtonScale_OnHover_m218(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UIButtonScale::OnDisable()
extern const MethodInfo* Component_GetComponent_TisTweenScale_t204_m1410_MethodInfo_var;
extern "C" void UIButtonScale_OnDisable_m216 (UIButtonScale_t93 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisTweenScale_t204_m1410_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		s_Il2CppMethodIntialized = true;
	}
	TweenScale_t204 * V_0 = {0};
	{
		bool L_0 = (__this->___mStarted_7);
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		Transform_t8 * L_1 = (__this->___tweenTarget_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Transform_t8 * L_3 = (__this->___tweenTarget_2);
		NullCheck(L_3);
		TweenScale_t204 * L_4 = Component_GetComponent_TisTweenScale_t204_m1410(L_3, /*hidden argument*/Component_GetComponent_TisTweenScale_t204_m1410_MethodInfo_var);
		V_0 = L_4;
		TweenScale_t204 * L_5 = V_0;
		bool L_6 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_5, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		TweenScale_t204 * L_7 = V_0;
		Vector3_t48  L_8 = (__this->___mScale_6);
		NullCheck(L_7);
		TweenScale_set_scale_m768(L_7, L_8, /*hidden argument*/NULL);
		TweenScale_t204 * L_9 = V_0;
		NullCheck(L_9);
		Behaviour_set_enabled_m1272(L_9, 0, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void UIButtonScale::OnPress(System.Boolean)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonScale_OnPress_m217 (UIButtonScale_t93 * __this, bool ___isPressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	float G_B5_0 = 0.0f;
	GameObject_t17 * G_B5_1 = {0};
	float G_B4_0 = 0.0f;
	GameObject_t17 * G_B4_1 = {0};
	Vector3_t48  G_B8_0 = {0};
	float G_B8_1 = 0.0f;
	GameObject_t17 * G_B8_2 = {0};
	float G_B7_0 = 0.0f;
	GameObject_t17 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	GameObject_t17 * G_B6_1 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		bool L_1 = (__this->___mStarted_7);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		UIButtonScale_Start_m214(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Transform_t8 * L_2 = (__this->___tweenTarget_2);
		NullCheck(L_2);
		GameObject_t17 * L_3 = Component_get_gameObject_m1246(L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___duration_5);
		bool L_5 = ___isPressed;
		G_B4_0 = L_4;
		G_B4_1 = L_3;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = L_3;
			goto IL_0049;
		}
	}
	{
		Vector3_t48  L_6 = (__this->___mScale_6);
		Vector3_t48  L_7 = (__this->___pressed_4);
		Vector3_t48  L_8 = Vector3_Scale_m1411(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B4_0;
		G_B8_2 = G_B4_1;
		goto IL_0075;
	}

IL_0049:
	{
		GameObject_t17 * L_9 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_10 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		if (!L_10)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			goto IL_006f;
		}
	}
	{
		Vector3_t48  L_11 = (__this->___mScale_6);
		Vector3_t48  L_12 = (__this->___hover_3);
		Vector3_t48  L_13 = Vector3_Scale_m1411(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		G_B8_0 = L_13;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0075;
	}

IL_006f:
	{
		Vector3_t48  L_14 = (__this->___mScale_6);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0075:
	{
		TweenScale_t204 * L_15 = TweenScale_Begin_m770(NULL /*static, unused*/, G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/NULL);
		NullCheck(L_15);
		((UITweener_t197 *)L_15)->___method_8 = 3;
	}

IL_0080:
	{
		return;
	}
}
// System.Void UIButtonScale::OnHover(System.Boolean)
extern "C" void UIButtonScale_OnHover_m218 (UIButtonScale_t93 * __this, bool ___isOver, const MethodInfo* method)
{
	float G_B5_0 = 0.0f;
	GameObject_t17 * G_B5_1 = {0};
	float G_B4_0 = 0.0f;
	GameObject_t17 * G_B4_1 = {0};
	Vector3_t48  G_B6_0 = {0};
	float G_B6_1 = 0.0f;
	GameObject_t17 * G_B6_2 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		bool L_1 = (__this->___mStarted_7);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		UIButtonScale_Start_m214(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Transform_t8 * L_2 = (__this->___tweenTarget_2);
		NullCheck(L_2);
		GameObject_t17 * L_3 = Component_get_gameObject_m1246(L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___duration_5);
		bool L_5 = ___isOver;
		G_B4_0 = L_4;
		G_B4_1 = L_3;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = L_3;
			goto IL_0049;
		}
	}
	{
		Vector3_t48  L_6 = (__this->___mScale_6);
		Vector3_t48  L_7 = (__this->___hover_3);
		Vector3_t48  L_8 = Vector3_Scale_m1411(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_004f;
	}

IL_0049:
	{
		Vector3_t48  L_9 = (__this->___mScale_6);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_004f:
	{
		TweenScale_t204 * L_10 = TweenScale_Begin_m770(NULL /*static, unused*/, G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		NullCheck(L_10);
		((UITweener_t197 *)L_10)->___method_8 = 3;
		bool L_11 = ___isOver;
		__this->___mHighlighted_8 = L_11;
	}

IL_0061:
	{
		return;
	}
}
// UIButtonSound/Trigger
#include "AssemblyU2DCSharp_UIButtonSound_Trigger.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonSound/Trigger
#include "AssemblyU2DCSharp_UIButtonSound_TriggerMethodDeclarations.h"



// UIButtonSound
#include "AssemblyU2DCSharp_UIButtonSound.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonSound
#include "AssemblyU2DCSharp_UIButtonSoundMethodDeclarations.h"



// System.Void UIButtonSound::.ctor()
extern "C" void UIButtonSound__ctor_m219 (UIButtonSound_t95 * __this, const MethodInfo* method)
{
	{
		__this->___volume_4 = (1.0f);
		__this->___pitch_5 = (1.0f);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIButtonSound::OnHover(System.Boolean)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIButtonSound_OnHover_m220 (UIButtonSound_t95 * __this, bool ___isOver, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		bool L_1 = ___isOver;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_3);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}

IL_001d:
	{
		bool L_3 = ___isOver;
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_4 = (__this->___trigger_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0047;
		}
	}

IL_002f:
	{
		AudioClip_t15 * L_5 = (__this->___audioClip_2);
		float L_6 = (__this->___volume_4);
		float L_7 = (__this->___pitch_5);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_PlaySound_m553(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void UIButtonSound::OnPress(System.Boolean)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIButtonSound_OnPress_m221 (UIButtonSound_t95 * __this, bool ___isPressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		bool L_1 = ___isPressed;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_3);
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_002f;
		}
	}

IL_001d:
	{
		bool L_3 = ___isPressed;
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_4 = (__this->___trigger_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0047;
		}
	}

IL_002f:
	{
		AudioClip_t15 * L_5 = (__this->___audioClip_2);
		float L_6 = (__this->___volume_4);
		float L_7 = (__this->___pitch_5);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_PlaySound_m553(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void UIButtonSound::OnClick()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIButtonSound_OnClick_m222 (UIButtonSound_t95 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_3);
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		AudioClip_t15 * L_2 = (__this->___audioClip_2);
		float L_3 = (__this->___volume_4);
		float L_4 = (__this->___pitch_5);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_PlaySound_m553(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// UIButtonTween
#include "AssemblyU2DCSharp_UIButtonTween.h"
#ifndef _MSC_VER
#else
#endif
// UIButtonTween
#include "AssemblyU2DCSharp_UIButtonTweenMethodDeclarations.h"

// UITweener/OnFinished
#include "AssemblyU2DCSharp_UITweener_OnFinished.h"
// UITweener
#include "AssemblyU2DCSharp_UITweenerMethodDeclarations.h"
struct GameObject_t17;
struct UITweenerU5BU5D_t97;
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<UITweener>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UITweener>()
#define GameObject_GetComponentsInChildren_TisUITweener_t197_m1412(__this, method) (( UITweenerU5BU5D_t97* (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m1405_gshared)(__this, method)
struct GameObject_t17;
struct UITweenerU5BU5D_t97;
struct GameObject_t17;
struct ObjectU5BU5D_t300;
// Declaration !!0[] UnityEngine.GameObject::GetComponents<System.Object>()
// !!0[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C" ObjectU5BU5D_t300* GameObject_GetComponents_TisObject_t_m1414_gshared (GameObject_t17 * __this, const MethodInfo* method);
#define GameObject_GetComponents_TisObject_t_m1414(__this, method) (( ObjectU5BU5D_t300* (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponents_TisObject_t_m1414_gshared)(__this, method)
// Declaration !!0[] UnityEngine.GameObject::GetComponents<UITweener>()
// !!0[] UnityEngine.GameObject::GetComponents<UITweener>()
#define GameObject_GetComponents_TisUITweener_t197_m1413(__this, method) (( UITweenerU5BU5D_t97* (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponents_TisObject_t_m1414_gshared)(__this, method)


// System.Void UIButtonTween::.ctor()
extern "C" void UIButtonTween__ctor_m223 (UIButtonTween_t98 * __this, const MethodInfo* method)
{
	{
		__this->___playDirection_5 = 1;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIButtonTween::Start()
extern "C" void UIButtonTween_Start_m224 (UIButtonTween_t98 * __this, const MethodInfo* method)
{
	{
		__this->___mStarted_14 = 1;
		GameObject_t17 * L_0 = (__this->___tweenTarget_2);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		__this->___tweenTarget_2 = L_2;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UIButtonTween::OnEnable()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIButtonTween_OnEnable_m225 (UIButtonTween_t98 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___mStarted_14);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___mHighlighted_15);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_3 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		UIButtonTween_OnHover_m226(__this, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UIButtonTween::OnHover(System.Boolean)
extern "C" void UIButtonTween_OnHover_m226 (UIButtonTween_t98 * __this, bool ___isOver, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_4);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_3 = ___isOver;
		if (L_3)
		{
			goto IL_003b;
		}
	}

IL_0029:
	{
		int32_t L_4 = (__this->___trigger_4);
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0042;
		}
	}
	{
		bool L_5 = ___isOver;
		if (L_5)
		{
			goto IL_0042;
		}
	}

IL_003b:
	{
		bool L_6 = ___isOver;
		UIButtonTween_Play_m233(__this, L_6, /*hidden argument*/NULL);
	}

IL_0042:
	{
		bool L_7 = ___isOver;
		__this->___mHighlighted_15 = L_7;
	}

IL_0049:
	{
		return;
	}
}
// System.Void UIButtonTween::OnPress(System.Boolean)
extern "C" void UIButtonTween_OnPress_m227 (UIButtonTween_t98 * __this, bool ___isPressed, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_4);
		if ((!(((uint32_t)L_2) == ((uint32_t)5))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_3 = ___isPressed;
		if (L_3)
		{
			goto IL_003b;
		}
	}

IL_0029:
	{
		int32_t L_4 = (__this->___trigger_4);
		if ((!(((uint32_t)L_4) == ((uint32_t)6))))
		{
			goto IL_0042;
		}
	}
	{
		bool L_5 = ___isPressed;
		if (L_5)
		{
			goto IL_0042;
		}
	}

IL_003b:
	{
		bool L_6 = ___isPressed;
		UIButtonTween_Play_m233(__this, L_6, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void UIButtonTween::OnClick()
extern "C" void UIButtonTween_OnClick_m228 (UIButtonTween_t98 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		UIButtonTween_Play_m233(__this, 1, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UIButtonTween::OnDoubleClick()
extern "C" void UIButtonTween_OnDoubleClick_m229 (UIButtonTween_t98 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_001f;
		}
	}
	{
		UIButtonTween_Play_m233(__this, 1, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UIButtonTween::OnSelect(System.Boolean)
extern "C" void UIButtonTween_OnSelect_m230 (UIButtonTween_t98 * __this, bool ___isSelected, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_4);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_002b;
		}
	}
	{
		bool L_3 = ___isSelected;
		if (L_3)
		{
			goto IL_003e;
		}
	}

IL_002b:
	{
		int32_t L_4 = (__this->___trigger_4);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0045;
		}
	}
	{
		bool L_5 = ___isSelected;
		if (L_5)
		{
			goto IL_0045;
		}
	}

IL_003e:
	{
		UIButtonTween_Play_m233(__this, 1, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void UIButtonTween::OnActivate(System.Boolean)
extern "C" void UIButtonTween_OnActivate_m231 (UIButtonTween_t98 * __this, bool ___isActive, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_1 = (__this->___trigger_4);
		if ((((int32_t)L_1) == ((int32_t)7)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_2 = (__this->___trigger_4);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_3 = ___isActive;
		if (L_3)
		{
			goto IL_003c;
		}
	}

IL_0029:
	{
		int32_t L_4 = (__this->___trigger_4);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_5 = ___isActive;
		if (L_5)
		{
			goto IL_0043;
		}
	}

IL_003c:
	{
		bool L_6 = ___isActive;
		UIButtonTween_Play_m233(__this, L_6, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UIButtonTween::Update()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIButtonTween_Update_m232 (UIButtonTween_t98 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	UITweener_t197 * V_4 = {0};
	{
		int32_t L_0 = (__this->___disableWhenFinished_8);
		if (!L_0)
		{
			goto IL_009c;
		}
	}
	{
		UITweenerU5BU5D_t97* L_1 = (__this->___mTweens_13);
		if (!L_1)
		{
			goto IL_009c;
		}
	}
	{
		V_0 = 1;
		V_1 = 1;
		V_2 = 0;
		UITweenerU5BU5D_t97* L_2 = (__this->___mTweens_13);
		NullCheck(L_2);
		V_3 = (((int32_t)(((Array_t *)L_2)->max_length)));
		goto IL_0076;
	}

IL_002a:
	{
		UITweenerU5BU5D_t97* L_3 = (__this->___mTweens_13);
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_4 = (*(UITweener_t197 **)(UITweener_t197 **)SZArrayLdElema(L_3, L_5));
		UITweener_t197 * L_6 = V_4;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___tweenGroup_15);
		int32_t L_8 = (__this->___tweenGroup_3);
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0072;
	}

IL_004b:
	{
		UITweener_t197 * L_9 = V_4;
		NullCheck(L_9);
		bool L_10 = Behaviour_get_enabled_m1318(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		V_0 = 0;
		goto IL_007d;
	}

IL_005e:
	{
		UITweener_t197 * L_11 = V_4;
		NullCheck(L_11);
		int32_t L_12 = UITweener_get_direction_m788(L_11, /*hidden argument*/NULL);
		int32_t L_13 = (__this->___disableWhenFinished_8);
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_0072;
		}
	}
	{
		V_1 = 0;
	}

IL_0072:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_3;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_002a;
		}
	}

IL_007d:
	{
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_0095;
		}
	}
	{
		GameObject_t17 * L_19 = (__this->___tweenTarget_2);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_SetActive_m576(NULL /*static, unused*/, L_19, 0, /*hidden argument*/NULL);
	}

IL_0095:
	{
		__this->___mTweens_13 = (UITweenerU5BU5D_t97*)NULL;
	}

IL_009c:
	{
		return;
	}
}
// System.Void UIButtonTween::Play(System.Boolean)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponentsInChildren_TisUITweener_t197_m1412_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponents_TisUITweener_t197_m1413_MethodInfo_var;
extern "C" void UIButtonTween_Play_m233 (UIButtonTween_t98 * __this, bool ___forward, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		GameObject_GetComponentsInChildren_TisUITweener_t197_m1412_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		GameObject_GetComponents_TisUITweener_t197_m1413_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t17 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	UITweener_t197 * V_4 = {0};
	GameObject_t17 * G_B3_0 = {0};
	UIButtonTween_t98 * G_B9_0 = {0};
	UIButtonTween_t98 * G_B8_0 = {0};
	UITweenerU5BU5D_t97* G_B10_0 = {0};
	UIButtonTween_t98 * G_B10_1 = {0};
	{
		GameObject_t17 * L_0 = (__this->___tweenTarget_2);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		GameObject_t17 * L_3 = (__this->___tweenTarget_2);
		G_B3_0 = L_3;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		GameObject_t17 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_5 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_6 = (__this->___ifDisabledOnPlay_7);
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		GameObject_t17 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_SetActive_m576(NULL /*static, unused*/, L_7, 1, /*hidden argument*/NULL);
	}

IL_0042:
	{
		bool L_8 = (__this->___includeChildren_9);
		G_B8_0 = __this;
		if (!L_8)
		{
			G_B9_0 = __this;
			goto IL_0059;
		}
	}
	{
		GameObject_t17 * L_9 = V_0;
		NullCheck(L_9);
		UITweenerU5BU5D_t97* L_10 = GameObject_GetComponentsInChildren_TisUITweener_t197_m1412(L_9, /*hidden argument*/GameObject_GetComponentsInChildren_TisUITweener_t197_m1412_MethodInfo_var);
		G_B10_0 = L_10;
		G_B10_1 = G_B8_0;
		goto IL_005f;
	}

IL_0059:
	{
		GameObject_t17 * L_11 = V_0;
		NullCheck(L_11);
		UITweenerU5BU5D_t97* L_12 = GameObject_GetComponents_TisUITweener_t197_m1413(L_11, /*hidden argument*/GameObject_GetComponents_TisUITweener_t197_m1413_MethodInfo_var);
		G_B10_0 = L_12;
		G_B10_1 = G_B9_0;
	}

IL_005f:
	{
		NullCheck(G_B10_1);
		G_B10_1->___mTweens_13 = G_B10_0;
		UITweenerU5BU5D_t97* L_13 = (__this->___mTweens_13);
		NullCheck(L_13);
		if ((((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_14 = (__this->___disableWhenFinished_8);
		if (!L_14)
		{
			goto IL_0088;
		}
	}
	{
		GameObject_t17 * L_15 = (__this->___tweenTarget_2);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_SetActive_m576(NULL /*static, unused*/, L_15, 0, /*hidden argument*/NULL);
	}

IL_0088:
	{
		goto IL_016b;
	}

IL_008d:
	{
		V_1 = 0;
		int32_t L_16 = (__this->___playDirection_5);
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_00a1;
		}
	}
	{
		bool L_17 = ___forward;
		___forward = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
	}

IL_00a1:
	{
		V_2 = 0;
		UITweenerU5BU5D_t97* L_18 = (__this->___mTweens_13);
		NullCheck(L_18);
		V_3 = (((int32_t)(((Array_t *)L_18)->max_length)));
		goto IL_0164;
	}

IL_00b1:
	{
		UITweenerU5BU5D_t97* L_19 = (__this->___mTweens_13);
		int32_t L_20 = V_2;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		V_4 = (*(UITweener_t197 **)(UITweener_t197 **)SZArrayLdElema(L_19, L_21));
		UITweener_t197 * L_22 = V_4;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___tweenGroup_15);
		int32_t L_24 = (__this->___tweenGroup_3);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0160;
		}
	}
	{
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_00e7;
		}
	}
	{
		GameObject_t17 * L_26 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_27 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00e7;
		}
	}
	{
		V_1 = 1;
		GameObject_t17 * L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_SetActive_m576(NULL /*static, unused*/, L_28, 1, /*hidden argument*/NULL);
	}

IL_00e7:
	{
		int32_t L_29 = (__this->___playDirection_5);
		if (L_29)
		{
			goto IL_00fe;
		}
	}
	{
		UITweener_t197 * L_30 = V_4;
		NullCheck(L_30);
		UITweener_Toggle_m796(L_30, /*hidden argument*/NULL);
		goto IL_0106;
	}

IL_00fe:
	{
		UITweener_t197 * L_31 = V_4;
		bool L_32 = ___forward;
		NullCheck(L_31);
		UITweener_Play_m794(L_31, L_32, /*hidden argument*/NULL);
	}

IL_0106:
	{
		bool L_33 = (__this->___resetOnPlay_6);
		if (!L_33)
		{
			goto IL_0118;
		}
	}
	{
		UITweener_t197 * L_34 = V_4;
		NullCheck(L_34);
		UITweener_Reset_m795(L_34, /*hidden argument*/NULL);
	}

IL_0118:
	{
		UITweener_t197 * L_35 = V_4;
		OnFinished_t96 * L_36 = (__this->___onFinished_12);
		NullCheck(L_35);
		L_35->___onFinished_7 = L_36;
		GameObject_t17 * L_37 = (__this->___eventReceiver_10);
		bool L_38 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_37, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0160;
		}
	}
	{
		String_t* L_39 = (__this->___callWhenFinished_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_40 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0160;
		}
	}
	{
		UITweener_t197 * L_41 = V_4;
		GameObject_t17 * L_42 = (__this->___eventReceiver_10);
		NullCheck(L_41);
		L_41->___eventReceiver_16 = L_42;
		UITweener_t197 * L_43 = V_4;
		String_t* L_44 = (__this->___callWhenFinished_11);
		NullCheck(L_43);
		L_43->___callWhenFinished_17 = L_44;
	}

IL_0160:
	{
		int32_t L_45 = V_2;
		V_2 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_0164:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_3;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00b1;
		}
	}

IL_016b:
	{
		return;
	}
}
// UICenterOnChild
#include "AssemblyU2DCSharp_UICenterOnChild.h"
#ifndef _MSC_VER
#else
#endif
// UICenterOnChild
#include "AssemblyU2DCSharp_UICenterOnChildMethodDeclarations.h"

// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UIDraggablePanel
#include "AssemblyU2DCSharp_UIDraggablePanel.h"
// UIDraggablePanel/OnDragFinished
#include "AssemblyU2DCSharp_UIDraggablePanel_OnDragFinished.h"
// UIScrollBar
#include "AssemblyU2DCSharp_UIScrollBar.h"
// UIScrollBar/OnDragFinished
#include "AssemblyU2DCSharp_UIScrollBar_OnDragFinished.h"
// UIPanel
#include "AssemblyU2DCSharp_UIPanel.h"
// SpringPanel
#include "AssemblyU2DCSharp_SpringPanel.h"
// SpringPanel/OnFinished
#include "AssemblyU2DCSharp_SpringPanel_OnFinished.h"
// UIDraggablePanel/OnDragFinished
#include "AssemblyU2DCSharp_UIDraggablePanel_OnDragFinishedMethodDeclarations.h"
// UIScrollBar/OnDragFinished
#include "AssemblyU2DCSharp_UIScrollBar_OnDragFinishedMethodDeclarations.h"
// UIDraggablePanel
#include "AssemblyU2DCSharp_UIDraggablePanelMethodDeclarations.h"
// UIPanel
#include "AssemblyU2DCSharp_UIPanelMethodDeclarations.h"
// SpringPanel
#include "AssemblyU2DCSharp_SpringPanelMethodDeclarations.h"
struct NGUITools_t167;
struct UIDraggablePanel_t100;
struct GameObject_t17;
// Declaration !!0 NGUITools::FindInParents<UIDraggablePanel>(UnityEngine.GameObject)
// !!0 NGUITools::FindInParents<UIDraggablePanel>(UnityEngine.GameObject)
#define NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415(__this /* static, unused */, p0, method) (( UIDraggablePanel_t100 * (*) (Object_t * /* static, unused */, GameObject_t17 *, const MethodInfo*))NGUITools_FindInParents_TisObject_t_m1314_gshared)(__this /* static, unused */, p0, method)


// System.Void UICenterOnChild::.ctor()
extern "C" void UICenterOnChild__ctor_m234 (UICenterOnChild_t101 * __this, const MethodInfo* method)
{
	{
		__this->___springStrength_2 = (8.0f);
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject UICenterOnChild::get_centeredObject()
extern "C" GameObject_t17 * UICenterOnChild_get_centeredObject_m235 (UICenterOnChild_t101 * __this, const MethodInfo* method)
{
	{
		GameObject_t17 * L_0 = (__this->___mCenteredObject_5);
		return L_0;
	}
}
// System.Void UICenterOnChild::OnEnable()
extern "C" void UICenterOnChild_OnEnable_m236 (UICenterOnChild_t101 * __this, const MethodInfo* method)
{
	{
		UICenterOnChild_Recenter_m238(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UICenterOnChild::OnDragFinished()
extern "C" void UICenterOnChild_OnDragFinished_m237 (UICenterOnChild_t101 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UICenterOnChild_Recenter_m238(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UICenterOnChild::Recenter()
extern const Il2CppType* UIDraggablePanel_t100_0_0_0_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t300_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* OnDragFinished_t118_il2cpp_TypeInfo_var;
extern TypeInfo* OnDragFinished_t134_il2cpp_TypeInfo_var;
extern const MethodInfo* NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var;
extern const MethodInfo* UICenterOnChild_OnDragFinished_m237_MethodInfo_var;
extern "C" void UICenterOnChild_Recenter_m238 (UICenterOnChild_t101 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIDraggablePanel_t100_0_0_0_var = il2cpp_codegen_type_from_index(70);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		ObjectU5BU5D_t300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		OnDragFinished_t118_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(71);
		OnDragFinished_t134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		UICenterOnChild_OnDragFinished_m237_MethodInfo_var = il2cpp_codegen_method_info_from_index(49);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t175  V_0 = {0};
	Transform_t8 * V_1 = {0};
	Vector3_t48  V_2 = {0};
	Vector3_t48  V_3 = {0};
	float V_4 = 0.0f;
	Transform_t8 * V_5 = {0};
	Transform_t8 * V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Transform_t8 * V_9 = {0};
	float V_10 = 0.0f;
	Vector3_t48  V_11 = {0};
	Vector3_t48  V_12 = {0};
	Vector3_t48  V_13 = {0};
	{
		UIDraggablePanel_t100 * L_0 = (__this->___mDrag_4);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00ed;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		UIDraggablePanel_t100 * L_3 = NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415(NULL /*static, unused*/, L_2, /*hidden argument*/NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var);
		__this->___mDrag_4 = L_3;
		UIDraggablePanel_t100 * L_4 = (__this->___mDrag_4);
		bool L_5 = Object_op_Equality_m1245(NULL /*static, unused*/, L_4, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		ObjectU5BU5D_t300* L_6 = ((ObjectU5BU5D_t300*)SZArrayNew(ObjectU5BU5D_t300_il2cpp_TypeInfo_var, 4));
		Type_t * L_7 = Object_GetType_m1416(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 0)) = (Object_t *)L_7;
		ObjectU5BU5D_t300* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 1)) = (Object_t *)(String_t*) &_stringLiteral42;
		ObjectU5BU5D_t300* L_9 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1376(NULL /*static, unused*/, LoadTypeToken(UIDraggablePanel_t100_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 2);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 2)) = (Object_t *)L_10;
		ObjectU5BU5D_t300* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral43);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 3)) = (Object_t *)(String_t*) &_stringLiteral43;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1267(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Debug_LogWarning_m1399(NULL /*static, unused*/, L_12, __this, /*hidden argument*/NULL);
		Behaviour_set_enabled_m1272(__this, 0, /*hidden argument*/NULL);
		return;
	}

IL_0072:
	{
		UIDraggablePanel_t100 * L_13 = (__this->___mDrag_4);
		IntPtr_t L_14 = { (void*)UICenterOnChild_OnDragFinished_m237_MethodInfo_var };
		OnDragFinished_t118 * L_15 = (OnDragFinished_t118 *)il2cpp_codegen_object_new (OnDragFinished_t118_il2cpp_TypeInfo_var);
		OnDragFinished__ctor_m285(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->___onDragFinished_20 = L_15;
		UIDraggablePanel_t100 * L_16 = (__this->___mDrag_4);
		NullCheck(L_16);
		UIScrollBar_t119 * L_17 = (L_16->___horizontalScrollBar_17);
		bool L_18 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_17, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		UIDraggablePanel_t100 * L_19 = (__this->___mDrag_4);
		NullCheck(L_19);
		UIScrollBar_t119 * L_20 = (L_19->___horizontalScrollBar_17);
		IntPtr_t L_21 = { (void*)UICenterOnChild_OnDragFinished_m237_MethodInfo_var };
		OnDragFinished_t134 * L_22 = (OnDragFinished_t134 *)il2cpp_codegen_object_new (OnDragFinished_t134_il2cpp_TypeInfo_var);
		OnDragFinished__ctor_m375(L_22, __this, L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->___onDragFinished_13 = L_22;
	}

IL_00bb:
	{
		UIDraggablePanel_t100 * L_23 = (__this->___mDrag_4);
		NullCheck(L_23);
		UIScrollBar_t119 * L_24 = (L_23->___verticalScrollBar_18);
		bool L_25 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_24, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ed;
		}
	}
	{
		UIDraggablePanel_t100 * L_26 = (__this->___mDrag_4);
		NullCheck(L_26);
		UIScrollBar_t119 * L_27 = (L_26->___verticalScrollBar_18);
		IntPtr_t L_28 = { (void*)UICenterOnChild_OnDragFinished_m237_MethodInfo_var };
		OnDragFinished_t134 * L_29 = (OnDragFinished_t134 *)il2cpp_codegen_object_new (OnDragFinished_t134_il2cpp_TypeInfo_var);
		OnDragFinished__ctor_m375(L_29, __this, L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		L_27->___onDragFinished_13 = L_29;
	}

IL_00ed:
	{
		UIDraggablePanel_t100 * L_30 = (__this->___mDrag_4);
		NullCheck(L_30);
		UIPanel_t110 * L_31 = UIDraggablePanel_get_panel_m290(L_30, /*hidden argument*/NULL);
		bool L_32 = Object_op_Equality_m1245(NULL /*static, unused*/, L_31, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0104;
		}
	}
	{
		return;
	}

IL_0104:
	{
		UIDraggablePanel_t100 * L_33 = (__this->___mDrag_4);
		NullCheck(L_33);
		UIPanel_t110 * L_34 = UIDraggablePanel_get_panel_m290(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector4_t175  L_35 = UIPanel_get_clipRange_m1014(L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		UIDraggablePanel_t100 * L_36 = (__this->___mDrag_4);
		NullCheck(L_36);
		UIPanel_t110 * L_37 = UIDraggablePanel_get_panel_m290(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_t8 * L_38 = UIPanel_get_cachedTransform_m1006(L_37, /*hidden argument*/NULL);
		V_1 = L_38;
		Transform_t8 * L_39 = V_1;
		NullCheck(L_39);
		Vector3_t48  L_40 = Transform_get_localPosition_m1263(L_39, /*hidden argument*/NULL);
		V_2 = L_40;
		Vector3_t48 * L_41 = (&V_2);
		float L_42 = (L_41->___x_1);
		float L_43 = ((&V_0)->___x_1);
		L_41->___x_1 = ((float)((float)L_42+(float)L_43));
		Vector3_t48 * L_44 = (&V_2);
		float L_45 = (L_44->___y_2);
		float L_46 = ((&V_0)->___y_2);
		L_44->___y_2 = ((float)((float)L_45+(float)L_46));
		Transform_t8 * L_47 = V_1;
		NullCheck(L_47);
		Transform_t8 * L_48 = Transform_get_parent_m1319(L_47, /*hidden argument*/NULL);
		Vector3_t48  L_49 = V_2;
		NullCheck(L_48);
		Vector3_t48  L_50 = Transform_TransformPoint_m1417(L_48, L_49, /*hidden argument*/NULL);
		V_2 = L_50;
		Vector3_t48  L_51 = V_2;
		UIDraggablePanel_t100 * L_52 = (__this->___mDrag_4);
		NullCheck(L_52);
		Vector3_t48  L_53 = UIDraggablePanel_get_currentMomentum_m295(L_52, /*hidden argument*/NULL);
		UIDraggablePanel_t100 * L_54 = (__this->___mDrag_4);
		NullCheck(L_54);
		float L_55 = (L_54->___momentumAmount_13);
		Vector3_t48  L_56 = Vector3_op_Multiply_m1362(NULL /*static, unused*/, L_53, ((float)((float)L_55*(float)(0.1f))), /*hidden argument*/NULL);
		Vector3_t48  L_57 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_51, L_56, /*hidden argument*/NULL);
		V_3 = L_57;
		UIDraggablePanel_t100 * L_58 = (__this->___mDrag_4);
		Vector3_t48  L_59 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_58);
		UIDraggablePanel_set_currentMomentum_m296(L_58, L_59, /*hidden argument*/NULL);
		V_4 = (std::numeric_limits<float>::max());
		V_5 = (Transform_t8 *)NULL;
		Transform_t8 * L_60 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = 0;
		Transform_t8 * L_61 = V_6;
		NullCheck(L_61);
		int32_t L_62 = Transform_get_childCount_m1418(L_61, /*hidden argument*/NULL);
		V_8 = L_62;
		goto IL_01f5;
	}

IL_01bf:
	{
		Transform_t8 * L_63 = V_6;
		int32_t L_64 = V_7;
		NullCheck(L_63);
		Transform_t8 * L_65 = Transform_GetChild_m1419(L_63, L_64, /*hidden argument*/NULL);
		V_9 = L_65;
		Transform_t8 * L_66 = V_9;
		NullCheck(L_66);
		Vector3_t48  L_67 = Transform_get_position_m1282(L_66, /*hidden argument*/NULL);
		Vector3_t48  L_68 = V_3;
		Vector3_t48  L_69 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		float L_70 = Vector3_SqrMagnitude_m1420(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		V_10 = L_70;
		float L_71 = V_10;
		float L_72 = V_4;
		if ((!(((float)L_71) < ((float)L_72))))
		{
			goto IL_01ef;
		}
	}
	{
		float L_73 = V_10;
		V_4 = L_73;
		Transform_t8 * L_74 = V_9;
		V_5 = L_74;
	}

IL_01ef:
	{
		int32_t L_75 = V_7;
		V_7 = ((int32_t)((int32_t)L_75+(int32_t)1));
	}

IL_01f5:
	{
		int32_t L_76 = V_7;
		int32_t L_77 = V_8;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bf;
		}
	}
	{
		Transform_t8 * L_78 = V_5;
		bool L_79 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_78, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_02e0;
		}
	}
	{
		Transform_t8 * L_80 = V_5;
		NullCheck(L_80);
		GameObject_t17 * L_81 = Component_get_gameObject_m1246(L_80, /*hidden argument*/NULL);
		__this->___mCenteredObject_5 = L_81;
		Transform_t8 * L_82 = V_1;
		Transform_t8 * L_83 = V_5;
		NullCheck(L_83);
		Vector3_t48  L_84 = Transform_get_position_m1282(L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		Vector3_t48  L_85 = Transform_InverseTransformPoint_m1421(L_82, L_84, /*hidden argument*/NULL);
		V_11 = L_85;
		Transform_t8 * L_86 = V_1;
		Vector3_t48  L_87 = V_2;
		NullCheck(L_86);
		Vector3_t48  L_88 = Transform_InverseTransformPoint_m1421(L_86, L_87, /*hidden argument*/NULL);
		V_12 = L_88;
		Vector3_t48  L_89 = V_11;
		Vector3_t48  L_90 = V_12;
		Vector3_t48  L_91 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_89, L_90, /*hidden argument*/NULL);
		V_13 = L_91;
		UIDraggablePanel_t100 * L_92 = (__this->___mDrag_4);
		NullCheck(L_92);
		Vector3_t48 * L_93 = &(L_92->___scale_11);
		float L_94 = (L_93->___x_1);
		if ((!(((float)L_94) == ((float)(0.0f)))))
		{
			goto IL_0261;
		}
	}
	{
		(&V_13)->___x_1 = (0.0f);
	}

IL_0261:
	{
		UIDraggablePanel_t100 * L_95 = (__this->___mDrag_4);
		NullCheck(L_95);
		Vector3_t48 * L_96 = &(L_95->___scale_11);
		float L_97 = (L_96->___y_2);
		if ((!(((float)L_97) == ((float)(0.0f)))))
		{
			goto IL_0287;
		}
	}
	{
		(&V_13)->___y_2 = (0.0f);
	}

IL_0287:
	{
		UIDraggablePanel_t100 * L_98 = (__this->___mDrag_4);
		NullCheck(L_98);
		Vector3_t48 * L_99 = &(L_98->___scale_11);
		float L_100 = (L_99->___z_3);
		if ((!(((float)L_100) == ((float)(0.0f)))))
		{
			goto IL_02ad;
		}
	}
	{
		(&V_13)->___z_3 = (0.0f);
	}

IL_02ad:
	{
		UIDraggablePanel_t100 * L_101 = (__this->___mDrag_4);
		NullCheck(L_101);
		GameObject_t17 * L_102 = Component_get_gameObject_m1246(L_101, /*hidden argument*/NULL);
		Transform_t8 * L_103 = V_1;
		NullCheck(L_103);
		Vector3_t48  L_104 = Transform_get_localPosition_m1263(L_103, /*hidden argument*/NULL);
		Vector3_t48  L_105 = V_13;
		Vector3_t48  L_106 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_104, L_105, /*hidden argument*/NULL);
		float L_107 = (__this->___springStrength_2);
		SpringPanel_t168 * L_108 = SpringPanel_Begin_m597(NULL /*static, unused*/, L_102, L_106, L_107, /*hidden argument*/NULL);
		OnFinished_t99 * L_109 = (__this->___onFinished_3);
		NullCheck(L_108);
		L_108->___onFinished_9 = L_109;
		goto IL_02e7;
	}

IL_02e0:
	{
		__this->___mCenteredObject_5 = (GameObject_t17 *)NULL;
	}

IL_02e7:
	{
		return;
	}
}
// UICheckbox/OnStateChange
#include "AssemblyU2DCSharp_UICheckbox_OnStateChange.h"
#ifndef _MSC_VER
#else
#endif
// UICheckbox/OnStateChange
#include "AssemblyU2DCSharp_UICheckbox_OnStateChangeMethodDeclarations.h"



// System.Void UICheckbox/OnStateChange::.ctor(System.Object,System.IntPtr)
extern "C" void OnStateChange__ctor_m239 (OnStateChange_t102 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UICheckbox/OnStateChange::Invoke(System.Boolean)
extern "C" void OnStateChange_Invoke_m240 (OnStateChange_t102 * __this, bool ___state, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnStateChange_Invoke_m240((OnStateChange_t102 *)__this->___prev_9,___state, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_OnStateChange_t102(Il2CppObject* delegate, bool ___state)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___state' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___state);

	// Marshaling cleanup of parameter '___state' native representation

}
// System.IAsyncResult UICheckbox/OnStateChange::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern "C" Object_t * OnStateChange_BeginInvoke_m241 (OnStateChange_t102 * __this, bool ___state, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t311_il2cpp_TypeInfo_var, &___state);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UICheckbox/OnStateChange::EndInvoke(System.IAsyncResult)
extern "C" void OnStateChange_EndInvoke_m242 (OnStateChange_t102 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UICheckbox
#include "AssemblyU2DCSharp_UICheckbox.h"
#ifndef _MSC_VER
#else
#endif
// UICheckbox
#include "AssemblyU2DCSharp_UICheckboxMethodDeclarations.h"

// TweenAlpha
#include "AssemblyU2DCSharp_TweenAlpha.h"
// TweenAlpha
#include "AssemblyU2DCSharp_TweenAlphaMethodDeclarations.h"
struct Component_t107;
struct UICheckboxU5BU5D_t313;
struct Component_t107;
struct ObjectU5BU5D_t300;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" ObjectU5BU5D_t300* Component_GetComponentsInChildren_TisObject_t_m1423_gshared (Component_t107 * __this, bool p0, const MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m1423(__this, p0, method) (( ObjectU5BU5D_t300* (*) (Component_t107 *, bool, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m1423_gshared)(__this, p0, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UICheckbox>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UICheckbox>(System.Boolean)
#define Component_GetComponentsInChildren_TisUICheckbox_t103_m1422(__this, p0, method) (( UICheckboxU5BU5D_t313* (*) (Component_t107 *, bool, const MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m1423_gshared)(__this, p0, method)


// System.Void UICheckbox::.ctor()
extern "C" void UICheckbox__ctor_m243 (UICheckbox_t103 * __this, const MethodInfo* method)
{
	{
		__this->___startsChecked_6 = 1;
		__this->___functionName_10 = (String_t*) &_stringLiteral44;
		__this->___mChecked_13 = 1;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UICheckbox::get_isChecked()
extern "C" bool UICheckbox_get_isChecked_m244 (UICheckbox_t103 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___mChecked_13);
		return L_0;
	}
}
// System.Void UICheckbox::set_isChecked(System.Boolean)
extern "C" void UICheckbox_set_isChecked_m245 (UICheckbox_t103 * __this, bool ___value, const MethodInfo* method)
{
	{
		Transform_t8 * L_0 = (__this->___radioButtonRoot_7);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		bool L_2 = ___value;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		bool L_3 = (__this->___optionCanBeNone_8);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		bool L_4 = (__this->___mStarted_14);
		if (L_4)
		{
			goto IL_0034;
		}
	}

IL_002d:
	{
		bool L_5 = ___value;
		UICheckbox_Set_m249(__this, L_5, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void UICheckbox::Awake()
extern "C" void UICheckbox_Awake_m246 (UICheckbox_t103 * __this, const MethodInfo* method)
{
	UISprite_t9 * G_B3_0 = {0};
	UISprite_t9 * G_B2_0 = {0};
	float G_B4_0 = 0.0f;
	UISprite_t9 * G_B4_1 = {0};
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_15 = L_0;
		UISprite_t9 * L_1 = (__this->___checkSprite_3);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		UISprite_t9 * L_3 = (__this->___checkSprite_3);
		bool L_4 = (__this->___startsChecked_6);
		G_B2_0 = L_3;
		if (!L_4)
		{
			G_B3_0 = L_3;
			goto IL_0038;
		}
	}
	{
		G_B4_0 = (1.0f);
		G_B4_1 = G_B2_0;
		goto IL_003d;
	}

IL_0038:
	{
		G_B4_0 = (0.0f);
		G_B4_1 = G_B3_0;
	}

IL_003d:
	{
		NullCheck(G_B4_1);
		UIWidget_set_alpha_m675(G_B4_1, G_B4_0, /*hidden argument*/NULL);
	}

IL_0042:
	{
		bool L_5 = (__this->___option_12);
		if (!L_5)
		{
			goto IL_0076;
		}
	}
	{
		__this->___option_12 = 0;
		Transform_t8 * L_6 = (__this->___radioButtonRoot_7);
		bool L_7 = Object_op_Equality_m1245(NULL /*static, unused*/, L_6, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		Transform_t8 * L_8 = (__this->___mTrans_15);
		NullCheck(L_8);
		Transform_t8 * L_9 = Transform_get_parent_m1319(L_8, /*hidden argument*/NULL);
		__this->___radioButtonRoot_7 = L_9;
	}

IL_0076:
	{
		return;
	}
}
// System.Void UICheckbox::Start()
extern "C" void UICheckbox_Start_m247 (UICheckbox_t103 * __this, const MethodInfo* method)
{
	{
		GameObject_t17 * L_0 = (__this->___eventReceiver_9);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		__this->___eventReceiver_9 = L_2;
	}

IL_001d:
	{
		bool L_3 = (__this->___startsChecked_6);
		__this->___mChecked_13 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		__this->___mStarted_14 = 1;
		bool L_4 = (__this->___startsChecked_6);
		UICheckbox_Set_m249(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UICheckbox::OnClick()
extern "C" void UICheckbox_OnClick_m248 (UICheckbox_t103 * __this, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = UICheckbox_get_isChecked_m244(__this, /*hidden argument*/NULL);
		UICheckbox_set_isChecked_m245(__this, ((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UICheckbox::Set(System.Boolean)
extern TypeInfo* UICheckbox_t103_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisUICheckbox_t103_m1422_MethodInfo_var;
extern "C" void UICheckbox_Set_m249 (UICheckbox_t103 * __this, bool ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICheckbox_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		Component_GetComponentsInChildren_TisUICheckbox_t103_m1422_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	UICheckboxU5BU5D_t313* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UICheckbox_t103 * V_3 = {0};
	UISprite_t9 * G_B4_0 = {0};
	UISprite_t9 * G_B3_0 = {0};
	float G_B5_0 = 0.0f;
	UISprite_t9 * G_B5_1 = {0};
	UISprite_t9 * G_B20_0 = {0};
	UISprite_t9 * G_B19_0 = {0};
	float G_B21_0 = 0.0f;
	UISprite_t9 * G_B21_1 = {0};
	float G_B24_0 = 0.0f;
	GameObject_t17 * G_B24_1 = {0};
	float G_B23_0 = 0.0f;
	GameObject_t17 * G_B23_1 = {0};
	float G_B25_0 = 0.0f;
	float G_B25_1 = 0.0f;
	GameObject_t17 * G_B25_2 = {0};
	Animation_t56 * G_B34_0 = {0};
	Animation_t56 * G_B33_0 = {0};
	int32_t G_B35_0 = 0;
	Animation_t56 * G_B35_1 = {0};
	{
		bool L_0 = (__this->___mStarted_14);
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		bool L_1 = ___state;
		__this->___mChecked_13 = L_1;
		bool L_2 = ___state;
		__this->___startsChecked_6 = L_2;
		UISprite_t9 * L_3 = (__this->___checkSprite_3);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		UISprite_t9 * L_5 = (__this->___checkSprite_3);
		bool L_6 = ___state;
		G_B3_0 = L_5;
		if (!L_6)
		{
			G_B4_0 = L_5;
			goto IL_0040;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		goto IL_0045;
	}

IL_0040:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_0045:
	{
		NullCheck(G_B5_1);
		UIWidget_set_alpha_m675(G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_004a:
	{
		goto IL_01cf;
	}

IL_004f:
	{
		bool L_7 = (__this->___mChecked_13);
		bool L_8 = ___state;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_01cf;
		}
	}
	{
		Transform_t8 * L_9 = (__this->___radioButtonRoot_7);
		bool L_10 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_9, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00c2;
		}
	}
	{
		bool L_11 = ___state;
		if (!L_11)
		{
			goto IL_00c2;
		}
	}
	{
		Transform_t8 * L_12 = (__this->___radioButtonRoot_7);
		NullCheck(L_12);
		UICheckboxU5BU5D_t313* L_13 = Component_GetComponentsInChildren_TisUICheckbox_t103_m1422(L_12, 1, /*hidden argument*/Component_GetComponentsInChildren_TisUICheckbox_t103_m1422_MethodInfo_var);
		V_0 = L_13;
		V_1 = 0;
		UICheckboxU5BU5D_t313* L_14 = V_0;
		NullCheck(L_14);
		V_2 = (((int32_t)(((Array_t *)L_14)->max_length)));
		goto IL_00bb;
	}

IL_008a:
	{
		UICheckboxU5BU5D_t313* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(UICheckbox_t103 **)(UICheckbox_t103 **)SZArrayLdElema(L_15, L_17));
		UICheckbox_t103 * L_18 = V_3;
		bool L_19 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_18, __this, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b7;
		}
	}
	{
		UICheckbox_t103 * L_20 = V_3;
		NullCheck(L_20);
		Transform_t8 * L_21 = (L_20->___radioButtonRoot_7);
		Transform_t8 * L_22 = (__this->___radioButtonRoot_7);
		bool L_23 = Object_op_Equality_m1245(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b7;
		}
	}
	{
		UICheckbox_t103 * L_24 = V_3;
		NullCheck(L_24);
		UICheckbox_Set_m249(L_24, 0, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00bb:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_008a;
		}
	}

IL_00c2:
	{
		bool L_28 = ___state;
		__this->___mChecked_13 = L_28;
		UISprite_t9 * L_29 = (__this->___checkSprite_3);
		bool L_30 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_29, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_013f;
		}
	}
	{
		bool L_31 = (__this->___instantTween_5);
		if (!L_31)
		{
			goto IL_010f;
		}
	}
	{
		UISprite_t9 * L_32 = (__this->___checkSprite_3);
		bool L_33 = (__this->___mChecked_13);
		G_B19_0 = L_32;
		if (!L_33)
		{
			G_B20_0 = L_32;
			goto IL_0100;
		}
	}
	{
		G_B21_0 = (1.0f);
		G_B21_1 = G_B19_0;
		goto IL_0105;
	}

IL_0100:
	{
		G_B21_0 = (0.0f);
		G_B21_1 = G_B20_0;
	}

IL_0105:
	{
		NullCheck(G_B21_1);
		UIWidget_set_alpha_m675(G_B21_1, G_B21_0, /*hidden argument*/NULL);
		goto IL_013f;
	}

IL_010f:
	{
		UISprite_t9 * L_34 = (__this->___checkSprite_3);
		NullCheck(L_34);
		GameObject_t17 * L_35 = Component_get_gameObject_m1246(L_34, /*hidden argument*/NULL);
		bool L_36 = (__this->___mChecked_13);
		G_B23_0 = (0.15f);
		G_B23_1 = L_35;
		if (!L_36)
		{
			G_B24_0 = (0.15f);
			G_B24_1 = L_35;
			goto IL_0134;
		}
	}
	{
		G_B25_0 = (1.0f);
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_0139;
	}

IL_0134:
	{
		G_B25_0 = (0.0f);
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_0139:
	{
		TweenAlpha_Begin_m734(NULL /*static, unused*/, G_B25_2, G_B25_1, G_B25_0, /*hidden argument*/NULL);
	}

IL_013f:
	{
		((UICheckbox_t103_StaticFields*)UICheckbox_t103_il2cpp_TypeInfo_var->static_fields)->___current_2 = __this;
		OnStateChange_t102 * L_37 = (__this->___onStateChange_11);
		if (!L_37)
		{
			goto IL_0161;
		}
	}
	{
		OnStateChange_t102 * L_38 = (__this->___onStateChange_11);
		bool L_39 = (__this->___mChecked_13);
		NullCheck(L_38);
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void UICheckbox/OnStateChange::Invoke(System.Boolean) */, L_38, L_39);
	}

IL_0161:
	{
		GameObject_t17 * L_40 = (__this->___eventReceiver_9);
		bool L_41 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_40, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_019f;
		}
	}
	{
		String_t* L_42 = (__this->___functionName_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_019f;
		}
	}
	{
		GameObject_t17 * L_44 = (__this->___eventReceiver_9);
		String_t* L_45 = (__this->___functionName_10);
		bool L_46 = (__this->___mChecked_13);
		bool L_47 = L_46;
		Object_t * L_48 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_44);
		GameObject_SendMessage_m1406(L_44, L_45, L_48, 1, /*hidden argument*/NULL);
	}

IL_019f:
	{
		((UICheckbox_t103_StaticFields*)UICheckbox_t103_il2cpp_TypeInfo_var->static_fields)->___current_2 = (UICheckbox_t103 *)NULL;
		Animation_t56 * L_49 = (__this->___checkAnimation_4);
		bool L_50 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_49, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01cf;
		}
	}
	{
		Animation_t56 * L_51 = (__this->___checkAnimation_4);
		bool L_52 = ___state;
		G_B33_0 = L_51;
		if (!L_52)
		{
			G_B34_0 = L_51;
			goto IL_01c8;
		}
	}
	{
		G_B35_0 = 1;
		G_B35_1 = G_B33_0;
		goto IL_01c9;
	}

IL_01c8:
	{
		G_B35_0 = (-1);
		G_B35_1 = G_B34_0;
	}

IL_01c9:
	{
		ActiveAnimation_Play_m453(NULL /*static, unused*/, G_B35_1, G_B35_0, /*hidden argument*/NULL);
	}

IL_01cf:
	{
		return;
	}
}
// UICheckboxControlledComponent
#include "AssemblyU2DCSharp_UICheckboxControlledComponent.h"
#ifndef _MSC_VER
#else
#endif
// UICheckboxControlledComponent
#include "AssemblyU2DCSharp_UICheckboxControlledComponentMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
struct Component_t107;
struct UICheckbox_t103;
// Declaration !!0 UnityEngine.Component::GetComponent<UICheckbox>()
// !!0 UnityEngine.Component::GetComponent<UICheckbox>()
#define Component_GetComponent_TisUICheckbox_t103_m1424(__this, method) (( UICheckbox_t103 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void UICheckboxControlledComponent::.ctor()
extern "C" void UICheckboxControlledComponent__ctor_m250 (UICheckboxControlledComponent_t104 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UICheckboxControlledComponent::Start()
extern TypeInfo* OnStateChange_t102_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUICheckbox_t103_m1424_MethodInfo_var;
extern const MethodInfo* UICheckboxControlledComponent_OnActivateDelegate_m252_MethodInfo_var;
extern "C" void UICheckboxControlledComponent_Start_m251 (UICheckboxControlledComponent_t104 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnStateChange_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		Component_GetComponent_TisUICheckbox_t103_m1424_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		UICheckboxControlledComponent_OnActivateDelegate_m252_MethodInfo_var = il2cpp_codegen_method_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	UICheckbox_t103 * V_0 = {0};
	{
		UICheckbox_t103 * L_0 = Component_GetComponent_TisUICheckbox_t103_m1424(__this, /*hidden argument*/Component_GetComponent_TisUICheckbox_t103_m1424_MethodInfo_var);
		V_0 = L_0;
		UICheckbox_t103 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->___mUsingDelegates_4 = 1;
		UICheckbox_t103 * L_3 = V_0;
		UICheckbox_t103 * L_4 = L_3;
		NullCheck(L_4);
		OnStateChange_t102 * L_5 = (L_4->___onStateChange_11);
		IntPtr_t L_6 = { (void*)UICheckboxControlledComponent_OnActivateDelegate_m252_MethodInfo_var };
		OnStateChange_t102 * L_7 = (OnStateChange_t102 *)il2cpp_codegen_object_new (OnStateChange_t102_il2cpp_TypeInfo_var);
		OnStateChange__ctor_m239(L_7, __this, L_6, /*hidden argument*/NULL);
		Delegate_t314 * L_8 = Delegate_Combine_m1425(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->___onStateChange_11 = ((OnStateChange_t102 *)Castclass(L_8, OnStateChange_t102_il2cpp_TypeInfo_var));
	}

IL_003c:
	{
		return;
	}
}
// System.Void UICheckboxControlledComponent::OnActivateDelegate(System.Boolean)
extern "C" void UICheckboxControlledComponent_OnActivateDelegate_m252 (UICheckboxControlledComponent_t104 * __this, bool ___isActive, const MethodInfo* method)
{
	MonoBehaviour_t3 * G_B4_0 = {0};
	MonoBehaviour_t3 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	MonoBehaviour_t3 * G_B5_1 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		MonoBehaviour_t3 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		MonoBehaviour_t3 * L_3 = (__this->___target_2);
		bool L_4 = (__this->___inverse_3);
		G_B3_0 = L_3;
		if (!L_4)
		{
			G_B4_0 = L_3;
			goto IL_0036;
		}
	}
	{
		bool L_5 = ___isActive;
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0037;
	}

IL_0036:
	{
		bool L_6 = ___isActive;
		G_B5_0 = ((int32_t)(L_6));
		G_B5_1 = G_B4_0;
	}

IL_0037:
	{
		NullCheck(G_B5_1);
		Behaviour_set_enabled_m1272(G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void UICheckboxControlledComponent::OnActivate(System.Boolean)
extern "C" void UICheckboxControlledComponent_OnActivate_m253 (UICheckboxControlledComponent_t104 * __this, bool ___isActive, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___mUsingDelegates_4);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = ___isActive;
		UICheckboxControlledComponent_OnActivateDelegate_m252(__this, L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// UICheckboxControlledObject
#include "AssemblyU2DCSharp_UICheckboxControlledObject.h"
#ifndef _MSC_VER
#else
#endif
// UICheckboxControlledObject
#include "AssemblyU2DCSharp_UICheckboxControlledObjectMethodDeclarations.h"

struct NGUITools_t167;
struct UIPanel_t110;
struct GameObject_t17;
// Declaration !!0 NGUITools::FindInParents<UIPanel>(UnityEngine.GameObject)
// !!0 NGUITools::FindInParents<UIPanel>(UnityEngine.GameObject)
#define NGUITools_FindInParents_TisUIPanel_t110_m1426(__this /* static, unused */, p0, method) (( UIPanel_t110 * (*) (Object_t * /* static, unused */, GameObject_t17 *, const MethodInfo*))NGUITools_FindInParents_TisObject_t_m1314_gshared)(__this /* static, unused */, p0, method)


// System.Void UICheckboxControlledObject::.ctor()
extern "C" void UICheckboxControlledObject__ctor_m254 (UICheckboxControlledObject_t105 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UICheckboxControlledObject::OnEnable()
extern const MethodInfo* Component_GetComponent_TisUICheckbox_t103_m1424_MethodInfo_var;
extern "C" void UICheckboxControlledObject_OnEnable_m255 (UICheckboxControlledObject_t105 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisUICheckbox_t103_m1424_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		s_Il2CppMethodIntialized = true;
	}
	UICheckbox_t103 * V_0 = {0};
	{
		UICheckbox_t103 * L_0 = Component_GetComponent_TisUICheckbox_t103_m1424(__this, /*hidden argument*/Component_GetComponent_TisUICheckbox_t103_m1424_MethodInfo_var);
		V_0 = L_0;
		UICheckbox_t103 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		UICheckbox_t103 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = UICheckbox_get_isChecked_m244(L_3, /*hidden argument*/NULL);
		UICheckboxControlledObject_OnActivate_m256(__this, L_4, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void UICheckboxControlledObject::OnActivate(System.Boolean)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* NGUITools_FindInParents_TisUIPanel_t110_m1426_MethodInfo_var;
extern "C" void UICheckboxControlledObject_OnActivate_m256 (UICheckboxControlledObject_t105 * __this, bool ___isActive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		NGUITools_FindInParents_TisUIPanel_t110_m1426_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483701);
		s_Il2CppMethodIntialized = true;
	}
	UIPanel_t110 * V_0 = {0};
	GameObject_t17 * G_B3_0 = {0};
	GameObject_t17 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	GameObject_t17 * G_B4_1 = {0};
	{
		GameObject_t17 * L_0 = (__this->___target_2);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		GameObject_t17 * L_2 = (__this->___target_2);
		bool L_3 = (__this->___inverse_3);
		G_B2_0 = L_2;
		if (!L_3)
		{
			G_B3_0 = L_2;
			goto IL_002b;
		}
	}
	{
		bool L_4 = ___isActive;
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_002c;
	}

IL_002b:
	{
		bool L_5 = ___isActive;
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B3_0;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_SetActive_m576(NULL /*static, unused*/, G_B4_1, G_B4_0, /*hidden argument*/NULL);
		GameObject_t17 * L_6 = (__this->___target_2);
		UIPanel_t110 * L_7 = NGUITools_FindInParents_TisUIPanel_t110_m1426(NULL /*static, unused*/, L_6, /*hidden argument*/NGUITools_FindInParents_TisUIPanel_t110_m1426_MethodInfo_var);
		V_0 = L_7;
		UIPanel_t110 * L_8 = V_0;
		bool L_9 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_8, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		UIPanel_t110 * L_10 = V_0;
		NullCheck(L_10);
		UIPanel_Refresh_m1035(L_10, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// UIDragCamera
#include "AssemblyU2DCSharp_UIDragCamera.h"
#ifndef _MSC_VER
#else
#endif
// UIDragCamera
#include "AssemblyU2DCSharp_UIDragCameraMethodDeclarations.h"

// UIDraggableCamera
#include "AssemblyU2DCSharp_UIDraggableCamera.h"
// UIDraggableCamera
#include "AssemblyU2DCSharp_UIDraggableCameraMethodDeclarations.h"
struct Component_t107;
struct UIDraggableCamera_t106;
// Declaration !!0 UnityEngine.Component::GetComponent<UIDraggableCamera>()
// !!0 UnityEngine.Component::GetComponent<UIDraggableCamera>()
#define Component_GetComponent_TisUIDraggableCamera_t106_m1427(__this, method) (( UIDraggableCamera_t106 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)
struct GameObject_t17;
struct UIDraggableCamera_t106;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UIDraggableCamera>()
// !!0 UnityEngine.GameObject::AddComponent<UIDraggableCamera>()
#define GameObject_AddComponent_TisUIDraggableCamera_t106_m1428(__this, method) (( UIDraggableCamera_t106 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1243_gshared)(__this, method)
struct NGUITools_t167;
struct UIDraggableCamera_t106;
struct GameObject_t17;
// Declaration !!0 NGUITools::FindInParents<UIDraggableCamera>(UnityEngine.GameObject)
// !!0 NGUITools::FindInParents<UIDraggableCamera>(UnityEngine.GameObject)
#define NGUITools_FindInParents_TisUIDraggableCamera_t106_m1429(__this /* static, unused */, p0, method) (( UIDraggableCamera_t106 * (*) (Object_t * /* static, unused */, GameObject_t17 *, const MethodInfo*))NGUITools_FindInParents_TisObject_t_m1314_gshared)(__this /* static, unused */, p0, method)


// System.Void UIDragCamera::.ctor()
extern "C" void UIDragCamera__ctor_m257 (UIDragCamera_t108 * __this, const MethodInfo* method)
{
	{
		IgnoreTimeScale__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIDragCamera::Awake()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUIDraggableCamera_t106_m1427_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisUIDraggableCamera_t106_m1428_MethodInfo_var;
extern const MethodInfo* NGUITools_FindInParents_TisUIDraggableCamera_t106_m1429_MethodInfo_var;
extern "C" void UIDragCamera_Awake_m258 (UIDragCamera_t108 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Component_GetComponent_TisUIDraggableCamera_t106_m1427_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483702);
		GameObject_AddComponent_TisUIDraggableCamera_t106_m1428_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483703);
		NGUITools_FindInParents_TisUIDraggableCamera_t106_m1429_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483704);
		s_Il2CppMethodIntialized = true;
	}
	{
		Component_t107 * L_0 = (__this->___target_8);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		UIDraggableCamera_t106 * L_2 = (__this->___draggableCamera_7);
		bool L_3 = Object_op_Equality_m1245(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		Component_t107 * L_4 = (__this->___target_8);
		NullCheck(L_4);
		UIDraggableCamera_t106 * L_5 = Component_GetComponent_TisUIDraggableCamera_t106_m1427(L_4, /*hidden argument*/Component_GetComponent_TisUIDraggableCamera_t106_m1427_MethodInfo_var);
		__this->___draggableCamera_7 = L_5;
		UIDraggableCamera_t106 * L_6 = (__this->___draggableCamera_7);
		bool L_7 = Object_op_Equality_m1245(NULL /*static, unused*/, L_6, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		Component_t107 * L_8 = (__this->___target_8);
		NullCheck(L_8);
		GameObject_t17 * L_9 = Component_get_gameObject_m1246(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		UIDraggableCamera_t106 * L_10 = GameObject_AddComponent_TisUIDraggableCamera_t106_m1428(L_9, /*hidden argument*/GameObject_AddComponent_TisUIDraggableCamera_t106_m1428_MethodInfo_var);
		__this->___draggableCamera_7 = L_10;
	}

IL_005a:
	{
		__this->___target_8 = (Component_t107 *)NULL;
		goto IL_0088;
	}

IL_0066:
	{
		UIDraggableCamera_t106 * L_11 = (__this->___draggableCamera_7);
		bool L_12 = Object_op_Equality_m1245(NULL /*static, unused*/, L_11, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0088;
		}
	}
	{
		GameObject_t17 * L_13 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		UIDraggableCamera_t106 * L_14 = NGUITools_FindInParents_TisUIDraggableCamera_t106_m1429(NULL /*static, unused*/, L_13, /*hidden argument*/NGUITools_FindInParents_TisUIDraggableCamera_t106_m1429_MethodInfo_var);
		__this->___draggableCamera_7 = L_14;
	}

IL_0088:
	{
		return;
	}
}
// System.Void UIDragCamera::OnPress(System.Boolean)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIDragCamera_OnPress_m259 (UIDragCamera_t108 * __this, bool ___isPressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		UIDraggableCamera_t106 * L_3 = (__this->___draggableCamera_7);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		UIDraggableCamera_t106 * L_5 = (__this->___draggableCamera_7);
		bool L_6 = ___isPressed;
		NullCheck(L_5);
		UIDraggableCamera_Press_m281(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UIDragCamera::OnDrag(UnityEngine.Vector2)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIDragCamera_OnDrag_m260 (UIDragCamera_t108 * __this, Vector2_t55  ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		UIDraggableCamera_t106 * L_3 = (__this->___draggableCamera_7);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		UIDraggableCamera_t106 * L_5 = (__this->___draggableCamera_7);
		Vector2_t55  L_6 = ___delta;
		NullCheck(L_5);
		UIDraggableCamera_Drag_m282(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UIDragCamera::OnScroll(System.Single)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIDragCamera_OnScroll_m261 (UIDragCamera_t108 * __this, float ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		UIDraggableCamera_t106 * L_3 = (__this->___draggableCamera_7);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		UIDraggableCamera_t106 * L_5 = (__this->___draggableCamera_7);
		float L_6 = ___delta;
		NullCheck(L_5);
		UIDraggableCamera_Scroll_m283(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// UIDragObject/DragEffect
#include "AssemblyU2DCSharp_UIDragObject_DragEffect.h"
#ifndef _MSC_VER
#else
#endif
// UIDragObject/DragEffect
#include "AssemblyU2DCSharp_UIDragObject_DragEffectMethodDeclarations.h"



// UIDragObject
#include "AssemblyU2DCSharp_UIDragObject.h"
#ifndef _MSC_VER
#else
#endif
// UIDragObject
#include "AssemblyU2DCSharp_UIDragObjectMethodDeclarations.h"

// SpringPosition
#include "AssemblyU2DCSharp_SpringPosition.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
struct Component_t107;
struct SpringPosition_t194;
// Declaration !!0 UnityEngine.Component::GetComponent<SpringPosition>()
// !!0 UnityEngine.Component::GetComponent<SpringPosition>()
#define Component_GetComponent_TisSpringPosition_t194_m1430(__this, method) (( SpringPosition_t194 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void UIDragObject::.ctor()
extern "C" void UIDragObject__ctor_m262 (UIDragObject_t111 * __this, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = Vector3_get_one_m1289(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scale_8 = L_0;
		__this->___dragEffect_11 = 2;
		__this->___momentumAmount_12 = (35.0f);
		Vector3_t48  L_1 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mMomentum_17 = L_1;
		IgnoreTimeScale__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIDragObject::FindPanel()
extern TypeInfo* UIPanel_t110_il2cpp_TypeInfo_var;
extern "C" void UIDragObject_FindPanel_m263 (UIDragObject_t111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIPanel_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	UIDragObject_t111 * G_B2_0 = {0};
	UIDragObject_t111 * G_B1_0 = {0};
	UIPanel_t110 * G_B3_0 = {0};
	UIDragObject_t111 * G_B3_1 = {0};
	{
		Transform_t8 * L_0 = (__this->___target_7);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0028;
		}
	}
	{
		Transform_t8 * L_2 = (__this->___target_7);
		NullCheck(L_2);
		Transform_t8 * L_3 = Component_get_transform_m1253(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIPanel_t110_il2cpp_TypeInfo_var);
		UIPanel_t110 * L_4 = UIPanel_Find_m1040(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = ((UIPanel_t110 *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		G_B3_1->___mPanel_15 = G_B3_0;
		UIPanel_t110 * L_5 = (__this->___mPanel_15);
		bool L_6 = Object_op_Equality_m1245(NULL /*static, unused*/, L_5, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		__this->___restrictWithinPanel_10 = 0;
	}

IL_0046:
	{
		return;
	}
}
// System.Void UIDragObject::OnPress(System.Boolean)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var;
extern "C" void UIDragObject_OnPress_m264 (UIDragObject_t111 * __this, bool ___pressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483705);
		s_Il2CppMethodIntialized = true;
	}
	SpringPosition_t194 * V_0 = {0};
	Transform_t8 * V_1 = {0};
	UIDragObject_t111 * G_B14_0 = {0};
	UIDragObject_t111 * G_B13_0 = {0};
	Quaternion_t50  G_B15_0 = {0};
	UIDragObject_t111 * G_B15_1 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0191;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0191;
		}
	}
	{
		Transform_t8 * L_3 = (__this->___target_7);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0191;
		}
	}
	{
		bool L_5 = ___pressed;
		if (!L_5)
		{
			goto IL_012f;
		}
	}
	{
		bool L_6 = (__this->___mPressed_16);
		if (L_6)
		{
			goto IL_012a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		int32_t L_7 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouchID_31;
		__this->___mTouchID_20 = L_7;
		Vector3_t48  L_8 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mMomentum_17 = L_8;
		__this->___mPressed_16 = 1;
		__this->___mStarted_21 = 0;
		__this->___mScroll_18 = (0.0f);
		bool L_9 = (__this->___restrictWithinPanel_10);
		if (!L_9)
		{
			goto IL_008e;
		}
	}
	{
		UIPanel_t110 * L_10 = (__this->___mPanel_15);
		bool L_11 = Object_op_Equality_m1245(NULL /*static, unused*/, L_10, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		UIDragObject_FindPanel_m263(__this, /*hidden argument*/NULL);
	}

IL_008e:
	{
		bool L_12 = (__this->___restrictWithinPanel_10);
		if (!L_12)
		{
			goto IL_00b5;
		}
	}
	{
		UIPanel_t110 * L_13 = (__this->___mPanel_15);
		NullCheck(L_13);
		Transform_t8 * L_14 = UIPanel_get_cachedTransform_m1006(L_13, /*hidden argument*/NULL);
		Transform_t8 * L_15 = (__this->___target_7);
		Bounds_t113  L_16 = NGUIMath_CalculateRelativeWidgetBounds_m533(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		__this->___mBounds_19 = L_16;
	}

IL_00b5:
	{
		Transform_t8 * L_17 = (__this->___target_7);
		NullCheck(L_17);
		SpringPosition_t194 * L_18 = Component_GetComponent_TisSpringPosition_t194_m1430(L_17, /*hidden argument*/Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var);
		V_0 = L_18;
		SpringPosition_t194 * L_19 = V_0;
		bool L_20 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_19, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00d4;
		}
	}
	{
		SpringPosition_t194 * L_21 = V_0;
		NullCheck(L_21);
		Behaviour_set_enabled_m1272(L_21, 0, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Camera_t7 * L_22 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentCamera_30;
		NullCheck(L_22);
		Transform_t8 * L_23 = Component_get_transform_m1253(L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		UIPanel_t110 * L_24 = (__this->___mPanel_15);
		bool L_25 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_24, (Object_t69 *)NULL, /*hidden argument*/NULL);
		G_B13_0 = __this;
		if (!L_25)
		{
			G_B14_0 = __this;
			goto IL_0106;
		}
	}
	{
		UIPanel_t110 * L_26 = (__this->___mPanel_15);
		NullCheck(L_26);
		Transform_t8 * L_27 = UIPanel_get_cachedTransform_m1006(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Quaternion_t50  L_28 = Transform_get_rotation_m1283(L_27, /*hidden argument*/NULL);
		G_B15_0 = L_28;
		G_B15_1 = G_B13_0;
		goto IL_010c;
	}

IL_0106:
	{
		Transform_t8 * L_29 = V_1;
		NullCheck(L_29);
		Quaternion_t50  L_30 = Transform_get_rotation_m1283(L_29, /*hidden argument*/NULL);
		G_B15_0 = L_30;
		G_B15_1 = G_B14_0;
	}

IL_010c:
	{
		Vector3_t48  L_31 = Vector3_get_back_m1431(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t48  L_32 = Quaternion_op_Multiply_m1330(NULL /*static, unused*/, G_B15_0, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Vector3_t48  L_33 = RaycastHit_get_point_m1324((&((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___lastHit_28), /*hidden argument*/NULL);
		Plane_t112  L_34 = {0};
		Plane__ctor_m1432(&L_34, L_32, L_33, /*hidden argument*/NULL);
		NullCheck(G_B15_1);
		G_B15_1->___mPlane_13 = L_34;
	}

IL_012a:
	{
		goto IL_0191;
	}

IL_012f:
	{
		bool L_35 = (__this->___mPressed_16);
		if (!L_35)
		{
			goto IL_0191;
		}
	}
	{
		int32_t L_36 = (__this->___mTouchID_20);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		int32_t L_37 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouchID_31;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_0191;
		}
	}
	{
		__this->___mPressed_16 = 0;
		bool L_38 = (__this->___restrictWithinPanel_10);
		if (!L_38)
		{
			goto IL_0191;
		}
	}
	{
		UIPanel_t110 * L_39 = (__this->___mPanel_15);
		NullCheck(L_39);
		int32_t L_40 = UIPanel_get_clipping_m1012(L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0191;
		}
	}
	{
		int32_t L_41 = (__this->___dragEffect_11);
		if ((!(((uint32_t)L_41) == ((uint32_t)2))))
		{
			goto IL_0191;
		}
	}
	{
		UIPanel_t110 * L_42 = (__this->___mPanel_15);
		Transform_t8 * L_43 = (__this->___target_7);
		Bounds_t113 * L_44 = &(__this->___mBounds_19);
		NullCheck(L_42);
		UIPanel_ConstrainTargetToBounds_m1037(L_42, L_43, L_44, 0, /*hidden argument*/NULL);
	}

IL_0191:
	{
		return;
	}
}
// System.Void UIDragObject::OnDrag(UnityEngine.Vector2)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIDragObject_OnDrag_m265 (UIDragObject_t111 * __this, Vector2_t55  ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t315  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t48  V_2 = {0};
	Vector3_t48  V_3 = {0};
	Vector3_t48  V_4 = {0};
	{
		bool L_0 = (__this->___mPressed_16);
		if (!L_0)
		{
			goto IL_0208;
		}
	}
	{
		int32_t L_1 = (__this->___mTouchID_20);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		int32_t L_2 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouchID_31;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0208;
		}
	}
	{
		bool L_3 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0208;
		}
	}
	{
		GameObject_t17 * L_4 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_5 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0208;
		}
	}
	{
		Transform_t8 * L_6 = (__this->___target_7);
		bool L_7 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_6, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0208;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		MouseOrTouch_t216 * L_8 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_8);
		L_8->___clickNotification_8 = 2;
		Camera_t7 * L_9 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentCamera_30;
		MouseOrTouch_t216 * L_10 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_10);
		Vector2_t55  L_11 = (L_10->___pos_0);
		Vector3_t48  L_12 = Vector2_op_Implicit_m1320(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Ray_t315  L_13 = Camera_ScreenPointToRay_m1433(L_9, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		V_1 = (0.0f);
		Plane_t112 * L_14 = &(__this->___mPlane_13);
		Ray_t315  L_15 = V_0;
		bool L_16 = Plane_Raycast_m1434(L_14, L_15, (&V_1), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0208;
		}
	}
	{
		float L_17 = V_1;
		Vector3_t48  L_18 = Ray_GetPoint_m1435((&V_0), L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		Vector3_t48  L_19 = V_2;
		Vector3_t48  L_20 = (__this->___mLastPos_14);
		Vector3_t48  L_21 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		Vector3_t48  L_22 = V_2;
		__this->___mLastPos_14 = L_22;
		bool L_23 = (__this->___mStarted_21);
		if (L_23)
		{
			goto IL_00ba;
		}
	}
	{
		__this->___mStarted_21 = 1;
		Vector3_t48  L_24 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_24;
	}

IL_00ba:
	{
		float L_25 = ((&V_3)->___x_1);
		if ((!(((float)L_25) == ((float)(0.0f)))))
		{
			goto IL_00dc;
		}
	}
	{
		float L_26 = ((&V_3)->___y_2);
		if ((((float)L_26) == ((float)(0.0f))))
		{
			goto IL_0103;
		}
	}

IL_00dc:
	{
		Transform_t8 * L_27 = (__this->___target_7);
		Vector3_t48  L_28 = V_3;
		NullCheck(L_27);
		Vector3_t48  L_29 = Transform_InverseTransformDirection_m1436(L_27, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
		Vector3_t48  L_30 = (__this->___scale_8);
		Vector3_Scale_m1437((&V_3), L_30, /*hidden argument*/NULL);
		Transform_t8 * L_31 = (__this->___target_7);
		Vector3_t48  L_32 = V_3;
		NullCheck(L_31);
		Vector3_t48  L_33 = Transform_TransformDirection_m1438(L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
	}

IL_0103:
	{
		int32_t L_34 = (__this->___dragEffect_11);
		if (!L_34)
		{
			goto IL_0141;
		}
	}
	{
		Vector3_t48  L_35 = (__this->___mMomentum_17);
		Vector3_t48  L_36 = (__this->___mMomentum_17);
		Vector3_t48  L_37 = V_3;
		float L_38 = (__this->___momentumAmount_12);
		Vector3_t48  L_39 = Vector3_op_Multiply_m1362(NULL /*static, unused*/, L_37, ((float)((float)(0.01f)*(float)L_38)), /*hidden argument*/NULL);
		Vector3_t48  L_40 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_36, L_39, /*hidden argument*/NULL);
		Vector3_t48  L_41 = Vector3_Lerp_m1439(NULL /*static, unused*/, L_35, L_40, (0.67f), /*hidden argument*/NULL);
		__this->___mMomentum_17 = L_41;
	}

IL_0141:
	{
		bool L_42 = (__this->___restrictWithinPanel_10);
		if (!L_42)
		{
			goto IL_01f1;
		}
	}
	{
		Transform_t8 * L_43 = (__this->___target_7);
		NullCheck(L_43);
		Vector3_t48  L_44 = Transform_get_localPosition_m1263(L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		Transform_t8 * L_45 = (__this->___target_7);
		Transform_t8 * L_46 = L_45;
		NullCheck(L_46);
		Vector3_t48  L_47 = Transform_get_position_m1282(L_46, /*hidden argument*/NULL);
		Vector3_t48  L_48 = V_3;
		Vector3_t48  L_49 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_position_m1261(L_46, L_49, /*hidden argument*/NULL);
		Bounds_t113 * L_50 = &(__this->___mBounds_19);
		Bounds_t113 * L_51 = &(__this->___mBounds_19);
		Vector3_t48  L_52 = Bounds_get_center_m1440(L_51, /*hidden argument*/NULL);
		Transform_t8 * L_53 = (__this->___target_7);
		NullCheck(L_53);
		Vector3_t48  L_54 = Transform_get_localPosition_m1263(L_53, /*hidden argument*/NULL);
		Vector3_t48  L_55 = V_4;
		Vector3_t48  L_56 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/NULL);
		Vector3_t48  L_57 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_52, L_56, /*hidden argument*/NULL);
		Bounds_set_center_m1441(L_50, L_57, /*hidden argument*/NULL);
		int32_t L_58 = (__this->___dragEffect_11);
		if ((((int32_t)L_58) == ((int32_t)2)))
		{
			goto IL_01ec;
		}
	}
	{
		UIPanel_t110 * L_59 = (__this->___mPanel_15);
		NullCheck(L_59);
		int32_t L_60 = UIPanel_get_clipping_m1012(L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_01ec;
		}
	}
	{
		UIPanel_t110 * L_61 = (__this->___mPanel_15);
		Transform_t8 * L_62 = (__this->___target_7);
		Bounds_t113 * L_63 = &(__this->___mBounds_19);
		NullCheck(L_61);
		bool L_64 = UIPanel_ConstrainTargetToBounds_m1037(L_61, L_62, L_63, 1, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_01ec;
		}
	}
	{
		Vector3_t48  L_65 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mMomentum_17 = L_65;
		__this->___mScroll_18 = (0.0f);
	}

IL_01ec:
	{
		goto IL_0208;
	}

IL_01f1:
	{
		Transform_t8 * L_66 = (__this->___target_7);
		Transform_t8 * L_67 = L_66;
		NullCheck(L_67);
		Vector3_t48  L_68 = Transform_get_position_m1282(L_67, /*hidden argument*/NULL);
		Vector3_t48  L_69 = V_3;
		Vector3_t48  L_70 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_68, L_69, /*hidden argument*/NULL);
		NullCheck(L_67);
		Transform_set_position_m1261(L_67, L_70, /*hidden argument*/NULL);
	}

IL_0208:
	{
		return;
	}
}
// System.Void UIDragObject::LateUpdate()
extern const MethodInfo* Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var;
extern "C" void UIDragObject_LateUpdate_m266 (UIDragObject_t111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483705);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	SpringPosition_t194 * V_1 = {0};
	SpringPosition_t194 * V_2 = {0};
	{
		float L_0 = IgnoreTimeScale_UpdateRealTimeDelta_m495(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t8 * L_1 = (__this->___target_7);
		bool L_2 = Object_op_Equality_m1245(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		bool L_3 = (__this->___mPressed_16);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		Transform_t8 * L_4 = (__this->___target_7);
		NullCheck(L_4);
		SpringPosition_t194 * L_5 = Component_GetComponent_TisSpringPosition_t194_m1430(L_4, /*hidden argument*/Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var);
		V_1 = L_5;
		SpringPosition_t194 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_6, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		SpringPosition_t194 * L_8 = V_1;
		NullCheck(L_8);
		Behaviour_set_enabled_m1272(L_8, 0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		__this->___mScroll_18 = (0.0f);
		goto IL_0188;
	}

IL_0053:
	{
		Vector3_t48  L_9 = (__this->___mMomentum_17);
		Vector3_t48  L_10 = (__this->___scale_8);
		float L_11 = (__this->___mScroll_18);
		Vector3_t48  L_12 = Vector3_op_Multiply_m1362(NULL /*static, unused*/, L_10, ((float)((float)((-L_11))*(float)(0.05f))), /*hidden argument*/NULL);
		Vector3_t48  L_13 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_9, L_12, /*hidden argument*/NULL);
		__this->___mMomentum_17 = L_13;
		float L_14 = (__this->___mScroll_18);
		float L_15 = V_0;
		float L_16 = NGUIMath_SpringLerp_m539(NULL /*static, unused*/, L_14, (0.0f), (20.0f), L_15, /*hidden argument*/NULL);
		__this->___mScroll_18 = L_16;
		Vector3_t48 * L_17 = &(__this->___mMomentum_17);
		float L_18 = Vector3_get_magnitude_m1335(L_17, /*hidden argument*/NULL);
		if ((!(((float)L_18) > ((float)(0.0001f)))))
		{
			goto IL_017d;
		}
	}
	{
		UIPanel_t110 * L_19 = (__this->___mPanel_15);
		bool L_20 = Object_op_Equality_m1245(NULL /*static, unused*/, L_19, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00c4;
		}
	}
	{
		UIDragObject_FindPanel_m263(__this, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		UIPanel_t110 * L_21 = (__this->___mPanel_15);
		bool L_22 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_21, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0178;
		}
	}
	{
		Transform_t8 * L_23 = (__this->___target_7);
		Transform_t8 * L_24 = L_23;
		NullCheck(L_24);
		Vector3_t48  L_25 = Transform_get_position_m1282(L_24, /*hidden argument*/NULL);
		Vector3_t48 * L_26 = &(__this->___mMomentum_17);
		float L_27 = V_0;
		Vector3_t48  L_28 = NGUIMath_SpringDampen_m536(NULL /*static, unused*/, L_26, (9.0f), L_27, /*hidden argument*/NULL);
		Vector3_t48  L_29 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_25, L_28, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_m1261(L_24, L_29, /*hidden argument*/NULL);
		bool L_30 = (__this->___restrictWithinPanel_10);
		if (!L_30)
		{
			goto IL_0177;
		}
	}
	{
		UIPanel_t110 * L_31 = (__this->___mPanel_15);
		NullCheck(L_31);
		int32_t L_32 = UIPanel_get_clipping_m1012(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0177;
		}
	}
	{
		UIPanel_t110 * L_33 = (__this->___mPanel_15);
		NullCheck(L_33);
		Transform_t8 * L_34 = UIPanel_get_cachedTransform_m1006(L_33, /*hidden argument*/NULL);
		Transform_t8 * L_35 = (__this->___target_7);
		Bounds_t113  L_36 = NGUIMath_CalculateRelativeWidgetBounds_m533(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		__this->___mBounds_19 = L_36;
		UIPanel_t110 * L_37 = (__this->___mPanel_15);
		Transform_t8 * L_38 = (__this->___target_7);
		Bounds_t113 * L_39 = &(__this->___mBounds_19);
		int32_t L_40 = (__this->___dragEffect_11);
		NullCheck(L_37);
		bool L_41 = UIPanel_ConstrainTargetToBounds_m1037(L_37, L_38, L_39, ((((int32_t)L_40) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0177;
		}
	}
	{
		Transform_t8 * L_42 = (__this->___target_7);
		NullCheck(L_42);
		SpringPosition_t194 * L_43 = Component_GetComponent_TisSpringPosition_t194_m1430(L_42, /*hidden argument*/Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var);
		V_2 = L_43;
		SpringPosition_t194 * L_44 = V_2;
		bool L_45 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_44, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0177;
		}
	}
	{
		SpringPosition_t194 * L_46 = V_2;
		NullCheck(L_46);
		Behaviour_set_enabled_m1272(L_46, 0, /*hidden argument*/NULL);
	}

IL_0177:
	{
		return;
	}

IL_0178:
	{
		goto IL_0188;
	}

IL_017d:
	{
		__this->___mScroll_18 = (0.0f);
	}

IL_0188:
	{
		Vector3_t48 * L_47 = &(__this->___mMomentum_17);
		float L_48 = V_0;
		NGUIMath_SpringDampen_m536(NULL /*static, unused*/, L_47, (9.0f), L_48, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIDragObject::OnScroll(System.Single)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void UIDragObject_OnScroll_m267 (UIDragObject_t111 * __this, float ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		float L_3 = (__this->___mScroll_18);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Sign_m1442(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		float L_5 = ___delta;
		float L_6 = Mathf_Sign_m1442(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if ((((float)L_4) == ((float)L_6)))
		{
			goto IL_003c;
		}
	}
	{
		__this->___mScroll_18 = (0.0f);
	}

IL_003c:
	{
		float L_7 = (__this->___mScroll_18);
		float L_8 = ___delta;
		float L_9 = (__this->___scrollWheelFactor_9);
		__this->___mScroll_18 = ((float)((float)L_7+(float)((float)((float)L_8*(float)L_9))));
	}

IL_0051:
	{
		return;
	}
}
// UIDragPanelContents
#include "AssemblyU2DCSharp_UIDragPanelContents.h"
#ifndef _MSC_VER
#else
#endif
// UIDragPanelContents
#include "AssemblyU2DCSharp_UIDragPanelContentsMethodDeclarations.h"

struct Component_t107;
struct UIDraggablePanel_t100;
// Declaration !!0 UnityEngine.Component::GetComponent<UIDraggablePanel>()
// !!0 UnityEngine.Component::GetComponent<UIDraggablePanel>()
#define Component_GetComponent_TisUIDraggablePanel_t100_m1443(__this, method) (( UIDraggablePanel_t100 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)
struct GameObject_t17;
struct UIDraggablePanel_t100;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UIDraggablePanel>()
// !!0 UnityEngine.GameObject::AddComponent<UIDraggablePanel>()
#define GameObject_AddComponent_TisUIDraggablePanel_t100_m1444(__this, method) (( UIDraggablePanel_t100 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1243_gshared)(__this, method)


// System.Void UIDragPanelContents::.ctor()
extern "C" void UIDragPanelContents__ctor_m268 (UIDragPanelContents_t114 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIDragPanelContents::Awake()
extern const MethodInfo* Component_GetComponent_TisUIDraggablePanel_t100_m1443_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisUIDraggablePanel_t100_m1444_MethodInfo_var;
extern "C" void UIDragPanelContents_Awake_m269 (UIDragPanelContents_t114 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisUIDraggablePanel_t100_m1443_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483706);
		GameObject_AddComponent_TisUIDraggablePanel_t100_m1444_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		s_Il2CppMethodIntialized = true;
	}
	{
		UIPanel_t110 * L_0 = (__this->___panel_3);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0061;
		}
	}
	{
		UIDraggablePanel_t100 * L_2 = (__this->___draggablePanel_2);
		bool L_3 = Object_op_Equality_m1245(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		UIPanel_t110 * L_4 = (__this->___panel_3);
		NullCheck(L_4);
		UIDraggablePanel_t100 * L_5 = Component_GetComponent_TisUIDraggablePanel_t100_m1443(L_4, /*hidden argument*/Component_GetComponent_TisUIDraggablePanel_t100_m1443_MethodInfo_var);
		__this->___draggablePanel_2 = L_5;
		UIDraggablePanel_t100 * L_6 = (__this->___draggablePanel_2);
		bool L_7 = Object_op_Equality_m1245(NULL /*static, unused*/, L_6, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		UIPanel_t110 * L_8 = (__this->___panel_3);
		NullCheck(L_8);
		GameObject_t17 * L_9 = Component_get_gameObject_m1246(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		UIDraggablePanel_t100 * L_10 = GameObject_AddComponent_TisUIDraggablePanel_t100_m1444(L_9, /*hidden argument*/GameObject_AddComponent_TisUIDraggablePanel_t100_m1444_MethodInfo_var);
		__this->___draggablePanel_2 = L_10;
	}

IL_005a:
	{
		__this->___panel_3 = (UIPanel_t110 *)NULL;
	}

IL_0061:
	{
		return;
	}
}
// System.Void UIDragPanelContents::Start()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var;
extern "C" void UIDragPanelContents_Start_m270 (UIDragPanelContents_t114 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	{
		UIDraggablePanel_t100 * L_0 = (__this->___draggablePanel_2);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		UIDraggablePanel_t100 * L_3 = NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415(NULL /*static, unused*/, L_2, /*hidden argument*/NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var);
		__this->___draggablePanel_2 = L_3;
	}

IL_0022:
	{
		return;
	}
}
// System.Void UIDragPanelContents::OnPress(System.Boolean)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIDragPanelContents_OnPress_m271 (UIDragPanelContents_t114 * __this, bool ___pressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		UIDraggablePanel_t100 * L_3 = (__this->___draggablePanel_2);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		UIDraggablePanel_t100 * L_5 = (__this->___draggablePanel_2);
		bool L_6 = ___pressed;
		NullCheck(L_5);
		UIDraggablePanel_Press_m310(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void UIDragPanelContents::OnDrag(UnityEngine.Vector2)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIDragPanelContents_OnDrag_m272 (UIDragPanelContents_t114 * __this, Vector2_t55  ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		UIDraggablePanel_t100 * L_3 = (__this->___draggablePanel_2);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		UIDraggablePanel_t100 * L_5 = (__this->___draggablePanel_2);
		NullCheck(L_5);
		UIDraggablePanel_Drag_m311(L_5, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void UIDragPanelContents::OnScroll(System.Single)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIDragPanelContents_OnScroll_m273 (UIDragPanelContents_t114 * __this, float ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		UIDraggablePanel_t100 * L_3 = (__this->___draggablePanel_2);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		UIDraggablePanel_t100 * L_5 = (__this->___draggablePanel_2);
		float L_6 = ___delta;
		NullCheck(L_5);
		UIDraggablePanel_Scroll_m312(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UIRoot
#include "AssemblyU2DCSharp_UIRoot.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// SpringPosition
#include "AssemblyU2DCSharp_SpringPositionMethodDeclarations.h"
// UIRoot
#include "AssemblyU2DCSharp_UIRootMethodDeclarations.h"
struct Component_t107;
struct Camera_t7;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t7_m1445(__this, method) (( Camera_t7 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)
struct NGUITools_t167;
struct UIRoot_t115;
struct GameObject_t17;
// Declaration !!0 NGUITools::FindInParents<UIRoot>(UnityEngine.GameObject)
// !!0 NGUITools::FindInParents<UIRoot>(UnityEngine.GameObject)
#define NGUITools_FindInParents_TisUIRoot_t115_m1446(__this /* static, unused */, p0, method) (( UIRoot_t115 * (*) (Object_t * /* static, unused */, GameObject_t17 *, const MethodInfo*))NGUITools_FindInParents_TisObject_t_m1314_gshared)(__this /* static, unused */, p0, method)


// System.Void UIDraggableCamera::.ctor()
extern "C" void UIDraggableCamera__ctor_m274 (UIDraggableCamera_t106 * __this, const MethodInfo* method)
{
	{
		Vector2_t55  L_0 = Vector2_get_one_m1447(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scale_8 = L_0;
		__this->___dragEffect_10 = 2;
		__this->___smoothDragStart_11 = 1;
		__this->___momentumAmount_12 = (35.0f);
		Vector2_t55  L_1 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mMomentum_16 = L_1;
		IgnoreTimeScale__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UIDraggableCamera::get_currentMomentum()
extern "C" Vector2_t55  UIDraggableCamera_get_currentMomentum_m275 (UIDraggableCamera_t106 * __this, const MethodInfo* method)
{
	{
		Vector2_t55  L_0 = (__this->___mMomentum_16);
		return L_0;
	}
}
// System.Void UIDraggableCamera::set_currentMomentum(UnityEngine.Vector2)
extern "C" void UIDraggableCamera_set_currentMomentum_m276 (UIDraggableCamera_t106 * __this, Vector2_t55  ___value, const MethodInfo* method)
{
	{
		Vector2_t55  L_0 = ___value;
		__this->___mMomentum_16 = L_0;
		return;
	}
}
// System.Void UIDraggableCamera::Awake()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t7_m1445_MethodInfo_var;
extern "C" void UIDraggableCamera_Awake_m277 (UIDraggableCamera_t106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Component_GetComponent_TisCamera_t7_m1445_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t7 * L_0 = Component_GetComponent_TisCamera_t7_m1445(__this, /*hidden argument*/Component_GetComponent_TisCamera_t7_m1445_MethodInfo_var);
		__this->___mCam_13 = L_0;
		Transform_t8 * L_1 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_14 = L_1;
		Transform_t8 * L_2 = (__this->___rootForBounds_7);
		bool L_3 = Object_op_Equality_m1245(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		GameObject_t17 * L_4 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		String_t* L_5 = NGUITools_GetHierarchy_m557(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1269(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral45, /*hidden argument*/NULL);
		Debug_LogError_m1448(NULL /*static, unused*/, L_6, __this, /*hidden argument*/NULL);
		Behaviour_set_enabled_m1272(__this, 0, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void UIDraggableCamera::Start()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* NGUITools_FindInParents_TisUIRoot_t115_m1446_MethodInfo_var;
extern "C" void UIDraggableCamera_Start_m278 (UIDraggableCamera_t106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		NGUITools_FindInParents_TisUIRoot_t115_m1446_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t17 * L_0 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		UIRoot_t115 * L_1 = NGUITools_FindInParents_TisUIRoot_t115_m1446(NULL /*static, unused*/, L_0, /*hidden argument*/NGUITools_FindInParents_TisUIRoot_t115_m1446_MethodInfo_var);
		__this->___mRoot_19 = L_1;
		return;
	}
}
// UnityEngine.Vector3 UIDraggableCamera::CalculateConstrainOffset()
extern "C" Vector3_t48  UIDraggableCamera_CalculateConstrainOffset_m279 (UIDraggableCamera_t106 * __this, const MethodInfo* method)
{
	Vector3_t48  V_0 = {0};
	Vector3_t48  V_1 = {0};
	Vector2_t55  V_2 = {0};
	Vector2_t55  V_3 = {0};
	Rect_t158  V_4 = {0};
	Rect_t158  V_5 = {0};
	Rect_t158  V_6 = {0};
	Rect_t158  V_7 = {0};
	Vector3_t48  V_8 = {0};
	Vector3_t48  V_9 = {0};
	Vector3_t48  V_10 = {0};
	Vector3_t48  V_11 = {0};
	{
		Transform_t8 * L_0 = (__this->___rootForBounds_7);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		Transform_t8 * L_2 = (__this->___rootForBounds_7);
		NullCheck(L_2);
		int32_t L_3 = Transform_get_childCount_m1418(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}

IL_0021:
	{
		Vector3_t48  L_4 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_4;
	}

IL_0027:
	{
		Camera_t7 * L_5 = (__this->___mCam_13);
		NullCheck(L_5);
		Rect_t158  L_6 = Camera_get_rect_m1449(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		float L_7 = Rect_get_xMin_m1450((&V_4), /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_width_m1257(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t7 * L_9 = (__this->___mCam_13);
		NullCheck(L_9);
		Rect_t158  L_10 = Camera_get_rect_m1449(L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = Rect_get_yMin_m1451((&V_5), /*hidden argument*/NULL);
		int32_t L_12 = Screen_get_height_m1259(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3__ctor_m1278((&V_0), ((float)((float)L_7*(float)(((float)L_8)))), ((float)((float)L_11*(float)(((float)L_12)))), (0.0f), /*hidden argument*/NULL);
		Camera_t7 * L_13 = (__this->___mCam_13);
		NullCheck(L_13);
		Rect_t158  L_14 = Camera_get_rect_m1449(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = Rect_get_xMax_m1452((&V_6), /*hidden argument*/NULL);
		int32_t L_16 = Screen_get_width_m1257(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t7 * L_17 = (__this->___mCam_13);
		NullCheck(L_17);
		Rect_t158  L_18 = Camera_get_rect_m1449(L_17, /*hidden argument*/NULL);
		V_7 = L_18;
		float L_19 = Rect_get_yMax_m1453((&V_7), /*hidden argument*/NULL);
		int32_t L_20 = Screen_get_height_m1259(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3__ctor_m1278((&V_1), ((float)((float)L_15*(float)(((float)L_16)))), ((float)((float)L_19*(float)(((float)L_20)))), (0.0f), /*hidden argument*/NULL);
		Camera_t7 * L_21 = (__this->___mCam_13);
		Vector3_t48  L_22 = V_0;
		NullCheck(L_21);
		Vector3_t48  L_23 = Camera_ScreenToWorldPoint_m1454(L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		Camera_t7 * L_24 = (__this->___mCam_13);
		Vector3_t48  L_25 = V_1;
		NullCheck(L_24);
		Vector3_t48  L_26 = Camera_ScreenToWorldPoint_m1454(L_24, L_25, /*hidden argument*/NULL);
		V_1 = L_26;
		Bounds_t113 * L_27 = &(__this->___mBounds_17);
		Vector3_t48  L_28 = Bounds_get_min_m1455(L_27, /*hidden argument*/NULL);
		V_8 = L_28;
		float L_29 = ((&V_8)->___x_1);
		Bounds_t113 * L_30 = &(__this->___mBounds_17);
		Vector3_t48  L_31 = Bounds_get_min_m1455(L_30, /*hidden argument*/NULL);
		V_9 = L_31;
		float L_32 = ((&V_9)->___y_2);
		Vector2__ctor_m1337((&V_2), L_29, L_32, /*hidden argument*/NULL);
		Bounds_t113 * L_33 = &(__this->___mBounds_17);
		Vector3_t48  L_34 = Bounds_get_max_m1456(L_33, /*hidden argument*/NULL);
		V_10 = L_34;
		float L_35 = ((&V_10)->___x_1);
		Bounds_t113 * L_36 = &(__this->___mBounds_17);
		Vector3_t48  L_37 = Bounds_get_max_m1456(L_36, /*hidden argument*/NULL);
		V_11 = L_37;
		float L_38 = ((&V_11)->___y_2);
		Vector2__ctor_m1337((&V_3), L_35, L_38, /*hidden argument*/NULL);
		Vector2_t55  L_39 = V_2;
		Vector2_t55  L_40 = V_3;
		Vector3_t48  L_41 = V_0;
		Vector2_t55  L_42 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		Vector3_t48  L_43 = V_1;
		Vector2_t55  L_44 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		Vector2_t55  L_45 = NGUIMath_ConstrainRect_m530(NULL /*static, unused*/, L_39, L_40, L_42, L_44, /*hidden argument*/NULL);
		Vector3_t48  L_46 = Vector2_op_Implicit_m1320(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		return L_46;
	}
}
// System.Boolean UIDraggableCamera::ConstrainToBounds(System.Boolean)
extern "C" bool UIDraggableCamera_ConstrainToBounds_m280 (UIDraggableCamera_t106 * __this, bool ___immediate, const MethodInfo* method)
{
	Vector3_t48  V_0 = {0};
	SpringPosition_t194 * V_1 = {0};
	{
		Transform_t8 * L_0 = (__this->___mTrans_14);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		Transform_t8 * L_2 = (__this->___rootForBounds_7);
		bool L_3 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_008e;
		}
	}
	{
		Vector3_t48  L_4 = UIDraggableCamera_CalculateConstrainOffset_m279(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = Vector3_get_magnitude_m1335((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		bool L_6 = ___immediate;
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		Transform_t8 * L_7 = (__this->___mTrans_14);
		Transform_t8 * L_8 = L_7;
		NullCheck(L_8);
		Vector3_t48  L_9 = Transform_get_position_m1282(L_8, /*hidden argument*/NULL);
		Vector3_t48  L_10 = V_0;
		Vector3_t48  L_11 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_m1261(L_8, L_11, /*hidden argument*/NULL);
		goto IL_008c;
	}

IL_005c:
	{
		GameObject_t17 * L_12 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		Transform_t8 * L_13 = (__this->___mTrans_14);
		NullCheck(L_13);
		Vector3_t48  L_14 = Transform_get_position_m1282(L_13, /*hidden argument*/NULL);
		Vector3_t48  L_15 = V_0;
		Vector3_t48  L_16 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		SpringPosition_t194 * L_17 = SpringPosition_Begin_m728(NULL /*static, unused*/, L_12, L_16, (13.0f), /*hidden argument*/NULL);
		V_1 = L_17;
		SpringPosition_t194 * L_18 = V_1;
		NullCheck(L_18);
		L_18->___ignoreTimeScale_10 = 1;
		SpringPosition_t194 * L_19 = V_1;
		NullCheck(L_19);
		L_19->___worldSpace_9 = 1;
	}

IL_008c:
	{
		return 1;
	}

IL_008e:
	{
		return 0;
	}
}
// System.Void UIDraggableCamera::Press(System.Boolean)
extern const MethodInfo* Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var;
extern "C" void UIDraggableCamera_Press_m281 (UIDraggableCamera_t106 * __this, bool ___isPressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483705);
		s_Il2CppMethodIntialized = true;
	}
	SpringPosition_t194 * V_0 = {0};
	{
		bool L_0 = ___isPressed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		__this->___mDragStarted_20 = 0;
	}

IL_000d:
	{
		Transform_t8 * L_1 = (__this->___rootForBounds_7);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0085;
		}
	}
	{
		bool L_3 = ___isPressed;
		__this->___mPressed_15 = L_3;
		bool L_4 = ___isPressed;
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		Transform_t8 * L_5 = (__this->___rootForBounds_7);
		Bounds_t113  L_6 = NGUIMath_CalculateAbsoluteWidgetBounds_m532(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->___mBounds_17 = L_6;
		Vector2_t55  L_7 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mMomentum_16 = L_7;
		__this->___mScroll_18 = (0.0f);
		SpringPosition_t194 * L_8 = Component_GetComponent_TisSpringPosition_t194_m1430(__this, /*hidden argument*/Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var);
		V_0 = L_8;
		SpringPosition_t194 * L_9 = V_0;
		bool L_10 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_9, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		SpringPosition_t194 * L_11 = V_0;
		NullCheck(L_11);
		Behaviour_set_enabled_m1272(L_11, 0, /*hidden argument*/NULL);
	}

IL_006c:
	{
		goto IL_0085;
	}

IL_0071:
	{
		int32_t L_12 = (__this->___dragEffect_10);
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0085;
		}
	}
	{
		UIDraggableCamera_ConstrainToBounds_m280(__this, 0, /*hidden argument*/NULL);
	}

IL_0085:
	{
		return;
	}
}
// System.Void UIDraggableCamera::Drag(UnityEngine.Vector2)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIDraggableCamera_Drag_m282 (UIDraggableCamera_t106 * __this, Vector2_t55  ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t55  V_0 = {0};
	{
		bool L_0 = (__this->___smoothDragStart_11);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1 = (__this->___mDragStarted_20);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		__this->___mDragStarted_20 = 1;
		return;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		MouseOrTouch_t216 * L_2 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_2);
		L_2->___clickNotification_8 = 2;
		UIRoot_t115 * L_3 = (__this->___mRoot_19);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		Vector2_t55  L_5 = ___delta;
		UIRoot_t115 * L_6 = (__this->___mRoot_19);
		NullCheck(L_6);
		float L_7 = UIRoot_get_pixelSizeAdjustment_m1046(L_6, /*hidden argument*/NULL);
		Vector2_t55  L_8 = Vector2_op_Multiply_m1457(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		___delta = L_8;
	}

IL_004d:
	{
		Vector2_t55  L_9 = ___delta;
		Vector2_t55  L_10 = (__this->___scale_8);
		Vector2_t55  L_11 = Vector2_op_UnaryNegation_m1458(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Vector2_t55  L_12 = Vector2_Scale_m1459(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		Transform_t8 * L_13 = (__this->___mTrans_14);
		Transform_t8 * L_14 = L_13;
		NullCheck(L_14);
		Vector3_t48  L_15 = Transform_get_localPosition_m1263(L_14, /*hidden argument*/NULL);
		Vector2_t55  L_16 = V_0;
		Vector3_t48  L_17 = Vector2_op_Implicit_m1320(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Vector3_t48  L_18 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localPosition_m1265(L_14, L_18, /*hidden argument*/NULL);
		Vector2_t55  L_19 = (__this->___mMomentum_16);
		Vector2_t55  L_20 = (__this->___mMomentum_16);
		Vector2_t55  L_21 = V_0;
		float L_22 = (__this->___momentumAmount_12);
		Vector2_t55  L_23 = Vector2_op_Multiply_m1457(NULL /*static, unused*/, L_21, ((float)((float)(0.01f)*(float)L_22)), /*hidden argument*/NULL);
		Vector2_t55  L_24 = Vector2_op_Addition_m1460(NULL /*static, unused*/, L_20, L_23, /*hidden argument*/NULL);
		Vector2_t55  L_25 = Vector2_Lerp_m1340(NULL /*static, unused*/, L_19, L_24, (0.67f), /*hidden argument*/NULL);
		__this->___mMomentum_16 = L_25;
		int32_t L_26 = (__this->___dragEffect_10);
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			goto IL_00dc;
		}
	}
	{
		bool L_27 = UIDraggableCamera_ConstrainToBounds_m280(__this, 1, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00dc;
		}
	}
	{
		Vector2_t55  L_28 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mMomentum_16 = L_28;
		__this->___mScroll_18 = (0.0f);
	}

IL_00dc:
	{
		return;
	}
}
// System.Void UIDraggableCamera::Scroll(System.Single)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void UIDraggableCamera_Scroll_m283 (UIDraggableCamera_t106 * __this, float ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		float L_3 = (__this->___mScroll_18);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Sign_m1442(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		float L_5 = ___delta;
		float L_6 = Mathf_Sign_m1442(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if ((((float)L_4) == ((float)L_6)))
		{
			goto IL_003c;
		}
	}
	{
		__this->___mScroll_18 = (0.0f);
	}

IL_003c:
	{
		float L_7 = (__this->___mScroll_18);
		float L_8 = ___delta;
		float L_9 = (__this->___scrollWheelFactor_9);
		__this->___mScroll_18 = ((float)((float)L_7+(float)((float)((float)L_8*(float)L_9))));
	}

IL_0051:
	{
		return;
	}
}
// System.Void UIDraggableCamera::Update()
extern const MethodInfo* Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var;
extern "C" void UIDraggableCamera_Update_m284 (UIDraggableCamera_t106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483705);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	SpringPosition_t194 * V_1 = {0};
	SpringPosition_t194 * V_2 = {0};
	{
		float L_0 = IgnoreTimeScale_UpdateRealTimeDelta_m495(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = (__this->___mPressed_15);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		SpringPosition_t194 * L_2 = Component_GetComponent_TisSpringPosition_t194_m1430(__this, /*hidden argument*/Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var);
		V_1 = L_2;
		SpringPosition_t194 * L_3 = V_1;
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		SpringPosition_t194 * L_5 = V_1;
		NullCheck(L_5);
		Behaviour_set_enabled_m1272(L_5, 0, /*hidden argument*/NULL);
	}

IL_002c:
	{
		__this->___mScroll_18 = (0.0f);
		goto IL_010c;
	}

IL_003c:
	{
		Vector2_t55  L_6 = (__this->___mMomentum_16);
		Vector2_t55  L_7 = (__this->___scale_8);
		float L_8 = (__this->___mScroll_18);
		Vector2_t55  L_9 = Vector2_op_Multiply_m1457(NULL /*static, unused*/, L_7, ((float)((float)L_8*(float)(20.0f))), /*hidden argument*/NULL);
		Vector2_t55  L_10 = Vector2_op_Addition_m1460(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/NULL);
		__this->___mMomentum_16 = L_10;
		float L_11 = (__this->___mScroll_18);
		float L_12 = V_0;
		float L_13 = NGUIMath_SpringLerp_m539(NULL /*static, unused*/, L_11, (0.0f), (20.0f), L_12, /*hidden argument*/NULL);
		__this->___mScroll_18 = L_13;
		Vector2_t55 * L_14 = &(__this->___mMomentum_16);
		float L_15 = Vector2_get_magnitude_m1461(L_14, /*hidden argument*/NULL);
		if ((!(((float)L_15) > ((float)(0.01f)))))
		{
			goto IL_0101;
		}
	}
	{
		Transform_t8 * L_16 = (__this->___mTrans_14);
		Transform_t8 * L_17 = L_16;
		NullCheck(L_17);
		Vector3_t48  L_18 = Transform_get_localPosition_m1263(L_17, /*hidden argument*/NULL);
		Vector2_t55 * L_19 = &(__this->___mMomentum_16);
		float L_20 = V_0;
		Vector2_t55  L_21 = NGUIMath_SpringDampen_m537(NULL /*static, unused*/, L_19, (9.0f), L_20, /*hidden argument*/NULL);
		Vector3_t48  L_22 = Vector2_op_Implicit_m1320(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		Vector3_t48  L_23 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_18, L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localPosition_m1265(L_17, L_23, /*hidden argument*/NULL);
		Transform_t8 * L_24 = (__this->___rootForBounds_7);
		Bounds_t113  L_25 = NGUIMath_CalculateAbsoluteWidgetBounds_m532(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		__this->___mBounds_17 = L_25;
		int32_t L_26 = (__this->___dragEffect_10);
		bool L_27 = UIDraggableCamera_ConstrainToBounds_m280(__this, ((((int32_t)L_26) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0100;
		}
	}
	{
		SpringPosition_t194 * L_28 = Component_GetComponent_TisSpringPosition_t194_m1430(__this, /*hidden argument*/Component_GetComponent_TisSpringPosition_t194_m1430_MethodInfo_var);
		V_2 = L_28;
		SpringPosition_t194 * L_29 = V_2;
		bool L_30 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_29, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0100;
		}
	}
	{
		SpringPosition_t194 * L_31 = V_2;
		NullCheck(L_31);
		Behaviour_set_enabled_m1272(L_31, 0, /*hidden argument*/NULL);
	}

IL_0100:
	{
		return;
	}

IL_0101:
	{
		__this->___mScroll_18 = (0.0f);
	}

IL_010c:
	{
		Vector2_t55 * L_32 = &(__this->___mMomentum_16);
		float L_33 = V_0;
		NGUIMath_SpringDampen_m537(NULL /*static, unused*/, L_32, (9.0f), L_33, /*hidden argument*/NULL);
		return;
	}
}
// UIDraggablePanel/DragEffect
#include "AssemblyU2DCSharp_UIDraggablePanel_DragEffect.h"
#ifndef _MSC_VER
#else
#endif
// UIDraggablePanel/DragEffect
#include "AssemblyU2DCSharp_UIDraggablePanel_DragEffectMethodDeclarations.h"



// UIDraggablePanel/ShowCondition
#include "AssemblyU2DCSharp_UIDraggablePanel_ShowCondition.h"
#ifndef _MSC_VER
#else
#endif
// UIDraggablePanel/ShowCondition
#include "AssemblyU2DCSharp_UIDraggablePanel_ShowConditionMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UIDraggablePanel/OnDragFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnDragFinished__ctor_m285 (OnDragFinished_t118 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UIDraggablePanel/OnDragFinished::Invoke()
extern "C" void OnDragFinished_Invoke_m286 (OnDragFinished_t118 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnDragFinished_Invoke_m286((OnDragFinished_t118 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_OnDragFinished_t118(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UIDraggablePanel/OnDragFinished::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnDragFinished_BeginInvoke_m287 (OnDragFinished_t118 * __this, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UIDraggablePanel/OnDragFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnDragFinished_EndInvoke_m288 (OnDragFinished_t118 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// UIPanel/OnChangeDelegate
#include "AssemblyU2DCSharp_UIPanel_OnChangeDelegate.h"
// UIScrollBar/OnScrollBarChange
#include "AssemblyU2DCSharp_UIScrollBar_OnScrollBarChange.h"
// UIPanel/OnChangeDelegate
#include "AssemblyU2DCSharp_UIPanel_OnChangeDelegateMethodDeclarations.h"
// UIScrollBar/OnScrollBarChange
#include "AssemblyU2DCSharp_UIScrollBar_OnScrollBarChangeMethodDeclarations.h"
// UIScrollBar
#include "AssemblyU2DCSharp_UIScrollBarMethodDeclarations.h"
struct Component_t107;
struct UIPanel_t110;
// Declaration !!0 UnityEngine.Component::GetComponent<UIPanel>()
// !!0 UnityEngine.Component::GetComponent<UIPanel>()
#define Component_GetComponent_TisUIPanel_t110_m1462(__this, method) (( UIPanel_t110 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)
struct Component_t107;
struct SpringPanel_t168;
// Declaration !!0 UnityEngine.Component::GetComponent<SpringPanel>()
// !!0 UnityEngine.Component::GetComponent<SpringPanel>()
#define Component_GetComponent_TisSpringPanel_t168_m1463(__this, method) (( SpringPanel_t168 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void UIDraggablePanel::.ctor()
extern "C" void UIDraggablePanel__ctor_m289 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	{
		__this->___restrictWithinPanel_7 = 1;
		__this->___dragEffect_9 = 2;
		__this->___smoothDragStart_10 = 1;
		Vector3_t48  L_0 = Vector3_get_one_m1289(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scale_11 = L_0;
		__this->___momentumAmount_13 = (35.0f);
		Vector2_t55  L_1 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___relativePositionOnReset_14 = L_1;
		__this->___iOSDragEmulation_16 = 1;
		__this->___showScrollBars_19 = 1;
		Vector3_t48  L_2 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mMomentum_26 = L_2;
		__this->___mDragID_32 = ((int32_t)-10);
		Vector2_t55  L_3 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mDragStartOffset_33 = L_3;
		IgnoreTimeScale__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// UIPanel UIDraggablePanel::get_panel()
extern "C" UIPanel_t110 * UIDraggablePanel_get_panel_m290 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	{
		UIPanel_t110 * L_0 = (__this->___mPanel_22);
		return L_0;
	}
}
// UnityEngine.Bounds UIDraggablePanel::get_bounds()
extern "C" Bounds_t113  UIDraggablePanel_get_bounds_m291 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___mCalculatedBounds_29);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		__this->___mCalculatedBounds_29 = 1;
		Transform_t8 * L_1 = (__this->___mTrans_21);
		Transform_t8 * L_2 = (__this->___mTrans_21);
		Bounds_t113  L_3 = NGUIMath_CalculateRelativeWidgetBounds_m533(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		__this->___mBounds_28 = L_3;
	}

IL_0029:
	{
		Bounds_t113  L_4 = (__this->___mBounds_28);
		return L_4;
	}
}
// System.Boolean UIDraggablePanel::get_shouldMoveHorizontally()
extern "C" bool UIDraggablePanel_get_shouldMoveHorizontally_m292 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Bounds_t113  V_1 = {0};
	Vector3_t48  V_2 = {0};
	Vector2_t55  V_3 = {0};
	Vector4_t175  V_4 = {0};
	{
		Bounds_t113  L_0 = UIDraggablePanel_get_bounds_m291(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		Vector3_t48  L_1 = Bounds_get_size_m1280((&V_1), /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = ((&V_2)->___x_1);
		V_0 = L_2;
		UIPanel_t110 * L_3 = (__this->___mPanel_22);
		NullCheck(L_3);
		int32_t L_4 = UIPanel_get_clipping_m1012(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0044;
		}
	}
	{
		float L_5 = V_0;
		UIPanel_t110 * L_6 = (__this->___mPanel_22);
		NullCheck(L_6);
		Vector2_t55  L_7 = UIPanel_get_clipSoftness_m1016(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = ((&V_3)->___x_1);
		V_0 = ((float)((float)L_5+(float)((float)((float)L_8*(float)(2.0f)))));
	}

IL_0044:
	{
		float L_9 = V_0;
		UIPanel_t110 * L_10 = (__this->___mPanel_22);
		NullCheck(L_10);
		Vector4_t175  L_11 = UIPanel_get_clipRange_m1014(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = ((&V_4)->___z_3);
		return ((((float)L_9) > ((float)L_12))? 1 : 0);
	}
}
// System.Boolean UIDraggablePanel::get_shouldMoveVertically()
extern "C" bool UIDraggablePanel_get_shouldMoveVertically_m293 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Bounds_t113  V_1 = {0};
	Vector3_t48  V_2 = {0};
	Vector2_t55  V_3 = {0};
	Vector4_t175  V_4 = {0};
	{
		Bounds_t113  L_0 = UIDraggablePanel_get_bounds_m291(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		Vector3_t48  L_1 = Bounds_get_size_m1280((&V_1), /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = ((&V_2)->___y_2);
		V_0 = L_2;
		UIPanel_t110 * L_3 = (__this->___mPanel_22);
		NullCheck(L_3);
		int32_t L_4 = UIPanel_get_clipping_m1012(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0044;
		}
	}
	{
		float L_5 = V_0;
		UIPanel_t110 * L_6 = (__this->___mPanel_22);
		NullCheck(L_6);
		Vector2_t55  L_7 = UIPanel_get_clipSoftness_m1016(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = ((&V_3)->___y_2);
		V_0 = ((float)((float)L_5+(float)((float)((float)L_8*(float)(2.0f)))));
	}

IL_0044:
	{
		float L_9 = V_0;
		UIPanel_t110 * L_10 = (__this->___mPanel_22);
		NullCheck(L_10);
		Vector4_t175  L_11 = UIPanel_get_clipRange_m1014(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = ((&V_4)->___w_4);
		return ((((float)L_9) > ((float)L_12))? 1 : 0);
	}
}
// System.Boolean UIDraggablePanel::get_shouldMove()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUIPanel_t110_m1462_MethodInfo_var;
extern "C" bool UIDraggablePanel_get_shouldMove_m294 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Component_GetComponent_TisUIPanel_t110_m1462_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t175  V_0 = {0};
	Bounds_t113  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t48  V_4 = {0};
	Vector3_t48  V_5 = {0};
	Vector3_t48  V_6 = {0};
	Vector3_t48  V_7 = {0};
	float G_B7_0 = 0.0f;
	float G_B10_0 = 0.0f;
	{
		bool L_0 = (__this->___disableDragIfFits_8);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		UIPanel_t110 * L_1 = (__this->___mPanel_22);
		bool L_2 = Object_op_Equality_m1245(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		UIPanel_t110 * L_3 = Component_GetComponent_TisUIPanel_t110_m1462(__this, /*hidden argument*/Component_GetComponent_TisUIPanel_t110_m1462_MethodInfo_var);
		__this->___mPanel_22 = L_3;
	}

IL_002a:
	{
		UIPanel_t110 * L_4 = (__this->___mPanel_22);
		NullCheck(L_4);
		Vector4_t175  L_5 = UIPanel_get_clipRange_m1014(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Bounds_t113  L_6 = UIDraggablePanel_get_bounds_m291(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = ((&V_0)->___z_3);
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_8 = Screen_get_width_m1257(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B7_0 = (((float)L_8));
		goto IL_0066;
	}

IL_0059:
	{
		float L_9 = ((&V_0)->___z_3);
		G_B7_0 = ((float)((float)L_9*(float)(0.5f)));
	}

IL_0066:
	{
		V_2 = G_B7_0;
		float L_10 = ((&V_0)->___w_4);
		if ((!(((float)L_10) == ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_11 = Screen_get_height_m1259(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B10_0 = (((float)L_11));
		goto IL_0090;
	}

IL_0083:
	{
		float L_12 = ((&V_0)->___w_4);
		G_B10_0 = ((float)((float)L_12*(float)(0.5f)));
	}

IL_0090:
	{
		V_3 = G_B10_0;
		Vector3_t48 * L_13 = &(__this->___scale_11);
		float L_14 = (L_13->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		bool L_15 = Mathf_Approximately_m1464(NULL /*static, unused*/, L_14, (0.0f), /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00eb;
		}
	}
	{
		Vector3_t48  L_16 = Bounds_get_min_m1455((&V_1), /*hidden argument*/NULL);
		V_4 = L_16;
		float L_17 = ((&V_4)->___x_1);
		float L_18 = ((&V_0)->___x_1);
		float L_19 = V_2;
		if ((!(((float)L_17) < ((float)((float)((float)L_18-(float)L_19))))))
		{
			goto IL_00cb;
		}
	}
	{
		return 1;
	}

IL_00cb:
	{
		Vector3_t48  L_20 = Bounds_get_max_m1456((&V_1), /*hidden argument*/NULL);
		V_5 = L_20;
		float L_21 = ((&V_5)->___x_1);
		float L_22 = ((&V_0)->___x_1);
		float L_23 = V_2;
		if ((!(((float)L_21) > ((float)((float)((float)L_22+(float)L_23))))))
		{
			goto IL_00eb;
		}
	}
	{
		return 1;
	}

IL_00eb:
	{
		Vector3_t48 * L_24 = &(__this->___scale_11);
		float L_25 = (L_24->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		bool L_26 = Mathf_Approximately_m1464(NULL /*static, unused*/, L_25, (0.0f), /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0145;
		}
	}
	{
		Vector3_t48  L_27 = Bounds_get_min_m1455((&V_1), /*hidden argument*/NULL);
		V_6 = L_27;
		float L_28 = ((&V_6)->___y_2);
		float L_29 = ((&V_0)->___y_2);
		float L_30 = V_3;
		if ((!(((float)L_28) < ((float)((float)((float)L_29-(float)L_30))))))
		{
			goto IL_0125;
		}
	}
	{
		return 1;
	}

IL_0125:
	{
		Vector3_t48  L_31 = Bounds_get_max_m1456((&V_1), /*hidden argument*/NULL);
		V_7 = L_31;
		float L_32 = ((&V_7)->___y_2);
		float L_33 = ((&V_0)->___y_2);
		float L_34 = V_3;
		if ((!(((float)L_32) > ((float)((float)((float)L_33+(float)L_34))))))
		{
			goto IL_0145;
		}
	}
	{
		return 1;
	}

IL_0145:
	{
		return 0;
	}
}
// UnityEngine.Vector3 UIDraggablePanel::get_currentMomentum()
extern "C" Vector3_t48  UIDraggablePanel_get_currentMomentum_m295 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = (__this->___mMomentum_26);
		return L_0;
	}
}
// System.Void UIDraggablePanel::set_currentMomentum(UnityEngine.Vector3)
extern "C" void UIDraggablePanel_set_currentMomentum_m296 (UIDraggablePanel_t100 * __this, Vector3_t48  ___value, const MethodInfo* method)
{
	{
		Vector3_t48  L_0 = ___value;
		__this->___mMomentum_26 = L_0;
		__this->___mShouldMove_30 = 1;
		return;
	}
}
// System.Void UIDraggablePanel::Awake()
extern TypeInfo* OnChangeDelegate_t243_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUIPanel_t110_m1462_MethodInfo_var;
extern const MethodInfo* UIDraggablePanel_OnPanelChange_m299_MethodInfo_var;
extern "C" void UIDraggablePanel_Awake_m297 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnChangeDelegate_t243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		Component_GetComponent_TisUIPanel_t110_m1462_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		UIDraggablePanel_OnPanelChange_m299_MethodInfo_var = il2cpp_codegen_method_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_21 = L_0;
		UIPanel_t110 * L_1 = Component_GetComponent_TisUIPanel_t110_m1462(__this, /*hidden argument*/Component_GetComponent_TisUIPanel_t110_m1462_MethodInfo_var);
		__this->___mPanel_22 = L_1;
		UIPanel_t110 * L_2 = (__this->___mPanel_22);
		UIPanel_t110 * L_3 = L_2;
		NullCheck(L_3);
		OnChangeDelegate_t243 * L_4 = (L_3->___onChange_2);
		IntPtr_t L_5 = { (void*)UIDraggablePanel_OnPanelChange_m299_MethodInfo_var };
		OnChangeDelegate_t243 * L_6 = (OnChangeDelegate_t243 *)il2cpp_codegen_object_new (OnChangeDelegate_t243_il2cpp_TypeInfo_var);
		OnChangeDelegate__ctor_m999(L_6, __this, L_5, /*hidden argument*/NULL);
		Delegate_t314 * L_7 = Delegate_Combine_m1425(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->___onChange_2 = ((OnChangeDelegate_t243 *)Castclass(L_7, OnChangeDelegate_t243_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UIDraggablePanel::OnDestroy()
extern TypeInfo* OnChangeDelegate_t243_il2cpp_TypeInfo_var;
extern const MethodInfo* UIDraggablePanel_OnPanelChange_m299_MethodInfo_var;
extern "C" void UIDraggablePanel_OnDestroy_m298 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnChangeDelegate_t243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		UIDraggablePanel_OnPanelChange_m299_MethodInfo_var = il2cpp_codegen_method_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	{
		UIPanel_t110 * L_0 = (__this->___mPanel_22);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		UIPanel_t110 * L_2 = (__this->___mPanel_22);
		UIPanel_t110 * L_3 = L_2;
		NullCheck(L_3);
		OnChangeDelegate_t243 * L_4 = (L_3->___onChange_2);
		IntPtr_t L_5 = { (void*)UIDraggablePanel_OnPanelChange_m299_MethodInfo_var };
		OnChangeDelegate_t243 * L_6 = (OnChangeDelegate_t243 *)il2cpp_codegen_object_new (OnChangeDelegate_t243_il2cpp_TypeInfo_var);
		OnChangeDelegate__ctor_m999(L_6, __this, L_5, /*hidden argument*/NULL);
		Delegate_t314 * L_7 = Delegate_Remove_m1465(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->___onChange_2 = ((OnChangeDelegate_t243 *)Castclass(L_7, OnChangeDelegate_t243_il2cpp_TypeInfo_var));
	}

IL_0038:
	{
		return;
	}
}
// System.Void UIDraggablePanel::OnPanelChange()
extern "C" void UIDraggablePanel_OnPanelChange_m299 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	{
		UIDraggablePanel_UpdateScrollbars_m303(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIDraggablePanel::Start()
extern TypeInfo* OnScrollBarChange_t133_il2cpp_TypeInfo_var;
extern const MethodInfo* UIDraggablePanel_OnHorizontalBar_m306_MethodInfo_var;
extern const MethodInfo* UIDraggablePanel_OnVerticalBar_m307_MethodInfo_var;
extern "C" void UIDraggablePanel_Start_m300 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnScrollBarChange_t133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(81);
		UIDraggablePanel_OnHorizontalBar_m306_MethodInfo_var = il2cpp_codegen_method_info_from_index(64);
		UIDraggablePanel_OnVerticalBar_m307_MethodInfo_var = il2cpp_codegen_method_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	UIScrollBar_t119 * G_B3_0 = {0};
	UIScrollBar_t119 * G_B2_0 = {0};
	UIScrollBar_t119 * G_B4_0 = {0};
	float G_B5_0 = 0.0f;
	UIScrollBar_t119 * G_B5_1 = {0};
	UIScrollBar_t119 * G_B9_0 = {0};
	UIScrollBar_t119 * G_B8_0 = {0};
	UIScrollBar_t119 * G_B10_0 = {0};
	float G_B11_0 = 0.0f;
	UIScrollBar_t119 * G_B11_1 = {0};
	{
		UIDraggablePanel_UpdateScrollbars_m303(__this, 1, /*hidden argument*/NULL);
		UIScrollBar_t119 * L_0 = (__this->___horizontalScrollBar_17);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006f;
		}
	}
	{
		UIScrollBar_t119 * L_2 = (__this->___horizontalScrollBar_17);
		UIScrollBar_t119 * L_3 = L_2;
		NullCheck(L_3);
		OnScrollBarChange_t133 * L_4 = (L_3->___onChange_12);
		IntPtr_t L_5 = { (void*)UIDraggablePanel_OnHorizontalBar_m306_MethodInfo_var };
		OnScrollBarChange_t133 * L_6 = (OnScrollBarChange_t133 *)il2cpp_codegen_object_new (OnScrollBarChange_t133_il2cpp_TypeInfo_var);
		OnScrollBarChange__ctor_m371(L_6, __this, L_5, /*hidden argument*/NULL);
		Delegate_t314 * L_7 = Delegate_Combine_m1425(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->___onChange_12 = ((OnScrollBarChange_t133 *)Castclass(L_7, OnScrollBarChange_t133_il2cpp_TypeInfo_var));
		UIScrollBar_t119 * L_8 = (__this->___horizontalScrollBar_17);
		int32_t L_9 = (__this->___showScrollBars_19);
		G_B2_0 = L_8;
		if (!L_9)
		{
			G_B3_0 = L_8;
			goto IL_005b;
		}
	}
	{
		bool L_10 = UIDraggablePanel_get_shouldMoveHorizontally_m292(__this, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		if (!L_10)
		{
			G_B4_0 = G_B2_0;
			goto IL_0065;
		}
	}

IL_005b:
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		goto IL_006a;
	}

IL_0065:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_006a:
	{
		NullCheck(G_B5_1);
		UIScrollBar_set_alpha_m395(G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_006f:
	{
		UIScrollBar_t119 * L_11 = (__this->___verticalScrollBar_18);
		bool L_12 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_11, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00d7;
		}
	}
	{
		UIScrollBar_t119 * L_13 = (__this->___verticalScrollBar_18);
		UIScrollBar_t119 * L_14 = L_13;
		NullCheck(L_14);
		OnScrollBarChange_t133 * L_15 = (L_14->___onChange_12);
		IntPtr_t L_16 = { (void*)UIDraggablePanel_OnVerticalBar_m307_MethodInfo_var };
		OnScrollBarChange_t133 * L_17 = (OnScrollBarChange_t133 *)il2cpp_codegen_object_new (OnScrollBarChange_t133_il2cpp_TypeInfo_var);
		OnScrollBarChange__ctor_m371(L_17, __this, L_16, /*hidden argument*/NULL);
		Delegate_t314 * L_18 = Delegate_Combine_m1425(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->___onChange_12 = ((OnScrollBarChange_t133 *)Castclass(L_18, OnScrollBarChange_t133_il2cpp_TypeInfo_var));
		UIScrollBar_t119 * L_19 = (__this->___verticalScrollBar_18);
		int32_t L_20 = (__this->___showScrollBars_19);
		G_B8_0 = L_19;
		if (!L_20)
		{
			G_B9_0 = L_19;
			goto IL_00c3;
		}
	}
	{
		bool L_21 = UIDraggablePanel_get_shouldMoveVertically_m293(__this, /*hidden argument*/NULL);
		G_B9_0 = G_B8_0;
		if (!L_21)
		{
			G_B10_0 = G_B8_0;
			goto IL_00cd;
		}
	}

IL_00c3:
	{
		G_B11_0 = (1.0f);
		G_B11_1 = G_B9_0;
		goto IL_00d2;
	}

IL_00cd:
	{
		G_B11_0 = (0.0f);
		G_B11_1 = G_B10_0;
	}

IL_00d2:
	{
		NullCheck(G_B11_1);
		UIScrollBar_set_alpha_m395(G_B11_1, G_B11_0, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		return;
	}
}
// System.Boolean UIDraggablePanel::RestrictWithinBounds(System.Boolean)
extern "C" bool UIDraggablePanel_RestrictWithinBounds_m301 (UIDraggablePanel_t100 * __this, bool ___instant, const MethodInfo* method)
{
	Vector3_t48  V_0 = {0};
	Bounds_t113  V_1 = {0};
	Bounds_t113  V_2 = {0};
	{
		UIPanel_t110 * L_0 = (__this->___mPanel_22);
		Bounds_t113  L_1 = UIDraggablePanel_get_bounds_m291(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		Vector3_t48  L_2 = Bounds_get_min_m1455((&V_1), /*hidden argument*/NULL);
		Vector2_t55  L_3 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Bounds_t113  L_4 = UIDraggablePanel_get_bounds_m291(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector3_t48  L_5 = Bounds_get_max_m1456((&V_2), /*hidden argument*/NULL);
		Vector2_t55  L_6 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t48  L_7 = UIPanel_CalculateConstrainOffset_m1036(L_0, L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		float L_8 = Vector3_get_magnitude_m1335((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_8) > ((float)(0.001f)))))
		{
			goto IL_00a0;
		}
	}
	{
		bool L_9 = ___instant;
		if (L_9)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_10 = (__this->___dragEffect_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0081;
		}
	}
	{
		UIPanel_t110 * L_11 = (__this->___mPanel_22);
		NullCheck(L_11);
		GameObject_t17 * L_12 = Component_get_gameObject_m1246(L_11, /*hidden argument*/NULL);
		Transform_t8 * L_13 = (__this->___mTrans_21);
		NullCheck(L_13);
		Vector3_t48  L_14 = Transform_get_localPosition_m1263(L_13, /*hidden argument*/NULL);
		Vector3_t48  L_15 = V_0;
		Vector3_t48  L_16 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		SpringPanel_Begin_m597(NULL /*static, unused*/, L_12, L_16, (13.0f), /*hidden argument*/NULL);
		goto IL_009e;
	}

IL_0081:
	{
		Vector3_t48  L_17 = V_0;
		UIDraggablePanel_MoveRelative_m308(__this, L_17, /*hidden argument*/NULL);
		Vector3_t48  L_18 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mMomentum_26 = L_18;
		__this->___mScroll_27 = (0.0f);
	}

IL_009e:
	{
		return 1;
	}

IL_00a0:
	{
		return 0;
	}
}
// System.Void UIDraggablePanel::DisableSpring()
extern const MethodInfo* Component_GetComponent_TisSpringPanel_t168_m1463_MethodInfo_var;
extern "C" void UIDraggablePanel_DisableSpring_m302 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpringPanel_t168_m1463_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483714);
		s_Il2CppMethodIntialized = true;
	}
	SpringPanel_t168 * V_0 = {0};
	{
		SpringPanel_t168 * L_0 = Component_GetComponent_TisSpringPanel_t168_m1463(__this, /*hidden argument*/Component_GetComponent_TisSpringPanel_t168_m1463_MethodInfo_var);
		V_0 = L_0;
		SpringPanel_t168 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		SpringPanel_t168 * L_3 = V_0;
		NullCheck(L_3);
		Behaviour_set_enabled_m1272(L_3, 0, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UIDraggablePanel::UpdateScrollbars(System.Boolean)
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void UIDraggablePanel_UpdateScrollbars_m303 (UIDraggablePanel_t100 * __this, bool ___recalculateBounds, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Bounds_t113  V_0 = {0};
	Vector2_t55  V_1 = {0};
	Vector2_t55  V_2 = {0};
	Vector2_t55  V_3 = {0};
	Vector4_t175  V_4 = {0};
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector4_t175  V_10 = {0};
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	Vector3_t48  V_16 = {0};
	Vector3_t48  V_17 = {0};
	UIScrollBar_t119 * G_B12_0 = {0};
	UIScrollBar_t119 * G_B11_0 = {0};
	float G_B13_0 = 0.0f;
	UIScrollBar_t119 * G_B13_1 = {0};
	UIScrollBar_t119 * G_B18_0 = {0};
	UIScrollBar_t119 * G_B17_0 = {0};
	float G_B19_0 = 0.0f;
	UIScrollBar_t119 * G_B19_1 = {0};
	{
		UIPanel_t110 * L_0 = (__this->___mPanel_22);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		UIScrollBar_t119 * L_2 = (__this->___horizontalScrollBar_17);
		bool L_3 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		UIScrollBar_t119 * L_4 = (__this->___verticalScrollBar_18);
		bool L_5 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_4, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0276;
		}
	}

IL_0034:
	{
		bool L_6 = ___recalculateBounds;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		__this->___mCalculatedBounds_29 = 0;
		bool L_7 = UIDraggablePanel_get_shouldMove_m294(__this, /*hidden argument*/NULL);
		__this->___mShouldMove_30 = L_7;
	}

IL_004d:
	{
		Bounds_t113  L_8 = UIDraggablePanel_get_bounds_m291(__this, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t48  L_9 = Bounds_get_min_m1455((&V_0), /*hidden argument*/NULL);
		Vector2_t55  L_10 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector3_t48  L_11 = Bounds_get_max_m1456((&V_0), /*hidden argument*/NULL);
		Vector2_t55  L_12 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		UIPanel_t110 * L_13 = (__this->___mPanel_22);
		NullCheck(L_13);
		int32_t L_14 = UIPanel_get_clipping_m1012(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_009b;
		}
	}
	{
		UIPanel_t110 * L_15 = (__this->___mPanel_22);
		NullCheck(L_15);
		Vector2_t55  L_16 = UIPanel_get_clipSoftness_m1016(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		Vector2_t55  L_17 = V_1;
		Vector2_t55  L_18 = V_3;
		Vector2_t55  L_19 = Vector2_op_Subtraction_m1466(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		Vector2_t55  L_20 = V_2;
		Vector2_t55  L_21 = V_3;
		Vector2_t55  L_22 = Vector2_op_Addition_m1460(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
	}

IL_009b:
	{
		UIScrollBar_t119 * L_23 = (__this->___horizontalScrollBar_17);
		bool L_24 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_23, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_018c;
		}
	}
	{
		float L_25 = ((&V_2)->___x_1);
		float L_26 = ((&V_1)->___x_1);
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_018c;
		}
	}
	{
		UIPanel_t110 * L_27 = (__this->___mPanel_22);
		NullCheck(L_27);
		Vector4_t175  L_28 = UIPanel_get_clipRange_m1014(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		float L_29 = ((&V_4)->___z_3);
		V_5 = ((float)((float)L_29*(float)(0.5f)));
		float L_30 = ((&V_4)->___x_1);
		float L_31 = V_5;
		Vector3_t48  L_32 = Bounds_get_min_m1455((&V_0), /*hidden argument*/NULL);
		V_16 = L_32;
		float L_33 = ((&V_16)->___x_1);
		V_6 = ((float)((float)((float)((float)L_30-(float)L_31))-(float)L_33));
		Vector3_t48  L_34 = Bounds_get_max_m1456((&V_0), /*hidden argument*/NULL);
		V_17 = L_34;
		float L_35 = ((&V_17)->___x_1);
		float L_36 = V_5;
		float L_37 = ((&V_4)->___x_1);
		V_7 = ((float)((float)((float)((float)L_35-(float)L_36))-(float)L_37));
		float L_38 = ((&V_2)->___x_1);
		float L_39 = ((&V_1)->___x_1);
		V_8 = ((float)((float)L_38-(float)L_39));
		float L_40 = V_6;
		float L_41 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_42 = Mathf_Clamp01_m1258(NULL /*static, unused*/, ((float)((float)L_40/(float)L_41)), /*hidden argument*/NULL);
		V_6 = L_42;
		float L_43 = V_7;
		float L_44 = V_8;
		float L_45 = Mathf_Clamp01_m1258(NULL /*static, unused*/, ((float)((float)L_43/(float)L_44)), /*hidden argument*/NULL);
		V_7 = L_45;
		float L_46 = V_6;
		float L_47 = V_7;
		V_9 = ((float)((float)L_46+(float)L_47));
		__this->___mIgnoreCallbacks_31 = 1;
		UIScrollBar_t119 * L_48 = (__this->___horizontalScrollBar_17);
		float L_49 = V_9;
		NullCheck(L_48);
		UIScrollBar_set_barSize_m393(L_48, ((float)((float)(1.0f)-(float)L_49)), /*hidden argument*/NULL);
		UIScrollBar_t119 * L_50 = (__this->___horizontalScrollBar_17);
		float L_51 = V_9;
		G_B11_0 = L_50;
		if ((!(((float)L_51) > ((float)(0.001f)))))
		{
			G_B12_0 = L_50;
			goto IL_017b;
		}
	}
	{
		float L_52 = V_6;
		float L_53 = V_9;
		G_B13_0 = ((float)((float)L_52/(float)L_53));
		G_B13_1 = G_B11_0;
		goto IL_0180;
	}

IL_017b:
	{
		G_B13_0 = (0.0f);
		G_B13_1 = G_B12_0;
	}

IL_0180:
	{
		NullCheck(G_B13_1);
		UIScrollBar_set_scrollValue_m391(G_B13_1, G_B13_0, /*hidden argument*/NULL);
		__this->___mIgnoreCallbacks_31 = 0;
	}

IL_018c:
	{
		UIScrollBar_t119 * L_54 = (__this->___verticalScrollBar_18);
		bool L_55 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_54, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_0271;
		}
	}
	{
		float L_56 = ((&V_2)->___y_2);
		float L_57 = ((&V_1)->___y_2);
		if ((!(((float)L_56) > ((float)L_57))))
		{
			goto IL_0271;
		}
	}
	{
		UIPanel_t110 * L_58 = (__this->___mPanel_22);
		NullCheck(L_58);
		Vector4_t175  L_59 = UIPanel_get_clipRange_m1014(L_58, /*hidden argument*/NULL);
		V_10 = L_59;
		float L_60 = ((&V_10)->___w_4);
		V_11 = ((float)((float)L_60*(float)(0.5f)));
		float L_61 = ((&V_10)->___y_2);
		float L_62 = V_11;
		float L_63 = ((&V_1)->___y_2);
		V_12 = ((float)((float)((float)((float)L_61-(float)L_62))-(float)L_63));
		float L_64 = ((&V_2)->___y_2);
		float L_65 = V_11;
		float L_66 = ((&V_10)->___y_2);
		V_13 = ((float)((float)((float)((float)L_64-(float)L_65))-(float)L_66));
		float L_67 = ((&V_2)->___y_2);
		float L_68 = ((&V_1)->___y_2);
		V_14 = ((float)((float)L_67-(float)L_68));
		float L_69 = V_12;
		float L_70 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_71 = Mathf_Clamp01_m1258(NULL /*static, unused*/, ((float)((float)L_69/(float)L_70)), /*hidden argument*/NULL);
		V_12 = L_71;
		float L_72 = V_13;
		float L_73 = V_14;
		float L_74 = Mathf_Clamp01_m1258(NULL /*static, unused*/, ((float)((float)L_72/(float)L_73)), /*hidden argument*/NULL);
		V_13 = L_74;
		float L_75 = V_12;
		float L_76 = V_13;
		V_15 = ((float)((float)L_75+(float)L_76));
		__this->___mIgnoreCallbacks_31 = 1;
		UIScrollBar_t119 * L_77 = (__this->___verticalScrollBar_18);
		float L_78 = V_15;
		NullCheck(L_77);
		UIScrollBar_set_barSize_m393(L_77, ((float)((float)(1.0f)-(float)L_78)), /*hidden argument*/NULL);
		UIScrollBar_t119 * L_79 = (__this->___verticalScrollBar_18);
		float L_80 = V_15;
		G_B17_0 = L_79;
		if ((!(((float)L_80) > ((float)(0.001f)))))
		{
			G_B18_0 = L_79;
			goto IL_0260;
		}
	}
	{
		float L_81 = V_12;
		float L_82 = V_15;
		G_B19_0 = ((float)((float)(1.0f)-(float)((float)((float)L_81/(float)L_82))));
		G_B19_1 = G_B17_0;
		goto IL_0265;
	}

IL_0260:
	{
		G_B19_0 = (0.0f);
		G_B19_1 = G_B18_0;
	}

IL_0265:
	{
		NullCheck(G_B19_1);
		UIScrollBar_set_scrollValue_m391(G_B19_1, G_B19_0, /*hidden argument*/NULL);
		__this->___mIgnoreCallbacks_31 = 0;
	}

IL_0271:
	{
		goto IL_0283;
	}

IL_0276:
	{
		bool L_83 = ___recalculateBounds;
		if (!L_83)
		{
			goto IL_0283;
		}
	}
	{
		__this->___mCalculatedBounds_29 = 0;
	}

IL_0283:
	{
		return;
	}
}
// System.Void UIDraggablePanel::SetDragAmount(System.Single,System.Single,System.Boolean)
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void UIDraggablePanel_SetDragAmount_m304 (UIDraggablePanel_t100 * __this, float ___x, float ___y, bool ___updateScrollbars, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Bounds_t113  V_0 = {0};
	Vector4_t175  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t48  V_10 = {0};
	Vector3_t48  V_11 = {0};
	Vector3_t48  V_12 = {0};
	Vector3_t48  V_13 = {0};
	Vector3_t48  V_14 = {0};
	Vector3_t48  V_15 = {0};
	Vector3_t48  V_16 = {0};
	Vector3_t48  V_17 = {0};
	Vector3_t48  V_18 = {0};
	Vector2_t55  V_19 = {0};
	Vector2_t55  V_20 = {0};
	Vector2_t55  V_21 = {0};
	Vector2_t55  V_22 = {0};
	{
		UIDraggablePanel_DisableSpring_m302(__this, /*hidden argument*/NULL);
		Bounds_t113  L_0 = UIDraggablePanel_get_bounds_m291(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector3_t48  L_1 = Bounds_get_min_m1455((&V_0), /*hidden argument*/NULL);
		V_11 = L_1;
		float L_2 = ((&V_11)->___x_1);
		Vector3_t48  L_3 = Bounds_get_max_m1456((&V_0), /*hidden argument*/NULL);
		V_12 = L_3;
		float L_4 = ((&V_12)->___x_1);
		if ((((float)L_2) == ((float)L_4)))
		{
			goto IL_0057;
		}
	}
	{
		Vector3_t48  L_5 = Bounds_get_min_m1455((&V_0), /*hidden argument*/NULL);
		V_13 = L_5;
		float L_6 = ((&V_13)->___y_2);
		Vector3_t48  L_7 = Bounds_get_max_m1456((&V_0), /*hidden argument*/NULL);
		V_14 = L_7;
		float L_8 = ((&V_14)->___y_2);
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_0058;
		}
	}

IL_0057:
	{
		return;
	}

IL_0058:
	{
		UIPanel_t110 * L_9 = (__this->___mPanel_22);
		NullCheck(L_9);
		Vector4_t175  L_10 = UIPanel_get_clipRange_m1014(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = ((&V_1)->___z_3);
		V_2 = ((float)((float)L_11*(float)(0.5f)));
		float L_12 = ((&V_1)->___w_4);
		V_3 = ((float)((float)L_12*(float)(0.5f)));
		Vector3_t48  L_13 = Bounds_get_min_m1455((&V_0), /*hidden argument*/NULL);
		V_15 = L_13;
		float L_14 = ((&V_15)->___x_1);
		float L_15 = V_2;
		V_4 = ((float)((float)L_14+(float)L_15));
		Vector3_t48  L_16 = Bounds_get_max_m1456((&V_0), /*hidden argument*/NULL);
		V_16 = L_16;
		float L_17 = ((&V_16)->___x_1);
		float L_18 = V_2;
		V_5 = ((float)((float)L_17-(float)L_18));
		Vector3_t48  L_19 = Bounds_get_min_m1455((&V_0), /*hidden argument*/NULL);
		V_17 = L_19;
		float L_20 = ((&V_17)->___y_2);
		float L_21 = V_3;
		V_6 = ((float)((float)L_20+(float)L_21));
		Vector3_t48  L_22 = Bounds_get_max_m1456((&V_0), /*hidden argument*/NULL);
		V_18 = L_22;
		float L_23 = ((&V_18)->___y_2);
		float L_24 = V_3;
		V_7 = ((float)((float)L_23-(float)L_24));
		UIPanel_t110 * L_25 = (__this->___mPanel_22);
		NullCheck(L_25);
		int32_t L_26 = UIPanel_get_clipping_m1012(L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_0145;
		}
	}
	{
		float L_27 = V_4;
		UIPanel_t110 * L_28 = (__this->___mPanel_22);
		NullCheck(L_28);
		Vector2_t55  L_29 = UIPanel_get_clipSoftness_m1016(L_28, /*hidden argument*/NULL);
		V_19 = L_29;
		float L_30 = ((&V_19)->___x_1);
		V_4 = ((float)((float)L_27-(float)L_30));
		float L_31 = V_5;
		UIPanel_t110 * L_32 = (__this->___mPanel_22);
		NullCheck(L_32);
		Vector2_t55  L_33 = UIPanel_get_clipSoftness_m1016(L_32, /*hidden argument*/NULL);
		V_20 = L_33;
		float L_34 = ((&V_20)->___x_1);
		V_5 = ((float)((float)L_31+(float)L_34));
		float L_35 = V_6;
		UIPanel_t110 * L_36 = (__this->___mPanel_22);
		NullCheck(L_36);
		Vector2_t55  L_37 = UIPanel_get_clipSoftness_m1016(L_36, /*hidden argument*/NULL);
		V_21 = L_37;
		float L_38 = ((&V_21)->___y_2);
		V_6 = ((float)((float)L_35-(float)L_38));
		float L_39 = V_7;
		UIPanel_t110 * L_40 = (__this->___mPanel_22);
		NullCheck(L_40);
		Vector2_t55  L_41 = UIPanel_get_clipSoftness_m1016(L_40, /*hidden argument*/NULL);
		V_22 = L_41;
		float L_42 = ((&V_22)->___y_2);
		V_7 = ((float)((float)L_39+(float)L_42));
	}

IL_0145:
	{
		float L_43 = V_4;
		float L_44 = V_5;
		float L_45 = ___x;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_46 = Mathf_Lerp_m1301(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/NULL);
		V_8 = L_46;
		float L_47 = V_7;
		float L_48 = V_6;
		float L_49 = ___y;
		float L_50 = Mathf_Lerp_m1301(NULL /*static, unused*/, L_47, L_48, L_49, /*hidden argument*/NULL);
		V_9 = L_50;
		bool L_51 = ___updateScrollbars;
		if (L_51)
		{
			goto IL_01d7;
		}
	}
	{
		Transform_t8 * L_52 = (__this->___mTrans_21);
		NullCheck(L_52);
		Vector3_t48  L_53 = Transform_get_localPosition_m1263(L_52, /*hidden argument*/NULL);
		V_10 = L_53;
		Vector3_t48 * L_54 = &(__this->___scale_11);
		float L_55 = (L_54->___x_1);
		if ((((float)L_55) == ((float)(0.0f))))
		{
			goto IL_019d;
		}
	}
	{
		Vector3_t48 * L_56 = (&V_10);
		float L_57 = (L_56->___x_1);
		float L_58 = ((&V_1)->___x_1);
		float L_59 = V_8;
		L_56->___x_1 = ((float)((float)L_57+(float)((float)((float)L_58-(float)L_59))));
	}

IL_019d:
	{
		Vector3_t48 * L_60 = &(__this->___scale_11);
		float L_61 = (L_60->___y_2);
		if ((((float)L_61) == ((float)(0.0f))))
		{
			goto IL_01ca;
		}
	}
	{
		Vector3_t48 * L_62 = (&V_10);
		float L_63 = (L_62->___y_2);
		float L_64 = ((&V_1)->___y_2);
		float L_65 = V_9;
		L_62->___y_2 = ((float)((float)L_63+(float)((float)((float)L_64-(float)L_65))));
	}

IL_01ca:
	{
		Transform_t8 * L_66 = (__this->___mTrans_21);
		Vector3_t48  L_67 = V_10;
		NullCheck(L_66);
		Transform_set_localPosition_m1265(L_66, L_67, /*hidden argument*/NULL);
	}

IL_01d7:
	{
		float L_68 = V_8;
		(&V_1)->___x_1 = L_68;
		float L_69 = V_9;
		(&V_1)->___y_2 = L_69;
		UIPanel_t110 * L_70 = (__this->___mPanel_22);
		Vector4_t175  L_71 = V_1;
		NullCheck(L_70);
		UIPanel_set_clipRange_m1015(L_70, L_71, /*hidden argument*/NULL);
		bool L_72 = ___updateScrollbars;
		if (!L_72)
		{
			goto IL_0202;
		}
	}
	{
		UIDraggablePanel_UpdateScrollbars_m303(__this, 0, /*hidden argument*/NULL);
	}

IL_0202:
	{
		return;
	}
}
// System.Void UIDraggablePanel::ResetPosition()
extern "C" void UIDraggablePanel_ResetPosition_m305 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	{
		__this->___mCalculatedBounds_29 = 0;
		Vector2_t55 * L_0 = &(__this->___relativePositionOnReset_14);
		float L_1 = (L_0->___x_1);
		Vector2_t55 * L_2 = &(__this->___relativePositionOnReset_14);
		float L_3 = (L_2->___y_2);
		UIDraggablePanel_SetDragAmount_m304(__this, L_1, L_3, 0, /*hidden argument*/NULL);
		Vector2_t55 * L_4 = &(__this->___relativePositionOnReset_14);
		float L_5 = (L_4->___x_1);
		Vector2_t55 * L_6 = &(__this->___relativePositionOnReset_14);
		float L_7 = (L_6->___y_2);
		UIDraggablePanel_SetDragAmount_m304(__this, L_5, L_7, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIDraggablePanel::OnHorizontalBar(UIScrollBar)
extern "C" void UIDraggablePanel_OnHorizontalBar_m306 (UIDraggablePanel_t100 * __this, UIScrollBar_t119 * ___sb, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B7_0 = 0.0f;
	{
		bool L_0 = (__this->___mIgnoreCallbacks_31);
		if (L_0)
		{
			goto IL_0062;
		}
	}
	{
		UIScrollBar_t119 * L_1 = (__this->___horizontalScrollBar_17);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		UIScrollBar_t119 * L_3 = (__this->___horizontalScrollBar_17);
		NullCheck(L_3);
		float L_4 = UIScrollBar_get_scrollValue_m390(L_3, /*hidden argument*/NULL);
		G_B4_0 = L_4;
		goto IL_0031;
	}

IL_002c:
	{
		G_B4_0 = (0.0f);
	}

IL_0031:
	{
		V_0 = G_B4_0;
		UIScrollBar_t119 * L_5 = (__this->___verticalScrollBar_18);
		bool L_6 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_5, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		UIScrollBar_t119 * L_7 = (__this->___verticalScrollBar_18);
		NullCheck(L_7);
		float L_8 = UIScrollBar_get_scrollValue_m390(L_7, /*hidden argument*/NULL);
		G_B7_0 = L_8;
		goto IL_0058;
	}

IL_0053:
	{
		G_B7_0 = (0.0f);
	}

IL_0058:
	{
		V_1 = G_B7_0;
		float L_9 = V_0;
		float L_10 = V_1;
		UIDraggablePanel_SetDragAmount_m304(__this, L_9, L_10, 0, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void UIDraggablePanel::OnVerticalBar(UIScrollBar)
extern "C" void UIDraggablePanel_OnVerticalBar_m307 (UIDraggablePanel_t100 * __this, UIScrollBar_t119 * ___sb, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B7_0 = 0.0f;
	{
		bool L_0 = (__this->___mIgnoreCallbacks_31);
		if (L_0)
		{
			goto IL_0062;
		}
	}
	{
		UIScrollBar_t119 * L_1 = (__this->___horizontalScrollBar_17);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		UIScrollBar_t119 * L_3 = (__this->___horizontalScrollBar_17);
		NullCheck(L_3);
		float L_4 = UIScrollBar_get_scrollValue_m390(L_3, /*hidden argument*/NULL);
		G_B4_0 = L_4;
		goto IL_0031;
	}

IL_002c:
	{
		G_B4_0 = (0.0f);
	}

IL_0031:
	{
		V_0 = G_B4_0;
		UIScrollBar_t119 * L_5 = (__this->___verticalScrollBar_18);
		bool L_6 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_5, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		UIScrollBar_t119 * L_7 = (__this->___verticalScrollBar_18);
		NullCheck(L_7);
		float L_8 = UIScrollBar_get_scrollValue_m390(L_7, /*hidden argument*/NULL);
		G_B7_0 = L_8;
		goto IL_0058;
	}

IL_0053:
	{
		G_B7_0 = (0.0f);
	}

IL_0058:
	{
		V_1 = G_B7_0;
		float L_9 = V_0;
		float L_10 = V_1;
		UIDraggablePanel_SetDragAmount_m304(__this, L_9, L_10, 0, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void UIDraggablePanel::MoveRelative(UnityEngine.Vector3)
extern "C" void UIDraggablePanel_MoveRelative_m308 (UIDraggablePanel_t100 * __this, Vector3_t48  ___relative, const MethodInfo* method)
{
	Vector4_t175  V_0 = {0};
	{
		Transform_t8 * L_0 = (__this->___mTrans_21);
		Transform_t8 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t48  L_2 = Transform_get_localPosition_m1263(L_1, /*hidden argument*/NULL);
		Vector3_t48  L_3 = ___relative;
		Vector3_t48  L_4 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_m1265(L_1, L_4, /*hidden argument*/NULL);
		UIPanel_t110 * L_5 = (__this->___mPanel_22);
		NullCheck(L_5);
		Vector4_t175  L_6 = UIPanel_get_clipRange_m1014(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector4_t175 * L_7 = (&V_0);
		float L_8 = (L_7->___x_1);
		float L_9 = ((&___relative)->___x_1);
		L_7->___x_1 = ((float)((float)L_8-(float)L_9));
		Vector4_t175 * L_10 = (&V_0);
		float L_11 = (L_10->___y_2);
		float L_12 = ((&___relative)->___y_2);
		L_10->___y_2 = ((float)((float)L_11-(float)L_12));
		UIPanel_t110 * L_13 = (__this->___mPanel_22);
		Vector4_t175  L_14 = V_0;
		NullCheck(L_13);
		UIPanel_set_clipRange_m1015(L_13, L_14, /*hidden argument*/NULL);
		UIDraggablePanel_UpdateScrollbars_m303(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIDraggablePanel::MoveAbsolute(UnityEngine.Vector3)
extern "C" void UIDraggablePanel_MoveAbsolute_m309 (UIDraggablePanel_t100 * __this, Vector3_t48  ___absolute, const MethodInfo* method)
{
	Vector3_t48  V_0 = {0};
	Vector3_t48  V_1 = {0};
	{
		Transform_t8 * L_0 = (__this->___mTrans_21);
		Vector3_t48  L_1 = ___absolute;
		NullCheck(L_0);
		Vector3_t48  L_2 = Transform_InverseTransformPoint_m1421(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Transform_t8 * L_3 = (__this->___mTrans_21);
		Vector3_t48  L_4 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t48  L_5 = Transform_InverseTransformPoint_m1421(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t48  L_6 = V_0;
		Vector3_t48  L_7 = V_1;
		Vector3_t48  L_8 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		UIDraggablePanel_MoveRelative_m308(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIDraggablePanel::Press(System.Boolean)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIDraggablePanel_Press_m310 (UIDraggablePanel_t100 * __this, bool ___pressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___smoothDragStart_10);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		bool L_1 = ___pressed;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->___mDragStarted_34 = 0;
		Vector2_t55  L_2 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mDragStartOffset_33 = L_2;
	}

IL_0023:
	{
		bool L_3 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0124;
		}
	}
	{
		GameObject_t17 * L_4 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_5 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0124;
		}
	}
	{
		bool L_6 = ___pressed;
		if (L_6)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = (__this->___mDragID_32);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		int32_t L_8 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouchID_31;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_005c;
		}
	}
	{
		__this->___mDragID_32 = ((int32_t)-10);
	}

IL_005c:
	{
		__this->___mCalculatedBounds_29 = 0;
		bool L_9 = UIDraggablePanel_get_shouldMove_m294(__this, /*hidden argument*/NULL);
		__this->___mShouldMove_30 = L_9;
		bool L_10 = (__this->___mShouldMove_30);
		if (L_10)
		{
			goto IL_007b;
		}
	}
	{
		return;
	}

IL_007b:
	{
		bool L_11 = ___pressed;
		__this->___mPressed_25 = L_11;
		bool L_12 = ___pressed;
		if (!L_12)
		{
			goto IL_00df;
		}
	}
	{
		Vector3_t48  L_13 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mMomentum_26 = L_13;
		__this->___mScroll_27 = (0.0f);
		UIDraggablePanel_DisableSpring_m302(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Vector3_t48  L_14 = RaycastHit_get_point_m1324((&((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___lastHit_28), /*hidden argument*/NULL);
		__this->___mLastPos_24 = L_14;
		Transform_t8 * L_15 = (__this->___mTrans_21);
		NullCheck(L_15);
		Quaternion_t50  L_16 = Transform_get_rotation_m1283(L_15, /*hidden argument*/NULL);
		Vector3_t48  L_17 = Vector3_get_back_m1431(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t48  L_18 = Quaternion_op_Multiply_m1330(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		Vector3_t48  L_19 = (__this->___mLastPos_24);
		Plane_t112  L_20 = {0};
		Plane__ctor_m1432(&L_20, L_18, L_19, /*hidden argument*/NULL);
		__this->___mPlane_23 = L_20;
		goto IL_0124;
	}

IL_00df:
	{
		bool L_21 = (__this->___restrictWithinPanel_7);
		if (!L_21)
		{
			goto IL_010e;
		}
	}
	{
		UIPanel_t110 * L_22 = (__this->___mPanel_22);
		NullCheck(L_22);
		int32_t L_23 = UIPanel_get_clipping_m1012(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_24 = (__this->___dragEffect_9);
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_010e;
		}
	}
	{
		UIDraggablePanel_RestrictWithinBounds_m301(__this, 0, /*hidden argument*/NULL);
	}

IL_010e:
	{
		OnDragFinished_t118 * L_25 = (__this->___onDragFinished_20);
		if (!L_25)
		{
			goto IL_0124;
		}
	}
	{
		OnDragFinished_t118 * L_26 = (__this->___onDragFinished_20);
		NullCheck(L_26);
		VirtActionInvoker0::Invoke(11 /* System.Void UIDraggablePanel/OnDragFinished::Invoke() */, L_26);
	}

IL_0124:
	{
		return;
	}
}
// System.Void UIDraggablePanel::Drag()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIDraggablePanel_Drag_m311 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t315  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t48  V_2 = {0};
	Vector3_t48  V_3 = {0};
	Vector3_t48  V_4 = {0};
	Bounds_t113  V_5 = {0};
	Bounds_t113  V_6 = {0};
	Ray_t315  G_B11_0 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0235;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0235;
		}
	}
	{
		bool L_3 = (__this->___mShouldMove_30);
		if (!L_3)
		{
			goto IL_0235;
		}
	}
	{
		int32_t L_4 = (__this->___mDragID_32);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-10)))))
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		int32_t L_5 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouchID_31;
		__this->___mDragID_32 = L_5;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		MouseOrTouch_t216 * L_6 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_6);
		L_6->___clickNotification_8 = 2;
		bool L_7 = (__this->___smoothDragStart_10);
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		bool L_8 = (__this->___mDragStarted_34);
		if (L_8)
		{
			goto IL_0076;
		}
	}
	{
		__this->___mDragStarted_34 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		MouseOrTouch_t216 * L_9 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_9);
		Vector2_t55  L_10 = (L_9->___totalDelta_2);
		__this->___mDragStartOffset_33 = L_10;
	}

IL_0076:
	{
		bool L_11 = (__this->___smoothDragStart_10);
		if (!L_11)
		{
			goto IL_00aa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Camera_t7 * L_12 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentCamera_30;
		MouseOrTouch_t216 * L_13 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_13);
		Vector2_t55  L_14 = (L_13->___pos_0);
		Vector2_t55  L_15 = (__this->___mDragStartOffset_33);
		Vector2_t55  L_16 = Vector2_op_Subtraction_m1466(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Vector3_t48  L_17 = Vector2_op_Implicit_m1320(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		Ray_t315  L_18 = Camera_ScreenPointToRay_m1433(L_12, L_17, /*hidden argument*/NULL);
		G_B11_0 = L_18;
		goto IL_00c3;
	}

IL_00aa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Camera_t7 * L_19 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentCamera_30;
		MouseOrTouch_t216 * L_20 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_20);
		Vector2_t55  L_21 = (L_20->___pos_0);
		Vector3_t48  L_22 = Vector2_op_Implicit_m1320(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		Ray_t315  L_23 = Camera_ScreenPointToRay_m1433(L_19, L_22, /*hidden argument*/NULL);
		G_B11_0 = L_23;
	}

IL_00c3:
	{
		V_0 = G_B11_0;
		V_1 = (0.0f);
		Plane_t112 * L_24 = &(__this->___mPlane_23);
		Ray_t315  L_25 = V_0;
		bool L_26 = Plane_Raycast_m1434(L_24, L_25, (&V_1), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0235;
		}
	}
	{
		float L_27 = V_1;
		Vector3_t48  L_28 = Ray_GetPoint_m1435((&V_0), L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		Vector3_t48  L_29 = V_2;
		Vector3_t48  L_30 = (__this->___mLastPos_24);
		Vector3_t48  L_31 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		V_3 = L_31;
		Vector3_t48  L_32 = V_2;
		__this->___mLastPos_24 = L_32;
		float L_33 = ((&V_3)->___x_1);
		if ((!(((float)L_33) == ((float)(0.0f)))))
		{
			goto IL_011c;
		}
	}
	{
		float L_34 = ((&V_3)->___y_2);
		if ((((float)L_34) == ((float)(0.0f))))
		{
			goto IL_0143;
		}
	}

IL_011c:
	{
		Transform_t8 * L_35 = (__this->___mTrans_21);
		Vector3_t48  L_36 = V_3;
		NullCheck(L_35);
		Vector3_t48  L_37 = Transform_InverseTransformDirection_m1436(L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
		Vector3_t48  L_38 = (__this->___scale_11);
		Vector3_Scale_m1437((&V_3), L_38, /*hidden argument*/NULL);
		Transform_t8 * L_39 = (__this->___mTrans_21);
		Vector3_t48  L_40 = V_3;
		NullCheck(L_39);
		Vector3_t48  L_41 = Transform_TransformDirection_m1438(L_39, L_40, /*hidden argument*/NULL);
		V_3 = L_41;
	}

IL_0143:
	{
		Vector3_t48  L_42 = (__this->___mMomentum_26);
		Vector3_t48  L_43 = (__this->___mMomentum_26);
		Vector3_t48  L_44 = V_3;
		float L_45 = (__this->___momentumAmount_13);
		Vector3_t48  L_46 = Vector3_op_Multiply_m1362(NULL /*static, unused*/, L_44, ((float)((float)(0.01f)*(float)L_45)), /*hidden argument*/NULL);
		Vector3_t48  L_47 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_43, L_46, /*hidden argument*/NULL);
		Vector3_t48  L_48 = Vector3_Lerp_m1439(NULL /*static, unused*/, L_42, L_47, (0.67f), /*hidden argument*/NULL);
		__this->___mMomentum_26 = L_48;
		bool L_49 = (__this->___iOSDragEmulation_16);
		if (L_49)
		{
			goto IL_018d;
		}
	}
	{
		Vector3_t48  L_50 = V_3;
		UIDraggablePanel_MoveAbsolute_m309(__this, L_50, /*hidden argument*/NULL);
		goto IL_0206;
	}

IL_018d:
	{
		UIPanel_t110 * L_51 = (__this->___mPanel_22);
		Bounds_t113  L_52 = UIDraggablePanel_get_bounds_m291(__this, /*hidden argument*/NULL);
		V_5 = L_52;
		Vector3_t48  L_53 = Bounds_get_min_m1455((&V_5), /*hidden argument*/NULL);
		Vector2_t55  L_54 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		Bounds_t113  L_55 = UIDraggablePanel_get_bounds_m291(__this, /*hidden argument*/NULL);
		V_6 = L_55;
		Vector3_t48  L_56 = Bounds_get_max_m1456((&V_6), /*hidden argument*/NULL);
		Vector2_t55  L_57 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t48  L_58 = UIPanel_CalculateConstrainOffset_m1036(L_51, L_54, L_57, /*hidden argument*/NULL);
		V_4 = L_58;
		float L_59 = Vector3_get_magnitude_m1335((&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_59) > ((float)(0.001f)))))
		{
			goto IL_01ff;
		}
	}
	{
		Vector3_t48  L_60 = V_3;
		Vector3_t48  L_61 = Vector3_op_Multiply_m1362(NULL /*static, unused*/, L_60, (0.5f), /*hidden argument*/NULL);
		UIDraggablePanel_MoveAbsolute_m309(__this, L_61, /*hidden argument*/NULL);
		Vector3_t48  L_62 = (__this->___mMomentum_26);
		Vector3_t48  L_63 = Vector3_op_Multiply_m1362(NULL /*static, unused*/, L_62, (0.5f), /*hidden argument*/NULL);
		__this->___mMomentum_26 = L_63;
		goto IL_0206;
	}

IL_01ff:
	{
		Vector3_t48  L_64 = V_3;
		UIDraggablePanel_MoveAbsolute_m309(__this, L_64, /*hidden argument*/NULL);
	}

IL_0206:
	{
		bool L_65 = (__this->___restrictWithinPanel_7);
		if (!L_65)
		{
			goto IL_0235;
		}
	}
	{
		UIPanel_t110 * L_66 = (__this->___mPanel_22);
		NullCheck(L_66);
		int32_t L_67 = UIPanel_get_clipping_m1012(L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0235;
		}
	}
	{
		int32_t L_68 = (__this->___dragEffect_9);
		if ((((int32_t)L_68) == ((int32_t)2)))
		{
			goto IL_0235;
		}
	}
	{
		UIDraggablePanel_RestrictWithinBounds_m301(__this, 1, /*hidden argument*/NULL);
	}

IL_0235:
	{
		return;
	}
}
// System.Void UIDraggablePanel::Scroll(System.Single)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void UIDraggablePanel_Scroll_m312 (UIDraggablePanel_t100 * __this, float ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0073;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0073;
		}
	}
	{
		float L_3 = (__this->___scrollWheelFactor_12);
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_0073;
		}
	}
	{
		UIDraggablePanel_DisableSpring_m302(__this, /*hidden argument*/NULL);
		bool L_4 = UIDraggablePanel_get_shouldMove_m294(__this, /*hidden argument*/NULL);
		__this->___mShouldMove_30 = L_4;
		float L_5 = (__this->___mScroll_27);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Sign_m1442(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		float L_7 = ___delta;
		float L_8 = Mathf_Sign_m1442(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if ((((float)L_6) == ((float)L_8)))
		{
			goto IL_005e;
		}
	}
	{
		__this->___mScroll_27 = (0.0f);
	}

IL_005e:
	{
		float L_9 = (__this->___mScroll_27);
		float L_10 = ___delta;
		float L_11 = (__this->___scrollWheelFactor_12);
		__this->___mScroll_27 = ((float)((float)L_9+(float)((float)((float)L_10*(float)L_11))));
	}

IL_0073:
	{
		return;
	}
}
// System.Void UIDraggablePanel::LateUpdate()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void UIDraggablePanel_LateUpdate_m313 (UIDraggablePanel_t100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t48  V_5 = {0};
	float G_B12_0 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	float G_B18_0 = 0.0f;
	float G_B17_0 = 0.0f;
	float G_B19_0 = 0.0f;
	float G_B19_1 = 0.0f;
	{
		bool L_0 = (__this->___repositionClipping_15);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		__this->___repositionClipping_15 = 0;
		__this->___mCalculatedBounds_29 = 0;
		Vector2_t55 * L_1 = &(__this->___relativePositionOnReset_14);
		float L_2 = (L_1->___x_1);
		Vector2_t55 * L_3 = &(__this->___relativePositionOnReset_14);
		float L_4 = (L_3->___y_2);
		UIDraggablePanel_SetDragAmount_m304(__this, L_2, L_4, 1, /*hidden argument*/NULL);
	}

IL_0036:
	{
		bool L_5 = Application_get_isPlaying_m1372(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		return;
	}

IL_0041:
	{
		float L_6 = IgnoreTimeScale_UpdateRealTimeDelta_m495(__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = (__this->___showScrollBars_19);
		if (!L_7)
		{
			goto IL_0154;
		}
	}
	{
		V_1 = 0;
		V_2 = 0;
		int32_t L_8 = (__this->___showScrollBars_19);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_9 = (__this->___mDragID_32);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)-10)))))
		{
			goto IL_0085;
		}
	}
	{
		Vector3_t48 * L_10 = &(__this->___mMomentum_26);
		float L_11 = Vector3_get_magnitude_m1335(L_10, /*hidden argument*/NULL);
		if ((!(((float)L_11) > ((float)(0.01f)))))
		{
			goto IL_0093;
		}
	}

IL_0085:
	{
		bool L_12 = UIDraggablePanel_get_shouldMoveVertically_m293(__this, /*hidden argument*/NULL);
		V_1 = L_12;
		bool L_13 = UIDraggablePanel_get_shouldMoveHorizontally_m292(__this, /*hidden argument*/NULL);
		V_2 = L_13;
	}

IL_0093:
	{
		UIScrollBar_t119 * L_14 = (__this->___verticalScrollBar_18);
		bool L_15 = Object_op_Implicit_m1391(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00f0;
		}
	}
	{
		UIScrollBar_t119 * L_16 = (__this->___verticalScrollBar_18);
		NullCheck(L_16);
		float L_17 = UIScrollBar_get_alpha_m394(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = V_3;
		bool L_19 = V_1;
		G_B11_0 = L_18;
		if (!L_19)
		{
			G_B12_0 = L_18;
			goto IL_00c2;
		}
	}
	{
		float L_20 = V_0;
		G_B13_0 = ((float)((float)L_20*(float)(6.0f)));
		G_B13_1 = G_B11_0;
		goto IL_00ca;
	}

IL_00c2:
	{
		float L_21 = V_0;
		G_B13_0 = ((float)((float)((-L_21))*(float)(3.0f)));
		G_B13_1 = G_B12_0;
	}

IL_00ca:
	{
		V_3 = ((float)((float)G_B13_1+(float)G_B13_0));
		float L_22 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_23 = Mathf_Clamp01_m1258(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		UIScrollBar_t119 * L_24 = (__this->___verticalScrollBar_18);
		NullCheck(L_24);
		float L_25 = UIScrollBar_get_alpha_m394(L_24, /*hidden argument*/NULL);
		float L_26 = V_3;
		if ((((float)L_25) == ((float)L_26)))
		{
			goto IL_00f0;
		}
	}
	{
		UIScrollBar_t119 * L_27 = (__this->___verticalScrollBar_18);
		float L_28 = V_3;
		NullCheck(L_27);
		UIScrollBar_set_alpha_m395(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		UIScrollBar_t119 * L_29 = (__this->___horizontalScrollBar_17);
		bool L_30 = Object_op_Implicit_m1391(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0154;
		}
	}
	{
		UIScrollBar_t119 * L_31 = (__this->___horizontalScrollBar_17);
		NullCheck(L_31);
		float L_32 = UIScrollBar_get_alpha_m394(L_31, /*hidden argument*/NULL);
		V_4 = L_32;
		float L_33 = V_4;
		bool L_34 = V_2;
		G_B17_0 = L_33;
		if (!L_34)
		{
			G_B18_0 = L_33;
			goto IL_0121;
		}
	}
	{
		float L_35 = V_0;
		G_B19_0 = ((float)((float)L_35*(float)(6.0f)));
		G_B19_1 = G_B17_0;
		goto IL_0129;
	}

IL_0121:
	{
		float L_36 = V_0;
		G_B19_0 = ((float)((float)((-L_36))*(float)(3.0f)));
		G_B19_1 = G_B18_0;
	}

IL_0129:
	{
		V_4 = ((float)((float)G_B19_1+(float)G_B19_0));
		float L_37 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_38 = Mathf_Clamp01_m1258(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		V_4 = L_38;
		UIScrollBar_t119 * L_39 = (__this->___horizontalScrollBar_17);
		NullCheck(L_39);
		float L_40 = UIScrollBar_get_alpha_m394(L_39, /*hidden argument*/NULL);
		float L_41 = V_4;
		if ((((float)L_40) == ((float)L_41)))
		{
			goto IL_0154;
		}
	}
	{
		UIScrollBar_t119 * L_42 = (__this->___horizontalScrollBar_17);
		float L_43 = V_4;
		NullCheck(L_42);
		UIScrollBar_set_alpha_m395(L_42, L_43, /*hidden argument*/NULL);
	}

IL_0154:
	{
		bool L_44 = (__this->___mShouldMove_30);
		if (!L_44)
		{
			goto IL_0248;
		}
	}
	{
		bool L_45 = (__this->___mPressed_25);
		if (L_45)
		{
			goto IL_0248;
		}
	}
	{
		Vector3_t48  L_46 = (__this->___mMomentum_26);
		Vector3_t48  L_47 = (__this->___scale_11);
		float L_48 = (__this->___mScroll_27);
		Vector3_t48  L_49 = Vector3_op_Multiply_m1362(NULL /*static, unused*/, L_47, ((float)((float)L_48*(float)(0.05f))), /*hidden argument*/NULL);
		Vector3_t48  L_50 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_46, L_49, /*hidden argument*/NULL);
		__this->___mMomentum_26 = L_50;
		Vector3_t48 * L_51 = &(__this->___mMomentum_26);
		float L_52 = Vector3_get_magnitude_m1335(L_51, /*hidden argument*/NULL);
		if ((!(((float)L_52) > ((float)(0.0001f)))))
		{
			goto IL_022d;
		}
	}
	{
		float L_53 = (__this->___mScroll_27);
		float L_54 = V_0;
		float L_55 = NGUIMath_SpringLerp_m539(NULL /*static, unused*/, L_53, (0.0f), (20.0f), L_54, /*hidden argument*/NULL);
		__this->___mScroll_27 = L_55;
		Vector3_t48 * L_56 = &(__this->___mMomentum_26);
		float L_57 = V_0;
		Vector3_t48  L_58 = NGUIMath_SpringDampen_m536(NULL /*static, unused*/, L_56, (9.0f), L_57, /*hidden argument*/NULL);
		V_5 = L_58;
		Vector3_t48  L_59 = V_5;
		UIDraggablePanel_MoveAbsolute_m309(__this, L_59, /*hidden argument*/NULL);
		bool L_60 = (__this->___restrictWithinPanel_7);
		if (!L_60)
		{
			goto IL_0201;
		}
	}
	{
		UIPanel_t110 * L_61 = (__this->___mPanel_22);
		NullCheck(L_61);
		int32_t L_62 = UIPanel_get_clipping_m1012(L_61, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_0201;
		}
	}
	{
		UIDraggablePanel_RestrictWithinBounds_m301(__this, 0, /*hidden argument*/NULL);
	}

IL_0201:
	{
		Vector3_t48 * L_63 = &(__this->___mMomentum_26);
		float L_64 = Vector3_get_magnitude_m1335(L_63, /*hidden argument*/NULL);
		if ((!(((float)L_64) < ((float)(0.0001f)))))
		{
			goto IL_022c;
		}
	}
	{
		OnDragFinished_t118 * L_65 = (__this->___onDragFinished_20);
		if (!L_65)
		{
			goto IL_022c;
		}
	}
	{
		OnDragFinished_t118 * L_66 = (__this->___onDragFinished_20);
		NullCheck(L_66);
		VirtActionInvoker0::Invoke(11 /* System.Void UIDraggablePanel/OnDragFinished::Invoke() */, L_66);
	}

IL_022c:
	{
		return;
	}

IL_022d:
	{
		__this->___mScroll_27 = (0.0f);
		Vector3_t48  L_67 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mMomentum_26 = L_67;
		goto IL_0253;
	}

IL_0248:
	{
		__this->___mScroll_27 = (0.0f);
	}

IL_0253:
	{
		Vector3_t48 * L_68 = &(__this->___mMomentum_26);
		float L_69 = V_0;
		NGUIMath_SpringDampen_m536(NULL /*static, unused*/, L_68, (9.0f), L_69, /*hidden argument*/NULL);
		return;
	}
}
// UIForwardEvents
#include "AssemblyU2DCSharp_UIForwardEvents.h"
#ifndef _MSC_VER
#else
#endif
// UIForwardEvents
#include "AssemblyU2DCSharp_UIForwardEventsMethodDeclarations.h"



// System.Void UIForwardEvents::.ctor()
extern "C" void UIForwardEvents__ctor_m314 (UIForwardEvents_t120 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIForwardEvents::OnHover(System.Boolean)
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern "C" void UIForwardEvents_OnHover_m315 (UIForwardEvents_t120 * __this, bool ___isOver, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___onHover_3);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___target_2);
		bool L_4 = ___isOver;
		bool L_5 = L_4;
		Object_t * L_6 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		GameObject_SendMessage_m1406(L_3, (String_t*) &_stringLiteral41, L_6, 1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UIForwardEvents::OnPress(System.Boolean)
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern "C" void UIForwardEvents_OnPress_m316 (UIForwardEvents_t120 * __this, bool ___pressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___onPress_4);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___target_2);
		bool L_4 = ___pressed;
		bool L_5 = L_4;
		Object_t * L_6 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		GameObject_SendMessage_m1406(L_3, (String_t*) &_stringLiteral39, L_6, 1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UIForwardEvents::OnClick()
extern "C" void UIForwardEvents_OnClick_m317 (UIForwardEvents_t120 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___onClick_5);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___target_2);
		NullCheck(L_3);
		GameObject_SendMessage_m1467(L_3, (String_t*) &_stringLiteral40, 1, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UIForwardEvents::OnDoubleClick()
extern "C" void UIForwardEvents_OnDoubleClick_m318 (UIForwardEvents_t120 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___onDoubleClick_6);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___target_2);
		NullCheck(L_3);
		GameObject_SendMessage_m1467(L_3, (String_t*) &_stringLiteral46, 1, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UIForwardEvents::OnSelect(System.Boolean)
extern TypeInfo* Boolean_t311_il2cpp_TypeInfo_var;
extern "C" void UIForwardEvents_OnSelect_m319 (UIForwardEvents_t120 * __this, bool ___selected, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___onSelect_7);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___target_2);
		bool L_4 = ___selected;
		bool L_5 = L_4;
		Object_t * L_6 = Box(Boolean_t311_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		GameObject_SendMessage_m1406(L_3, (String_t*) &_stringLiteral47, L_6, 1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UIForwardEvents::OnDrag(UnityEngine.Vector2)
extern TypeInfo* Vector2_t55_il2cpp_TypeInfo_var;
extern "C" void UIForwardEvents_OnDrag_m320 (UIForwardEvents_t120 * __this, Vector2_t55  ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(83);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___onDrag_8);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___target_2);
		Vector2_t55  L_4 = ___delta;
		Vector2_t55  L_5 = L_4;
		Object_t * L_6 = Box(Vector2_t55_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		GameObject_SendMessage_m1406(L_3, (String_t*) &_stringLiteral48, L_6, 1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UIForwardEvents::OnDrop(UnityEngine.GameObject)
extern "C" void UIForwardEvents_OnDrop_m321 (UIForwardEvents_t120 * __this, GameObject_t17 * ___go, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___onDrop_9);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___target_2);
		GameObject_t17 * L_4 = ___go;
		NullCheck(L_3);
		GameObject_SendMessage_m1406(L_3, (String_t*) &_stringLiteral49, L_4, 1, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void UIForwardEvents::OnInput(System.String)
extern "C" void UIForwardEvents_OnInput_m322 (UIForwardEvents_t120 * __this, String_t* ___text, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___onInput_10);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___target_2);
		String_t* L_4 = ___text;
		NullCheck(L_3);
		GameObject_SendMessage_m1406(L_3, (String_t*) &_stringLiteral50, L_4, 1, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void UIForwardEvents::OnSubmit()
extern "C" void UIForwardEvents_OnSubmit_m323 (UIForwardEvents_t120 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___onSubmit_11);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___target_2);
		NullCheck(L_3);
		GameObject_SendMessage_m1467(L_3, (String_t*) &_stringLiteral51, 1, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UIForwardEvents::OnScroll(System.Single)
extern TypeInfo* Single_t308_il2cpp_TypeInfo_var;
extern "C" void UIForwardEvents_OnScroll_m324 (UIForwardEvents_t120 * __this, float ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___onScroll_12);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___target_2);
		float L_4 = ___delta;
		float L_5 = L_4;
		Object_t * L_6 = Box(Single_t308_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		GameObject_SendMessage_m1406(L_3, (String_t*) &_stringLiteral52, L_6, 1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// UIGrid/Arrangement
#include "AssemblyU2DCSharp_UIGrid_Arrangement.h"
#ifndef _MSC_VER
#else
#endif
// UIGrid/Arrangement
#include "AssemblyU2DCSharp_UIGrid_ArrangementMethodDeclarations.h"



// UIGrid
#include "AssemblyU2DCSharp_UIGrid.h"
#ifndef _MSC_VER
#else
#endif
// UIGrid
#include "AssemblyU2DCSharp_UIGridMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// System.Comparison`1<UnityEngine.Transform>
#include "mscorlib_System_Comparison_1_gen_1.h"
// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
// System.Comparison`1<UnityEngine.Transform>
#include "mscorlib_System_Comparison_1_gen_1MethodDeclarations.h"


// System.Void UIGrid::.ctor()
extern "C" void UIGrid__ctor_m325 (UIGrid_t122 * __this, const MethodInfo* method)
{
	{
		__this->___cellWidth_4 = (200.0f);
		__this->___cellHeight_5 = (200.0f);
		__this->___hideInactive_8 = 1;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIGrid::Start()
extern "C" void UIGrid_Start_m326 (UIGrid_t122 * __this, const MethodInfo* method)
{
	{
		__this->___mStarted_9 = 1;
		UIGrid_Reposition_m329(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIGrid::Update()
extern "C" void UIGrid_Update_m327 (UIGrid_t122 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___repositionNow_6);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		__this->___repositionNow_6 = 0;
		UIGrid_Reposition_m329(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Int32 UIGrid::SortByName(UnityEngine.Transform,UnityEngine.Transform)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t UIGrid_SortByName_m328 (Object_t * __this /* static, unused */, Transform_t8 * ___a, Transform_t8 * ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t8 * L_0 = ___a;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m1344(L_0, /*hidden argument*/NULL);
		Transform_t8 * L_2 = ___b;
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m1344(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_4 = String_Compare_m1468(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UIGrid::Reposition()
extern TypeInfo* List_1_t144_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* Comparison_1_t316_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1469_MethodInfo_var;
extern const MethodInfo* UIGrid_SortByName_m328_MethodInfo_var;
extern const MethodInfo* Comparison_1__ctor_m1470_MethodInfo_var;
extern const MethodInfo* List_1_Sort_m1471_MethodInfo_var;
extern const MethodInfo* NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var;
extern "C" void UIGrid_Reposition_m329 (UIGrid_t122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Comparison_1_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		List_1__ctor_m1469_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		UIGrid_SortByName_m328_MethodInfo_var = il2cpp_codegen_method_info_from_index(68);
		Comparison_1__ctor_m1470_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		List_1_Sort_m1471_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t8 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_t144 * V_3 = {0};
	int32_t V_4 = 0;
	Transform_t8 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Transform_t8 * V_8 = {0};
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	Transform_t8 * V_11 = {0};
	float V_12 = 0.0f;
	UIDraggablePanel_t100 * V_13 = {0};
	Vector3_t48  V_14 = {0};
	Vector3_t48  V_15 = {0};
	Transform_t8 * G_B16_0 = {0};
	Transform_t8 * G_B15_0 = {0};
	Vector3_t48  G_B17_0 = {0};
	Transform_t8 * G_B17_1 = {0};
	Transform_t8 * G_B29_0 = {0};
	Transform_t8 * G_B28_0 = {0};
	Vector3_t48  G_B30_0 = {0};
	Transform_t8 * G_B30_1 = {0};
	{
		bool L_0 = (__this->___mStarted_9);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->___repositionNow_6 = 1;
		return;
	}

IL_0013:
	{
		Transform_t8 * L_1 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		bool L_2 = (__this->___sorted_7);
		if (!L_2)
		{
			goto IL_0164;
		}
	}
	{
		List_1_t144 * L_3 = (List_1_t144 *)il2cpp_codegen_object_new (List_1_t144_il2cpp_TypeInfo_var);
		List_1__ctor_m1469(L_3, /*hidden argument*/List_1__ctor_m1469_MethodInfo_var);
		V_3 = L_3;
		V_4 = 0;
		goto IL_0077;
	}

IL_0037:
	{
		Transform_t8 * L_4 = V_0;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		Transform_t8 * L_6 = Transform_GetChild_m1419(L_4, L_5, /*hidden argument*/NULL);
		V_5 = L_6;
		Transform_t8 * L_7 = V_5;
		bool L_8 = Object_op_Implicit_m1391(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0071;
		}
	}
	{
		bool L_9 = (__this->___hideInactive_8);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		Transform_t8 * L_10 = V_5;
		NullCheck(L_10);
		GameObject_t17 * L_11 = Component_get_gameObject_m1246(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_12 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0071;
		}
	}

IL_0069:
	{
		List_1_t144 * L_13 = V_3;
		Transform_t8 * L_14 = V_5;
		NullCheck(L_13);
		VirtActionInvoker1< Transform_t8 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0) */, L_13, L_14);
	}

IL_0071:
	{
		int32_t L_15 = V_4;
		V_4 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0077:
	{
		int32_t L_16 = V_4;
		Transform_t8 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = Transform_get_childCount_m1418(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0037;
		}
	}
	{
		List_1_t144 * L_19 = V_3;
		IntPtr_t L_20 = { (void*)UIGrid_SortByName_m328_MethodInfo_var };
		Comparison_1_t316 * L_21 = (Comparison_1_t316 *)il2cpp_codegen_object_new (Comparison_1_t316_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m1470(L_21, NULL, L_20, /*hidden argument*/Comparison_1__ctor_m1470_MethodInfo_var);
		NullCheck(L_19);
		List_1_Sort_m1471(L_19, L_21, /*hidden argument*/List_1_Sort_m1471_MethodInfo_var);
		V_6 = 0;
		List_1_t144 * L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count() */, L_22);
		V_7 = L_23;
		goto IL_0156;
	}

IL_00a6:
	{
		List_1_t144 * L_24 = V_3;
		int32_t L_25 = V_6;
		NullCheck(L_24);
		Transform_t8 * L_26 = (Transform_t8 *)VirtFuncInvoker1< Transform_t8 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32) */, L_24, L_25);
		V_8 = L_26;
		Transform_t8 * L_27 = V_8;
		NullCheck(L_27);
		GameObject_t17 * L_28 = Component_get_gameObject_m1246(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_29 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00d1;
		}
	}
	{
		bool L_30 = (__this->___hideInactive_8);
		if (!L_30)
		{
			goto IL_00d1;
		}
	}
	{
		goto IL_0150;
	}

IL_00d1:
	{
		Transform_t8 * L_31 = V_8;
		NullCheck(L_31);
		Vector3_t48  L_32 = Transform_get_localPosition_m1263(L_31, /*hidden argument*/NULL);
		V_14 = L_32;
		float L_33 = ((&V_14)->___z_3);
		V_9 = L_33;
		Transform_t8 * L_34 = V_8;
		int32_t L_35 = (__this->___arrangement_2);
		G_B15_0 = L_34;
		if (L_35)
		{
			G_B16_0 = L_34;
			goto IL_010f;
		}
	}
	{
		float L_36 = (__this->___cellWidth_4);
		int32_t L_37 = V_1;
		float L_38 = (__this->___cellHeight_5);
		int32_t L_39 = V_2;
		float L_40 = V_9;
		Vector3_t48  L_41 = {0};
		Vector3__ctor_m1278(&L_41, ((float)((float)L_36*(float)(((float)L_37)))), ((float)((float)((-L_38))*(float)(((float)L_39)))), L_40, /*hidden argument*/NULL);
		G_B17_0 = L_41;
		G_B17_1 = G_B15_0;
		goto IL_0129;
	}

IL_010f:
	{
		float L_42 = (__this->___cellWidth_4);
		int32_t L_43 = V_2;
		float L_44 = (__this->___cellHeight_5);
		int32_t L_45 = V_1;
		float L_46 = V_9;
		Vector3_t48  L_47 = {0};
		Vector3__ctor_m1278(&L_47, ((float)((float)L_42*(float)(((float)L_43)))), ((float)((float)((-L_44))*(float)(((float)L_45)))), L_46, /*hidden argument*/NULL);
		G_B17_0 = L_47;
		G_B17_1 = G_B16_0;
	}

IL_0129:
	{
		NullCheck(G_B17_1);
		Transform_set_localPosition_m1265(G_B17_1, G_B17_0, /*hidden argument*/NULL);
		int32_t L_48 = V_1;
		int32_t L_49 = ((int32_t)((int32_t)L_48+(int32_t)1));
		V_1 = L_49;
		int32_t L_50 = (__this->___maxPerLine_3);
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_51 = (__this->___maxPerLine_3);
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_0150;
		}
	}
	{
		V_1 = 0;
		int32_t L_52 = V_2;
		V_2 = ((int32_t)((int32_t)L_52+(int32_t)1));
	}

IL_0150:
	{
		int32_t L_53 = V_6;
		V_6 = ((int32_t)((int32_t)L_53+(int32_t)1));
	}

IL_0156:
	{
		int32_t L_54 = V_6;
		int32_t L_55 = V_7;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_00a6;
		}
	}
	{
		goto IL_0229;
	}

IL_0164:
	{
		V_10 = 0;
		goto IL_021c;
	}

IL_016c:
	{
		Transform_t8 * L_56 = V_0;
		int32_t L_57 = V_10;
		NullCheck(L_56);
		Transform_t8 * L_58 = Transform_GetChild_m1419(L_56, L_57, /*hidden argument*/NULL);
		V_11 = L_58;
		Transform_t8 * L_59 = V_11;
		NullCheck(L_59);
		GameObject_t17 * L_60 = Component_get_gameObject_m1246(L_59, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_61 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_0197;
		}
	}
	{
		bool L_62 = (__this->___hideInactive_8);
		if (!L_62)
		{
			goto IL_0197;
		}
	}
	{
		goto IL_0216;
	}

IL_0197:
	{
		Transform_t8 * L_63 = V_11;
		NullCheck(L_63);
		Vector3_t48  L_64 = Transform_get_localPosition_m1263(L_63, /*hidden argument*/NULL);
		V_15 = L_64;
		float L_65 = ((&V_15)->___z_3);
		V_12 = L_65;
		Transform_t8 * L_66 = V_11;
		int32_t L_67 = (__this->___arrangement_2);
		G_B28_0 = L_66;
		if (L_67)
		{
			G_B29_0 = L_66;
			goto IL_01d5;
		}
	}
	{
		float L_68 = (__this->___cellWidth_4);
		int32_t L_69 = V_1;
		float L_70 = (__this->___cellHeight_5);
		int32_t L_71 = V_2;
		float L_72 = V_12;
		Vector3_t48  L_73 = {0};
		Vector3__ctor_m1278(&L_73, ((float)((float)L_68*(float)(((float)L_69)))), ((float)((float)((-L_70))*(float)(((float)L_71)))), L_72, /*hidden argument*/NULL);
		G_B30_0 = L_73;
		G_B30_1 = G_B28_0;
		goto IL_01ef;
	}

IL_01d5:
	{
		float L_74 = (__this->___cellWidth_4);
		int32_t L_75 = V_2;
		float L_76 = (__this->___cellHeight_5);
		int32_t L_77 = V_1;
		float L_78 = V_12;
		Vector3_t48  L_79 = {0};
		Vector3__ctor_m1278(&L_79, ((float)((float)L_74*(float)(((float)L_75)))), ((float)((float)((-L_76))*(float)(((float)L_77)))), L_78, /*hidden argument*/NULL);
		G_B30_0 = L_79;
		G_B30_1 = G_B29_0;
	}

IL_01ef:
	{
		NullCheck(G_B30_1);
		Transform_set_localPosition_m1265(G_B30_1, G_B30_0, /*hidden argument*/NULL);
		int32_t L_80 = V_1;
		int32_t L_81 = ((int32_t)((int32_t)L_80+(int32_t)1));
		V_1 = L_81;
		int32_t L_82 = (__this->___maxPerLine_3);
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_0216;
		}
	}
	{
		int32_t L_83 = (__this->___maxPerLine_3);
		if ((((int32_t)L_83) <= ((int32_t)0)))
		{
			goto IL_0216;
		}
	}
	{
		V_1 = 0;
		int32_t L_84 = V_2;
		V_2 = ((int32_t)((int32_t)L_84+(int32_t)1));
	}

IL_0216:
	{
		int32_t L_85 = V_10;
		V_10 = ((int32_t)((int32_t)L_85+(int32_t)1));
	}

IL_021c:
	{
		int32_t L_86 = V_10;
		Transform_t8 * L_87 = V_0;
		NullCheck(L_87);
		int32_t L_88 = Transform_get_childCount_m1418(L_87, /*hidden argument*/NULL);
		if ((((int32_t)L_86) < ((int32_t)L_88)))
		{
			goto IL_016c;
		}
	}

IL_0229:
	{
		GameObject_t17 * L_89 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		UIDraggablePanel_t100 * L_90 = NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415(NULL /*static, unused*/, L_89, /*hidden argument*/NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var);
		V_13 = L_90;
		UIDraggablePanel_t100 * L_91 = V_13;
		bool L_92 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_91, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_024b;
		}
	}
	{
		UIDraggablePanel_t100 * L_93 = V_13;
		NullCheck(L_93);
		UIDraggablePanel_UpdateScrollbars_m303(L_93, 1, /*hidden argument*/NULL);
	}

IL_024b:
	{
		return;
	}
}
// UIImageButton
#include "AssemblyU2DCSharp_UIImageButton.h"
#ifndef _MSC_VER
#else
#endif
// UIImageButton
#include "AssemblyU2DCSharp_UIImageButtonMethodDeclarations.h"



// System.Void UIImageButton::.ctor()
extern "C" void UIImageButton__ctor_m330 (UIImageButton_t123 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UIImageButton::get_isEnabled()
extern const MethodInfo* Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var;
extern "C" bool UIImageButton_get_isEnabled_m331 (UIImageButton_t123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		s_Il2CppMethodIntialized = true;
	}
	Collider_t304 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Collider_t304 * L_0 = Component_GetComponent_TisCollider_t304_m1316(__this, /*hidden argument*/Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var);
		V_0 = L_0;
		Collider_t304 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m1391(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Collider_t304 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Collider_get_enabled_m1392(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Void UIImageButton::set_isEnabled(System.Boolean)
extern const MethodInfo* Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var;
extern "C" void UIImageButton_set_isEnabled_m332 (UIImageButton_t123 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		s_Il2CppMethodIntialized = true;
	}
	Collider_t304 * V_0 = {0};
	{
		Collider_t304 * L_0 = Component_GetComponent_TisCollider_t304_m1316(__this, /*hidden argument*/Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var);
		V_0 = L_0;
		Collider_t304 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m1391(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Collider_t304 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Collider_get_enabled_m1392(L_3, /*hidden argument*/NULL);
		bool L_5 = ___value;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		Collider_t304 * L_6 = V_0;
		bool L_7 = ___value;
		NullCheck(L_6);
		Collider_set_enabled_m1322(L_6, L_7, /*hidden argument*/NULL);
		UIImageButton_UpdateImage_m334(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void UIImageButton::OnEnable()
extern const MethodInfo* Component_GetComponentInChildren_TisUISprite_t9_m1251_MethodInfo_var;
extern "C" void UIImageButton_OnEnable_m333 (UIImageButton_t123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponentInChildren_TisUISprite_t9_m1251_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	{
		UISprite_t9 * L_0 = (__this->___target_2);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UISprite_t9 * L_2 = Component_GetComponentInChildren_TisUISprite_t9_m1251(__this, /*hidden argument*/Component_GetComponentInChildren_TisUISprite_t9_m1251_MethodInfo_var);
		__this->___target_2 = L_2;
	}

IL_001d:
	{
		UIImageButton_UpdateImage_m334(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIImageButton::UpdateImage()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIImageButton_UpdateImage_m334 (UIImageButton_t123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	UISprite_t9 * G_B4_0 = {0};
	UISprite_t9 * G_B3_0 = {0};
	String_t* G_B5_0 = {0};
	UISprite_t9 * G_B5_1 = {0};
	{
		UISprite_t9 * L_0 = (__this->___target_2);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		bool L_2 = UIImageButton_get_isEnabled_m331(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		UISprite_t9 * L_3 = (__this->___target_2);
		GameObject_t17 * L_4 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		bool L_5 = UICamera_IsHighlighted_m847(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		if (!L_5)
		{
			G_B4_0 = L_3;
			goto IL_003d;
		}
	}
	{
		String_t* L_6 = (__this->___hoverSprite_4);
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_0043;
	}

IL_003d:
	{
		String_t* L_7 = (__this->___normalSprite_3);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_0043:
	{
		NullCheck(G_B5_1);
		UISprite_set_spriteName_m1064(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		goto IL_005e;
	}

IL_004d:
	{
		UISprite_t9 * L_8 = (__this->___target_2);
		String_t* L_9 = (__this->___disabledSprite_6);
		NullCheck(L_8);
		UISprite_set_spriteName_m1064(L_8, L_9, /*hidden argument*/NULL);
	}

IL_005e:
	{
		UISprite_t9 * L_10 = (__this->___target_2);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(13 /* System.Void UISprite::MakePixelPerfect() */, L_10);
	}

IL_0069:
	{
		return;
	}
}
// System.Void UIImageButton::OnHover(System.Boolean)
extern "C" void UIImageButton_OnHover_m335 (UIImageButton_t123 * __this, bool ___isOver, const MethodInfo* method)
{
	UISprite_t9 * G_B4_0 = {0};
	UISprite_t9 * G_B3_0 = {0};
	String_t* G_B5_0 = {0};
	UISprite_t9 * G_B5_1 = {0};
	{
		bool L_0 = UIImageButton_get_isEnabled_m331(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		UISprite_t9 * L_1 = (__this->___target_2);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		UISprite_t9 * L_3 = (__this->___target_2);
		bool L_4 = ___isOver;
		G_B3_0 = L_3;
		if (!L_4)
		{
			G_B4_0 = L_3;
			goto IL_0033;
		}
	}
	{
		String_t* L_5 = (__this->___hoverSprite_4);
		G_B5_0 = L_5;
		G_B5_1 = G_B3_0;
		goto IL_0039;
	}

IL_0033:
	{
		String_t* L_6 = (__this->___normalSprite_3);
		G_B5_0 = L_6;
		G_B5_1 = G_B4_0;
	}

IL_0039:
	{
		NullCheck(G_B5_1);
		UISprite_set_spriteName_m1064(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		UISprite_t9 * L_7 = (__this->___target_2);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(13 /* System.Void UISprite::MakePixelPerfect() */, L_7);
	}

IL_0049:
	{
		return;
	}
}
// System.Void UIImageButton::OnPress(System.Boolean)
extern "C" void UIImageButton_OnPress_m336 (UIImageButton_t123 * __this, bool ___pressed, const MethodInfo* method)
{
	{
		bool L_0 = ___pressed;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		UISprite_t9 * L_1 = (__this->___target_2);
		String_t* L_2 = (__this->___pressedSprite_5);
		NullCheck(L_1);
		UISprite_set_spriteName_m1064(L_1, L_2, /*hidden argument*/NULL);
		UISprite_t9 * L_3 = (__this->___target_2);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(13 /* System.Void UISprite::MakePixelPerfect() */, L_3);
		goto IL_002d;
	}

IL_0027:
	{
		UIImageButton_UpdateImage_m334(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// UIInputValidator/Validation
#include "AssemblyU2DCSharp_UIInputValidator_Validation.h"
#ifndef _MSC_VER
#else
#endif
// UIInputValidator/Validation
#include "AssemblyU2DCSharp_UIInputValidator_ValidationMethodDeclarations.h"



// UIInputValidator
#include "AssemblyU2DCSharp_UIInputValidator.h"
#ifndef _MSC_VER
#else
#endif
// UIInputValidator
#include "AssemblyU2DCSharp_UIInputValidatorMethodDeclarations.h"

// UIInput/Validator
#include "AssemblyU2DCSharp_UIInput_Validator.h"
// UIInput/Validator
#include "AssemblyU2DCSharp_UIInput_ValidatorMethodDeclarations.h"


// System.Void UIInputValidator::.ctor()
extern "C" void UIInputValidator__ctor_m337 (UIInputValidator_t125 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIInputValidator::Start()
extern TypeInfo* Validator_t235_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUIInput_t36_m1307_MethodInfo_var;
extern const MethodInfo* UIInputValidator_Validate_m339_MethodInfo_var;
extern "C" void UIInputValidator_Start_m338 (UIInputValidator_t125 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Validator_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		Component_GetComponent_TisUIInput_t36_m1307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483662);
		UIInputValidator_Validate_m339_MethodInfo_var = il2cpp_codegen_method_info_from_index(71);
		s_Il2CppMethodIntialized = true;
	}
	{
		UIInput_t36 * L_0 = Component_GetComponent_TisUIInput_t36_m1307(__this, /*hidden argument*/Component_GetComponent_TisUIInput_t36_m1307_MethodInfo_var);
		IntPtr_t L_1 = { (void*)UIInputValidator_Validate_m339_MethodInfo_var };
		Validator_t235 * L_2 = (Validator_t235 *)il2cpp_codegen_object_new (Validator_t235_il2cpp_TypeInfo_var);
		Validator__ctor_m919(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->___validator_6 = L_2;
		return;
	}
}
// System.Char UIInputValidator::Validate(System.String,System.Char)
extern "C" uint16_t UIInputValidator_Validate_m339 (UIInputValidator_t125 * __this, String_t* ___text, uint16_t ___ch, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t G_B48_0 = 0;
	{
		int32_t L_0 = (__this->___logic_2);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		uint16_t L_2 = ___ch;
		return L_2;
	}

IL_0018:
	{
		int32_t L_3 = (__this->___logic_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		uint16_t L_4 = ___ch;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0036;
		}
	}
	{
		uint16_t L_5 = ___ch;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0036;
		}
	}
	{
		uint16_t L_6 = ___ch;
		return L_6;
	}

IL_0036:
	{
		uint16_t L_7 = ___ch;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_8 = ___text;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1368(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		uint16_t L_10 = ___ch;
		return L_10;
	}

IL_004b:
	{
		goto IL_01fc;
	}

IL_0050:
	{
		int32_t L_11 = (__this->___logic_2);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_00a2;
		}
	}
	{
		uint16_t L_12 = ___ch;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)48))))
		{
			goto IL_006e;
		}
	}
	{
		uint16_t L_13 = ___ch;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)57))))
		{
			goto IL_006e;
		}
	}
	{
		uint16_t L_14 = ___ch;
		return L_14;
	}

IL_006e:
	{
		uint16_t L_15 = ___ch;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_16 = ___text;
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m1368(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0083;
		}
	}
	{
		uint16_t L_18 = ___ch;
		return L_18;
	}

IL_0083:
	{
		uint16_t L_19 = ___ch;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_20 = ___text;
		NullCheck(L_20);
		bool L_21 = String_Contains_m1472(L_20, (String_t*) &_stringLiteral53, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		uint16_t L_22 = ___ch;
		return L_22;
	}

IL_009d:
	{
		goto IL_01fc;
	}

IL_00a2:
	{
		int32_t L_23 = (__this->___logic_2);
		if ((!(((uint32_t)L_23) == ((uint32_t)3))))
		{
			goto IL_00e9;
		}
	}
	{
		uint16_t L_24 = ___ch;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)65))))
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t L_25 = ___ch;
		if ((((int32_t)L_25) > ((int32_t)((int32_t)90))))
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t L_26 = ___ch;
		return L_26;
	}

IL_00c0:
	{
		uint16_t L_27 = ___ch;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)97))))
		{
			goto IL_00d2;
		}
	}
	{
		uint16_t L_28 = ___ch;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)122))))
		{
			goto IL_00d2;
		}
	}
	{
		uint16_t L_29 = ___ch;
		return L_29;
	}

IL_00d2:
	{
		uint16_t L_30 = ___ch;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)48))))
		{
			goto IL_00e4;
		}
	}
	{
		uint16_t L_31 = ___ch;
		if ((((int32_t)L_31) > ((int32_t)((int32_t)57))))
		{
			goto IL_00e4;
		}
	}
	{
		uint16_t L_32 = ___ch;
		return L_32;
	}

IL_00e4:
	{
		goto IL_01fc;
	}

IL_00e9:
	{
		int32_t L_33 = (__this->___logic_2);
		if ((!(((uint32_t)L_33) == ((uint32_t)4))))
		{
			goto IL_0137;
		}
	}
	{
		uint16_t L_34 = ___ch;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)65))))
		{
			goto IL_010e;
		}
	}
	{
		uint16_t L_35 = ___ch;
		if ((((int32_t)L_35) > ((int32_t)((int32_t)90))))
		{
			goto IL_010e;
		}
	}
	{
		uint16_t L_36 = ___ch;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_36-(int32_t)((int32_t)65)))+(int32_t)((int32_t)97)))));
	}

IL_010e:
	{
		uint16_t L_37 = ___ch;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)97))))
		{
			goto IL_0120;
		}
	}
	{
		uint16_t L_38 = ___ch;
		if ((((int32_t)L_38) > ((int32_t)((int32_t)122))))
		{
			goto IL_0120;
		}
	}
	{
		uint16_t L_39 = ___ch;
		return L_39;
	}

IL_0120:
	{
		uint16_t L_40 = ___ch;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)48))))
		{
			goto IL_0132;
		}
	}
	{
		uint16_t L_41 = ___ch;
		if ((((int32_t)L_41) > ((int32_t)((int32_t)57))))
		{
			goto IL_0132;
		}
	}
	{
		uint16_t L_42 = ___ch;
		return L_42;
	}

IL_0132:
	{
		goto IL_01fc;
	}

IL_0137:
	{
		int32_t L_43 = (__this->___logic_2);
		if ((!(((uint32_t)L_43) == ((uint32_t)5))))
		{
			goto IL_01fc;
		}
	}
	{
		String_t* L_44 = ___text;
		NullCheck(L_44);
		int32_t L_45 = String_get_Length_m1368(L_44, /*hidden argument*/NULL);
		if ((((int32_t)L_45) <= ((int32_t)0)))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_46 = ___text;
		String_t* L_47 = ___text;
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m1368(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		uint16_t L_49 = String_get_Chars_m1370(L_46, ((int32_t)((int32_t)L_48-(int32_t)1)), /*hidden argument*/NULL);
		G_B48_0 = ((int32_t)(L_49));
		goto IL_0164;
	}

IL_0162:
	{
		G_B48_0 = ((int32_t)32);
	}

IL_0164:
	{
		V_0 = G_B48_0;
		uint16_t L_50 = ___ch;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)97))))
		{
			goto IL_0188;
		}
	}
	{
		uint16_t L_51 = ___ch;
		if ((((int32_t)L_51) > ((int32_t)((int32_t)122))))
		{
			goto IL_0188;
		}
	}
	{
		uint16_t L_52 = V_0;
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0186;
		}
	}
	{
		uint16_t L_53 = ___ch;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_53-(int32_t)((int32_t)97)))+(int32_t)((int32_t)65)))));
	}

IL_0186:
	{
		uint16_t L_54 = ___ch;
		return L_54;
	}

IL_0188:
	{
		uint16_t L_55 = ___ch;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)65))))
		{
			goto IL_01b3;
		}
	}
	{
		uint16_t L_56 = ___ch;
		if ((((int32_t)L_56) > ((int32_t)((int32_t)90))))
		{
			goto IL_01b3;
		}
	}
	{
		uint16_t L_57 = V_0;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)32))))
		{
			goto IL_01b1;
		}
	}
	{
		uint16_t L_58 = V_0;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)39))))
		{
			goto IL_01b1;
		}
	}
	{
		uint16_t L_59 = ___ch;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_59-(int32_t)((int32_t)65)))+(int32_t)((int32_t)97)))));
	}

IL_01b1:
	{
		uint16_t L_60 = ___ch;
		return L_60;
	}

IL_01b3:
	{
		uint16_t L_61 = ___ch;
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_01e2;
		}
	}
	{
		uint16_t L_62 = V_0;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)32))))
		{
			goto IL_01dd;
		}
	}
	{
		uint16_t L_63 = V_0;
		if ((((int32_t)L_63) == ((int32_t)((int32_t)39))))
		{
			goto IL_01dd;
		}
	}
	{
		String_t* L_64 = ___text;
		NullCheck(L_64);
		bool L_65 = String_Contains_m1472(L_64, (String_t*) &_stringLiteral54, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_01dd;
		}
	}
	{
		uint16_t L_66 = ___ch;
		return L_66;
	}

IL_01dd:
	{
		goto IL_01fc;
	}

IL_01e2:
	{
		uint16_t L_67 = ___ch;
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_01fc;
		}
	}
	{
		uint16_t L_68 = V_0;
		if ((((int32_t)L_68) == ((int32_t)((int32_t)32))))
		{
			goto IL_01fc;
		}
	}
	{
		uint16_t L_69 = V_0;
		if ((((int32_t)L_69) == ((int32_t)((int32_t)39))))
		{
			goto IL_01fc;
		}
	}
	{
		uint16_t L_70 = ___ch;
		return L_70;
	}

IL_01fc:
	{
		return 0;
	}
}
// UIPopupList/Position
#include "AssemblyU2DCSharp_UIPopupList_Position.h"
#ifndef _MSC_VER
#else
#endif
// UIPopupList/Position
#include "AssemblyU2DCSharp_UIPopupList_PositionMethodDeclarations.h"



// UIPopupList/OnSelectionChange
#include "AssemblyU2DCSharp_UIPopupList_OnSelectionChange.h"
#ifndef _MSC_VER
#else
#endif
// UIPopupList/OnSelectionChange
#include "AssemblyU2DCSharp_UIPopupList_OnSelectionChangeMethodDeclarations.h"



// System.Void UIPopupList/OnSelectionChange::.ctor(System.Object,System.IntPtr)
extern "C" void OnSelectionChange__ctor_m340 (OnSelectionChange_t127 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UIPopupList/OnSelectionChange::Invoke(System.String)
extern "C" void OnSelectionChange_Invoke_m341 (OnSelectionChange_t127 * __this, String_t* ___item, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnSelectionChange_Invoke_m341((OnSelectionChange_t127 *)__this->___prev_9,___item, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___item, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___item,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___item, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___item,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___item,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_OnSelectionChange_t127(Il2CppObject* delegate, String_t* ___item)
{
	typedef void (STDCALL *native_function_ptr_type)(char*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___item' to native representation
	char* ____item_marshaled = { 0 };
	____item_marshaled = il2cpp_codegen_marshal_string(___item);

	// Native function invocation
	_il2cpp_pinvoke_func(____item_marshaled);

	// Marshaling cleanup of parameter '___item' native representation
	il2cpp_codegen_marshal_free(____item_marshaled);
	____item_marshaled = NULL;

}
// System.IAsyncResult UIPopupList/OnSelectionChange::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * OnSelectionChange_BeginInvoke_m342 (OnSelectionChange_t127 * __this, String_t* ___item, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___item;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UIPopupList/OnSelectionChange::EndInvoke(System.IAsyncResult)
extern "C" void OnSelectionChange_EndInvoke_m343 (OnSelectionChange_t127 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<UILabel>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
// UIAtlas/Sprite
#include "AssemblyU2DCSharp_UIAtlas_Sprite.h"
// UIEventListener
#include "AssemblyU2DCSharp_UIEventListener.h"
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxCollider.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UIEventListener/BoolDelegate
#include "AssemblyU2DCSharp_UIEventListener_BoolDelegate.h"
// System.Collections.Generic.List`1<UILabel>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"
// UIAtlas
#include "AssemblyU2DCSharp_UIAtlasMethodDeclarations.h"
// UIEventListener
#include "AssemblyU2DCSharp_UIEventListenerMethodDeclarations.h"
// UIEventListener/BoolDelegate
#include "AssemblyU2DCSharp_UIEventListener_BoolDelegateMethodDeclarations.h"
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxColliderMethodDeclarations.h"
struct Component_t107;
struct UIButtonKeys_t86;
// Declaration !!0 UnityEngine.Component::GetComponent<UIButtonKeys>()
// !!0 UnityEngine.Component::GetComponent<UIButtonKeys>()
#define Component_GetComponent_TisUIButtonKeys_t86_m1473(__this, method) (( UIButtonKeys_t86 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)
struct GameObject_t17;
struct UILabel_t14;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UILabel>()
// !!0 UnityEngine.GameObject::GetComponent<UILabel>()
#define GameObject_GetComponent_TisUILabel_t14_m1474(__this, method) (( UILabel_t14 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m1275_gshared)(__this, method)
struct GameObject_t17;
struct UIEventListener_t183;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UIEventListener>()
// !!0 UnityEngine.GameObject::GetComponent<UIEventListener>()
#define GameObject_GetComponent_TisUIEventListener_t183_m1475(__this, method) (( UIEventListener_t183 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m1275_gshared)(__this, method)
struct Component_t107;
struct UIButtonSoundU5BU5D_t317;
struct Component_t107;
struct ObjectU5BU5D_t300;
// Declaration !!0[] UnityEngine.Component::GetComponents<System.Object>()
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" ObjectU5BU5D_t300* Component_GetComponents_TisObject_t_m1477_gshared (Component_t107 * __this, const MethodInfo* method);
#define Component_GetComponents_TisObject_t_m1477(__this, method) (( ObjectU5BU5D_t300* (*) (Component_t107 *, const MethodInfo*))Component_GetComponents_TisObject_t_m1477_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponents<UIButtonSound>()
// !!0[] UnityEngine.Component::GetComponents<UIButtonSound>()
#define Component_GetComponents_TisUIButtonSound_t95_m1476(__this, method) (( UIButtonSoundU5BU5D_t317* (*) (Component_t107 *, const MethodInfo*))Component_GetComponents_TisObject_t_m1477_gshared)(__this, method)
struct GameObject_t17;
struct UIWidgetU5BU5D_t266;
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<UIWidget>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UIWidget>()
#define GameObject_GetComponentsInChildren_TisUIWidget_t13_m1478(__this, method) (( UIWidgetU5BU5D_t266* (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m1405_gshared)(__this, method)
struct GameObject_t17;
struct ColliderU5BU5D_t318;
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Collider>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Collider>()
#define GameObject_GetComponentsInChildren_TisCollider_t304_m1479(__this, method) (( ColliderU5BU5D_t318* (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m1405_gshared)(__this, method)
struct NGUITools_t167;
struct UILabel_t14;
struct GameObject_t17;
struct NGUITools_t167;
struct Object_t;
struct GameObject_t17;
// Declaration !!0 NGUITools::AddWidget<System.Object>(UnityEngine.GameObject)
// !!0 NGUITools::AddWidget<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * NGUITools_AddWidget_TisObject_t_m1481_gshared (Object_t * __this /* static, unused */, GameObject_t17 * p0, const MethodInfo* method);
#define NGUITools_AddWidget_TisObject_t_m1481(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t17 *, const MethodInfo*))NGUITools_AddWidget_TisObject_t_m1481_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 NGUITools::AddWidget<UILabel>(UnityEngine.GameObject)
// !!0 NGUITools::AddWidget<UILabel>(UnityEngine.GameObject)
#define NGUITools_AddWidget_TisUILabel_t14_m1480(__this /* static, unused */, p0, method) (( UILabel_t14 * (*) (Object_t * /* static, unused */, GameObject_t17 *, const MethodInfo*))NGUITools_AddWidget_TisObject_t_m1481_gshared)(__this /* static, unused */, p0, method)


// System.Void UIPopupList::.ctor()
extern TypeInfo* List_1_t129_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t130_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1482_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m1483_MethodInfo_var;
extern "C" void UIPopupList__ctor_m344 (UIPopupList_t80 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		List_1_t130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		List_1__ctor_m1482_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483720);
		List_1__ctor_m1483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t129 * L_0 = (List_1_t129 *)il2cpp_codegen_object_new (List_1_t129_il2cpp_TypeInfo_var);
		List_1__ctor_m1482(L_0, /*hidden argument*/List_1__ctor_m1482_MethodInfo_var);
		__this->___items_10 = L_0;
		Vector3_t48  L_1 = {0};
		Vector3__ctor_m1408(&L_1, (4.0f), (4.0f), /*hidden argument*/NULL);
		Vector2_t55  L_2 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___padding_11 = L_2;
		__this->___textScale_12 = (1.0f);
		Color_t25  L_3 = Color_get_white_m1273(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___textColor_13 = L_3;
		Color_t25  L_4 = Color_get_white_m1273(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___backgroundColor_14 = L_4;
		Color_t25  L_5 = {0};
		Color__ctor_m1396(&L_5, (0.596078455f), (1.0f), (0.2f), (1.0f), /*hidden argument*/NULL);
		__this->___highlightColor_15 = L_5;
		__this->___isAnimated_16 = 1;
		__this->___functionName_19 = (String_t*) &_stringLiteral55;
		List_1_t130 * L_6 = (List_1_t130 *)il2cpp_codegen_object_new (List_1_t130_il2cpp_TypeInfo_var);
		List_1__ctor_m1483(L_6, /*hidden argument*/List_1__ctor_m1483_MethodInfo_var);
		__this->___mLabelList_27 = L_6;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UIPopupList::get_isOpen()
extern "C" bool UIPopupList_get_isOpen_m345 (UIPopupList_t80 * __this, const MethodInfo* method)
{
	{
		GameObject_t17 * L_0 = (__this->___mChild_23);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String UIPopupList::get_selection()
extern "C" String_t* UIPopupList_get_selection_m346 (UIPopupList_t80 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___mSelectedItem_21);
		return L_0;
	}
}
// System.Void UIPopupList::set_selection(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UIPopupList_t80_il2cpp_TypeInfo_var;
extern "C" void UIPopupList_set_selection_m347 (UIPopupList_t80 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		UIPopupList_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(61);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	UILabel_t14 * G_B6_0 = {0};
	UILabel_t14 * G_B5_0 = {0};
	String_t* G_B7_0 = {0};
	UILabel_t14 * G_B7_1 = {0};
	{
		V_0 = 0;
		String_t* L_0 = (__this->___mSelectedItem_21);
		String_t* L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m1484(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_3 = ___value;
		__this->___mSelectedItem_21 = L_3;
		String_t* L_4 = (__this->___mSelectedItem_21);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		UILabel_t14 * L_5 = (__this->___textLabel_6);
		bool L_6 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_5, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0059;
		}
	}
	{
		UILabel_t14 * L_7 = (__this->___textLabel_6);
		bool L_8 = (__this->___isLocalized_17);
		G_B5_0 = L_7;
		if (!L_8)
		{
			G_B6_0 = L_7;
			goto IL_0053;
		}
	}
	{
		String_t* L_9 = ___value;
		String_t* L_10 = Localization_Localize_m506(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		G_B7_0 = L_10;
		G_B7_1 = G_B5_0;
		goto IL_0054;
	}

IL_0053:
	{
		String_t* L_11 = ___value;
		G_B7_0 = L_11;
		G_B7_1 = G_B6_0;
	}

IL_0054:
	{
		NullCheck(G_B7_1);
		UILabel_set_text_m956(G_B7_1, G_B7_0, /*hidden argument*/NULL);
	}

IL_0059:
	{
		V_0 = 1;
	}

IL_005b:
	{
		String_t* L_12 = (__this->___mSelectedItem_21);
		if (!L_12)
		{
			goto IL_00e8;
		}
	}
	{
		bool L_13 = V_0;
		if (L_13)
		{
			goto IL_007d;
		}
	}
	{
		UILabel_t14 * L_14 = (__this->___textLabel_6);
		bool L_15 = Object_op_Equality_m1245(NULL /*static, unused*/, L_14, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00e8;
		}
	}

IL_007d:
	{
		((UIPopupList_t80_StaticFields*)UIPopupList_t80_il2cpp_TypeInfo_var->static_fields)->___current_3 = __this;
		OnSelectionChange_t127 * L_16 = (__this->___onSelectionChange_20);
		if (!L_16)
		{
			goto IL_009f;
		}
	}
	{
		OnSelectionChange_t127 * L_17 = (__this->___onSelectionChange_20);
		String_t* L_18 = (__this->___mSelectedItem_21);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void UIPopupList/OnSelectionChange::Invoke(System.String) */, L_17, L_18);
	}

IL_009f:
	{
		GameObject_t17 * L_19 = (__this->___eventReceiver_18);
		bool L_20 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_19, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e2;
		}
	}
	{
		String_t* L_21 = (__this->___functionName_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00e2;
		}
	}
	{
		bool L_23 = Application_get_isPlaying_m1372(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00e2;
		}
	}
	{
		GameObject_t17 * L_24 = (__this->___eventReceiver_18);
		String_t* L_25 = (__this->___functionName_19);
		String_t* L_26 = (__this->___mSelectedItem_21);
		NullCheck(L_24);
		GameObject_SendMessage_m1406(L_24, L_25, L_26, 1, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		((UIPopupList_t80_StaticFields*)UIPopupList_t80_il2cpp_TypeInfo_var->static_fields)->___current_3 = (UIPopupList_t80 *)NULL;
	}

IL_00e8:
	{
		return;
	}
}
// System.Boolean UIPopupList::get_handleEvents()
extern const MethodInfo* Component_GetComponent_TisUIButtonKeys_t86_m1473_MethodInfo_var;
extern "C" bool UIPopupList_get_handleEvents_m348 (UIPopupList_t80 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisUIButtonKeys_t86_m1473_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		s_Il2CppMethodIntialized = true;
	}
	UIButtonKeys_t86 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		UIButtonKeys_t86 * L_0 = Component_GetComponent_TisUIButtonKeys_t86_m1473(__this, /*hidden argument*/Component_GetComponent_TisUIButtonKeys_t86_m1473_MethodInfo_var);
		V_0 = L_0;
		UIButtonKeys_t86 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m1245(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		UIButtonKeys_t86 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Behaviour_get_enabled_m1318(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Void UIPopupList::set_handleEvents(System.Boolean)
extern const MethodInfo* Component_GetComponent_TisUIButtonKeys_t86_m1473_MethodInfo_var;
extern "C" void UIPopupList_set_handleEvents_m349 (UIPopupList_t80 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisUIButtonKeys_t86_m1473_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		s_Il2CppMethodIntialized = true;
	}
	UIButtonKeys_t86 * V_0 = {0};
	{
		UIButtonKeys_t86 * L_0 = Component_GetComponent_TisUIButtonKeys_t86_m1473(__this, /*hidden argument*/Component_GetComponent_TisUIButtonKeys_t86_m1473_MethodInfo_var);
		V_0 = L_0;
		UIButtonKeys_t86 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UIButtonKeys_t86 * L_3 = V_0;
		bool L_4 = ___value;
		NullCheck(L_3);
		Behaviour_set_enabled_m1272(L_3, ((((int32_t)L_4) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UIPopupList::Start()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void UIPopupList_Start_m350 (UIPopupList_t80 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = (__this->___mSelectedItem_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		List_1_t129 * L_2 = (__this->___items_10);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		List_1_t129 * L_4 = (__this->___items_10);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_4, 0);
		UIPopupList_set_selection_m347(__this, L_5, /*hidden argument*/NULL);
	}

IL_0033:
	{
		goto IL_004d;
	}

IL_0038:
	{
		String_t* L_6 = (__this->___mSelectedItem_21);
		V_0 = L_6;
		__this->___mSelectedItem_21 = (String_t*)NULL;
		String_t* L_7 = V_0;
		UIPopupList_set_selection_m347(__this, L_7, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}
}
// System.Void UIPopupList::OnLocalize(Localization)
extern "C" void UIPopupList_OnLocalize_m351 (UIPopupList_t80 * __this, Localization_t161 * ___loc, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isLocalized_17);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		UILabel_t14 * L_1 = (__this->___textLabel_6);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		UILabel_t14 * L_3 = (__this->___textLabel_6);
		Localization_t161 * L_4 = ___loc;
		String_t* L_5 = (__this->___mSelectedItem_21);
		NullCheck(L_4);
		String_t* L_6 = Localization_Get_m505(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		UILabel_set_text_m956(L_3, L_6, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UIPopupList::Highlight(UILabel,System.Boolean)
extern const MethodInfo* Component_GetComponent_TisTweenPosition_t202_m1407_MethodInfo_var;
extern "C" void UIPopupList_Highlight_m352 (UIPopupList_t80 * __this, UILabel_t14 * ___lbl, bool ___instant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisTweenPosition_t202_m1407_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		s_Il2CppMethodIntialized = true;
	}
	TweenPosition_t202 * V_0 = {0};
	Sprite_t156 * V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t48  V_5 = {0};
	{
		UISprite_t9 * L_0 = (__this->___mHighlight_25);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00f0;
		}
	}
	{
		UILabel_t14 * L_2 = ___lbl;
		NullCheck(L_2);
		TweenPosition_t202 * L_3 = Component_GetComponent_TisTweenPosition_t202_m1407(L_2, /*hidden argument*/Component_GetComponent_TisTweenPosition_t202_m1407_MethodInfo_var);
		V_0 = L_3;
		TweenPosition_t202 * L_4 = V_0;
		bool L_5 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_4, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		TweenPosition_t202 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Behaviour_get_enabled_m1318(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		return;
	}

IL_0030:
	{
		UILabel_t14 * L_8 = ___lbl;
		__this->___mHighlightedLabel_26 = L_8;
		UISprite_t9 * L_9 = (__this->___mHighlight_25);
		NullCheck(L_9);
		Sprite_t156 * L_10 = UISprite_GetAtlasSprite_m1079(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Sprite_t156 * L_11 = V_1;
		if (L_11)
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		UIAtlas_t10 * L_12 = (__this->___atlas_4);
		NullCheck(L_12);
		float L_13 = UIAtlas_get_pixelSize_m812(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Sprite_t156 * L_14 = V_1;
		NullCheck(L_14);
		Rect_t158 * L_15 = &(L_14->___inner_2);
		float L_16 = Rect_get_xMin_m1450(L_15, /*hidden argument*/NULL);
		Sprite_t156 * L_17 = V_1;
		NullCheck(L_17);
		Rect_t158 * L_18 = &(L_17->___outer_1);
		float L_19 = Rect_get_xMin_m1450(L_18, /*hidden argument*/NULL);
		float L_20 = V_2;
		V_3 = ((float)((float)((float)((float)L_16-(float)L_19))*(float)L_20));
		Sprite_t156 * L_21 = V_1;
		NullCheck(L_21);
		Rect_t158 * L_22 = &(L_21->___inner_2);
		float L_23 = Rect_get_yMin_m1451(L_22, /*hidden argument*/NULL);
		Sprite_t156 * L_24 = V_1;
		NullCheck(L_24);
		Rect_t158 * L_25 = &(L_24->___outer_1);
		float L_26 = Rect_get_yMin_m1451(L_25, /*hidden argument*/NULL);
		float L_27 = V_2;
		V_4 = ((float)((float)((float)((float)L_23-(float)L_26))*(float)L_27));
		UILabel_t14 * L_28 = ___lbl;
		NullCheck(L_28);
		Transform_t8 * L_29 = UIWidget_get_cachedTransform_m683(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t48  L_30 = Transform_get_localPosition_m1263(L_29, /*hidden argument*/NULL);
		float L_31 = V_3;
		float L_32 = V_4;
		Vector3_t48  L_33 = {0};
		Vector3__ctor_m1278(&L_33, ((-L_31)), L_32, (1.0f), /*hidden argument*/NULL);
		Vector3_t48  L_34 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_30, L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		bool L_35 = ___instant;
		if (L_35)
		{
			goto IL_00bc;
		}
	}
	{
		bool L_36 = (__this->___isAnimated_16);
		if (L_36)
		{
			goto IL_00d3;
		}
	}

IL_00bc:
	{
		UISprite_t9 * L_37 = (__this->___mHighlight_25);
		NullCheck(L_37);
		Transform_t8 * L_38 = UIWidget_get_cachedTransform_m683(L_37, /*hidden argument*/NULL);
		Vector3_t48  L_39 = V_5;
		NullCheck(L_38);
		Transform_set_localPosition_m1265(L_38, L_39, /*hidden argument*/NULL);
		goto IL_00f0;
	}

IL_00d3:
	{
		UISprite_t9 * L_40 = (__this->___mHighlight_25);
		NullCheck(L_40);
		GameObject_t17 * L_41 = Component_get_gameObject_m1246(L_40, /*hidden argument*/NULL);
		Vector3_t48  L_42 = V_5;
		TweenPosition_t202 * L_43 = TweenPosition_Begin_m758(NULL /*static, unused*/, L_41, (0.1f), L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		((UITweener_t197 *)L_43)->___method_8 = 2;
	}

IL_00f0:
	{
		return;
	}
}
// System.Void UIPopupList::OnItemHover(UnityEngine.GameObject,System.Boolean)
extern const MethodInfo* GameObject_GetComponent_TisUILabel_t14_m1474_MethodInfo_var;
extern "C" void UIPopupList_OnItemHover_m353 (UIPopupList_t80 * __this, GameObject_t17 * ___go, bool ___isOver, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisUILabel_t14_m1474_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483723);
		s_Il2CppMethodIntialized = true;
	}
	UILabel_t14 * V_0 = {0};
	{
		bool L_0 = ___isOver;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		GameObject_t17 * L_1 = ___go;
		NullCheck(L_1);
		UILabel_t14 * L_2 = GameObject_GetComponent_TisUILabel_t14_m1474(L_1, /*hidden argument*/GameObject_GetComponent_TisUILabel_t14_m1474_MethodInfo_var);
		V_0 = L_2;
		UILabel_t14 * L_3 = V_0;
		UIPopupList_Highlight_m352(__this, L_3, 0, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UIPopupList::Select(UILabel,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisUIEventListener_t183_m1475_MethodInfo_var;
extern const MethodInfo* Component_GetComponents_TisUIButtonSound_t95_m1476_MethodInfo_var;
extern "C" void UIPopupList_Select_m354 (UIPopupList_t80 * __this, UILabel_t14 * ___lbl, bool ___instant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		GameObject_GetComponent_TisUIEventListener_t183_m1475_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		Component_GetComponents_TisUIButtonSound_t95_m1476_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483725);
		s_Il2CppMethodIntialized = true;
	}
	UIEventListener_t183 * V_0 = {0};
	UIButtonSoundU5BU5D_t317* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	UIButtonSound_t95 * V_4 = {0};
	{
		UILabel_t14 * L_0 = ___lbl;
		bool L_1 = ___instant;
		UIPopupList_Highlight_m352(__this, L_0, L_1, /*hidden argument*/NULL);
		UILabel_t14 * L_2 = ___lbl;
		NullCheck(L_2);
		GameObject_t17 * L_3 = Component_get_gameObject_m1246(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		UIEventListener_t183 * L_4 = GameObject_GetComponent_TisUIEventListener_t183_m1475(L_3, /*hidden argument*/GameObject_GetComponent_TisUIEventListener_t183_m1475_MethodInfo_var);
		V_0 = L_4;
		UIEventListener_t183 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (L_5->___parameter_2);
		UIPopupList_set_selection_m347(__this, ((String_t*)IsInst(L_6, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		UIButtonSoundU5BU5D_t317* L_7 = Component_GetComponents_TisUIButtonSound_t95_m1476(__this, /*hidden argument*/Component_GetComponents_TisUIButtonSound_t95_m1476_MethodInfo_var);
		V_1 = L_7;
		V_2 = 0;
		UIButtonSoundU5BU5D_t317* L_8 = V_1;
		NullCheck(L_8);
		V_3 = (((int32_t)(((Array_t *)L_8)->max_length)));
		goto IL_0065;
	}

IL_0037:
	{
		UIButtonSoundU5BU5D_t317* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_4 = (*(UIButtonSound_t95 **)(UIButtonSound_t95 **)SZArrayLdElema(L_9, L_11));
		UIButtonSound_t95 * L_12 = V_4;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___trigger_3);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		UIButtonSound_t95 * L_14 = V_4;
		NullCheck(L_14);
		AudioClip_t15 * L_15 = (L_14->___audioClip_2);
		UIButtonSound_t95 * L_16 = V_4;
		NullCheck(L_16);
		float L_17 = (L_16->___volume_4);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_PlaySound_m553(NULL /*static, unused*/, L_15, L_17, (1.0f), /*hidden argument*/NULL);
	}

IL_0061:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0065:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_3;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0037;
		}
	}
	{
		return;
	}
}
// System.Void UIPopupList::OnItemPress(UnityEngine.GameObject,System.Boolean)
extern const MethodInfo* GameObject_GetComponent_TisUILabel_t14_m1474_MethodInfo_var;
extern "C" void UIPopupList_OnItemPress_m355 (UIPopupList_t80 * __this, GameObject_t17 * ___go, bool ___isPressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisUILabel_t14_m1474_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483723);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___isPressed;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		GameObject_t17 * L_1 = ___go;
		NullCheck(L_1);
		UILabel_t14 * L_2 = GameObject_GetComponent_TisUILabel_t14_m1474(L_1, /*hidden argument*/GameObject_GetComponent_TisUILabel_t14_m1474_MethodInfo_var);
		UIPopupList_Select_m354(__this, L_2, 1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UIPopupList::OnKey(UnityEngine.KeyCode)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIPopupList_OnKey_m356 (UIPopupList_t80 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00af;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00af;
		}
	}
	{
		bool L_3 = UIPopupList_get_handleEvents_m348(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00af;
		}
	}
	{
		List_1_t130 * L_4 = (__this->___mLabelList_27);
		UILabel_t14 * L_5 = (__this->___mHighlightedLabel_26);
		NullCheck(L_4);
		int32_t L_6 = (int32_t)VirtFuncInvoker1< int32_t, UILabel_t14 * >::Invoke(25 /* System.Int32 System.Collections.Generic.List`1<UILabel>::IndexOf(!0) */, L_4, L_5);
		V_0 = L_6;
		int32_t L_7 = ___key;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)273)))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		List_1_t130 * L_9 = (__this->___mLabelList_27);
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
		V_0 = L_11;
		NullCheck(L_9);
		UILabel_t14 * L_12 = (UILabel_t14 *)VirtFuncInvoker1< UILabel_t14 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UILabel>::get_Item(System.Int32) */, L_9, L_11);
		UIPopupList_Select_m354(__this, L_12, 0, /*hidden argument*/NULL);
	}

IL_0061:
	{
		goto IL_00af;
	}

IL_0066:
	{
		int32_t L_13 = ___key;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)274)))))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_14 = V_0;
		List_1_t130 * L_15 = (__this->___mLabelList_27);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UILabel>::get_Count() */, L_15);
		if ((((int32_t)((int32_t)((int32_t)L_14+(int32_t)1))) >= ((int32_t)L_16)))
		{
			goto IL_009b;
		}
	}
	{
		List_1_t130 * L_17 = (__this->___mLabelList_27);
		int32_t L_18 = V_0;
		int32_t L_19 = ((int32_t)((int32_t)L_18+(int32_t)1));
		V_0 = L_19;
		NullCheck(L_17);
		UILabel_t14 * L_20 = (UILabel_t14 *)VirtFuncInvoker1< UILabel_t14 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UILabel>::get_Item(System.Int32) */, L_17, L_19);
		UIPopupList_Select_m354(__this, L_20, 0, /*hidden argument*/NULL);
	}

IL_009b:
	{
		goto IL_00af;
	}

IL_00a0:
	{
		int32_t L_21 = ___key;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)27)))))
		{
			goto IL_00af;
		}
	}
	{
		UIPopupList_OnSelect_m357(__this, 0, /*hidden argument*/NULL);
	}

IL_00af:
	{
		return;
	}
}
// System.Void UIPopupList::OnSelect(System.Boolean)
extern const MethodInfo* GameObject_GetComponentsInChildren_TisUIWidget_t13_m1478_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponentsInChildren_TisCollider_t304_m1479_MethodInfo_var;
extern "C" void UIPopupList_OnSelect_m357 (UIPopupList_t80 * __this, bool ___isSelected, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponentsInChildren_TisUIWidget_t13_m1478_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483726);
		GameObject_GetComponentsInChildren_TisCollider_t304_m1479_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483727);
		s_Il2CppMethodIntialized = true;
	}
	UIWidgetU5BU5D_t266* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UIWidget_t13 * V_3 = {0};
	Color_t25  V_4 = {0};
	ColliderU5BU5D_t318* V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		bool L_0 = ___isSelected;
		if (L_0)
		{
			goto IL_00f0;
		}
	}
	{
		GameObject_t17 * L_1 = (__this->___mChild_23);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00f0;
		}
	}
	{
		List_1_t130 * L_3 = (__this->___mLabelList_27);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(20 /* System.Void System.Collections.Generic.List`1<UILabel>::Clear() */, L_3);
		UIPopupList_set_handleEvents_m349(__this, 0, /*hidden argument*/NULL);
		bool L_4 = (__this->___isAnimated_16);
		if (!L_4)
		{
			goto IL_00d0;
		}
	}
	{
		GameObject_t17 * L_5 = (__this->___mChild_23);
		NullCheck(L_5);
		UIWidgetU5BU5D_t266* L_6 = GameObject_GetComponentsInChildren_TisUIWidget_t13_m1478(L_5, /*hidden argument*/GameObject_GetComponentsInChildren_TisUIWidget_t13_m1478_MethodInfo_var);
		V_0 = L_6;
		V_1 = 0;
		UIWidgetU5BU5D_t266* L_7 = V_0;
		NullCheck(L_7);
		V_2 = (((int32_t)(((Array_t *)L_7)->max_length)));
		goto IL_007f;
	}

IL_004b:
	{
		UIWidgetU5BU5D_t266* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_3 = (*(UIWidget_t13 **)(UIWidget_t13 **)SZArrayLdElema(L_8, L_10));
		UIWidget_t13 * L_11 = V_3;
		NullCheck(L_11);
		Color_t25  L_12 = UIWidget_get_color_m672(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		(&V_4)->___a_3 = (0.0f);
		UIWidget_t13 * L_13 = V_3;
		NullCheck(L_13);
		GameObject_t17 * L_14 = Component_get_gameObject_m1246(L_13, /*hidden argument*/NULL);
		Color_t25  L_15 = V_4;
		TweenColor_t199 * L_16 = TweenColor_Begin_m740(NULL /*static, unused*/, L_14, (0.15f), L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		((UITweener_t197 *)L_16)->___method_8 = 2;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_007f:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_004b;
		}
	}
	{
		GameObject_t17 * L_20 = (__this->___mChild_23);
		NullCheck(L_20);
		ColliderU5BU5D_t318* L_21 = GameObject_GetComponentsInChildren_TisCollider_t304_m1479(L_20, /*hidden argument*/GameObject_GetComponentsInChildren_TisCollider_t304_m1479_MethodInfo_var);
		V_5 = L_21;
		V_6 = 0;
		ColliderU5BU5D_t318* L_22 = V_5;
		NullCheck(L_22);
		V_7 = (((int32_t)(((Array_t *)L_22)->max_length)));
		goto IL_00b2;
	}

IL_00a1:
	{
		ColliderU5BU5D_t318* L_23 = V_5;
		int32_t L_24 = V_6;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(Collider_t304 **)(Collider_t304 **)SZArrayLdElema(L_23, L_25)));
		Collider_set_enabled_m1322((*(Collider_t304 **)(Collider_t304 **)SZArrayLdElema(L_23, L_25)), 0, /*hidden argument*/NULL);
		int32_t L_26 = V_6;
		V_6 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_00b2:
	{
		int32_t L_27 = V_6;
		int32_t L_28 = V_7;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_00a1;
		}
	}
	{
		GameObject_t17 * L_29 = (__this->___mChild_23);
		Object_Destroy_m1485(NULL /*static, unused*/, L_29, (0.15f), /*hidden argument*/NULL);
		goto IL_00db;
	}

IL_00d0:
	{
		GameObject_t17 * L_30 = (__this->___mChild_23);
		Object_Destroy_m1250(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
	}

IL_00db:
	{
		__this->___mBackground_24 = (UISprite_t9 *)NULL;
		__this->___mHighlight_25 = (UISprite_t9 *)NULL;
		__this->___mChild_23 = (GameObject_t17 *)NULL;
	}

IL_00f0:
	{
		return;
	}
}
// System.Void UIPopupList::AnimateColor(UIWidget)
extern "C" void UIPopupList_AnimateColor_m358 (UIPopupList_t80 * __this, UIWidget_t13 * ___widget, const MethodInfo* method)
{
	Color_t25  V_0 = {0};
	{
		UIWidget_t13 * L_0 = ___widget;
		NullCheck(L_0);
		Color_t25  L_1 = UIWidget_get_color_m672(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		UIWidget_t13 * L_2 = ___widget;
		float L_3 = ((&V_0)->___r_0);
		float L_4 = ((&V_0)->___g_1);
		float L_5 = ((&V_0)->___b_2);
		Color_t25  L_6 = {0};
		Color__ctor_m1396(&L_6, L_3, L_4, L_5, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		UIWidget_set_color_m673(L_2, L_6, /*hidden argument*/NULL);
		UIWidget_t13 * L_7 = ___widget;
		NullCheck(L_7);
		GameObject_t17 * L_8 = Component_get_gameObject_m1246(L_7, /*hidden argument*/NULL);
		Color_t25  L_9 = V_0;
		TweenColor_t199 * L_10 = TweenColor_Begin_m740(NULL /*static, unused*/, L_8, (0.15f), L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		((UITweener_t197 *)L_10)->___method_8 = 2;
		return;
	}
}
// System.Void UIPopupList::AnimatePosition(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_AnimatePosition_m359 (UIPopupList_t80 * __this, UIWidget_t13 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method)
{
	Vector3_t48  V_0 = {0};
	Vector3_t48  V_1 = {0};
	GameObject_t17 * V_2 = {0};
	Vector3_t48  G_B3_0 = {0};
	{
		UIWidget_t13 * L_0 = ___widget;
		NullCheck(L_0);
		Transform_t8 * L_1 = UIWidget_get_cachedTransform_m683(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t48  L_2 = Transform_get_localPosition_m1263(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = ___placeAbove;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		float L_4 = ((&V_0)->___x_1);
		float L_5 = ___bottom;
		float L_6 = ((&V_0)->___z_3);
		Vector3_t48  L_7 = {0};
		Vector3__ctor_m1278(&L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		goto IL_0043;
	}

IL_002b:
	{
		float L_8 = ((&V_0)->___x_1);
		float L_9 = ((&V_0)->___z_3);
		Vector3_t48  L_10 = {0};
		Vector3__ctor_m1278(&L_10, L_8, (0.0f), L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0043:
	{
		V_1 = G_B3_0;
		UIWidget_t13 * L_11 = ___widget;
		NullCheck(L_11);
		Transform_t8 * L_12 = UIWidget_get_cachedTransform_m683(L_11, /*hidden argument*/NULL);
		Vector3_t48  L_13 = V_1;
		NullCheck(L_12);
		Transform_set_localPosition_m1265(L_12, L_13, /*hidden argument*/NULL);
		UIWidget_t13 * L_14 = ___widget;
		NullCheck(L_14);
		GameObject_t17 * L_15 = Component_get_gameObject_m1246(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		GameObject_t17 * L_16 = V_2;
		Vector3_t48  L_17 = V_0;
		TweenPosition_t202 * L_18 = TweenPosition_Begin_m758(NULL /*static, unused*/, L_16, (0.15f), L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		((UITweener_t197 *)L_18)->___method_8 = 2;
		return;
	}
}
// System.Void UIPopupList::AnimateScale(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_AnimateScale_m360 (UIPopupList_t80 * __this, UIWidget_t13 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method)
{
	GameObject_t17 * V_0 = {0};
	Transform_t8 * V_1 = {0};
	float V_2 = 0.0f;
	Vector3_t48  V_3 = {0};
	Vector3_t48  V_4 = {0};
	{
		UIWidget_t13 * L_0 = ___widget;
		NullCheck(L_0);
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		UIWidget_t13 * L_2 = ___widget;
		NullCheck(L_2);
		Transform_t8 * L_3 = UIWidget_get_cachedTransform_m683(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		UIFont_t128 * L_4 = (__this->___font_5);
		NullCheck(L_4);
		int32_t L_5 = UIFont_get_size_m888(L_4, /*hidden argument*/NULL);
		float L_6 = (__this->___textScale_12);
		float L_7 = (__this->___mBgBorder_28);
		V_2 = ((float)((float)((float)((float)(((float)L_5))*(float)L_6))+(float)((float)((float)L_7*(float)(2.0f)))));
		Transform_t8 * L_8 = V_1;
		NullCheck(L_8);
		Vector3_t48  L_9 = Transform_get_localScale_m1264(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		Transform_t8 * L_10 = V_1;
		float L_11 = ((&V_3)->___x_1);
		float L_12 = V_2;
		float L_13 = ((&V_3)->___z_3);
		Vector3_t48  L_14 = {0};
		Vector3__ctor_m1278(&L_14, L_11, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m1281(L_10, L_14, /*hidden argument*/NULL);
		GameObject_t17 * L_15 = V_0;
		Vector3_t48  L_16 = V_3;
		TweenScale_t204 * L_17 = TweenScale_Begin_m770(NULL /*static, unused*/, L_15, (0.15f), L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		((UITweener_t197 *)L_17)->___method_8 = 2;
		bool L_18 = ___placeAbove;
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		Transform_t8 * L_19 = V_1;
		NullCheck(L_19);
		Vector3_t48  L_20 = Transform_get_localPosition_m1263(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		Transform_t8 * L_21 = V_1;
		float L_22 = ((&V_4)->___x_1);
		float L_23 = ((&V_4)->___y_2);
		float L_24 = ((&V_3)->___y_2);
		float L_25 = V_2;
		float L_26 = ((&V_4)->___z_3);
		Vector3_t48  L_27 = {0};
		Vector3__ctor_m1278(&L_27, L_22, ((float)((float)((float)((float)L_23-(float)L_24))+(float)L_25)), L_26, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localPosition_m1265(L_21, L_27, /*hidden argument*/NULL);
		GameObject_t17 * L_28 = V_0;
		Vector3_t48  L_29 = V_4;
		TweenPosition_t202 * L_30 = TweenPosition_Begin_m758(NULL /*static, unused*/, L_28, (0.15f), L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		((UITweener_t197 *)L_30)->___method_8 = 2;
	}

IL_00ad:
	{
		return;
	}
}
// System.Void UIPopupList::Animate(UIWidget,System.Boolean,System.Single)
extern "C" void UIPopupList_Animate_m361 (UIPopupList_t80 * __this, UIWidget_t13 * ___widget, bool ___placeAbove, float ___bottom, const MethodInfo* method)
{
	{
		UIWidget_t13 * L_0 = ___widget;
		UIPopupList_AnimateColor_m358(__this, L_0, /*hidden argument*/NULL);
		UIWidget_t13 * L_1 = ___widget;
		bool L_2 = ___placeAbove;
		float L_3 = ___bottom;
		UIPopupList_AnimatePosition_m359(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIPopupList::OnClick()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* UIPanel_t110_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t17_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t130_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern TypeInfo* BoolDelegate_t177_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1483_MethodInfo_var;
extern const MethodInfo* NGUITools_AddWidget_TisUILabel_t14_m1480_MethodInfo_var;
extern const MethodInfo* UIPopupList_OnItemHover_m353_MethodInfo_var;
extern const MethodInfo* UIPopupList_OnItemPress_m355_MethodInfo_var;
extern "C" void UIPopupList_OnClick_m362 (UIPopupList_t80 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		UIPanel_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		GameObject_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		List_1_t130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(88);
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		BoolDelegate_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		List_1__ctor_m1483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		NGUITools_AddWidget_TisUILabel_t14_m1480_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483728);
		UIPopupList_OnItemHover_m353_MethodInfo_var = il2cpp_codegen_method_info_from_index(81);
		UIPopupList_OnItemPress_m355_MethodInfo_var = il2cpp_codegen_method_info_from_index(82);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t8 * V_0 = {0};
	Bounds_t113  V_1 = {0};
	Transform_t8 * V_2 = {0};
	Vector4_t175  V_3 = {0};
	Sprite_t156 * V_4 = {0};
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	List_1_t130 * V_9 = {0};
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	String_t* V_12 = {0};
	UILabel_t14 * V_13 = {0};
	Vector3_t48  V_14 = {0};
	UIEventListener_t183 * V_15 = {0};
	Vector3_t48  V_16 = {0};
	Vector3_t48  V_17 = {0};
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	UILabel_t14 * V_20 = {0};
	BoxCollider_t138 * V_21 = {0};
	float V_22 = 0.0f;
	bool V_23 = false;
	UICamera_t219 * V_24 = {0};
	Vector3_t48  V_25 = {0};
	float V_26 = 0.0f;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	Vector2_t55  V_29 = {0};
	Vector3_t48  V_30 = {0};
	Vector3_t48  V_31 = {0};
	Vector3_t48  V_32 = {0};
	Vector3_t48  V_33 = {0};
	Vector3_t48  V_34 = {0};
	UILabel_t14 * G_B14_0 = {0};
	UILabel_t14 * G_B12_0 = {0};
	UILabel_t14 * G_B13_0 = {0};
	String_t* G_B15_0 = {0};
	UILabel_t14 * G_B15_1 = {0};
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0693;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0693;
		}
	}
	{
		GameObject_t17 * L_3 = (__this->___mChild_23);
		bool L_4 = Object_op_Equality_m1245(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0693;
		}
	}
	{
		UIAtlas_t10 * L_5 = (__this->___atlas_4);
		bool L_6 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_5, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0693;
		}
	}
	{
		UIFont_t128 * L_7 = (__this->___font_5);
		bool L_8 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_7, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0693;
		}
	}
	{
		List_1_t129 * L_9 = (__this->___items_10);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_9);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0693;
		}
	}
	{
		List_1_t130 * L_11 = (__this->___mLabelList_27);
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(20 /* System.Void System.Collections.Generic.List`1<UILabel>::Clear() */, L_11);
		UIPopupList_set_handleEvents_m349(__this, 1, /*hidden argument*/NULL);
		UIPanel_t110 * L_12 = (__this->___mPanel_22);
		bool L_13 = Object_op_Equality_m1245(NULL /*static, unused*/, L_12, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0094;
		}
	}
	{
		Transform_t8 * L_14 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIPanel_t110_il2cpp_TypeInfo_var);
		UIPanel_t110 * L_15 = UIPanel_Find_m1040(NULL /*static, unused*/, L_14, 1, /*hidden argument*/NULL);
		__this->___mPanel_22 = L_15;
	}

IL_0094:
	{
		Transform_t8 * L_16 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		V_0 = L_16;
		Transform_t8 * L_17 = V_0;
		NullCheck(L_17);
		Transform_t8 * L_18 = Transform_get_parent_m1319(L_17, /*hidden argument*/NULL);
		Transform_t8 * L_19 = V_0;
		Bounds_t113  L_20 = NGUIMath_CalculateRelativeWidgetBounds_m533(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		GameObject_t17 * L_21 = (GameObject_t17 *)il2cpp_codegen_object_new (GameObject_t17_il2cpp_TypeInfo_var);
		GameObject__ctor_m1378(L_21, (String_t*) &_stringLiteral56, /*hidden argument*/NULL);
		__this->___mChild_23 = L_21;
		GameObject_t17 * L_22 = (__this->___mChild_23);
		GameObject_t17 * L_23 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_24 = GameObject_get_layer_m1254(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		GameObject_set_layer_m1486(L_22, L_24, /*hidden argument*/NULL);
		GameObject_t17 * L_25 = (__this->___mChild_23);
		NullCheck(L_25);
		Transform_t8 * L_26 = GameObject_get_transform_m1277(L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		Transform_t8 * L_27 = V_2;
		Transform_t8 * L_28 = V_0;
		NullCheck(L_28);
		Transform_t8 * L_29 = Transform_get_parent_m1319(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_parent_m1285(L_27, L_29, /*hidden argument*/NULL);
		Transform_t8 * L_30 = V_2;
		Vector3_t48  L_31 = Bounds_get_min_m1455((&V_1), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_m1265(L_30, L_31, /*hidden argument*/NULL);
		Transform_t8 * L_32 = V_2;
		Quaternion_t50  L_33 = Quaternion_get_identity_m1287(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localRotation_m1288(L_32, L_33, /*hidden argument*/NULL);
		Transform_t8 * L_34 = V_2;
		Vector3_t48  L_35 = Vector3_get_one_m1289(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_localScale_m1281(L_34, L_35, /*hidden argument*/NULL);
		GameObject_t17 * L_36 = (__this->___mChild_23);
		UIAtlas_t10 * L_37 = (__this->___atlas_4);
		String_t* L_38 = (__this->___backgroundSprite_7);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		UISprite_t9 * L_39 = NGUITools_AddSprite_m567(NULL /*static, unused*/, L_36, L_37, L_38, /*hidden argument*/NULL);
		__this->___mBackground_24 = L_39;
		UISprite_t9 * L_40 = (__this->___mBackground_24);
		NullCheck(L_40);
		UIWidget_set_pivot_m678(L_40, 0, /*hidden argument*/NULL);
		UISprite_t9 * L_41 = (__this->___mBackground_24);
		UIPanel_t110 * L_42 = (__this->___mPanel_22);
		NullCheck(L_42);
		GameObject_t17 * L_43 = Component_get_gameObject_m1246(L_42, /*hidden argument*/NULL);
		int32_t L_44 = NGUITools_CalculateNextDepth_m566(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		NullCheck(L_41);
		UIWidget_set_depth_m680(L_41, L_44, /*hidden argument*/NULL);
		UISprite_t9 * L_45 = (__this->___mBackground_24);
		Color_t25  L_46 = (__this->___backgroundColor_14);
		NullCheck(L_45);
		UIWidget_set_color_m673(L_45, L_46, /*hidden argument*/NULL);
		UISprite_t9 * L_47 = (__this->___mBackground_24);
		NullCheck(L_47);
		Vector4_t175  L_48 = (Vector4_t175 )VirtFuncInvoker0< Vector4_t175  >::Invoke(16 /* UnityEngine.Vector4 UISprite::get_border() */, L_47);
		V_3 = L_48;
		float L_49 = ((&V_3)->___y_2);
		__this->___mBgBorder_28 = L_49;
		UISprite_t9 * L_50 = (__this->___mBackground_24);
		NullCheck(L_50);
		Transform_t8 * L_51 = UIWidget_get_cachedTransform_m683(L_50, /*hidden argument*/NULL);
		float L_52 = ((&V_3)->___y_2);
		Vector3_t48  L_53 = {0};
		Vector3__ctor_m1278(&L_53, (0.0f), L_52, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_localPosition_m1265(L_51, L_53, /*hidden argument*/NULL);
		GameObject_t17 * L_54 = (__this->___mChild_23);
		UIAtlas_t10 * L_55 = (__this->___atlas_4);
		String_t* L_56 = (__this->___highlightSprite_8);
		UISprite_t9 * L_57 = NGUITools_AddSprite_m567(NULL /*static, unused*/, L_54, L_55, L_56, /*hidden argument*/NULL);
		__this->___mHighlight_25 = L_57;
		UISprite_t9 * L_58 = (__this->___mHighlight_25);
		NullCheck(L_58);
		UIWidget_set_pivot_m678(L_58, 0, /*hidden argument*/NULL);
		UISprite_t9 * L_59 = (__this->___mHighlight_25);
		Color_t25  L_60 = (__this->___highlightColor_15);
		NullCheck(L_59);
		UIWidget_set_color_m673(L_59, L_60, /*hidden argument*/NULL);
		UISprite_t9 * L_61 = (__this->___mHighlight_25);
		NullCheck(L_61);
		Sprite_t156 * L_62 = UISprite_GetAtlasSprite_m1079(L_61, /*hidden argument*/NULL);
		V_4 = L_62;
		Sprite_t156 * L_63 = V_4;
		if (L_63)
		{
			goto IL_01ec;
		}
	}
	{
		return;
	}

IL_01ec:
	{
		Sprite_t156 * L_64 = V_4;
		NullCheck(L_64);
		Rect_t158 * L_65 = &(L_64->___inner_2);
		float L_66 = Rect_get_yMin_m1451(L_65, /*hidden argument*/NULL);
		Sprite_t156 * L_67 = V_4;
		NullCheck(L_67);
		Rect_t158 * L_68 = &(L_67->___outer_1);
		float L_69 = Rect_get_yMin_m1451(L_68, /*hidden argument*/NULL);
		V_5 = ((float)((float)L_66-(float)L_69));
		UIFont_t128 * L_70 = (__this->___font_5);
		NullCheck(L_70);
		int32_t L_71 = UIFont_get_size_m888(L_70, /*hidden argument*/NULL);
		UIFont_t128 * L_72 = (__this->___font_5);
		NullCheck(L_72);
		float L_73 = UIFont_get_pixelSize_m875(L_72, /*hidden argument*/NULL);
		float L_74 = (__this->___textScale_12);
		V_6 = ((float)((float)((float)((float)(((float)L_71))*(float)L_73))*(float)L_74));
		V_7 = (0.0f);
		Vector2_t55 * L_75 = &(__this->___padding_11);
		float L_76 = (L_75->___y_2);
		V_8 = ((-L_76));
		List_1_t130 * L_77 = (List_1_t130 *)il2cpp_codegen_object_new (List_1_t130_il2cpp_TypeInfo_var);
		List_1__ctor_m1483(L_77, /*hidden argument*/List_1__ctor_m1483_MethodInfo_var);
		V_9 = L_77;
		V_10 = 0;
		List_1_t129 * L_78 = (__this->___items_10);
		NullCheck(L_78);
		int32_t L_79 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_78);
		V_11 = L_79;
		goto IL_03dc;
	}

IL_0259:
	{
		List_1_t129 * L_80 = (__this->___items_10);
		int32_t L_81 = V_10;
		NullCheck(L_80);
		String_t* L_82 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_80, L_81);
		V_12 = L_82;
		GameObject_t17 * L_83 = (__this->___mChild_23);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		UILabel_t14 * L_84 = NGUITools_AddWidget_TisUILabel_t14_m1480(NULL /*static, unused*/, L_83, /*hidden argument*/NGUITools_AddWidget_TisUILabel_t14_m1480_MethodInfo_var);
		V_13 = L_84;
		UILabel_t14 * L_85 = V_13;
		NullCheck(L_85);
		UIWidget_set_pivot_m678(L_85, 0, /*hidden argument*/NULL);
		UILabel_t14 * L_86 = V_13;
		UIFont_t128 * L_87 = (__this->___font_5);
		NullCheck(L_86);
		UILabel_set_font_m954(L_86, L_87, /*hidden argument*/NULL);
		UILabel_t14 * L_88 = V_13;
		bool L_89 = (__this->___isLocalized_17);
		G_B12_0 = L_88;
		if (!L_89)
		{
			G_B14_0 = L_88;
			goto IL_02b8;
		}
	}
	{
		Localization_t161 * L_90 = Localization_get_instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_91 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_90, (Object_t69 *)NULL, /*hidden argument*/NULL);
		G_B13_0 = G_B12_0;
		if (!L_91)
		{
			G_B14_0 = G_B12_0;
			goto IL_02b8;
		}
	}
	{
		Localization_t161 * L_92 = Localization_get_instance_m498(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_93 = V_12;
		NullCheck(L_92);
		String_t* L_94 = Localization_Get_m505(L_92, L_93, /*hidden argument*/NULL);
		G_B15_0 = L_94;
		G_B15_1 = G_B13_0;
		goto IL_02ba;
	}

IL_02b8:
	{
		String_t* L_95 = V_12;
		G_B15_0 = L_95;
		G_B15_1 = G_B14_0;
	}

IL_02ba:
	{
		NullCheck(G_B15_1);
		UILabel_set_text_m956(G_B15_1, G_B15_0, /*hidden argument*/NULL);
		UILabel_t14 * L_96 = V_13;
		Color_t25  L_97 = (__this->___textColor_13);
		NullCheck(L_96);
		UIWidget_set_color_m673(L_96, L_97, /*hidden argument*/NULL);
		UILabel_t14 * L_98 = V_13;
		NullCheck(L_98);
		Transform_t8 * L_99 = UIWidget_get_cachedTransform_m683(L_98, /*hidden argument*/NULL);
		float L_100 = ((&V_3)->___x_1);
		Vector2_t55 * L_101 = &(__this->___padding_11);
		float L_102 = (L_101->___x_1);
		float L_103 = V_8;
		Vector3_t48  L_104 = {0};
		Vector3__ctor_m1278(&L_104, ((float)((float)L_100+(float)L_102)), L_103, (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_99);
		Transform_set_localPosition_m1265(L_99, L_104, /*hidden argument*/NULL);
		UILabel_t14 * L_105 = V_13;
		NullCheck(L_105);
		VirtActionInvoker0::Invoke(13 /* System.Void UILabel::MakePixelPerfect() */, L_105);
		float L_106 = (__this->___textScale_12);
		if ((((float)L_106) == ((float)(1.0f))))
		{
			goto IL_0335;
		}
	}
	{
		UILabel_t14 * L_107 = V_13;
		NullCheck(L_107);
		Transform_t8 * L_108 = UIWidget_get_cachedTransform_m683(L_107, /*hidden argument*/NULL);
		NullCheck(L_108);
		Vector3_t48  L_109 = Transform_get_localScale_m1264(L_108, /*hidden argument*/NULL);
		V_14 = L_109;
		UILabel_t14 * L_110 = V_13;
		NullCheck(L_110);
		Transform_t8 * L_111 = UIWidget_get_cachedTransform_m683(L_110, /*hidden argument*/NULL);
		Vector3_t48  L_112 = V_14;
		float L_113 = (__this->___textScale_12);
		Vector3_t48  L_114 = Vector3_op_Multiply_m1362(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/NULL);
		NullCheck(L_111);
		Transform_set_localScale_m1281(L_111, L_114, /*hidden argument*/NULL);
	}

IL_0335:
	{
		List_1_t130 * L_115 = V_9;
		UILabel_t14 * L_116 = V_13;
		NullCheck(L_115);
		VirtActionInvoker1< UILabel_t14 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UILabel>::Add(!0) */, L_115, L_116);
		float L_117 = V_8;
		float L_118 = V_6;
		V_8 = ((float)((float)L_117-(float)L_118));
		float L_119 = V_8;
		Vector2_t55 * L_120 = &(__this->___padding_11);
		float L_121 = (L_120->___y_2);
		V_8 = ((float)((float)L_119-(float)L_121));
		float L_122 = V_7;
		UILabel_t14 * L_123 = V_13;
		NullCheck(L_123);
		Vector2_t55  L_124 = (Vector2_t55 )VirtFuncInvoker0< Vector2_t55  >::Invoke(14 /* UnityEngine.Vector2 UILabel::get_relativeSize() */, L_123);
		V_29 = L_124;
		float L_125 = ((&V_29)->___x_1);
		float L_126 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_127 = Mathf_Max_m1487(NULL /*static, unused*/, L_122, ((float)((float)L_125*(float)L_126)), /*hidden argument*/NULL);
		V_7 = L_127;
		UILabel_t14 * L_128 = V_13;
		NullCheck(L_128);
		GameObject_t17 * L_129 = Component_get_gameObject_m1246(L_128, /*hidden argument*/NULL);
		UIEventListener_t183 * L_130 = UIEventListener_Get_m661(NULL /*static, unused*/, L_129, /*hidden argument*/NULL);
		V_15 = L_130;
		UIEventListener_t183 * L_131 = V_15;
		IntPtr_t L_132 = { (void*)UIPopupList_OnItemHover_m353_MethodInfo_var };
		BoolDelegate_t177 * L_133 = (BoolDelegate_t177 *)il2cpp_codegen_object_new (BoolDelegate_t177_il2cpp_TypeInfo_var);
		BoolDelegate__ctor_m625(L_133, __this, L_132, /*hidden argument*/NULL);
		NullCheck(L_131);
		L_131->___onHover_6 = L_133;
		UIEventListener_t183 * L_134 = V_15;
		IntPtr_t L_135 = { (void*)UIPopupList_OnItemPress_m355_MethodInfo_var };
		BoolDelegate_t177 * L_136 = (BoolDelegate_t177 *)il2cpp_codegen_object_new (BoolDelegate_t177_il2cpp_TypeInfo_var);
		BoolDelegate__ctor_m625(L_136, __this, L_135, /*hidden argument*/NULL);
		NullCheck(L_134);
		L_134->___onPress_7 = L_136;
		UIEventListener_t183 * L_137 = V_15;
		String_t* L_138 = V_12;
		NullCheck(L_137);
		L_137->___parameter_2 = L_138;
		String_t* L_139 = (__this->___mSelectedItem_21);
		String_t* L_140 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_141 = String_op_Equality_m1295(NULL /*static, unused*/, L_139, L_140, /*hidden argument*/NULL);
		if (!L_141)
		{
			goto IL_03c9;
		}
	}
	{
		UILabel_t14 * L_142 = V_13;
		UIPopupList_Highlight_m352(__this, L_142, 1, /*hidden argument*/NULL);
	}

IL_03c9:
	{
		List_1_t130 * L_143 = (__this->___mLabelList_27);
		UILabel_t14 * L_144 = V_13;
		NullCheck(L_143);
		VirtActionInvoker1< UILabel_t14 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UILabel>::Add(!0) */, L_143, L_144);
		int32_t L_145 = V_10;
		V_10 = ((int32_t)((int32_t)L_145+(int32_t)1));
	}

IL_03dc:
	{
		int32_t L_146 = V_10;
		int32_t L_147 = V_11;
		if ((((int32_t)L_146) < ((int32_t)L_147)))
		{
			goto IL_0259;
		}
	}
	{
		float L_148 = V_7;
		Vector3_t48  L_149 = Bounds_get_size_m1280((&V_1), /*hidden argument*/NULL);
		V_30 = L_149;
		float L_150 = ((&V_30)->___x_1);
		float L_151 = ((&V_3)->___x_1);
		Vector2_t55 * L_152 = &(__this->___padding_11);
		float L_153 = (L_152->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_154 = Mathf_Max_m1487(NULL /*static, unused*/, L_148, ((float)((float)L_150-(float)((float)((float)((float)((float)L_151+(float)L_153))*(float)(2.0f))))), /*hidden argument*/NULL);
		V_7 = L_154;
		float L_155 = V_7;
		float L_156 = V_6;
		Vector3__ctor_m1278((&V_16), ((float)((float)((float)((float)L_155*(float)(0.5f)))/(float)L_156)), (-0.5f), (0.0f), /*hidden argument*/NULL);
		float L_157 = V_7;
		float L_158 = V_6;
		float L_159 = V_6;
		Vector2_t55 * L_160 = &(__this->___padding_11);
		float L_161 = (L_160->___y_2);
		float L_162 = V_6;
		Vector3__ctor_m1278((&V_17), ((float)((float)L_157/(float)L_158)), ((float)((float)((float)((float)L_159+(float)L_161))/(float)L_162)), (1.0f), /*hidden argument*/NULL);
		V_18 = 0;
		List_1_t130 * L_163 = V_9;
		NullCheck(L_163);
		int32_t L_164 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UILabel>::get_Count() */, L_163);
		V_19 = L_164;
		goto IL_04af;
	}

IL_0467:
	{
		List_1_t130 * L_165 = V_9;
		int32_t L_166 = V_18;
		NullCheck(L_165);
		UILabel_t14 * L_167 = (UILabel_t14 *)VirtFuncInvoker1< UILabel_t14 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UILabel>::get_Item(System.Int32) */, L_165, L_166);
		V_20 = L_167;
		UILabel_t14 * L_168 = V_20;
		NullCheck(L_168);
		GameObject_t17 * L_169 = Component_get_gameObject_m1246(L_168, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		BoxCollider_t138 * L_170 = NGUITools_AddWidgetCollider_m563(NULL /*static, unused*/, L_169, /*hidden argument*/NULL);
		V_21 = L_170;
		BoxCollider_t138 * L_171 = V_21;
		NullCheck(L_171);
		Vector3_t48  L_172 = BoxCollider_get_center_m1488(L_171, /*hidden argument*/NULL);
		V_31 = L_172;
		float L_173 = ((&V_31)->___z_3);
		(&V_16)->___z_3 = L_173;
		BoxCollider_t138 * L_174 = V_21;
		Vector3_t48  L_175 = V_16;
		NullCheck(L_174);
		BoxCollider_set_center_m1489(L_174, L_175, /*hidden argument*/NULL);
		BoxCollider_t138 * L_176 = V_21;
		Vector3_t48  L_177 = V_17;
		NullCheck(L_176);
		BoxCollider_set_size_m1490(L_176, L_177, /*hidden argument*/NULL);
		int32_t L_178 = V_18;
		V_18 = ((int32_t)((int32_t)L_178+(int32_t)1));
	}

IL_04af:
	{
		int32_t L_179 = V_18;
		int32_t L_180 = V_19;
		if ((((int32_t)L_179) < ((int32_t)L_180)))
		{
			goto IL_0467;
		}
	}
	{
		float L_181 = V_7;
		float L_182 = ((&V_3)->___x_1);
		Vector2_t55 * L_183 = &(__this->___padding_11);
		float L_184 = (L_183->___x_1);
		V_7 = ((float)((float)L_181+(float)((float)((float)((float)((float)L_182+(float)L_184))*(float)(2.0f)))));
		float L_185 = V_8;
		float L_186 = ((&V_3)->___y_2);
		V_8 = ((float)((float)L_185-(float)L_186));
		UISprite_t9 * L_187 = (__this->___mBackground_24);
		NullCheck(L_187);
		Transform_t8 * L_188 = UIWidget_get_cachedTransform_m683(L_187, /*hidden argument*/NULL);
		float L_189 = V_7;
		float L_190 = V_8;
		float L_191 = ((&V_3)->___y_2);
		Vector3_t48  L_192 = {0};
		Vector3__ctor_m1278(&L_192, L_189, ((float)((float)((-L_190))+(float)L_191)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_188);
		Transform_set_localScale_m1281(L_188, L_192, /*hidden argument*/NULL);
		UIAtlas_t10 * L_193 = (__this->___atlas_4);
		NullCheck(L_193);
		float L_194 = UIAtlas_get_pixelSize_m812(L_193, /*hidden argument*/NULL);
		V_22 = ((float)((float)(2.0f)*(float)L_194));
		UISprite_t9 * L_195 = (__this->___mHighlight_25);
		NullCheck(L_195);
		Transform_t8 * L_196 = UIWidget_get_cachedTransform_m683(L_195, /*hidden argument*/NULL);
		float L_197 = V_7;
		float L_198 = ((&V_3)->___x_1);
		Vector2_t55 * L_199 = &(__this->___padding_11);
		float L_200 = (L_199->___x_1);
		Sprite_t156 * L_201 = V_4;
		NullCheck(L_201);
		Rect_t158 * L_202 = &(L_201->___inner_2);
		float L_203 = Rect_get_xMin_m1450(L_202, /*hidden argument*/NULL);
		Sprite_t156 * L_204 = V_4;
		NullCheck(L_204);
		Rect_t158 * L_205 = &(L_204->___outer_1);
		float L_206 = Rect_get_xMin_m1450(L_205, /*hidden argument*/NULL);
		float L_207 = V_22;
		float L_208 = V_6;
		float L_209 = V_5;
		float L_210 = V_22;
		Vector3_t48  L_211 = {0};
		Vector3__ctor_m1278(&L_211, ((float)((float)((float)((float)L_197-(float)((float)((float)((float)((float)L_198+(float)L_200))*(float)(2.0f)))))+(float)((float)((float)((float)((float)L_203-(float)L_206))*(float)L_207)))), ((float)((float)L_208+(float)((float)((float)L_209*(float)L_210)))), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_196);
		Transform_set_localScale_m1281(L_196, L_211, /*hidden argument*/NULL);
		int32_t L_212 = (__this->___position_9);
		V_23 = ((((int32_t)L_212) == ((int32_t)1))? 1 : 0);
		int32_t L_213 = (__this->___position_9);
		if (L_213)
		{
			goto IL_05d0;
		}
	}
	{
		GameObject_t17 * L_214 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		NullCheck(L_214);
		int32_t L_215 = GameObject_get_layer_m1254(L_214, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		UICamera_t219 * L_216 = UICamera_FindCameraForLayer_m843(NULL /*static, unused*/, L_215, /*hidden argument*/NULL);
		V_24 = L_216;
		UICamera_t219 * L_217 = V_24;
		bool L_218 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_217, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_218)
		{
			goto IL_05d0;
		}
	}
	{
		UICamera_t219 * L_219 = V_24;
		NullCheck(L_219);
		Camera_t7 * L_220 = UICamera_get_cachedCamera_m832(L_219, /*hidden argument*/NULL);
		Transform_t8 * L_221 = V_0;
		NullCheck(L_221);
		Vector3_t48  L_222 = Transform_get_position_m1282(L_221, /*hidden argument*/NULL);
		NullCheck(L_220);
		Vector3_t48  L_223 = Camera_WorldToViewportPoint_m1388(L_220, L_222, /*hidden argument*/NULL);
		V_25 = L_223;
		float L_224 = ((&V_25)->___y_2);
		V_23 = ((((float)L_224) < ((float)(0.5f)))? 1 : 0);
	}

IL_05d0:
	{
		bool L_225 = (__this->___isAnimated_16);
		if (!L_225)
		{
			goto IL_0641;
		}
	}
	{
		float L_226 = V_8;
		float L_227 = V_6;
		V_26 = ((float)((float)L_226+(float)L_227));
		UISprite_t9 * L_228 = (__this->___mHighlight_25);
		bool L_229 = V_23;
		float L_230 = V_26;
		UIPopupList_Animate_m361(__this, L_228, L_229, L_230, /*hidden argument*/NULL);
		V_27 = 0;
		List_1_t130 * L_231 = V_9;
		NullCheck(L_231);
		int32_t L_232 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UILabel>::get_Count() */, L_231);
		V_28 = L_232;
		goto IL_061c;
	}

IL_0603:
	{
		List_1_t130 * L_233 = V_9;
		int32_t L_234 = V_27;
		NullCheck(L_233);
		UILabel_t14 * L_235 = (UILabel_t14 *)VirtFuncInvoker1< UILabel_t14 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UILabel>::get_Item(System.Int32) */, L_233, L_234);
		bool L_236 = V_23;
		float L_237 = V_26;
		UIPopupList_Animate_m361(__this, L_235, L_236, L_237, /*hidden argument*/NULL);
		int32_t L_238 = V_27;
		V_27 = ((int32_t)((int32_t)L_238+(int32_t)1));
	}

IL_061c:
	{
		int32_t L_239 = V_27;
		int32_t L_240 = V_28;
		if ((((int32_t)L_239) < ((int32_t)L_240)))
		{
			goto IL_0603;
		}
	}
	{
		UISprite_t9 * L_241 = (__this->___mBackground_24);
		UIPopupList_AnimateColor_m358(__this, L_241, /*hidden argument*/NULL);
		UISprite_t9 * L_242 = (__this->___mBackground_24);
		bool L_243 = V_23;
		float L_244 = V_26;
		UIPopupList_AnimateScale_m360(__this, L_242, L_243, L_244, /*hidden argument*/NULL);
	}

IL_0641:
	{
		bool L_245 = V_23;
		if (!L_245)
		{
			goto IL_068e;
		}
	}
	{
		Transform_t8 * L_246 = V_2;
		Vector3_t48  L_247 = Bounds_get_min_m1455((&V_1), /*hidden argument*/NULL);
		V_32 = L_247;
		float L_248 = ((&V_32)->___x_1);
		Vector3_t48  L_249 = Bounds_get_max_m1456((&V_1), /*hidden argument*/NULL);
		V_33 = L_249;
		float L_250 = ((&V_33)->___y_2);
		float L_251 = V_8;
		float L_252 = ((&V_3)->___y_2);
		Vector3_t48  L_253 = Bounds_get_min_m1455((&V_1), /*hidden argument*/NULL);
		V_34 = L_253;
		float L_254 = ((&V_34)->___z_3);
		Vector3_t48  L_255 = {0};
		Vector3__ctor_m1278(&L_255, L_248, ((float)((float)((float)((float)L_250-(float)L_251))-(float)L_252)), L_254, /*hidden argument*/NULL);
		NullCheck(L_246);
		Transform_set_localPosition_m1265(L_246, L_255, /*hidden argument*/NULL);
	}

IL_068e:
	{
		goto IL_069a;
	}

IL_0693:
	{
		UIPopupList_OnSelect_m357(__this, 0, /*hidden argument*/NULL);
	}

IL_069a:
	{
		return;
	}
}
// UISavedOption
#include "AssemblyU2DCSharp_UISavedOption.h"
#ifndef _MSC_VER
#else
#endif
// UISavedOption
#include "AssemblyU2DCSharp_UISavedOptionMethodDeclarations.h"

// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"


// System.Void UISavedOption::.ctor()
extern "C" void UISavedOption__ctor_m363 (UISavedOption_t131 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UISavedOption::get_key()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UISavedOption_get_key_m364 (UISavedOption_t131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = (__this->___keyName_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_2 = Object_get_name_m1344(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1269(NULL /*static, unused*/, (String_t*) &_stringLiteral57, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002b;
	}

IL_0025:
	{
		String_t* L_4 = (__this->___keyName_2);
		G_B3_0 = L_4;
	}

IL_002b:
	{
		return G_B3_0;
	}
}
// System.Void UISavedOption::Awake()
extern TypeInfo* OnSelectionChange_t127_il2cpp_TypeInfo_var;
extern TypeInfo* OnStateChange_t102_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUIPopupList_t80_m1389_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisUICheckbox_t103_m1424_MethodInfo_var;
extern const MethodInfo* UISavedOption_SaveSelection_m369_MethodInfo_var;
extern const MethodInfo* UISavedOption_SaveState_m370_MethodInfo_var;
extern "C" void UISavedOption_Awake_m365 (UISavedOption_t131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnSelectionChange_t127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		OnStateChange_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		Component_GetComponent_TisUIPopupList_t80_m1389_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		Component_GetComponent_TisUICheckbox_t103_m1424_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		UISavedOption_SaveSelection_m369_MethodInfo_var = il2cpp_codegen_method_info_from_index(83);
		UISavedOption_SaveState_m370_MethodInfo_var = il2cpp_codegen_method_info_from_index(84);
		s_Il2CppMethodIntialized = true;
	}
	{
		UIPopupList_t80 * L_0 = Component_GetComponent_TisUIPopupList_t80_m1389(__this, /*hidden argument*/Component_GetComponent_TisUIPopupList_t80_m1389_MethodInfo_var);
		__this->___mList_3 = L_0;
		UICheckbox_t103 * L_1 = Component_GetComponent_TisUICheckbox_t103_m1424(__this, /*hidden argument*/Component_GetComponent_TisUICheckbox_t103_m1424_MethodInfo_var);
		__this->___mCheck_4 = L_1;
		UIPopupList_t80 * L_2 = (__this->___mList_3);
		bool L_3 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		UIPopupList_t80 * L_4 = (__this->___mList_3);
		UIPopupList_t80 * L_5 = L_4;
		NullCheck(L_5);
		OnSelectionChange_t127 * L_6 = (L_5->___onSelectionChange_20);
		IntPtr_t L_7 = { (void*)UISavedOption_SaveSelection_m369_MethodInfo_var };
		OnSelectionChange_t127 * L_8 = (OnSelectionChange_t127 *)il2cpp_codegen_object_new (OnSelectionChange_t127_il2cpp_TypeInfo_var);
		OnSelectionChange__ctor_m340(L_8, __this, L_7, /*hidden argument*/NULL);
		Delegate_t314 * L_9 = Delegate_Combine_m1425(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->___onSelectionChange_20 = ((OnSelectionChange_t127 *)Castclass(L_9, OnSelectionChange_t127_il2cpp_TypeInfo_var));
	}

IL_0050:
	{
		UICheckbox_t103 * L_10 = (__this->___mCheck_4);
		bool L_11 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_10, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		UICheckbox_t103 * L_12 = (__this->___mCheck_4);
		UICheckbox_t103 * L_13 = L_12;
		NullCheck(L_13);
		OnStateChange_t102 * L_14 = (L_13->___onStateChange_11);
		IntPtr_t L_15 = { (void*)UISavedOption_SaveState_m370_MethodInfo_var };
		OnStateChange_t102 * L_16 = (OnStateChange_t102 *)il2cpp_codegen_object_new (OnStateChange_t102_il2cpp_TypeInfo_var);
		OnStateChange__ctor_m239(L_16, __this, L_15, /*hidden argument*/NULL);
		Delegate_t314 * L_17 = Delegate_Combine_m1425(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->___onStateChange_11 = ((OnStateChange_t102 *)Castclass(L_17, OnStateChange_t102_il2cpp_TypeInfo_var));
	}

IL_0088:
	{
		return;
	}
}
// System.Void UISavedOption::OnDestroy()
extern TypeInfo* OnStateChange_t102_il2cpp_TypeInfo_var;
extern TypeInfo* OnSelectionChange_t127_il2cpp_TypeInfo_var;
extern const MethodInfo* UISavedOption_SaveState_m370_MethodInfo_var;
extern const MethodInfo* UISavedOption_SaveSelection_m369_MethodInfo_var;
extern "C" void UISavedOption_OnDestroy_m366 (UISavedOption_t131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnStateChange_t102_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		OnSelectionChange_t127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		UISavedOption_SaveState_m370_MethodInfo_var = il2cpp_codegen_method_info_from_index(84);
		UISavedOption_SaveSelection_m369_MethodInfo_var = il2cpp_codegen_method_info_from_index(83);
		s_Il2CppMethodIntialized = true;
	}
	{
		UICheckbox_t103 * L_0 = (__this->___mCheck_4);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		UICheckbox_t103 * L_2 = (__this->___mCheck_4);
		UICheckbox_t103 * L_3 = L_2;
		NullCheck(L_3);
		OnStateChange_t102 * L_4 = (L_3->___onStateChange_11);
		IntPtr_t L_5 = { (void*)UISavedOption_SaveState_m370_MethodInfo_var };
		OnStateChange_t102 * L_6 = (OnStateChange_t102 *)il2cpp_codegen_object_new (OnStateChange_t102_il2cpp_TypeInfo_var);
		OnStateChange__ctor_m239(L_6, __this, L_5, /*hidden argument*/NULL);
		Delegate_t314 * L_7 = Delegate_Remove_m1465(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->___onStateChange_11 = ((OnStateChange_t102 *)Castclass(L_7, OnStateChange_t102_il2cpp_TypeInfo_var));
	}

IL_0038:
	{
		UIPopupList_t80 * L_8 = (__this->___mList_3);
		bool L_9 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_8, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		UIPopupList_t80 * L_10 = (__this->___mList_3);
		UIPopupList_t80 * L_11 = L_10;
		NullCheck(L_11);
		OnSelectionChange_t127 * L_12 = (L_11->___onSelectionChange_20);
		IntPtr_t L_13 = { (void*)UISavedOption_SaveSelection_m369_MethodInfo_var };
		OnSelectionChange_t127 * L_14 = (OnSelectionChange_t127 *)il2cpp_codegen_object_new (OnSelectionChange_t127_il2cpp_TypeInfo_var);
		OnSelectionChange__ctor_m340(L_14, __this, L_13, /*hidden argument*/NULL);
		Delegate_t314 * L_15 = Delegate_Remove_m1465(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->___onSelectionChange_20 = ((OnSelectionChange_t127 *)Castclass(L_15, OnSelectionChange_t127_il2cpp_TypeInfo_var));
	}

IL_0070:
	{
		return;
	}
}
// System.Void UISavedOption::OnEnable()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponentsInChildren_TisUICheckbox_t103_m1422_MethodInfo_var;
extern "C" void UISavedOption_OnEnable_m367 (UISavedOption_t131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Component_GetComponentsInChildren_TisUICheckbox_t103_m1422_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	UICheckboxU5BU5D_t313* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	UICheckbox_t103 * V_5 = {0};
	{
		UIPopupList_t80 * L_0 = (__this->___mList_3);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_2 = UISavedOption_get_key_m364(__this, /*hidden argument*/NULL);
		String_t* L_3 = PlayerPrefs_GetString_m1491(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		UIPopupList_t80 * L_6 = (__this->___mList_3);
		String_t* L_7 = V_0;
		NullCheck(L_6);
		UIPopupList_set_selection_m347(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}

IL_0035:
	{
		UICheckbox_t103 * L_8 = (__this->___mCheck_4);
		bool L_9 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_8, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		UICheckbox_t103 * L_10 = (__this->___mCheck_4);
		String_t* L_11 = UISavedOption_get_key_m364(__this, /*hidden argument*/NULL);
		int32_t L_12 = PlayerPrefs_GetInt_m1492(NULL /*static, unused*/, L_11, 1, /*hidden argument*/NULL);
		NullCheck(L_10);
		UICheckbox_set_isChecked_m245(L_10, ((((int32_t)((((int32_t)L_12) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		goto IL_00ad;
	}

IL_0068:
	{
		String_t* L_13 = UISavedOption_get_key_m364(__this, /*hidden argument*/NULL);
		String_t* L_14 = PlayerPrefs_GetString_m1491(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		UICheckboxU5BU5D_t313* L_15 = Component_GetComponentsInChildren_TisUICheckbox_t103_m1422(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisUICheckbox_t103_m1422_MethodInfo_var);
		V_2 = L_15;
		V_3 = 0;
		UICheckboxU5BU5D_t313* L_16 = V_2;
		NullCheck(L_16);
		V_4 = (((int32_t)(((Array_t *)L_16)->max_length)));
		goto IL_00a5;
	}

IL_0088:
	{
		UICheckboxU5BU5D_t313* L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_5 = (*(UICheckbox_t103 **)(UICheckbox_t103 **)SZArrayLdElema(L_17, L_19));
		UICheckbox_t103 * L_20 = V_5;
		UICheckbox_t103 * L_21 = V_5;
		NullCheck(L_21);
		String_t* L_22 = Object_get_name_m1344(L_21, /*hidden argument*/NULL);
		String_t* L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Equality_m1295(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		UICheckbox_set_isChecked_m245(L_20, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_3;
		V_3 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_26 = V_3;
		int32_t L_27 = V_4;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0088;
		}
	}

IL_00ad:
	{
		return;
	}
}
// System.Void UISavedOption::OnDisable()
extern const MethodInfo* Component_GetComponentsInChildren_TisUICheckbox_t103_m1422_MethodInfo_var;
extern "C" void UISavedOption_OnDisable_m368 (UISavedOption_t131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponentsInChildren_TisUICheckbox_t103_m1422_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	UICheckboxU5BU5D_t313* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	UICheckbox_t103 * V_3 = {0};
	{
		UICheckbox_t103 * L_0 = (__this->___mCheck_4);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0060;
		}
	}
	{
		UIPopupList_t80 * L_2 = (__this->___mList_3);
		bool L_3 = Object_op_Equality_m1245(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		UICheckboxU5BU5D_t313* L_4 = Component_GetComponentsInChildren_TisUICheckbox_t103_m1422(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisUICheckbox_t103_m1422_MethodInfo_var);
		V_0 = L_4;
		V_1 = 0;
		UICheckboxU5BU5D_t313* L_5 = V_0;
		NullCheck(L_5);
		V_2 = (((int32_t)(((Array_t *)L_5)->max_length)));
		goto IL_0059;
	}

IL_0035:
	{
		UICheckboxU5BU5D_t313* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(UICheckbox_t103 **)(UICheckbox_t103 **)SZArrayLdElema(L_6, L_8));
		UICheckbox_t103 * L_9 = V_3;
		NullCheck(L_9);
		bool L_10 = UICheckbox_get_isChecked_m244(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		UICheckbox_t103 * L_11 = V_3;
		NullCheck(L_11);
		String_t* L_12 = Object_get_name_m1344(L_11, /*hidden argument*/NULL);
		UISavedOption_SaveSelection_m369(__this, L_12, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_0055:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0059:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0035;
		}
	}

IL_0060:
	{
		return;
	}
}
// System.Void UISavedOption::SaveSelection(System.String)
extern "C" void UISavedOption_SaveSelection_m369 (UISavedOption_t131 * __this, String_t* ___selection, const MethodInfo* method)
{
	{
		String_t* L_0 = UISavedOption_get_key_m364(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___selection;
		PlayerPrefs_SetString_m1493(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UISavedOption::SaveState(System.Boolean)
extern "C" void UISavedOption_SaveState_m370 (UISavedOption_t131 * __this, bool ___state, const MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	{
		String_t* L_0 = UISavedOption_get_key_m364(__this, /*hidden argument*/NULL);
		bool L_1 = ___state;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		PlayerPrefs_SetInt_m1494(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// UIScrollBar/Direction
#include "AssemblyU2DCSharp_UIScrollBar_Direction.h"
#ifndef _MSC_VER
#else
#endif
// UIScrollBar/Direction
#include "AssemblyU2DCSharp_UIScrollBar_DirectionMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UIScrollBar/OnScrollBarChange::.ctor(System.Object,System.IntPtr)
extern "C" void OnScrollBarChange__ctor_m371 (OnScrollBarChange_t133 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UIScrollBar/OnScrollBarChange::Invoke(UIScrollBar)
extern "C" void OnScrollBarChange_Invoke_m372 (OnScrollBarChange_t133 * __this, UIScrollBar_t119 * ___sb, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnScrollBarChange_Invoke_m372((OnScrollBarChange_t133 *)__this->___prev_9,___sb, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, UIScrollBar_t119 * ___sb, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sb,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, UIScrollBar_t119 * ___sb, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sb,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sb,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_OnScrollBarChange_t133(Il2CppObject* delegate, UIScrollBar_t119 * ___sb)
{
	// Marshaling of parameter '___sb' to native representation
	UIScrollBar_t119 * ____sb_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UIScrollBar'."));
}
// System.IAsyncResult UIScrollBar/OnScrollBarChange::BeginInvoke(UIScrollBar,System.AsyncCallback,System.Object)
extern "C" Object_t * OnScrollBarChange_BeginInvoke_m373 (OnScrollBarChange_t133 * __this, UIScrollBar_t119 * ___sb, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___sb;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UIScrollBar/OnScrollBarChange::EndInvoke(System.IAsyncResult)
extern "C" void OnScrollBarChange_EndInvoke_m374 (OnScrollBarChange_t133 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void UIScrollBar/OnDragFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnDragFinished__ctor_m375 (OnDragFinished_t134 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UIScrollBar/OnDragFinished::Invoke()
extern "C" void OnDragFinished_Invoke_m376 (OnDragFinished_t134 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnDragFinished_Invoke_m376((OnDragFinished_t134 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_OnDragFinished_t134(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UIScrollBar/OnDragFinished::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnDragFinished_BeginInvoke_m377 (OnDragFinished_t134 * __this, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UIScrollBar/OnDragFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnDragFinished_EndInvoke_m378 (OnDragFinished_t134 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// UIEventListener/VectorDelegate
#include "AssemblyU2DCSharp_UIEventListener_VectorDelegate.h"
// UIEventListener/VectorDelegate
#include "AssemblyU2DCSharp_UIEventListener_VectorDelegateMethodDeclarations.h"


// System.Void UIScrollBar::.ctor()
extern "C" void UIScrollBar__ctor_m379 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	{
		__this->___mSize_7 = (1.0f);
		Vector2_t55  L_0 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mScreenPos_11 = L_0;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UIScrollBar::get_cachedTransform()
extern "C" Transform_t8 * UIScrollBar_get_cachedTransform_m380 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	{
		Transform_t8 * L_0 = (__this->___mTrans_8);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Transform_t8 * L_2 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_8 = L_2;
	}

IL_001d:
	{
		Transform_t8 * L_3 = (__this->___mTrans_8);
		return L_3;
	}
}
// UnityEngine.Camera UIScrollBar::get_cachedCamera()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" Camera_t7 * UIScrollBar_get_cachedCamera_m381 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t7 * L_0 = (__this->___mCam_10);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t17 * L_2 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameObject_get_layer_m1254(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		Camera_t7 * L_4 = NGUITools_FindCameraForLayer_m562(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->___mCam_10 = L_4;
	}

IL_0027:
	{
		Camera_t7 * L_5 = (__this->___mCam_10);
		return L_5;
	}
}
// UISprite UIScrollBar::get_background()
extern "C" UISprite_t9 * UIScrollBar_get_background_m382 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	{
		UISprite_t9 * L_0 = (__this->___mBG_2);
		return L_0;
	}
}
// System.Void UIScrollBar::set_background(UISprite)
extern "C" void UIScrollBar_set_background_m383 (UIScrollBar_t119 * __this, UISprite_t9 * ___value, const MethodInfo* method)
{
	{
		UISprite_t9 * L_0 = (__this->___mBG_2);
		UISprite_t9 * L_1 = ___value;
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		UISprite_t9 * L_3 = ___value;
		__this->___mBG_2 = L_3;
		__this->___mIsDirty_9 = 1;
	}

IL_001f:
	{
		return;
	}
}
// UISprite UIScrollBar::get_foreground()
extern "C" UISprite_t9 * UIScrollBar_get_foreground_m384 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	{
		UISprite_t9 * L_0 = (__this->___mFG_3);
		return L_0;
	}
}
// System.Void UIScrollBar::set_foreground(UISprite)
extern "C" void UIScrollBar_set_foreground_m385 (UIScrollBar_t119 * __this, UISprite_t9 * ___value, const MethodInfo* method)
{
	{
		UISprite_t9 * L_0 = (__this->___mFG_3);
		UISprite_t9 * L_1 = ___value;
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		UISprite_t9 * L_3 = ___value;
		__this->___mFG_3 = L_3;
		__this->___mIsDirty_9 = 1;
	}

IL_001f:
	{
		return;
	}
}
// UIScrollBar/Direction UIScrollBar::get_direction()
extern "C" int32_t UIScrollBar_get_direction_m386 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mDir_4);
		return L_0;
	}
}
// System.Void UIScrollBar::set_direction(UIScrollBar/Direction)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var;
extern "C" void UIScrollBar_set_direction_m387 (UIScrollBar_t119 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t8 * V_0 = {0};
	Vector3_t48  V_1 = {0};
	float V_2 = 0.0f;
	{
		int32_t L_0 = (__this->___mDir_4);
		int32_t L_1 = ___value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_2 = ___value;
		__this->___mDir_4 = L_2;
		__this->___mIsDirty_9 = 1;
		UISprite_t9 * L_3 = (__this->___mBG_2);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00f4;
		}
	}
	{
		UISprite_t9 * L_5 = (__this->___mBG_2);
		NullCheck(L_5);
		Transform_t8 * L_6 = UIWidget_get_cachedTransform_m683(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Transform_t8 * L_7 = V_0;
		NullCheck(L_7);
		Vector3_t48  L_8 = Transform_get_localScale_m1264(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = (__this->___mDir_4);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_005d;
		}
	}
	{
		float L_10 = ((&V_1)->___x_1);
		float L_11 = ((&V_1)->___y_2);
		if ((((float)L_10) > ((float)L_11)))
		{
			goto IL_007b;
		}
	}

IL_005d:
	{
		int32_t L_12 = (__this->___mDir_4);
		if (L_12)
		{
			goto IL_00f4;
		}
	}
	{
		float L_13 = ((&V_1)->___x_1);
		float L_14 = ((&V_1)->___y_2);
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_00f4;
		}
	}

IL_007b:
	{
		float L_15 = ((&V_1)->___x_1);
		V_2 = L_15;
		float L_16 = ((&V_1)->___y_2);
		(&V_1)->___x_1 = L_16;
		float L_17 = V_2;
		(&V_1)->___y_2 = L_17;
		Transform_t8 * L_18 = V_0;
		Vector3_t48  L_19 = V_1;
		NullCheck(L_18);
		Transform_set_localScale_m1281(L_18, L_19, /*hidden argument*/NULL);
		UIScrollBar_ForceUpdate_m404(__this, /*hidden argument*/NULL);
		UISprite_t9 * L_20 = (__this->___mBG_2);
		NullCheck(L_20);
		Collider_t304 * L_21 = Component_GetComponent_TisCollider_t304_m1316(L_20, /*hidden argument*/Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var);
		bool L_22 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_21, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00cd;
		}
	}
	{
		UISprite_t9 * L_23 = (__this->___mBG_2);
		NullCheck(L_23);
		GameObject_t17 * L_24 = Component_get_gameObject_m1246(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_AddWidgetCollider_m563(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		UISprite_t9 * L_25 = (__this->___mFG_3);
		NullCheck(L_25);
		Collider_t304 * L_26 = Component_GetComponent_TisCollider_t304_m1316(L_25, /*hidden argument*/Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var);
		bool L_27 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_26, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00f4;
		}
	}
	{
		UISprite_t9 * L_28 = (__this->___mFG_3);
		NullCheck(L_28);
		GameObject_t17 * L_29 = Component_get_gameObject_m1246(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_AddWidgetCollider_m563(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		return;
	}
}
// System.Boolean UIScrollBar::get_inverted()
extern "C" bool UIScrollBar_get_inverted_m388 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___mInverted_5);
		return L_0;
	}
}
// System.Void UIScrollBar::set_inverted(System.Boolean)
extern "C" void UIScrollBar_set_inverted_m389 (UIScrollBar_t119 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___mInverted_5);
		bool L_1 = ___value;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		bool L_2 = ___value;
		__this->___mInverted_5 = L_2;
		__this->___mIsDirty_9 = 1;
	}

IL_001a:
	{
		return;
	}
}
// System.Single UIScrollBar::get_scrollValue()
extern "C" float UIScrollBar_get_scrollValue_m390 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___mScroll_6);
		return L_0;
	}
}
// System.Void UIScrollBar::set_scrollValue(System.Single)
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void UIScrollBar_set_scrollValue_m391 (UIScrollBar_t119 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1258(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (__this->___mScroll_6);
		float L_3 = V_0;
		if ((((float)L_2) == ((float)L_3)))
		{
			goto IL_0038;
		}
	}
	{
		float L_4 = V_0;
		__this->___mScroll_6 = L_4;
		__this->___mIsDirty_9 = 1;
		OnScrollBarChange_t133 * L_5 = (__this->___onChange_12);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		OnScrollBarChange_t133 * L_6 = (__this->___onChange_12);
		NullCheck(L_6);
		VirtActionInvoker1< UIScrollBar_t119 * >::Invoke(11 /* System.Void UIScrollBar/OnScrollBarChange::Invoke(UIScrollBar) */, L_6, __this);
	}

IL_0038:
	{
		return;
	}
}
// System.Single UIScrollBar::get_barSize()
extern "C" float UIScrollBar_get_barSize_m392 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___mSize_7);
		return L_0;
	}
}
// System.Void UIScrollBar::set_barSize(System.Single)
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void UIScrollBar_set_barSize_m393 (UIScrollBar_t119 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m1258(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (__this->___mSize_7);
		float L_3 = V_0;
		if ((((float)L_2) == ((float)L_3)))
		{
			goto IL_0038;
		}
	}
	{
		float L_4 = V_0;
		__this->___mSize_7 = L_4;
		__this->___mIsDirty_9 = 1;
		OnScrollBarChange_t133 * L_5 = (__this->___onChange_12);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		OnScrollBarChange_t133 * L_6 = (__this->___onChange_12);
		NullCheck(L_6);
		VirtActionInvoker1< UIScrollBar_t119 * >::Invoke(11 /* System.Void UIScrollBar/OnScrollBarChange::Invoke(UIScrollBar) */, L_6, __this);
	}

IL_0038:
	{
		return;
	}
}
// System.Single UIScrollBar::get_alpha()
extern "C" float UIScrollBar_get_alpha_m394 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	{
		UISprite_t9 * L_0 = (__this->___mFG_3);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		UISprite_t9 * L_2 = (__this->___mFG_3);
		NullCheck(L_2);
		float L_3 = UIWidget_get_alpha_m674(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		UISprite_t9 * L_4 = (__this->___mBG_2);
		bool L_5 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_4, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		UISprite_t9 * L_6 = (__this->___mBG_2);
		NullCheck(L_6);
		float L_7 = UIWidget_get_alpha_m674(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_003a:
	{
		return (0.0f);
	}
}
// System.Void UIScrollBar::set_alpha(System.Single)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UIScrollBar_set_alpha_m395 (UIScrollBar_t119 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		UISprite_t9 * L_0 = (__this->___mFG_3);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		UISprite_t9 * L_2 = (__this->___mFG_3);
		float L_3 = ___value;
		NullCheck(L_2);
		UIWidget_set_alpha_m675(L_2, L_3, /*hidden argument*/NULL);
		UISprite_t9 * L_4 = (__this->___mFG_3);
		NullCheck(L_4);
		GameObject_t17 * L_5 = Component_get_gameObject_m1246(L_4, /*hidden argument*/NULL);
		UISprite_t9 * L_6 = (__this->___mFG_3);
		NullCheck(L_6);
		float L_7 = UIWidget_get_alpha_m674(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_SetActiveSelf_m579(NULL /*static, unused*/, L_5, ((((float)L_7) > ((float)(0.001f)))? 1 : 0), /*hidden argument*/NULL);
	}

IL_003f:
	{
		UISprite_t9 * L_8 = (__this->___mBG_2);
		bool L_9 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_8, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007e;
		}
	}
	{
		UISprite_t9 * L_10 = (__this->___mBG_2);
		float L_11 = ___value;
		NullCheck(L_10);
		UIWidget_set_alpha_m675(L_10, L_11, /*hidden argument*/NULL);
		UISprite_t9 * L_12 = (__this->___mBG_2);
		NullCheck(L_12);
		GameObject_t17 * L_13 = Component_get_gameObject_m1246(L_12, /*hidden argument*/NULL);
		UISprite_t9 * L_14 = (__this->___mBG_2);
		NullCheck(L_14);
		float L_15 = UIWidget_get_alpha_m674(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_SetActiveSelf_m579(NULL /*static, unused*/, L_13, ((((float)L_15) > ((float)(0.001f)))? 1 : 0), /*hidden argument*/NULL);
	}

IL_007e:
	{
		return;
	}
}
// System.Void UIScrollBar::CenterOnPos(UnityEngine.Vector2)
extern "C" void UIScrollBar_CenterOnPos_m396 (UIScrollBar_t119 * __this, Vector2_t55  ___localPos, const MethodInfo* method)
{
	Bounds_t113  V_0 = {0};
	Bounds_t113  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t48  V_10 = {0};
	Vector3_t48  V_11 = {0};
	Vector3_t48  V_12 = {0};
	Vector3_t48  V_13 = {0};
	Vector3_t48  V_14 = {0};
	Vector3_t48  V_15 = {0};
	float G_B7_0 = 0.0f;
	UIScrollBar_t119 * G_B9_0 = {0};
	UIScrollBar_t119 * G_B8_0 = {0};
	float G_B10_0 = 0.0f;
	UIScrollBar_t119 * G_B10_1 = {0};
	float G_B14_0 = 0.0f;
	UIScrollBar_t119 * G_B16_0 = {0};
	UIScrollBar_t119 * G_B15_0 = {0};
	float G_B17_0 = 0.0f;
	UIScrollBar_t119 * G_B17_1 = {0};
	{
		UISprite_t9 * L_0 = (__this->___mBG_2);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		UISprite_t9 * L_2 = (__this->___mFG_3);
		bool L_3 = Object_op_Equality_m1245(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		return;
	}

IL_0023:
	{
		Transform_t8 * L_4 = UIScrollBar_get_cachedTransform_m380(__this, /*hidden argument*/NULL);
		UISprite_t9 * L_5 = (__this->___mBG_2);
		Bounds_t113  L_6 = NGUIMath_CalculateRelativeInnerBounds_m534(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Transform_t8 * L_7 = UIScrollBar_get_cachedTransform_m380(__this, /*hidden argument*/NULL);
		UISprite_t9 * L_8 = (__this->___mFG_3);
		Bounds_t113  L_9 = NGUIMath_CalculateRelativeInnerBounds_m534(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		int32_t L_10 = (__this->___mDir_4);
		if (L_10)
		{
			goto IL_00d8;
		}
	}
	{
		Vector3_t48  L_11 = Bounds_get_size_m1280((&V_0), /*hidden argument*/NULL);
		V_10 = L_11;
		float L_12 = ((&V_10)->___x_1);
		Vector3_t48  L_13 = Bounds_get_size_m1280((&V_1), /*hidden argument*/NULL);
		V_11 = L_13;
		float L_14 = ((&V_11)->___x_1);
		V_2 = ((float)((float)L_12-(float)L_14));
		float L_15 = V_2;
		V_3 = ((float)((float)L_15*(float)(0.5f)));
		Vector3_t48  L_16 = Bounds_get_center_m1440((&V_0), /*hidden argument*/NULL);
		V_12 = L_16;
		float L_17 = ((&V_12)->___x_1);
		float L_18 = V_3;
		V_4 = ((float)((float)L_17-(float)L_18));
		float L_19 = V_2;
		if ((!(((float)L_19) > ((float)(0.0f)))))
		{
			goto IL_00ac;
		}
	}
	{
		float L_20 = ((&___localPos)->___x_1);
		float L_21 = V_4;
		float L_22 = V_2;
		G_B7_0 = ((float)((float)((float)((float)L_20-(float)L_21))/(float)L_22));
		goto IL_00b1;
	}

IL_00ac:
	{
		G_B7_0 = (0.0f);
	}

IL_00b1:
	{
		V_5 = G_B7_0;
		bool L_23 = (__this->___mInverted_5);
		G_B8_0 = __this;
		if (!L_23)
		{
			G_B9_0 = __this;
			goto IL_00cc;
		}
	}
	{
		float L_24 = V_5;
		G_B10_0 = ((float)((float)(1.0f)-(float)L_24));
		G_B10_1 = G_B8_0;
		goto IL_00ce;
	}

IL_00cc:
	{
		float L_25 = V_5;
		G_B10_0 = L_25;
		G_B10_1 = G_B9_0;
	}

IL_00ce:
	{
		NullCheck(G_B10_1);
		UIScrollBar_set_scrollValue_m391(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		goto IL_0165;
	}

IL_00d8:
	{
		Vector3_t48  L_26 = Bounds_get_size_m1280((&V_0), /*hidden argument*/NULL);
		V_13 = L_26;
		float L_27 = ((&V_13)->___y_2);
		Vector3_t48  L_28 = Bounds_get_size_m1280((&V_1), /*hidden argument*/NULL);
		V_14 = L_28;
		float L_29 = ((&V_14)->___y_2);
		V_6 = ((float)((float)L_27-(float)L_29));
		float L_30 = V_6;
		V_7 = ((float)((float)L_30*(float)(0.5f)));
		Vector3_t48  L_31 = Bounds_get_center_m1440((&V_0), /*hidden argument*/NULL);
		V_15 = L_31;
		float L_32 = ((&V_15)->___y_2);
		float L_33 = V_7;
		V_8 = ((float)((float)L_32-(float)L_33));
		float L_34 = V_6;
		if ((!(((float)L_34) > ((float)(0.0f)))))
		{
			goto IL_013e;
		}
	}
	{
		float L_35 = ((&___localPos)->___y_2);
		float L_36 = V_8;
		float L_37 = V_6;
		G_B14_0 = ((float)((float)(1.0f)-(float)((float)((float)((float)((float)L_35-(float)L_36))/(float)L_37))));
		goto IL_0143;
	}

IL_013e:
	{
		G_B14_0 = (0.0f);
	}

IL_0143:
	{
		V_9 = G_B14_0;
		bool L_38 = (__this->___mInverted_5);
		G_B15_0 = __this;
		if (!L_38)
		{
			G_B16_0 = __this;
			goto IL_015e;
		}
	}
	{
		float L_39 = V_9;
		G_B17_0 = ((float)((float)(1.0f)-(float)L_39));
		G_B17_1 = G_B15_0;
		goto IL_0160;
	}

IL_015e:
	{
		float L_40 = V_9;
		G_B17_0 = L_40;
		G_B17_1 = G_B16_0;
	}

IL_0160:
	{
		NullCheck(G_B17_1);
		UIScrollBar_set_scrollValue_m391(G_B17_1, G_B17_0, /*hidden argument*/NULL);
	}

IL_0165:
	{
		return;
	}
}
// System.Void UIScrollBar::Reposition(UnityEngine.Vector2)
extern "C" void UIScrollBar_Reposition_m397 (UIScrollBar_t119 * __this, Vector2_t55  ___screenPos, const MethodInfo* method)
{
	Transform_t8 * V_0 = {0};
	Plane_t112  V_1 = {0};
	float V_2 = 0.0f;
	Ray_t315  V_3 = {0};
	{
		Transform_t8 * L_0 = UIScrollBar_get_cachedTransform_m380(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t8 * L_1 = V_0;
		NullCheck(L_1);
		Quaternion_t50  L_2 = Transform_get_rotation_m1283(L_1, /*hidden argument*/NULL);
		Vector3_t48  L_3 = Vector3_get_back_m1431(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t48  L_4 = Quaternion_op_Multiply_m1330(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Transform_t8 * L_5 = V_0;
		NullCheck(L_5);
		Vector3_t48  L_6 = Transform_get_position_m1282(L_5, /*hidden argument*/NULL);
		Plane__ctor_m1432((&V_1), L_4, L_6, /*hidden argument*/NULL);
		Camera_t7 * L_7 = UIScrollBar_get_cachedCamera_m381(__this, /*hidden argument*/NULL);
		Vector2_t55  L_8 = ___screenPos;
		Vector3_t48  L_9 = Vector2_op_Implicit_m1320(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Ray_t315  L_10 = Camera_ScreenPointToRay_m1433(L_7, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		Ray_t315  L_11 = V_3;
		bool L_12 = Plane_Raycast_m1434((&V_1), L_11, (&V_2), /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0046:
	{
		Transform_t8 * L_13 = V_0;
		float L_14 = V_2;
		Vector3_t48  L_15 = Ray_GetPoint_m1435((&V_3), L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t48  L_16 = Transform_InverseTransformPoint_m1421(L_13, L_15, /*hidden argument*/NULL);
		Vector2_t55  L_17 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		UIScrollBar_CenterOnPos_m396(__this, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIScrollBar::OnPressBackground(UnityEngine.GameObject,System.Boolean)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIScrollBar_OnPressBackground_m398 (UIScrollBar_t119 * __this, GameObject_t17 * ___go, bool ___isPressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Camera_t7 * L_0 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentCamera_30;
		__this->___mCam_10 = L_0;
		Vector2_t55  L_1 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___lastTouchPosition_27;
		UIScrollBar_Reposition_m397(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = ___isPressed;
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		OnDragFinished_t134 * L_3 = (__this->___onDragFinished_13);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		OnDragFinished_t134 * L_4 = (__this->___onDragFinished_13);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(11 /* System.Void UIScrollBar/OnDragFinished::Invoke() */, L_4);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UIScrollBar::OnDragBackground(UnityEngine.GameObject,UnityEngine.Vector2)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIScrollBar_OnDragBackground_m399 (UIScrollBar_t119 * __this, GameObject_t17 * ___go, Vector2_t55  ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Camera_t7 * L_0 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentCamera_30;
		__this->___mCam_10 = L_0;
		Vector2_t55  L_1 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___lastTouchPosition_27;
		UIScrollBar_Reposition_m397(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIScrollBar::OnPressForeground(UnityEngine.GameObject,System.Boolean)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIScrollBar_OnPressForeground_m400 (UIScrollBar_t119 * __this, GameObject_t17 * ___go, bool ___isPressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	Bounds_t113  V_0 = {0};
	{
		bool L_0 = ___isPressed;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Camera_t7 * L_1 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentCamera_30;
		__this->___mCam_10 = L_1;
		UISprite_t9 * L_2 = (__this->___mFG_3);
		NullCheck(L_2);
		Transform_t8 * L_3 = UIWidget_get_cachedTransform_m683(L_2, /*hidden argument*/NULL);
		Bounds_t113  L_4 = NGUIMath_CalculateAbsoluteWidgetBounds_m532(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Camera_t7 * L_5 = (__this->___mCam_10);
		Vector3_t48  L_6 = Bounds_get_center_m1440((&V_0), /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t48  L_7 = Camera_WorldToScreenPoint_m1495(L_5, L_6, /*hidden argument*/NULL);
		Vector2_t55  L_8 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		__this->___mScreenPos_11 = L_8;
		goto IL_005a;
	}

IL_0044:
	{
		OnDragFinished_t134 * L_9 = (__this->___onDragFinished_13);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		OnDragFinished_t134 * L_10 = (__this->___onDragFinished_13);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(11 /* System.Void UIScrollBar/OnDragFinished::Invoke() */, L_10);
	}

IL_005a:
	{
		return;
	}
}
// System.Void UIScrollBar::OnDragForeground(UnityEngine.GameObject,UnityEngine.Vector2)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UIScrollBar_OnDragForeground_m401 (UIScrollBar_t119 * __this, GameObject_t17 * ___go, Vector2_t55  ___delta, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Camera_t7 * L_0 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentCamera_30;
		__this->___mCam_10 = L_0;
		Vector2_t55  L_1 = (__this->___mScreenPos_11);
		MouseOrTouch_t216 * L_2 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_2);
		Vector2_t55  L_3 = (L_2->___totalDelta_2);
		Vector2_t55  L_4 = Vector2_op_Addition_m1460(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		UIScrollBar_Reposition_m397(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIScrollBar::Start()
extern TypeInfo* BoolDelegate_t177_il2cpp_TypeInfo_var;
extern TypeInfo* VectorDelegate_t179_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var;
extern const MethodInfo* UIScrollBar_OnPressBackground_m398_MethodInfo_var;
extern const MethodInfo* UIScrollBar_OnDragBackground_m399_MethodInfo_var;
extern const MethodInfo* UIScrollBar_OnPressForeground_m400_MethodInfo_var;
extern const MethodInfo* UIScrollBar_OnDragForeground_m401_MethodInfo_var;
extern "C" void UIScrollBar_Start_m402 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoolDelegate_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		VectorDelegate_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		UIScrollBar_OnPressBackground_m398_MethodInfo_var = il2cpp_codegen_method_info_from_index(85);
		UIScrollBar_OnDragBackground_m399_MethodInfo_var = il2cpp_codegen_method_info_from_index(86);
		UIScrollBar_OnPressForeground_m400_MethodInfo_var = il2cpp_codegen_method_info_from_index(87);
		UIScrollBar_OnDragForeground_m401_MethodInfo_var = il2cpp_codegen_method_info_from_index(88);
		s_Il2CppMethodIntialized = true;
	}
	UIEventListener_t183 * V_0 = {0};
	UIEventListener_t183 * V_1 = {0};
	{
		UISprite_t9 * L_0 = UIScrollBar_get_background_m382(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		UISprite_t9 * L_2 = UIScrollBar_get_background_m382(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Collider_t304 * L_3 = Component_GetComponent_TisCollider_t304_m1316(L_2, /*hidden argument*/Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var);
		bool L_4 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_3, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_007c;
		}
	}
	{
		UISprite_t9 * L_5 = UIScrollBar_get_background_m382(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_t17 * L_6 = Component_get_gameObject_m1246(L_5, /*hidden argument*/NULL);
		UIEventListener_t183 * L_7 = UIEventListener_Get_m661(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		UIEventListener_t183 * L_8 = V_0;
		UIEventListener_t183 * L_9 = L_8;
		NullCheck(L_9);
		BoolDelegate_t177 * L_10 = (L_9->___onPress_7);
		IntPtr_t L_11 = { (void*)UIScrollBar_OnPressBackground_m398_MethodInfo_var };
		BoolDelegate_t177 * L_12 = (BoolDelegate_t177 *)il2cpp_codegen_object_new (BoolDelegate_t177_il2cpp_TypeInfo_var);
		BoolDelegate__ctor_m625(L_12, __this, L_11, /*hidden argument*/NULL);
		Delegate_t314 * L_13 = Delegate_Combine_m1425(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->___onPress_7 = ((BoolDelegate_t177 *)Castclass(L_13, BoolDelegate_t177_il2cpp_TypeInfo_var));
		UIEventListener_t183 * L_14 = V_0;
		UIEventListener_t183 * L_15 = L_14;
		NullCheck(L_15);
		VectorDelegate_t179 * L_16 = (L_15->___onDrag_10);
		IntPtr_t L_17 = { (void*)UIScrollBar_OnDragBackground_m399_MethodInfo_var };
		VectorDelegate_t179 * L_18 = (VectorDelegate_t179 *)il2cpp_codegen_object_new (VectorDelegate_t179_il2cpp_TypeInfo_var);
		VectorDelegate__ctor_m633(L_18, __this, L_17, /*hidden argument*/NULL);
		Delegate_t314 * L_19 = Delegate_Combine_m1425(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->___onDrag_10 = ((VectorDelegate_t179 *)Castclass(L_19, VectorDelegate_t179_il2cpp_TypeInfo_var));
	}

IL_007c:
	{
		UISprite_t9 * L_20 = UIScrollBar_get_foreground_m384(__this, /*hidden argument*/NULL);
		bool L_21 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_20, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00f8;
		}
	}
	{
		UISprite_t9 * L_22 = UIScrollBar_get_foreground_m384(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Collider_t304 * L_23 = Component_GetComponent_TisCollider_t304_m1316(L_22, /*hidden argument*/Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var);
		bool L_24 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_23, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00f8;
		}
	}
	{
		UISprite_t9 * L_25 = UIScrollBar_get_foreground_m384(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_t17 * L_26 = Component_get_gameObject_m1246(L_25, /*hidden argument*/NULL);
		UIEventListener_t183 * L_27 = UIEventListener_Get_m661(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		UIEventListener_t183 * L_28 = V_1;
		UIEventListener_t183 * L_29 = L_28;
		NullCheck(L_29);
		BoolDelegate_t177 * L_30 = (L_29->___onPress_7);
		IntPtr_t L_31 = { (void*)UIScrollBar_OnPressForeground_m400_MethodInfo_var };
		BoolDelegate_t177 * L_32 = (BoolDelegate_t177 *)il2cpp_codegen_object_new (BoolDelegate_t177_il2cpp_TypeInfo_var);
		BoolDelegate__ctor_m625(L_32, __this, L_31, /*hidden argument*/NULL);
		Delegate_t314 * L_33 = Delegate_Combine_m1425(NULL /*static, unused*/, L_30, L_32, /*hidden argument*/NULL);
		NullCheck(L_29);
		L_29->___onPress_7 = ((BoolDelegate_t177 *)Castclass(L_33, BoolDelegate_t177_il2cpp_TypeInfo_var));
		UIEventListener_t183 * L_34 = V_1;
		UIEventListener_t183 * L_35 = L_34;
		NullCheck(L_35);
		VectorDelegate_t179 * L_36 = (L_35->___onDrag_10);
		IntPtr_t L_37 = { (void*)UIScrollBar_OnDragForeground_m401_MethodInfo_var };
		VectorDelegate_t179 * L_38 = (VectorDelegate_t179 *)il2cpp_codegen_object_new (VectorDelegate_t179_il2cpp_TypeInfo_var);
		VectorDelegate__ctor_m633(L_38, __this, L_37, /*hidden argument*/NULL);
		Delegate_t314 * L_39 = Delegate_Combine_m1425(NULL /*static, unused*/, L_36, L_38, /*hidden argument*/NULL);
		NullCheck(L_35);
		L_35->___onDrag_10 = ((VectorDelegate_t179 *)Castclass(L_39, VectorDelegate_t179_il2cpp_TypeInfo_var));
	}

IL_00f8:
	{
		UIScrollBar_ForceUpdate_m404(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIScrollBar::Update()
extern "C" void UIScrollBar_Update_m403 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___mIsDirty_9);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UIScrollBar_ForceUpdate_m404(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UIScrollBar::ForceUpdate()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void UIScrollBar_ForceUpdate_m404 (UIScrollBar_t119 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t175  V_0 = {0};
	Vector4_t175  V_1 = {0};
	Vector2_t55  V_2 = {0};
	float V_3 = 0.0f;
	Vector2_t55  V_4 = {0};
	Vector2_t55  V_5 = {0};
	Vector3_t48  V_6 = {0};
	Vector3_t48  V_7 = {0};
	float G_B5_0 = 0.0f;
	{
		__this->___mIsDirty_9 = 0;
		UISprite_t9 * L_0 = (__this->___mBG_2);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_02e8;
		}
	}
	{
		UISprite_t9 * L_2 = (__this->___mFG_3);
		bool L_3 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_02e8;
		}
	}
	{
		float L_4 = (__this->___mSize_7);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_5 = Mathf_Clamp01_m1258(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->___mSize_7 = L_5;
		float L_6 = (__this->___mScroll_6);
		float L_7 = Mathf_Clamp01_m1258(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->___mScroll_6 = L_7;
		UISprite_t9 * L_8 = (__this->___mBG_2);
		NullCheck(L_8);
		Vector4_t175  L_9 = (Vector4_t175 )VirtFuncInvoker0< Vector4_t175  >::Invoke(16 /* UnityEngine.Vector4 UISprite::get_border() */, L_8);
		V_0 = L_9;
		UISprite_t9 * L_10 = (__this->___mFG_3);
		NullCheck(L_10);
		Vector4_t175  L_11 = (Vector4_t175 )VirtFuncInvoker0< Vector4_t175  >::Invoke(16 /* UnityEngine.Vector4 UISprite::get_border() */, L_10);
		V_1 = L_11;
		UISprite_t9 * L_12 = (__this->___mBG_2);
		NullCheck(L_12);
		Transform_t8 * L_13 = UIWidget_get_cachedTransform_m683(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t48  L_14 = Transform_get_localScale_m1264(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = ((&V_6)->___x_1);
		float L_16 = ((&V_0)->___x_1);
		float L_17 = ((&V_0)->___z_3);
		float L_18 = Mathf_Max_m1487(NULL /*static, unused*/, (0.0f), ((float)((float)((float)((float)L_15-(float)L_16))-(float)L_17)), /*hidden argument*/NULL);
		UISprite_t9 * L_19 = (__this->___mBG_2);
		NullCheck(L_19);
		Transform_t8 * L_20 = UIWidget_get_cachedTransform_m683(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t48  L_21 = Transform_get_localScale_m1264(L_20, /*hidden argument*/NULL);
		V_7 = L_21;
		float L_22 = ((&V_7)->___y_2);
		float L_23 = ((&V_0)->___y_2);
		float L_24 = ((&V_0)->___w_4);
		float L_25 = Mathf_Max_m1487(NULL /*static, unused*/, (0.0f), ((float)((float)((float)((float)L_22-(float)L_23))-(float)L_24)), /*hidden argument*/NULL);
		Vector2__ctor_m1337((&V_2), L_18, L_25, /*hidden argument*/NULL);
		bool L_26 = (__this->___mInverted_5);
		if (!L_26)
		{
			goto IL_00ec;
		}
	}
	{
		float L_27 = (__this->___mScroll_6);
		G_B5_0 = ((float)((float)(1.0f)-(float)L_27));
		goto IL_00f2;
	}

IL_00ec:
	{
		float L_28 = (__this->___mScroll_6);
		G_B5_0 = L_28;
	}

IL_00f2:
	{
		V_3 = G_B5_0;
		int32_t L_29 = (__this->___mDir_4);
		if (L_29)
		{
			goto IL_01f5;
		}
	}
	{
		float L_30 = ((&V_2)->___x_1);
		float L_31 = (__this->___mSize_7);
		float L_32 = ((&V_2)->___y_2);
		Vector2__ctor_m1337((&V_4), ((float)((float)L_30*(float)L_31)), L_32, /*hidden argument*/NULL);
		UISprite_t9 * L_33 = (__this->___mFG_3);
		NullCheck(L_33);
		UIWidget_set_pivot_m678(L_33, 3, /*hidden argument*/NULL);
		UISprite_t9 * L_34 = (__this->___mBG_2);
		NullCheck(L_34);
		UIWidget_set_pivot_m678(L_34, 3, /*hidden argument*/NULL);
		UISprite_t9 * L_35 = (__this->___mBG_2);
		NullCheck(L_35);
		Transform_t8 * L_36 = UIWidget_get_cachedTransform_m683(L_35, /*hidden argument*/NULL);
		Vector3_t48  L_37 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localPosition_m1265(L_36, L_37, /*hidden argument*/NULL);
		UISprite_t9 * L_38 = (__this->___mFG_3);
		NullCheck(L_38);
		Transform_t8 * L_39 = UIWidget_get_cachedTransform_m683(L_38, /*hidden argument*/NULL);
		float L_40 = ((&V_0)->___x_1);
		float L_41 = ((&V_1)->___x_1);
		float L_42 = ((&V_2)->___x_1);
		float L_43 = ((&V_4)->___x_1);
		float L_44 = V_3;
		Vector3_t48  L_45 = {0};
		Vector3__ctor_m1278(&L_45, ((float)((float)((float)((float)L_40-(float)L_41))+(float)((float)((float)((float)((float)L_42-(float)L_43))*(float)L_44)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_localPosition_m1265(L_39, L_45, /*hidden argument*/NULL);
		UISprite_t9 * L_46 = (__this->___mFG_3);
		NullCheck(L_46);
		Transform_t8 * L_47 = UIWidget_get_cachedTransform_m683(L_46, /*hidden argument*/NULL);
		float L_48 = ((&V_4)->___x_1);
		float L_49 = ((&V_1)->___x_1);
		float L_50 = ((&V_1)->___z_3);
		float L_51 = ((&V_4)->___y_2);
		float L_52 = ((&V_1)->___y_2);
		float L_53 = ((&V_1)->___w_4);
		Vector3_t48  L_54 = {0};
		Vector3__ctor_m1278(&L_54, ((float)((float)((float)((float)L_48+(float)L_49))+(float)L_50)), ((float)((float)((float)((float)L_51+(float)L_52))+(float)L_53)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_localScale_m1281(L_47, L_54, /*hidden argument*/NULL);
		float L_55 = V_3;
		if ((!(((float)L_55) < ((float)(0.999f)))))
		{
			goto IL_01f0;
		}
	}
	{
		float L_56 = V_3;
		if ((!(((float)L_56) > ((float)(0.001f)))))
		{
			goto IL_01f0;
		}
	}
	{
		UISprite_t9 * L_57 = (__this->___mFG_3);
		NullCheck(L_57);
		VirtActionInvoker0::Invoke(13 /* System.Void UISprite::MakePixelPerfect() */, L_57);
	}

IL_01f0:
	{
		goto IL_02e8;
	}

IL_01f5:
	{
		float L_58 = ((&V_2)->___x_1);
		float L_59 = ((&V_2)->___y_2);
		float L_60 = (__this->___mSize_7);
		Vector2__ctor_m1337((&V_5), L_58, ((float)((float)L_59*(float)L_60)), /*hidden argument*/NULL);
		UISprite_t9 * L_61 = (__this->___mFG_3);
		NullCheck(L_61);
		UIWidget_set_pivot_m678(L_61, 1, /*hidden argument*/NULL);
		UISprite_t9 * L_62 = (__this->___mBG_2);
		NullCheck(L_62);
		UIWidget_set_pivot_m678(L_62, 1, /*hidden argument*/NULL);
		UISprite_t9 * L_63 = (__this->___mBG_2);
		NullCheck(L_63);
		Transform_t8 * L_64 = UIWidget_get_cachedTransform_m683(L_63, /*hidden argument*/NULL);
		Vector3_t48  L_65 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_set_localPosition_m1265(L_64, L_65, /*hidden argument*/NULL);
		UISprite_t9 * L_66 = (__this->___mFG_3);
		NullCheck(L_66);
		Transform_t8 * L_67 = UIWidget_get_cachedTransform_m683(L_66, /*hidden argument*/NULL);
		float L_68 = ((&V_0)->___y_2);
		float L_69 = ((&V_1)->___y_2);
		float L_70 = ((&V_2)->___y_2);
		float L_71 = ((&V_5)->___y_2);
		float L_72 = V_3;
		Vector3_t48  L_73 = {0};
		Vector3__ctor_m1278(&L_73, (0.0f), ((float)((float)((float)((float)((-L_68))+(float)L_69))-(float)((float)((float)((float)((float)L_70-(float)L_71))*(float)L_72)))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_67);
		Transform_set_localPosition_m1265(L_67, L_73, /*hidden argument*/NULL);
		UISprite_t9 * L_74 = (__this->___mFG_3);
		NullCheck(L_74);
		Transform_t8 * L_75 = UIWidget_get_cachedTransform_m683(L_74, /*hidden argument*/NULL);
		float L_76 = ((&V_5)->___x_1);
		float L_77 = ((&V_1)->___x_1);
		float L_78 = ((&V_1)->___z_3);
		float L_79 = ((&V_5)->___y_2);
		float L_80 = ((&V_1)->___y_2);
		float L_81 = ((&V_1)->___w_4);
		Vector3_t48  L_82 = {0};
		Vector3__ctor_m1278(&L_82, ((float)((float)((float)((float)L_76+(float)L_77))+(float)L_78)), ((float)((float)((float)((float)L_79+(float)L_80))+(float)L_81)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_75);
		Transform_set_localScale_m1281(L_75, L_82, /*hidden argument*/NULL);
		float L_83 = V_3;
		if ((!(((float)L_83) < ((float)(0.999f)))))
		{
			goto IL_02e8;
		}
	}
	{
		float L_84 = V_3;
		if ((!(((float)L_84) > ((float)(0.001f)))))
		{
			goto IL_02e8;
		}
	}
	{
		UISprite_t9 * L_85 = (__this->___mFG_3);
		NullCheck(L_85);
		VirtActionInvoker0::Invoke(13 /* System.Void UISprite::MakePixelPerfect() */, L_85);
	}

IL_02e8:
	{
		return;
	}
}
// UISlider/Direction
#include "AssemblyU2DCSharp_UISlider_Direction.h"
#ifndef _MSC_VER
#else
#endif
// UISlider/Direction
#include "AssemblyU2DCSharp_UISlider_DirectionMethodDeclarations.h"



// UISlider/OnValueChange
#include "AssemblyU2DCSharp_UISlider_OnValueChange.h"
#ifndef _MSC_VER
#else
#endif
// UISlider/OnValueChange
#include "AssemblyU2DCSharp_UISlider_OnValueChangeMethodDeclarations.h"



// System.Void UISlider/OnValueChange::.ctor(System.Object,System.IntPtr)
extern "C" void OnValueChange__ctor_m405 (OnValueChange_t136 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UISlider/OnValueChange::Invoke(System.Single)
extern "C" void OnValueChange_Invoke_m406 (OnValueChange_t136 * __this, float ___val, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnValueChange_Invoke_m406((OnValueChange_t136 *)__this->___prev_9,___val, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, float ___val, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___val,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, float ___val, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___val,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_OnValueChange_t136(Il2CppObject* delegate, float ___val)
{
	typedef void (STDCALL *native_function_ptr_type)(float);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___val' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___val);

	// Marshaling cleanup of parameter '___val' native representation

}
// System.IAsyncResult UISlider/OnValueChange::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern TypeInfo* Single_t308_il2cpp_TypeInfo_var;
extern "C" Object_t * OnValueChange_BeginInvoke_m407 (OnValueChange_t136 * __this, float ___val, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t308_il2cpp_TypeInfo_var, &___val);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UISlider/OnValueChange::EndInvoke(System.IAsyncResult)
extern "C" void OnValueChange_EndInvoke_m408 (OnValueChange_t136 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UISlider
#include "AssemblyU2DCSharp_UISlider.h"
#ifndef _MSC_VER
#else
#endif
// UISlider
#include "AssemblyU2DCSharp_UISliderMethodDeclarations.h"

// UISprite/Type
#include "AssemblyU2DCSharp_UISprite_Type.h"
// UISprite/FillDirection
#include "AssemblyU2DCSharp_UISprite_FillDirection.h"


// System.Void UISlider::.ctor()
extern "C" void UISlider__ctor_m409 (UISlider_t137 * __this, const MethodInfo* method)
{
	{
		__this->___functionName_12 = (String_t*) &_stringLiteral58;
		__this->___rawValue_15 = (1.0f);
		Vector2_t55  L_0 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___mSize_22 = L_0;
		Vector3_t48  L_1 = Vector3_get_zero_m1286(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t55  L_2 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___mCenter_23 = L_2;
		IgnoreTimeScale__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UISlider::get_sliderValue()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" float UISlider_get_sliderValue_m410 (UISlider_t137 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = (__this->___rawValue_15);
		V_0 = L_0;
		int32_t L_1 = (__this->___numberOfSteps_14);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		float L_2 = V_0;
		int32_t L_3 = (__this->___numberOfSteps_14);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_4 = roundf(((float)((float)L_2*(float)(((float)((int32_t)((int32_t)L_3-(int32_t)1)))))));
		int32_t L_5 = (__this->___numberOfSteps_14);
		V_0 = ((float)((float)L_4/(float)(((float)((int32_t)((int32_t)L_5-(int32_t)1))))));
	}

IL_002e:
	{
		float L_6 = V_0;
		return L_6;
	}
}
// System.Void UISlider::set_sliderValue(System.Single)
extern "C" void UISlider_set_sliderValue_m411 (UISlider_t137 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		UISlider_Set_m423(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UISlider::get_fullSize()
extern "C" Vector2_t55  UISlider_get_fullSize_m412 (UISlider_t137 * __this, const MethodInfo* method)
{
	{
		Vector2_t55  L_0 = (__this->___mSize_22);
		return L_0;
	}
}
// System.Void UISlider::set_fullSize(UnityEngine.Vector2)
extern "C" void UISlider_set_fullSize_m413 (UISlider_t137 * __this, Vector2_t55  ___value, const MethodInfo* method)
{
	{
		Vector2_t55  L_0 = (__this->___mSize_22);
		Vector2_t55  L_1 = ___value;
		bool L_2 = Vector2_op_Inequality_m1496(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Vector2_t55  L_3 = ___value;
		__this->___mSize_22 = L_3;
		UISlider_ForceUpdate_m424(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void UISlider::Init()
extern TypeInfo* UISprite_t9_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUIWidget_t13_m1352_MethodInfo_var;
extern "C" void UISlider_Init_m414 (UISlider_t137 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UISprite_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Component_GetComponent_TisUIWidget_t13_m1352_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483672);
		s_Il2CppMethodIntialized = true;
	}
	UISlider_t137 * G_B3_0 = {0};
	UISlider_t137 * G_B2_0 = {0};
	UISprite_t9 * G_B4_0 = {0};
	UISlider_t137 * G_B4_1 = {0};
	{
		__this->___mInitDone_21 = 1;
		Transform_t8 * L_0 = (__this->___foreground_8);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00d7;
		}
	}
	{
		Transform_t8 * L_2 = (__this->___foreground_8);
		NullCheck(L_2);
		UIWidget_t13 * L_3 = Component_GetComponent_TisUIWidget_t13_m1352(L_2, /*hidden argument*/Component_GetComponent_TisUIWidget_t13_m1352_MethodInfo_var);
		__this->___mFGWidget_19 = L_3;
		UIWidget_t13 * L_4 = (__this->___mFGWidget_19);
		bool L_5 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_4, (Object_t69 *)NULL, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if (!L_5)
		{
			G_B3_0 = __this;
			goto IL_004b;
		}
	}
	{
		UIWidget_t13 * L_6 = (__this->___mFGWidget_19);
		G_B4_0 = ((UISprite_t9 *)IsInst(L_6, UISprite_t9_il2cpp_TypeInfo_var));
		G_B4_1 = G_B2_0;
		goto IL_004c;
	}

IL_004b:
	{
		G_B4_0 = ((UISprite_t9 *)(NULL));
		G_B4_1 = G_B3_0;
	}

IL_004c:
	{
		NullCheck(G_B4_1);
		G_B4_1->___mFGFilled_20 = G_B4_0;
		Transform_t8 * L_7 = (__this->___foreground_8);
		NullCheck(L_7);
		Transform_t8 * L_8 = Component_get_transform_m1253(L_7, /*hidden argument*/NULL);
		__this->___mFGTrans_18 = L_8;
		Vector2_t55  L_9 = (__this->___mSize_22);
		Vector2_t55  L_10 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_11 = Vector2_op_Equality_m1497(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008d;
		}
	}
	{
		Transform_t8 * L_12 = (__this->___foreground_8);
		NullCheck(L_12);
		Vector3_t48  L_13 = Transform_get_localScale_m1264(L_12, /*hidden argument*/NULL);
		Vector2_t55  L_14 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		__this->___mSize_22 = L_14;
	}

IL_008d:
	{
		Vector2_t55  L_15 = (__this->___mCenter_23);
		Vector2_t55  L_16 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_17 = Vector2_op_Equality_m1497(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00d2;
		}
	}
	{
		Transform_t8 * L_18 = (__this->___foreground_8);
		NullCheck(L_18);
		Vector3_t48  L_19 = Transform_get_localPosition_m1263(L_18, /*hidden argument*/NULL);
		Transform_t8 * L_20 = (__this->___foreground_8);
		NullCheck(L_20);
		Vector3_t48  L_21 = Transform_get_localScale_m1264(L_20, /*hidden argument*/NULL);
		Vector3_t48  L_22 = Vector3_op_Multiply_m1362(NULL /*static, unused*/, L_21, (0.5f), /*hidden argument*/NULL);
		Vector3_t48  L_23 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_19, L_22, /*hidden argument*/NULL);
		Vector2_t55  L_24 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		__this->___mCenter_23 = L_24;
	}

IL_00d2:
	{
		goto IL_014e;
	}

IL_00d7:
	{
		BoxCollider_t138 * L_25 = (__this->___mCol_16);
		bool L_26 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_25, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0143;
		}
	}
	{
		Vector2_t55  L_27 = (__this->___mSize_22);
		Vector2_t55  L_28 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_29 = Vector2_op_Equality_m1497(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0113;
		}
	}
	{
		BoxCollider_t138 * L_30 = (__this->___mCol_16);
		NullCheck(L_30);
		Vector3_t48  L_31 = BoxCollider_get_size_m1498(L_30, /*hidden argument*/NULL);
		Vector2_t55  L_32 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		__this->___mSize_22 = L_32;
	}

IL_0113:
	{
		Vector2_t55  L_33 = (__this->___mCenter_23);
		Vector2_t55  L_34 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_35 = Vector2_op_Equality_m1497(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_013e;
		}
	}
	{
		BoxCollider_t138 * L_36 = (__this->___mCol_16);
		NullCheck(L_36);
		Vector3_t48  L_37 = BoxCollider_get_center_m1488(L_36, /*hidden argument*/NULL);
		Vector2_t55  L_38 = Vector2_op_Implicit_m1367(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		__this->___mCenter_23 = L_38;
	}

IL_013e:
	{
		goto IL_014e;
	}

IL_0143:
	{
		Debug_LogWarning_m1399(NULL /*static, unused*/, (String_t*) &_stringLiteral59, __this, /*hidden argument*/NULL);
	}

IL_014e:
	{
		return;
	}
}
// System.Void UISlider::Awake()
extern TypeInfo* BoxCollider_t138_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var;
extern "C" void UISlider_Awake_m415 (UISlider_t137 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoxCollider_t138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t8 * L_0 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		__this->___mTrans_17 = L_0;
		Collider_t304 * L_1 = Component_GetComponent_TisCollider_t304_m1316(__this, /*hidden argument*/Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var);
		__this->___mCol_16 = ((BoxCollider_t138 *)IsInst(L_1, BoxCollider_t138_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UISlider::Start()
extern TypeInfo* BoolDelegate_t177_il2cpp_TypeInfo_var;
extern TypeInfo* VectorDelegate_t179_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var;
extern const MethodInfo* UISlider_OnPressThumb_m419_MethodInfo_var;
extern const MethodInfo* UISlider_OnDragThumb_m420_MethodInfo_var;
extern "C" void UISlider_Start_m416 (UISlider_t137 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoolDelegate_t177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		VectorDelegate_t179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483666);
		UISlider_OnPressThumb_m419_MethodInfo_var = il2cpp_codegen_method_info_from_index(89);
		UISlider_OnDragThumb_m420_MethodInfo_var = il2cpp_codegen_method_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	UIEventListener_t183 * V_0 = {0};
	{
		UISlider_Init_m414(__this, /*hidden argument*/NULL);
		bool L_0 = Application_get_isPlaying_m1372(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_008c;
		}
	}
	{
		Transform_t8 * L_1 = (__this->___thumb_9);
		bool L_2 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_1, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_008c;
		}
	}
	{
		Transform_t8 * L_3 = (__this->___thumb_9);
		NullCheck(L_3);
		Collider_t304 * L_4 = Component_GetComponent_TisCollider_t304_m1316(L_3, /*hidden argument*/Component_GetComponent_TisCollider_t304_m1316_MethodInfo_var);
		bool L_5 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_4, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008c;
		}
	}
	{
		Transform_t8 * L_6 = (__this->___thumb_9);
		NullCheck(L_6);
		GameObject_t17 * L_7 = Component_get_gameObject_m1246(L_6, /*hidden argument*/NULL);
		UIEventListener_t183 * L_8 = UIEventListener_Get_m661(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		UIEventListener_t183 * L_9 = V_0;
		UIEventListener_t183 * L_10 = L_9;
		NullCheck(L_10);
		BoolDelegate_t177 * L_11 = (L_10->___onPress_7);
		IntPtr_t L_12 = { (void*)UISlider_OnPressThumb_m419_MethodInfo_var };
		BoolDelegate_t177 * L_13 = (BoolDelegate_t177 *)il2cpp_codegen_object_new (BoolDelegate_t177_il2cpp_TypeInfo_var);
		BoolDelegate__ctor_m625(L_13, __this, L_12, /*hidden argument*/NULL);
		Delegate_t314 * L_14 = Delegate_Combine_m1425(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->___onPress_7 = ((BoolDelegate_t177 *)Castclass(L_14, BoolDelegate_t177_il2cpp_TypeInfo_var));
		UIEventListener_t183 * L_15 = V_0;
		UIEventListener_t183 * L_16 = L_15;
		NullCheck(L_16);
		VectorDelegate_t179 * L_17 = (L_16->___onDrag_10);
		IntPtr_t L_18 = { (void*)UISlider_OnDragThumb_m420_MethodInfo_var };
		VectorDelegate_t179 * L_19 = (VectorDelegate_t179 *)il2cpp_codegen_object_new (VectorDelegate_t179_il2cpp_TypeInfo_var);
		VectorDelegate__ctor_m633(L_19, __this, L_18, /*hidden argument*/NULL);
		Delegate_t314 * L_20 = Delegate_Combine_m1425(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->___onDrag_10 = ((VectorDelegate_t179 *)Castclass(L_20, VectorDelegate_t179_il2cpp_TypeInfo_var));
	}

IL_008c:
	{
		float L_21 = (__this->___rawValue_15);
		UISlider_Set_m423(__this, L_21, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UISlider::OnPress(System.Boolean)
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UISlider_OnPress_m417 (UISlider_t137 * __this, bool ___pressed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		bool L_1 = ___pressed;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		int32_t L_2 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouchID_31;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-100))))
		{
			goto IL_0023;
		}
	}
	{
		UISlider_UpdateDrag_m422(__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void UISlider::OnDrag(UnityEngine.Vector2)
extern "C" void UISlider_OnDrag_m418 (UISlider_t137 * __this, Vector2_t55  ___delta, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UISlider_UpdateDrag_m422(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UISlider::OnPressThumb(UnityEngine.GameObject,System.Boolean)
extern "C" void UISlider_OnPressThumb_m419 (UISlider_t137 * __this, GameObject_t17 * ___go, bool ___pressed, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = ___pressed;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		UISlider_UpdateDrag_m422(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UISlider::OnDragThumb(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void UISlider_OnDragThumb_m420 (UISlider_t137 * __this, GameObject_t17 * ___go, Vector2_t55  ___delta, const MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UISlider_UpdateDrag_m422(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UISlider::OnKey(UnityEngine.KeyCode)
extern "C" void UISlider_OnKey_m421 (UISlider_t137 * __this, int32_t ___key, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		bool L_0 = Behaviour_get_enabled_m1318(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_1 = (__this->___numberOfSteps_14);
		if ((!(((float)(((float)L_1))) > ((float)(1.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_2 = (__this->___numberOfSteps_14);
		G_B4_0 = ((float)((float)(1.0f)/(float)(((float)((int32_t)((int32_t)L_2-(int32_t)1))))));
		goto IL_0035;
	}

IL_0030:
	{
		G_B4_0 = (0.125f);
	}

IL_0035:
	{
		V_0 = G_B4_0;
		int32_t L_3 = (__this->___direction_10);
		if (L_3)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_4 = ___key;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)276)))))
		{
			goto IL_0060;
		}
	}
	{
		float L_5 = (__this->___rawValue_15);
		float L_6 = V_0;
		UISlider_Set_m423(__this, ((float)((float)L_5-(float)L_6)), 0, /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_0060:
	{
		int32_t L_7 = ___key;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)275)))))
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = (__this->___rawValue_15);
		float L_9 = V_0;
		UISlider_Set_m423(__this, ((float)((float)L_8+(float)L_9)), 0, /*hidden argument*/NULL);
	}

IL_007a:
	{
		goto IL_00b8;
	}

IL_007f:
	{
		int32_t L_10 = ___key;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)274)))))
		{
			goto IL_009e;
		}
	}
	{
		float L_11 = (__this->___rawValue_15);
		float L_12 = V_0;
		UISlider_Set_m423(__this, ((float)((float)L_11-(float)L_12)), 0, /*hidden argument*/NULL);
		goto IL_00b8;
	}

IL_009e:
	{
		int32_t L_13 = ___key;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)273)))))
		{
			goto IL_00b8;
		}
	}
	{
		float L_14 = (__this->___rawValue_15);
		float L_15 = V_0;
		UISlider_Set_m423(__this, ((float)((float)L_14+(float)L_15)), 0, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		return;
	}
}
// System.Void UISlider::UpdateDrag()
extern TypeInfo* UICamera_t219_il2cpp_TypeInfo_var;
extern "C" void UISlider_UpdateDrag_m422 (UISlider_t137 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UICamera_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t315  V_0 = {0};
	Plane_t112  V_1 = {0};
	float V_2 = 0.0f;
	Vector3_t48  V_3 = {0};
	Vector3_t48  V_4 = {0};
	Vector3_t48  V_5 = {0};
	Vector3_t48  V_6 = {0};
	UISlider_t137 * G_B8_0 = {0};
	UISlider_t137 * G_B7_0 = {0};
	float G_B9_0 = 0.0f;
	UISlider_t137 * G_B9_1 = {0};
	{
		BoxCollider_t138 * L_0 = (__this->___mCol_16);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		Camera_t7 * L_2 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentCamera_30;
		bool L_3 = Object_op_Equality_m1245(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		MouseOrTouch_t216 * L_4 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		if (L_4)
		{
			goto IL_002c;
		}
	}

IL_002b:
	{
		return;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UICamera_t219_il2cpp_TypeInfo_var);
		MouseOrTouch_t216 * L_5 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_5);
		L_5->___clickNotification_8 = 0;
		Camera_t7 * L_6 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentCamera_30;
		MouseOrTouch_t216 * L_7 = ((UICamera_t219_StaticFields*)UICamera_t219_il2cpp_TypeInfo_var->static_fields)->___currentTouch_32;
		NullCheck(L_7);
		Vector2_t55  L_8 = (L_7->___pos_0);
		Vector3_t48  L_9 = Vector2_op_Implicit_m1320(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Ray_t315  L_10 = Camera_ScreenPointToRay_m1433(L_6, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Transform_t8 * L_11 = (__this->___mTrans_17);
		NullCheck(L_11);
		Quaternion_t50  L_12 = Transform_get_rotation_m1283(L_11, /*hidden argument*/NULL);
		Vector3_t48  L_13 = Vector3_get_back_m1431(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t48  L_14 = Quaternion_op_Multiply_m1330(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Transform_t8 * L_15 = (__this->___mTrans_17);
		NullCheck(L_15);
		Vector3_t48  L_16 = Transform_get_position_m1282(L_15, /*hidden argument*/NULL);
		Plane__ctor_m1432((&V_1), L_14, L_16, /*hidden argument*/NULL);
		Ray_t315  L_17 = V_0;
		bool L_18 = Plane_Raycast_m1434((&V_1), L_17, (&V_2), /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0088;
		}
	}
	{
		return;
	}

IL_0088:
	{
		Transform_t8 * L_19 = (__this->___mTrans_17);
		NullCheck(L_19);
		Vector3_t48  L_20 = Transform_get_localPosition_m1263(L_19, /*hidden argument*/NULL);
		Vector2_t55  L_21 = (__this->___mCenter_23);
		Vector2_t55  L_22 = (__this->___mSize_22);
		Vector2_t55  L_23 = Vector2_op_Multiply_m1457(NULL /*static, unused*/, L_22, (0.5f), /*hidden argument*/NULL);
		Vector2_t55  L_24 = Vector2_op_Subtraction_m1466(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		Vector3_t48  L_25 = Vector2_op_Implicit_m1320(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		Vector3_t48  L_26 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_20, L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		Transform_t8 * L_27 = (__this->___mTrans_17);
		NullCheck(L_27);
		Vector3_t48  L_28 = Transform_get_localPosition_m1263(L_27, /*hidden argument*/NULL);
		Vector3_t48  L_29 = V_3;
		Vector3_t48  L_30 = Vector3_op_Subtraction_m1334(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		Transform_t8 * L_31 = (__this->___mTrans_17);
		float L_32 = V_2;
		Vector3_t48  L_33 = Ray_GetPoint_m1435((&V_0), L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t48  L_34 = Transform_InverseTransformPoint_m1421(L_31, L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		Vector3_t48  L_35 = V_5;
		Vector3_t48  L_36 = V_4;
		Vector3_t48  L_37 = Vector3_op_Addition_m1321(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_6 = L_37;
		int32_t L_38 = (__this->___direction_10);
		G_B7_0 = __this;
		if (L_38)
		{
			G_B8_0 = __this;
			goto IL_0110;
		}
	}
	{
		float L_39 = ((&V_6)->___x_1);
		Vector2_t55 * L_40 = &(__this->___mSize_22);
		float L_41 = (L_40->___x_1);
		G_B9_0 = ((float)((float)L_39/(float)L_41));
		G_B9_1 = G_B7_0;
		goto IL_0123;
	}

IL_0110:
	{
		float L_42 = ((&V_6)->___y_2);
		Vector2_t55 * L_43 = &(__this->___mSize_22);
		float L_44 = (L_43->___y_2);
		G_B9_0 = ((float)((float)L_42/(float)L_44));
		G_B9_1 = G_B8_0;
	}

IL_0123:
	{
		NullCheck(G_B9_1);
		UISlider_Set_m423(G_B9_1, G_B9_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UISlider::Set(System.Single,System.Boolean)
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern TypeInfo* UISlider_t137_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t308_il2cpp_TypeInfo_var;
extern "C" void UISlider_Set_m423 (UISlider_t137 * __this, float ___input, bool ___force, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		UISlider_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Single_t308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(52);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t48  V_3 = {0};
	Vector3_t48  V_4 = {0};
	Vector3_t48 * G_B23_0 = {0};
	Vector3_t48 * G_B22_0 = {0};
	float G_B24_0 = 0.0f;
	Vector3_t48 * G_B24_1 = {0};
	Vector3_t48 * G_B28_0 = {0};
	Vector3_t48 * G_B27_0 = {0};
	float G_B29_0 = 0.0f;
	Vector3_t48 * G_B29_1 = {0};
	{
		bool L_0 = (__this->___mInitDone_21);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		UISlider_Init_m414(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		float L_1 = ___input;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp01_m1258(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		if ((!(((float)L_3) < ((float)(0.001f)))))
		{
			goto IL_0029;
		}
	}
	{
		V_0 = (0.0f);
	}

IL_0029:
	{
		float L_4 = UISlider_get_sliderValue_m410(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = V_0;
		__this->___rawValue_15 = L_5;
		float L_6 = UISlider_get_sliderValue_m410(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = ___force;
		if (L_7)
		{
			goto IL_004b;
		}
	}
	{
		float L_8 = V_1;
		float L_9 = V_2;
		if ((((float)L_8) == ((float)L_9)))
		{
			goto IL_029f;
		}
	}

IL_004b:
	{
		Vector2_t55  L_10 = (__this->___mSize_22);
		Vector3_t48  L_11 = Vector2_op_Implicit_m1320(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		int32_t L_12 = (__this->___direction_10);
		if (L_12)
		{
			goto IL_0076;
		}
	}
	{
		Vector3_t48 * L_13 = (&V_3);
		float L_14 = (L_13->___x_1);
		float L_15 = V_2;
		L_13->___x_1 = ((float)((float)L_14*(float)L_15));
		goto IL_0085;
	}

IL_0076:
	{
		Vector3_t48 * L_16 = (&V_3);
		float L_17 = (L_16->___y_2);
		float L_18 = V_2;
		L_16->___y_2 = ((float)((float)L_17*(float)L_18));
	}

IL_0085:
	{
		UISprite_t9 * L_19 = (__this->___mFGFilled_20);
		bool L_20 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_19, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b8;
		}
	}
	{
		UISprite_t9 * L_21 = (__this->___mFGFilled_20);
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* UISprite/Type UISprite::get_type() */, L_21);
		if ((!(((uint32_t)L_22) == ((uint32_t)3))))
		{
			goto IL_00b8;
		}
	}
	{
		UISprite_t9 * L_23 = (__this->___mFGFilled_20);
		float L_24 = V_2;
		NullCheck(L_23);
		UISprite_set_fillAmount_m1073(L_23, L_24, /*hidden argument*/NULL);
		goto IL_0119;
	}

IL_00b8:
	{
		Transform_t8 * L_25 = (__this->___foreground_8);
		bool L_26 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_25, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0119;
		}
	}
	{
		Transform_t8 * L_27 = (__this->___mFGTrans_18);
		Vector3_t48  L_28 = V_3;
		NullCheck(L_27);
		Transform_set_localScale_m1281(L_27, L_28, /*hidden argument*/NULL);
		UIWidget_t13 * L_29 = (__this->___mFGWidget_19);
		bool L_30 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_29, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0119;
		}
	}
	{
		float L_31 = V_2;
		if ((!(((float)L_31) > ((float)(0.001f)))))
		{
			goto IL_010d;
		}
	}
	{
		UIWidget_t13 * L_32 = (__this->___mFGWidget_19);
		NullCheck(L_32);
		Behaviour_set_enabled_m1272(L_32, 1, /*hidden argument*/NULL);
		UIWidget_t13 * L_33 = (__this->___mFGWidget_19);
		NullCheck(L_33);
		VirtActionInvoker0::Invoke(8 /* System.Void UIWidget::MarkAsChanged() */, L_33);
		goto IL_0119;
	}

IL_010d:
	{
		UIWidget_t13 * L_34 = (__this->___mFGWidget_19);
		NullCheck(L_34);
		Behaviour_set_enabled_m1272(L_34, 0, /*hidden argument*/NULL);
	}

IL_0119:
	{
		Transform_t8 * L_35 = (__this->___thumb_9);
		bool L_36 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_35, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0239;
		}
	}
	{
		Transform_t8 * L_37 = (__this->___thumb_9);
		NullCheck(L_37);
		Vector3_t48  L_38 = Transform_get_localPosition_m1263(L_37, /*hidden argument*/NULL);
		V_4 = L_38;
		UISprite_t9 * L_39 = (__this->___mFGFilled_20);
		bool L_40 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_39, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0200;
		}
	}
	{
		UISprite_t9 * L_41 = (__this->___mFGFilled_20);
		NullCheck(L_41);
		int32_t L_42 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* UISprite/Type UISprite::get_type() */, L_41);
		if ((!(((uint32_t)L_42) == ((uint32_t)3))))
		{
			goto IL_0200;
		}
	}
	{
		UISprite_t9 * L_43 = (__this->___mFGFilled_20);
		NullCheck(L_43);
		int32_t L_44 = UISprite_get_fillDirection_m1070(L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_01a4;
		}
	}
	{
		UISprite_t9 * L_45 = (__this->___mFGFilled_20);
		NullCheck(L_45);
		bool L_46 = UISprite_get_invert_m1074(L_45, /*hidden argument*/NULL);
		G_B22_0 = (&V_4);
		if (!L_46)
		{
			G_B23_0 = (&V_4);
			goto IL_0193;
		}
	}
	{
		Vector2_t55 * L_47 = &(__this->___mSize_22);
		float L_48 = (L_47->___x_1);
		float L_49 = ((&V_3)->___x_1);
		G_B24_0 = ((float)((float)L_48-(float)L_49));
		G_B24_1 = G_B22_0;
		goto IL_019a;
	}

IL_0193:
	{
		float L_50 = ((&V_3)->___x_1);
		G_B24_0 = L_50;
		G_B24_1 = G_B23_0;
	}

IL_019a:
	{
		G_B24_1->___x_1 = G_B24_0;
		goto IL_01fb;
	}

IL_01a4:
	{
		UISprite_t9 * L_51 = (__this->___mFGFilled_20);
		NullCheck(L_51);
		int32_t L_52 = UISprite_get_fillDirection_m1070(L_51, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_01f0;
		}
	}
	{
		UISprite_t9 * L_53 = (__this->___mFGFilled_20);
		NullCheck(L_53);
		bool L_54 = UISprite_get_invert_m1074(L_53, /*hidden argument*/NULL);
		G_B27_0 = (&V_4);
		if (!L_54)
		{
			G_B28_0 = (&V_4);
			goto IL_01df;
		}
	}
	{
		Vector2_t55 * L_55 = &(__this->___mSize_22);
		float L_56 = (L_55->___y_2);
		float L_57 = ((&V_3)->___y_2);
		G_B29_0 = ((float)((float)L_56-(float)L_57));
		G_B29_1 = G_B27_0;
		goto IL_01e6;
	}

IL_01df:
	{
		float L_58 = ((&V_3)->___y_2);
		G_B29_0 = L_58;
		G_B29_1 = G_B28_0;
	}

IL_01e6:
	{
		G_B29_1->___y_2 = G_B29_0;
		goto IL_01fb;
	}

IL_01f0:
	{
		Debug_LogWarning_m1399(NULL /*static, unused*/, (String_t*) &_stringLiteral60, __this, /*hidden argument*/NULL);
	}

IL_01fb:
	{
		goto IL_022c;
	}

IL_0200:
	{
		int32_t L_59 = (__this->___direction_10);
		if (L_59)
		{
			goto IL_021e;
		}
	}
	{
		float L_60 = ((&V_3)->___x_1);
		(&V_4)->___x_1 = L_60;
		goto IL_022c;
	}

IL_021e:
	{
		float L_61 = ((&V_3)->___y_2);
		(&V_4)->___y_2 = L_61;
	}

IL_022c:
	{
		Transform_t8 * L_62 = (__this->___thumb_9);
		Vector3_t48  L_63 = V_4;
		NullCheck(L_62);
		Transform_set_localPosition_m1265(L_62, L_63, /*hidden argument*/NULL);
	}

IL_0239:
	{
		((UISlider_t137_StaticFields*)UISlider_t137_il2cpp_TypeInfo_var->static_fields)->___current_7 = __this;
		GameObject_t17 * L_64 = (__this->___eventReceiver_11);
		bool L_65 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_64, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_0282;
		}
	}
	{
		String_t* L_66 = (__this->___functionName_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_67 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_0282;
		}
	}
	{
		bool L_68 = Application_get_isPlaying_m1372(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_0282;
		}
	}
	{
		GameObject_t17 * L_69 = (__this->___eventReceiver_11);
		String_t* L_70 = (__this->___functionName_12);
		float L_71 = V_2;
		float L_72 = L_71;
		Object_t * L_73 = Box(Single_t308_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_69);
		GameObject_SendMessage_m1406(L_69, L_70, L_73, 1, /*hidden argument*/NULL);
	}

IL_0282:
	{
		OnValueChange_t136 * L_74 = (__this->___onValueChange_13);
		if (!L_74)
		{
			goto IL_0299;
		}
	}
	{
		OnValueChange_t136 * L_75 = (__this->___onValueChange_13);
		float L_76 = V_2;
		NullCheck(L_75);
		VirtActionInvoker1< float >::Invoke(11 /* System.Void UISlider/OnValueChange::Invoke(System.Single) */, L_75, L_76);
	}

IL_0299:
	{
		((UISlider_t137_StaticFields*)UISlider_t137_il2cpp_TypeInfo_var->static_fields)->___current_7 = (UISlider_t137 *)NULL;
	}

IL_029f:
	{
		return;
	}
}
// System.Void UISlider::ForceUpdate()
extern "C" void UISlider_ForceUpdate_m424 (UISlider_t137 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___rawValue_15);
		UISlider_Set_m423(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// UISliderColors
#include "AssemblyU2DCSharp_UISliderColors.h"
#ifndef _MSC_VER
#else
#endif
// UISliderColors
#include "AssemblyU2DCSharp_UISliderColorsMethodDeclarations.h"

struct Component_t107;
struct UISlider_t137;
// Declaration !!0 UnityEngine.Component::GetComponent<UISlider>()
// !!0 UnityEngine.Component::GetComponent<UISlider>()
#define Component_GetComponent_TisUISlider_t137_m1499(__this, method) (( UISlider_t137 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)


// System.Void UISliderColors::.ctor()
extern TypeInfo* ColorU5BU5D_t139_il2cpp_TypeInfo_var;
extern "C" void UISliderColors__ctor_m425 (UISliderColors_t140 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ColorU5BU5D_t139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		s_Il2CppMethodIntialized = true;
	}
	{
		ColorU5BU5D_t139* L_0 = ((ColorU5BU5D_t139*)SZArrayNew(ColorU5BU5D_t139_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Color_t25  L_1 = Color_get_red_m1302(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((Color_t25 *)(Color_t25 *)SZArrayLdElema(L_0, 0)) = L_1;
		ColorU5BU5D_t139* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Color_t25  L_3 = Color_get_yellow_m1356(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((Color_t25 *)(Color_t25 *)SZArrayLdElema(L_2, 1)) = L_3;
		ColorU5BU5D_t139* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Color_t25  L_5 = Color_get_green_m1354(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((Color_t25 *)(Color_t25 *)SZArrayLdElema(L_4, 2)) = L_5;
		__this->___colors_3 = L_4;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UISliderColors::Start()
extern const MethodInfo* Component_GetComponent_TisUISlider_t137_m1499_MethodInfo_var;
extern "C" void UISliderColors_Start_m426 (UISliderColors_t140 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisUISlider_t137_m1499_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483739);
		s_Il2CppMethodIntialized = true;
	}
	{
		UISlider_t137 * L_0 = Component_GetComponent_TisUISlider_t137_m1499(__this, /*hidden argument*/Component_GetComponent_TisUISlider_t137_m1499_MethodInfo_var);
		__this->___mSlider_4 = L_0;
		UISliderColors_Update_m427(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UISliderColors::Update()
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern "C" void UISliderColors_Update_m427 (UISliderColors_t140 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Color_t25  V_2 = {0};
	float V_3 = 0.0f;
	Color_t25  V_4 = {0};
	{
		UISprite_t9 * L_0 = (__this->___sprite_2);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		ColorU5BU5D_t139* L_2 = (__this->___colors_3);
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_001f;
		}
	}

IL_001e:
	{
		return;
	}

IL_001f:
	{
		UISlider_t137 * L_3 = (__this->___mSlider_4);
		NullCheck(L_3);
		float L_4 = UISlider_get_sliderValue_m410(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = V_0;
		ColorU5BU5D_t139* L_6 = (__this->___colors_3);
		NullCheck(L_6);
		V_0 = ((float)((float)L_5*(float)(((float)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))-(int32_t)1))))));
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
		int32_t L_8 = Mathf_FloorToInt_m1500(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		ColorU5BU5D_t139* L_9 = (__this->___colors_3);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		V_2 = (*(Color_t25 *)((Color_t25 *)(Color_t25 *)SZArrayLdElema(L_9, 0)));
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_11 = V_1;
		ColorU5BU5D_t139* L_12 = (__this->___colors_3);
		NullCheck(L_12);
		if ((((int32_t)((int32_t)((int32_t)L_11+(int32_t)1))) >= ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_009e;
		}
	}
	{
		float L_13 = V_0;
		int32_t L_14 = V_1;
		V_3 = ((float)((float)L_13-(float)(((float)L_14))));
		ColorU5BU5D_t139* L_15 = (__this->___colors_3);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		ColorU5BU5D_t139* L_17 = (__this->___colors_3);
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)((int32_t)L_18+(int32_t)1)));
		float L_19 = V_3;
		Color_t25  L_20 = Color_Lerp_m1501(NULL /*static, unused*/, (*(Color_t25 *)((Color_t25 *)(Color_t25 *)SZArrayLdElema(L_15, L_16))), (*(Color_t25 *)((Color_t25 *)(Color_t25 *)SZArrayLdElema(L_17, ((int32_t)((int32_t)L_18+(int32_t)1))))), L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_00de;
	}

IL_009e:
	{
		int32_t L_21 = V_1;
		ColorU5BU5D_t139* L_22 = (__this->___colors_3);
		NullCheck(L_22);
		if ((((int32_t)L_21) >= ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_00c3;
		}
	}
	{
		ColorU5BU5D_t139* L_23 = (__this->___colors_3);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		V_2 = (*(Color_t25 *)((Color_t25 *)(Color_t25 *)SZArrayLdElema(L_23, L_24)));
		goto IL_00de;
	}

IL_00c3:
	{
		ColorU5BU5D_t139* L_25 = (__this->___colors_3);
		ColorU5BU5D_t139* L_26 = (__this->___colors_3);
		NullCheck(L_26);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_26)->max_length)))-(int32_t)1)));
		V_2 = (*(Color_t25 *)((Color_t25 *)(Color_t25 *)SZArrayLdElema(L_25, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_26)->max_length)))-(int32_t)1)))));
	}

IL_00de:
	{
		UISprite_t9 * L_27 = (__this->___sprite_2);
		NullCheck(L_27);
		Color_t25  L_28 = UIWidget_get_color_m672(L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		float L_29 = ((&V_4)->___a_3);
		(&V_2)->___a_3 = L_29;
		UISprite_t9 * L_30 = (__this->___sprite_2);
		Color_t25  L_31 = V_2;
		NullCheck(L_30);
		UIWidget_set_color_m673(L_30, L_31, /*hidden argument*/NULL);
		return;
	}
}
// UISoundVolume
#include "AssemblyU2DCSharp_UISoundVolume.h"
#ifndef _MSC_VER
#else
#endif
// UISoundVolume
#include "AssemblyU2DCSharp_UISoundVolumeMethodDeclarations.h"



// System.Void UISoundVolume::.ctor()
extern "C" void UISoundVolume__ctor_m428 (UISoundVolume_t141 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UISoundVolume::Awake()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisUISlider_t137_m1499_MethodInfo_var;
extern "C" void UISoundVolume_Awake_m429 (UISoundVolume_t141 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Component_GetComponent_TisUISlider_t137_m1499_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483739);
		s_Il2CppMethodIntialized = true;
	}
	{
		UISlider_t137 * L_0 = Component_GetComponent_TisUISlider_t137_m1499(__this, /*hidden argument*/Component_GetComponent_TisUISlider_t137_m1499_MethodInfo_var);
		__this->___mSlider_2 = L_0;
		UISlider_t137 * L_1 = (__this->___mSlider_2);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		float L_2 = NGUITools_get_soundVolume_m548(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		UISlider_set_sliderValue_m411(L_1, L_2, /*hidden argument*/NULL);
		UISlider_t137 * L_3 = (__this->___mSlider_2);
		GameObject_t17 * L_4 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->___eventReceiver_11 = L_4;
		return;
	}
}
// System.Void UISoundVolume::OnSliderChange(System.Single)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void UISoundVolume_OnSliderChange_m430 (UISoundVolume_t141 * __this, float ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___val;
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_set_soundVolume_m549(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UITable/Direction
#include "AssemblyU2DCSharp_UITable_Direction.h"
#ifndef _MSC_VER
#else
#endif
// UITable/Direction
#include "AssemblyU2DCSharp_UITable_DirectionMethodDeclarations.h"



// UITable/OnReposition
#include "AssemblyU2DCSharp_UITable_OnReposition.h"
#ifndef _MSC_VER
#else
#endif
// UITable/OnReposition
#include "AssemblyU2DCSharp_UITable_OnRepositionMethodDeclarations.h"



// System.Void UITable/OnReposition::.ctor(System.Object,System.IntPtr)
extern "C" void OnReposition__ctor_m431 (OnReposition_t143 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UITable/OnReposition::Invoke()
extern "C" void OnReposition_Invoke_m432 (OnReposition_t143 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnReposition_Invoke_m432((OnReposition_t143 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_OnReposition_t143(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UITable/OnReposition::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * OnReposition_BeginInvoke_m433 (OnReposition_t143 * __this, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UITable/OnReposition::EndInvoke(System.IAsyncResult)
extern "C" void OnReposition_EndInvoke_m434 (OnReposition_t143 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UITable
#include "AssemblyU2DCSharp_UITableMethodDeclarations.h"



// System.Void UITable::.ctor()
extern TypeInfo* List_1_t144_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1469_MethodInfo_var;
extern "C" void UITable__ctor_m435 (UITable_t145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(84);
		List_1__ctor_m1469_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t55  L_0 = Vector2_get_zero_m1338(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___padding_4 = L_0;
		__this->___hideInactive_6 = 1;
		List_1_t144 * L_1 = (List_1_t144 *)il2cpp_codegen_object_new (List_1_t144_il2cpp_TypeInfo_var);
		List_1__ctor_m1469(L_1, /*hidden argument*/List_1__ctor_m1469_MethodInfo_var);
		__this->___mChildren_13 = L_1;
		MonoBehaviour__ctor_m1244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UITable::SortByName(UnityEngine.Transform,UnityEngine.Transform)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t UITable_SortByName_m436 (Object_t * __this /* static, unused */, Transform_t8 * ___a, Transform_t8 * ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t8 * L_0 = ___a;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m1344(L_0, /*hidden argument*/NULL);
		Transform_t8 * L_2 = ___b;
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_m1344(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_4 = String_Compare_m1468(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Transform> UITable::get_children()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern TypeInfo* Comparison_1_t316_il2cpp_TypeInfo_var;
extern const MethodInfo* UITable_SortByName_m436_MethodInfo_var;
extern const MethodInfo* Comparison_1__ctor_m1470_MethodInfo_var;
extern const MethodInfo* List_1_Sort_m1471_MethodInfo_var;
extern "C" List_1_t144 * UITable_get_children_m437 (UITable_t145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		Comparison_1_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		UITable_SortByName_m436_MethodInfo_var = il2cpp_codegen_method_info_from_index(92);
		Comparison_1__ctor_m1470_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		List_1_Sort_m1471_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t8 * V_0 = {0};
	int32_t V_1 = 0;
	Transform_t8 * V_2 = {0};
	{
		List_1_t144 * L_0 = (__this->___mChildren_13);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_00a5;
		}
	}
	{
		Transform_t8 * L_2 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_t144 * L_3 = (__this->___mChildren_13);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(20 /* System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Clear() */, L_3);
		V_1 = 0;
		goto IL_0077;
	}

IL_0029:
	{
		Transform_t8 * L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Transform_t8 * L_6 = Transform_GetChild_m1419(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Transform_t8 * L_7 = V_2;
		bool L_8 = Object_op_Implicit_m1391(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		Transform_t8 * L_9 = V_2;
		NullCheck(L_9);
		GameObject_t17 * L_10 = Component_get_gameObject_m1246(L_9, /*hidden argument*/NULL);
		bool L_11 = Object_op_Implicit_m1391(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		bool L_12 = (__this->___hideInactive_6);
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		Transform_t8 * L_13 = V_2;
		NullCheck(L_13);
		GameObject_t17 * L_14 = Component_get_gameObject_m1246(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_15 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0073;
		}
	}

IL_0067:
	{
		List_1_t144 * L_16 = (__this->___mChildren_13);
		Transform_t8 * L_17 = V_2;
		NullCheck(L_16);
		VirtActionInvoker1< Transform_t8 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0) */, L_16, L_17);
	}

IL_0073:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0077:
	{
		int32_t L_19 = V_1;
		Transform_t8 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = Transform_get_childCount_m1418(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0029;
		}
	}
	{
		bool L_22 = (__this->___sorted_5);
		if (!L_22)
		{
			goto IL_00a5;
		}
	}
	{
		List_1_t144 * L_23 = (__this->___mChildren_13);
		IntPtr_t L_24 = { (void*)UITable_SortByName_m436_MethodInfo_var };
		Comparison_1_t316 * L_25 = (Comparison_1_t316 *)il2cpp_codegen_object_new (Comparison_1_t316_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m1470(L_25, NULL, L_24, /*hidden argument*/Comparison_1__ctor_m1470_MethodInfo_var);
		NullCheck(L_23);
		List_1_Sort_m1471(L_23, L_25, /*hidden argument*/List_1_Sort_m1471_MethodInfo_var);
	}

IL_00a5:
	{
		List_1_t144 * L_26 = (__this->___mChildren_13);
		return L_26;
	}
}
// System.Void UITable::RepositionVariableSize(System.Collections.Generic.List`1<UnityEngine.Transform>)
extern TypeInfo* BoundsU5BU2CU5D_t319_il2cpp_TypeInfo_var;
extern TypeInfo* BoundsU5BU5D_t320_il2cpp_TypeInfo_var;
extern "C" void UITable_RepositionVariableSize_m438 (UITable_t145 * __this, List_1_t144 * ___children, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoundsU5BU2CU5D_t319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		BoundsU5BU5D_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	BoundsU5BU2CU5D_t319* V_4 = {0};
	BoundsU5BU5D_t320* V_5 = {0};
	BoundsU5BU5D_t320* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Transform_t8 * V_11 = {0};
	Bounds_t113  V_12 = {0};
	Vector3_t48  V_13 = {0};
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Transform_t8 * V_16 = {0};
	Bounds_t113  V_17 = {0};
	Bounds_t113  V_18 = {0};
	Bounds_t113  V_19 = {0};
	Vector3_t48  V_20 = {0};
	Vector3_t48  V_21 = {0};
	Vector3_t48  V_22 = {0};
	Vector3_t48  V_23 = {0};
	Vector3_t48  V_24 = {0};
	Vector3_t48  V_25 = {0};
	Vector3_t48  V_26 = {0};
	Vector3_t48  V_27 = {0};
	Vector3_t48  V_28 = {0};
	Vector3_t48  V_29 = {0};
	Vector3_t48  V_30 = {0};
	Vector3_t48  V_31 = {0};
	Vector3_t48  V_32 = {0};
	Vector3_t48  V_33 = {0};
	Vector3_t48  V_34 = {0};
	Vector3_t48  V_35 = {0};
	Vector3_t48  V_36 = {0};
	Vector3_t48  V_37 = {0};
	Vector3_t48  V_38 = {0};
	Vector3_t48  V_39 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		int32_t L_0 = (__this->___columns_2);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		List_1_t144 * L_1 = ___children;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count() */, L_1);
		int32_t L_3 = (__this->___columns_2);
		G_B3_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_2/(int32_t)L_3))+(int32_t)1));
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_2 = G_B3_0;
		int32_t L_4 = (__this->___columns_2);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_5 = (__this->___columns_2);
		G_B6_0 = L_5;
		goto IL_004b;
	}

IL_0045:
	{
		List_1_t144 * L_6 = ___children;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count() */, L_6);
		G_B6_0 = L_7;
	}

IL_004b:
	{
		V_3 = G_B6_0;
		int32_t L_8 = V_2;
		int32_t L_9 = V_3;
		BoundsU5BU2CU5D_t319* L_10 = (BoundsU5BU2CU5D_t319*)GenArrayNew2(BoundsU5BU2CU5D_t319_il2cpp_TypeInfo_var, L_8, L_9);
		V_4 = L_10;
		int32_t L_11 = V_3;
		V_5 = ((BoundsU5BU5D_t320*)SZArrayNew(BoundsU5BU5D_t320_il2cpp_TypeInfo_var, L_11));
		int32_t L_12 = V_2;
		V_6 = ((BoundsU5BU5D_t320*)SZArrayNew(BoundsU5BU5D_t320_il2cpp_TypeInfo_var, L_12));
		V_7 = 0;
		V_8 = 0;
		V_9 = 0;
		List_1_t144 * L_13 = ___children;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count() */, L_13);
		V_10 = L_14;
		goto IL_011b;
	}

IL_007b:
	{
		List_1_t144 * L_15 = ___children;
		int32_t L_16 = V_9;
		NullCheck(L_15);
		Transform_t8 * L_17 = (Transform_t8 *)VirtFuncInvoker1< Transform_t8 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32) */, L_15, L_16);
		V_11 = L_17;
		Transform_t8 * L_18 = V_11;
		Bounds_t113  L_19 = NGUIMath_CalculateRelativeWidgetBounds_m535(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_12 = L_19;
		Transform_t8 * L_20 = V_11;
		NullCheck(L_20);
		Vector3_t48  L_21 = Transform_get_localScale_m1264(L_20, /*hidden argument*/NULL);
		V_13 = L_21;
		Vector3_t48  L_22 = Bounds_get_min_m1455((&V_12), /*hidden argument*/NULL);
		Vector3_t48  L_23 = V_13;
		Vector3_t48  L_24 = Vector3_Scale_m1411(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		Bounds_set_min_m1502((&V_12), L_24, /*hidden argument*/NULL);
		Vector3_t48  L_25 = Bounds_get_max_m1456((&V_12), /*hidden argument*/NULL);
		Vector3_t48  L_26 = V_13;
		Vector3_t48  L_27 = Vector3_Scale_m1411(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		Bounds_set_max_m1503((&V_12), L_27, /*hidden argument*/NULL);
		BoundsU5BU2CU5D_t319* L_28 = V_4;
		int32_t L_29 = V_8;
		int32_t L_30 = V_7;
		Bounds_t113  L_31 = V_12;
		NullCheck(L_28);
		GenArraySet2(L_28, L_29, L_30, L_31, Bounds_t113 );;
		BoundsU5BU5D_t320* L_32 = V_5;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		Bounds_t113  L_34 = V_12;
		Bounds_Encapsulate_m1504(((Bounds_t113 *)(Bounds_t113 *)SZArrayLdElema(L_32, L_33)), L_34, /*hidden argument*/NULL);
		BoundsU5BU5D_t320* L_35 = V_6;
		int32_t L_36 = V_8;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		Bounds_t113  L_37 = V_12;
		Bounds_Encapsulate_m1504(((Bounds_t113 *)(Bounds_t113 *)SZArrayLdElema(L_35, L_36)), L_37, /*hidden argument*/NULL);
		int32_t L_38 = V_7;
		int32_t L_39 = ((int32_t)((int32_t)L_38+(int32_t)1));
		V_7 = L_39;
		int32_t L_40 = (__this->___columns_2);
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_41 = (__this->___columns_2);
		if ((((int32_t)L_41) <= ((int32_t)0)))
		{
			goto IL_0115;
		}
	}
	{
		V_7 = 0;
		int32_t L_42 = V_8;
		V_8 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_0115:
	{
		int32_t L_43 = V_9;
		V_9 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_011b:
	{
		int32_t L_44 = V_9;
		int32_t L_45 = V_10;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_007b;
		}
	}
	{
		V_7 = 0;
		V_8 = 0;
		V_14 = 0;
		List_1_t144 * L_46 = ___children;
		NullCheck(L_46);
		int32_t L_47 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count() */, L_46);
		V_15 = L_47;
		goto IL_03a1;
	}

IL_013a:
	{
		List_1_t144 * L_48 = ___children;
		int32_t L_49 = V_14;
		NullCheck(L_48);
		Transform_t8 * L_50 = (Transform_t8 *)VirtFuncInvoker1< Transform_t8 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32) */, L_48, L_49);
		V_16 = L_50;
		BoundsU5BU2CU5D_t319* L_51 = V_4;
		int32_t L_52 = V_8;
		int32_t L_53 = V_7;
		NullCheck(L_51);
		Bounds_t113  L_54 = GenArrayGet2(L_51, L_52, L_53, Bounds_t113 );;
		V_17 = L_54;
		BoundsU5BU5D_t320* L_55 = V_5;
		int32_t L_56 = V_7;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		V_18 = (*(Bounds_t113 *)((Bounds_t113 *)(Bounds_t113 *)SZArrayLdElema(L_55, L_56)));
		BoundsU5BU5D_t320* L_57 = V_6;
		int32_t L_58 = V_8;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		V_19 = (*(Bounds_t113 *)((Bounds_t113 *)(Bounds_t113 *)SZArrayLdElema(L_57, L_58)));
		Transform_t8 * L_59 = V_16;
		NullCheck(L_59);
		Vector3_t48  L_60 = Transform_get_localPosition_m1263(L_59, /*hidden argument*/NULL);
		V_20 = L_60;
		float L_61 = V_0;
		Vector3_t48  L_62 = Bounds_get_extents_m1505((&V_17), /*hidden argument*/NULL);
		V_21 = L_62;
		float L_63 = ((&V_21)->___x_1);
		Vector3_t48  L_64 = Bounds_get_center_m1440((&V_17), /*hidden argument*/NULL);
		V_22 = L_64;
		float L_65 = ((&V_22)->___x_1);
		(&V_20)->___x_1 = ((float)((float)((float)((float)L_61+(float)L_63))-(float)L_65));
		Vector3_t48 * L_66 = (&V_20);
		float L_67 = (L_66->___x_1);
		Vector3_t48  L_68 = Bounds_get_min_m1455((&V_17), /*hidden argument*/NULL);
		V_23 = L_68;
		float L_69 = ((&V_23)->___x_1);
		Vector3_t48  L_70 = Bounds_get_min_m1455((&V_18), /*hidden argument*/NULL);
		V_24 = L_70;
		float L_71 = ((&V_24)->___x_1);
		Vector2_t55 * L_72 = &(__this->___padding_4);
		float L_73 = (L_72->___x_1);
		L_66->___x_1 = ((float)((float)L_67+(float)((float)((float)((float)((float)L_69-(float)L_71))+(float)L_73))));
		int32_t L_74 = (__this->___direction_3);
		if (L_74)
		{
			goto IL_027d;
		}
	}
	{
		float L_75 = V_1;
		Vector3_t48  L_76 = Bounds_get_extents_m1505((&V_17), /*hidden argument*/NULL);
		V_25 = L_76;
		float L_77 = ((&V_25)->___y_2);
		Vector3_t48  L_78 = Bounds_get_center_m1440((&V_17), /*hidden argument*/NULL);
		V_26 = L_78;
		float L_79 = ((&V_26)->___y_2);
		(&V_20)->___y_2 = ((float)((float)((float)((float)((-L_75))-(float)L_77))-(float)L_79));
		Vector3_t48 * L_80 = (&V_20);
		float L_81 = (L_80->___y_2);
		Vector3_t48  L_82 = Bounds_get_max_m1456((&V_17), /*hidden argument*/NULL);
		V_27 = L_82;
		float L_83 = ((&V_27)->___y_2);
		Vector3_t48  L_84 = Bounds_get_min_m1455((&V_17), /*hidden argument*/NULL);
		V_28 = L_84;
		float L_85 = ((&V_28)->___y_2);
		Vector3_t48  L_86 = Bounds_get_max_m1456((&V_19), /*hidden argument*/NULL);
		V_29 = L_86;
		float L_87 = ((&V_29)->___y_2);
		Vector3_t48  L_88 = Bounds_get_min_m1455((&V_19), /*hidden argument*/NULL);
		V_30 = L_88;
		float L_89 = ((&V_30)->___y_2);
		Vector2_t55 * L_90 = &(__this->___padding_4);
		float L_91 = (L_90->___y_2);
		L_80->___y_2 = ((float)((float)L_81+(float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_83-(float)L_85))-(float)L_87))+(float)L_89))*(float)(0.5f)))-(float)L_91))));
		goto IL_030a;
	}

IL_027d:
	{
		float L_92 = V_1;
		Vector3_t48  L_93 = Bounds_get_extents_m1505((&V_17), /*hidden argument*/NULL);
		V_31 = L_93;
		float L_94 = ((&V_31)->___y_2);
		Vector3_t48  L_95 = Bounds_get_center_m1440((&V_17), /*hidden argument*/NULL);
		V_32 = L_95;
		float L_96 = ((&V_32)->___y_2);
		(&V_20)->___y_2 = ((float)((float)((float)((float)L_92+(float)L_94))-(float)L_96));
		Vector3_t48 * L_97 = (&V_20);
		float L_98 = (L_97->___y_2);
		Vector3_t48  L_99 = Bounds_get_max_m1456((&V_17), /*hidden argument*/NULL);
		V_33 = L_99;
		float L_100 = ((&V_33)->___y_2);
		Vector3_t48  L_101 = Bounds_get_min_m1455((&V_17), /*hidden argument*/NULL);
		V_34 = L_101;
		float L_102 = ((&V_34)->___y_2);
		Vector3_t48  L_103 = Bounds_get_max_m1456((&V_19), /*hidden argument*/NULL);
		V_35 = L_103;
		float L_104 = ((&V_35)->___y_2);
		Vector3_t48  L_105 = Bounds_get_min_m1455((&V_19), /*hidden argument*/NULL);
		V_36 = L_105;
		float L_106 = ((&V_36)->___y_2);
		Vector2_t55 * L_107 = &(__this->___padding_4);
		float L_108 = (L_107->___y_2);
		L_97->___y_2 = ((float)((float)L_98+(float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_100-(float)L_102))-(float)L_104))+(float)L_106))*(float)(0.5f)))-(float)L_108))));
	}

IL_030a:
	{
		float L_109 = V_0;
		Vector3_t48  L_110 = Bounds_get_max_m1456((&V_18), /*hidden argument*/NULL);
		V_37 = L_110;
		float L_111 = ((&V_37)->___x_1);
		Vector3_t48  L_112 = Bounds_get_min_m1455((&V_18), /*hidden argument*/NULL);
		V_38 = L_112;
		float L_113 = ((&V_38)->___x_1);
		Vector2_t55 * L_114 = &(__this->___padding_4);
		float L_115 = (L_114->___x_1);
		V_0 = ((float)((float)L_109+(float)((float)((float)((float)((float)L_111-(float)L_113))+(float)((float)((float)L_115*(float)(2.0f)))))));
		Transform_t8 * L_116 = V_16;
		Vector3_t48  L_117 = V_20;
		NullCheck(L_116);
		Transform_set_localPosition_m1265(L_116, L_117, /*hidden argument*/NULL);
		int32_t L_118 = V_7;
		int32_t L_119 = ((int32_t)((int32_t)L_118+(int32_t)1));
		V_7 = L_119;
		int32_t L_120 = (__this->___columns_2);
		if ((((int32_t)L_119) < ((int32_t)L_120)))
		{
			goto IL_039b;
		}
	}
	{
		int32_t L_121 = (__this->___columns_2);
		if ((((int32_t)L_121) <= ((int32_t)0)))
		{
			goto IL_039b;
		}
	}
	{
		V_7 = 0;
		int32_t L_122 = V_8;
		V_8 = ((int32_t)((int32_t)L_122+(int32_t)1));
		V_0 = (0.0f);
		float L_123 = V_1;
		Vector3_t48  L_124 = Bounds_get_size_m1280((&V_19), /*hidden argument*/NULL);
		V_39 = L_124;
		float L_125 = ((&V_39)->___y_2);
		Vector2_t55 * L_126 = &(__this->___padding_4);
		float L_127 = (L_126->___y_2);
		V_1 = ((float)((float)L_123+(float)((float)((float)L_125+(float)((float)((float)L_127*(float)(2.0f)))))));
	}

IL_039b:
	{
		int32_t L_128 = V_14;
		V_14 = ((int32_t)((int32_t)L_128+(int32_t)1));
	}

IL_03a1:
	{
		int32_t L_129 = V_14;
		int32_t L_130 = V_15;
		if ((((int32_t)L_129) < ((int32_t)L_130)))
		{
			goto IL_013a;
		}
	}
	{
		return;
	}
}
// System.Void UITable::Reposition()
extern "C" void UITable_Reposition_m439 (UITable_t145 * __this, const MethodInfo* method)
{
	Transform_t8 * V_0 = {0};
	List_1_t144 * V_1 = {0};
	{
		bool L_0 = (__this->___mStarted_12);
		if (!L_0)
		{
			goto IL_00a0;
		}
	}
	{
		Transform_t8 * L_1 = Component_get_transform_m1253(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t144 * L_2 = (__this->___mChildren_13);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(20 /* System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Clear() */, L_2);
		List_1_t144 * L_3 = UITable_get_children_m437(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		List_1_t144 * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count() */, L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		List_1_t144 * L_6 = V_1;
		UITable_RepositionVariableSize_m438(__this, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		UIDraggablePanel_t100 * L_7 = (__this->___mDrag_11);
		bool L_8 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_7, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		UIDraggablePanel_t100 * L_9 = (__this->___mDrag_11);
		NullCheck(L_9);
		UIDraggablePanel_UpdateScrollbars_m303(L_9, 1, /*hidden argument*/NULL);
		UIDraggablePanel_t100 * L_10 = (__this->___mDrag_11);
		NullCheck(L_10);
		UIDraggablePanel_RestrictWithinBounds_m301(L_10, 1, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_0066:
	{
		UIPanel_t110 * L_11 = (__this->___mPanel_10);
		bool L_12 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_11, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0085;
		}
	}
	{
		UIPanel_t110 * L_13 = (__this->___mPanel_10);
		Transform_t8 * L_14 = V_0;
		NullCheck(L_13);
		UIPanel_ConstrainTargetToBounds_m1038(L_13, L_14, 1, /*hidden argument*/NULL);
	}

IL_0085:
	{
		OnReposition_t143 * L_15 = (__this->___onReposition_9);
		if (!L_15)
		{
			goto IL_009b;
		}
	}
	{
		OnReposition_t143 * L_16 = (__this->___onReposition_9);
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(11 /* System.Void UITable/OnReposition::Invoke() */, L_16);
	}

IL_009b:
	{
		goto IL_00a7;
	}

IL_00a0:
	{
		__this->___repositionNow_7 = 1;
	}

IL_00a7:
	{
		return;
	}
}
// System.Void UITable::Start()
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* NGUITools_FindInParents_TisUIPanel_t110_m1426_MethodInfo_var;
extern const MethodInfo* NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var;
extern "C" void UITable_Start_m440 (UITable_t145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		NGUITools_FindInParents_TisUIPanel_t110_m1426_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483701);
		NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___mStarted_12 = 1;
		bool L_0 = (__this->___keepWithinPanel_8);
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		UIPanel_t110 * L_2 = NGUITools_FindInParents_TisUIPanel_t110_m1426(NULL /*static, unused*/, L_1, /*hidden argument*/NGUITools_FindInParents_TisUIPanel_t110_m1426_MethodInfo_var);
		__this->___mPanel_10 = L_2;
		GameObject_t17 * L_3 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		UIDraggablePanel_t100 * L_4 = NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415(NULL /*static, unused*/, L_3, /*hidden argument*/NGUITools_FindInParents_TisUIDraggablePanel_t100_m1415_MethodInfo_var);
		__this->___mDrag_11 = L_4;
	}

IL_0034:
	{
		UITable_Reposition_m439(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UITable::LateUpdate()
extern "C" void UITable_LateUpdate_m441 (UITable_t145 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___repositionNow_7);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		__this->___repositionNow_7 = 0;
		UITable_Reposition_m439(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// ActiveAnimation/OnFinished
#include "AssemblyU2DCSharp_ActiveAnimation_OnFinishedMethodDeclarations.h"



// System.Void ActiveAnimation/OnFinished::.ctor(System.Object,System.IntPtr)
extern "C" void OnFinished__ctor_m442 (OnFinished_t90 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void ActiveAnimation/OnFinished::Invoke(ActiveAnimation)
extern "C" void OnFinished_Invoke_m443 (OnFinished_t90 * __this, ActiveAnimation_t146 * ___anim, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnFinished_Invoke_m443((OnFinished_t90 *)__this->___prev_9,___anim, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, ActiveAnimation_t146 * ___anim, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___anim,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, ActiveAnimation_t146 * ___anim, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___anim,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___anim,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_OnFinished_t90(Il2CppObject* delegate, ActiveAnimation_t146 * ___anim)
{
	// Marshaling of parameter '___anim' to native representation
	ActiveAnimation_t146 * ____anim_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'ActiveAnimation'."));
}
// System.IAsyncResult ActiveAnimation/OnFinished::BeginInvoke(ActiveAnimation,System.AsyncCallback,System.Object)
extern "C" Object_t * OnFinished_BeginInvoke_m444 (OnFinished_t90 * __this, ActiveAnimation_t146 * ___anim, AsyncCallback_t72 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___anim;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void ActiveAnimation/OnFinished::EndInvoke(System.IAsyncResult)
extern "C" void OnFinished_EndInvoke_m445 (OnFinished_t90 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

struct GameObject_t17;
struct UIPanelU5BU5D_t248;
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<UIPanel>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UIPanel>()
#define GameObject_GetComponentsInChildren_TisUIPanel_t110_m1506(__this, method) (( UIPanelU5BU5D_t248* (*) (GameObject_t17 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m1405_gshared)(__this, method)
struct Component_t107;
struct ActiveAnimation_t146;
// Declaration !!0 UnityEngine.Component::GetComponent<ActiveAnimation>()
// !!0 UnityEngine.Component::GetComponent<ActiveAnimation>()
#define Component_GetComponent_TisActiveAnimation_t146_m1507(__this, method) (( ActiveAnimation_t146 * (*) (Component_t107 *, const MethodInfo*))Component_GetComponent_TisObject_t_m1241_gshared)(__this, method)
struct GameObject_t17;
struct ActiveAnimation_t146;
// Declaration !!0 UnityEngine.GameObject::AddComponent<ActiveAnimation>()
// !!0 UnityEngine.GameObject::AddComponent<ActiveAnimation>()
#define GameObject_AddComponent_TisActiveAnimation_t146_m1508(__this, method) (( ActiveAnimation_t146 * (*) (GameObject_t17 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m1243_gshared)(__this, method)


// System.Void ActiveAnimation::.ctor()
extern "C" void ActiveAnimation__ctor_m446 (ActiveAnimation_t146 * __this, const MethodInfo* method)
{
	{
		IgnoreTimeScale__ctor_m491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ActiveAnimation::get_isPlaying()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* AnimationState_t305_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" bool ActiveAnimation_get_isPlaying_m447 (ActiveAnimation_t146 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		AnimationState_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	AnimationState_t305 * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Animation_t56 * L_0 = (__this->___mAnim_10);
		bool L_1 = Object_op_Equality_m1245(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		Animation_t56 * L_2 = (__this->___mAnim_10);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator() */, L_2);
		V_1 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a3;
		}

IL_0024:
		{
			Object_t * L_4 = V_1;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_4);
			V_0 = ((AnimationState_t305 *)Castclass(L_5, AnimationState_t305_il2cpp_TypeInfo_var));
			Animation_t56 * L_6 = (__this->___mAnim_10);
			AnimationState_t305 * L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = AnimationState_get_name_m1509(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_9 = Animation_IsPlaying_m1510(L_6, L_8, /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_00a3;
		}

IL_004b:
		{
			int32_t L_10 = (__this->___mLastDirection_11);
			if ((!(((uint32_t)L_10) == ((uint32_t)1))))
			{
				goto IL_0074;
			}
		}

IL_0057:
		{
			AnimationState_t305 * L_11 = V_0;
			NullCheck(L_11);
			float L_12 = AnimationState_get_time_m1511(L_11, /*hidden argument*/NULL);
			AnimationState_t305 * L_13 = V_0;
			NullCheck(L_13);
			float L_14 = AnimationState_get_length_m1512(L_13, /*hidden argument*/NULL);
			if ((!(((float)L_12) < ((float)L_14))))
			{
				goto IL_006f;
			}
		}

IL_0068:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0xC7, FINALLY_00b3);
		}

IL_006f:
		{
			goto IL_00a3;
		}

IL_0074:
		{
			int32_t L_15 = (__this->___mLastDirection_11);
			if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
			{
				goto IL_009c;
			}
		}

IL_0080:
		{
			AnimationState_t305 * L_16 = V_0;
			NullCheck(L_16);
			float L_17 = AnimationState_get_time_m1511(L_16, /*hidden argument*/NULL);
			if ((!(((float)L_17) > ((float)(0.0f)))))
			{
				goto IL_0097;
			}
		}

IL_0090:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0xC7, FINALLY_00b3);
		}

IL_0097:
		{
			goto IL_00a3;
		}

IL_009c:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0xC7, FINALLY_00b3);
		}

IL_00a3:
		{
			Object_t * L_18 = V_1;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0024;
			}
		}

IL_00ae:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00b3;
	}

FINALLY_00b3:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_1;
			V_3 = ((Object_t *)IsInst(L_20, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_3;
			if (L_21)
			{
				goto IL_00be;
			}
		}

IL_00bd:
		{
			IL2CPP_END_FINALLY(179)
		}

IL_00be:
		{
			Object_t * L_22 = V_3;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(179)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(179)
	{
		IL2CPP_JUMP_TBL(0xC7, IL_00c7)
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00c5:
	{
		return 0;
	}

IL_00c7:
	{
		bool L_23 = V_2;
		return L_23;
	}
}
// System.Void ActiveAnimation::Reset()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* AnimationState_t305_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ActiveAnimation_Reset_m448 (ActiveAnimation_t146 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		AnimationState_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	AnimationState_t305 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Animation_t56 * L_0 = (__this->___mAnim_10);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Animation_t56 * L_2 = (__this->___mAnim_10);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator() */, L_2);
		V_1 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0062;
		}

IL_0022:
		{
			Object_t * L_4 = V_1;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_4);
			V_0 = ((AnimationState_t305 *)Castclass(L_5, AnimationState_t305_il2cpp_TypeInfo_var));
			int32_t L_6 = (__this->___mLastDirection_11);
			if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
			{
				goto IL_004b;
			}
		}

IL_003a:
		{
			AnimationState_t305 * L_7 = V_0;
			AnimationState_t305 * L_8 = V_0;
			NullCheck(L_8);
			float L_9 = AnimationState_get_length_m1512(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			AnimationState_set_time_m1513(L_7, L_9, /*hidden argument*/NULL);
			goto IL_0062;
		}

IL_004b:
		{
			int32_t L_10 = (__this->___mLastDirection_11);
			if ((!(((uint32_t)L_10) == ((uint32_t)1))))
			{
				goto IL_0062;
			}
		}

IL_0057:
		{
			AnimationState_t305 * L_11 = V_0;
			NullCheck(L_11);
			AnimationState_set_time_m1513(L_11, (0.0f), /*hidden argument*/NULL);
		}

IL_0062:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0022;
			}
		}

IL_006d:
		{
			IL2CPP_LEAVE(0x84, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_2 = ((Object_t *)IsInst(L_14, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_2;
			if (L_15)
			{
				goto IL_007d;
			}
		}

IL_007c:
		{
			IL2CPP_END_FINALLY(114)
		}

IL_007d:
		{
			Object_t * L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(114)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_0084:
	{
		return;
	}
}
// System.Void ActiveAnimation::Update()
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* AnimationState_t305_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern "C" void ActiveAnimation_Update_m449 (ActiveAnimation_t146 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		AnimationState_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	AnimationState_t305 * V_2 = {0};
	Object_t * V_3 = {0};
	float V_4 = 0.0f;
	Object_t * V_5 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		float L_0 = IgnoreTimeScale_UpdateRealTimeDelta_m495(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Animation_t56 * L_2 = (__this->___mAnim_10);
		bool L_3 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_2, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0196;
		}
	}
	{
		V_1 = 0;
		Animation_t56 * L_4 = (__this->___mAnim_10);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator() */, L_4);
		V_3 = L_5;
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ce;
		}

IL_0037:
		{
			Object_t * L_6 = V_3;
			NullCheck(L_6);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_6);
			V_2 = ((AnimationState_t305 *)Castclass(L_7, AnimationState_t305_il2cpp_TypeInfo_var));
			Animation_t56 * L_8 = (__this->___mAnim_10);
			AnimationState_t305 * L_9 = V_2;
			NullCheck(L_9);
			String_t* L_10 = AnimationState_get_name_m1509(L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			bool L_11 = Animation_IsPlaying_m1510(L_8, L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_005e;
			}
		}

IL_0059:
		{
			goto IL_00ce;
		}

IL_005e:
		{
			AnimationState_t305 * L_12 = V_2;
			NullCheck(L_12);
			float L_13 = AnimationState_get_speed_m1514(L_12, /*hidden argument*/NULL);
			float L_14 = V_0;
			V_4 = ((float)((float)L_13*(float)L_14));
			AnimationState_t305 * L_15 = V_2;
			AnimationState_t305 * L_16 = L_15;
			NullCheck(L_16);
			float L_17 = AnimationState_get_time_m1511(L_16, /*hidden argument*/NULL);
			float L_18 = V_4;
			NullCheck(L_16);
			AnimationState_set_time_m1513(L_16, ((float)((float)L_17+(float)L_18)), /*hidden argument*/NULL);
			float L_19 = V_4;
			if ((!(((float)L_19) < ((float)(0.0f)))))
			{
				goto IL_00aa;
			}
		}

IL_0083:
		{
			AnimationState_t305 * L_20 = V_2;
			NullCheck(L_20);
			float L_21 = AnimationState_get_time_m1511(L_20, /*hidden argument*/NULL);
			if ((!(((float)L_21) > ((float)(0.0f)))))
			{
				goto IL_009a;
			}
		}

IL_0093:
		{
			V_1 = 1;
			goto IL_00a5;
		}

IL_009a:
		{
			AnimationState_t305 * L_22 = V_2;
			NullCheck(L_22);
			AnimationState_set_time_m1513(L_22, (0.0f), /*hidden argument*/NULL);
		}

IL_00a5:
		{
			goto IL_00ce;
		}

IL_00aa:
		{
			AnimationState_t305 * L_23 = V_2;
			NullCheck(L_23);
			float L_24 = AnimationState_get_time_m1511(L_23, /*hidden argument*/NULL);
			AnimationState_t305 * L_25 = V_2;
			NullCheck(L_25);
			float L_26 = AnimationState_get_length_m1512(L_25, /*hidden argument*/NULL);
			if ((!(((float)L_24) < ((float)L_26))))
			{
				goto IL_00c2;
			}
		}

IL_00bb:
		{
			V_1 = 1;
			goto IL_00ce;
		}

IL_00c2:
		{
			AnimationState_t305 * L_27 = V_2;
			AnimationState_t305 * L_28 = V_2;
			NullCheck(L_28);
			float L_29 = AnimationState_get_length_m1512(L_28, /*hidden argument*/NULL);
			NullCheck(L_27);
			AnimationState_set_time_m1513(L_27, L_29, /*hidden argument*/NULL);
		}

IL_00ce:
		{
			Object_t * L_30 = V_3;
			NullCheck(L_30);
			bool L_31 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_0037;
			}
		}

IL_00d9:
		{
			IL2CPP_LEAVE(0xF3, FINALLY_00de);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_00de;
	}

FINALLY_00de:
	{ // begin finally (depth: 1)
		{
			Object_t * L_32 = V_3;
			V_5 = ((Object_t *)IsInst(L_32, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_33 = V_5;
			if (L_33)
			{
				goto IL_00eb;
			}
		}

IL_00ea:
		{
			IL2CPP_END_FINALLY(222)
		}

IL_00eb:
		{
			Object_t * L_34 = V_5;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_34);
			IL2CPP_END_FINALLY(222)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(222)
	{
		IL2CPP_JUMP_TBL(0xF3, IL_00f3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_00f3:
	{
		Animation_t56 * L_35 = (__this->___mAnim_10);
		NullCheck(L_35);
		Animation_Sample_m1515(L_35, /*hidden argument*/NULL);
		bool L_36 = V_1;
		if (!L_36)
		{
			goto IL_0105;
		}
	}
	{
		return;
	}

IL_0105:
	{
		Behaviour_set_enabled_m1272(__this, 0, /*hidden argument*/NULL);
		bool L_37 = (__this->___mNotify_13);
		if (!L_37)
		{
			goto IL_0191;
		}
	}
	{
		__this->___mNotify_13 = 0;
		OnFinished_t90 * L_38 = (__this->___onFinished_7);
		if (!L_38)
		{
			goto IL_0135;
		}
	}
	{
		OnFinished_t90 * L_39 = (__this->___onFinished_7);
		NullCheck(L_39);
		VirtActionInvoker1< ActiveAnimation_t146 * >::Invoke(11 /* System.Void ActiveAnimation/OnFinished::Invoke(ActiveAnimation) */, L_39, __this);
	}

IL_0135:
	{
		GameObject_t17 * L_40 = (__this->___eventReceiver_8);
		bool L_41 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_40, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0169;
		}
	}
	{
		String_t* L_42 = (__this->___callWhenFinished_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_0169;
		}
	}
	{
		GameObject_t17 * L_44 = (__this->___eventReceiver_8);
		String_t* L_45 = (__this->___callWhenFinished_9);
		NullCheck(L_44);
		GameObject_SendMessage_m1406(L_44, L_45, __this, 1, /*hidden argument*/NULL);
	}

IL_0169:
	{
		int32_t L_46 = (__this->___mDisableDirection_12);
		if (!L_46)
		{
			goto IL_0191;
		}
	}
	{
		int32_t L_47 = (__this->___mLastDirection_11);
		int32_t L_48 = (__this->___mDisableDirection_12);
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0191;
		}
	}
	{
		GameObject_t17 * L_49 = Component_get_gameObject_m1246(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_SetActive_m576(NULL /*static, unused*/, L_49, 0, /*hidden argument*/NULL);
	}

IL_0191:
	{
		goto IL_019d;
	}

IL_0196:
	{
		Behaviour_set_enabled_m1272(__this, 0, /*hidden argument*/NULL);
	}

IL_019d:
	{
		return;
	}
}
// System.Void ActiveAnimation::Play(System.String,AnimationOrTween.Direction)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t288_il2cpp_TypeInfo_var;
extern TypeInfo* AnimationState_t305_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t299_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t307_il2cpp_TypeInfo_var;
extern "C" void ActiveAnimation_Play_m450 (ActiveAnimation_t146 * __this, String_t* ___clipName, int32_t ___playDirection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IEnumerator_t288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(44);
		AnimationState_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		Mathf_t299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		IDisposable_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	AnimationState_t305 * V_1 = {0};
	Object_t * V_2 = {0};
	float V_3 = 0.0f;
	Object_t * V_4 = {0};
	Exception_t306 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t306 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	{
		Animation_t56 * L_0 = (__this->___mAnim_10);
		bool L_1 = Object_op_Inequality_m1255(NULL /*static, unused*/, L_0, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0163;
		}
	}
	{
		Behaviour_set_enabled_m1272(__this, 1, /*hidden argument*/NULL);
		Animation_t56 * L_2 = (__this->___mAnim_10);
		NullCheck(L_2);
		Behaviour_set_enabled_m1272(L_2, 0, /*hidden argument*/NULL);
		int32_t L_3 = ___playDirection;
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_4 = (__this->___mLastDirection_11);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = (-1);
	}

IL_003d:
	{
		___playDirection = G_B5_0;
	}

IL_003f:
	{
		String_t* L_5 = ___clipName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		Animation_t56 * L_8 = (__this->___mAnim_10);
		NullCheck(L_8);
		bool L_9 = Animation_get_isPlaying_m1516(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0068;
		}
	}
	{
		Animation_t56 * L_10 = (__this->___mAnim_10);
		NullCheck(L_10);
		Animation_Play_m1517(L_10, /*hidden argument*/NULL);
	}

IL_0068:
	{
		goto IL_008b;
	}

IL_006d:
	{
		Animation_t56 * L_11 = (__this->___mAnim_10);
		String_t* L_12 = ___clipName;
		NullCheck(L_11);
		bool L_13 = Animation_IsPlaying_m1510(L_11, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_008b;
		}
	}
	{
		Animation_t56 * L_14 = (__this->___mAnim_10);
		String_t* L_15 = ___clipName;
		NullCheck(L_14);
		Animation_Play_m1346(L_14, L_15, /*hidden argument*/NULL);
	}

IL_008b:
	{
		Animation_t56 * L_16 = (__this->___mAnim_10);
		NullCheck(L_16);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator() */, L_16);
		V_2 = L_17;
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0125;
		}

IL_009c:
		{
			Object_t * L_18 = V_2;
			NullCheck(L_18);
			Object_t * L_19 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_18);
			V_1 = ((AnimationState_t305 *)Castclass(L_19, AnimationState_t305_il2cpp_TypeInfo_var));
			String_t* L_20 = ___clipName;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_21 = String_IsNullOrEmpty_m1270(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00c4;
			}
		}

IL_00b3:
		{
			AnimationState_t305 * L_22 = V_1;
			NullCheck(L_22);
			String_t* L_23 = AnimationState_get_name_m1509(L_22, /*hidden argument*/NULL);
			String_t* L_24 = ___clipName;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_25 = String_op_Equality_m1295(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_0125;
			}
		}

IL_00c4:
		{
			AnimationState_t305 * L_26 = V_1;
			NullCheck(L_26);
			float L_27 = AnimationState_get_speed_m1514(L_26, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Mathf_t299_il2cpp_TypeInfo_var);
			float L_28 = fabsf(L_27);
			V_3 = L_28;
			AnimationState_t305 * L_29 = V_1;
			float L_30 = V_3;
			int32_t L_31 = ___playDirection;
			NullCheck(L_29);
			AnimationState_set_speed_m1518(L_29, ((float)((float)L_30*(float)(((float)L_31)))), /*hidden argument*/NULL);
			int32_t L_32 = ___playDirection;
			if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
			{
				goto IL_0102;
			}
		}

IL_00e1:
		{
			AnimationState_t305 * L_33 = V_1;
			NullCheck(L_33);
			float L_34 = AnimationState_get_time_m1511(L_33, /*hidden argument*/NULL);
			if ((!(((float)L_34) == ((float)(0.0f)))))
			{
				goto IL_0102;
			}
		}

IL_00f1:
		{
			AnimationState_t305 * L_35 = V_1;
			AnimationState_t305 * L_36 = V_1;
			NullCheck(L_36);
			float L_37 = AnimationState_get_length_m1512(L_36, /*hidden argument*/NULL);
			NullCheck(L_35);
			AnimationState_set_time_m1513(L_35, L_37, /*hidden argument*/NULL);
			goto IL_0125;
		}

IL_0102:
		{
			int32_t L_38 = ___playDirection;
			if ((!(((uint32_t)L_38) == ((uint32_t)1))))
			{
				goto IL_0125;
			}
		}

IL_0109:
		{
			AnimationState_t305 * L_39 = V_1;
			NullCheck(L_39);
			float L_40 = AnimationState_get_time_m1511(L_39, /*hidden argument*/NULL);
			AnimationState_t305 * L_41 = V_1;
			NullCheck(L_41);
			float L_42 = AnimationState_get_length_m1512(L_41, /*hidden argument*/NULL);
			if ((!(((float)L_40) == ((float)L_42))))
			{
				goto IL_0125;
			}
		}

IL_011a:
		{
			AnimationState_t305 * L_43 = V_1;
			NullCheck(L_43);
			AnimationState_set_time_m1513(L_43, (0.0f), /*hidden argument*/NULL);
		}

IL_0125:
		{
			Object_t * L_44 = V_2;
			NullCheck(L_44);
			bool L_45 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t288_il2cpp_TypeInfo_var, L_44);
			if (L_45)
			{
				goto IL_009c;
			}
		}

IL_0130:
		{
			IL2CPP_LEAVE(0x14A, FINALLY_0135);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t306 *)e.ex;
		goto FINALLY_0135;
	}

FINALLY_0135:
	{ // begin finally (depth: 1)
		{
			Object_t * L_46 = V_2;
			V_4 = ((Object_t *)IsInst(L_46, IDisposable_t307_il2cpp_TypeInfo_var));
			Object_t * L_47 = V_4;
			if (L_47)
			{
				goto IL_0142;
			}
		}

IL_0141:
		{
			IL2CPP_END_FINALLY(309)
		}

IL_0142:
		{
			Object_t * L_48 = V_4;
			NullCheck(L_48);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t307_il2cpp_TypeInfo_var, L_48);
			IL2CPP_END_FINALLY(309)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(309)
	{
		IL2CPP_JUMP_TBL(0x14A, IL_014a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t306 *)
	}

IL_014a:
	{
		int32_t L_49 = ___playDirection;
		__this->___mLastDirection_11 = L_49;
		__this->___mNotify_13 = 1;
		Animation_t56 * L_50 = (__this->___mAnim_10);
		NullCheck(L_50);
		Animation_Sample_m1515(L_50, /*hidden argument*/NULL);
	}

IL_0163:
	{
		return;
	}
}
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction,AnimationOrTween.EnableCondition,AnimationOrTween.DisableCondition)
extern TypeInfo* NGUITools_t167_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponentsInChildren_TisUIPanel_t110_m1506_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisActiveAnimation_t146_m1507_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisActiveAnimation_t146_m1508_MethodInfo_var;
extern "C" ActiveAnimation_t146 * ActiveAnimation_Play_m451 (Object_t * __this /* static, unused */, Animation_t56 * ___anim, String_t* ___clipName, int32_t ___playDirection, int32_t ___enableBeforePlay, int32_t ___disableCondition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NGUITools_t167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		GameObject_GetComponentsInChildren_TisUIPanel_t110_m1506_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483741);
		Component_GetComponent_TisActiveAnimation_t146_m1507_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483742);
		GameObject_AddComponent_TisActiveAnimation_t146_m1508_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483743);
		s_Il2CppMethodIntialized = true;
	}
	UIPanelU5BU5D_t248* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ActiveAnimation_t146 * V_3 = {0};
	{
		Animation_t56 * L_0 = ___anim;
		NullCheck(L_0);
		GameObject_t17 * L_1 = Component_get_gameObject_m1246(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		bool L_2 = NGUITools_GetActive_m578(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = ___enableBeforePlay;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		return (ActiveAnimation_t146 *)NULL;
	}

IL_0019:
	{
		Animation_t56 * L_4 = ___anim;
		NullCheck(L_4);
		GameObject_t17 * L_5 = Component_get_gameObject_m1246(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t167_il2cpp_TypeInfo_var);
		NGUITools_SetActive_m576(NULL /*static, unused*/, L_5, 1, /*hidden argument*/NULL);
		Animation_t56 * L_6 = ___anim;
		NullCheck(L_6);
		GameObject_t17 * L_7 = Component_get_gameObject_m1246(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		UIPanelU5BU5D_t248* L_8 = GameObject_GetComponentsInChildren_TisUIPanel_t110_m1506(L_7, /*hidden argument*/GameObject_GetComponentsInChildren_TisUIPanel_t110_m1506_MethodInfo_var);
		V_0 = L_8;
		V_1 = 0;
		UIPanelU5BU5D_t248* L_9 = V_0;
		NullCheck(L_9);
		V_2 = (((int32_t)(((Array_t *)L_9)->max_length)));
		goto IL_0048;
	}

IL_003c:
	{
		UIPanelU5BU5D_t248* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(UIPanel_t110 **)(UIPanel_t110 **)SZArrayLdElema(L_10, L_12)));
		UIPanel_Refresh_m1035((*(UIPanel_t110 **)(UIPanel_t110 **)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_003c;
		}
	}

IL_004f:
	{
		Animation_t56 * L_16 = ___anim;
		NullCheck(L_16);
		ActiveAnimation_t146 * L_17 = Component_GetComponent_TisActiveAnimation_t146_m1507(L_16, /*hidden argument*/Component_GetComponent_TisActiveAnimation_t146_m1507_MethodInfo_var);
		V_3 = L_17;
		ActiveAnimation_t146 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m1245(NULL /*static, unused*/, L_18, (Object_t69 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006e;
		}
	}
	{
		Animation_t56 * L_20 = ___anim;
		NullCheck(L_20);
		GameObject_t17 * L_21 = Component_get_gameObject_m1246(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		ActiveAnimation_t146 * L_22 = GameObject_AddComponent_TisActiveAnimation_t146_m1508(L_21, /*hidden argument*/GameObject_AddComponent_TisActiveAnimation_t146_m1508_MethodInfo_var);
		V_3 = L_22;
	}

IL_006e:
	{
		ActiveAnimation_t146 * L_23 = V_3;
		Animation_t56 * L_24 = ___anim;
		NullCheck(L_23);
		L_23->___mAnim_10 = L_24;
		ActiveAnimation_t146 * L_25 = V_3;
		int32_t L_26 = ___disableCondition;
		NullCheck(L_25);
		L_25->___mDisableDirection_12 = L_26;
		ActiveAnimation_t146 * L_27 = V_3;
		NullCheck(L_27);
		L_27->___eventReceiver_8 = (GameObject_t17 *)NULL;
		ActiveAnimation_t146 * L_28 = V_3;
		NullCheck(L_28);
		L_28->___callWhenFinished_9 = (String_t*)NULL;
		ActiveAnimation_t146 * L_29 = V_3;
		NullCheck(L_29);
		L_29->___onFinished_7 = (OnFinished_t90 *)NULL;
		ActiveAnimation_t146 * L_30 = V_3;
		String_t* L_31 = ___clipName;
		int32_t L_32 = ___playDirection;
		NullCheck(L_30);
		ActiveAnimation_Play_m450(L_30, L_31, L_32, /*hidden argument*/NULL);
		ActiveAnimation_t146 * L_33 = V_3;
		return L_33;
	}
}
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction)
extern "C" ActiveAnimation_t146 * ActiveAnimation_Play_m452 (Object_t * __this /* static, unused */, Animation_t56 * ___anim, String_t* ___clipName, int32_t ___playDirection, const MethodInfo* method)
{
	{
		Animation_t56 * L_0 = ___anim;
		String_t* L_1 = ___clipName;
		int32_t L_2 = ___playDirection;
		ActiveAnimation_t146 * L_3 = ActiveAnimation_Play_m451(NULL /*static, unused*/, L_0, L_1, L_2, 0, 0, /*hidden argument*/NULL);
		return L_3;
	}
}
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,AnimationOrTween.Direction)
extern "C" ActiveAnimation_t146 * ActiveAnimation_Play_m453 (Object_t * __this /* static, unused */, Animation_t56 * ___anim, int32_t ___playDirection, const MethodInfo* method)
{
	{
		Animation_t56 * L_0 = ___anim;
		int32_t L_1 = ___playDirection;
		ActiveAnimation_t146 * L_2 = ActiveAnimation_Play_m451(NULL /*static, unused*/, L_0, (String_t*)NULL, L_1, 0, 0, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif
// AnimationOrTween.Trigger
#include "AssemblyU2DCSharp_AnimationOrTween_TriggerMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// AnimationOrTween.Direction
#include "AssemblyU2DCSharp_AnimationOrTween_DirectionMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// AnimationOrTween.EnableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_EnableConditionMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// AnimationOrTween.DisableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_DisableConditionMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
