// FUNCTION: BF2 0x69d900
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xc];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x69d900(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_QuadTreeCuller_getNumberOfObjects (0x69d900)
