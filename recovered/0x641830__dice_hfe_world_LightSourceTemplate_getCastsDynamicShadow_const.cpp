// FUNCTION: BF2 0x641830
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x6e];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x641830(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getCastsDynamicShadow_const (0x641830)
