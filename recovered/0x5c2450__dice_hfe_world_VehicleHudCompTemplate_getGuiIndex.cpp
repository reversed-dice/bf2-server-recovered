// FUNCTION: BF2 0x5c2450
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x8c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5c2450(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_getGuiIndex (0x5c2450)
