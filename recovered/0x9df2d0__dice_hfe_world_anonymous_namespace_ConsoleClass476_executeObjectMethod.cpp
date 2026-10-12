// FUNCTION: BF2 0x9df2d0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace world {
extern unsigned int CID_EffectBundleTemplate;
extern void* getActiveTemplate(unsigned int);
} } }

extern "C" void* eom(void* self) {
    if (*(int*)((char*)self + 0x30) != 1) {
        return 0;
    }
    int v = *(int*)*(void**)((char*)self + 0x38);
    *(char*)((char*)self + 0x108) = 0;
    char* t = (char*)dice::hfe::world::getActiveTemplate(dice::hfe::world::CID_EffectBundleTemplate);
    std::vector<int>* pv = (std::vector<int>*)(t + 0x3a0);
    pv->push_back(v + 0);
    return 0;
}
