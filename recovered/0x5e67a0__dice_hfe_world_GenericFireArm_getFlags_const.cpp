// FUNCTION: BF2 0x5e67a0

namespace dice { namespace hfe { namespace world {

class IOwner {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual int f36() const;
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual int f41() const;
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual bool f61() const;
};

class GenericFireArm {
public:
    unsigned int getFlags() const;
private:
    char m_pad[0x290];
    IOwner* m_290;
    char m_pad2[0x2c0 - 0x298];
    IOwner* m_2c0;
};

unsigned int GenericFireArm::getFlags() const
{
    unsigned int f = 0;
    if (m_290 != 0) {
        f = m_290->f61();
        f |= m_290->f41() * 2;
    }
    if (m_2c0 != 0)
        f |= m_2c0->f36() * 2;
    return f;
}

} } }
