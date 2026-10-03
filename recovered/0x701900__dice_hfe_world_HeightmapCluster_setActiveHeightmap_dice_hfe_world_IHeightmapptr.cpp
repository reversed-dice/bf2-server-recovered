// FUNCTION: BF2 0x701900
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x701900(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_setActiveHeightmap_dice_hfe_world_IHeightmapptr (0x701900)
