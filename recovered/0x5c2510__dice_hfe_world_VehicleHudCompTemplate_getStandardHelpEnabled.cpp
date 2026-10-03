// FUNCTION: BF2 0x5c2510
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x5e];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5c2510(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_getStandardHelpEnabled (0x5c2510)
