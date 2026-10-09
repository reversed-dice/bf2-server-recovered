// FUNCTION: BF2 0x6b0720
// FUNCTION: BF2 0x6b07a0
// FUNCTION: BF2 0x6b0820
#include <map>
#include <string>

namespace dice {
namespace hfe {
struct NoCaseStringCompare {
    bool operator()(const std::string& a, const std::string& b) const;
};
namespace io {
class FileChangeManager {
public:
    virtual void f0(); virtual void f1(); virtual void f2();
    virtual void f3(); virtual void f4(); virtual void f5();
    virtual void removeListener(void*);
};
extern FileChangeManager* fileChangeManager;
}
}
namespace anim {

class BoneAnimation {
public:
    ~BoneAnimation();
};

class AnimationManager {
public:
    struct AnimationHolder {
        bool m_loaded;
        BoneAnimation* m_anim;
    };

    virtual ~AnimationManager();

    std::map<std::string, AnimationHolder, dice::hfe::NoCaseStringCompare> m_animations;
    BoneAnimation* m_lastAnim;
    bool m_active;
};

AnimationManager::~AnimationManager()
{
    dice::hfe::io::fileChangeManager->removeListener(this);
    for (std::map<std::string, AnimationHolder, dice::hfe::NoCaseStringCompare>::iterator i = m_animations.begin();
         m_animations.end() != i; ++i) {
        if (i->second.m_anim) {
            delete i->second.m_anim;
        }
    }
}

}
}
// REVERSED_FUNCTION: dice_anim_AnimationManager_dtor_AnimationManager (0x6b0720)
// REVERSED_FUNCTION: dice_anim_AnimationManager_dtor_AnimationManager (0x6b07a0)
// REVERSED_FUNCTION: dice_anim_AnimationManager_dtor_AnimationManager (0x6b0820)
