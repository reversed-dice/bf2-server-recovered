// FUNCTION: BF2 0x5c2530
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x58];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5c2530(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_getHasTurretIcon (0x5c2530)
