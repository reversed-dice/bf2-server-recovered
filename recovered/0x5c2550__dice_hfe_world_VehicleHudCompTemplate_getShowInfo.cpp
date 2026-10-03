// FUNCTION: BF2 0x5c2550
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x5a];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5c2550(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_getShowInfo (0x5c2550)
