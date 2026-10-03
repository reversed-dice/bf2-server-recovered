#include <list>

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;
extern char DAT_00ba030e;
namespace { extern std::list<void*> myList; }

extern "C" void ctor_afce90(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"buildDebugCollisionMeshes";
    *(void* volatile*)param_1 = (void*)0xc95f10;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 0;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 0;
    ((void**)param_1)[2] = uVar2;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 0;
    *(unsigned int*)((char*)param_1 + 0x2c) = 0;
    ((void**)param_1)[0x11] = (void*)&DAT_00ba030e;
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    myList.push_back(param_1);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass195_ConsoleClass195 (0xafce90)
