// FUNCTION: BF2 0x6ffc60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x3c];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6ffc60(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_getUsePhongNormalInterpolation_const (0x6ffc60)
