// FUNCTION: BF2 0x5a5680
namespace dice { namespace hfe { namespace world {
class IThing {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual bool s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    virtual void s17();
    virtual void s18();
    virtual void s19();
    virtual void s20();
    virtual void s21();
    virtual void s22();
    virtual void s23();
    virtual void s24();
    virtual void s25();
    virtual void s26();
    virtual void s27();
    virtual void s28();
    virtual void s29();
    virtual void s30();
    virtual void s31();
    virtual void s32();
    virtual void s33();
    virtual void s34();
    virtual void s35();
    virtual void s36();
    virtual void s37();
    virtual void s38();
    virtual float s39();
};
class ParticleSystemBase {
public:
    float getVisualBoundingRadius() const;
    char pad[0x8];
    unsigned char m_flags;
    char pad2[0x218-9];
    IThing* m_thing;
};
float ParticleSystemBase::getVisualBoundingRadius() const
{
    if (m_flags & 1)
        goto zero;
    if (m_thing == 0)
        goto zero;
    if (m_thing->s6())
        return m_thing->s39();
zero:
    {
        float z;
        *(unsigned int*)&z = 0;
        return z;
    }
}
}}}
