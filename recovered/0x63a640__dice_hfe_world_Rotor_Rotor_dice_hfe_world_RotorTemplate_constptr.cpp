// FUNCTION: BF2 0x63a640
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_Rotor_Rotor_dice_hfe_world_RotorTemplate_constptr (0x63a640)

struct Sub250 { float f0; float f4; float f8; Sub250() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0xf8]; };
struct Base1 { virtual void f1(); };

struct Ctor { Ctor(); };

extern "C" void fn_68a600(void*, long, long);

class Klass_63a640 : public Ctor, public Base0, public Base1 {
public:
    char _pad0x238[0x130];
    bool m_0x238;
    int m_0x23c;
    int m_0x240;
    float m_0x244;
    void* m_0x248;
    Sub250 m_0x250;
    Klass_63a640();
};

Klass_63a640::Klass_63a640() : Ctor(), m_0x238(true), m_0x23c(0xffffffff), m_0x240(0x40400000), m_0x244(0.0f), m_0x248(0), m_0x250() { fn_68a600(this, 0x1802, 0); }

// REVERSED_FUNCTION: dice_hfe_world_Rotor_Rotor_dice_hfe_world_RotorTemplate_constptr (0x63a640)
