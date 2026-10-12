// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x508f10

namespace dice {
namespace anim {
class Skeleton {
public:
    void transform(void const*, int);
    char _pad[0x20];
    void* m_p20;
    int m_val28;
};
}

namespace hfe { namespace world {

class Comp70 {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10)
    V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20)
    V(21)
#undef V
    virtual void notify(void*, int);
};

class Comp248 {
public:
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual void update(void*);
    virtual void apply(anim::Skeleton*, int);
};

class AnimatedBundle {
public:
    char _pad0[0x70];
    Comp70* m_comp70;
    char _pad78[0x1d0];
    Comp248* m_comp248;
    char _pad250[0x10];
    anim::Skeleton* m_skeleton;

    void handleVisualUpdate(volatile float dt, float totalTime);
};

void AnimatedBundle::handleVisualUpdate(volatile float dt, float totalTime)
{
    anim::Skeleton* skel = m_skeleton;
    if (skel) {
        Comp70* c70 = m_comp70;
        if (c70) {
            Comp248* c248 = m_comp248;
            if (c248) {
                c248->update(this);
                m_comp248->apply(m_skeleton, 0);
                skel = m_skeleton;
            }
            skel->transform(0, -1);
            anim::Skeleton* s = m_skeleton;
            c70->notify(s->m_p20, s->m_val28);
        }
    }
}

} } }
