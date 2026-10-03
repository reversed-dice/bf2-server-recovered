#include <string>
#include <list>

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;
extern char DAT_00bcd1d3;
namespace { extern std::list<void*> objTempFxList; }

extern "C" void ctor_a044a0(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"soundIntensityFromRotationalSpeed";
    *(void* volatile*)param_1 = (void*)0xc49c30;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 1;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 1;
    *(void* volatile*)((char*)param_1 + 0x10) = uVar2;
    *(volatile float*)((char*)param_1 + 0x10c) = 0.0f;
    *(volatile float*)((char*)param_1 + 0x110) = 0.0f;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 0;
    *(unsigned int*)((char*)param_1 + 0x2c) = 1;
    ((void**)param_1)[0x11] = (void*)&DAT_00bcd1d3;
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    objTempFxList.push_back(param_1);
    ((void**)param_1)[0x12] = (void*)&DAT_00bcd1d3;
    std::string typeName(&DAT_00bcd1d3);
    *(unsigned int*)((char*)param_1 + 0xe0) = ~-(unsigned int)(typeName.compare("std::string") == 0);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass538_ConsoleClass538 (0xa044a0)
