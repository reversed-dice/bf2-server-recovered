#include <list>

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;

namespace { extern std::list<void*> aiList; }

extern "C" void ctor_b0a800(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"getType";
    *(void* volatile*)param_1 = (void*)0xca0e10;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 1;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 0;
    ((void**)param_1)[2] = uVar2;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 0;
    *(unsigned int*)((char*)param_1 + 0x2c) = 0;
    ((void**)param_1)[0x11] = (void*)"KitType";
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    aiList.push_back(param_1);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass257_ConsoleClass257 (0xb0a800)
