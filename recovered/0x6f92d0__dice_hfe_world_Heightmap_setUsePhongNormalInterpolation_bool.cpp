// FUNCTION: BF2 0x6f92d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x54];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x6f92d0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Heightmap_setUsePhongNormalInterpolation_bool (0x6f92d0)
