// FUNCTION: BF2 0x5291e0
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_LadderContainer_LadderContainer_dice_hfe_world_LadderContainerTemplate_constptr (0x5291e0)

struct Sub610 { volatile float f0; volatile float f4; volatile float f8; Sub610() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub620 { float f0; float f4; float f8; Sub620() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub62c { float f0; float f4; float f8; Sub62c() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0xf8]; };
struct Base1 { virtual void f1(); char _pad[0x130]; };
struct Base2 { virtual void f2(); };
struct Base3 { virtual void f3(); };

struct Ctor { Ctor(); };

extern "C" void fn_68a600(void*, long, long);

class Klass_5291e0 : public Ctor, public Base0, public Base1, public Base2, public Base3 {
public:
    char _pad0x5fc[0x3b4];
    int m_0x5fc;
    void* m_0x600;
    float m_0x608;
    float m_0x60c;
    Sub610 m_0x610;
    int m_0x61c;
    Sub620 m_0x620;
    Sub62c m_0x62c;
    float m_0x638;
    bool m_0x63c;
    bool m_0x63d;
    bool m_0x63e;
    bool m_0x63f;
    Klass_5291e0();
};

Klass_5291e0::Klass_5291e0() : Ctor(), m_0x5fc(0x1), m_0x600(0), m_0x608(0.0f), m_0x60c(0.0f), m_0x610(), m_0x61c(0), m_0x620(), m_0x62c(), m_0x638(0.0f), m_0x63c(false), m_0x63d(false), m_0x63e(false), m_0x63f(false) { fn_68a600(this, 0x1008, 0); }

// REVERSED_FUNCTION: dice_hfe_world_LadderContainer_LadderContainer_dice_hfe_world_LadderContainerTemplate_constptr (0x5291e0)
