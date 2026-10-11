// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x6b0e10
#include <sstream>
#include <string>
#include <map>

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(const std::string& a, const std::string& b) const;
};
} }

namespace dice { namespace anim {

class BoneAnimation {
public:
    ~BoneAnimation();
};

class AnimationManager {
public:
    virtual ~AnimationManager();

    std::map<std::string, BoneAnimation*, dice::hfe::NoCaseStringCompare> m_animations;

    std::string listAnimations() const;
};

std::string AnimationManager::listAnimations() const {
    std::stringstream ss;
    std::map<std::string, BoneAnimation*, dice::hfe::NoCaseStringCompare>::const_iterator it = m_animations.begin();
    if (it != m_animations.end()) {
        do {
            ss << it->first << "\n";
            ++it;
        } while (it != m_animations.end());
    }
    return ss.str();
}

} }
