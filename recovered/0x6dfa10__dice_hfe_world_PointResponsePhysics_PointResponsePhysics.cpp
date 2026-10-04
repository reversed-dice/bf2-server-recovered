// FUNCTION: BF2 0x6dfa10
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_PointResponsePhysics_PointResponsePhysics (0x6dfa10)

struct Sub58 { volatile float f0; volatile float f4; volatile float f8; Sub58() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub64 { float f0; float f4; float f8; Sub64() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub70 { float f0; float f4; float f8; Sub70() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub7c { float f0; float f4; float f8; Sub7c() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub90 { float f0; float f4; float f8; Sub90() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); };

struct Ctor { Ctor(); };

class Klass_6dfa10 : public Ctor, public Base0 {
public:
    char _pad0x40[0x38];
    int m_0x40;
    int m_0x44;
    int m_0x48;
    void* m_0x50;
    Sub58 m_0x58;
    Sub64 m_0x64;
    Sub70 m_0x70;
    Sub7c m_0x7c;
    float m_0x88;
    float m_0x8c;
    Sub90 m_0x90;
    int m_0x9c;
    int m_0xa0;
    bool m_0xa4;
    int m_0xa8;
    float m_0xac;
    Klass_6dfa10();
};

Klass_6dfa10::Klass_6dfa10() : Ctor(), m_0x40(0x1), m_0x44(0), m_0x48(0xbf800000), m_0x50(0), m_0x58(), m_0x64(), m_0x70(), m_0x7c(), m_0x88(0.0f), m_0x8c(0.0f), m_0x90(), m_0x9c(0), m_0xa0(0), m_0xa4(false), m_0xa8(0), m_0xac(0.0f) { }

// REVERSED_FUNCTION: dice_hfe_world_PointResponsePhysics_PointResponsePhysics (0x6dfa10)
