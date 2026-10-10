// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x6b65f0
#include <list>
#include <string>

namespace dice { namespace anim {

class BoneAnimation { public: void setLength(float length); };

class Bundle {
public:
    std::list<std::pair<float, BoneAnimation*> > m_bones;
    std::list<std::pair<float, BoneAnimation*> >::iterator getAnimation(std::string const& name);
    void init();
    void setAnimationStartTime(std::string const& name, float startTime);
};

void Bundle::setAnimationStartTime(std::string const& name, float startTime)
{
    std::list<std::pair<float, BoneAnimation*> >::iterator it = getAnimation(name);
    if (it == m_bones.end())
        return;
    std::pair<float, BoneAnimation*> p = *it;
    if (p.first == startTime)
        return;
    m_bones.erase(it);
    p.first = startTime;
    std::list<std::pair<float, BoneAnimation*> >::iterator pos = m_bones.begin();
    while (pos != m_bones.end()) {
        if (pos->first >= startTime)
            break;
        ++pos;
    }
    m_bones.insert(pos, p);
    init();
}

} }
