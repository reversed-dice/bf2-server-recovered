// FUNCTION: BF2 0x6b6930
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <map>
#include <string>
extern "C" {
    extern long _ZN3dice4anim16animationManagerE;
}

struct Poly { virtual ~Poly() {} };

struct AnimData {
    float time;
    Poly* poly;
};

struct BundleEvent {
    float time;
    int event;
};

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(std::string const& a, std::string const& b) const;
};
} }

namespace dice { namespace anim {
    class BoneAnimation;
    class AnimationManager {
    public:
        std::string& getName(BoneAnimation* a);
    };
    extern AnimationManager* animationManager;
} }

class Bundle {
public:
    std::list<AnimData> m_bones;
    std::list<BundleEvent> m_events;
    void getAnimations(std::map<std::string, dice::anim::BoneAnimation*, dice::hfe::NoCaseStringCompare>& out) const;
};

void Bundle::getAnimations(std::map<std::string, dice::anim::BoneAnimation*, dice::hfe::NoCaseStringCompare>& out) const {
    std::list<AnimData>::const_iterator it;
    for (it = m_bones.begin(); it != m_bones.end(); ++it) {
        dice::anim::BoneAnimation* a = (dice::anim::BoneAnimation*)it->poly;
        out.insert(std::make_pair(dice::anim::animationManager->getName(a), a));
    }
}
