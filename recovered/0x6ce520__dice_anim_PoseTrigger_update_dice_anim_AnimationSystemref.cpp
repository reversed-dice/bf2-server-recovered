// FUNCTION: BF2 0x6ce520
#include <string>
#include <ostream>

namespace dice { namespace anim {

class AnimationSystem {
public:
    char pad0[8];
    unsigned int m_index;
};

class Elem {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
    virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15();
    virtual void d16(); virtual void d17(); virtual void d18();
    virtual bool update(AnimationSystem& a);
};

class Trigger {
public:
    bool applyAnimations(AnimationSystem& a);
};

class PoseTrigger {
public:
    char pad0[0x20];
    Elem** m_begin;
    Elem** m_end;

    bool update(AnimationSystem& a);
};

bool PoseTrigger::update(AnimationSystem& a)
{
    if (m_end != m_begin) {
        unsigned int i = a.m_index;
        long n = m_end - m_begin;
        if (i >= (unsigned long)n)
            i = (unsigned int)(n - 1);
        if (!m_begin[i]->update(a))
            return false;
    }
    ((Trigger*)this)->applyAnimations(a);
    return true;
}

}}
