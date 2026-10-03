// FUNCTION: BF2 0x605cd0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x71];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x605cd0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_setAllowTargetSeek_bool (0x605cd0)
