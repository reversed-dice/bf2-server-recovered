// FUNCTION: BF2 0x61f1d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x61f1d0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationComp_setDetonate_bool (0x61f1d0)
