// FUNCTION: BF2 0x6b23e0
#include <list>

namespace dice { namespace anim {

// Declared, not defined: the target tail-calls this dtor (0x006b1400).
struct AnimationSystemBase {
    virtual ~AnimationSystemBase();
};

class AnimationSystem : public AnimationSystemBase {
public:
    char             _pad[0x70];    // 0x08 .. 0x78
    std::list<void*> m_playing;     // 0x78
    virtual ~AnimationSystem();
    void detach(void* item);        // 0x006b1720
};

AnimationSystem::~AnimationSystem()
{
    for (std::list<void*>::iterator it = m_playing.begin();
         it != m_playing.end(); ++it)
        detach(*it);
}

} }
// REVERSED_FUNCTION: dice_anim_AnimationSystem_dtor_AnimationSystem (0x6b23e0)
