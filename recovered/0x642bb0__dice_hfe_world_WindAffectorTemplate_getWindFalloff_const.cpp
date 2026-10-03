// FUNCTION: BF2 0x642bb0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    float m_v;
    float get() { return m_v; }
};
float get_0x642bb0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffectorTemplate_getWindFalloff_const (0x642bb0)
