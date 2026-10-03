// FUNCTION: BF2 0x4b4f80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x4b4f80(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_setKill_int (0x4b4f80)
