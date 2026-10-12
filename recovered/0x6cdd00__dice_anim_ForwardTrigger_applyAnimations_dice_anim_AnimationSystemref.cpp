// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6cdd00
#include <vector>

namespace dice { namespace anim {

class Bundle;
class ForwardTrigger;

class AnimationSystem {
public:
    char _pad[0x24];
    float m_time;
    Bundle* playBundle(ForwardTrigger* trigger, Bundle* bundle, int flags, float a, float b);
};

class ForwardTrigger {
public:
    char _pad0[0x8];
    std::vector<Bundle*> m_bundles;
    char _pad1[0x18];
    int m_flags;
    char _pad2[0xc];
    void* m_48;
    void applyAnimations(AnimationSystem& system);
};

void ForwardTrigger::applyAnimations(AnimationSystem& system)
{
    if (m_bundles.empty())
        return;
    float scale = 1.0f;
    if (m_48 != 0) {
        float v = *(float*)((char*)m_48 + 0x8);
        if (v != 0.0f) {
            scale = *(float*)((char*)&system + 0x24) / v;
        }
    }
    for (std::vector<Bundle*>::iterator it = m_bundles.begin(); it != m_bundles.end(); ++it) {
        Bundle* b = system.playBundle(this, *it, m_flags, -1.0f, scale);
        if (*(char*)(*(char**)((char*)b + 0x10) + 0x37) != 0) {
            *(char*)((char*)b + 0x46) = 1;
        }
    }
}

} }
