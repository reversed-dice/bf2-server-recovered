// FUNCTION: BF2 0x521500
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x304];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x521500(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_setVehicleCategory_dice_hfe_world_VehicleCategory (0x521500)
