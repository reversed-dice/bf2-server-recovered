// FUNCTION: BF2 0x63bc80
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_SpringTemplate_SpringTemplate (0x63bc80)

struct Sub1f4 { volatile float f0; volatile float f4; volatile float f8; Sub1f4() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub200 { float f0; float f4; float f8; Sub200() : f0(0.0f), f4(1.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0x8]; };
struct Base1 { virtual void f1(); char _pad[0x50]; };
struct Base2 { virtual void f2(); char _pad[0x158]; };
struct Base3 { virtual void f3(); };

struct Ctor { Ctor(); };

class Klass_63bc80 : public Ctor, public Base0, public Base1, public Base2, public Base3 {
public:
    char _pad0x1f4[0x24];
    Sub1f4 m_0x1f4;
    Sub200 m_0x200;
    float m_0x20c;
    float m_0x210;
    bool m_0x214;
    bool m_0x215;
    Klass_63bc80();
};

Klass_63bc80::Klass_63bc80() : Ctor(), m_0x1f4(), m_0x200(), m_0x20c(0.5f), m_0x210(1.0f), m_0x214(false), m_0x215(false) { }

// REVERSED_FUNCTION: dice_hfe_world_SpringTemplate_SpringTemplate (0x63bc80)
