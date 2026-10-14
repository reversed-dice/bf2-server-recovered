// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x6b63b0
#include <list>
#include <string>

namespace dice { namespace anim {

class BoneAnimation { public: void setLength(float length); };

class AnimationManager {
public:
    BoneAnimation* getAnimation(std::string const& name);
};

extern AnimationManager* animationManager;

class Bundle {
public:
    std::list<std::pair<float, BoneAnimation*> > m_bones;
    std::list<std::pair<float, BoneAnimation*> >::iterator findAnim(std::string const& name);
};

std::list<std::pair<float, BoneAnimation*> >::iterator Bundle::findAnim(std::string const& name)
{
    BoneAnimation* anim = animationManager->getAnimation(name);
    std::list<std::pair<float, BoneAnimation*> >::iterator r = m_bones.end();
    if (anim != 0) {
        std::list<std::pair<float, BoneAnimation*> >::iterator it = m_bones.begin();
        for (; it != m_bones.end(); ++it) {
            if (it->second == anim) {
                r = it;
                break;
            }
        }
    }
    return r;
}

} }
