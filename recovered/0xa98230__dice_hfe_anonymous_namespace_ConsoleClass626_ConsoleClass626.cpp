#include <string>
#include <list>

typedef unsigned int __attribute__((may_alias)) uint_ma;

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;
extern char DAT_00ba032b;
namespace { extern std::list<void*> gameList; }

extern "C" void ctor_a98230(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"sendCommand";
    *(void* volatile*)param_1 = (void*)0xc6cef0;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 1;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 0;
    ((void**)param_1)[2] = uVar2;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 1;
    *(unsigned int*)((char*)param_1 + 0x2c) = 9;
    ((void**)param_1)[0x11] = (void*)&DAT_00ba032b;
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    gameList.push_back(param_1);
    ((void**)param_1)[0x12] = (void*)"std::string";
    ((void**)param_1)[0x13] = (void*)"std::string";
    ((void**)param_1)[0x14] = (void*)"std::string";
    ((void**)param_1)[0x15] = (void*)"std::string";
    ((void**)param_1)[0x16] = (void*)"std::string";
    ((void**)param_1)[0x17] = (void*)"std::string";
    ((void**)param_1)[0x18] = (void*)"std::string";
    ((void**)param_1)[0x19] = (void*)"std::string";
    ((void**)param_1)[0x1a] = (void*)"std::string";
    *(uint_ma*)((char*)param_1 + 0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xe4) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xe8) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xec) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xf0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xf4) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xf8) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xfc) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0x100) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
}
} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass626_ConsoleClass626 (0xa98230)
