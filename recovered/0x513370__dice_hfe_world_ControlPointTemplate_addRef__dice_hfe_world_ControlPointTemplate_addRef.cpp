// FUNCTION: BF2 0x513370
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x200];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_512(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_addRef (512)
