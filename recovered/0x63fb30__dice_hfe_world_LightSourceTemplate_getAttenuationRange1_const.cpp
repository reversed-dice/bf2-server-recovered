// FUNCTION: BF2 0x63fb30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x98];
    float m_v;
    float get() { return m_v; }
};
float get_0x63fb30(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getAttenuationRange1_const (0x63fb30)
