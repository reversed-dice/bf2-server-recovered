// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x6b7a00
#include <sstream>
#include <string>
#include <list>

namespace dice { namespace anim {

class BoneAnimation { };

class AnimationManager {
public:
    std::string const& getName(BoneAnimation* anim);
};

extern AnimationManager* animationManager;

class Bundle {
public:
    std::list<std::pair<float, BoneAnimation*> > m_bones;
    std::string listAnimations() const;
};

std::string Bundle::listAnimations() const {
    std::stringstream ss;
    for (std::list<std::pair<float, BoneAnimation*> >::const_iterator it = m_bones.begin();
         it != m_bones.end(); ++it) {
        ss << animationManager->getName(it->second) << "\n";
    }
    return ss.str();
}

} }
