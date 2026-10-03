// FUNCTION: BF2 0x7018c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7018c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_getClusterSize_const (0x7018c0)
