// FUNCTION: BF2 0x521540
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x308];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x521540(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_setControlsCategory_dice_hfe_world_VehicleCategory (0x521540)
