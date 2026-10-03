// FUNCTION: BF2 0x706660
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x48];
    float m_v;
    float get() { return m_v; }
};
float get_0x706660(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapClusterEditable_getSimulatedWaterDepth (0x706660)
