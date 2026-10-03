// FUNCTION: BF2 0x5c26b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x94];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5c26b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_getVehicleType (0x5c26b0)
