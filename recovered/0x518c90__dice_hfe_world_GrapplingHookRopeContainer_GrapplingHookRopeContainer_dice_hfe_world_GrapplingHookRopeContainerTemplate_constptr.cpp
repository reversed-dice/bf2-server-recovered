// FUNCTION: BF2 0x518c90
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_world_GrapplingHookRopeContainer_GrapplingHookRopeContainer_dice_hfe_world_GrapplingHookRopeContainerTemplate_constptr (0x518c90)

struct Sub638 { volatile float f0; volatile float f4; volatile float f8; Sub638() : f0(0.0f), f4(0.0f), f8(0.0f) {} };
struct Sub644 { float f0; float f4; float f8; Sub644() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0xf8]; };
struct Base1 { virtual void f1(); char _pad[0x130]; };
struct Base2 { virtual void f2(); };
struct Base3 { virtual void f3(); };

struct Ctor { Ctor(); };

extern "C" void fn_68a600(void*, long, long);

class Klass_518c90 : public Ctor, public Base0, public Base1, public Base2, public Base3 {
public:
    char _pad0x5fc[0x3b4];
    int m_0x5fc;
    int m_0x600;
    void* m_0x608;
    void* m_0x610;
    void* m_0x618;
    void* m_0x620;
    int m_0x628;
    char _pad0x634[0x8];
    int m_0x634;
    Sub638 m_0x638;
    Sub644 m_0x644;
    char _pad0x654[0x4];
    int m_0x654;
    float m_0x658;
    float m_0x65c;
    float m_0x660;
    float m_0x664;
    int m_0x668;
    int m_0x66c;
    int m_0x670;
    Klass_518c90(long a0);
};

Klass_518c90::Klass_518c90(long a0) : Ctor(), m_0x5fc(0x1), m_0x600(0x3d088889), m_0x608((void*)a0), m_0x610(0), m_0x618(0), m_0x620(0), m_0x628(0), m_0x634(0x3f000000), m_0x638(), m_0x644(), m_0x654(0xbf800000), m_0x658(0.0f), m_0x65c(0.0f), m_0x660(0.0f), m_0x664(0.0f), m_0x668(0x3ecccccd), m_0x66c(0x4), m_0x670(0x4) { fn_68a600(this, 0x2000, 0); }

// REVERSED_FUNCTION: dice_hfe_world_GrapplingHookRopeContainer_GrapplingHookRopeContainer_dice_hfe_world_GrapplingHookRopeContainerTemplate_constptr (0x518c90)
