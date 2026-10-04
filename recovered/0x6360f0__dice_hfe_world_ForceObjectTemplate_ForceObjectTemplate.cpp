// FUNCTION: BF2 0x6360f0
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_ForceObjectTemplate_ForceObjectTemplate (0x6360f0)

struct Sub1d0 { float f0; float f4; float f8; Sub1d0() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0x8]; };
struct Base1 { virtual void f1(); char _pad[0x50]; };
struct Base2 { virtual void f2(); };

struct Ctor { Ctor(); };

class Klass_6360f0 : public Ctor, public Base0, public Base1, public Base2 {
public:
    char _pad0x1c8[0x158];
    int m_0x1c8;
    float m_0x1cc;
    Sub1d0 m_0x1d0;
    float m_0x1dc;
    bool m_0x1e0;
    bool m_0x1e1;
    float m_0x1e4;
    bool m_0x1e8;
    Klass_6360f0();
};

Klass_6360f0::Klass_6360f0() : Ctor(), m_0x1c8(0x40), m_0x1cc(0.0f), m_0x1d0(), m_0x1dc(0.0f), m_0x1e0(false), m_0x1e1(false), m_0x1e4(0.0f), m_0x1e8(false) { }

// REVERSED_FUNCTION: dice_hfe_world_ForceObjectTemplate_ForceObjectTemplate (0x6360f0)
