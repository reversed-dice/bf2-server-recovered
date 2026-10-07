// FUNCTION: BF2 0x87c810
namespace dice { namespace hfe {

class GameLogicIface {
public:
    virtual void s00();
    virtual void s01();
    virtual void s02();
    virtual void s03();
    virtual void s04();
    virtual void s05();
    virtual void s06();
    virtual void s07();
    virtual void s08();
    virtual void s09();
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
    virtual void s39();
    virtual void s40();
    virtual void s41();
    virtual void s42();
    virtual void s43();
    virtual float valueAt160();
};

extern GameLogicIface* gameLogic;

class ConsoleClass214 {
public:
    float* executeObjectMethod();
    float* pad0();
    float* pad1();
    float* pad2();
private:
    char m_pad0[0x30];
    int m_argc;
    char m_pad1[0x108 - 0x34];
    char m_active;
    char m_pad2[0x10c - 0x109];
    float m_value;
};
float* ConsoleClass214::pad0()
{
    if (m_argc != 0) return 0;
    m_active = 1;
    m_value = gameLogic->valueAt160();
    return &m_value;
}
float* ConsoleClass214::pad1()
{
    if (m_argc != 0) return 0;
    m_active = 1;
    m_value = gameLogic->valueAt160();
    return &m_value;
}
float* ConsoleClass214::executeObjectMethod()
{
    if (m_argc != 0) return 0;
    m_active = 1;
    m_value = gameLogic->valueAt160();
    return &m_value;
}

} }
