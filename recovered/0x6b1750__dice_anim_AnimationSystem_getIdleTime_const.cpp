// FUNCTION: BF2 0x6b1750
namespace dice { namespace anim {
class AnimationSystem {
public:
    char _pad[0x40];
    float m_40;
    float m_44;
    char _pad2[0x28];
    char m_70;
    float getIdleTime() const;
};
float AnimationSystem::getIdleTime() const { return m_70 ? m_44 : m_40; }
} }
// REVERSED_FUNCTION: dice_anim_AnimationSystem_getIdleTime_const (0x6b1750)
