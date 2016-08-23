#pragma once
#include <stdint.h>
// UpdateManager/OnUpdate
struct OnUpdate_t67;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3;
// System.Object
#include "mscorlib_System_Object.h"
// UpdateManager/UpdateEntry
struct  UpdateEntry_t68  : public Object_t
{
	// System.Int32 UpdateManager/UpdateEntry::index
	int32_t ___index_0;
	// UpdateManager/OnUpdate UpdateManager/UpdateEntry::func
	OnUpdate_t67 * ___func_1;
	// UnityEngine.MonoBehaviour UpdateManager/UpdateEntry::mb
	MonoBehaviour_t3 * ___mb_2;
	// System.Boolean UpdateManager/UpdateEntry::isMonoBehaviour
	bool ___isMonoBehaviour_3;
};
