// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5e2a50
namespace dice { namespace hfe { namespace io {
class PlayerInputMap {
public:
    int m_v;
};
} } }

namespace dice { namespace hfe { namespace world {

class IOwner {
public:
    virtual void o0();
    virtual void o1();
    virtual void o2();
    virtual void o3();
    virtual void o4();
    virtual void o5();
    virtual void o6();
    virtual void o7();
    virtual void o8();
    virtual void o9();
    virtual void o10();
    virtual void o11();
    virtual void setFlag(int v);
    virtual void q0();
    virtual void q1();
    virtual void q2();
    virtual void q3();
    virtual void tailCall(int v);
    virtual void r0();
    virtual void r1();
    virtual void r2();
    virtual void r3();
    virtual void r4();
    virtual void r5();
    virtual void r6();
    virtual void r7();
    virtual void r8();
    virtual void r9();
    virtual void r10();
    virtual void r11();
    virtual void r12();
    virtual void r13();
    virtual void r14();
    virtual void r15();
    virtual void r16();
    virtual void r17();
    virtual void r18();
    virtual void r19();
    virtual void r20();
    virtual void r21();
    virtual void r22();
    virtual void r23();
    virtual void r24();
    virtual void r25();
    virtual void r26();
    virtual void r27();
    virtual void r28();
    virtual void r29();
    virtual void r30();
    virtual void r31();
    virtual void r32();
    virtual void r33();
    virtual void r34();
    virtual void r35();
    virtual void reset();
    virtual void t0();
    virtual void t1();
    virtual void t2();
    virtual void t3();
    virtual void t4();
    virtual void t5();
    virtual void t6();
    virtual void t7();
    virtual void t8();
    virtual void t9();
    virtual void t10();
    virtual void t11();
    virtual void t12();
    virtual void t13();
    virtual int getA();
    virtual int getB();
};

class GenericFireArm {
public:
    void fireStop(io::PlayerInputMap in);
    unsigned char pad0[0xd0];
    IOwner* m_pd0;
    unsigned char pad1[0x290 - 0xd8];
    IOwner* m_p290;
    unsigned char pad2[0x2a8 - 0x298];
    IOwner* m_p2a8;
    IOwner* m_p2b0;
    IOwner* m_p2b8;
    IOwner* m_p2c0;
    IOwner* m_p2c8;
    IOwner* m_p2d0;
};

void GenericFireArm::fireStop(io::PlayerInputMap in) {
    if (m_p290 == 0)
        return;
    if (in.m_v == m_p290->getA() || in.m_v == m_p290->getB()) {
        int v = m_p290->getB();
        m_p290->reset();
        bool b = (v == in.m_v);
        m_p290->setFlag(b);
        if (m_p2b0 != 0)
            m_p2b0->setFlag(b);
        if (m_p2a8 != 0)
            m_p2a8->setFlag(b);
        if (m_p2c0 != 0)
            m_p2c0->setFlag(b);
        if (m_p2d0 != 0)
            m_p2d0->setFlag(b);
        if (m_pd0 != 0)
            m_pd0->tailCall(1);
    }
}

} } }
