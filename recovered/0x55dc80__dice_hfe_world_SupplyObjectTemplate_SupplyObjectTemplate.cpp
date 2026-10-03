// FUNCTION: BF2 0x55dc80
// dice_hfe_world_SupplyObjectTemplate_SupplyObjectTemplate (0x55dc80)

struct Sub228 { void* f0; void* f8; void* f10; Sub228() : f0(0), f8(0), f10(0) {} };

struct Base0 { virtual void f0(); char _pad[0x8]; };
struct Base1 { virtual void f1(); char _pad[0x50]; };
struct Base2 { virtual void f2(); char _pad[0x158]; };
struct Base3 { virtual void f3(); };

struct Ctor { Ctor(); };

extern "C" void fn_69f270(void*, long, long);

class Klass_55dc80 : public Ctor, public Base0, public Base1, public Base2, public Base3 {
public:
    char _pad0x1f4[0x24];
    int m_0x1f4;
    int m_0x1f8;
    bool m_0x1fc;
    bool m_0x1fd;
    float m_0x200;
    float m_0x204;
    float m_0x208;
    float m_0x20c;
    int m_0x210;
    int m_0x214;
    float m_0x218;
    bool m_0x21c;
    int m_0x220;
    bool m_0x224;
    Sub228 m_0x228;
    bool m_0x240;
    Klass_55dc80();
};

Klass_55dc80::Klass_55dc80() : Ctor(), m_0x1f4(0x40000000), m_0x1f8(0), m_0x1fc(false), m_0x1fd(true), m_0x200(0.0f), m_0x204(0.0f), m_0x208(0.0f), m_0x20c(0.0f), m_0x210(0xbf800000), m_0x214(0xbf800000), m_0x218(0.0f), m_0x21c(false), m_0x220(0xffffffff), m_0x224(false), m_0x228(), m_0x240(false) { fn_69f270(this, 0x40, 0); }

// REVERSED_FUNCTION: dice_hfe_world_SupplyObjectTemplate_SupplyObjectTemplate (0x55dc80)
