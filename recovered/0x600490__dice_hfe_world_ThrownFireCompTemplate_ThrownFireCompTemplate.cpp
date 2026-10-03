// FUNCTION: BF2 0x600490
// dice_hfe_world_ThrownFireCompTemplate_ThrownFireCompTemplate (0x600490)

struct Subb4 { float f0; float f4; float f8; Subb4() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); };
struct Base1 { virtual void f1(); };

struct Ctor { Ctor(); };

extern "C" void fn_5ffec0(void*, float);
extern "C" void fn_5ffee0(void*, float);

class Klass_600490 : public Ctor, public Base0, public Base1 {
public:
    char _pad0x8c[0x7c];
    int m_0x8c;
    int m_0x90;
    int m_0x94;
    int m_0x98;
    int m_0x9c;
    char _pad0xb0[0x10];
    float m_0xb0;
    Subb4 m_0xb4;
    Klass_600490();
};

Klass_600490::Klass_600490() : Ctor(), m_0x8c(0x1), m_0x90(0x3f800000), m_0x94(0x3d088889), m_0x98(0x3e4ccccd), m_0x9c(0x6), m_0xb0(0.0f), m_0xb4() { fn_5ffec0(this, 0.0f); fn_5ffee0(this, 0.0f); }

// REVERSED_FUNCTION: dice_hfe_world_ThrownFireCompTemplate_ThrownFireCompTemplate (0x600490)
