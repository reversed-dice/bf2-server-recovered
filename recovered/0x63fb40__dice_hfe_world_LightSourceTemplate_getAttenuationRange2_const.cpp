// FUNCTION: BF2 0x63fb40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x9c];
    float m_v;
    float get() { return m_v; }
};
float get_0x63fb40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getAttenuationRange2_const (0x63fb40)
