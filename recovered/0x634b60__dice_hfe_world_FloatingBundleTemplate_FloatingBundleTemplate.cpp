// FUNCTION: BF2 0x634b60
// dice_hfe_world_FloatingBundleTemplate_FloatingBundleTemplate (0x634b60)

struct Base0 { virtual void f0(); char _pad[0x8]; };
struct Base1 { virtual void f1(); char _pad[0x50]; };
struct Base2 { virtual void f2(); char _pad[0x158]; };
struct Base3 { virtual void f3(); };

struct Ctor { Ctor(); };

class Klass_634b60 : public Ctor, public Base0, public Base1, public Base2, public Base3 {
public:
    char _pad0x28c[0xbc];
    int m_0x28c;
    float m_0x290;
    float m_0x294;
    float m_0x298;
    float m_0x29c;
    float m_0x2a0;
    Klass_634b60();
};

Klass_634b60::Klass_634b60() : Ctor(), m_0x28c(0), m_0x290(1.0f), m_0x294(10.0f), m_0x298(10.0f), m_0x29c(400.0f), m_0x2a0(1.0f) { }

// REVERSED_FUNCTION: dice_hfe_world_FloatingBundleTemplate_FloatingBundleTemplate (0x634b60)
