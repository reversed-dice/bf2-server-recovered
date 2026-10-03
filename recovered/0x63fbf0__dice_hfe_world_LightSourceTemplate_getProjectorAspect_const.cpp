// FUNCTION: BF2 0x63fbf0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xec];
    float m_v;
    float get() { return m_v; }
};
float get_0x63fbf0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getProjectorAspect_const (0x63fbf0)
