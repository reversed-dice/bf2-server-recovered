// FUNCTION: BF2 0x598130
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2ac];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x598130(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectBundle_overRideTimeToLive_bool (0x598130)
