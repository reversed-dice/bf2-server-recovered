// FUNCTION: BF2 0x6b6560
#include <list>
#include <string>

namespace dice { namespace anim {

class BoneAnimation { public: void setLength(float length); };

class Bundle {
public:
    std::list<std::pair<float, BoneAnimation*> > m_bones;
    std::list<std::pair<float, BoneAnimation*> >::iterator getAnimation(std::string const& name);
    void init();
    void setAnimationLength(std::string const& name, float length);
};

void Bundle::setAnimationLength(std::string const& name, float length)
{
    std::list<std::pair<float, BoneAnimation*> >::iterator it = getAnimation(name);
    if (it != m_bones.end()) {
        it->second->setLength(length);
        init();
    }
}

} }
