// FUNCTION: BF2 0x6308f0
// dice_hfe_world_EngineBase_EngineBase_dice_hfe_world_EngineTemplate_constptr (0x6308f0)

struct Base0 { virtual void f0(); char _pad[0xf8]; };
struct Base1 { virtual void f1(); char _pad[0x130]; };
struct Base2 { virtual void f2(); };

struct Ctor { Ctor(); };

extern "C" void fn_68a600(void*, long, long);

class Klass_6308f0 : public Ctor, public Base0, public Base1, public Base2 {
public:
    char _pad0x2c0[0x80];
    void* m_0x2c0;
    bool m_0x2c8;
    bool m_0x2c9;
    float m_0x2cc;
    float m_0x2d0;
    float m_0x2d4;
    float m_0x2d8;
    float m_0x2dc;
    float m_0x2e0;
    float m_0x2e4;
    float m_0x2e8;
    float m_0x2ec;
    bool m_0x2f0;
    int m_0x2f4;
    float m_0x2f8;
    int m_0x2fc;
    float m_0x300;
    int m_0x304;
    char _pad0x310[0x8];
    void* m_0x310;
    void* m_0x318;
    void* m_0x320;
    float m_0x328;
    bool m_0x32c;
    float m_0x330;
    Klass_6308f0(long a0);
};

Klass_6308f0::Klass_6308f0(long a0) : Ctor(), m_0x2c0((void*)a0), m_0x2c8(false), m_0x2c9(false), m_0x2cc(0.0f), m_0x2d0(0.0f), m_0x2d4(0.0f), m_0x2d8(0.0f), m_0x2dc(0.0f), m_0x2e0(0.0f), m_0x2e4(0.0f), m_0x2e8(0.0f), m_0x2ec(0.0f), m_0x2f0(false), m_0x2f4(0), m_0x2f8(0.0f), m_0x2fc(0x1), m_0x300(0.0f), m_0x304(0), m_0x310(0), m_0x318(0), m_0x320(0), m_0x328(0.0f), m_0x32c(false), m_0x330(0.0f) { fn_68a600(this, 0, 0x800); }

// REVERSED_FUNCTION: dice_hfe_world_EngineBase_EngineBase_dice_hfe_world_EngineTemplate_constptr (0x6308f0)
