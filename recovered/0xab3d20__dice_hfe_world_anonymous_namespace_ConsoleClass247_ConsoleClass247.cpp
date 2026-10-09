// FUNCTION: BF2 0xab3d20
#include <string>
#include <list>

struct VecN { float x, y, z; };
namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;

namespace world { namespace { extern std::list<void*> myList; } }

extern "C" void ctor_ab3d20(void* param_1) {
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"absolutePosition";
    *(void* volatile*)param_1 = (void*)0xc77b10;
    *(void* volatile*)((char*)param_1 + 0x10) = uVar2;
    {
        volatile VecN& r = *(volatile VecN*)((char*)param_1 + 0x10c);
        r.x = 0.0f;
        r.y = 0.0f;
        r.z = 0.0f;
    }
    {
        volatile VecN& r = *(volatile VecN*)((char*)param_1 + 0x118);
        r.x = 0.0f;
        r.y = 0.0f;
        r.z = 0.0f;
    }
    {
        volatile VecN& r = *(volatile VecN*)((char*)param_1 + 0x124);
        r.x = 0.0f;
        r.y = 0.0f;
        r.z = 0.0f;
    }
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 1;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 1;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 0;
    *(unsigned int*)((char*)param_1 + 0x2c) = 1;
    ((void**)param_1)[0x11] = (void*)"Vec3";
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    dice::hfe::world::myList.push_back(param_1);
    ((void**)param_1)[0x12] = (void*)"Vec3";
    std::string typeName("Vec3");
    *(unsigned int*)((char*)param_1 + 0xe0) =
        ~-(unsigned int)(typeName.compare("std::string") == 0);
}
} }
