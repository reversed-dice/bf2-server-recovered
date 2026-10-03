// FUNCTION: BF2 0x6162b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2c0];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x6162b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getTeam (0x6162b0)
