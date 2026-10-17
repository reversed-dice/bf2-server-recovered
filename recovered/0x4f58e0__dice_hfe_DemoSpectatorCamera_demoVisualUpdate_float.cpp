// FUNCTION: BF2 0x4f58e0
namespace dice { namespace hfe {

class Player
{
public:
    virtual void d0() = 0;
    virtual void d1() = 0;
    virtual void d2() = 0;
    virtual void d3() = 0;
    virtual void d4() = 0;
    virtual void d5() = 0;
    virtual void d6() = 0;
    virtual void d7() = 0;
    virtual void d8() = 0;
    virtual void d9() = 0;
    virtual void d10() = 0;
    virtual void d11() = 0;
    virtual void d12() = 0;
    virtual void d13() = 0;
    virtual void d14() = 0;
    virtual void d15() = 0;
    virtual void d16() = 0;
    virtual void d17() = 0;
    virtual void d18() = 0;
    virtual void d19() = 0;
    virtual void d20() = 0;
    virtual void d21() = 0;
    virtual void d22() = 0;
    virtual void d23() = 0;
    virtual void d24() = 0;
    virtual void d25() = 0;
    virtual void d26() = 0;
    virtual void d27() = 0;
    virtual void d28() = 0;
    virtual void d29() = 0;
    virtual void d30() = 0;
    virtual void d31() = 0;
    virtual void d32() = 0;
    virtual void d33() = 0;
    virtual void d34() = 0;
    virtual void d35() = 0;
    virtual void d36() = 0;
    virtual void d37() = 0;
    virtual void d38() = 0;
    virtual void d39() = 0;
    virtual void d40() = 0;
    virtual void d41() = 0;
    virtual void d42() = 0;
    virtual void v43(float f) = 0;
    virtual void v44(float f, int i) = 0;
};

class NametagManager
{
public:
    virtual void n0() = 0;
    virtual void n1() = 0;
    virtual void n2() = 0;
    virtual void n3() = 0;
    virtual void n4() = 0;
    virtual void n5() = 0;
    virtual void n6() = 0;
    virtual void n7() = 0;
    virtual void n8() = 0;
    virtual void n9() = 0;
    virtual void n10() = 0;
    virtual void n11() = 0;
    virtual void n12() = 0;
    virtual void n13() = 0;
    virtual void n14() = 0;
    virtual void n15() = 0;
    virtual void n16() = 0;
    virtual void n17() = 0;
    virtual void n18() = 0;
    virtual void n19() = 0;
    virtual void n20() = 0;
    virtual void n21() = 0;
    virtual void n22() = 0;
    virtual void n23() = 0;
    virtual void v24(Player* p) = 0;
};

extern NametagManager* m_iNametagManager;

class DemoSpectatorCamera
{
public:
    bool ensureCamerasCreated();
    Player* getCurrentPlayer();
    Player* getFreeCamera();

    char pad0[0x20];
    int m_20;          // 0x20
    char m_24;         // 0x24
    char pad1[0xc0 - 0x25];
    float m_c0;        // 0xc0

    void demoVisualUpdate(float f);
};

// compile-state padding: 13 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
__attribute__((used)) int __pad_7(int x) { int y = x * 7 + 3; return y; }
__attribute__((used)) int __pad_8(int x) { int y = x * 8 + 3; return y; }
__attribute__((used)) int __pad_9(int x) { int y = x * 9 + 3; return y; }
__attribute__((used)) int __pad_10(int x) { int y = x * 10 + 3; return y; }
__attribute__((used)) int __pad_11(int x) { int y = x * 11 + 3; return y; }
__attribute__((used)) int __pad_12(int x) { int y = x * 12 + 3; return y; }
void DemoSpectatorCamera::demoVisualUpdate(float f)
{
    m_c0 = f;

    if (m_24 != 0)
        return;

    if (!ensureCamerasCreated())
        return;

    if (m_20 == 0) {
        Player* p = getFreeCamera();
        if (p != 0) {
            p->v43(f);
            getFreeCamera()->v44(f, 0);
        }
    }

    NametagManager* nm = m_iNametagManager;
    if (nm != 0)
        nm->v24(getCurrentPlayer());
}

} }
