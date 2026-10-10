// FUNCTION: BF2 0x6b1ff0
#include <list>

namespace dice {
namespace anim {

class BundlePlayer;

class AnimationSystem {
public:
    virtual ~AnimationSystem();
    char pad[0x78 - 8];
    std::list<BundlePlayer*> m_playing;

    void releaseBundlePlayer(BundlePlayer* bp);
    void stopAllPlaying();
};

void AnimationSystem::stopAllPlaying() {
    for (std::list<BundlePlayer*>::iterator it = m_playing.begin(); it != m_playing.end(); ++it) {
        releaseBundlePlayer(*it);
    }
    m_playing.clear();
}

}
}
