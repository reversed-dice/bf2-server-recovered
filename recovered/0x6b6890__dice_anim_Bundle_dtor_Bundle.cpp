// FUNCTION: BF2 0x6b6890
// BF2_FLAGS: -fno-strict-aliasing
// Bundle::~Bundle - using std::list iteration
#include <list>
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

namespace dice { namespace anim {
    class BoneAnimation;
    class AnimationManager {
    public:
        void release(BoneAnimation* b);
    };
    extern AnimationManager* animationManager;
}}

class Bundle {
public:
    std::list<AnimData> m_bones;
    std::list<BundleEvent> m_events;
    ~Bundle();
};

Bundle::~Bundle() {
    for (std::list<AnimData>::iterator i = m_bones.begin(); i != m_bones.end(); ++i)
        dice::anim::animationManager->release((dice::anim::BoneAnimation*)i->poly);
}
