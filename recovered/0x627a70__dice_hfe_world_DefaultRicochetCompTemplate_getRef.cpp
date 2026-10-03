// FUNCTION: BF2 0x627a70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x627a70(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultRicochetCompTemplate_getRef (0x627a70)
