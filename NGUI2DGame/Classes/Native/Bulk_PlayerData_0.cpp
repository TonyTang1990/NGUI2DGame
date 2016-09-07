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
// System.String
struct String_t;
// ProtoBuf.IExtension
struct IExtension_t1221360786;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "PlayerData_U3CModuleU3E3783534214.h"
#include "PlayerData_U3CModuleU3E3783534214MethodDeclarations.h"
#include "PlayerData_NGUI2DGame_PlayerData4175080041.h"
#include "PlayerData_NGUI2DGame_PlayerData4175080041MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "protobufU2Dnet_ProtoBuf_Extensible597730409MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NGUI2DGame.PlayerData::.ctor()
extern Il2CppCodeGenString* _stringLiteral371857150;
extern const uint32_t PlayerData__ctor_m1179622856_MetadataUsageId;
extern "C"  void PlayerData__ctor_m1179622856 (PlayerData_t4175080041 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerData__ctor_m1179622856_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set__SceneName_0(_stringLiteral371857150);
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String NGUI2DGame.PlayerData::get_SceneName()
extern "C"  String_t* PlayerData_get_SceneName_m336014273 (PlayerData_t4175080041 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get__SceneName_0();
		return L_0;
	}
}
// System.Void NGUI2DGame.PlayerData::set_SceneName(System.String)
extern "C"  void PlayerData_set_SceneName_m1862411122 (PlayerData_t4175080041 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__SceneName_0(L_0);
		return;
	}
}
// System.Int32 NGUI2DGame.PlayerData::get_Scores()
extern "C"  int32_t PlayerData_get_Scores_m3776302840 (PlayerData_t4175080041 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__Scores_1();
		return L_0;
	}
}
// System.Void NGUI2DGame.PlayerData::set_Scores(System.Int32)
extern "C"  void PlayerData_set_Scores_m1537090011 (PlayerData_t4175080041 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__Scores_1(L_0);
		return;
	}
}
// System.Int32 NGUI2DGame.PlayerData::get_SpeedLevel()
extern "C"  int32_t PlayerData_get_SpeedLevel_m1263896524 (PlayerData_t4175080041 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__SpeedLevel_2();
		return L_0;
	}
}
// System.Void NGUI2DGame.PlayerData::set_SpeedLevel(System.Int32)
extern "C"  void PlayerData_set_SpeedLevel_m1029139341 (PlayerData_t4175080041 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__SpeedLevel_2(L_0);
		return;
	}
}
// ProtoBuf.IExtension NGUI2DGame.PlayerData::global::ProtoBuf.IExtensible.GetExtensionObject(System.Boolean)
extern "C"  Il2CppObject * PlayerData_globalU3AU3AProtoBuf_IExtensible_GetExtensionObject_m1011406769 (PlayerData_t4175080041 * __this, bool ___createIfMissing0, const MethodInfo* method)
{
	{
		Il2CppObject ** L_0 = __this->get_address_of_extensionObject_3();
		bool L_1 = ___createIfMissing0;
		Il2CppObject * L_2 = Extensible_GetExtensionObject_m873822746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
