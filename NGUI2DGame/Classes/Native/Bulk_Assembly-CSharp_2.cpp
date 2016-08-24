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

// Validator
struct Validator_t172396982;
// System.String
struct String_t;
// WindowAutoYaw
struct WindowAutoYaw_t3382257894;
// WindowDragTilt
struct WindowDragTilt_t1404465963;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_Validator172396982.h"
#include "AssemblyU2DCSharp_Validator172396982MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Regex1803876613MethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Regex1803876613.h"
#include "mscorlib_System_ArgumentException3259014390.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687MethodDeclarations.h"
#include "mscorlib_System_Exception1927440687.h"
#include "AssemblyU2DCSharp_WindowAutoYaw3382257894.h"
#include "AssemblyU2DCSharp_WindowAutoYaw3382257894MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "AssemblyU2DCSharp_NGUITools2004302824MethodDeclarations.h"
#include "AssemblyU2DCSharp_UpdateManager_OnUpdate2310536555MethodDeclarations.h"
#include "AssemblyU2DCSharp_UpdateManager879649284MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Int322071877448.h"
#include "AssemblyU2DCSharp_UpdateManager_OnUpdate2310536555.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Camera189460977MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_WindowDragTilt1404465963.h"
#include "AssemblyU2DCSharp_WindowDragTilt1404465963MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "AssemblyU2DCSharp_NGUIMath221371675MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Validator::.ctor()
extern "C"  void Validator__ctor_m2252054365 (Validator_t172396982 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Validator::.cctor()
extern Il2CppClass* Validator_t172396982_il2cpp_TypeInfo_var;
extern const uint32_t Validator__cctor_m3261463672_MetadataUsageId;
extern "C"  void Validator__cctor_m3261463672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Validator__cctor_m3261463672_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Validator_t172396982 * L_0 = (Validator_t172396982 *)il2cpp_codegen_object_new(Validator_t172396982_il2cpp_TypeInfo_var);
		Validator__ctor_m2252054365(L_0, /*hidden argument*/NULL);
		((Validator_t172396982_StaticFields*)Validator_t172396982_il2cpp_TypeInfo_var->static_fields)->set_mValidationInstance_0(L_0);
		return;
	}
}
// System.Boolean Validator::IsValide(System.String,System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppClass* Regex_t1803876613_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1594393565;
extern Il2CppCodeGenString* _stringLiteral1379924604;
extern const uint32_t Validator_IsValide_m4174400556_MetadataUsageId;
extern "C"  bool Validator_IsValide_m4174400556 (Validator_t172396982 * __this, String_t* ___value0, String_t* ___minvalidepatterns1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Validator_IsValide_m4174400556_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Regex_t1803876613 * V_0 = NULL;
	ArgumentException_t3259014390 * V_1 = NULL;
	bool V_2 = false;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___minvalidepatterns1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_1 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1594393565, L_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
			Debug_Log_m920475918(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
			String_t* L_2 = ___minvalidepatterns1;
			Regex_t1803876613 * L_3 = (Regex_t1803876613 *)il2cpp_codegen_object_new(Regex_t1803876613_il2cpp_TypeInfo_var);
			Regex__ctor_m2930443103(L_3, L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			Regex_t1803876613 * L_4 = V_0;
			String_t* L_5 = ___value0;
			NullCheck(L_4);
			bool L_6 = Regex_IsMatch_m563118126(L_4, L_5, /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			goto IL_004e;
		}

IL_0027:
		{
			; // IL_0027: leave IL_004e
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1927440687 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t3259014390_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002c;
		throw e;
	}

CATCH_002c:
	{ // begin catch(System.ArgumentException)
		{
			V_1 = ((ArgumentException_t3259014390 *)__exception_local);
			ArgumentException_t3259014390 * L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_7);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_9 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1379924604, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
			Debug_Log_m920475918(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
			V_2 = (bool)0;
			goto IL_004e;
		}

IL_0049:
		{
			; // IL_0049: leave IL_004e
		}
	} // end catch (depth: 1)

IL_004e:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Void WindowAutoYaw::.ctor()
extern "C"  void WindowAutoYaw__ctor_m3664152079 (WindowAutoYaw_t3382257894 * __this, const MethodInfo* method)
{
	{
		__this->set_yawAmount_4((20.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindowAutoYaw::OnDisable()
extern "C"  void WindowAutoYaw_OnDisable_m78959674 (WindowAutoYaw_t3382257894 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = __this->get_mTrans_5();
		Quaternion_t4030073918  L_1 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localRotation_m2055111962(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindowAutoYaw::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* NGUITools_t2004302824_il2cpp_TypeInfo_var;
extern Il2CppClass* OnUpdate_t2310536555_il2cpp_TypeInfo_var;
extern const MethodInfo* WindowAutoYaw_CoroutineUpdate_m3178060461_MethodInfo_var;
extern const uint32_t WindowAutoYaw_Start_m2880500651_MetadataUsageId;
extern "C"  void WindowAutoYaw_Start_m2880500651 (WindowAutoYaw_t3382257894 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WindowAutoYaw_Start_m2880500651_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t189460977 * L_0 = __this->get_uiCamera_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameObject_get_layer_m725607808(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NGUITools_t2004302824_il2cpp_TypeInfo_var);
		Camera_t189460977 * L_4 = NGUITools_FindCameraForLayer_m1207452737(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_uiCamera_3(L_4);
	}

IL_0027:
	{
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		__this->set_mTrans_5(L_5);
		int32_t L_6 = __this->get_updateOrder_2();
		IntPtr_t L_7;
		L_7.set_m_value_0((void*)(void*)WindowAutoYaw_CoroutineUpdate_m3178060461_MethodInfo_var);
		OnUpdate_t2310536555 * L_8 = (OnUpdate_t2310536555 *)il2cpp_codegen_object_new(OnUpdate_t2310536555_il2cpp_TypeInfo_var);
		OnUpdate__ctor_m185589332(L_8, __this, L_7, /*hidden argument*/NULL);
		UpdateManager_AddCoroutine_m1924148155(NULL /*static, unused*/, __this, L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindowAutoYaw::CoroutineUpdate(System.Single)
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t WindowAutoYaw_CoroutineUpdate_m3178060461_MetadataUsageId;
extern "C"  void WindowAutoYaw_CoroutineUpdate_m3178060461 (WindowAutoYaw_t3382257894 * __this, float ___delta0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WindowAutoYaw_CoroutineUpdate_m3178060461_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Camera_t189460977 * L_0 = __this->get_uiCamera_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		Camera_t189460977 * L_2 = __this->get_uiCamera_3();
		Transform_t3275118058 * L_3 = __this->get_mTrans_5();
		NullCheck(L_3);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t2243707580  L_5 = Camera_WorldToViewportPoint_m1897251752(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Transform_t3275118058 * L_6 = __this->get_mTrans_5();
		float L_7 = (&V_0)->get_x_1();
		float L_8 = __this->get_yawAmount_4();
		Quaternion_t4030073918  L_9 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (0.0f), ((float)((float)((float)((float)((float)((float)L_7*(float)(2.0f)))-(float)(1.0f)))*(float)L_8)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localRotation_m2055111962(L_6, L_9, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return;
	}
}
// System.Void WindowDragTilt::.ctor()
extern "C"  void WindowDragTilt__ctor_m2212893564 (WindowDragTilt_t1404465963 * __this, const MethodInfo* method)
{
	{
		__this->set_degrees_3((30.0f));
		__this->set_mInit_7((bool)1);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindowDragTilt::Start()
extern Il2CppClass* OnUpdate_t2310536555_il2cpp_TypeInfo_var;
extern const MethodInfo* WindowDragTilt_CoroutineUpdate_m4284548736_MethodInfo_var;
extern const uint32_t WindowDragTilt_Start_m3663283896_MetadataUsageId;
extern "C"  void WindowDragTilt_Start_m3663283896 (WindowDragTilt_t1404465963 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WindowDragTilt_Start_m3663283896_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = __this->get_updateOrder_2();
		IntPtr_t L_1;
		L_1.set_m_value_0((void*)(void*)WindowDragTilt_CoroutineUpdate_m4284548736_MethodInfo_var);
		OnUpdate_t2310536555 * L_2 = (OnUpdate_t2310536555 *)il2cpp_codegen_object_new(OnUpdate_t2310536555_il2cpp_TypeInfo_var);
		OnUpdate__ctor_m185589332(L_2, __this, L_1, /*hidden argument*/NULL);
		UpdateManager_AddCoroutine_m1924148155(NULL /*static, unused*/, __this, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WindowDragTilt::OnEnable()
extern "C"  void WindowDragTilt_OnEnable_m2676420184 (WindowDragTilt_t1404465963 * __this, const MethodInfo* method)
{
	{
		__this->set_mInit_7((bool)1);
		return;
	}
}
// System.Void WindowDragTilt::CoroutineUpdate(System.Single)
extern "C"  void WindowDragTilt_CoroutineUpdate_m4284548736 (WindowDragTilt_t1404465963 * __this, float ___delta0, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_mInit_7();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		__this->set_mInit_7((bool)0);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		__this->set_mTrans_5(L_1);
		Transform_t3275118058 * L_2 = __this->get_mTrans_5();
		NullCheck(L_2);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		__this->set_mLastPos_4(L_3);
	}

IL_002f:
	{
		Transform_t3275118058 * L_4 = __this->get_mTrans_5();
		NullCheck(L_4);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = __this->get_mLastPos_4();
		Vector3_t2243707580  L_7 = Vector3_op_Subtraction_m2407545601(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Transform_t3275118058 * L_8 = __this->get_mTrans_5();
		NullCheck(L_8);
		Vector3_t2243707580  L_9 = Transform_get_position_m1104419803(L_8, /*hidden argument*/NULL);
		__this->set_mLastPos_4(L_9);
		float L_10 = __this->get_mAngle_6();
		float L_11 = (&V_0)->get_x_1();
		float L_12 = __this->get_degrees_3();
		__this->set_mAngle_6(((float)((float)L_10+(float)((float)((float)L_11*(float)L_12)))));
		float L_13 = __this->get_mAngle_6();
		float L_14 = ___delta0;
		float L_15 = NGUIMath_SpringLerp_m39593484(NULL /*static, unused*/, L_13, (0.0f), (20.0f), L_14, /*hidden argument*/NULL);
		__this->set_mAngle_6(L_15);
		Transform_t3275118058 * L_16 = __this->get_mTrans_5();
		float L_17 = __this->get_mAngle_6();
		Quaternion_t4030073918  L_18 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (0.0f), (0.0f), ((-L_17)), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localRotation_m2055111962(L_16, L_18, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
