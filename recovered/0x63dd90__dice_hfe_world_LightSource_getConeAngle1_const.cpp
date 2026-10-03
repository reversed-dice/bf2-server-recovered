// FUNCTION: BF2 0x63dd90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x25c];
    float m_v;
    float get() { return m_v; }
};
float get_0x63dd90(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSource_getConeAngle1_const (0x63dd90)
