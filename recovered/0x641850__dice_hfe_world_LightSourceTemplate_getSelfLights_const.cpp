// FUNCTION: BF2 0x641850
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x70];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x641850(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getSelfLights_const (0x641850)
