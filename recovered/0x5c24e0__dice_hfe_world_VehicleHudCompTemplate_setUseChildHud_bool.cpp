// FUNCTION: BF2 0x5c24e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x5d];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x5c24e0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_setUseChildHud_bool (0x5c24e0)
