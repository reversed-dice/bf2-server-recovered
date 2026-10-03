// FUNCTION: BF2 0x5c2500
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x5e];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x5c2500(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_setStandardHelpEnabled_bool (0x5c2500)
