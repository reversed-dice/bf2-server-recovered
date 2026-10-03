// FUNCTION: BF2 0x60b060
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x14];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_20(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationCompTemplate_addRef (20)
