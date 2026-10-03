// FUNCTION: BF2 0x642bd0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x3c];
    float m_v;
    float get() { return m_v; }
};
float get_0x642bd0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffectorTemplate_getWindRadialFalloff_const (0x642bd0)
