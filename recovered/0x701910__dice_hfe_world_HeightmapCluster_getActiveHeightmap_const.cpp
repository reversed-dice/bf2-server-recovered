// FUNCTION: BF2 0x701910
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x701910(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_getActiveHeightmap_const (0x701910)
