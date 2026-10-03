// FUNCTION: BF2 0x4b5200
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb0];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x4b5200(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_setTeamVehicleDamageLimit_float (0x4b5200)
