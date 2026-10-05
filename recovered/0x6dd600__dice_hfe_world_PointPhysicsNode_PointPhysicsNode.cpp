// FUNCTION: BF2 0x6dd600
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_PointPhysicsNode_PointPhysicsNode (0x6dd600)

struct Sub2c { float f0; float f4; float f8; Sub2c() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub38 { float f0; float f4; float f8; Sub38() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub44 { float f0; float f4; float f8; Sub44() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub50 { float f0; float f4; float f8; Sub50() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub78 { volatile float f0; volatile float f4; volatile float f8; Sub78() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub84 { float f0; float f4; float f8; Sub84() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); };

struct Ctor { Ctor(); };

class Klass_6dd600 : public Ctor, public Base0 {
public:
    char _pad0x28[0x20];
    float m_0x28;
    Sub2c m_0x2c;
    Sub38 m_0x38;
    Sub44 m_0x44;
    Sub50 m_0x50;
    float m_0x5c;
    float m_0x60;
    float m_0x64;
    float m_0x68;
    bool m_0x6c;
    float m_0x70;
    int m_0x74;
    Sub78 m_0x78;
    Sub84 m_0x84;
    float m_0x90;
    bool m_0x94;
    int m_0x98;
    Klass_6dd600();
};

Klass_6dd600::Klass_6dd600() : Ctor(), m_0x28(1.401298464324817e-45f), m_0x2c(), m_0x38(), m_0x44(), m_0x50(), m_0x5c(0.0f), m_0x60(1.0f), m_0x64(1.0f), m_0x68(0.0f), m_0x6c(false), m_0x70(4.203895392974451e-44f), m_0x74(0), m_0x78(), m_0x84(), m_0x90(0.0f), m_0x94(false), m_0x98(0) { }

// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_PointPhysicsNode (0x6dd600)
