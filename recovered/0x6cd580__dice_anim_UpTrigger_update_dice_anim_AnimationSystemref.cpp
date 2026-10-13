// FUNCTION: BF2 0x6cd580
#include <math.h>

namespace dice { namespace anim {

class AnimationSystem {
public:
    virtual ~AnimationSystem();
    char pad0[0x1c - 8];
    float m_1c;
    char pad1[0x2c - 0x20];
    float m_2c;
};

unsigned char triggerUpdate(void* self, AnimationSystem& a);

class UpTrigger {
public:
    char pad0[0x48];
    unsigned char m_50;
    unsigned char m_51;

    virtual void d0();  virtual void d1();  virtual void d2();  virtual void d3();
    virtual void d4();  virtual void d5();  virtual void d6();  virtual void d7();
    virtual void d8();  virtual void d9();  virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15();
    virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
    virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27();
    virtual unsigned char check(float v);

    unsigned char update(AnimationSystem& a);
};

unsigned char UpTrigger::update(AnimationSystem& a)
{
    float v = m_50 ? a.m_2c : a.m_1c;
    if (m_51)
        v = fabsf(v);
    unsigned char r = 1;
    if (check(v))
        r = triggerUpdate(this, a);
    return r;
}

}}
