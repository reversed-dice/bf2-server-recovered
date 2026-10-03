// FUNCTION: BF2 0x5fc220
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x160];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5fc220(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_MultiFireComp_getRef (0x5fc220)
