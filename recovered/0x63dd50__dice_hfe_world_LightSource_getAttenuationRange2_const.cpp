// FUNCTION: BF2 0x63dd50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x23c];
    float m_v;
    float get() { return m_v; }
};
float get_0x63dd50(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSource_getAttenuationRange2_const (0x63dd50)
