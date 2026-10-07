// FUNCTION: BF2 0x7018f0
namespace dice { namespace hfe { namespace world {
struct HC { char pad[0x28]; int m_clusterSize; char pad2[0xc]; float m_heightmapSize; };
int pad0_0x7018f0(HC* p) { return (int)p->m_heightmapSize * p->m_clusterSize; }
int pad1_0x7018f0(HC* p) { return (int)p->m_heightmapSize * p->m_clusterSize; }
int get_0x7018f0(HC* p) { return (int)p->m_heightmapSize * p->m_clusterSize; }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_getWorldSize_const (0x7018f0)
