// FUNCTION: BF2 0x60c660
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x49];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x60c660(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilCompTemplate_setGoBackOnRecoil_bool (0x60c660)
