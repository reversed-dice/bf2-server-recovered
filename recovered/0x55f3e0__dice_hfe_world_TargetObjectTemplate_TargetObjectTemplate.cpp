// FUNCTION: BF2 0x55f3e0
// dice_hfe_world_TargetObjectTemplate_TargetObjectTemplate (0x55f3e0)

struct Base0 { virtual void f0(); char _pad[0x8]; };
struct Base1 { virtual void f1(); char _pad[0x50]; };
struct Base2 { virtual void f2(); char _pad[0x158]; };
struct Base3 { virtual void f3(); };

struct Ctor { Ctor(); };

extern "C" void fn_55f340(void*, float);
extern "C" void fn_69f270(void*, long, long);

class Klass_55f3e0 : public Ctor, public Base0, public Base1, public Base2, public Base3 {
public:
    char _pad0x1f4[0x24];
    int m_0x1f4;
    float m_0x1f8;
    char _pad0x200[0x4];
    bool m_0x200;
    bool m_0x201;
    int m_0x204;
    Klass_55f3e0();
};

Klass_55f3e0::Klass_55f3e0() : Ctor(), m_0x1f4(0x2), m_0x1f8(5.0f), m_0x200(false), m_0x201(false), m_0x204(0) { fn_55f340(this, 5.0f); fn_69f270(this, 0x40, 0); }

// REVERSED_FUNCTION: dice_hfe_world_TargetObjectTemplate_TargetObjectTemplate (0x55f3e0)
