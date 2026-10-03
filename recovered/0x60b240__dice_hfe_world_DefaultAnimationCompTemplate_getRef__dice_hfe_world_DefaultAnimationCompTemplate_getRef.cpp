// FUNCTION: BF2 0x60b240
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x14];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x60b240(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationCompTemplate_getRef (0x60b240)
