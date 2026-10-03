// FUNCTION: BF2 0x6075c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x80];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_128(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_MultiFireArmTargetComp_addRef (128)
