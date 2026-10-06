// FUNCTION: BF2 0x6b42a0
namespace dice { namespace anim {
class AnimationSystem {
public:
    virtual ~AnimationSystem();
    unsigned int setTriggerMessage(unsigned int msg);
    unsigned int setTriggerOnceMessage(unsigned int msg);
    int m_pose;
    unsigned int m_triggerMessages;
    int m_unk10;
    unsigned int m_triggerOnceMessages;
};

unsigned int AnimationSystem::setTriggerMessage(unsigned int msg)
{
    unsigned int old = m_triggerMessages;
    m_triggerMessages = old | msg;
    return old;
}
} }
