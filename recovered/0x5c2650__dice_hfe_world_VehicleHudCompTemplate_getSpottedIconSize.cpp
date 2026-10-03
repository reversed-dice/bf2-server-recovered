// FUNCTION: BF2 0x5c2650
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x88];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5c2650(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_getSpottedIconSize (0x5c2650)
