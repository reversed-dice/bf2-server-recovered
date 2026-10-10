// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6b1e30
namespace dice { namespace anim {

class Trigger;

class AnimationSystem {
public:
    char m_pad[0x8c];
    int m_fadeInTime;      // +0x8c
    char m_pad2[0x8];
    Trigger* m_pTrigger;   // +0x98

    void setFadeInTime(Trigger* t);
};

void AnimationSystem::setFadeInTime(Trigger* t)
{
    if (m_pTrigger != t)
    {
        m_pTrigger = t;
        m_fadeInTime = *(int*)((char*)t + 0x3c);
    }
}

}}
