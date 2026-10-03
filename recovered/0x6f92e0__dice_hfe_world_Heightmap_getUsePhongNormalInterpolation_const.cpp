// FUNCTION: BF2 0x6f92e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x54];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6f92e0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Heightmap_getUsePhongNormalInterpolation_const (0x6f92e0)
