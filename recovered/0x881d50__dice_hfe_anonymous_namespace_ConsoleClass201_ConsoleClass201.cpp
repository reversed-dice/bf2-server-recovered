#include <string>
#include <list>

struct VecN { float x, y, z; };
namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;

namespace { extern std::list<void*> myList; }

extern "C" void ctor_881d50(void* param_1) {
    volatile VecN& r = *(volatile VecN*)((char*)param_1 + 0x10c);
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void* volatile*)((char*)param_1 + 0x18) = (void*)"getBeforeSpawnCameraPosition";
    *(void* volatile*)param_1 = (void*)0xbc60b0;
    *(void* volatile*)((char*)param_1 + 0x10) = uVar2;
    r.x = 0.0f;
    r.y = 0.0f;
    r.z = 0.0f;
    *(volatile unsigned char*)((char*)param_1 + 0x109) = 1;
    *(volatile unsigned int*)((char*)param_1 + 0x8) = 0;
    *(unsigned int*)((char*)param_1 + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)param_1 + 0x28) = 0;
    *(unsigned int*)((char*)param_1 + 0x2c) = 0;
    ((void**)param_1)[0x11] = (void*)"Vec3";
    *(unsigned char*)((char*)param_1 + 0x108) = 0;
    *(unsigned char*)((char*)param_1 + 0x24) = uVar1;
    myList.push_back(param_1);
}
} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass201_ConsoleClass201 (0x881d50)
