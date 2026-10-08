// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6b0c50
#include <string>
#include <vector>
#include <set>

namespace dice { namespace anim {
class AnimationManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void onFileChange(std::string const&, unsigned int);
    virtual ~AnimationManager();
    std::set<std::string> m_animations;
    void getAnimations(std::vector<std::string>& out) const;
};
}}

void dice::anim::AnimationManager::getAnimations(std::vector<std::string>& out) const {
    for (std::set<std::string>::const_iterator it = m_animations.begin(); it != m_animations.end(); ++it)
        out.push_back(*it);
}
