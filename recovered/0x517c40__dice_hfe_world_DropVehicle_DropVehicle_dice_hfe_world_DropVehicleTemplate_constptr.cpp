// BF2_FLAGS: -fno-optimize-sibling-calls
// FUNCTION: BF2 0x517c40
// dice_hfe_world_DropVehicle_DropVehicle_dice_hfe_world_DropVehicleTemplate_constptr (0x517c40)

struct Sub25c { float f0; float f4; float f8; Sub25c() : f0(0.0f), f4(0.0f), f8(0.0f) {} };

struct Base0 { virtual void f0(); char _pad[0xf8]; };
struct Base1 { virtual void f1(); };

struct Ctor { Ctor(); };

extern "C" void fn_68a600(void*, long, long);

class Klass_517c40 : public Ctor, public Base0, public Base1 {
public:
    char _pad0x230[0x128];
    void* m_0x230;
    char _pad0x240[0x8];
    void* m_0x240;
    int m_0x248;
    bool m_0x24c;
    int m_0x250;
    int m_0x254;
    bool m_0x258;
    bool m_0x259;
    Sub25c m_0x25c;
    Klass_517c40(long a0);
};

Klass_517c40::Klass_517c40(long a0) : Ctor(), m_0x240(0), m_0x248(0), m_0x24c(false), m_0x250(0), m_0x254(0x1), m_0x258(false), m_0x259(false), m_0x25c() { fn_68a600(this, 0x800, 0); m_0x230 = (void*)a0; }

// REVERSED_FUNCTION: dice_hfe_world_DropVehicle_DropVehicle_dice_hfe_world_DropVehicleTemplate_constptr (0x517c40)
