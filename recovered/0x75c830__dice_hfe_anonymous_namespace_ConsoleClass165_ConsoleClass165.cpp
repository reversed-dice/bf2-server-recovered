#include <string>
#include <list>

typedef unsigned int __attribute__((may_alias)) uint_ma;

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;

namespace { extern std::list<void*> soundList; }

extern "C" void ctor_75c830(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"initialize";
    *(void* volatile*)param_1 = (void*)0xb9de90;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 0;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 0;
    ((void**)param_1)[2] = uVar2;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 3;
    *(unsigned int*)((char*)param_1 + 0x2c) = 3;
    ((void**)param_1)[0x11] = (void*)"SoundInitResult";
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    soundList.push_back(param_1);
    ((void**)param_1)[0x12] = (void*)"int";
    ((void**)param_1)[0x13] = (void*)"std::string";
    ((void**)param_1)[0x14] = (void*)"int";
    *(uint_ma*)((char*)param_1 + 0xe0) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xe4) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xe8) = ~-(unsigned int)(std::string("int").compare("std::string") == 0);
}
} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass165_ConsoleClass165 (0x75c830)
