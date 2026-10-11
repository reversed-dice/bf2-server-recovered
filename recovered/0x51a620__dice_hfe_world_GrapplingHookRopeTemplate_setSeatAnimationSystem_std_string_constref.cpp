// FUNCTION: BF2 0x51a620
#include <string>

namespace dice { namespace anim {
class IAnimationSystemTemplate;
class AnimationSystemTemplateManager {
public:
    virtual ~AnimationSystemTemplateManager();
    virtual void create(const std::string& name);
    virtual IAnimationSystemTemplate* load(const std::string& name);
    virtual void release(IAnimationSystemTemplate* system);
};
extern AnimationSystemTemplateManager* animationSystemTemplateManager;
} } // dice::anim

namespace dice { namespace hfe {
int compareIgnoreCase(const char* a, const char* b);
namespace world {

class GrapplingHookRopeTemplate {
public:
    std::string const& getSeatAnimationSystem() const;
    void setSeatAnimationSystem(const std::string& name);
private:
    char _pad0[0x1d0];
    dice::anim::IAnimationSystemTemplate* m_animSystem;
};

} } } // dice::hfe::world

void dice::hfe::world::GrapplingHookRopeTemplate::setSeatAnimationSystem(const std::string& name)
{
    if (m_animSystem != 0) {
        if (compareIgnoreCase(getSeatAnimationSystem().c_str(), name.c_str()) == 0)
            return;
        dice::anim::animationSystemTemplateManager->release(m_animSystem);
    }
    if (name.length() == 0)
        return;
    m_animSystem = dice::anim::animationSystemTemplateManager->load(name);
}
