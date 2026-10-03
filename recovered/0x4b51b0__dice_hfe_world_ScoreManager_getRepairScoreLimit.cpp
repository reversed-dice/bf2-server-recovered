// FUNCTION: BF2 0x4b51b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xa4];
    float m_v;
    float get() { return m_v; }
};
float get_0x4b51b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_getRepairScoreLimit (0x4b51b0)
