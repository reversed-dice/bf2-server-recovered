// FUNCTION: BF2 0x4bda00
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_SpawnPointTemplate_SpawnPointTemplate (0x4bda00)

struct Sub74 { float f0; int f4; float f8; Sub74() : f0(0.0f), f4(0x3f828f5c), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0x8]; };
struct Base1 { virtual void f1(); char _pad[0x50]; };
struct Base2 { virtual void f2(); };

struct Ctor { Ctor(); };

extern "C" void fn_69f270(void*, long, long);

class Klass_4bda00 : public Ctor, public Base0, public Base1, public Base2 {
public:
    int m_0x70;
    Sub74 m_0x74;
    float m_0x80;
    int m_0x84;
    int m_0x88;
    bool m_0x8c;
    bool m_0x8d;
    bool m_0x8e;
    bool m_0x8f;
    int m_0x90;
    bool m_0x94;
    bool m_0x95;
    bool m_0x96;
    bool m_0x97;
    Klass_4bda00();
};

Klass_4bda00::Klass_4bda00() : Ctor(), m_0x70(0x1), m_0x74(), m_0x80(0.0f), m_0x84(0), m_0x88(0xffffffff), m_0x8c(true), m_0x8d(false), m_0x8e(false), m_0x8f(false), m_0x90(0xbf800000), m_0x94(false), m_0x95(false), m_0x96(false), m_0x97(false) { fn_69f270(this, 0x50, 0); }

// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_SpawnPointTemplate (0x4bda00)
