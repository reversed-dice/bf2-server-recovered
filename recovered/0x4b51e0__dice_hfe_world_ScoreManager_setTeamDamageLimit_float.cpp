// FUNCTION: BF2 0x4b51e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xac];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x4b51e0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_setTeamDamageLimit_float (0x4b51e0)
