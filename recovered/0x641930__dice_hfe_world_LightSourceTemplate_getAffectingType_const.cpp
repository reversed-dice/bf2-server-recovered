// FUNCTION: BF2 0x641930
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x88];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x641930(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getAffectingType_const (0x641930)
