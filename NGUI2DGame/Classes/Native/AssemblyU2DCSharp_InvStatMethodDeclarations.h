#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InvStat
struct InvStat_t34;
// System.String
struct String_t;
// InvStat/Identifier
#include "AssemblyU2DCSharp_InvStat_Identifier.h"

// System.Void InvStat::.ctor()
extern "C" void InvStat__ctor_m59 (InvStat_t34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InvStat::GetName(InvStat/Identifier)
extern "C" String_t* InvStat_GetName_m60 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InvStat::GetDescription(InvStat/Identifier)
extern "C" String_t* InvStat_GetDescription_m61 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvStat::CompareArmor(InvStat,InvStat)
extern "C" int32_t InvStat_CompareArmor_m62 (Object_t * __this /* static, unused */, InvStat_t34 * ___a, InvStat_t34 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvStat::CompareWeapon(InvStat,InvStat)
extern "C" int32_t InvStat_CompareWeapon_m63 (Object_t * __this /* static, unused */, InvStat_t34 * ___a, InvStat_t34 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
