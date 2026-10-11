// FUNCTION: BF2 0x4721d0
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_ClientGameLogic_ClientGameLogic (0x4721d0)

struct Sub490 { volatile float f0; volatile float f4; volatile float f8; Sub490() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub49c { float f0; float f4; float f8; Sub49c() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub4a8 { void* f0; void* f8; void* f10; Sub4a8() : f0(0), f8(0), f10(0) {} };

struct Base0 { virtual void f0(); };
struct Base1 { virtual void f1(); };

struct Ctor { Ctor(); };

extern "C" void fn_470fe0(void*);

class Klass_4721d0 : public Ctor, public Base0, public Base1 {
public:
    char _pad0xae[0x9e];
    bool m_0xae;
    char _pad0x48c[0x3dd];
    int m_0x48c;
    Sub490 m_0x490;
    Sub49c m_0x49c;
    Sub4a8 m_0x4a8;
    int m_0x4c0;
    int m_0x4c4;
    int m_0x4c8;
    Klass_4721d0();
};

Klass_4721d0::Klass_4721d0() : Ctor(), m_0x48c(0x1), m_0x490(), m_0x49c(), m_0x4a8(), m_0x4c0(0), m_0x4c4(0), m_0x4c8(0) { m_0xae = false; fn_470fe0(this); }

