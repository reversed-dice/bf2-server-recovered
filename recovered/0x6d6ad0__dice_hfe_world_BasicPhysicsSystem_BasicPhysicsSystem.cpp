// FUNCTION: BF2 0x6d6ad0
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_BasicPhysicsSystem_BasicPhysicsSystem (0x6d6ad0)

struct Sub10 { volatile float f0; volatile float f4; volatile float f8; Sub10() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub1c { float f0; float f4; float f8; Sub1c() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub28 { float f0; float f4; float f8; Sub28() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); };

class Klass_6d6ad0 : public Base0 {
public:
    int m_0x8;
    int m_0xc;
    Sub10 m_0x10;
    Sub1c m_0x1c;
    Sub28 m_0x28;
    int m_0x34;
    Klass_6d6ad0();
};

Klass_6d6ad0::Klass_6d6ad0() : m_0x8(0x1), m_0xc(0xc16bae14), m_0x10(), m_0x1c(), m_0x28(), m_0x34(0x447a0000) { }

// REVERSED_FUNCTION: dice_hfe_world_BasicPhysicsSystem_BasicPhysicsSystem (0x6d6ad0)
