// FUNCTION: BF2 0x706640
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x46];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x706640(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapClusterEditable_getSimulateWater (0x706640)
