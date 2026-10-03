#include <string>
#include <list>

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;
extern char DAT_00ba032b;
namespace { extern std::list<void*> soundList; }

void ctor_a94a00(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"tkPunishEnabled";
    *(void* volatile*)param_1 = (void*)0xc702f0;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 1;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 1;
    ((void**)param_1)[2] = uVar2;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 0;
    *(unsigned int*)((char*)param_1 + 0x2c) = 1;
    ((void**)param_1)[0x11] = (void*)&DAT_00ba032b;
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    soundList.push_back(param_1);
    ((void**)param_1)[0x12] = (void*)&DAT_00ba032b;
    std::string typeName(&DAT_00ba032b);
    *(unsigned int*)((char*)param_1 + 0xe0) = ~-(unsigned int)(typeName.compare("std::string") == 0);
}
} }
