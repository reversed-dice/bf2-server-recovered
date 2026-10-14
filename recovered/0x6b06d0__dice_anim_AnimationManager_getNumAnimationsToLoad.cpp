// FUNCTION: BF2 0x6b06d0
#include <map>
#include <string>

namespace dice {
namespace hfe {
struct NoCaseStringCompare {
    bool operator()(const std::string& a, const std::string& b) const;
};
}
namespace anim {

class BoneAnimation;

class AnimationManager {
public:
    struct AnimationHolder {
        bool m_loaded;
        BoneAnimation* m_anim;
    };

    virtual ~AnimationManager();

    std::map<std::string, AnimationHolder, dice::hfe::NoCaseStringCompare> m_animations;
    BoneAnimation* m_lastAnim; // offset 0x38
    bool m_active; // offset 0x40

    int getNumAnimationsToLoad();
};

int AnimationManager::getNumAnimationsToLoad()
{
    if (m_active) {
        std::map<std::string, AnimationHolder, dice::hfe::NoCaseStringCompare>::iterator it = m_animations.begin();
        std::map<std::string, AnimationHolder, dice::hfe::NoCaseStringCompare>::iterator end = m_animations.end();
        if (it != end) {
            int count = 0;
            do {
                if (it->second.m_loaded) {
                    count++;
                }
                ++it;
            } while (it != end);
            return count;
        }
    }
    return 0;
}

}
}
