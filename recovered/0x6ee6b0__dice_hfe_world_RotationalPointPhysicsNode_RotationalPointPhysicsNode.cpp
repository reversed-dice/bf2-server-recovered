// FUNCTION: BF2 0x6ee6b0
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_RotationalPointPhysicsNode_RotationalPointPhysicsNode (0x6ee6b0)

struct Suba0 { float f0; float f4; float f8; Suba0() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Subac { float f0; float f4; float f8; Subac() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Subb8 { float f0; float f4; float f8; Subb8() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Subc4 { float f0; float f4; float f8; Subc4() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Subd0 { float f0; float f4; float f8; Subd0() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sube0 { float f0; float f4; float f8; Sube0() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); };

struct Ctor { Ctor(); };

extern "C" void fn_6dd540(void*);

class Klass_6ee6b0 : public Ctor, public Base0 {
public:
    char _pad0x9c[0x94];
    int m_0x9c;
    Suba0 m_0xa0;
    Subac m_0xac;
    Subb8 m_0xb8;
    Subc4 m_0xc4;
    Subd0 m_0xd0;
    int m_0xdc;
    Sube0 m_0xe0;
    Klass_6ee6b0();
};

Klass_6ee6b0::Klass_6ee6b0() : Ctor(), m_0x9c(0x1), m_0xa0(), m_0xac(), m_0xb8(), m_0xc4(), m_0xd0(), m_0xdc(0), m_0xe0() { fn_6dd540(this); }

// REVERSED_FUNCTION: dice_hfe_world_RotationalPointPhysicsNode_RotationalPointPhysicsNode (0x6ee6b0)
