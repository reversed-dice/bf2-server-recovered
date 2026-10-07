// FUNCTION: BF2 0x6cd530
namespace dice { namespace anim {

class AnimationSystem {
public:
    unsigned char m_pad[0x38];
    float m_time;       // 0x38
};

class Trigger {
public:
    bool update(AnimationSystem& anim);
};

class TurnTrigger : public Trigger {
public:
    bool update(AnimationSystem& anim);
};

bool TurnTrigger::update(AnimationSystem& anim)
{
    bool r = true;
    if (((bool (*)(void*, float))(*(void***)this)[0xe0 / 8])(this, anim.m_time))
        r = Trigger::update(anim);
    return r;
}

} }
