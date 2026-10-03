// FUNCTION: BF2 0x6165c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x295];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6165c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectileTemplate_getDamageMandownSoldiers_const (0x6165c0)
