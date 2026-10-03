// FUNCTION: BF2 0x700b70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x700b70(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_getPrimaryHeightmap_const (0x700b70)
