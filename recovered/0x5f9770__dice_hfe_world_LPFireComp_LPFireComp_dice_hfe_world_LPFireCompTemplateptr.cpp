// FUNCTION: BF2 0x5f9770
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_LPFireComp_LPFireComp_dice_hfe_world_LPFireCompTemplateptr (0x5f9770)

struct Sub16c { volatile float f0; volatile float f4; volatile float f8; Sub16c() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub178 { float f0; float f4; float f8; Sub178() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub184 { float f0; float f4; float f8; Sub184() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0x18]; };
struct Base1 { virtual void f1(); };

struct Ctor { Ctor(); };

class Klass_5f9770 : public Ctor, public Base0, public Base1 {
public:
    char _pad0x160[0x138];
    int m_0x160;
    int m_0x164;
    bool m_0x168;
    Sub16c m_0x16c;
    Sub178 m_0x178;
    Sub184 m_0x184;
    void* m_0x190;
    Klass_5f9770(long a0);
};

Klass_5f9770::Klass_5f9770(long a0) : Ctor(), m_0x160(0x1), m_0x164(0), m_0x168(false), m_0x16c(), m_0x178(), m_0x184(), m_0x190((void*)a0) { }

// REVERSED_FUNCTION: dice_hfe_world_LPFireComp_LPFireComp_dice_hfe_world_LPFireCompTemplateptr (0x5f9770)
