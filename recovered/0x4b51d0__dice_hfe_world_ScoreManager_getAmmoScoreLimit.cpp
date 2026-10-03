// FUNCTION: BF2 0x4b51d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xa8];
    float m_v;
    float get() { return m_v; }
};
float get_0x4b51d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_getAmmoScoreLimit (0x4b51d0)
