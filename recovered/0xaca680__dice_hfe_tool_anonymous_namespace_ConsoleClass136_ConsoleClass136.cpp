#define private public
#include <string>
#undef private
#include <list>

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultStaticObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;

namespace { extern std::list<void*> myList; }

extern "C" void ctor_aca680(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultStaticObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"printScript";
    *(void* volatile*)param_1 = (void*)0xc7e590;
    *(void* volatile*)((char*)param_1 + 0x110) = (void*)std::string::_Rep::_S_empty_rep()._M_refdata();
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 0;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 0;
    ((void**)param_1)[2] = uVar2;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 0;
    *(unsigned int*)((char*)param_1 + 0x2c) = 1;
    ((void**)param_1)[0x11] = (void*)"std::string";
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    myList.push_back(param_1);
    ((void**)param_1)[0x12] = (void*)"world::IObject_ptrproxy";
    std::string typeName("world::IObject_ptrproxy");
    *(unsigned int*)((char*)param_1 + 0xe0) = ~-(unsigned int)(typeName.compare("std::string") == 0);
}
} }
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass136_ConsoleClass136 (0xaca680)
