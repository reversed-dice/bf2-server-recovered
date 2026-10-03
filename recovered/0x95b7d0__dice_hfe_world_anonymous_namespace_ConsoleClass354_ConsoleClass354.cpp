#include <string>
#include <list>

// ConsoleClass constructor carrying the 0x110 "range" sub-object (min, max,
// step, wrap) plus the packed pair at 0x120, on top of the usual console
// registration. Two shape details the target forces, both verified on
// 0x95b7d0: the sub-object is written through a REFERENCE (that is what makes
// GCC materialise LEA RAX,[RDI+0x110] and address the rest at +4/+8/+0xc),
// and its members are volatile-qualified IN THE STRUCT (a volatile cast at
// each store site is not enough) so the byte store keeps its place instead
// of being hoisted ahead of the two word stores.

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;
namespace { extern std::list<void*> objTemplBFList; }

struct RangeBlock_95b7d0 {
    volatile unsigned int min;
    volatile unsigned int max;
    volatile unsigned int step;
    volatile unsigned char wrap;
};

extern "C" void ctor_95b7d0(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"fire.fireStartDelay";
    *(void* volatile*)param_1 = (void*)0xbdd5b0;
    ((void**)param_1)[2] = uVar2;
    RangeBlock_95b7d0& range = *(RangeBlock_95b7d0*)((char*)param_1 + 0x110);
    range.min = 0;
    range.max = 0x3f800000;
    range.step = 0;
    range.wrap = 0;
    *(volatile unsigned long*)((char*)param_1 + 0x120) = 0x759dc150ul;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 1;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 1;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 0;
    *(unsigned int*)((char*)param_1 + 0x2c) = 1;
    ((void**)param_1)[0x11] = (void*)"RandomDistribution";
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    objTemplBFList.push_back(param_1);
    ((void**)param_1)[0x12] = (void*)"RandomDistribution";
    std::string typeName("RandomDistribution");
    *(unsigned int*)((char*)param_1 + 0xe0) =
        ~-(unsigned int)(typeName.compare("std::string") == 0);
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass354_ConsoleClass354 (0x95b7d0)
