// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0xa0d7f0
#include <string>
#include <list>

namespace dice { namespace hfe {

extern void* ConsoleObject_mDefaultDynamicObjectName;
extern unsigned int ConsoleObject_mDefaultAccess;
extern unsigned char ConsoleObject_mDefaultCategory;

namespace world {
namespace {
extern std::list<void*> objTempFxList;
}

namespace {
struct Dist {
    unsigned int m_val;
    unsigned int m_data[0x66];
    unsigned int m_zero[4];
};

class ConsoleClass204 {
public:
    ConsoleClass204();
    char _p0[0x10c];
    Dist m_dist;
};

ConsoleClass204::ConsoleClass204() {
    float* ptr = (float*)((char*)this + 0x10c);
    void* uVar2 = ConsoleObject_mDefaultDynamicObjectName;
    *(void**)((char*)this + 0x18) = (void*)"dragOverTime";
    *(void**)this = (void*)0xc369f0;
    *ptr = 1.0f;
    ((void**)this)[2] = uVar2;

    Dist* d = (Dist*)((char*)this + 0x10c);
    int i = 0;
    do {
        d->m_zero[i] = 0;
    } while (++i != 4);

    unsigned int v = d->m_val;
    int j = 0;
    do {
        d->m_data[j] = v;
    } while (++j != 0x66);

    *(unsigned char*)((char*)this + 0x109) = 1;
    *(unsigned int*)((char*)this + 0x8) = 1;
    *(unsigned int*)((char*)this + 0x20) = ConsoleObject_mDefaultAccess;
    unsigned char uVar1 = ConsoleObject_mDefaultCategory;
    *(unsigned int*)((char*)this + 0x28) = 0;
    *(unsigned int*)((char*)this + 0x2c) = 1;
    ((void**)this)[0x11] = (void*)"OverTimeDistribution";
    *(unsigned char*)((char*)this + 0x108) = 0;
    *(unsigned char*)((char*)this + 0x24) = uVar1;

    objTempFxList.push_back(this);

    ((void**)this)[0x12] = (void*)"OverTimeDistribution";
    std::string typeName("OverTimeDistribution");
    *(unsigned int*)((char*)this + 0xe0) = ~-(unsigned int)(typeName.compare("std::string") == 0);
}
}

} } }
