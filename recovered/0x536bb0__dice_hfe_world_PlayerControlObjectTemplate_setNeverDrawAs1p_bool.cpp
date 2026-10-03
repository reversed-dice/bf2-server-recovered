// FUNCTION: BF2 0x536bb0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x3ce];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x536bb0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_setNeverDrawAs1p_bool (0x536bb0)
