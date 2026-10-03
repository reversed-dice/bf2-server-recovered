// FUNCTION: BF2 0x4b5180
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xa0];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x4b5180(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_setHealScoreLimit_float (0x4b5180)
