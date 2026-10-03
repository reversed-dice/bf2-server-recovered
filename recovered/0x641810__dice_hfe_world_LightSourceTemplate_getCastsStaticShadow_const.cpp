// FUNCTION: BF2 0x641810
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x6d];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x641810(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getCastsStaticShadow_const (0x641810)
