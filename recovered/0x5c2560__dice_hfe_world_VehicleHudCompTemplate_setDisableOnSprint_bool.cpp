// FUNCTION: BF2 0x5c2560
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x62];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x5c2560(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_setDisableOnSprint_bool (0x5c2560)
