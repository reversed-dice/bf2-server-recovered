// FUNCTION: BF2 0x6f8290
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_SoldierResponsePhysics_SoldierResponsePhysics (0x6f8290)

struct Subb4 { float f0; float f4; float f8; Subb4() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Subc0 { float f0; float f4; float f8; Subc0() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Subcc { float f0; float f4; float f8; Subcc() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Subd8 { float f0; float f4; float f8; Subd8() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sube4 { float f0; float f4; float f8; Sube4() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub10c { float f0; float f4; float f8; Sub10c() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); };

struct Ctor { Ctor(); };

class Klass_6f8290 : public Ctor, public Base0 {
public:
    char _pad0xb0[0xa8];
    int m_0xb0;
    Subb4 m_0xb4;
    Subc0 m_0xc0;
    Subcc m_0xcc;
    Subd8 m_0xd8;
    Sube4 m_0xe4;
    int m_0xf0;
    int m_0xf4;
    float m_0xf8;
    float m_0xfc;
    bool m_0x100;
    bool m_0x101;
    int m_0x104;
    int m_0x108;
    Sub10c m_0x10c;
    bool m_0x118;
    bool m_0x119;
    bool m_0x11a;
    bool m_0x11b;
    Klass_6f8290();
};

Klass_6f8290::Klass_6f8290() : Ctor(), m_0xb0(0x1), m_0xb4(), m_0xc0(), m_0xcc(), m_0xd8(), m_0xe4(), m_0xf0(0), m_0xf4(0x3f800000), m_0xf8(0.0f), m_0xfc(0.0f), m_0x100(false), m_0x101(true), m_0x104(0), m_0x108(0), m_0x10c(), m_0x118(false), m_0x119(false), m_0x11a(false), m_0x11b(false) { }

// REVERSED_FUNCTION: dice_hfe_world_SoldierResponsePhysics_SoldierResponsePhysics (0x6f8290)
