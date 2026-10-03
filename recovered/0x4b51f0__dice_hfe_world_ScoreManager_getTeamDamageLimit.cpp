// FUNCTION: BF2 0x4b51f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xac];
    float m_v;
    float get() { return m_v; }
};
float get_0x4b51f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_getTeamDamageLimit (0x4b51f0)
