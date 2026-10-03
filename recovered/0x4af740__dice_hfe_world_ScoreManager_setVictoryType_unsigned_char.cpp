// FUNCTION: BF2 0x4af740
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb5];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x4af740(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ScoreManager_setVictoryType_unsigned_char (0x4af740)
