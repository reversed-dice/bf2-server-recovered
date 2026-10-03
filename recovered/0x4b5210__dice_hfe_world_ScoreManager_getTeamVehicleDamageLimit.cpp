// FUNCTION: BF2 0x4b5210
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb0];
    float m_v;
    float get() { return m_v; }
};
float get_0x4b5210(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_getTeamVehicleDamageLimit (0x4b5210)
