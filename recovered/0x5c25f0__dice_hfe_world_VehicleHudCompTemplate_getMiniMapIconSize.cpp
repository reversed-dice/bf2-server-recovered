// FUNCTION: BF2 0x5c25f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x84];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5c25f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_getMiniMapIconSize (0x5c25f0)
