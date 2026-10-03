// FUNCTION: BF2 0x616660
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x260];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x616660(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectileTemplate_getTracerInterval_const (0x616660)
