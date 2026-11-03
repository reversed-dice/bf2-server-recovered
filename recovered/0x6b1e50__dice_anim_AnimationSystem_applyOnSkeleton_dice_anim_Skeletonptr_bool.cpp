// from api 93.94%
// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6b1e50
#include <list>

namespace dice {
namespace anim {

class Skeleton {
public:
    int m_unk0;
};

class BundlePlayer {
public:
    char _pad[0x47];
    bool m_unk47;

    void applyAnimations(Skeleton* skeleton);
};

class AnimationSystem {
public:
    virtual ~AnimationSystem();
    char pad[0x78 - 8];
    std::list<BundlePlayer*> m_playing;
    char _pad88[8];
    int m_unk90;

    void applyOnSkeleton(Skeleton* skeleton, bool flag);
};

void AnimationSystem::applyOnSkeleton(Skeleton* skeleton, bool flag) {
    skeleton->m_unk0 = m_unk90;
    std::list<BundlePlayer*>::iterator it = m_playing.begin();
    std::list<BundlePlayer*>::iterator end = m_playing.end();
    while (it != end) {
        BundlePlayer* p = *it;
        if (p->m_unk47 == flag)
            p->applyAnimations(skeleton);
        ++it;
    }
}

}
}
