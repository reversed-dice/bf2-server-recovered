#include <string>
#include <list>

typedef unsigned int __attribute__((may_alias)) uint_ma;

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;
extern char DAT_00ba030e;
extern char DAT_00ba8580;
extern char DAT_00ba8580;
extern char DAT_00ba8580;
namespace { extern std::list<void*> myList; }

extern "C" void ctor_886700(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"setDefaultNumberOfTicketsEx";
    *(void* volatile*)param_1 = (void*)0xbc6730;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 0;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 0;
    ((void**)param_1)[2] = uVar2;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 3;
    *(unsigned int*)((char*)param_1 + 0x2c) = 3;
    ((void**)param_1)[0x11] = (void*)&DAT_00ba030e;
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    myList.push_back(param_1);
    ((void**)param_1)[0x12] = (void*)&DAT_00ba8580;
    ((void**)param_1)[0x13] = (void*)&DAT_00ba8580;
    ((void**)param_1)[0x14] = (void*)&DAT_00ba8580;
    *(uint_ma*)((char*)param_1 + 0xe0) = ~-(unsigned int)(std::string(&DAT_00ba8580).compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xe4) = ~-(unsigned int)(std::string(&DAT_00ba8580).compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xe8) = ~-(unsigned int)(std::string(&DAT_00ba8580).compare("std::string") == 0);
}
} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass206_ConsoleClass206 (0x886700)
