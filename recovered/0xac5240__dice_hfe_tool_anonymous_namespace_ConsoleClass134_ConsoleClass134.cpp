#include <list>

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultStaticObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;

namespace { extern std::list<void*> myList; }

extern "C" void ctor_ac5240(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultStaticObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"deleteAll";
    *(void* volatile*)param_1 = (void*)0xc7e210;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 0;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 0;
    ((void**)param_1)[2] = uVar2;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 0;
    *(unsigned int*)((char*)param_1 + 0x2c) = 0;
    ((void**)param_1)[0x11] = (void*)"std::string";
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    myList.push_back(param_1);
}
} }
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass134_ConsoleClass134 (0xac5240)
