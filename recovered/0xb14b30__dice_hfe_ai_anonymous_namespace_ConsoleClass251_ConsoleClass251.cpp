#define private public
#include <string>
#undef private
#include <list>

typedef unsigned int __attribute__((may_alias)) uint_ma;

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;

namespace { extern std::list<void*> aiList; }

extern "C" void ctor_b14b30(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"create";
    *(void* volatile*)param_1 = (void*)0xca0450;
    *(void* volatile*)((char*)param_1 + 0x110) = (void*)std::string::_Rep::_S_empty_rep()._M_refdata();
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 1;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 0;
    ((void**)param_1)[2] = uVar2;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 2;
    *(unsigned int*)((char*)param_1 + 0x2c) = 2;
    ((void**)param_1)[0x11] = (void*)"std::string";
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    aiList.push_back(param_1);
    ((void**)param_1)[0x12] = (void*)"std::string";
    ((void**)param_1)[0x13] = (void*)"KitType";
    *(uint_ma*)((char*)param_1 + 0xe0) = ~-(unsigned int)(std::string("std::string").compare("std::string") == 0);
    *(uint_ma*)((char*)param_1 + 0xe4) = ~-(unsigned int)(std::string("KitType").compare("std::string") == 0);
}
} }
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass251_ConsoleClass251 (0xb14b30)
