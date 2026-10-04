// FUNCTION: BF2 0x5686c0
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_TurnableRemoteControlledObject_TurnableRemoteControlledObject_dice_hfe_world_TurnableRemoteControlledObjectTemplate_constptr (0x5686c0)

struct Sub270 { volatile float f0; volatile float f4; volatile float f8; Sub270() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub27c { float f0; float f4; float f8; Sub27c() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub2a0 { float f0; float f4; float f8; Sub2a0() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0xf8]; };
struct Base1 { virtual void f1(); };

struct Ctor { Ctor(); };

class Klass_5686c0 : public Ctor, public Base0, public Base1 {
public:
    char _pad0x260[0x158];
    int m_0x260;
    void* m_0x268;
    Sub270 m_0x270;
    Sub27c m_0x27c;
    char _pad0x29c[0x14];
    int m_0x29c;
    Sub2a0 m_0x2a0;
    int m_0x2ac;
    Klass_5686c0(long a0);
};

Klass_5686c0::Klass_5686c0(long a0) : Ctor(), m_0x260(0x1), m_0x268((void*)a0), m_0x270(), m_0x27c(), m_0x29c(0xbf800000), m_0x2a0(), m_0x2ac(0) { }

// REVERSED_FUNCTION: dice_hfe_world_TurnableRemoteControlledObject_TurnableRemoteControlledObject_dice_hfe_world_TurnableRemoteControlledObjectTemplate_constptr (0x5686c0)
