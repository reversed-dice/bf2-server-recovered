// FUNCTION: BF2 0x6418d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x73];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6418d0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getSupportsGlow (0x6418d0)
