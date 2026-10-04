// FUNCTION: BF2 0x50c4c0
// dice_hfe_world_AntennaObjectTemplate_AntennaObjectTemplate (0x50c4c0)

struct Base0 { virtual void f0(); char _pad[0x8]; };
struct Base1 { virtual void f1(); char _pad[0x50]; };
struct Base2 { virtual void f2(); };

struct Ctor { Ctor(); };

class Klass_50c4c0 : public Ctor, public Base0, public Base1, public Base2 {
public:
    char _pad0x1c8[0x158];
    float m_0x1c8;
    void* m_0x1d0;
    float m_0x1d8;
    float m_0x1dc;
    float m_0x1e0;
    float m_0x1e4;
    float m_0x1e8;
    float m_0x1ec;
    Klass_50c4c0();
};

Klass_50c4c0::Klass_50c4c0() : Ctor(), m_0x1c8(1.401298464324817e-45f), m_0x1d0(0), m_0x1d8(45.0f), m_0x1dc(45.0f), m_0x1e0(1.0f), m_0x1e4(0.10000000149011612f), m_0x1e8(1.0f), m_0x1ec(1.0f) { }

// REVERSED_FUNCTION: dice_hfe_world_AntennaObjectTemplate_AntennaObjectTemplate (0x50c4c0)
