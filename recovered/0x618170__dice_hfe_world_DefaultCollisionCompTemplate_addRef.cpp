// FUNCTION: BF2 0x618170
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_16(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultCollisionCompTemplate_addRef (16)
