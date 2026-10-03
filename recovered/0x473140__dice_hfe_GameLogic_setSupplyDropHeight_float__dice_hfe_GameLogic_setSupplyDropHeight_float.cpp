// FUNCTION: BF2 0x473140
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x3a4];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x473140(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setSupplyDropHeight_float (0x473140)
