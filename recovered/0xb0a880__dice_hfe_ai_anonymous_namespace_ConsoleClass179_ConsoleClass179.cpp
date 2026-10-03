#include <list>

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;
extern char DAT_00ca12e0;
namespace { extern std::list<void*> aiList; }

extern "C" void ctor_b0a880(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"lookControls";
    *(void* volatile*)param_1 = (void*)0xc9a2d0;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 1;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 2;
    ((void**)param_1)[2] = uVar2;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 0;
    *(unsigned int*)((char*)param_1 + 0x2c) = 0;
    ((void**)param_1)[0x11] = (void*)&DAT_00ca12e0;
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    aiList.push_back(param_1);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass179_ConsoleClass179 (0xb0a880)
