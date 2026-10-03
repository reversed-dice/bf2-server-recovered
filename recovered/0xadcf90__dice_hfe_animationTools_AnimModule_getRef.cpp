// FUNCTION: BF2 0xadcf90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0xadcf90(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_animationTools_AnimModule_getRef (0xadcf90)
