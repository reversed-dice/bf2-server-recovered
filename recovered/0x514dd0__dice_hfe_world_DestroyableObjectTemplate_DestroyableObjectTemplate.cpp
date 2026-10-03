// FUNCTION: BF2 0x514dd0
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_DestroyableObjectTemplate_DestroyableObjectTemplate (0x514dd0)

struct Sub204 { volatile float f0; volatile float f4; volatile float f8; Sub204() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub210 { float f0; float f4; float f8; Sub210() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0x8]; };
struct Base1 { virtual void f1(); char _pad[0x50]; };
struct Base2 { virtual void f2(); char _pad[0x158]; };
struct Base3 { virtual void f3(); };

struct Ctor { Ctor(); };

extern "C" void fn_69f270(void*, long, long);

class Klass_514dd0 : public Ctor, public Base0, public Base1, public Base2, public Base3 {
public:
    char _pad0x1f4[0x24];
    int m_0x1f4;
    float m_0x1f8;
    int m_0x1fc;
    bool m_0x200;
    bool m_0x201;
    Sub204 m_0x204;
    Sub210 m_0x210;
    Klass_514dd0();
};

Klass_514dd0::Klass_514dd0() : Ctor(), m_0x1f4(0x1), m_0x1f8(0.0f), m_0x1fc(0x1), m_0x200(false), m_0x201(true), m_0x204(), m_0x210() { fn_69f270(this, 0x1, 0); }

// REVERSED_FUNCTION: dice_hfe_world_DestroyableObjectTemplate_DestroyableObjectTemplate (0x514dd0)
