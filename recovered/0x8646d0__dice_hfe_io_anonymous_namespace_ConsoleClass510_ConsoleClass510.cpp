#include <string>
#include <list>

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultStaticObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;
extern char DAT_00ba032b;
namespace { extern std::list<void*> myList; }

extern "C" void ctor_8646d0(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultStaticObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"boolGet";
    *(void* volatile*)param_1 = (void*)0xbbd470;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 0;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 0;
    ((void**)param_1)[2] = uVar2;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 1;
    *(unsigned int*)((char*)param_1 + 0x2c) = 1;
    ((void**)param_1)[0x11] = (void*)&DAT_00ba032b;
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    myList.push_back(param_1);
    ((void**)param_1)[0x12] = (void*)"std::string";
    std::string typeName("std::string");
    *(unsigned int*)((char*)param_1 + 0xe0) = ~-(unsigned int)(typeName.compare("std::string") == 0);
}
} }
