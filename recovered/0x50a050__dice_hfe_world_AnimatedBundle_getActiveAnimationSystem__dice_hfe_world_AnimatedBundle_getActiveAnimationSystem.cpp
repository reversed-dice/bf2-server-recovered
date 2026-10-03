// FUNCTION: BF2 0x50a050
namespace dice { namespace hfe { namespace world {

class AnimatedBundle {
public:
    void* getActiveAnimationSystem() const;
private:
    unsigned char m_pad[0x248];
    void* m_animationSystems[2];
    int m_activeAnimationSystemIndex;
};

void* AnimatedBundle::getActiveAnimationSystem() const {
    return m_animationSystems[m_activeAnimationSystemIndex];
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimatedBundle_getActiveAnimationSystem (0x50a050)