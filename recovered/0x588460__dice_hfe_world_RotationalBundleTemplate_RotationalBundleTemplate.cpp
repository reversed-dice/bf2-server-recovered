// FUNCTION: BF2 0x588460
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_RotationalBundleTemplate_RotationalBundleTemplate (0x588460)

struct Sub1f4 { volatile float f0; volatile float f4; volatile float f8; Sub1f4() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub200 { float f0; float f4; float f8; Sub200() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub20c { float f0; float f4; float f8; Sub20c() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub218 { float f0; float f4; float f8; Sub218() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub224 { float f0; float f4; float f8; Sub224() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub230 { float f0; float f4; float f8; Sub230() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub23c { float f0; float f4; float f8; Sub23c() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub248 { float f0; float f4; float f8; Sub248() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0x8]; };
struct Base1 { virtual void f1(); char _pad[0x50]; };
struct Base2 { virtual void f2(); char _pad[0x158]; };
struct Base3 { virtual void f3(); };

struct Ctor { Ctor(); };

class Klass_588460 : public Ctor, public Base0, public Base1, public Base2, public Base3 {
public:
    char _pad0x1f4[0x24];
    Sub1f4 m_0x1f4;
    Sub200 m_0x200;
    Sub20c m_0x20c;
    Sub218 m_0x218;
    Sub224 m_0x224;
    Sub230 m_0x230;
    Sub23c m_0x23c;
    Sub248 m_0x248;
    int m_0x254;
    int m_0x258;
    int m_0x25c;
    bool m_0x260;
    bool m_0x261;
    bool m_0x262;
    bool m_0x263;
    bool m_0x264;
    bool m_0x265;
    bool m_0x266;
    bool m_0x267;
    float m_0x268;
    bool m_0x26c;
    bool m_0x26d;
    float m_0x270;
    float m_0x274;
    float m_0x278;
    float m_0x27c;
    float m_0x280;
    float m_0x284;
    bool m_0x288;
    Klass_588460();
};

Klass_588460::Klass_588460() : Ctor(), m_0x1f4(), m_0x200(), m_0x20c(), m_0x218(), m_0x224(), m_0x230(), m_0x23c(), m_0x248(), m_0x254(0x40), m_0x258(0x40), m_0x25c(0x40), m_0x260(false), m_0x261(false), m_0x262(false), m_0x263(false), m_0x264(false), m_0x265(false), m_0x266(false), m_0x267(false), m_0x268(0.0f), m_0x26c(false), m_0x26d(false), m_0x270(0.0f), m_0x274(0.0f), m_0x278(0.0f), m_0x27c(0.0f), m_0x280(0.0f), m_0x284(0.0f), m_0x288(false) { }

// REVERSED_FUNCTION: dice_hfe_world_RotationalBundleTemplate_RotationalBundleTemplate (0x588460)
