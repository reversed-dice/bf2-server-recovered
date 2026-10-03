// FUNCTION: BF2 0x616330
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x368];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x616330(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_setCountHit_bool (0x616330)
