// FUNCTION: BF2 0xaf70c0
// REVERSED_FUNCTION: dice::hfe::world::(anonymous namespace)::ConsoleClass152::executeObjectMethod (0xaf70c0)
namespace dice { namespace hfe { namespace world {

class HeightmapCluster {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
};
extern HeightmapCluster* heightmapCluster;

class ConsoleClass152 {
public:
    bool executeObjectMethod();
    bool pad0();
private:
    char m_pad0[0x30];
    int m_argc;
    char m_pad1[0x108 - 0x34];
    char m_active;
};

bool ConsoleClass152::pad0()
{
    if (__builtin_expect(m_argc == 0, 1)) {
        m_active = 0;
        heightmapCluster->m42();
    }
    return false;
}

bool ConsoleClass152::executeObjectMethod()
{
    if (__builtin_expect(m_argc == 0, 1)) {
        m_active = 0;
        heightmapCluster->m42();
    }
    return false;
}

} } }
