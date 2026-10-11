// FUNCTION: BF2 0x6cddb0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

class Bundle;

namespace dice { namespace anim {

class AnimationSystem {
public:
    Bundle* playBundle(void* trigger, Bundle* bundle, int flags, float a, float b);
};

class SideTrigger {
public:
    char _pad0[0x8];
    std::vector<Bundle*> m_bundles;
    char _pad1[0x18];
    int m_flags;
    char _pad2[0xc];
    void* m_valueHolder;
    char _pad3[0x1];
    char m_flag51;
    void applyAnimations(AnimationSystem& system);
};

} }

void dice::anim::SideTrigger::applyAnimations(AnimationSystem& system) {
    if (m_bundles.empty()) return;
    float scale = 1.0f;
    if (m_valueHolder != 0) {
        float v = *(float*)((char*)m_valueHolder + 8);
        if (v != 0.0f)
            scale = *(float*)((char*)&system + 0x24) / v;
    }
    if (m_flag51 != 0)
        scale *= *(float*)((char*)&system + 0x1c);
    for (std::vector<Bundle*>::iterator it = m_bundles.begin(); it != m_bundles.end(); ++it) {
        Bundle* b = system.playBundle(this, *it, m_flags, -1.0f, scale);
        if (*(char*)(*(char**)((char*)b + 0x10) + 0x37) != 0)
            *(char*)((char*)b + 0x46) = 1;
    }
}
