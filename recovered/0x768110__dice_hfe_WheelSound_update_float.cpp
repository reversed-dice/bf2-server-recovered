// FUNCTION: BF2 0x768110
// BF2_FLAGS: -fno-strict-aliasing
#include <math.h>

namespace dice { namespace hfe {

class IWheelSoundTarget
{
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void slot20();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void slot60();
    virtual void v13();
    virtual bool slot70();
};

class WheelSoundSource
{
public:
    unsigned char m_pad0[0x268];
    float m_value;
};

class WheelSound
{
public:
    IWheelSoundTarget* m_target;
    WheelSoundSource* m_source;
    unsigned char m_pad0[0x8];
    float m_cur;

    void update(float dt);
};

void WheelSound::update(float dt)
{
    if (m_target == 0)
        return;
    float v = fabsf(0.0572958f * m_source->m_value);
    if (v < 0.0f)
        v = 0.0f;
    m_cur = 1.0f < v ? 1.0f : v;
    if (m_target->slot70())
    {
        if (m_cur < 0.02f)
            m_target->slot60();
    }
    else
    {
        if (m_cur > 0.05f)
            m_target->slot20();
    }
}

} }
