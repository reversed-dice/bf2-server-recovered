// FUNCTION: BF2 0x6cd980
#include <vector>

class Bundle;

class AnimationSystem {
public:
    void playBundle(void* trigger, Bundle* bundle, int flags, float a, float b);
};

class Trigger {
public:
    char _pad0[0x8];
    std::vector<Bundle*> m_bundles;
    char _pad1[0x18];
    int m_flags;
    void applyAnimations(AnimationSystem& system);
};

void Trigger::applyAnimations(AnimationSystem& system) {
    if (m_bundles.empty()) return;
    for (std::vector<Bundle*>::iterator it = m_bundles.begin(); it != m_bundles.end(); ++it)
        system.playBundle(this, *it, m_flags, -1.0f, 1.0f);
}
