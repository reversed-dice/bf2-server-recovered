// FUNCTION: BF2 0x58b460
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x58b460(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_RCPredicator_getFlags_const (0x58b460)
