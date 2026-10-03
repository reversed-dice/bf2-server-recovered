// FUNCTION: BF2 0x4a2940
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x405];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x4a2940(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_Player_getTargetOfVote (0x4a2940)
