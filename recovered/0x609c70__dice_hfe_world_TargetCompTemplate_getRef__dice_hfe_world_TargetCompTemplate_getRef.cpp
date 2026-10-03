// FUNCTION: BF2 0x609c70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x609c70(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetCompTemplate_getRef__dice_hfe_world_TargetCompTemplate_getRef (0x609c70)
