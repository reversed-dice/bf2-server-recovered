// FUNCTION: BF2 0x521580
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x521580(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_setVehicleType_dice_hfe_world_VehicleType (0x521580)
