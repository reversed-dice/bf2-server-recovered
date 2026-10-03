// FUNCTION: BF2 0x4ce860
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4ce860(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ServerVoteManager_getEnableMapVote_const (0x4ce860)
