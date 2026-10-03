// FUNCTION: BF2 0x5c2590
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x5b];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5c2590(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_getIsCoDriver (0x5c2590)
