// FUNCTION: BF2 0x6b6760
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
    void init();
    void addAnimation(std::string const& name);
};

void Bundle::addAnimation(std::string const& name)
{
    BoneAnimation* anim = animationManager->getAnimation(name);
    if (anim) {
        m_bones.push_front(std::make_pair(0.0f, anim));
        init();
    }
}

} }
