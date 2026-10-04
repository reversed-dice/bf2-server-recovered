// FUNCTION: BF2 0x63d3c0
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_WingTemplate_WingTemplate (0x63d3c0)

struct Sub298 { float f0; float f4; float f8; Sub298() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0x8]; };
struct Base1 { virtual void f1(); char _pad[0x50]; };
struct Base2 { virtual void f2(); char _pad[0x158]; };
struct Base3 { virtual void f3(); };

struct Ctor { Ctor(); };

class Klass_63d3c0 : public Ctor, public Base0, public Base1, public Base2, public Base3 {
public:
    char _pad0x28c[0xbc];
    float m_0x28c;
    float m_0x290;
    float m_0x294;
    Sub298 m_0x298;
    bool m_0x2a4;
    float m_0x2a8;
    float m_0x2ac;
    float m_0x2b0;
    Klass_63d3c0();
};

Klass_63d3c0::Klass_63d3c0() : Ctor(), m_0x28c(1.0f), m_0x290(0.10000000149011612f), m_0x294(0.0f), m_0x298(), m_0x2a4(false), m_0x2a8(4.909999847412109f), m_0x2ac(1.0f), m_0x2b0(0.0f) { }

// REVERSED_FUNCTION: dice_hfe_world_WingTemplate_WingTemplate (0x63d3c0)
