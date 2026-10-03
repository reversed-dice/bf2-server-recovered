// FUNCTION: BF2 0x6f9310
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xcc];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x6f9310(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Heightmap_getMaterialScale_const (0x6f9310)
