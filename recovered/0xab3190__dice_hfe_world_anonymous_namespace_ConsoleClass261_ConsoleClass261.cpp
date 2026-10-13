// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0xab3190
#include <string>
#include <list>

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;

namespace world {
namespace {

extern std::list<void*> myList;

class ConsoleClass261 {
public:
    ConsoleClass261();
};

ConsoleClass261::ConsoleClass261() {
    float* ptr = (float*)((char*)this + 0x10c);
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void**)((char*)this + 0x18) = (void*)"absoluteTransformation";
    *(void**)this = (void*)0xc78e90;
    ((void**)this)[2] = uVar2;

    unsigned int* q = (unsigned int*)ptr;
    unsigned int* w = q;
    for (long i = 4; i != 0; --i) {
        w[0] = 0;
        w[1] = 0;
        w[2] = 0;
        w[3] = 0;
        w += 4;
    }

    ptr[15] = 1.0f;
    ptr[10] = 1.0f;
    ptr[5] = 1.0f;
    ptr[0] = 1.0f;

    *(unsigned char*)((char*)this + 0x109) = 1;
    *(unsigned int*)((char*)this + 0x8) = 1;
    *(unsigned int*)((char*)this + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)this + 0x28) = 0;
    *(unsigned int*)((char*)this + 0x2c) = 1;
    ((void**)this)[0x11] = (void*)"Mat4";
    *(unsigned char*)((char*)this + 0x108) = 0;
    *(unsigned char*)((char*)this + 0x24) = uVar1;

    myList.push_back(this);

    ((void**)this)[0x12] = (void*)"Mat4";
    std::string typeName("Mat4");
    *(unsigned int*)((char*)this + 0xe0) = ~-(unsigned int)(typeName.compare("std::string") == 0);
}
}
} } }
