// FUNCTION: BF2 0x4ce870
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x4ce870(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ServerVoteManager_setEnableMapVote_bool (0x4ce870)
